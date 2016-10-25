# MCN 2016 Workshop - Raspberry Pi Video Player

## Introduction

## What is a Raspberry Pi? 

## Formatting & Installing
(We already did this part for you, but you should still install the software.)
* Install the [official SDFormatter](https://www.sdcard.org/downloads/formatter_4/) on your laptop computer.
* Reformat the SD card. [Here's how.](http://www.raspberrypi-spy.co.uk/2015/03/how-to-format-pi-sd-cards-using-sd-formatter/) Give it a name that's easy to recognize, like `RASPBERRY`.
* Install [PiBakery](http://pibakery.org/download.html) on your laptop computer. PiBakery includes a version of the Raspbian operating system for your Pi, so it's a rather large download (~2GB). 
* Download the recipe for our SD card [here](./mcn2016recipe.xml).
* Import it into PiBakery. Edit the name of the Pi. Edit your WiFi details! 
* Make sure your SD card is in, and click the `Write` icon! This will take about 10 minutes.
* When it's done, eject the card and insert it into your Pi, and plug in the power. This part will take 10-15 minutes. It's setting up your WiFi, zeroconf (Bonjour networking), file sharing, VNC (screensharing), installing the latest versions of software, creating a `Projects` folder in your home directory, and installing Adafruit's Video Looper code (which we'll dive into momentarily). When it's done, it should shutdown.

### Configuring the Video Looper
* When it shuts down, disconnect the Pi from power, and eject the SD card and put it into your computer. It will show up as a drive called `boot`. You can't see any of the Linux files from your computer, except for the `/boot` directory. We're going to edit some files here. 
	* Open `video_looper.ini` in a text editor on your laptop. It's pretty self-explanatory, but we'll want to enable (remove the `#` in front of the line) some options and comment out their alternatives (by adding a `#` in front of the line).
		* Set `file_reader = directory` instead of `usb_drive`
		* Under `[directory]`, change `path = /home/pi` to `path = /boot/videos`.
		* Save the file!
	* Make a directory on the SD card (next to `video_looper.ini`) called `videos`. Put your videos there. (Download some sample videos [here](https://github.com/jasonalderman/mcn2016-oshw-workshop/tree/master/raspberrypi/videos), if you need them.)
* Eject the card and put it back in your Pi. When you boot up, it should start playing the videos in the order it finds them in the drive.