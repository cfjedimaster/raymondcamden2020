
<div class="comment" id="c_1713615236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615236">1</a> by Joel
		posted on 12/10/2003 at 9:17 AM
		</div>
		<div class="comment_text"><p>-1 could be a PK in my database. An integer in SQL Server will hold numbers from negative 2 billion and some to positive 2 billion and some. If I wanted to double the number of PK's without going to a bigint, I could start the numbering for the table at negative 2 billion and some instead of zero...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615224">2</a> by Raymond Camden
		posted on 12/10/2003 at 5:40 PM
		</div>
		<div class="comment_text"><p>Yes, a db certainly could start a PK with a negative number, but I have never seen anyone do that before.  Most folks start their autonumber with 1 and therefore should ensure that ID is greater than or equal to 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615240">3</a> by Chris Wigginton
		posted on 12/10/2003 at 11:59 PM
		</div>
		<div class="comment_text"><p>I think what's missing is WHY?  Sounds like the programmer might be passing values back and forth other than what the user is capable of entering, such as sending a shopping cart in the form/url (shudder)on each trip....</p><p>The programmer should probably be using session or client variables.</p><p>In the past, I've also passed a "state" variable that is set on the return trip back to the client which is used to determine the last action of the user, so if the user hits a back button and submits again, you check the state variable in the session against the state variable (hidden) in the form.  No Match = Improper Navigation.</p></div>
	</div>
</div>
		