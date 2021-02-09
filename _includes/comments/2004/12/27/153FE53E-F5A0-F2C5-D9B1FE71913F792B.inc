
<div class="comment" id="c_1713616645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616645">1</a> by Webdump
		posted on 12/27/2004 at 8:07 PM
		</div>
		<div class="comment_text"><p>IIS (with or without this plugin) can't be a perfect solution. Apache is the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616651">2</a> by Raymond Camden
		posted on 12/27/2004 at 8:22 PM
		</div>
		<div class="comment_text"><p>Well, I love Apache, especially it's URL Rewrite ability, but it has one HUGE issue for me. You can't override the 404 error for CFMs. What I mean is, if I request xxx.cfm, and it doesn't exist, I get CF's builtin 404 error. In IIS, I can tell it to check for script existence, and this allows me to properly trap 404 errors. I have yet to see a way for Apache to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616647">3</a> by jared chandler
		posted on 12/28/2004 at 12:57 AM
		</div>
		<div class="comment_text"><p>can't you simply have apache rewrite all .cfm requests within a site through a single .cfm file? I assume this is for a CMS or something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616652">4</a> by Raymond Camden
		posted on 12/28/2004 at 1:08 AM
		</div>
		<div class="comment_text"><p>That isn't a fix, that's a hack. Also, it won't work for existing sites. It should be rather simple. If someone request a file that does not exist, I should be able to trap the error. This is easily done in IIS. It is impossible in Apache, and I've yet to hear a good reason for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616648">5</a> by jared chandler
		posted on 12/28/2004 at 2:15 AM
		</div>
		<div class="comment_text"><p>i just added:<br>ErrorDocument 404 template.cfm</p><p>and that seems to trap for missing .CFM's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616650">6</a> by Raymond Camden
		posted on 12/28/2004 at 2:23 AM
		</div>
		<div class="comment_text"><p>What version of Apache are you running? That has never worked for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616649">7</a> by jared chandler
		posted on 12/28/2004 at 2:32 AM
		</div>
		<div class="comment_text"><p>1.3.26. My setup is kinda screwy (apache proxy to IIS, so I'm sticking CFMX 6.1 on a clean debian box to make sure. I've wanted to get this licked under *nix for a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616653">8</a> by Raymond Camden
		posted on 12/28/2004 at 3:58 AM
		</div>
		<div class="comment_text"><p>I'm using 2.x, I bet that is the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616654">9</a> by balthor
		posted on 12/28/2004 at 5:09 AM
		</div>
		<div class="comment_text"><p>Here is my personal favorite:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.firstserved.net%2Fservices%2Fiisadmin.php%3Ab-HQ7zRkziWynES7vnGVvND4X9Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.firstserved.net/services/iisadmin.php">http://www.firstserved.net/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616656">10</a> by jared chandler
		posted on 12/28/2004 at 9:13 AM
		</div>
		<div class="comment_text"><p>ok. the solution*:</p><p>1) Build apache (in this case 1.3.31) with mod_rewrite support:</p><p>    $ ./configure --prefix=/path/to/apache \<br>                  --enable-module=rewrite \<br>                  --enable-shared=rewrite<br>    $ make<br>    $ make install</p><p>2) Add the appropriate LoadModule call to httpd.conf:</p><p>LoadModule rewrite_module libexec/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_rewrite.so%3AcN4UjvJ1fZnGxeYfAjYvfgoffl0&amp;cuid=3321886" rel="nofollow noopener" title="mod_rewrite.so">mod_rewrite.so</a></p><p>3) make a directory off root (in this case "stuff"), and add an error handling template named error.cfm. I just stuck a &amp;lt;cfdump var="#cgi#"&amp;gt; in it.</p><p>4) make a .htaccess file with the following:</p><p>RewriteEngine On<br>RewriteCond %{REQUEST_FILENAME} !-f<br>RewriteCond %{REQUEST_FILENAME} !-d<br>RewriteRule (.*) /stuff/error.cfm</p><p>5) restart apache and throw some urls at it.</p><p>6) Problems: All the CGI variables are blank. There should be some further fiddling with mod_rewrite which will let you copy over the various cgi setting, but that's for another night.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616657">11</a> by jared chandler
		posted on 12/28/2004 at 9:26 AM
		</div>
		<div class="comment_text"><p>a mod to get the querystring:<br>Put this in .htaccess</p><p>RewriteEngine On<br>RewriteCond %{REQUEST_FILENAME} !-f<br>RewriteCond %{REQUEST_FILENAME} !-d<br>RewriteRule (.*) /stuff/error.cfm?%{REQUEST_URI}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616655">12</a> by Raymond Camden
		posted on 12/28/2004 at 5:38 PM
		</div>
		<div class="comment_text"><p>Thing is - though - wouldn't it be better to run on Apache 2.x? I always assume the latest and greatest version is the one to run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616659">13</a> by jared chandler
		posted on 12/28/2004 at 8:24 PM
		</div>
		<div class="comment_text"><p>i think it would work exactly the same on apache2. i think i was running 1.3.31 because something (php maybe but who knows) didn't like 2.0. You should be able to find your httpd binary and httpd -l to get a list of modules compiled into it. If mod_rewrite is in there, and you can located the .so somewhere, you should be in business out of the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616662">14</a> by anthony petruzzi
		posted on 1/3/2005 at 11:55 PM
		</div>
		<div class="comment_text"><p>See this is exactly what I have been saying for years with this Apache vs. IIS debate.</p><p>Did you noticed the solution that jared chandler wrote above for your template problem? Kinda of a monster isn't it.</p><p>All I know is when I'm developing I need to work, not screw around. IIS is simple to install and simple to get working. Apache has always been a PITA for me. If you don't compile it a certain way, stuff doesn't work. Want to add something, you need to compile it again with the module. With IIS you can simply add the filter.</p><p>Personally I don't have a problem with the multiple site issue. I have a copy of Win2K Server (and yes I bough it) running in a VMWARE (bought that too) virtual machine on my WINXP box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616661">15</a> by John Farrar
		posted on 1/9/2005 at 10:26 PM
		</div>
		<div class="comment_text"><p>One thing I can't understand is why Apache has a old style config file and no "gui" admin interface. (I figure it has a nice GUI admin interface... can anyone suggest one?)</p><p>John Farrar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616660">16</a> by Jeff Wilkinson
		posted on 1/18/2005 at 2:53 AM
		</div>
		<div class="comment_text"><p>balthor, that firstServed iis admin tool you posted the link for looks great.  I'd just hit this problem on a new xp-pro install so this is timely advice. I particularly like its ability to set up multiple sites, then stop and start each with a little taskbar control app.  Neat!</p></div>
	</div>
</div>
		