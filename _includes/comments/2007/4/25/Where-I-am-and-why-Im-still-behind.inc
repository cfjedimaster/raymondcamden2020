
<div class="comment" id="c_1713664419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664419">1</a> by Jim Priest
		posted on 4/26/2007 at 6:52 AM
		</div>
		<div class="comment_text"><p>Ray, what resolution are you trying to hit?  I have the 21" Dell and it was just a matter of editing my xorg.conf file...</p><p>gksudo gedit /etc/X11/xorg.conf</p><p>Here is mine:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecrumb.com%2Fwiki%2Flinux%2Fubuntu-xorg%3ARWGvrIZp6YcuYxE6-yA-n3oDnpc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecrumb.com/wiki/linux/ubuntu-xorg">http://www.thecrumb.com/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664430">2</a> by Jeff Anderson
		posted on 4/26/2007 at 6:58 AM
		</div>
		<div class="comment_text"><p>Ray, try using xchat. It should be included/installed with your Ubuntu distro. It's pretty easy to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664431">3</a> by Raymond Camden
		posted on 4/26/2007 at 3:16 PM
		</div>
		<div class="comment_text"><p>I'm trying to hit 1920xSomething (I always forget the other value).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664432">4</a> by Sam
		posted on 4/26/2007 at 4:13 PM
		</div>
		<div class="comment_text"><p>Ray, I'm not using Dell monitors, but I had some trouble with dual 19" monitors that may be of help to you:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codeodor.com%2Findex.cfm%2F2007%2F3%2F16%2FUbuntu-and-Widescreen-Resolution-Fixed%2F1035%3AQGzNYH5-WUkqSSYAYBgV92ioV58&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codeodor.com/index.cfm/2007/3/16/Ubuntu-and-Widescreen-Resolution-Fixed/1035">http://www.codeodor.com/ind...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codeodor.com%2Findex.cfm%2F2007%2F3%2F8%2FBlogging-from-Ubuntu%2F1018%3Axp_UV3-f7SxTr65ACCq7HIXHaI4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codeodor.com/index.cfm/2007/3/8/Blogging-from-Ubuntu/1018">http://www.codeodor.com/ind...</a></p><p>Jim helped me out a lot, so I'm sure his config file will be useful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664428">5</a> by Jim Priest
		posted on 4/26/2007 at 4:36 PM
		</div>
		<div class="comment_text"><p>Should be a matter of adding 1920x1200 (I looked on the Dell site :)) to your xorg.conf - if you look at mine - I added 1680x1050 to the "Screen" section under 'modes'.</p><p>I also added some settings for the monitor under the "Monitor" section.  I found these numbers on the Ubuntu forums.</p><p>What kind of video card are you using?</p><p>I'm really suprised someone hasn't added these to the default config as widescreens are getting so popular.  I mean who still uses 640x480 which is still listed??</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664429">6</a> by Sam
		posted on 4/26/2007 at 4:43 PM
		</div>
		<div class="comment_text"><p>+1 Jim.  I was surprised too.  Especially considering the popularity of widescreens among tech-types who would be more likely to use Linux in the first place.</p><p>Of course, maybe that is the justification.  "If you can't figure out how to set up widescreen, we don't want you!"  Just kidding, of course.  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664433">7</a> by Raymond Camden
		posted on 4/26/2007 at 5:12 PM
		</div>
		<div class="comment_text"><p>Jim I did that - multiple times. I even tried JUST having the #. It never shows up as an option.</p><p>I almost want to say that my xorg.conf isn't being used - but if I screw it up, I can't load the desktop manager, so that can't be it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664437">8</a> by Jim Priest
		posted on 4/26/2007 at 5:33 PM
		</div>
		<div class="comment_text"><p>Can you post your xorg.conf somewhere? And what video card are you using? Does it support that resolution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664435">9</a> by Raymond Camden
		posted on 4/26/2007 at 5:38 PM
		</div>
		<div class="comment_text"><p>Sure I'll post it here. First note - you will see "Generic Video Card" in the xorg. I've had up and down results on it noticing my Radeon. When it works, it does show</p><p>ATI Technologies Inc RF480 [Radeon X850XT Platinum (PCIE)]</p><p>Anyway, here is my current: Oh - and the defaultdepth was 24. I made it 16 as a test.</p><p># /etc/X11/xorg.conf (xorg X Window System server configuration file)<br>#<br># This file was generated by dexconf, the Debian X Configuration tool, using<br># values from the debconf database.<br>#<br># Edit this file with caution, and see the xorg.conf(5) manual page.<br># (Type "man xorg.conf" at the shell prompt.)<br>#<br># This file is automatically updated on xserver-xorg package upgrades *only*<br># if it has not been modified since the last upgrade of the xserver-xorg<br># package.<br>#<br># If you have edited this file but would like it to be automatically updated<br># again, run the following command:<br>#   sudo dpkg-reconfigure -phigh xserver-xorg</p><p>Section "Files"<br>	FontPath	"/usr/share/fonts/X11/misc"<br>	FontPath	"/usr/share/fonts/X11/cyrillic"<br>	FontPath	"/usr/share/fonts/X11/100dpi/:unscaled"<br>	FontPath	"/usr/share/fonts/X11/75dpi/:unscaled"<br>	FontPath	"/usr/share/fonts/X11/Type1"<br>	FontPath	"/usr/share/fonts/X11/100dpi"<br>	FontPath	"/usr/share/fonts/X11/75dpi"<br>	# path to defoma fonts<br>	FontPath	"/var/lib/defoma/x-ttcidfont-conf.d/dirs/TrueType"<br>EndSection</p><p>Section "Module"<br>	Load	"bitmap"<br>	Load	"ddc"<br>	Load	"dri"<br>	Load	"extmod"<br>	Load	"freetype"<br>	Load	"glx"<br>	Load	"int10"<br>	Load	"vbe"<br>EndSection</p><p>Section "InputDevice"<br>	Identifier	"Generic Keyboard"<br>	Driver		"kbd"<br>	Option		"CoreKeyboard"<br>	Option		"XkbRules"	"xorg"<br>	Option		"XkbModel"	"pc105"<br>	Option		"XkbLayout"	"us"<br>EndSection</p><p>Section "InputDevice"<br>	Identifier	"Configured Mouse"<br>	Driver		"mouse"<br>	Option		"CorePointer"<br>	Option		"Device"		"/dev/input/mice"<br>	Option		"Protocol"		"ImPS/2"<br>	Option		"ZAxisMapping"		"4 5"<br>	Option		"Emulate3Buttons"	"true"<br>EndSection</p><p>Section "InputDevice"<br>	Driver		"wacom"<br>	Identifier	"stylus"<br>	Option		"Device"	"/dev/input/wacom"<br>	Option		"Type"		"stylus"<br>	Option		"ForceDevice"	"ISDV4"		# Tablet PC ONLY<br>EndSection</p><p>Section "InputDevice"<br>	Driver		"wacom"<br>	Identifier	"eraser"<br>	Option		"Device"	"/dev/input/wacom"<br>	Option		"Type"		"eraser"<br>	Option		"ForceDevice"	"ISDV4"		# Tablet PC ONLY<br>EndSection</p><p>Section "InputDevice"<br>	Driver		"wacom"<br>	Identifier	"cursor"<br>	Option		"Device"	"/dev/input/wacom"<br>	Option		"Type"		"cursor"<br>	Option		"ForceDevice"	"ISDV4"		# Tablet PC ONLY<br>EndSection</p><p>Section "Device"<br>	Identifier	"Generic Video Card"<br>	Driver		"vesa"<br>	BusID		"PCI:1:0:0"<br>EndSection</p><p>Section "Monitor"<br>	Identifier	"DELL 2405FPW"<br>	Option		"DPMS"<br>	HorizSync	30-81<br>	VertRefresh	56-76<br>	Modeline	"1920x1200" 154 1920 1968 2000 2080 1200 1203 1209 1235<br>EndSection</p><p>Section "Screen"<br>	Identifier	"Default Screen"<br>	Device		"Generic Video Card"<br>	Monitor		"DELL 2405FPW"<br>	DefaultDepth	16<br>	SubSection "Display"<br>		Depth		1<br>		Modes		"1920x1200"<br>	EndSubSection<br>	SubSection "Display"<br>		Depth		4<br>		Modes		"1920x1200"<br>	EndSubSection<br>	SubSection "Display"<br>		Depth		8<br>		Modes		"1920x1200"<br>	EndSubSection<br>	SubSection "Display"<br>		Depth		15<br>		Modes		"1920x1200"<br>	EndSubSection<br>	SubSection "Display"<br>		Depth		16<br>		Modes		"1920x1200"<br>	EndSubSection<br>	SubSection "Display"<br>		Depth		24<br>		Modes		"1920x1200"<br>	EndSubSection<br>EndSection</p><p>Section "ServerLayout"<br>	Identifier	"Default Layout"<br>	Screen		"Default Screen"<br>	InputDevice	"Generic Keyboard"<br>	InputDevice	"Configured Mouse"<br>	InputDevice     "stylus"	"SendCoreEvents"<br>	InputDevice     "cursor"	"SendCoreEvents"<br>	InputDevice     "eraser"	"SendCoreEvents"<br>EndSection</p><p>Section "DRI"<br>	Mode	0666<br>EndSection</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664438">10</a> by Tim Davis
		posted on 4/26/2007 at 7:26 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I second the previous poster and use xchat (native install in Ubuntu) I use the similar Xchat2 for windows and it is great client...give it whirl!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664439">11</a> by Raymond Camden
		posted on 4/26/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>Just a quick note. ScottP got me up and running. I had to rerun an ati configurator which had NOT worked before, but worked magically now. ;)</p><p>I've got everything perfect so I'm not touching squat. ;)</p><p>And yep - xchat is nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664443">12</a> by Jim Priest
		posted on 4/26/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>"I've got everything perfect so I'm not touching squat."</p><p>Ah yes. The Linux mantra! :)</p><p>It would be interesting to know if the ATI configurator made any changes to your xorg.conf.  I'd back it up anyway so you have a working copy.  When I upgraded to 7.04 I made sure to backup my entire /etc directory 'just in case'. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664424">13</a> by Kevin Benore
		posted on 4/26/2007 at 10:05 PM
		</div>
		<div class="comment_text"><p>How is Linux's support for Wifi? It used to be hard to find drivers, it that the case now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664422">14</a> by Raymond Camden
		posted on 4/26/2007 at 10:18 PM
		</div>
		<div class="comment_text"><p>No idea. I'm using a wired connection. A few months back I installed an earlier Ubuntu on my Mac Book Pro with Parallels, but don't remember if I tried networking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664425">15</a> by Alex Eagar
		posted on 5/30/2007 at 7:25 AM
		</div>
		<div class="comment_text"><p>Could you post your working xorg.conf and tell me how to run the ati configurator?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664423">16</a> by Raymond Camden
		posted on 5/30/2007 at 5:37 PM
		</div>
		<div class="comment_text"><p>Alex, I'm off Ubuntu now. It was nice... but I'm much more comfortable on OSX.</p></div>
	</div>
</div>
		