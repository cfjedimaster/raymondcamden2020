
<div class="comment" id="c_1713718903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718903">1</a> by Sean Coyne
		posted on 10/14/2009 at 5:08 PM
		</div>
		<div class="comment_text"><p>Ray on the server side can't you just do &lt;cfset str = 'This is a sentence' /&gt; &lt;cfoutput&gt;sentence contains #arraylen(str.split('\s'))# words&lt;/cfoutput&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718908">2</a> by Joshua Curtiss
		posted on 10/14/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>Back in the good old days, I did this with just ListLen(form.body," "), which got the job done for most normal, properly spaced text. Works out perfectly with ColdFusion's way of not counting empty list entries, so lots of white space doesn't skew the count.</p><p>Your way is more thorough and accurate though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718909">3</a> by Freelance web developer
		posted on 10/14/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>You answered the question which asked for a CF based solution. But wouldn't it make better sense to use javascript?</p><p>[textarea onkeyup="wordCounter(this);" onkeydown="wordCounter(this);"][/textarea]</p><p>And of course the wordCounter function splits the text with spaces and counts the result.</p><p>I use something similar to count (and limit) the characters for things like meta description:<br>[textarea onkeyup="textCounter(this.form.metadesc,'countermetadesc',500);" onkeydown="textCounter(this.form.metadesc,'countermetadesc',500);" id="metadesc" name="metadesc" wrap="physical" style="margin: 0px; width: 100%;" rows="7"/]</p><p>[script type="text/javascript"]<br>	function textCounter(field, countfield, maxlimit) {<br>		if (field.value.length &gt; maxlimit) {<br>			field.value = field.value.substring(0, maxlimit); <br>			document.getElementById(countfield).innerHTML = field.value.length;<br>			alert('You have exceded your character limit'); }<br>		else {<br>			document.getElementById(countfield).innerHTML = field.value.length;<br>		}<br>	}<br>[/script]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718911">4</a> by Andy Sandefer
		posted on 10/14/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script type="text/javascript"&gt;<br>	getWordCount = function(textVal){<br>		var wordArray = textVal.split(/\s+/g);<br>		alert('The word count is ' + wordArray.length);<br>	}<br>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>	&lt;cfform format="html" name="testForm"&gt;<br>		&lt;cftextarea rows="5" cols="60" name="testEdit"/&gt;<br>		&lt;br&gt;<br>		&lt;cfinput type="button" name="btnCount" value="Count Words" onClick="getWordCount(this.form.testEdit.value)"&gt;<br>	&lt;/cfform&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718905">5</a> by Raymond Camden
		posted on 10/14/2009 at 9:01 PM
		</div>
		<div class="comment_text"><p>@Sean: Sure. As I said, there are many ways to do this, but I wanted it to be similar to the client side version.</p><p>@Freelance: Um... I did do it client side. The first part of the blog entry was showing the client side code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718907">6</a> by Jules
		posted on 10/14/2009 at 9:27 PM
		</div>
		<div class="comment_text"><p>Ah, my error. I read it all too fast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718912">7</a> by Raymond Camden
		posted on 10/14/2009 at 9:28 PM
		</div>
		<div class="comment_text"><p>I'd tell you not to do that - but I've done that many times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718913">8</a> by Matt Hunnell
		posted on 1/19/2010 at 9:46 PM
		</div>
		<div class="comment_text"><p>If you want to avoid writing the javascript, you could do it through ajax by binding a cfdiv to a cfc method that does your counting for you. I work with Oracle where I need to know the bytes in a field instead of the characters. Using a CFC to do the counting seems like the only solution without counting on form processing.</p><p>You're probably better off sticking with javascript for a simple char count, but the other option is out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718914">9</a> by Raymond Camden
		posted on 1/19/2010 at 9:49 PM
		</div>
		<div class="comment_text"><p>If you can't count on form processing, wouldn't that mean you can't count on Ajax? Or do you mean you don't want to rely on the client-side count - if so, that makes sense.</p></div>
	</div>
</div>
		