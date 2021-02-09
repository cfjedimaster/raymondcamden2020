
<div class="comment" id="c_1713714159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714159">1</a> by Matthew Abbott
		posted on 3/27/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>In your demo code you have a comma after max:100 in the validate rules, and this made it generate an error in IE but not Firefox.  After taking that out it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714160">2</a> by Raymond Camden
		posted on 3/27/2009 at 5:47 PM
		</div>
		<div class="comment_text"><p>Oops. Sorry. Fixed and pushed up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714161">3</a> by Dan G. Switzer, II
		posted on 3/27/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Instead of using the change event, you could use the keyup event to update the values in realtime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714162">4</a> by Raymond Camden
		posted on 3/27/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>Nice. That does work better. For folks who visit the demo, please be sure to view source, although the only change was from</p><p>.change(setTo100)</p><p>to</p><p>.keyup(setTo100)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714163">5</a> by Kit Brandner
		posted on 3/27/2009 at 7:41 PM
		</div>
		<div class="comment_text"><p>Works great, but if you enter a value that can't be parsed as an integer, it throws "NaN" in the other form field. You can get around this by using:</p><p>var theVal = (parseInt($(this).val()) || 0)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714165">6</a> by Kit Brandner
		posted on 3/27/2009 at 7:43 PM
		</div>
		<div class="comment_text"><p>Never mind the last post, not sure what was happening. It appears jQuery wasn't validating properly, but it's working now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714164">7</a> by mahcsig
		posted on 3/27/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>One other code shortcut you can use is:<br>$("#phappy, #puhappy").keyup(setTo100)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714171">8</a> by anthony
		posted on 3/28/2009 at 12:57 AM
		</div>
		<div class="comment_text"><p>You can even do it based on class or any other selectors, so you don't even need ids.</p><p>$("input").keyup(function () {   <br>   var otherVal = 100-parseInt($(this).val())<br>   if(this == $("input")[0]) $("input:eq(1)").val(otherVal)<br>   else $("input:eq(0)").val(otherVal)<br>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714167">9</a> by tony
		posted on 4/11/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>is it possible to do a @keyup after the 2nd character?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714168">10</a> by Raymond Camden
		posted on 4/11/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>No. Event handles are based on events, not values. But obviously your code could look at the val, and if the size is 1, do nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714166">11</a> by tony
		posted on 4/11/2009 at 12:47 AM
		</div>
		<div class="comment_text"><p>ok you can obviously tell i'm a newbie to custom javascript :) thanks.  just fyi, i was trying to bind a form to a cfdiv using zipcode to find results, but i didnt want the bind to kick off until the zipcode field length was 5 :) hence my question. so i'll change it from a bind url to a bind javascript and count the size before initiating the bind in the cfdiv??? i'll see if that works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714169">12</a> by Raymond Camden
		posted on 4/11/2009 at 12:50 AM
		</div>
		<div class="comment_text"><p>Sure, or your server side code could also check the length. It is better, traffic wise, to never send the request if it is too short.</p></div>
	</div>
</div>
		