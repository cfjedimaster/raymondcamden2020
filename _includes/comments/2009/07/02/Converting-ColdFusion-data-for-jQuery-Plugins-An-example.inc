
<div class="comment" id="c_1713716636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716636">1</a> by Phillip Senn
		posted on 7/3/2009 at 5:01 PM
		</div>
		<div class="comment_text"><p>You have a typo where your fingers autocompleted "real date" when you meant "real data".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716639">2</a> by Raymond Camden
		posted on 7/3/2009 at 5:06 PM
		</div>
		<div class="comment_text"><p>Fixed, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716628">3</a> by Kerrie Whelan
		posted on 7/6/2009 at 4:22 PM
		</div>
		<div class="comment_text"><p>Ray, now I get it!  Thanks so very much for taking the time to work on this.  Kerrie</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716640">4</a> by Kerrie Whelan
		posted on 7/7/2009 at 12:45 AM
		</div>
		<div class="comment_text"><p>Just one thing I had to add to your example (in case anyone else is trying to get this to work). Inside the loop ... &lt;cfset s=structNew()&gt;</p><p> &lt;cfloop query="entrylookup"&gt;<br>      &lt;cfset s = structNew()&gt;<br>      &lt;cfset s["id"] = id&gt;<br>      &lt;cfset s["name"] = title&gt;<br>      &lt;cfset arrayAppend(r, s)&gt;<br>   &lt;/cfloop&gt;</p><p>Thanks again Ray :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716644">5</a> by Raymond Camden
		posted on 7/7/2009 at 12:46 AM
		</div>
		<div class="comment_text"><p>Hmm. Why? Are you not on CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716646">6</a> by Kerrie Whelan
		posted on 7/7/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>CF8 yes.  (I am using the Developer's edition for testing).  Without adding structNew() my results were repeated.</p><p>array  <br>1 struct <br>id 343618  <br>name Repeated</p><p>2 struct <br>id 343618  <br>name Kelly Repeated</p><p>3 struct <br>id 343618  <br>name Kelly Repeated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716637">7</a> by Raymond Camden
		posted on 7/7/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>That's odd. The struct has 2 keys, id and name. In each iteration, we overwrite them. Unless its a pointer issue - but I was on CF8 just like you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716643">8</a> by Chris Hampton
		posted on 7/24/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, this saved me a huge headache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716638">9</a> by Matt Drake
		posted on 8/6/2009 at 7:24 AM
		</div>
		<div class="comment_text"><p>Hi Ray - thanks for this example!  Made figuring out CF to jQuery a lot easier!</p><p>I do have to agree with Kerrie above though - if I didn't put structNew() inside of the loop then the one data point was just repeated for each row in the query as opposed to each row's values.  I am using CF8 as well.  (I was only using the last piece of code you had so I don't have the  &lt;cfset r[arrayLen(r)+1] = s&gt; in there).</p><p>So the code that worked for me is:<br>&lt;cfloop query="GetStates"&gt;<br>	&lt;cfset gsPoint = structNew()&gt;<br>	&lt;cfset gsPoint["id"] = StateID&gt;<br>	&lt;cfset gsPoint["abbrev"] = StateAbbrev&gt;<br>	&lt;cfset gsPoint["name"] = StateName&gt;<br>	&lt;cfset arrayAppend(gsQry, gsPoint)&gt;<br>&lt;/cfloop&gt;</p><p>Thanks!</p></div>
	</div>
</div>
		