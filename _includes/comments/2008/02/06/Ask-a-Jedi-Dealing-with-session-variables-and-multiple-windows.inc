
<div class="comment" id="c_1713676860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676860">1</a> by Dave Ferguson
		posted on 2/6/2008 at 9:08 PM
		</div>
		<div class="comment_text"><p>Great points Ray. One other thing to add when dealing with session vars.  When you are done with the session var delete it.  Don't keep session vars around if you have no intention of using them again.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676877">2</a> by Michael White
		posted on 2/7/2008 at 3:59 AM
		</div>
		<div class="comment_text"><p>I like the dynamically naming the Struct solution, I'll play around with that. It's Sort of a multi-step form in that the user enters information on a form, there's a processing page to validate and otherwise manipulate the data, then there's another page that logs and sends notifications. I learned that process from the CFWACK books and now I have to unlearn it to make better use of AJAX events and components.<br>I always delete my session variables at the end of that process but sometimes they don't finish the process. A couple of my users take multi-tasking beyond their limits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676878">3</a> by Chris Phillips
		posted on 2/9/2008 at 6:07 AM
		</div>
		<div class="comment_text"><p>Dave,</p><p>I bet a lot of people forget to get rid of session variables when they are done using them.</p><p>Below is an example of the end of a process where I call a save method on an Active Record style business object and then get rid of it. Hope the code comes through...</p><p>&lt;!--- Save Project ---&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FProject.save%3ADdBS__A_1p-7iqzTaEM3snZ2OK0&amp;cuid=3321886" rel="nofollow noopener" title="Project.save">Project.save</a>() /&gt;</p><p>&lt;!--- Get rid of project bean from Session ---&gt;<br>&lt;cfset structDelete(session.edit,'Project') /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676880">4</a> by Joshua Curtiss
		posted on 2/14/2008 at 11:55 AM
		</div>
		<div class="comment_text"><p>I got burned with the session scope thing for editing multipage forms way back in CFMX 6 when CFCs were new and more expensive (in a system resources sense). To be "smart", I thought I'd put the CFCs in the session scope to reduce object re-creation. Well, it worked.. but then I had that issue with multiple open windows stomping on each other. Ugh, what a nightmare way to learn that lesson.</p></div>
	</div>
</div>
		