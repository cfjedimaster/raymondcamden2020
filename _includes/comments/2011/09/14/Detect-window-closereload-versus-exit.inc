
<div class="comment" id="c_1713735211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735211">1</a> by Jason Presley
		posted on 9/14/2011 at 8:12 PM
		</div>
		<div class="comment_text"><p>I agree that checking if I want to leave a page is annoying and basically a newbie stunt just because you can.  On the flip side however I create a number of internal applications that are very data heavy and making sure that people commit their changes before moving to something else would be huge.  People get distracted with phone calls and meetings and forget to do something as simple as hit the save button.  This is going to save a lot of time recreating lost work.  Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735210">2</a> by Josh
		posted on 9/14/2011 at 8:59 PM
		</div>
		<div class="comment_text"><p>What I've done in the past when I needed to alert about unsaved data is I monitor the form for changes.  If the user makes a change, I set an alert flag = true.  If the user tries to leave the page by means other than a form submit, I fire the alert.<br>var alertFlag = false;<br>$("#yourForm :input").change(function(){<br>   alertFlag = true;<br>});<br>$("#yourForm").submit(function(){<br>   alertFalg = false;<br>});<br>$(window).bind('beforeunload', function(event) {<br>   if(alertFlag){<br>       //do some stuff<br>   }<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735212">3</a> by Mike
		posted on 9/14/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>This is the only way I have found to do it, aside from like a modal window with jquery.</p><p>Does the jquery beforeunload work with both IE and FF? I know I ran into problems with IE not unbinding correctly so I had to do something differnt with IE, then again I was not using jquery to unbind for the beforeunload</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735215">4</a> by Raymond Camden
		posted on 9/14/2011 at 10:26 PM
		</div>
		<div class="comment_text"><p>I tried FF and Chrome I think. I don't test in IE if I can help it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735218">5</a> by Ben Nadel
		posted on 9/14/2011 at 11:03 PM
		</div>
		<div class="comment_text"><p>That's a pretty clean approach. In the "click" event, you could also throw up a prompt() and cancel the event behavior too. I only add that as I am not sure if all the browsers support the ability to "block" an unload event? Not sure, haven't tried. Cool idea, though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735216">6</a> by Jin Park
		posted on 9/15/2011 at 12:00 AM
		</div>
		<div class="comment_text"><p>I wrote up this javascript file <a href="http://disq.us/url?url=http%3A%2F%2Fapps.jin-park.com%2Fjs%2Fform_saver.js%3A52ppjTWPVjP1POk02Ly-_4EzQko&amp;cuid=3321886" rel="nofollow noopener" title="http://apps.jin-park.com/js/form_saver.js">http://apps.jin-park.com/js...</a> for the same reason. There occasions when even if a form is changed, you might want to allow them to get out (hitting a cancel button, reset button, etc). It's not very sexy since it doesn't use jQuery, but it does the job. Tested in IE and Firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735217">7</a> by Bill Tudor
		posted on 9/15/2011 at 2:52 PM
		</div>
		<div class="comment_text"><p>Neat approach but cross-browser testing reveals some oddities. I have IE8, FF6.0.2 and Chrome (13...). IE appears to continue to run the beforeunload event, ignoring the .unbind? Things are a bit 'interesting when you Reload/Refresh or press F5. So maybe the reload event also needs trapping, and maybe we need to add some IE handling code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735214">8</a> by prashant
		posted on 10/16/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>still looking for a solution. not working in IE. <br>when i unbind "unload" event on a href clicks, submit clicks. <br>it does not fire unload event on browser close. It seems like its not binding unload event again on unload.</p><p>tried few other techinques but not success.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735213">9</a> by Raymond Camden
		posted on 10/22/2011 at 12:48 AM
		</div>
		<div class="comment_text"><p>You got me there then. YOu could always switch to using a solution that stores the form stuff in Local Storage behind the scenes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735220">10</a> by prashant
		posted on 12/15/2011 at 7:00 AM
		</div>
		<div class="comment_text"><p>hi,</p><p>thanks for all help. <br>finally its working for me. <br>this is also a good reference  <br><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms536907%2528v%3Dvs.85%2529.aspx%3A8yYHJgVvH-RT11SCsrUuQtxzt_c&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms536907%28v=vs.85%29.aspx">http://msdn.microsoft.com/e...</a></p><p>my gud code now. i am writing in steps</p><p>1. make allowprompt as true on page load<br>var allowPrompt = true;</p><p>2. <br>$(document).click(function(event) { <br>    allowPrompt = false;<br>});</p><p>3. <br>$(document).ready(function() {<br>	window.onbeforeunload = WarnUser;<br>});</p><p>4.<br>function WarnUser()<br>{</p><p>   if(allowPrompt)<br>   {<br>      event.returnValue = "You have made changes. They will be lost if you continue.";<br>   }<br>   else<br>   {<br>     allowPrompt = true;<br>   }<br>}</p><p>5. notes: i have few patch work here and there in code to avoid calling warnUser 2 times in a row.  <br>--returning false on hyperlinks.<br>--location.reload  was not working after using function on unload event so i used location.href insteaed of reload</p></div>
	</div>
</div>
		