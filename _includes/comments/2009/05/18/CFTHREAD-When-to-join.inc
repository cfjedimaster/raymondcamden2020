
<div class="comment" id="c_1713715452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715452">1</a> by tony weeg
		posted on 5/18/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>makes sense... i guess i just havent had a real world need for it yet.... i'd be interested to see if anyone else can think of a good real world need for something like this?</p><p>i use cfthread for a lot of things now, just hadnt used the join parameter yet. thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715453">2</a> by Raymond Camden
		posted on 5/18/2009 at 10:51 PM
		</div>
		<div class="comment_text"><p>So far, my only real world need was for <a href="http://disq.us/url?url=http%3A%2F%2FColdFusionBloggers.org%3A2yzW3RfqUOX0l0azIAdZ48uxvoo&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusionBloggers.org">ColdFusionBloggers.org</a>. It would be a good side question - who is using cfthread in production? (joined or not) I may blog that tonight though to keep things here on topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715455">3</a> by todd sharp
		posted on 5/18/2009 at 10:57 PM
		</div>
		<div class="comment_text"><p>I used to rely on cfthread heavily in production with SlideSix.  I'd do the PowerPoint conversion 'behind the scenes' without forcing the user to wait.  I pulled it out at some point though, can't remember why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715454">4</a> by Raymond Camden
		posted on 5/18/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>And what did you replace it with?</p><p>&lt;cf_juvenile&gt;<br>"pulled it out" - thats what she said<br>&lt;/cf_juvenile&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715460">5</a> by tony weeg
		posted on 5/18/2009 at 11:02 PM
		</div>
		<div class="comment_text"><p>i use it in production now.  cant get into too much detail but it's made a process that USED TO time out more than it didn't... with the help of cfthread, no more query timeouts, no more cfoutput time outs...</p><p>ok, some other things changed to bring that down from 4hrs to 30 minutes but this feature helped them most!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715462">6</a> by todd sharp
		posted on 5/18/2009 at 11:07 PM
		</div>
		<div class="comment_text"><p>brilliant!!!  man, i walked right into that one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715461">7</a> by Andy Sandefer
		posted on 5/18/2009 at 11:07 PM
		</div>
		<div class="comment_text"><p>@Ray and @Tony<br>The need for join seems very logical to me.  Imagine that we kick off a process that is going to execute several different things server side (think transactional database).  We would probably use this in combination with cftransaction but basically you could use the join action when you have cascading activities happening as in my application needs to do things in the database within a certain order or I'll violate the referential integrity of the system if certain records are not created in the proper chain of events (sequencing).  If the user clicks a button that kicks off this chain of events that occurs on the database server then we probably don't want to make them sit around and wait until the whole mess is finished processing until we give them back the browser - so enter in cfthread with join power.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715540">8</a> by Eric
		posted on 5/18/2009 at 11:29 PM
		</div>
		<div class="comment_text"><p>I've been using cfthread for a car/truck/cycle classifieds aggregator I built using Ray's paragator cfc. Thanks Ray... Amazon WL already made a while back!</p><p>Anyway, shameless plug here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ownster.com%3A0SejpS0BlduRa4lCPSFmBa4ZNU0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ownster.com">http://www.ownster.com</a></p><p>Works perfectly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715552">9</a> by Raymond Camden
		posted on 5/19/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>@Eric - if I didn't send a thank you, please accept it now. Sometimes I get items w/ no marker of who sent it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715564">10</a> by Ryan
		posted on 5/19/2009 at 12:19 AM
		</div>
		<div class="comment_text"><p>I was just researching zip code proximity searches for a friend and was looking up Troy Pullis' CFDJ article from a few years ago.</p><p>Building a Zip Code Proximity Search with ColdFusion</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fnode%2F154258%3Aeh9jb8rkRH6LXHGpAefPNBKQDf0&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/node/154258">http://coldfusion.sys-con.c...</a></p><p>Using CFThread would probably be handy when implementing a lookup like this, particularly if there was some obscure reason you wanted to solve for distance using all 4 methods described in his article.  Computing the distance between a given zip code and a large number of locations (even as few as 100) would normally fall under the 'serial' way of guessing how long it would take.  Using threads would make it parallel (though possibly stressing out your server if you spawned too many threads at once).</p><p>I assume you would want to join your threads at the end to show your results in a table or show the 1 location with the least distance to your primary zip code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715559">11</a> by Andy Sandefer
		posted on 5/19/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>The wish list has brought big conflict into our home.  Unfortunately I let it slip that I had bought Ray the Snuggie (may your kids never be cold again whilst changing channels) in front of my wife - apparently she really wanted one too (who knew, I thought she was joking).</p><p>@Ray - You need to move to a strictly cash only policy, please for the sake of all that is good!  Then I can always get by on the "It's only money" phrase that makes people feel materialistic if they don't instantly agree with you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715558">12</a> by Raymond Camden
		posted on 5/19/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>I will happily accept PayPal donations at any time. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715551">13</a> by Andy Sandefer
		posted on 5/19/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>No you Diiiiiiin't</p><p>That may be a good article but I can't click on your link because the SysCon will try to poison my mind with loud auto-playing commercials about Windows and Visual Studio and if that doesn't kill me than that Turkish guy from Ulitzerkaselzer probably will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715548">14</a> by jonathan
		posted on 5/19/2009 at 6:18 PM
		</div>
		<div class="comment_text"><p>I am developing an app right now with cfthread/join. I have to run about 4000 queries, alter some fields in each row and insert them as new records but the user needs to work with the results, so it makes sense to have them just wait a minute or so.</p><p>Question... I would be curious as to people's server performance issues with cfthread. Right now our box (multi cf instances on vm) only has one cpu and it's killing it. The process runs slower than on my local laptop (which is dual core) and freezes up every jrun instance. I even set the number of threads down to 5 and set the cfthread to low priority.  That just makes it freeze up longer.</p><p>Turned off server monitor as well. We are pushing to get another cpu which may solve the problem. On my laptop i can run between 35-50 threads at a time without any issues</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715556">15</a> by Brian
		posted on 5/19/2009 at 8:14 PM
		</div>
		<div class="comment_text"><p>I have an application that pulls user data out of an 800K+ record Active Directory tree.  Due to imposed limitations, (not mine) I can only pull x records at a shot.  So, cfthread parallels multiple requests for me, and then joins at the end to locally process the retrieved data.</p><p>Now, if I could just figure out how to do LDAP paged queries using CFLDAP (which i don't think I can -- seems I have to go right to the JVM), I could mightily improve the process.  &lt;sigh&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715554">16</a> by Don
		posted on 5/20/2009 at 8:49 PM
		</div>
		<div class="comment_text"><p>I started using the cfthread tag in a production application that runs 2 massive queries to build 2 graphs. When they run consecutively it takes over 2 minutes for the page to load. Now I have them run concurrently and the time is more than cut in half. But I have to use a join.</p><p>Here is my problem tho. How to display the results when they are ready but display something else while they are running. Somebody said this can be done with cfthread but I'm not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715547">17</a> by Raymond Camden
		posted on 5/20/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>@Don: I can do this. Let me finish my hamburger and I'll show you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715553">18</a> by Don
		posted on 5/20/2009 at 8:58 PM
		</div>
		<div class="comment_text"><p>Hamburger? How about <a href="http://disq.us/url?url=http%3A%2F%2Fwww.icanhascheezburger.com%3AvCDvpUxXU1mUcbZtcgttfH5kQr0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.icanhascheezburger.com">http://www.icanhascheezburg...</a></p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715550">19</a> by Raymond Camden
		posted on 5/20/2009 at 9:18 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F5%2F20%2FCFTHREAD-with-a-loading-message%3AT3NzI6Y7a5-XFyTL-gy0bhMKMc8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/5/20/CFTHREAD-with-a-loading-message">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715555">20</a> by Sebastiaan
		posted on 8/21/2009 at 11:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I have the following challenge where I suspect CFTHREAD could come in handy.</p><p>In our CMS we update a record where the user has changed its documenttype. This change needs to be pushed to another database (say deltadatabase) so another system can import these changes. Now in the transaction to update the changed record in the CMS I've included a customtag that does the update to the deltadatabase. But the logic in this customtag calls the CMS to get its information. But this information has just been changed, so the customtag returns zero.</p><p>The challenge is to do the update to the deltadatabase and wait for this to have been processed completely before actually updating the record in the CMS. I have changed the transaction code in the CMS to post the old as well as the new documenttype, so I can use this as a trigger in the transaction that an extra update is necessary and that one process has to wait for the other to finish.</p><p>Am I making the challenge clear enough?</p><p>How to set up these threads? I'm a newbie to threads, just so you know ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715563">21</a> by Don
		posted on 9/22/2009 at 11:20 PM
		</div>
		<div class="comment_text"><p>Screw it. I moved to cflayout stuff and it shows a nice roundy roundy thing while the page loads. :)<br>BUT I'm also now using a cfthread that does not join. Instead of waiting for a page to be called that runs this huge query, I go ahead and run it so the results are ready when the page is called.<br>However, there is also a place for a join. This app pulls data from 6 other applications and puts it all together. Right now the app does each one in sequence. Instead I'm working on the cfthread with the join at the end to put it all together in one shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715561">22</a> by Don
		posted on 9/23/2009 at 2:30 AM
		</div>
		<div class="comment_text"><p>Now I have another highly important question. Can I view the status of a thread from a page that didn't start it? So like if on the index.cfm page I start the thread, then on another page like checkthread.cfm can I check on the status? So far I can't but then I may be doing something wrong. (ya think?) What I really want to do is check the status of the thread occasionally and see if it is done but I don't want to wait for it to be done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715557">23</a> by Raymond Camden
		posted on 9/24/2009 at 12:54 AM
		</div>
		<div class="comment_text"><p>It's possible, but only if the threads update an Application variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715560">24</a> by Don
		posted on 9/24/2009 at 1:38 AM
		</div>
		<div class="comment_text"><p>Yeh. That's what I was thinking (and did). I always thought threads were sort of asynch so any page could access their status. But it appears it isn't so.</p></div>
	</div>
</div>
		