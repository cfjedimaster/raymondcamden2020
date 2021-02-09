
<div class="comment" id="c_1713722882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722882">1</a> by Garrett Johnson
		posted on 3/24/2010 at 12:48 AM
		</div>
		<div class="comment_text"><p>Depending on what browser's you are trying to support, you could utilize native JSON parsing, which I believe would be easier and faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722881">2</a> by todd sharp
		posted on 3/24/2010 at 12:49 AM
		</div>
		<div class="comment_text"><p>Wouldn't jQuery's serializeArray() method work for this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722892">3</a> by Robert Zehnder
		posted on 3/24/2010 at 12:51 AM
		</div>
		<div class="comment_text"><p>I do not know if it would help in this situation, but Javascript does have a .toSource() method which will return the data from an object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722883">4</a> by Raymond Camden
		posted on 3/24/2010 at 1:17 AM
		</div>
		<div class="comment_text"><p>@Garret: You misunderstand. I'm not parsing. I'm _creating_ json.</p><p>@Todd: Nope, try it - it doesn't return something valid.</p><p>@Robert: Interesting, what does toSource return for my array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722884">5</a> by Garrett Johnson
		posted on 3/24/2010 at 1:30 AM
		</div>
		<div class="comment_text"><p>@ray: oops... I meant native JSON serializing. :-) In this case JSON.stringify should do the trick no? (leaving out support for old browsers of course).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722891">6</a> by Raymond Camden
		posted on 3/24/2010 at 1:32 AM
		</div>
		<div class="comment_text"><p>I must admin - that is new to me. FF 3.5, Chrome, and IE8 only, right? Safari I assume?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722886">7</a> by Mike
		posted on 3/24/2010 at 1:47 AM
		</div>
		<div class="comment_text"><p>Probably not the best way, but I had a similar issue and did a replace in the CFC to eliminate the extra info from jQuery and build it into a list. I then loop it on the CFC side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722885">8</a> by Garrett Johnson
		posted on 3/24/2010 at 1:56 AM
		</div>
		<div class="comment_text"><p>Hmm got spammed trying to post a cross browser concept....</p><p>Ideally you could check and see if the JSON property is defined within the window object, if not utilize jQuery's $.getScript to load the json2 lib by Douglas Crockford, otherwise it will use the native one (faster).</p><p>But ie8, ff3.5, and webkit support it natively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722887">9</a> by Robert Zehnder
		posted on 3/24/2010 at 3:04 AM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>That comes back with a JSON representation of the object. I haven't had a chance to check it though</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722888">10</a> by Raymond Camden
		posted on 3/24/2010 at 4:38 PM
		</div>
		<div class="comment_text"><p>Man, it just goes to show you - I need to review a good JS Reference one day. I have no idea what's in the language now. I've got an ORA ref from like 5 years ago - something tells me it is a bit out of date now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722902">11</a> by David McGuigan
		posted on 3/25/2010 at 4:17 AM
		</div>
		<div class="comment_text"><p>Man the world needs jCFC back!</p><p>$.cfcp( "dotpath.to.cfc", "handleArray", { data: arr }, function( r ){ /* Use r immedaitely */ } );</p><p>And done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722903">12</a> by Raymond Camden
		posted on 3/25/2010 at 4:10 PM
		</div>
		<div class="comment_text"><p>Just to be picky - you aren't using r "immediately" - you are using it when the result of the call returns. I'm only being anal here because I know a lot of CFers coming to Ajax for the first time have a hard time with asynchronous behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722904">13</a> by Robert Zehnder
		posted on 3/25/2010 at 4:37 PM
		</div>
		<div class="comment_text"><p>I find myself using synchronous calls more often than async ones.  I have gotten in trouble more than once expecting that an async call has already fired and it has not (I'm staring at you $.getJSON())..</p><p>I haven't seen the $.cfcp project and it doesn't look like I will ever see it, but I am comfortable with calling things the old-fashioned way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722901">14</a> by David McGuiganhttp://www.coldf
		posted on 3/25/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>I literally tried to respond to this post 6 times just now but every combination of what I wanted to say was flagged as spam. Have I offended the jedi?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722905">15</a> by Raymond Camden
		posted on 3/25/2010 at 7:14 PM
		</div>
		<div class="comment_text"><p>Sorry man - the spam protection can be a bit mysterious at times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722907">16</a> by Eric Hynds
		posted on 3/30/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>@Robert - switch back to async and put any logic that requires a response inside the "success" callback.  Your users will thank you for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722908">17</a> by Stephen Duncan Jr
		posted on 10/22/2010 at 8:56 PM
		</div>
		<div class="comment_text"><p>Sorry for reviving an old post, but I was looking for a better way to deal with this, and I thought I should share what I found.</p><p>By looking at the HTTP calls made when using cfajaxproxy, I discovered that you can send a single argumentCollection parameter as a JSON string to call the remote CFC method.</p><p>So the client side call looks something like this (using jquery-json plugin to do the serialization):</p><p>var params = {data: ['a', 'b', 'c']};<br>$.post('test.cfc', {method:"handleArray", returnFormat:"plain", argumentCollection: $.toJSON(params)}, function(res) {<br> alert($.trim(res));<br>				});</p><p>The benefit here is that there's no change to the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722906">18</a> by Raymond Camden
		posted on 10/22/2010 at 9:01 PM
		</div>
		<div class="comment_text"><p>Well now that is darn interesting. I hadn't though of using argumentCollection via Ajax. Would you be opposed to me blogging on that later? (In a more general context I mean.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722909">19</a> by Stephen Duncan Jr
		posted on 10/22/2010 at 9:30 PM
		</div>
		<div class="comment_text"><p>Not at all, please do.</p><p>Also, I added this (and my solution) as a question on stack-overflow if anyone has any more thoughts:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F3999283%2Fhow-can-i-send-an-array-variable-to-a-coldfusion-cfc-remote-method-via-ajax-using%3AzZcs9klzLSw3aZdjb6mJ-EMJ0K4&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/3999283/how-can-i-send-an-array-variable-to-a-coldfusion-cfc-remote-method-via-ajax-using">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722910">20</a> by Raymond Camden
		posted on 11/2/2010 at 6:21 AM
		</div>
		<div class="comment_text"><p>Dude, thank you again: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F11%2F1%2FUsing-argumentCollection-with-AJAX-calls-to-ColdFusion-Components%3AXFzLQmaqtUUIntEAkoy50kqZqYc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/11/1/Using-argumentCollection-with-AJAX-calls-to-ColdFusion-Components">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		