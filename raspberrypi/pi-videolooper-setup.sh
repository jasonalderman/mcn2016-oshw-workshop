#!/bin/sh

# Error out if anything fails.
set -e

# Make sure script is run as root.
if [ "$(id -u)" != "0" ]; then
  echo "Must be run as root with sudo! Try: sudo ./install.sh"
  exit 1
fi

echo "Making a Projects Folder"
echo "=========================="
mkdir /home/pi/Projects
cd /home/pi/Projects

echo "Installing Adafruit Pi Video Looper"
echo "=========================="
git clone https://github.com/adafruit/pi_video_looper.git
cd ./pi_video_looper
./install.sh

echo "ALL DONE BYE NOW ;)"
