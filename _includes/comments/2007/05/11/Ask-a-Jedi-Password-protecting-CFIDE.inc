
<div class="comment" id="c_1713665017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665017">1</a> by Justice
		posted on 5/11/2007 at 7:41 PM
		</div>
		<div class="comment_text"><p>I prefer the method of blocking the entire directory other than local IP addresses or some other method, then copying the necessary scripts somewhere onto the web root and creating a mapping to them. By default: deny all.  Safest that way =)</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665019">2</a> by Damon Gentry
		posted on 5/11/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>CFMX 7 provides another alternative.  In the Administrator, you can simply specify the 'scripts' directory (defaults to /CFIDE/scripts).  This directory is used by the CFFORM tag to reference JavaScript for client side validation.  Simply change that value to /_cf/scripts and copy the contents of the /CFIDE/scripts directory into that location in your doc root.</p><p>At this point, you can remove the web server mapping (or Virtual Directory) to /CFIDE.  You can still access the Administrator on port 8300 (or whatever you have it set to).</p><p>If you're still running CFMX 6, 6.1 or CF 5, then you can just copy the /CFIDE/scripts folder to the doc root and then eliminate the web server mapping.</p><p>Yet another method:<br>You can also disable the built-in JRun web server, and set up another virtual host that accepts requests on some odd port (like 8300, 8080, or whatever you want).  This 'new' web server is connected to the JRun proxy port and has a mapping for /CFIDE.  Then, you can use web server authentication or IP restrictions to restrict access to your CF Admin pages.</p><p>Finally, if you have any firewalls or proxies between your web servers and your clients, you can use rules in those devices to restrict access to only internal IPs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665018">3</a> by Joe Mastroianni
		posted on 5/11/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>We basically put CFIDE under the default website and make it available only from localhost and the internal network IP. Unless I'm mistaken people will never be able to hit it unless they're on the VPN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665021">4</a> by Steven Erat
		posted on 5/11/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>Good post and good comments.  I'll be sure to point people in this direction when the question comes up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665023">5</a> by Raymond Camden
		posted on 5/11/2007 at 8:05 PM
		</div>
		<div class="comment_text"><p>@Damon - Nice one. I wonder if Charlie is covering this in his hidden gems class.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665020">6</a> by DK
		posted on 5/11/2007 at 8:27 PM
		</div>
		<div class="comment_text"><p>like Joe said, putting cfide on its own site and limiting it to a non-routable ip (i.e. localhost or 127.0.0.1) is one of the first steps to locking it down imho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665022">7</a> by Michael White
		posted on 5/11/2007 at 11:01 PM
		</div>
		<div class="comment_text"><p>but how would that affect applications that use flash forms, flash remoting, etc.</p></div>
	</div>
</div>
		