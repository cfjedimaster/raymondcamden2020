
<div class="comment" id="c_1713655033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655033">1</a> by Gary Funk
		posted on 7/15/2006 at 8:49 AM
		</div>
		<div class="comment_text"><p>I guess you've been busy as I see you have other releases.</p><p>Thanks Ray. Installation update went well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655045">2</a> by Jason Daiger
		posted on 7/15/2006 at 10:32 AM
		</div>
		<div class="comment_text"><p>As an FYI the MySQL script is missing the field: `verified` tinyint(1) NOT NULL default '0' in the tblblogsubscribers table.  Also, I loaded the script on MySQL 5.0 and have not seen any problems other than the missing field above.</p><p>Thanks again,<br>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655053">3</a> by James Holmes
		posted on 7/15/2006 at 12:16 PM
		</div>
		<div class="comment_text"><p>Thanks again. I made the alterations to allow for DB username and password properties in all the files; if they are useful let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655051">4</a> by Raymond Camden
		posted on 7/15/2006 at 2:27 PM
		</div>
		<div class="comment_text"><p>Jason, I accidentally added it to users, not subscribers. It is fixed in SVN (will be in 5 mins), and I'll be making a 5.1.001 release this weekend.</p><p>James. Email me the mods. I'll consider it for my next "big" release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655052">5</a> by Mike Kelp
		posted on 7/15/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>Thanks as always, for sharing you're proverbial &lt;cftoybox /&gt; with us.</p><p>Your willingness to share your work is a continual inspiration to Robert, Conrad, and I and we hope to be pitching in with our own work soon.</p><p>Take Care,<br>Mike.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655054">6</a> by Raymond Camden
		posted on 7/16/2006 at 12:51 AM
		</div>
		<div class="comment_text"><p>No problem Mike, glad you like it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655059">7</a> by tom hanson
		posted on 7/16/2006 at 7:41 AM
		</div>
		<div class="comment_text"><p>I get a error after installation?</p><p> "usecaptcha is not a valid property."</p><p>any ideas...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655057">8</a> by Raymond Camden
		posted on 7/17/2006 at 1:37 AM
		</div>
		<div class="comment_text"><p>Did you correctly update your INI file? CAPTCHA has been in since 5.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655055">9</a> by Carl
		posted on 7/20/2006 at 12:05 AM
		</div>
		<div class="comment_text"><p>Very cool application. I ran into one issue where links at the beginning of comments would extend beyond the width of the right menus and destroy the layout structure. This was fixed by adding div {word-wrap: break-word;} beneath body {background-color: #c0c0c0;} in style.css.</p><p>-Carl</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655056">10</a> by Raphael Anzenberger
		posted on 7/22/2006 at 12:05 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I encountered the following error when submitting my first entry from the admin section:</p><p>Date:  	7/21/06 1:00 PM<br>Script Name: /fde/admin/entry.cfm?id=0<br>Browser: Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.8.0.4) Gecko/20060508 Firefox/1.5.0.4<br>Referer: http://63.135.103.158/fde/admin/entry.cfm?id=0<br>Message: access denied (coldfusion.tagext.GenericTagPermission cfschedule)<br>Type: coldfusion.runtime.CfErrorWrapper</p><p>Any idea what I am doing wrong? My website is hosted at CrystalTech.</p><p>Thanks for this great tool!</p><p>Raphael.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655058">11</a> by Raymond Camden
		posted on 7/22/2006 at 12:07 AM
		</div>
		<div class="comment_text"><p>They blocked cfschedule it appears. I only use cfschedule for entries in the future. Did you set it up as such?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655102">12</a> by James Holmes
		posted on 7/22/2006 at 7:01 PM
		</div>
		<div class="comment_text"><p>I really like the abstracted text area - I just dropped in TinyMCE with absolutely no drama whatsoever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655092">13</a> by Raymond Camden
		posted on 7/22/2006 at 7:03 PM
		</div>
		<div class="comment_text"><p>If you write up what you did, I'd post it to <a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.com%3Ae9_lb-nHK9ZZsEmuoDuxB5yk0rQ&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.com">blogcfc.com</a>. (I don't mean you, I mean email me and I'll post it, crediting you.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655091">14</a> by Paul Bailey
		posted on 9/25/2006 at 12:11 AM
		</div>
		<div class="comment_text"><p>Do you have an upgrade path. I have an older version that I have been using for the past 9 months, and I don't want to start over. I like some of the new features ...</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655094">15</a> by Raymond Camden
		posted on 9/25/2006 at 6:22 AM
		</div>
		<div class="comment_text"><p>You would need to carefully read the readme.txt file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655093">16</a> by Adrian
		posted on 10/15/2007 at 11:00 PM
		</div>
		<div class="comment_text"><p>Take a look at this error. I can't make it work on HostMySite shared account. Do you have any idea why?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.viaromania.eu%2Fblog%2F%3A8eLUhOx_5ZbjyDIUWfvuU4RCNuM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.viaromania.eu/blog/">http://www.viaromania.eu/blog/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655096">17</a> by Raymond Camden
		posted on 10/15/2007 at 11:04 PM
		</div>
		<div class="comment_text"><p>Are you using MySQL? If so - what db type?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655098">18</a> by Adrian
		posted on 10/15/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>Yes, I am using mySQL 5.0.22<br>In the config file I have blogDBType=MYSQL<br>Administraton area works perfect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655099">19</a> by Raymond Camden
		posted on 10/15/2007 at 11:10 PM
		</div>
		<div class="comment_text"><p>What do you have in the CF Admin?</p><p>Btw - you know this blog is for BlogCFC 5.1. I assume you are using 5.9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655101">20</a> by Adrian
		posted on 10/15/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>I don't have access to CF Admin.<br>It is a shared hosting evn. with ColdFusion 8, MySQL 5 Database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655095">21</a> by Raymond Camden
		posted on 10/15/2007 at 11:43 PM
		</div>
		<div class="comment_text"><p>You need to speak to your host then. Ensure they are using the MySQL 4/5 DSN, not the MySQL 3 dsn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655100">22</a> by oyun
		posted on 4/12/2008 at 1:28 PM
		</div>
		<div class="comment_text"><p>I don't have access to CF Admin.<br>It is a shared hosting evn. with ColdFusion 8, MySQL 5 Database. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.oyunlarkeyfi.com%3ABKCUQjyBPt3djB60vEpUNxtlvc0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.oyunlarkeyfi.com">http://www.oyunlarkeyfi.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655097">23</a> by Raymond Camden
		posted on 4/14/2008 at 6:24 PM
		</div>
		<div class="comment_text"><p>Then you need to contact your host Oyun.</p></div>
	</div>
</div>
		