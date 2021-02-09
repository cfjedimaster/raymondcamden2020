
<div class="comment" id="c_1713671304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671304">1</a> by Ben Nadel
		posted on 9/1/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>Cool tip. My only comment would be to display Just the file name, rather than the whole path... if you are anything like me, you have about a 10 nested folders and have HUGE paths.</p><p>var arrPath = filefield.split( new RegExp( "[\\\/]+", "g" ) )[ 0 ];</p><p>output.innerHTML = arrPath[ arrPath.length - 1 ];</p><p>Thats not tested, but it should break the Path by path delimiter and then use the last item (the actual file name).</p><p>Just my 2 cents. Of course, I do have horrible directory structures.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671295">2</a> by todd sharp
		posted on 9/1/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>How bout just showing the filename, not the whole path?</p><p>&lt;script&gt;<br>function setFilename() {</p><p>   	var filefield = document.getElementById('fileone').value;<br>   	var output = document.getElementById('filename');<br>	var sep = '\\'</p><p>	//check for '/' file seperator<br>	if(filefield.indexOf('/') &gt;= 0){<br>		sep = '/';<br>	}</p><p>	var fileNameArr = filefield.split(sep);</p><p>   	output.innerHTML = fileNameArr[fileNameArr.length-1];<br>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671303">3</a> by todd sharp
		posted on 9/1/2007 at 12:48 AM
		</div>
		<div class="comment_text"><p>Wow, I hadn't seen your comment first there Ben!  Great minds think alike ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671306">4</a> by Ben Nadel
		posted on 9/1/2007 at 12:50 AM
		</div>
		<div class="comment_text"><p>Ha ha, that's funny. Yeah, we were probably typing at the same time. Sure beats the heck out of concentrating on my own work at 4:50 PM on a Friday afternoon :) ... Day almost over!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671305">5</a> by Raymond Camden
		posted on 9/1/2007 at 12:51 AM
		</div>
		<div class="comment_text"><p>That is a perfect idea.</p><p>I'm going to see if I can do a cf8 version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671307">6</a> by Raymond Camden
		posted on 9/1/2007 at 12:58 AM
		</div>
		<div class="comment_text"><p>Ben, I couldn't get your JS to work. Anyway, here is a CF8 version and man, that was a good idea you guys.</p><p>&lt;script&gt;<br>getFilename = function() {<br>	var filefield = fileone.value;<br>	var sep = '\\'</p><p>   //check for '/' file seperator<br>   if(filefield.indexOf('/') &gt;= 0) sep = '/';   <br>   var fileNameArr = filefield.split(sep);</p><p>   return  fileNameArr[fileNameArr.length-1];<br>  }<br>&lt;/script&gt;</p><p>&lt;cfform name="foo"&gt;<br>&lt;cfinput type="file" name="fileone"&gt;<br>&lt;cfdiv bind="javascript:getFilename({fileone})"&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671308">7</a> by Ben Nadel
		posted on 9/1/2007 at 1:03 AM
		</div>
		<div class="comment_text"><p>No worries - I didn't test mine. That's cool that you can bind right to a JS function!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671309">8</a> by todd sharp
		posted on 9/1/2007 at 1:04 AM
		</div>
		<div class="comment_text"><p>Careful with the first line (declaring filefield) - IE doesn't like the fileone.value...  Change it to  var filefield = document.getElementById('fileone').value; and IE is happy too...  But I like that CF8 version - man is that easy...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671310">9</a> by Raymond Camden
		posted on 9/1/2007 at 1:07 AM
		</div>
		<div class="comment_text"><p>Oh yeah - I normally do to the getElementCrap - I was just being lazy. I wish CF would auto drop a shortcut like spry does:</p><p>var somefield = Spry.$("id")</p><p>Ben: Yep, there are 3 main binds - and each have their own rules about when you can use them. The JS one here is nice. It lets me kind of filter things out. You could actually have 2 (or more) fields that did a bind like so:</p><p>field1 bind: javascript:someFunc({a})<br>field2 bind: javascript:someFunc({b})</p><p>Notice that they use the same JS funcs, but different values for binding.</p><p>This could be useful if, for example, cfgrid data wasn't formatted like you want.</p></div>
	</div>
</div>
		