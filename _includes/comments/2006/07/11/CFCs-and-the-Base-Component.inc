
<div class="comment" id="c_1713654933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654933">1</a> by Paul Roe
		posted on 7/11/2006 at 8:43 PM
		</div>
		<div class="comment_text"><p>I know this is an example about using the base coldfusion component in interesting ways but I couldn't help but comment on the way I do this so that I don't have to do all that introspection.</p><p>[[off topic]]<br>I put all of my bean's instance data into a struct named variables.instance; I then have a function called getSnapshot() that returns the variables.instance struct and presto I have a struct with all my instance data. This is a lot easier, and a better practice than modifying the primary cfc file. <br>[[/off topic]]</p><p>Also just because you can modify the top level component doesn't mean you should. I think that this is generally considered a bad practice. You should probably just have a class that your bean extends so that you can easily include this functionality, or perhaps have a separate component that you can pass your bean into that will return all the instance data. In the end while this technique is interesting I don't feel that it is something developers should do unless they have to, and I have yet to find a situation where they have to.</p><p>Then again you were just showing that you could do this not advocating that people should do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654934">2</a> by Ryan Guill
		posted on 7/11/2006 at 9:33 PM
		</div>
		<div class="comment_text"><p>I agree with Paul, I found that you could do this a while back, and there a lot of reasons not to, such as the fact that shared host users have no way of doing this, any upgrade to cf will probably overwrite this component, and any code that relies on code inside of that component will be very very hard to follow unless it is commented very well.</p><p>Anyway, thinking about this again I started to wonder... could you make the base component extend other components?  It would be a dangerous thing, I know, but just curious...</p><p>Also good point about cfinvoke.  I see a lot of developers that think that cfinvoke is only for invoking stateless cfc's and webservices, but I use them for objects all the time because it makes the code a little easier to read IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654929">3</a> by Raymond Camden
		posted on 7/11/2006 at 9:58 PM
		</div>
		<div class="comment_text"><p>Both Paul and you dinged me on recommending this - but I don't think I did. I thought I made it clear I normally wouldn't do this, but wanted to share the technique anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654935">4</a> by Ryan Guill
		posted on 7/11/2006 at 10:16 PM
		</div>
		<div class="comment_text"><p>No, I didn't think you were recomending it, I just wanted to give some more reasons why you might not want to.  I think its very good information to know... Definately something to keep in the back of your mind if you are ever debugging an application someone else built that may have done something like this...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654936">5</a> by Raymond Camden
		posted on 7/11/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>Cool. Just being sure I didn't come off wrong. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654940">6</a> by Ryan Guill
		posted on 7/11/2006 at 10:29 PM
		</div>
		<div class="comment_text"><p>No, not at all, I was just trying to add to the discussion ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654939">7</a> by Paul Roe
		posted on 7/12/2006 at 12:22 AM
		</div>
		<div class="comment_text"><p>It did seem to me at least like you were ambivalent toward weather or not someone should use this technique. This is why I piped up, but you'll notice I did say that you weren't advocating the use of this technique.</p><p>I just wanted it to be very clear where some of the community stood on this issue since a lot of coldfusion beginners use your site as a reference I'd hate for them to start down a dangerous path.</p><p>You'll also notice that on Hal's site, the page you reference, he doesn't modify the root cf component he creates his own basecomponent.cfc that all his components extend.</p><p>Anyway like you said, like I said, no one is advocating the use of this technique but it is an interesting one that should be shared.</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654949">8</a> by Raymond Camden
		posted on 7/12/2006 at 12:27 AM
		</div>
		<div class="comment_text"><p>Good points Paul. This is why I love blogging. It isn't just me pontificating from up high. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654944">9</a> by Sean Corfield
		posted on 7/12/2006 at 9:46 AM
		</div>
		<div class="comment_text"><p>Ryan, no you can't make component extend something else... because that something else would *automatically extend component*...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654943">10</a> by Ryan Guill
		posted on 7/12/2006 at 3:35 PM
		</div>
		<div class="comment_text"><p>Ah, of course.  Glad I didnt try it!  Hmm, wonder what that error message would be though...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654941">11</a> by Julian
		posted on 7/13/2006 at 12:12 PM
		</div>
		<div class="comment_text"><p>RE: Paul's OT comment: your getSnapShot() function is simpler but it seems to me it's doing something slightly different and might be better named getInstanceData(). Ray's is perhaps more appropriate as getSnapShot() because it would also return any available calculations, boolean tests of instance data that might not have been set as instance vars, for example a boolean getIsInTheFuture() where that depends on a date instance var. Basically your method returns the private data, Ray's the public state. Both could be useful in different situations.</p><p>I agree with you all though that neither should go in the base component.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654942">12</a> by Raymond Camden
		posted on 7/13/2006 at 6:16 PM
		</div>
		<div class="comment_text"><p>To be clear, Julian, my code is _definitely_ just for Beans too.</p><p>You know, I know I said I agreed about not using the base class. However - if my goal is simply for debugging, I don't think it makes sense to use some BaseBean type class. If it won't be used in production, maybe it makes sense to use the base Component.</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654946">13</a> by Julian
		posted on 7/13/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>I guess for dev/debugging anything goes if it's useful... but I would be uncomfortable about putting anything I regard as part of my application code base into the CFMX install directory.</p><p>I have my own base Bean cfc which I store in a server-wide library folder, and I must say, Ray, your dump method is a really useful addition to it. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654950">14</a> by Raymond Camden
		posted on 7/13/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>In this case, the code -wasnt- part of the app. It was a utility to dump a bean, and since I (typically) do beans all the same way, it would be useful box-wide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654931">15</a> by Julian
		posted on 7/13/2006 at 6:46 PM
		</div>
		<div class="comment_text"><p>Exactly, Ray. Which is why I find it useful to have a Base Bean (DRY principle)....  but as a separapte cfc in a library location, not component.cfc</p></div>
	</div>
</div>
		