all:
	bcc -Md -ansi -0 -O -I./include/ -V -W -o motd.com motd.c
	ls -al motd.com
	
upx:	all
	upx -9 motd.com
	
dosbox:
	dosbox
	
