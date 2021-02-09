
<div class="comment" id="c_1713721692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721692">1</a> by Phillip Senn
		posted on 2/2/2010 at 11:12 PM
		</div>
		<div class="comment_text"><p>While I understand the need to keep things simple in order to show the syntax, I think this example could be developed a little further in order to show better ways to do some things.  You're right in that there are 1000 different ways to accomplish the same thing, but some are clearly better than others.  <br>For instance, putting the query inside a component, separating out the JavaScript into a .js file, using .ajax with json instead of .load (skip over .get and .post), error trapping, and using the disable attribute instead of hide().<br>I think I would liken this post to showing someone how gunpowder can be used for fireworks.  JQuery is much more powerful if written using a little different syntax.  It's "DYNOMITE"!<br>I played around with jQuery UI this morning, replacing the two input buttons with UI prev/next icons.  Just another thought for another potential improvement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721693">2</a> by Raymond Camden
		posted on 2/2/2010 at 11:54 PM
		</div>
		<div class="comment_text"><p>Wow. Um, I strongly disagree. While I'm definitely pro-MVC, I do not agree that it makes sense to complicate this example by putting the query into a CFC. It adds nothing to the lesson being taught here. Ditto for moving the JS code into a separate file.</p><p>Now to your other points:</p><p>1) .ajax versus .load</p><p>Why? .load worked perfectly fine.</p><p>2) error trapping</p><p>Ok, I'll give you that. More error checking would be nice, but if it were discussed, it would still make sense to do it after the main part of this entry. I'm a big believer in iterative updates.</p><p>3) disable versus hide<br>That is 100% a UI decision. Not a performance or best practices decision. The original reader wanted to hide the buttons, so I did so.</p><p>As to your last statement about jQuery being much more powerful with different syntax... did I not get the job done? Sometimes it isn't about the number of lines of code or how obtuse but getting the task done. To me, it's like people who argue for compare() in CF because it runs a few ms faster, even though it's harder for folks to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721700">3</a> by Todd Mathews
		posted on 2/4/2010 at 3:51 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Please stop distracting everyone with useful content. We're trying to get some 'real' work done. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721698">4</a> by Nikhil Saxena
		posted on 2/6/2010 at 2:41 PM
		</div>
		<div class="comment_text"><p>This work pefectly but it becomes  slow with have database.<br>I believe if we write business logic in SQL/PSQL for paging that is the best way</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721691">5</a> by Raymond Camden
		posted on 2/6/2010 at 7:57 PM
		</div>
		<div class="comment_text"><p>@Nikhil - Right - and I spell that out specifically in the blog post. The focus here was on the Ajax technique, not the SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721695">6</a> by Mitzi Matts
		posted on 2/26/2010 at 1:39 AM
		</div>
		<div class="comment_text"><p>Any reason why this wouldn't work in IE7? It works in Firefox, but not IE7. From what I can tell, IE won't even load the displayart.cfm page from the jQuery script. What am I doing wrong? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721699">7</a> by Raymond Camden
		posted on 2/26/2010 at 3:04 AM
		</div>
		<div class="comment_text"><p>Does IE report any errors?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721697">8</a> by Mitzi Matts
		posted on 2/26/2010 at 4:19 AM
		</div>
		<div class="comment_text"><p>IE7 is not reporting any errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721694">9</a> by Misty
		posted on 4/15/2013 at 9:32 PM
		</div>
		<div class="comment_text"><p>Good post Ray, even wondered if we have some kind of javascript on the images like preloader that will fail,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721696">10</a> by meenakshi
		posted on 6/20/2013 at 8:36 AM
		</div>
		<div class="comment_text"><p>This is such a simple and neat solution Ray. For some who is not very well versed with jQuery or ajax, this post is a gift. Thanks a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721702">11</a> by Anurag
		posted on 6/21/2013 at 9:52 AM
		</div>
		<div class="comment_text"><p>Excellent solution to the original problem. Thanks to you, now I know how to deal with it. Thanks!</p></div>
	</div>
</div>
		