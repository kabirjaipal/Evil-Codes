const mongoose = require("mongoose");

// Create a Mongoose schema for the playlist item
const playlistItemSchema = new mongoose.Schema({
  title: String,
  url: String,
});

// Create a Mongoose schema for the playlist
const playlistSchema = new mongoose.Schema({
  name: String,
  userId: String,
  items: [playlistItemSchema],
});

// Create a Mongoose model for the playlist
const PlaylistModel = mongoose.model("Playlist", playlistSchema);

class Playlist {
  constructor() {
    this.playlists = [];
  }

  async createPlaylist(name, userId) {
    const playlist = new PlaylistModel({
      name,
      userId,
      items: [],
    });
    await playlist.save();
    this.playlists.push(playlist);
  }

  async deletePlaylistByName(name) {
    const playlist = await PlaylistModel.findOne({ name });
    if (playlist) {
      await PlaylistModel.deleteOne({ _id: playlist._id });
      this.playlists = this.playlists.filter(
        (pl) => pl._id.toString() !== playlist._id.toString()
      );
      return true;
    }
    return false;
  }

  async deletePlaylistById(id) {
    const playlist = await PlaylistModel.findById(id);
    if (playlist) {
      await PlaylistModel.deleteOne({ _id: playlist._id });
      this.playlists = this.playlists.filter(
        (pl) => pl._id.toString() !== playlist._id.toString()
      );
      return true;
    }
    return false;
  }

  async addSongToPlaylistByName(name, title, url) {
    const playlist = await PlaylistModel.findOne({ name });
    if (playlist) {
      playlist.items.push({ title, url });
      await playlist.save();
      return true;
    }
    return false;
  }

  async addSongToPlaylistById(id, title, url) {
    const playlist = await PlaylistModel.findById(id);
    if (playlist) {
      playlist.items.push({ title, url });
      await playlist.save();
      return true;
    }
    return false;
  }

  async removeSongFromPlaylistByName(name, songIndex) {
    const playlist = await PlaylistModel.findOne({ name });
    if (playlist) {
      if (songIndex >= 0 && songIndex < playlist.items.length) {
        playlist.items.splice(songIndex, 1);
        await playlist.save();
        return true;
      }
    }
    return false;
  }

  async removeSongFromPlaylistById(id, songIndex) {
    const playlist = await PlaylistModel.findById(id);
    if (playlist) {
      if (songIndex >= 0 && songIndex < playlist.items.length) {
        playlist.items.splice(songIndex, 1);
        await playlist.save();
        return true;
      }
    }
    return false;
  }

  async clearPlaylistByName(name) {
    const playlist = await PlaylistModel.findOne({ name });
    if (playlist) {
      playlist.items = [];
      await playlist.save();
      return true;
    }
    return false;
  }

  async clearPlaylistById(id) {
    const playlist = await PlaylistModel.findById(id);
    if (playlist) {
      playlist.items = [];
      await playlist.save();
      return true;
    }
    return false;
  }

  async getPlaylistByName(name) {
    return PlaylistModel.findOne({ name });
  }

  async getPlaylistById(id) {
    return PlaylistModel.findById(id);
  }
}

// module.exports = Playlist;

const Discord = require("discord.js");
// const Playlist = require("./Playlist");

const client = new Discord.Client();
const playlist = new Playlist();

client.on("ready", () => {
  console.log(`Logged in as ${client.user.tag}`);
});

client.on("message", async (message) => {
  if (!message.content.startsWith("!playlist")) return;

  const args = message.content.slice("!playlist".length).trim().split(" ");
  const command = args.shift();

  if (command === "create") {
    const playlistName = args.join(" ");
    const userId = message.author.id;
    await playlist.createPlaylist(playlistName, userId);
    message.channel.send(`Playlist '${playlistName}' created.`);
  }

  if (command === "delete") {
    const playlistName = args.join(" ");
    const success = await playlist.deletePlaylistByName(playlistName);
    if (success) {
      message.channel.send(`Playlist '${playlistName}' deleted.`);
    } else {
      message.channel.send(`Playlist '${playlistName}' not found.`);
    }
  }

  if (command === "add") {
    const playlistName = args[0];
    const songTitle = args.slice(1).join(" ");
    const success = await playlist.addSongToPlaylistByName(
      playlistName,
      songTitle,
      ""
    );
    if (success) {
      message.channel.send(
        `Song '${songTitle}' added to playlist '${playlistName}'.`
      );
    } else {
      message.channel.send(`Playlist '${playlistName}' not found.`);
    }
  }

  if (command === "remove") {
    const playlistName = args[0];
    const songIndex = parseInt(args[1]) - 1;
    const success = await playlist.removeSongFromPlaylistByName(
      playlistName,
      songIndex
    );
    if (success) {
      message.channel.send(
        `Song at index ${
          songIndex + 1
        } removed from playlist '${playlistName}'.`
      );
    } else {
      message.channel.send(`Invalid song index or playlist not found.`);
    }
  }

  if (command === "clear") {
    const playlistName = args.join(" ");
    const success = await playlist.clearPlaylistByName(playlistName);
    if (success) {
      message.channel.send(`Playlist '${playlistName}' cleared.`);
    } else {
      message.channel.send(`Playlist '${playlistName}' not found.`);
    }
  }

  if (command === "list") {
    const playlistName = args.join(" ");
    const playlistData = await playlist.getPlaylistByName(playlistName);
    if (playlistData) {
      const items = playlistData.items;
      if (items.length === 0) {
        message.channel.send(`Playlist '${playlistName}' is empty.`);
      } else {
        let response = `Playlist '${playlistName}':\n`;
        items.forEach((item, index) => {
          response += `${index + 1}. ${item.title}\n`;
        });
        message.channel.send(response);
      }
    } else {
      message.channel.send(`Playlist '${playlistName}' not found.`);
    }
  }
});

client.login("your_discord_bot_token");
