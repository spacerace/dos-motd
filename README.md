# DOS MOTD - Message of the Day
This is a small tool, to display the "Message of the Day". 
It is of not much use now - but it will get improved with colors and a few
more things. 
 
# Screenshot
![ScreenShot](https://raw.githubusercontent.com/spacerace/dos-motd/master/screenshot.png)

# Format of MOTD files
Lines may be max. 80 chars long. 

# Installing and Running it
Just copy it somewhere on your system. If you run it without arguments, it 
opens "C:\MOTD" for displaying. If you give an argument, it is the filename of 
a MOTD file to display. 
```
either this:
...\...\MOTD.COM

or this:
...\...\MOTD.COM C:\somefile.txt
```

# Emulating it (dosbox)
On linux-systems you can use my makefile for starting dosbox, it does autostart
fortune.
```
$ make dosbox
``` 
If you don't have it installed, here's how to do that on debian (ubuntu): 
```
$ apt-get install dosbox
```
 
# Building it 
 
You'll only need "dev86 / bcc" and "make"
```
$ apt-get install bcc make
``` 
There are different targets for make: 
- all 
- dosbox 

all builds x86-pong. 
dosbox starts dosbox with my provided dosbox.conf 

# License
Fortune code is totally written by me, it comes under terms of GPL-v2. 
Cookie-files are taken from gentoo-project, *TODO* document licenses for these. 
