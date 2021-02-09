
<div class="comment" id="c_1713675804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675804">1</a> by Shane Zehnder
		posted on 12/27/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>I saw Sean and Dan Wilson talking about a similar subject the other day.  I didn't realize we had an easier way to set up structures.</p><p>Good thing to know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675805">2</a> by Adrian Lynch
		posted on 12/31/2007 at 3:12 PM
		</div>
		<div class="comment_text"><p>The same is true of cfparam:</p><p>&lt;cfparam name="test" default="#[1, 2, 3, 4]#"&gt;<br>&lt;cfdump var="#test#"&gt;</p><p>I've also seen it flake out another way but can't remember how. Annoying but not the end of the world.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675792">3</a> by Andrew
		posted on 1/14/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>I get this everytime I try to return struct from function.<br>You can't do:<br>&lt;cfreturn {field=3, field2=true}&gt;<br>you have to assign it to var first. <br>Seems really odd that it does not work.</p></div>
	</div>
</div>
		