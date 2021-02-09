
<div class="comment" id="c_1713729334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729334">1</a> by Tim Garver
		posted on 2/1/2011 at 11:57 PM
		</div>
		<div class="comment_text"><p>cool, only issue i see, you cant uncheck a preference</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729333">2</a> by Raymond Camden
		posted on 2/1/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>What browser? Unchecking worked for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729336">3</a> by Jason Brookins
		posted on 2/2/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>I just can't see why anyone would force a form submit/page load in this situation.  I mean, isn't this what asynchronous processes were born to handle?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729337">4</a> by Dave
		posted on 2/2/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>Would you be able to post the cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729340">5</a> by Raymond Camden
		posted on 2/2/2011 at 12:57 AM
		</div>
		<div class="comment_text"><p>Here is the method. TO BE 100% CLEAR: This is NOT how I'd code it normally. This was the 'quickie' solution:</p><p>remote void function storesubscription(numeric id, boolean subscribe) {<br>	if(arguments.subscribe) {<br>		if(!listFindNoCase(session.subscribed, <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>)) session.subscribed = listAppend(session.subscribed, <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>);<br>	} else {<br>		if(listFindNoCase(session.subscribed, <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>)) session.subscribed = listDeleteAt(session.subscribed, listFind(session.subscribed,<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>));<br>	}<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729339">6</a> by Manithan
		posted on 2/2/2011 at 1:17 AM
		</div>
		<div class="comment_text"><p>Is there any way i can store as kind of persistent js datastore using jquery instead hitting the server for evert entry ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729343">7</a> by Raymond Camden
		posted on 2/2/2011 at 1:18 AM
		</div>
		<div class="comment_text"><p>Certainly. You can write to your cookies in JS, or, if your browser is capable, use HTML5's new storage capacity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729341">8</a> by Manithan
		posted on 2/2/2011 at 1:38 AM
		</div>
		<div class="comment_text"><p>I have huge form (rebate form) which has 100+ fields the client wants to have it as one page form, i did try storing it using cookie by serializing to json but it is not storing all the values.  i couldn't debug either, if i open the firebug console jQuery validation gets in to loop and you get message "stop script or continue" popup. may i am running in to the cookie storage limit.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729342">9</a> by Manithan
		posted on 2/2/2011 at 1:39 AM
		</div>
		<div class="comment_text"><p>there is no HTML5 option because it has to work from IE7 and up</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729345">10</a> by Phillip Senn
		posted on 2/3/2011 at 12:23 AM
		</div>
		<div class="comment_text"><p>I think with a little setInterval() JavaScript, or a setTimeout() being called over and over again, you could make a page look like it was live.  I need to get around to doing this, because I have times where I have 20 students answering a poll at the same time.  I simply do a page refresh every 30 seconds, but it would be cooler to interactively update the page every few seconds instead.  I know there's been discussion of long polling and something called Comet, but I don't know if that's already fallen out of favor or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729346">11</a> by Raymond Camden
		posted on 2/3/2011 at 7:11 PM
		</div>
		<div class="comment_text"><p>@Manithan: I think you would need to use Ajax to post the fields to the server and store them there - keyed to a unique ID for the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729344">12</a> by Manithan
		posted on 2/4/2011 at 7:02 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. <br>I have one more question. if i am accessing server for every field changes is that going to use too many threads on the server say if 100 users is entering the form data, will that going to be a performance issue. just thinking out loud.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729348">13</a> by Raymond Camden
		posted on 2/7/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>You could consider doing the storage ever 5 seconds or so. Then if a user's browser crashes they lose at most 5 seconds of editing.</p></div>
	</div>
</div>
		