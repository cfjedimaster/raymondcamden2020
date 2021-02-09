
<div class="comment" id="c_1713623764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623764">1</a> by charlie arehart
		posted on 12/31/2005 at 10:05 PM
		</div>
		<div class="comment_text"><p>Ray, the focus shouldn't be so much on the <br>"taking of another session id". Something else I said on our list was that this feature is the sort of thing that's more a concern in hosted or other shared environments.</p><p>The point I meant there was that if one person on a box can view the sessions of others on a box, that can be abused. Sure, like so much, it's a question of security and trust. Indeed, I recall a similar response from Allaire folks when I asked about it myself years ago.</p><p>My real point was just that the subject had been debated a lot and by far more than just the CF community. It's one of those things that many of us want, but we have to be careful what we ask for.</p><p>More important, as vendors of a product being asked to provide such a tool, we (New Atlanta) have to be careful about providing it. (Note that the CFMX feature to do this is STILL undocumented in CFMX 7.)</p><p>But as you say, the debate can rage on here. Just please, everyone, consider that like debating religion, we can all have our opinions that we trust as smart humans, but we can and should also look back to the "councils" of long ago that debated the subjects MUCH MORE and generally came to their conclusions with considerable painful deliberation.</p><p>Not saying they're always right, just saying that there may be much more to a given topic than meets the eye, so it's wise to consider all possible counsel when something so contentious is being debated. I'm certainly not positioning myself as a final arbiter, by any means! :-)</p><p>Finally, I should clarify Ray that the quote was not from the "servlet spec" but rather I said it was "from an article of the time" back in 1998.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623765">2</a> by Raymond Camden
		posted on 12/31/2005 at 10:33 PM
		</div>
		<div class="comment_text"><p>Interesting points Charlie. As for the hosted environment though, I see this no different than cffile being able to read from pages outside your own client folder. getSessions() could be one of those things you just disable if you are an ISP. I definitely agree with you about looking to the past - but at the same time - situations change. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623766">3</a> by Brett Liotta
		posted on 12/31/2005 at 10:50 PM
		</div>
		<div class="comment_text"><p>when I first read the problem with getSessions() and the reason for disabling it in the 2.0 version of that product, I was thinking that doesn't make sense.  But when you said "shared environment", I thought ok yes there could be a security issue.</p><p>So do you think it's safe to say that in a dedicated CF Server environment (where you have complete control of the box) a function like getSessions() would not pose any security vulnerabilities?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623767">4</a> by Kola
		posted on 1/1/2006 at 2:36 AM
		</div>
		<div class="comment_text"><p>Alternatively couldn't getSessions()  be restricted to the calling application?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623864">5</a> by Mark Drew
		posted on 1/1/2006 at 3:20 AM
		</div>
		<div class="comment_text"><p>I agree with Kola, but (there is always a but) what happens when you have an application that is the "client" application and the admin side which is another application?</p><p>I think if it is restricted to the application it would limit the risk just down to the coding rather than doing getSessions("application_name") but we would be back in the land of saying "why cant I get the sessions for my cart application?"</p><p>Maybe limiting it to the calling application would be the only way to introduce this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623859">6</a> by Nando
		posted on 1/1/2006 at 7:12 AM
		</div>
		<div class="comment_text"><p>I've been using shared hosting for years, and so far everybody i've been on a box with, thousands and thousands of people, have played nice with me. There are ways any one of those people could have messed something up in my app, or everyone's app on a box. Access to session info is just one of them. It's never happened to me. And i haven't heard stories of it happening to anyone else. So i guess it doesn't happen that often.</p><p>The most risky thing about shared hosting, practically speaking, is that somebody on the box doesn't know what they are doing ... and they cause the server to crash and reboot way too often. And they probably don't even know that it's happening, much less that their code is at fault.</p><p>The second most risky thing about shared hosting is you wind up with a host that won't move your app to another box if risk #1 pans out. Or whose service personnel don't know what they are doing. Or aren't helpful. These are the risks we deal with on shared hosting, the probable risks.</p><p>Then there are the improbable risks, which are many. Maybe someone will use something like the getSessions() feature to hack my application, maybe there's a fire, a disk on the server crashes, maybe a meteorite hits the server, maybe there's another way to hack the application that nobody has thought of yet, maybe one of the service personnel makes a mistake at the location where the site is hosted, maybe i'll break my leg skiing tomorrow and my client's domain won't get renewed in time ... it goes on and on in so many dimensions. It's just not worth my time to concern myself with mitigating all the improbable risks.</p><p>If your application is that vital that you need to worry about security risks much more closely, then there's a whole laundry list of things you need to consider, many of them have nothing to do with the server, and everything to do with personnel. It's just not possible that the server software could manage that vigilance for us. So it just seems kind of fruitless to think in this direction. Because once you start down that path, if you are really sincere, you'll wind up disabling most, if not all of the server's functionality so that it could not be used to breach security in any possible scenario.</p><p>So from both these points of view, the whole line of thought just doesn't make sense to me. Disabling (or not providing) the getSessions() functionality does not lessen anyone's improbable risk. Nor can the server make an application secure - only human beings can do that, and they'll never be able to do that 100% anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623862">7</a> by Russ Michaels
		posted on 1/1/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>It is posisble to track all session on the entire server with CFMX using undocumented techniques (see my blog at <a href="http://disq.us/url?url=http%3A%2F%2Flordmichaels.blogspot.com%3A18OSzWuiflYq-MfJ5NEx-qiLuCc&amp;cuid=3321886" rel="nofollow noopener" title="http://lordmichaels.blogspot.com">http://lordmichaels.blogspo...</a>), which while useful for debugging, is a dire security risk meaning that any customer on the server could hijack other customers sessions and inspect session data and steal private data.<br>JAVA is really not particularly suitable for shared hosting as you do not seem to have too much control over what people can and cannot do. If you allow CFOBJECT/CREATEOBJECT, your opening your server up to illegal activity.<br>So I would expect the J2EE version of blueDragon to be equally insecure as you have access to everything that Java has access to.<br>To have a public GetSessions() function that everyone on a server can use would only be safe if it only got the sessions for your own application, in which case it would be safe even on a shared server.<br>I would certianly like to see BlueDragon have some official way of doing the undocumented serverwide application and session tracking that CFMX can do, but I would most definitely want some way to restrict it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623858">8</a> by Phillip Senn
		posted on 1/2/2006 at 11:50 PM
		</div>
		<div class="comment_text"><p>Darn it!<br>I keep unsubscribing myself from your blog!<br>Ack!<br>Can you change the email output to use html, and have it be To &lt;a href="<br><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Funsubscribe.cfm%3Femail%3Dpsenn%40alexlee.com%3A5sYp1hCt6TfrWMLr9zQ7pj-5T38&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/unsubscribe.cfm?email=psenn@alexlee.com">http://ray.camdenfamily.com...</a>"&gt;unsubscribe&lt;/a&gt;<br>Or is there something technical that I'm not aware of?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623856">9</a> by Raymond Camden
		posted on 1/3/2006 at 7:27 AM
		</div>
		<div class="comment_text"><p>Heh, just be careful where you click. ;) To be honest, I'd rather err on unsubscribing someone then subscribing them. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623863">10</a> by Douglas Knudsen
		posted on 1/3/2006 at 8:24 AM
		</div>
		<div class="comment_text"><p>why don't shared hosting companies make use of multiple JVMs?  resource issues?  If 10 hosts exist on a box and each have their very own JVM, ala JRun instance, then no issue with session sharing, eh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623860">11</a> by Russ Michaels
		posted on 1/3/2006 at 5:00 PM
		</div>
		<div class="comment_text"><p>Douglas, that is exactly what we do, we called it semi-dedicated coldfusion hosting. Max 10 clients per server.<br>But doing that you need a hefty amount of memory on each server, at least 512mb for each instance, and you can't make as much money per server, and it requires more support and more knowledge of how CF/JRUN works, which is outside the ability of most hosts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623857">12</a> by Rick Osborne
		posted on 1/3/2006 at 7:17 PM
		</div>
		<div class="comment_text"><p>I'd kill for a compromise: "only allow these functions from a debugging IP".  It's not a panacea, and I know it doesn't help the folks in shared hosting environments, but it would make it that much harder to hack into my sites.</p></div>
	</div>
</div>
		