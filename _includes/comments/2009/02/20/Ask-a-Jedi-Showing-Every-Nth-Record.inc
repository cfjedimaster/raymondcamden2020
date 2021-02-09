
<div class="comment" id="c_1713713217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713217">1</a> by tony weeg
		posted on 2/20/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>:) thanks for the help this morning ray, the truth of the MOD part is that i was thoroughly ok using this:</p><p>&lt;cfif i mod 2&gt;</p><p>&lt;/cfif&gt;</p><p>and showing every other row.  the problem i had was how to show every 5th row... and once ray clued me into the necessity of adding "eq 0" to the mix, all was well, thanks again ray!!</p><p>so the final version ended up as:</p><p>&lt;cfif ((i mod 5) = 0)&gt;</p><p>&lt;/cfif&gt;</p><p>because as ray explained, mod basically means, gimme the remainder</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713218">2</a> by ulan
		posted on 2/20/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>I never knew it was the remainder</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713220">3</a> by Timothy Farrar
		posted on 2/20/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Just curious... I like the implementation here, but would the step attribute for the loop tag work also for this situation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713219">4</a> by chris
		posted on 2/20/2009 at 8:11 PM
		</div>
		<div class="comment_text"><p>Why not use step?</p><p>&lt;cfloop index="x" from="1" to="#people.recordCount#" step="6"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713221">5</a> by Timothy Farrar
		posted on 2/20/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>oh... I thought about it... only in  the case of an index loop... so this solution is probably better as it works in more situations... never mind :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713222">6</a> by Raymond Camden
		posted on 2/20/2009 at 8:13 PM
		</div>
		<div class="comment_text"><p>-sigh-</p><p>Timothy and Chris schooled us Tony. ;)</p><p>Although you have to modify your FROM:</p><p>&lt;cfloop index="x" from="#nth#" to="#people.recordCount#" step="#nth#"&gt;<br>		&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fpeople.name%3ArYGOk5USReUR3FE0kJ_SueTylFA&amp;cuid=3321886" rel="nofollow noopener" title="people.name">people.name</a>[x]#&lt;br/&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>If you don't start with Nth, then your values are off. So instead of 5,10,15 for counting by 5s, you get 1,6, 11.</p><p>Have I lost the respect of the CF world now? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713223">7</a> by tony weeg
		posted on 2/20/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>sometimes we over think brother, its ok :) jedimaster status for you, and padawon status for me are still there</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713224">8</a> by tony weeg
		posted on 2/20/2009 at 9:17 PM
		</div>
		<div class="comment_text"><p>one other cool thing ive learned through this was the ability to filter and get the results you want through straight SQL. assuming there are no deleted rows that would throw off the results, you could write your query to do this:</p><p>select *<br>from lcdsmetrics<br>where dateEntered between '02/19/2009' and '02/20/2009'<br>and (id % 5 = 0)<br>order by dateEntered</p><p>which would give you essentially the same thing as step="5" would but it would bring less records back from the server therefore decreasing the payload from the outset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713227">9</a> by Chris Clark
		posted on 2/20/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>What if you were dealing with a ...very... large result set. Would it be possible (and would there be any benefit) to doing this in the actually query code, as opposed to the output code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713225">10</a> by Chris Clark
		posted on 2/20/2009 at 9:21 PM
		</div>
		<div class="comment_text"><p>Haha ... Tony answered my question already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713226">11</a> by Raymond Camden
		posted on 2/20/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>@tony - that assumes continuous IDs though. If you delete anything that would break it.</p><p>@Chris - yep - you would never do this over a billion records. But for a 'reasonable' size I think it is fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713310">12</a> by tony weeg
		posted on 2/20/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>yup and thats why i caveat'd that with the assumption of no deleted rows, but i bet you could #temp table that, and assign a new id field to count off of, and use that, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713318">13</a> by Raymond Camden
		posted on 2/20/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>Serves me right for looking at your code and not actually _reading_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713317">14</a> by Adrian J. Moreno
		posted on 2/20/2009 at 9:53 PM
		</div>
		<div class="comment_text"><p>In reply to this post, I just posted a SQL approach to this that doesn't rely on the primary ID:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.iknowkungfoo.com%2Fblog%2Findex.cfm%2F2009%2F2%2F20%2FSQL-approach-to-Showing-Every-Nth-Record%3AH5woR5xt4aWcbK75yO2NOmHyy7E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.iknowkungfoo.com/blog/index.cfm/2009/2/20/SQL-approach-to-Showing-Every-Nth-Record">http://www.iknowkungfoo.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713319">15</a> by Dave DuPlantis
		posted on 2/20/2009 at 10:17 PM
		</div>
		<div class="comment_text"><p>And then you can take Adrian's method and modify the WHERE clause if you need to start at a specific record (as Ray mentions above with respect to the cfloop approach).</p><p>To get every N records starting with record X, just replace 5 with N and 0 with X. (Assuming X &lt; N; for X = N, use 0 for X as Adrian did in the example. If X &gt; N, then you'll miss at least one record you wanted.)</p></div>
	</div>
</div>
		