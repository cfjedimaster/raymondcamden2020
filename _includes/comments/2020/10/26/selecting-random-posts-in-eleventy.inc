
<div class="comment" id="c_5129228440">
	<div>
		<img src="https://disqus.com/api/users/avatars/mahemoff.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5129228440">1</a> by mahemoff
		posted on 10/29/2020 at 7:43 AM
		</div>
		<div class="comment_text"><p>I think getRandom3 could be done without the guard clause with negligible performance impact. ie removing "if(!items.length || items.length &lt; 2) return;" since the filters would just degenerate to finding empty sets.</p><p>You could also drop "if(myItems.length === 0) return;" as well, since the next line would just return undefined for an out-of-bounds array reference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5129597765">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5129597765">2</a> (In reply to <a href="#c_5129228440">#1</a>) by Raymond Camden
		posted on 10/29/2020 at 2:32 PM
		</div>
		<div class="comment_text"><p>Can I be pushy and ask for a complete version I can see? I'm still not *seeing* it if that makes sense. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_5131723721">
	<div>
		<img src="https://disqus.com/api/users/avatars/mahemoff.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5131723721">3</a> (In reply to <a href="#c_5129597765">#2</a>) by mahemoff
		posted on 10/31/2020 at 12:49 AM
		</div>
		<div class="comment_text"><p>No worries. Something like this (untested):</p><p><code><br>eleventyConfig.addFilter("getRandom3", function(items,avoid,category) {<br><br>	let myItems = items.filter(i =&gt; {<br>		return (i.data.categories === category) &amp;&amp; (i.url !== avoid.url);<br>	});<br><br>	if(myItems.length === 0) {<br>		myItems = items.filter(i =&gt; {<br>			return i.url !== avoid.url;<br>		});<br>	}<br><br>	return myItems[Math.floor(Math.random() * myItems.length)];<br>});<br></code></p><p>Only change is I removed the first and second-last line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5132243894">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5132243894">4</a> (In reply to <a href="#c_5131723721">#3</a>) by Raymond Camden
		posted on 10/31/2020 at 2:27 PM
		</div>
		<div class="comment_text"><p>omg yes - ok - now I see it and thank you!</p></div>
	</div>
</div>
		