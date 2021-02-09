
<div class="comment" id="c_1713729960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729960">1</a> by Will B.
		posted on 2/22/2011 at 7:16 PM
		</div>
		<div class="comment_text"><p>My right-off-the-top-of-my-head thought is two counters.  Inside the loop, increment the 1-to-5 counter and if GT 5 (before using), set to 1.  Quickest way I can come up with.</p><p>I'm sure there's some more complex mathematical methods, if you were so inclined.</p><p>- Will B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729985">2</a> by Raymond Camden
		posted on 2/22/2011 at 7:20 PM
		</div>
		<div class="comment_text"><p>One thing I should have added - I wanted to avoid any IF conditions (or trenary conditions).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729984">3</a> by Daniel Budde
		posted on 2/22/2011 at 7:29 PM
		</div>
		<div class="comment_text"><p>I don't know that this is any more elegant of a solution, but you could place inside your loop:</p><p>&lt;cfif x lte toCount&gt;<br>	&lt;cfset answer = x /&gt;<br>&lt;cfelseif x mod toCount eq 0&gt;<br>	&lt;cfset answer = toCount /&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset answer = (x mod toCount) /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729990">4</a> by Andrea Colanicchia
		posted on 2/22/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>&lt;cfset records = 12&gt;<br>&lt;cfset toCount = 5&gt;</p><p>&lt;cfloop index="x" from="1" to="#records#"&gt;</p><p>&lt;cfset answer = ((x -1) MOD toCount) + 1&gt;<br>	&lt;cfoutput&gt;<br>		Record: #x#&lt;br/&gt;    <br>		Answer: &lt;b&gt;#answer#&lt;/b&gt;&lt;br/&gt;<br>		&lt;br/&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>Not tested...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729986">5</a> by Daniel Budde
		posted on 2/22/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>Dag nabbit, you posted the 'no IF' while I was in the middle of writing that out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729962">6</a> by Lance
		posted on 2/22/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>Don't know if it is any simpler.  But her is an alternate method to computer answer.</p><p>&lt;cfset answer = ((x-1) mod toCount) + 1&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729964">7</a> by Joy Anderson
		posted on 2/22/2011 at 7:49 PM
		</div>
		<div class="comment_text"><p>&lt;cfset records = 12&gt;<br>&lt;cfset toCount = 5&gt;<br>&lt;cfset answer = 1&gt;</p><p>&lt;cfloop index="x" from="1" to="#records#"&gt;<br>	&lt;cfif answer IS toCount&gt;<br>		&lt;cfset answer = 1&gt;	<br>	&lt;cfelse&gt;<br>		&lt;cfset answer = answer + 1&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfoutput&gt;<br>	Record: #x#&lt;br&gt;<br>	Answer: #answer#&lt;br&gt;<br>	&lt;br&gt;<br>	&lt;/cfoutput&gt;	<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729966">8</a> by Bob W
		posted on 2/22/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>+1 to Andrea's answer, same as what I came up with (Lance's is the same as well) - not much simpler than your answer but I think it is a bit more clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729963">9</a> by Pat Coyne
		posted on 2/22/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>Another variant on mod. Dunno if it's any clearer.</p><p>&lt;cfset records = 12&gt;<br>  &lt;cfset toCount = 5&gt;<br>  &lt;cfset n=1&gt;<br>  &lt;cfloop index="x" from="1" to="#records#"&gt;</p><p>      &lt;cfoutput&gt;</p><p>      Record: #n#&lt;br/&gt;    <br>      &lt;br/&gt;<br>	  &lt;cfif #n# mod #toCount# is 0&gt;<br>	  &lt;cfset n=0&gt;<br>	  &lt;/cfif&gt;<br>      &lt;/cfoutput&gt;<br>	  &lt;cfset n=#n#+1&gt;<br> &lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729965">10</a> by Phillip Senn
		posted on 2/22/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>+1 Andrea.<br>Here it is in Microsoft SQL Server, where the percent sign is the MOD operator:</p><p>DECLARE @myTable TABLE(<br>TableID Int Identity<br>,Answer Int<br>)<br>INSERT INTO @myTable(Answer) VALUES(1)<br>INSERT INTO @myTable(Answer) VALUES(2)<br>INSERT INTO @myTable(Answer) VALUES(3)<br>INSERT INTO @myTable(Answer) VALUES(4)<br>INSERT INTO @myTable(Answer) VALUES(5)<br>INSERT INTO @myTable(Answer) VALUES(6)<br>INSERT INTO @myTable(Answer) VALUES(7)<br>INSERT INTO @myTable(Answer) VALUES(8)<br>INSERT INTO @myTable(Answer) VALUES(9)<br>INSERT INTO @myTable(Answer) VALUES(10)<br>INSERT INTO @myTable(Answer) VALUES(11)<br>INSERT INTO @myTable(Answer) VALUES(12)</p><p>SELECT *<br>,((Answer-1) % 5+1) AS ModAnswer<br>FROM @myTable<br>order by Answer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729969">11</a> by Shrainik
		posted on 2/23/2011 at 12:43 PM
		</div>
		<div class="comment_text"><p>x = 11;<br>for(var i=0;i&lt;=x;i++){<br>output( i%5 + 1 );<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729968">12</a> by Jonathan
		posted on 2/25/2011 at 12:28 PM
		</div>
		<div class="comment_text"><p>&lt;cfset records = 12&gt;<br>&lt;cfset toCount = 5&gt;</p><p>&lt;cfloop index="x" from="1" to="#records#"&gt;<br>	&lt;cfset answer = iif(x mod toCount,x mod toCount,toCount)&gt;<br>	&lt;cfoutput&gt;<br>	Record: #x#&lt;br/&gt;    <br>	Answer: &lt;b&gt;#answer#&lt;/b&gt;&lt;br/&gt;<br>	&lt;br/&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		