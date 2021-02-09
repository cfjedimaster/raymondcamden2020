
<div class="comment" id="c_1713722627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722627">1</a> by Scott Stroz
		posted on 3/16/2010 at 4:48 PM
		</div>
		<div class="comment_text"><p>Using this method, a user might likely think there is something wrong with their computer if everything keeps getting switched to uppercase.</p><p>Wouldn't it be just as easy to use uCase() on the server side when handling the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722626">2</a> by Robert Zehnder
		posted on 3/16/2010 at 4:54 PM
		</div>
		<div class="comment_text"><p>Scott beat me to the punch.  Relying on the client-side might not always produce the expected results.  Even if you were to check for Javascript being enabled and handling it server-side if it wasn't, you may as well just handle everything server-side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722630">3</a> by Danny Scott
		posted on 3/16/2010 at 5:00 PM
		</div>
		<div class="comment_text"><p>I agree with Scott.  Not only could it scare the less savvy but it would be quite annoying while typing.</p><p>Replacing the .keyup with a .each and running that bit of script either onsubmit or right before the ajax post (depending on how you're choosing to submit the form) would probably smoother.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722632">4</a> by Raymond Camden
		posted on 3/16/2010 at 5:03 PM
		</div>
		<div class="comment_text"><p>@Scott/Robert: Sorry - I should have made it clearer - server side wasn't an option here. They were posting to some old school system.</p><p>Also - there would have been text on the form saying to use caps. By itself, the demo I used doesn't really provide any context for why it is capping stuff.</p><p>@Danny: Yeah, I can see how doing it on submit could be a bit nicer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722631">5</a> by Eric Hynds
		posted on 3/16/2010 at 5:14 PM
		</div>
		<div class="comment_text"><p>Also, what would happen if the user copy &amp; pastes text into a field?  Maybe apply the logic on blur?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722628">6</a> by salvatore fusto
		posted on 3/16/2010 at 7:23 PM
		</div>
		<div class="comment_text"><p>Why not use css and assign a class with a text-transform=uppercase to inputs to be capitalized?<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722633">7</a> by Raymond Camden
		posted on 3/16/2010 at 7:25 PM
		</div>
		<div class="comment_text"><p>Wow you guys are picky today. ;)</p><p>@Salvatore: That's a good one too. I don't tend to think of CSS as being 'transformative' (if that makes sense), but yeah, that would do it too.</p><p>@Eric: That's where Danny's idea of doing it on submit would help out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722634">8</a> by salvatore fusto
		posted on 3/16/2010 at 7:38 PM
		</div>
		<div class="comment_text"><p>Ray,<br>imho this rule is not transformative: uppercase can be viewed as a property such as bold, underline, size, font etc.<br>bye</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722635">9</a> by Raymond Camden
		posted on 3/16/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>@salvatore: if it changes the actual data though - I think it would be. Bold changes the _look_ of the data. Capitalization changes the data itself. If you submit the form, I assume you get the caps, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722636">10</a> by salvatore fusto
		posted on 3/16/2010 at 8:05 PM
		</div>
		<div class="comment_text"><p>Interesting question, Ray.<br>yes, you could be right, if you think about that submitted value has to be persisted in a case sensitive db. <br>But there is another aspect: if later on you want to cancel input's capitalization, you have only to cancel a css attribute, without updating any js code or html script.<br>best regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722640">11</a> by Alan McCollough
		posted on 3/16/2010 at 8:56 PM
		</div>
		<div class="comment_text"><p>I think I'd be going bonkers if content was going in ALL CAPS and my local kbd wasn't set for ALL CAPS. Its like those online forms where somebody embedsa tab function between fields. Argh! If I wanted to tab, id'a tabbed! An' if I wanted to type in ALL CAPS, id'a typed in ALL CAPS.</p><p>Now, if there is a business case for displaying the input in ALL CAPS, that's another issue...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722638">12</a> by Raymond Camden
		posted on 3/16/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>@Allan: Yeah, I agree - it would make me bonkers as well. Again though - that was the business need - and the form would have made it clear _why_ things needed to be all capped.</p><p>Heh, who knew such a small little post would be so controversial! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722639">13</a> by Robert Zehnder
		posted on 3/16/2010 at 9:04 PM
		</div>
		<div class="comment_text"><p>I thought your original code fit the use case quite well.  There is always more than one way to solve a problem. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722642">14</a> by Ken
		posted on 3/16/2010 at 10:24 PM
		</div>
		<div class="comment_text"><p>One problem with this approach becomes evident when you try to move around in the field using arrow keys. For extra fun, type "aaaacccc", then go back and try to add "bbbb" between the a and c. Having been a long way down this road, what we ended up with was a combination of css text-transform for cosmetics (which others have rightly pointed out does not change the actual data), and adding an uppercasing pre-processing routine to the form's submit function (using jQuery).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722641">15</a> by Dan Fredericks
		posted on 3/17/2010 at 3:27 PM
		</div>
		<div class="comment_text"><p>Wow,<br>Who knew this simple question would generate so much information. This was my question. The original system was a desktop app so the system was able to set the caps lock to on if the user was in the application. I am converting it to CF and need to mimic as best as possible that same function.<br>I see I could use CSS to do this for viewing and then ucase on the server side to insert it into the db. I see a JQuery solution, however, since this is AJAX, my company and the specific Gov't group has not approved AJAX as a viable option...something about it not being secure enough or something...IE 6 is still their standard browser so my life is still a bit hard :)<br>If there are more ideas, please keep posting them, if not, I thank Ray for posting this, and I thank you all for the many ideas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722645">16</a> by salvatore fusto
		posted on 3/17/2010 at 6:43 PM
		</div>
		<div class="comment_text"><p>@Dan, you could mimic the original app behaviour adding a button, a radio or something that can simulate caps lock on a keyboard: its action can be:<br>1) toggle a ccs class to text-transform for the upper/lower case on the client;<br>2) alerting with a message if caps lock is on or off;<br>3) use this control (the one toggling text-transform) of the form on server side to determine action on the inout value.<br>you can add a toggle control on every input too.<br>@Ray: what about changing in your code the keyup event with the change one?<br>super regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722647">17</a> by Raymond Camden
		posted on 3/17/2010 at 6:51 PM
		</div>
		<div class="comment_text"><p>@Salvatore: When I first wrote it I did use change. It works well too, and probably better for cutting/pasting/etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722649">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722649">18</a> by dawesi
		posted on 3/20/2010 at 10:55 AM
		</div>
		<div class="comment_text"><p>I agree with @Scott Stroz</p><p>just loop over the fields using for form.fieldnames on your backend submit page before you do anything.. and use UCASE(), as javascript can fail for many reasons... including other functions on the page causing scripts to be turned off.</p><p>Elso why not use ExtJS since it's built in? Why JQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722648">19</a> by Raymond Camden
		posted on 3/20/2010 at 10:03 PM
		</div>
		<div class="comment_text"><p>@Chris: While Ext is "baked in", I'd rather not write code that makes use of the libraries under CFIDE. If I'm going to do something unique, I'll use my own download. Maybe I'm being too picky. ;) As for Ext vs jQuery - jQuery is better for me. That's why pretty much 99% of my blog posts involving JS/Ajax stuff make use of jQuery.</p></div>
	</div>
</div>
		