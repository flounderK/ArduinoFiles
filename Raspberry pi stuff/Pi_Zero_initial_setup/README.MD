This Code is meant to be used on an Arduino Micro pro which is connected to a Raspberry Pi Zero W running raspbian stretch lite via micro usb.
The main purpose of this code is to avoid plugging your monitor into you pi zero w just to be unplugged again a few minutes later.   
The Arduino will enter the commands to enable ssh, connect to the specified wireless, and change the keyboard layout to one that is more usable.

When the configuration is done the Arduino will blink two lights continuously. At this point unplug the arduino and reboot the pi.
