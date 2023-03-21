const si = require("systeminformation");

si.networkStats()
  .then((data) => {
    const wifiStats = data.find((item) => item.iface === "WiFi");

    if (!wifiStats) {
      console.log("WiFi interface not found");
      return;
    }

    console.log(`Total received: ${formatBytes(data[0].rx_bytes)}`);
    console.log(`Total sent: ${formatBytes(data[0].tx_bytes)}`);
  })
  .catch((err) => {
    console.error(err);
  });

function formatBytes(bytes, decimals = 2) {
  if (bytes === 0) return "0 Bytes";

  const k = 1024;
  const dm = decimals < 0 ? 0 : decimals;
  const sizes = ["Bytes", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB"];

  const i = Math.floor(Math.log(bytes) / Math.log(k));

  return parseFloat((bytes / Math.pow(k, i)).toFixed(dm)) + " " + sizes[i];
}
