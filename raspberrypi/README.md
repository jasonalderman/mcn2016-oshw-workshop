# MCN 2016 Workshop - Raspberry Pi Video Player

## Introduction

Since most of this is explained in the slides, [go over there](https://docs.google.com/presentation/d/1RS401AhcS4kqmuIkJyRyVsgNCxsV6TWsQi9ktDvd9yY/edit?usp=sharing). We're setting up a [Raspberry Pi](https://raspberrypi.org/), using PiBakery to install all the software we want on first boot. 

You'll need a breadboard, some jumper wires, a tactile pushbutton switch, and your Pi. 
Oh, and videos!

## Formatting & installing
(We already did this part for you, but you should still install the software.)
* Install the [official SDFormatter](https://www.sdcard.org/downloads/formatter_4/) on your laptop computer.
* Reformat the SD card. [Here's how.](http://www.raspberrypi-spy.co.uk/2015/03/how-to-format-pi-sd-cards-using-sd-formatter/) Give it a name that's easy to recognize, like `RASPBERRY`.
* Install [PiBakery](http://pibakery.org/download.html) on your laptop computer. PiBakery includes a version of the full Raspbian operating system for your Pi, so it's a rather large download (~2GB). 
* Download the recipe for our SD card [here](./mcn2016recipe.xml).
* Import it into PiBakery. Edit the name and password of the Pi. Edit your WiFi details! 
* Make sure your SD card is in, and click the `Write` icon! This will take about 10 minutes.
* When it's done, eject the card and insert it into your Pi, and plug in the power. This part will take 10-15 minutes. It's setting up your WiFi, zeroconf (Bonjour networking), file sharing, VNC (screensharing), installing the latest versions of software, creating a `Projects` folder in your home directory, and installing our push-button video code (which we'll dive into momentarily). When it's done, it should shut down.

## Setting up the videos

Don't forget to copy the `videos` directory (from this GitHub repo, or your own) onto the microSD card. From the Pi, they'll be accessible at `/boot/videos/`.

Make sure to also change the `On Every Boot` script to point to  
* the "attract mode" PNG you want to show in between video.
* the video you want to play when you push the button.

## Oh, hey, there's another file in this repository

As you can see in PiBakery, blocks can download and run "batch" shell scripts by means of a  
`curl -SLs <url of "raw file" on github goes here> | sudo bash`
  
In an earlier iteration of our workshop prep, we made a [batch script](./pi-videolooper-setup.sh) that would do a lot of the PiBakery folder creation and file-juggling setup in one fell swoop _and_ install the [Adafruit Pi Video Looper](https://learn.adafruit.com/raspberry-pi-video-looper/overview). 

You can use it as a cheatsheet if you want to make your own install script—we've left it here for educational purposes—, but it likely will not work in its current form. _(Use at your own risk!)_