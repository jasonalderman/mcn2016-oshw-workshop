from gpiozero import Button
from signal import pause
from subprocess import call
import sys

# This python script takes two arguments:
# 1. an image to put on the screen when video is not playing
# 2. a video to play when the button is pressed
# It uses gpiozero to listen for the button press, 
#  omxplayer to play the video, 
#  and fbi to show the "attract mode" image.

def press_button():
    print("Button pressed")
    if not isPlaying:
        play_video();

def play_video():
    print("Playing video...")
    isPlaying = True
    call(['omxplayer',sys.argv[2]])
    print("Done video.")
    isPlaying = False

# declare variables
button = Button(2)
isPlaying = False

button.when_pressed = press_button

# fbi puts an image on the screen, and must run as sudo
call(['fbi','-T','1','--noverbose','-a',sys.argv[1]])

pause()

