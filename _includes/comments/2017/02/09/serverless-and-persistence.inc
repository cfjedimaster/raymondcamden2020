
<div class="comment" id="c_3147225156">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3147225156">1</a> by Jesse Monroy
		posted on 2/10/2017 at 4:49 AM
		</div>
		<div class="comment_text"><p>Raymond in review of your comments, I find them all correct - as stated.<br>However, there is a misnomer that should be addressed.</p><p>Namely, that it is "serverless". In theory this is true, but in practice it is not.<br>Depending on the implementation, it is an on-demand (or in memory) instance of <br>a set of routines (functions, procedures, whatever makes you confortable)<br>that run as a cohesive unit. They act and behave much like a server,<br>except that is much more akin to SaaS - except that service is<br>very private and at the direction of the connecting app.</p><p>The major advantage is no configuration and tinkering on the<br>edges. The OpenWhisk is a class of servers that perviously<br>ran as inetd(8) services.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.freebsd.org%2Fdoc%2Fhandbook%2Fnetwork-inetd.html%3Avua7ni1E5NLniC2A4viyAylbFKM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.freebsd.org/doc/handbook/network-inetd.html">https://www.freebsd.org/doc...</a></p><p>These class of servers (no longer in vogue) were the basis for<br>college students learning TCP/IP programming. The services<br>it provided are listed in the link above. While these "services"<br>were very limited, the concept was the same. As a matter<br>of fact, a contest between programmers I know were challenged<br>to create the smallest inetd(8) program (in terms of lines of code).<br>The winner create a 0 (zero) size program size - by using<br>the command-line program 'cat' to echo back whatever it<br>received from a network connection.</p><p>No doubt OpenWhisk is much more powerful and much more<br>useful.</p><p>More?</p><p>All the Best<br>Jesse</p></div>
	</div>
</div>
		
<div class="comment" id="c_3147622328">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3147622328">2</a> (In reply to <a href="#c_3147225156">#1</a>) by Raymond Camden
		posted on 2/10/2017 at 12:11 PM
		</div>
		<div class="comment_text"><p>I'm confused - are you saying the term "serverless" doesn't make sense here compared to other serverless products, like Amazon's? Or that it doesn't make sense *in general*, if so, I'd argue it makes as much sense as 'cloud'. ;) The name bugs me too, but it seems to be the marketing term we've decided to use for this class of service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3148624266">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3148624266">3</a> (In reply to <a href="#c_3147622328">#2</a>) by Jesse Monroy
		posted on 2/10/2017 at 11:04 PM
		</div>
		<div class="comment_text"><p>No. I am not saying the name "does not make sense". I am saying in polite terms this is a zero-configuration server - M$ uses the term zero-configuration. And in some sense I like the term "server-less", but the ground is difficult to defend. Hence the explanation. And I agree this is wholey a marketing invention - a bit too clever ALSO.</p><p>To be clear, the "explanation" is to forewarn other developers. Working on "new" technology is always looking back and saying "yes it's like that, but this is better for XYZ reasons.</p><p>All the Best<br>Jesse</p></div>
	</div>
</div>
		