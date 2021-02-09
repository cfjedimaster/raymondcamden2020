
<div class="comment" id="c_1713725395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725395">1</a> by Ben Doom
		posted on 7/16/2010 at 3:06 AM
		</div>
		<div class="comment_text"><p>You could try using urlEncodedFormat() to encode the data in the second param.  You could then use traditional comma delimited lists, and only need one function call on each end of the cfc call.  Not tested, YMMV.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725412">2</a> by Brett
		posted on 7/16/2010 at 4:53 AM
		</div>
		<div class="comment_text"><p>Ray, I was able to make it work using a replace to change the delimiter to a semi-colon and then loop through the selections to retrun them to the top of the list, however since the selected parm does not work in a cfselect that uses a bind I can get the selected items to remain selected, has anyone found a work around for that issue? thanks again for all the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725413">3</a> by Raymond Camden
		posted on 7/16/2010 at 6:49 AM
		</div>
		<div class="comment_text"><p>By any wild chance did you try Ben's solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725417">4</a> by Brett
		posted on 7/16/2010 at 7:01 AM
		</div>
		<div class="comment_text"><p>No, I was able to get the data to the CFC with out issue by just changing the delimiter. So I did not see any reason to try that. Would that affect the issue i am having how with the selected items not reamining selected?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725415">5</a> by Raymond Camden
		posted on 7/16/2010 at 7:04 AM
		</div>
		<div class="comment_text"><p>Don't know - but can't hurt?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725418">6</a> by Brett
		posted on 7/16/2010 at 7:33 AM
		</div>
		<div class="comment_text"><p>@Ray, Bens solution worked fine, I encoded it in the bind statement and then decoded it in the cfc. It is much cleaner than the way i was doing it and that is good, but it is still not holding the selected values when the page submits. If anyone has a work around for this it would be greatly appriciated.</p><p>@Ben, thanks for the suggestion it worked great, left me with a new problem but worked and is very clean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725411">7</a> by Dan G. Switzer, II
		posted on 7/16/2010 at 4:05 PM
		</div>
		<div class="comment_text"><p>I thought this might be a case of needing jsStringFormat() around the variable X, but I just tested and got the same issue.</p><p>I suspect the problem is the validation parser isn't strong enough and isn't properly ignoring commas inside a quoted string, but is instead just counting all the commas that appear in the output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725416">8</a> by Christopher Walker
		posted on 6/26/2012 at 6:59 AM
		</div>
		<div class="comment_text"><p>You weren't using spry were you?  I had this issue when I loaded my js libraries from application.cfc onRequestStart.  Turned out that that I had a stray js libraries called in included pages and I was calling the functions more than once and the error was thrown.  I took me about 3 solid days of console debugging before I saw it.</p></div>
	</div>
</div>
		