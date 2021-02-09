
<div class="comment" id="c_1713666452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666452">1</a> by Matthew
		posted on 6/5/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666444">2</a> by Rick Osborne
		posted on 6/5/2007 at 8:02 PM
		</div>
		<div class="comment_text"><p>I would have said &lt;cfset thisWednesday=dateAdd("d",4-dayOfWeek(now()), now())&gt;, but each to their own.  ;-)</p><p>Getting the *next* Wednesday isn't too much trickier:</p><p>&lt;cfset nextWednesday = dateAdd("d",(11-dayOfWeek(now())) MOD 7, now())&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666432">3</a> by Ben Nadel
		posted on 6/5/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>You know I love my date math:</p><p>&lt;!--- 1: sunday, 7: staurday. ---&gt;<br>&lt;cfset intDay = 4 /&gt;</p><p>#DateFormat(<br>    (Fix( Now() ) - DayOfWeek( Now() )) + intDay<br>    )#</p><p>It's all numbers to me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666450">4</a> by Dale Fraser
		posted on 6/6/2007 at 9:40 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Your code doesn't work.</p><p>&lt;!--- Sunday = 1, Satuarday = 7 ---&gt;<br>&lt;cfset today = createDate(2007, 6, 9) /&gt;<br>&lt;cfset friday = dateAdd("d", (dayOfWeek(today) - 6) * -1, today) /&gt;<br>&lt;cfoutput&gt;#friday#&lt;/cfoutput&gt;</p><p>Outputs</p><p>{ts '2007-06-08 00:00:00'}</p><p>So it gave me the previous Friday</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666440">5</a> by Dale Fraser
		posted on 6/6/2007 at 9:43 AM
		</div>
		<div class="comment_text"><p>Rick,</p><p>Yours has the same problem</p><p>&lt;!--- Sunday = 1, Satuarday = 7 ---&gt;<br>&lt;cfset today = createDate(2007, 6, 9) /&gt;<br>&lt;cfset friday = dateAdd("d", 6-dayOfWeek(now()), now()) /&gt;<br>&lt;cfoutput&gt;#friday#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666449">6</a> by Dale Fraser
		posted on 6/6/2007 at 10:45 AM
		</div>
		<div class="comment_text"><p>You probably have no idea what i'm on about, now I realise the problem lies in that my week isn't Sunday - Satuarday (not sure who's is). The one I wanted was Satuarday - Friday.</p><p>&lt;!--- Sunday = 1, Satuarday = 7 ---&gt;<br>&lt;cfset today = createDate(2007, 6, 16) /&gt;<br>&lt;cfset dow = dayOfWeek(today) /&gt;<br>&lt;cfif dow eq 7&gt;<br>	&lt;cfset friday = dateAdd("d", 6, today) /&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset friday = dateAdd("d", (dow - 6) * -1, today) /&gt;<br>&lt;/cfif&gt;<br>&lt;cfoutput&gt;#friday#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666441">7</a> by Raymond Camden
		posted on 6/6/2007 at 3:28 PM
		</div>
		<div class="comment_text"><p>Dale - no. The user didn't want the next X. He wanted this weeks X. See how in the blog entry, at the end, I talk about another function to get prev/last day of week dates?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666445">8</a> by Dale Fraser
		posted on 6/6/2007 at 4:15 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I wanted the same thing, but my week is different.</p><p>I think dayOfWeek should have a paramater to specify what the first day of the week is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666443">9</a> by Raymond Camden
		posted on 6/6/2007 at 5:02 PM
		</div>
		<div class="comment_text"><p>Dale - check CFLib. There is an ISODOW there I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666448">10</a> by Ben Nadel
		posted on 6/6/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>@Dale,</p><p>I wrote something like that a little while ago in answer to someone's question. It takes an optional argument for which day is the first of the week:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A691.view%3AKUh-io_4v58MrntqeOzlcmpjZ_8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:691.view">http://www.bennadel.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666442">11</a> by Norm
		posted on 6/28/2007 at 1:01 AM
		</div>
		<div class="comment_text"><p>Thanks for taking the time to create this blog.  It really helped me figure out how to get my scheduling program working properly.</p><p>Code On!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666451">12</a> by mac32
		posted on 3/23/2009 at 9:02 AM
		</div>
		<div class="comment_text"><p>how can I use this to find out what the second Wed of each month is. I have a project where the client wants a calculation done only on the 2nd wed of each month.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666446">13</a> by Raymond Camden
		posted on 3/24/2009 at 5:14 AM
		</div>
		<div class="comment_text"><p>Here ya go:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf%2FGetNthOccOfDayInMonth%3A-IyYlMNdO_i-OKNkLE2U6lvsC7k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf/GetNthOccOfDayInMonth">http://www.cflib.org/udf/Ge...</a></p></div>
	</div>
</div>
		