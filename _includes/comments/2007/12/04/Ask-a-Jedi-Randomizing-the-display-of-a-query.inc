
<div class="comment" id="c_1713674907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674907">1</a> by Dave Ferguson
		posted on 12/5/2007 at 12:04 AM
		</div>
		<div class="comment_text"><p>Here is another way to do it. This uses java Shuffle to  random the list. Much less code and faster too.</p><p>&lt;CFSET ShuffObj = CreateObject("java", "java.util.Collections")&gt;<br>&lt;CFSET shuffArray = ListToArray( "1,2,3,4,5,6,7,8,9,10" ) /&gt;<br>&lt;CFSET ShuffObj.Shuffle( shuffArray ) /&gt;</p><p>&lt;CFOUTPUT&gt;<br>#ArrayToList(shuffArray)#<br>&lt;/CFOUTPUT&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674929">2</a> by Charles Toro
		posted on 12/5/2007 at 12:07 AM
		</div>
		<div class="comment_text"><p>Really simplified my code!  Thanks for sharing some more of your knowledge.</p><p>-Charles</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674916">3</a> by DanaK
		posted on 12/5/2007 at 1:40 AM
		</div>
		<div class="comment_text"><p>Pete Freitag has a good blog post on how to do random row selection on a variety of databases</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F466.cfm%3A4jELIHK_DO18BiQAQL3DnQDXuTM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/466.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674921">4</a> by David Herman
		posted on 12/5/2007 at 1:44 AM
		</div>
		<div class="comment_text"><p>Like Ray said though it is best to do it at the DB level. They mainly  involve ordering by some random item.<br>For sql server: ORDER BY newId()<br>For mysql: ORDER BY RAND()<br>for Oracle: ORDER BY dbms_random.value</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674919">5</a> by Ben Nadel
		posted on 12/5/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>@Dave,</p><p>The Collections interface is so beautiful :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674920">6</a> by Sammy Larbi
		posted on 12/5/2007 at 2:58 AM
		</div>
		<div class="comment_text"><p>I was going to mention the same as David H.   Do we know if newId() is guaranteed to produce pseudorandomly ordered UUIDs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674922">7</a> by Charles Toro
		posted on 12/5/2007 at 4:59 AM
		</div>
		<div class="comment_text"><p>newid() would not produce the results I needed for the way the DB was set up unfortunately...  In my/this particular case, I was stuck doing it with CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674923">8</a> by Nathan D
		posted on 12/5/2007 at 1:13 PM
		</div>
		<div class="comment_text"><p>If you were not going to use the more elegant java or DB-based solutions already proposed and needed, for some reason, to stay in pure CF you'd likely be better off building an array then grabbing/deleting a random element from it each time.  Doing list functions is expensive because you are string parsing every time, so if doing more than a trivial number  of rows you could get sluggish.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674924">9</a> by Sammy Larbi
		posted on 12/5/2007 at 5:12 PM
		</div>
		<div class="comment_text"><p>@Charles Toro- what were the results and what were you expecting?<br>What was the difference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674928">10</a> by Raymond Camden
		posted on 12/5/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>@Nathan - good point, but I don't think much of the code above would change. We would still need a list of rows - but it would be made by array, and the rList would use arrayAppend instead.</p><p>Think it's worth it to make a follow up post w/ that code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674925">11</a> by Charles Toro
		posted on 12/6/2007 at 8:35 PM
		</div>
		<div class="comment_text"><p>@Sammy - This did exactly what was needed, my original code was the hard way and I got stuck (Thats what happens when you go on a CF hiatus I guess).  This code is to back a random 10 question evaluation for intranet use.  There are 20-30 questions to choose from, and potential for more to be added.</p><p>@Nathan  - I think I will run with your recommendation, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674927">12</a> by Will Wilson
		posted on 4/21/2008 at 5:34 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, exactly what I was after.</p></div>
	</div>
</div>
		