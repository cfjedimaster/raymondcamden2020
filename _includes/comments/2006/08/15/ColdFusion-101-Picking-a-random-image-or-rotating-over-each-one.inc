
<div class="comment" id="c_1713656205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656205">1</a> by Justice
		posted on 8/15/2006 at 3:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In your first bit of code you have this line:</p><p>&lt;code&gt;<br>   &lt;!--- How many images? ---&gt;<br>   &lt;cfset totalImages = images.recordCount&gt;<br>&lt;/code&gt;</p><p>Why do you make a new variable for this instead of simply working with the images.recordCount variable that already exists?  You have already checked if the value is above zero in the &lt;cfif&gt; above, is there some trick I should know, or is this simply so you have a easily remembered var name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656209">2</a> by Raymond Camden
		posted on 8/15/2006 at 4:03 PM
		</div>
		<div class="comment_text"><p>No trick - I was just trying to make the code as simple as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656214">3</a> by Tuyen
		posted on 8/15/2006 at 9:01 PM
		</div>
		<div class="comment_text"><p>The issue would be more interesting if we display 5 images at a time randomly, then the next 5 randomly images... make sure there is no repeated images if total image &gt;= 10...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656215">4</a> by Derek P.
		posted on 8/15/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>how funny! I just wrote a function that is almost verbatim to your code for a project I'm working on. great minds think alike right? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656234">5</a> by Raymond Camden
		posted on 8/15/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>Derek, exactly. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656235">6</a> by Joshu Cyr
		posted on 8/15/2006 at 10:03 PM
		</div>
		<div class="comment_text"><p>The only issue I see with the session approach is that if the session ends and they come back they see the first image again. The last image of the list will not be shown as much as the first. Lots of ways around this, each with their own limitations I suppose.</p><p>For showing multiple image sets at a time, with tracking, you could update a field 'TotalViewed' by one each time the image is shown from a db, and then sort TotalViewed maxrows=3 or something.  Though that is a lot of DB calls.</p><p>So you can store that information into the application scope with periodic updates to the DB if you needed it to be recorded at all.  That way you can ensure equal viewings of the image and if storing to the DB report back to someone about the overall views.</p></div>
	</div>
</div>
		