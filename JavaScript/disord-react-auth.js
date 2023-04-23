import React, { useState, useEffect } from "react";

const DiscordOAuth2 = () => {
  const [isAuthenticated, setIsAuthenticated] = useState(false);
  const [user, setUser] = useState(null);
  const [guilds, setGuilds] = useState([]);

  const clientId = "Client_Id";
  const redirectUri = "Callback_Url";
  const scope = "identify email guilds";

  useEffect(() => {
    const urlParams = new URLSearchParams(window.location.search);
    const code = urlParams.get("code");

    const getToken = async () => {
      if (code) {
        try {
          const response = await fetch("https://discord.com/api/oauth2/token", {
            method: "POST",
            headers: {
              "Content-Type": "application/x-www-form-urlencoded",
            },
            body: new URLSearchParams({
              client_id: clientId,
              client_secret: "Client_Secret",
              grant_type: "authorization_code",
              code: code,
              redirect_uri: redirectUri,
              scope: scope,
            }),
          });
          const data = await response.json();
          const accessToken = data.access_token;
          const refreshToken = data.refresh_token;
          const expiresIn = data.expires_in;

          localStorage.setItem("accessToken", accessToken);
          localStorage.setItem("refreshToken", refreshToken);
          localStorage.setItem(
            "tokenExpiration",
            Date.now() + expiresIn * 1000
          );

          setIsAuthenticated(true);
        } catch (error) {
          console.error(error);
          handleLogout();
        }
      }
    };

    getToken();
  }, []);

  const handleLogin = () => {
    const authorizationUrl = `https://discord.com/api/oauth2/authorize?client_id=${clientId}&redirect_uri=${encodeURIComponent(
      redirectUri
    )}&response_type=code&scope=${encodeURIComponent(scope)}`;
    window.location.href = authorizationUrl;
  };

  const handleLogout = () => {
    localStorage.removeItem("accessToken");
    localStorage.removeItem("refreshToken");
    localStorage.removeItem("tokenExpiration");
    setIsAuthenticated(false);
    setUser(null);
    setGuilds([]);
    window.location.href = "/";
  };

  useEffect(() => {
    const getUserAndGuilds = async () => {
      const accessToken = localStorage.getItem("accessToken");

      if (accessToken) {
        try {
          const userResponse = await fetch(
            "https://discord.com/api/users/@me",
            {
              headers: {
                Authorization: `Bearer ${accessToken}`,
              },
            }
          );
          const userData = await userResponse.json();
          setUser(userData);

          const guildsResponse = await fetch(
            "https://discord.com/api/users/@me/guilds",
            {
              headers: {
                Authorization: `Bearer ${accessToken}`,
              },
            }
          );
          const guildsData = await guildsResponse.json();
          const filteredGuilds = guildsData.filter(
            (guild) => guild.permissions & 0x00000020 // check if user has the MANAGE_GUILD permission
          );
          setGuilds(filteredGuilds);
        } catch (error) {
          console.error(error);
          handleLogout();
        }
      }
    };

    getUserAndGuilds();
  }, [isAuthenticated]);

  if (!isAuthenticated) {
    return (
      <div>
        <button onClick={handleLogin}>Log in with Discord</button>
      </div>
    );
  }

  return (
    <div>
      {user ? (
        <>
          <div>
            <img
              src={`https://cdn.discordapp.com/avatars/${user?.id}/${user?.avatar}.png`}
              alt="User avatar"
            />
            <p>
              {user?.username}#{user?.discriminator}
            </p>
          </div>
          {guilds.length > 0 ? (
            <ul>
              {guilds?.map((guild) => (
                <li key={guild.id}>{guild.name}</li>
              ))}
            </ul>
          ) : (
            <h3>No Guilds</h3>
          )}
          <button onClick={handleLogout}>Log out</button>
        </>
      ) : null}
    </div>
  );
};

export default DiscordOAuth2;
