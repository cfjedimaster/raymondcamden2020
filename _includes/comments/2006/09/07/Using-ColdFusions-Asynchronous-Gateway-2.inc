
<div class="comment" id="c_1713657231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657231">1</a> by Daniel Budde II
		posted on 9/8/2006 at 9:04 AM
		</div>
		<div class="comment_text"><p>I'm sorry, can't help you.  Unfortunetly I live in Chicago and by definition must be a Bears fan (lucky me).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657235">2</a> by Raymond Camden
		posted on 9/8/2006 at 3:27 PM
		</div>
		<div class="comment_text"><p>I tell ya - this is their year. They are going all the way. Really. They won't play all their games and start off by doing ok and then just completely giving up in the second half. Really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657287">3</a> by todd
		posted on 9/8/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>OK, so the Async Gateway has a "que" of sorts that can stack the calls within the loop?  How does it keep them separate?  I hate asking dumb questions, but hey, gotta learn somehow.  It's hard to grasp the concept of this gateway when you think of traditional code processing.</p><p>By the way...STEELERS??  You're killing me dude.  And the SAINTS?  Do you just HATE Cleveland?</p><p>Oh well, I've always got Ohio State.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657282">4</a> by Raymond Camden
		posted on 9/8/2006 at 5:31 PM
		</div>
		<div class="comment_text"><p>I don't think it is queud up per say but ran all at once. In other words, imagine me putting ten letters in the mail box. When picked up by USPS, they all move at once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657286">5</a> by dickbob
		posted on 9/8/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Except if the CF Admin setting "Event Gateway Processing Threads" is set to, say, 5 then USPS will collect 5 and then when it has delivered one it would go back and collect another 1 etc until there were no more left in the mailbox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657289">6</a> by Raymond Camden
		posted on 9/8/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification dickbob!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657288">7</a> by Rahul Narula
		posted on 9/8/2006 at 8:09 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Any specific reason you didn't use the path or file attribute of &lt;cfhttp&gt; tag &amp; used &lt;cffile action="write"&gt;?</p><p>Also if you are not happy using duplicate you could also initialize your props inside the &lt;cfloop&gt;. Just another way of doing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657285">8</a> by Raymond Camden
		posted on 9/8/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>Rahul: Yes, I forgot. ;) As for the loop - I thought it seemed silly to have to do a structnew for each case when I was just changing the values, but that could certainly be done instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657283">9</a> by Sean Corfield
		posted on 9/9/2006 at 4:39 AM
		</div>
		<div class="comment_text"><p>The pass-by-reference trick is how my Concurrency library works (that allows you to call methods on CFCs asynchronously *and* get the results back when the methods are done). Download from the 'software' pod on my blog (well, you need SVN now since I moved it to Google Code). I'll make a build downloadable from the Google Code page one day :)</p><p>Model-Glue can use my Concurrency library to allow listeners to be asynchronous (it creates a FutureTask from my library and puts it in session scope so you can test when the listener has actually completed and take appropriate action several pages later in the app!).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657284">10</a> by Raymond Camden
		posted on 9/9/2006 at 5:12 AM
		</div>
		<div class="comment_text"><p>I had meant to mention your Concurrency lib, so thanks for doing that. I'm going to mention it again my third post. (Or as I call it, "Asynch Gateways - Everything Else")</p></div>
	</div>
</div>
		