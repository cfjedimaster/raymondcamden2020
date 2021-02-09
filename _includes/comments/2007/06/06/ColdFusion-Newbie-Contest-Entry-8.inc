
<div class="comment" id="c_1713666534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666534">1</a> by duncan
		posted on 6/7/2007 at 12:33 PM
		</div>
		<div class="comment_text"><p>I think the Application/Request DSN stuff comes from articles like this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfdj.sys-con.com%2Fread%2F41791.htm%3AVQHsi3rlz5L45dc5MGPif1b17LE&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdj.sys-con.com/read/41791.htm">http://cfdj.sys-con.com/rea...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666541">2</a> by Raymond Camden
		posted on 6/7/2007 at 3:17 PM
		</div>
		<div class="comment_text"><p>I would hope not. That article is from 2001. Charlie is a smart guy, and he was definitely right then - but the article is way out dated now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666547">3</a> by existdissolve
		posted on 6/7/2007 at 4:05 PM
		</div>
		<div class="comment_text"><p>As one who is guilty in this contest of using the request scope for setting the DB, I can tell you that I "learned" that from some article on the internet.  I'm not sure when the article was published (or where I found it, come to think of it...).</p><p>For me, it was one of those things that I learned right when I was starting out.  It worked for me, I didn't have anyone to critique the usage, and I had no idea that it was a poor practice.</p><p>So I guess that is the etymology of my error, and I have to say that I appreciate being set straight!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666544">4</a> by existdissolve
		posted on 6/7/2007 at 4:08 PM
		</div>
		<div class="comment_text"><p>&lt;i&gt;And did you know that ColdFusion 8 allows you to use both query caching and queryparam now?&lt;/i&gt;</p><p>I saw that!  I am very excited for that possibility, as i have a new project I am working on that will definitely benefit in performance from this option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666546">5</a> by duncan
		posted on 6/7/2007 at 4:08 PM
		</div>
		<div class="comment_text"><p>Yes, the problem is these things become noted as best practice (e.g. internally within a company), then when they change nobody's updating their guidelines... and the articles remain online without any update saying 'this no longer is recommended'!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666548">6</a> by Raymond Camden
		posted on 6/7/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>To be fair though - the reader has to take some responsibility and note the date of a technical article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666552">7</a> by duncan
		posted on 6/7/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>yes, but to be fair, in my opinion and experience most CF developers aren't reading the blogs, subscribing to mailing lists and forums etc.  Instead their organisation will have some coding guidelines, probably written down by some developer years ago.  They've probably never seen Charlie's original article, but at some point they've been told the best practice is request.dsn, and they've stuck with it since.  And in turn they pass snippets of knowledge like that on to their colleagues. This is probably done without any understanding of why it was a good idea at the time, or why it doesn't apply any more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666549">8</a> by Nick Sweeney
		posted on 6/7/2007 at 5:57 PM
		</div>
		<div class="comment_text"><p>Well, I'll add to exists' comments - as a Newb working and learning by himself, I have learned by reading the CFMX Web Ap kit (5th Edition) and by skimming code from whatever I can find online. (how to's, examples and <a href="http://disq.us/url?url=http%3A%2F%2Fhouseoffusion.com%3AGzInaSLkZgTPzBbhOTJLJNiQpr0&amp;cuid=3321886" rel="nofollow noopener" title="houseoffusion.com">houseoffusion.com</a>'s Newb Forum.) And of course - by stumbling in the dark. I have seen several different ways of doing stuff - especially setting datasource - and was never sure of what the difference was or what was better - or what my standards "should" be. And, all things being "equal" - I sort of used the method I learned initially and stayed with that. Keeping with the old standby "If it aint broke..."</p><p>However, entering this contest is my way (and probbaly others way) of fixing what aint broke - but may not be running as smoothly as possible.</p><p>With all that in mind, I think it is important for all the mentors to keep an open mind about our ignorance. We can't always control the quality of our teaching, especially considering the sources. i.e. The Internet. Speaking for myself - when I see posted code on the internet, I always assume they know more than I do - or more importantly, know what is right - and sooner or later I latch onto "their" practice. Right or wrong, because, I don't know any better. After awhile you sort of create your own Frankenstien's Monster of internal standards. Frieghtening, I know.</p><p>And - I'll admit, that it's sometimes difficult for me to keep up with the suggestions. (I am hoping this is true for some of the other contestants as well.) "The why did we do that?" is easy - because it's what we know or knew how to do when we wrote it. The why didn't we use this scope or that transaction with this .foo - well - criminey - if I knew that I wouldn't consider myself a newb anymore.  ;)</p><p>It is sort of funny, that we're in a contest that will essentially reward "The most advanced Newb!" Does that mean you have progressed to the next level or programmer? (Novice?) That you're the Best of The Worst?</p><p>Either way - it's about learning, and Lord knows I'm learning a lot through this experience. Thanks to everyone as always.</p><p>Now, if I can just update my webhosting server from version 6, I'll be set!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666550">9</a> by Ken Auenson
		posted on 6/7/2007 at 5:58 PM
		</div>
		<div class="comment_text"><p>You also have to remember that there are a lot of people out there still stuck running CF 5 or are just upgrading to MX7.</p><p>My understanding is that the practice of using Request.DSN was still a good practice for CF5...<br>Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666551">10</a> by Raymond Camden
		posted on 6/7/2007 at 6:03 PM
		</div>
		<div class="comment_text"><p>Nick - one big thing I'd tell you. Never assume folks know more than you. :) Always treat what you read with a critical eye. I know I've certainly made plenty of mistakes, so you can't always trust what I say as well.</p><p>Ken - yes. What I would do is create all my vars in the app scope, and do it once. Then on every request I'd do a duplicate to the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666555">11</a> by Ken Auenson
		posted on 6/7/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I'm afraid I don't understand what setting these types of vars once in the App scope and then duplicating on every request actually buys you.<br>If anything, this seems less efficient.<br>If you set a var in the request scope, and the page gets hit 20 times, then the var is set 20 times.<br>If you set a var in app scope once and duplicate it to the request scope on every request... when the page is hit 20 times, the var is set 20 times, plus the app var is set once...</p><p>If I am way off, can you point to a resouce that can help me get up to speed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666554">12</a> by Raymond Camden
		posted on 6/7/2007 at 6:49 PM
		</div>
		<div class="comment_text"><p>I didn't say it was great. ;)</p><p>No - duplicate isn't the same as setting the var 20 times. It is all done behind the scenes so it should be a bit quicker.</p><p>But I've not done any testing on that.</p><p>Again - thats how I did things back in the cf5 days. If I had to do it again, I would perhaps _just_ set request vars period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666530">13</a> by BradT
		posted on 6/9/2007 at 4:29 AM
		</div>
		<div class="comment_text"><p>Ray asks:<br>&gt; have to ask (and this is for all my newbies in the crowd), where are you guys seeing so much use of the Request scope for what (normally I'd say) should be Application scoped variables.</p><p>Well, this really is interesting... Just ran across this Application.cfc code example in CFMX7 WACK, page 530.</p><p>&lt;cffunction name="onRequestStart"...&gt;<br>&lt;cfset REQUEST.dataSource = "ows"&gt;<br>&lt;cfset REQUEST.companyName = "Orange Whip Studios"&gt;<br>...<br>&lt;/cffunction&gt;</p><p>Comments at the top of the listing say:<br>...<br>Created by: Raymond Camden<br>...</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666532">14</a> by Raymond Camden
		posted on 6/9/2007 at 4:56 AM
		</div>
		<div class="comment_text"><p>Hey, I didn't say I was perfect. ;) My excuse is that is probably a chapter I updated, and didn't write from scratch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666533">15</a> by Raymond Camden
		posted on 6/9/2007 at 6:00 AM
		</div>
		<div class="comment_text"><p>So hey - it just so happens I'm working on that chapter this very minute, and now I remember why I kept that in. At that point in the chapter, application variables aren't yet covered, so I was trying to keep it simple. Make sense?</p></div>
	</div>
</div>
		