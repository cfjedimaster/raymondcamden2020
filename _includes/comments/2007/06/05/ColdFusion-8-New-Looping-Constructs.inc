
<div class="comment" id="c_1713666285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666285">1</a> by Cutter
		posted on 6/5/2007 at 5:46 PM
		</div>
		<div class="comment_text"><p>So, in theory, SpoolMail could be adjusted to loop over the .cfmail file, set multiple variables for the various items (server, from, to, subject, body, etc.), and functions could be written in where anything could be changed prior to re-sending the message. For instance, correcting the 'to' address of a message, resetting the 'server' attribute in all messages prior to re-sending (useful if messages have become trapped in the spool due to a server failure and changeover), etc. The only thing missing is a method to crop each 'line' of the body to set a bodyArray to re-build each 'body' line...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666407">2</a> by Andy Matthews
		posted on 6/5/2007 at 5:50 PM
		</div>
		<div class="comment_text"><p>Good post Ray! That stuff about file looping is awesome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666422">3</a> by Raymond Camden
		posted on 6/5/2007 at 5:51 PM
		</div>
		<div class="comment_text"><p>Cutter - I'm not quite sure that would be a good use. In SpoolMail's case, every line is different, based on what is in front of the line. I'm not quite sure I'd use it for this. Not sure anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666421">4</a> by Cutter
		posted on 6/5/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>To a degree I don't think it matters right now. I just tried to install it on CF 8, following the install instructions, and it doesn't create the new menu option in the administrator. Maybe something different in how the CFIDE is constructed.</p><p>Is every line different? As you loop each line of the file you could look for "from:", "to:", "server:", starting from position 1 of the line. Or, you could automatically split each line at the first ":", setting a variable of the name of the first array element to the value of the second, or concatenating a variable if it's name already exists.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666417">5</a> by Raymond Camden
		posted on 6/5/2007 at 6:55 PM
		</div>
		<div class="comment_text"><p>Cutter - are you 100% sure? There was a bug earlier for the menu thing. It is fixed in my copy of CF8. If you don't see this, please file a bug with Adobe. But I'm 99% sure this is fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666426">6</a> by Frederic Fortier
		posted on 6/5/2007 at 11:33 PM
		</div>
		<div class="comment_text"><p>What about multidimensional array. A one dimension array.. is no more different then a list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666423">7</a> by Lyle
		posted on 6/5/2007 at 11:43 PM
		</div>
		<div class="comment_text"><p>You're right, having startIndex and endIndex work with these would be very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666420">8</a> by Jim
		posted on 9/15/2009 at 9:43 PM
		</div>
		<div class="comment_text"><p>Ray,<br>In CF8, what if I need to know which element of the array I'm on?<br>given: arrFilter[1] has three data items [dog,cat,bird]<br>             &lt;cfloop array="#arrFilter#" index="i"&gt;<br>                   #i# - <br>             &lt;/cfloop&gt;<br>dog - cat - bird -<br>But, I need to know which position of the array I'm at.  How?</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666418">9</a> by Raymond Camden
		posted on 9/15/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>Then you use the old format, from 1 to array len. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666425">10</a> by andy matthews
		posted on 9/15/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>You could also create your own counter var. Struct loops aren't always in order, but array loops are. Just set a var, then increment it inside your loop.</p></div>
	</div>
</div>
		