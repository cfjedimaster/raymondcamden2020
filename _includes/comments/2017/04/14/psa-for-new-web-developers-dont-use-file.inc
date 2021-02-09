
<div class="comment" id="c_3256404170">
	<div>
		<img src="https://disqus.com/api/users/avatars/MplsBarry.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3256404170">1</a> by MplsBarry
		posted on 4/14/2017 at 7:56 PM
		</div>
		<div class="comment_text"><p>As an alternative for httpster, another simple npm-installed easy server is http-server (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Findexzero%2Fhttp-server%29%3AOGhs5Om0rgtgUdmvj79wZqXkPcE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/indexzero/http-server)">https://github.com/indexzer...</a>. If one already has npm installed, simply install it globally:</p><p>&gt; npm install -g http-server</p><p>Then run it from any directory and it will serve the contents of that directory as the root.</p><p>&gt; npm http-server</p><p>If you are changing the files it is serving, you will probably want to disable the caching by setting the "-c" param to -1, so it always serves your changes:</p><p>&gt; npm http-server -c-1</p><p>Also, while these other choices are all just as easy, if someone wants to activate IIS on Windows 10, they can go to "Programs and Features" of the legacy/Win32 Control Panel and then choose "Turn windows features on or off". See screen shot below:</p><p> <a href="https://uploads.disquscdn.com/images/e0c6bff6aa453e14d933a12ba8cba5593bf4687f17d49637026c8e19a5f63195.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/e0c6bff6aa453e14d933a12ba8cba5593bf4687f17d49637026c8e19a5f63195.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3256489552">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3256489552">2</a> by jcesar
		posted on 4/14/2017 at 9:08 PM
		</div>
		<div class="comment_text"><p>Some of those things aren't supposed to work from http neither, you need https. Not sure if self signed certificate is allowed</p></div>
	</div>
</div>
		
<div class="comment" id="c_3256493078">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesmoberg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3256493078">3</a> by James Moberg
		posted on 4/14/2017 at 9:11 PM
		</div>
		<div class="comment_text"><p>I've been recommending Mongoose Binary By Cesanta.  It's portable (no installation required) and works w/Windows or Mac. It's very easy to use and has many built-in features (IP-based ACL, File blacklisting, Resumed downloads, Custom error pages, CGI, SSL Server Side Includes, WebDav, Experimental TLS 1.2, PHP, SQLite).<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.cesanta.com%2Fproducts%2Fbinary%3AWhssfaQIg3qo8o9K6SSDMF82Hac&amp;cuid=3321886" rel="nofollow noopener" title="https://www.cesanta.com/products/binary">https://www.cesanta.com/pro...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3256515809">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3256515809">4</a> (In reply to <a href="#c_3256404170">#1</a>) by Raymond Camden
		posted on 4/14/2017 at 9:30 PM
		</div>
		<div class="comment_text"><p>Ah, there it is - thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3256516165">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3256516165">5</a> (In reply to <a href="#c_3256493078">#3</a>) by Raymond Camden
		posted on 4/14/2017 at 9:30 PM
		</div>
		<div class="comment_text"><p>That looks cool. At first I thought you meant the Mongo wrapper for NodeJS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3258243807">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_jBZcFfWK5Y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3258243807">6</a> by Jean de Barochez
		posted on 4/16/2017 at 6:03 AM
		</div>
		<div class="comment_text"><p>For HTTPS delivery content, there's also Web Server for Chrome extension which can serves a local folder on the network. Really useful when you work with service workers, only working with HTTPS.<br><a href="https://disq.us/url?url=https%3A%2F%2Fchrome.google.com%2Fwebstore%2Fdetail%2Fweb-server-for-chrome%2Fofhbbkphhbklhfoeikjpcbhemlocgigb%3AawGAjg9bCpWGCbKi9mut2v_cZlA&amp;cuid=3321886" rel="nofollow noopener" title="https://chrome.google.com/webstore/detail/web-server-for-chrome/ofhbbkphhbklhfoeikjpcbhemlocgigb">https://chrome.google.com/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3258371070">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3258371070">7</a> (In reply to <a href="#c_3258243807">#6</a>) by Raymond Camden
		posted on 4/16/2017 at 10:02 AM
		</div>
		<div class="comment_text"><p>Don't forget though that those things work on http://localhost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3259574885">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3259574885">8</a> (In reply to <a href="#c_3258371070">#7</a>) by jcesar
		posted on 4/17/2017 at 8:08 AM
		</div>
		<div class="comment_text"><p>So you say that the things that require https to work also work when using http://localhost? Do they also work if it's a local IP instead of localhost?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3259782070">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3259782070">9</a> (In reply to <a href="#c_3259574885">#8</a>) by Raymond Camden
		posted on 4/17/2017 at 12:58 PM
		</div>
		<div class="comment_text"><p>Afaik, just localhost, not a local IP. This is specifically so people can test on a local machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3267554642">
	<div>
		<img src="https://disqus.com/api/users/avatars/giancarlogomez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3267554642">10</a> by Giancarlo Gomez
		posted on 4/21/2017 at 8:00 PM
		</div>
		<div class="comment_text"><p>For simple http server like mentioned before I also like http-server and live-server. I like that live-server can spin multiple ones and use different ports where I think http-server fails if one instance is already running. Either way both are good if you are not comfortable with Apache or IIS, but then I would say, help yourself and get good with them as it is a valuable part of your tool set.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Flive-server%3AJgHE0bhooiYANGrvP1NmgGTouR0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/live-server">https://www.npmjs.com/packa...</a></p></div>
	</div>
</div>
		