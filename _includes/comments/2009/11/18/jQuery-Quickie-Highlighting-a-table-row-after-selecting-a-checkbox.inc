
<div class="comment" id="c_1713719810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719810">1</a> by Eric Hynds
		posted on 11/19/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>You might get better performance out of parents("tr") instead of calling parent() twice.  I've always wondered that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719809">2</a> by Matt
		posted on 11/19/2009 at 12:52 AM
		</div>
		<div class="comment_text"><p>I needed something like this so I just put it in my code.  Everything works, except on the first row, it takes two times for it to work.  Is there something I did wrong?  On every other row it works perfect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719813">3</a> by Raymond Camden
		posted on 11/19/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>@Eric: Thank you! I didn't know you could do parents('x') and have it find the parent going upwards.</p><p>@Matt: odd - it works ok for me. What browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719812">4</a> by Chuck Savage
		posted on 11/19/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>There anyway to get your code examples without line numbers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719811">5</a> by Matt
		posted on 11/19/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>Firefox, but it may have just been for the page I'm using it on.  Thanks for the code!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719814">6</a> by Raymond Camden
		posted on 11/19/2009 at 1:26 AM
		</div>
		<div class="comment_text"><p>@Chuck: Not yet - I may revert the option to include the line #s. Sorry about that!</p><p>@Matt: Let me know if you discover an issue though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719815">7</a> by Brian Lang
		posted on 11/19/2009 at 3:16 AM
		</div>
		<div class="comment_text"><p>Assumption: Each row in the database has a Unique ID (integer or uuid).<br>You could modify your &lt;tr&gt; tag to include an id attribute prefaced with a letter (for integers). For example: &lt;tr id="a#artid#"&gt;.<br>Also change the &lt;input&gt; value attribute to "a#artid#". For example: &lt;td&gt;&lt;input type="checkbox" name="select" value="a#artid#"&gt;&lt;/td&gt;<br>Then change your JQuery click function to the following:<br>$("#" + $(this).val()).toggleClass("highlight");<br>What this does: Concatenate the ID selector (#) with the value of the ID attribute and toggle the class.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719820">8</a> by Justin Schier
		posted on 11/19/2009 at 5:59 AM
		</div>
		<div class="comment_text"><p>There's a new jQuery method for doing this. .closest() finds the one nearest parent matching the selector you specify.</p><p>$("#artTable input:checkbox").click(function() {<br>          $(this).closest('tr').toggleClass("highlight")<br>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719823">9</a> by parthiban
		posted on 11/19/2009 at 7:04 AM
		</div>
		<div class="comment_text"><p>Hi amazing site for jquery explaination. Also see this site<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.phpjquery.com%3A-ItZspgqytszsbZj7BlVPHS0Ydo&amp;cuid=3321886" rel="nofollow noopener" title="www.phpjquery.com">www.phpjquery.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719824">10</a> by Tim Leach
		posted on 11/19/2009 at 10:23 AM
		</div>
		<div class="comment_text"><p>I'm surprised I'm the first to say this, but that only works if all of the check boxes are unchecked by default.</p><p>I'd be more comfortable with:<br>if(this.checked){<br>$(this).parents('tr').addClass("highlight");<br>}else{<br>$(this).parents('tr').removeClass("highlight");<br>}</p><p>Or for jQ 1.3 a simple:<br>$(this).parents('tr').toggleClass("highlight",this.checked);</p><p>Just becomes somewhere, somehow one of those will end up checked by default, and have the opposite effect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719825">11</a> by Tim Leach
		posted on 11/19/2009 at 10:24 AM
		</div>
		<div class="comment_text"><p>Sigh:<br>*because</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719837">12</a> by Raymond Camden
		posted on 11/19/2009 at 5:38 PM
		</div>
		<div class="comment_text"><p>@Tim: The reason why is that it was based on the gmail model - where on initial load, nothing is checked. It was intentional. :) As it stands, if the server side code checked it, and included the style highlight, then the toggle should still work (afaik).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719840">13</a> by Raymond Camden
		posted on 12/31/2009 at 8:39 PM
		</div>
		<div class="comment_text"><p>@Tim, I've got a demo showing support for some items checked by default. Will blog it later today.</p><p>@Chuck - no more line #s. Thank Jason Delmore.</p></div>
	</div>
</div>
		