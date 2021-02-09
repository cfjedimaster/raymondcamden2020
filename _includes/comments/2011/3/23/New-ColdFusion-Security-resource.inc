
<div class="comment" id="c_1713730943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730943">1</a> by Chris Bowyer
		posted on 3/23/2011 at 11:26 PM
		</div>
		<div class="comment_text"><p>Perhaps because Adobe have the trademark 'Poor Documentation'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730942">2</a> by Raymond Camden
		posted on 3/23/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>Hey now - I take issue with that. ;) Mainly because I think people overlook the approx 5k pages of free CF docs they have available. The _site_ though is a different matter and this info should be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730924">3</a> by Patrick Heppler
		posted on 3/24/2011 at 1:31 AM
		</div>
		<div class="comment_text"><p>Any chance to connect CF901 with MySQL 5 through socket instead of TCP/IP? I don't want MySQL to connect to network.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730925">4</a> by Aaron DeRenard
		posted on 3/24/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>@Patrick</p><p>What do you mean by connecting through a socket instead of TCP/IP?  Unless your socket is something like a serial cable, I assume it works via a TCP/IP connection.  If you are connecting to MySQL on 3306 or whatever port you have configured, it's TCP/IP and (or maybe UDP if you so opt to do so, but still requires an IP on a network).  Perhaps I don't understand what you are saying.</p><p>@Ray</p><p>I like <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfgloss.com%3AgPESb0vk66uXTXJGC6l6OScb-ds&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfgloss.com">http://www.cfgloss.com</a> pretty good for my CF docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730926">5</a> by Patrick Heppler
		posted on 3/24/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>@ Aaron No, it's a bit hard to describe, 'cause english isn't my native language. As far as I know Sockets are also called named pipes.<br>MySQL has a socket, because PHP can connect to MySQL even if "skip-networking" is enabled and MySQL doesn't listen on any port. It's like a module which allow two processes to talk to each other directly through the socket. I guess it's unix voodoo ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730927">6</a> by Aaron DeRenard
		posted on 3/24/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>@Patrick<br>Ahh that's where I let my brain wander off making assumptions.</p><p>I know exactly what you are talking about.  Shared memory/named pipes on windows, socket files on unix.</p><p>I don't have anything to test myself, but have you tried connection strings with Protocol=socket?  Also, maybe try the ODBC Socket datasource type?  Way out of my realm of comfort but thought I might just suggest anyway.  I have no idea of jdbc will support that in the protocol or not.  Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730928">7</a> by Chris Bowyer
		posted on 3/25/2011 at 8:05 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Fair enough comment on the quantity. The quality, missing and misleading information and errors, are an annoyance though</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730929">8</a> by Raymond Camden
		posted on 3/25/2011 at 8:13 AM
		</div>
		<div class="comment_text"><p>As a writer on the CFWACK team, I can tell you our books aren't perfect either. In fact, few technical books are. Don't forget that the Adobe docs provide a way to provide feedback including clarifications and reports of any mistakes. And I know Adobe _does_ review these comments. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730930">9</a> by Patrick Heppler
		posted on 3/25/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>@ Aaron, yeah Protocol=socket; works. Thx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730931">10</a> by Patrick Heppler
		posted on 3/28/2011 at 2:06 PM
		</div>
		<div class="comment_text"><p>Damn, laughed too soon. CF Admin can set up DSN using socket and cfquery works with it, but ORM relies on TCP/IP...</p></div>
	</div>
</div>
		