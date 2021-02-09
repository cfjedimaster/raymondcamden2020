
<div class="comment" id="c_4892785496">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4892785496">1</a> by Dylan Sather
		posted on 4/28/2020 at 6:25 AM
		</div>
		<div class="comment_text"><p>“My sheet uses two columns so my range goes from A2 in one corner (A1 is the header) to B999 in the other. That means if I ever have one thousand rows I'll need to edit the range”</p><p>I _think_ simply A:B works, and extends the range to future columns. On mobile so can’t test right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4892791124">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4892791124">2</a> by Dylan Sather
		posted on 4/28/2020 at 6:36 AM
		</div>
		<div class="comment_text"><p>Also, you could pass the array of rows returned by the Sheets action to the “Get Random Element from Array” action and avoid the getRandomIntInclusive function: <a href="https://disq.us/url?url=https%3A%2F%2Fpipedream.com%2F%40dylan%2Frandom-element-p_RRCPBQ%2Fedit%3A3R0awjDtKPsIBn7lryilXb2zzQo&amp;cuid=3321886" rel="nofollow noopener" title="https://pipedream.com/@dylan/random-element-p_RRCPBQ/edit">https://pipedream.com/@dyla...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4892792644">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4892792644">3</a> (In reply to <a href="#c_4892791124">#2</a>) by Raymond Camden
		posted on 4/28/2020 at 6:39 AM
		</div>
		<div class="comment_text"><p>Ah, I didn't know such a thing existed. This is why we need a good way to browse all the shared actions. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4892793605">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4892793605">4</a> (In reply to <a href="#c_4892785496">#1</a>) by Raymond Camden
		posted on 4/28/2020 at 6:41 AM
		</div>
		<div class="comment_text"><p>But wouldn't A:B also return row one? I could get rid of the header, but I was imaging this being used by a non-technical person. I could also delete row one in code before selecting the random item.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893264736">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893264736">5</a> (In reply to <a href="#c_4892793605">#4</a>) by Dylan Sather
		posted on 4/28/2020 at 3:58 PM
		</div>
		<div class="comment_text"><p>Good call. Check out how I modified the Get Values from Sheets action to include a "Include Header Row" param: <a href="https://disq.us/url?url=https%3A%2F%2Fpipedream.com%2F%40dylburger%2Fignore-header-row-in-google-sheets-get-values-p_MOCQBY%2Fedit%3AHejDlQEn2HULo9v167J5VE8356g&amp;cuid=3321886" rel="nofollow noopener" title="https://pipedream.com/@dylburger/ignore-header-row-in-google-sheets-get-values-p_MOCQBY/edit">https://pipedream.com/@dylb...</a> .</p><p>I'm including this in the code for the original action so you'll see this next time you use it (just getting a code review on that change).</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893265905">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893265905">6</a> (In reply to <a href="#c_4892792644">#3</a>) by Dylan Sather
		posted on 4/28/2020 at 3:59 PM
		</div>
		<div class="comment_text"><p>I hear you. Event sources are the priority now because they're higher value for so many users, but that'll be coming.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893275027">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893275027">7</a> (In reply to <a href="#c_4893264736">#5</a>) by Raymond Camden
		posted on 4/28/2020 at 4:06 PM
		</div>
		<div class="comment_text"><p>A few thoughts:</p><p>I think the docs on this need to be clearer. If I ask for A1, and I have ignore header row, does that mean A1 is really A2? In general I'd be afraid of using this as I wouldn't be sure what it does to 1-N indexes. Maybe it only makes sense if you have an option to get all? If there was a get all, I'd imagine the range thing would be disabled, and then this option would be useful. And speaking of - I see range is optional. I didn't even notice that before. If left blank, is everything returned? That may be obvious, but if so, I'd make it clearer.</p><p>Finally - there should be a way for me, when looking at a workflow, to check and see which steps have been updated. That way I can optionally choose to "swap in" the new version (and maybe rollback if things break).</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893299881">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893299881">8</a> (In reply to <a href="#c_4893275027">#7</a>) by Dylan Sather
		posted on 4/28/2020 at 4:26 PM
		</div>
		<div class="comment_text"><p>Would "Include First Row" be more clear? The use case for removing the header row is so common I do think it makes sense (as an optional param that defaults to true). This manipulates the data _after_ Sheets returns it, so if you include A1:A10, and remove the header row, you'd still fetch the values in A1:10, but the action would return the rows A2:A10. We can clarify that language if that helps?</p><p>Range is required, unless you're seeing something I'm not?</p><p> <a href="https://uploads.disquscdn.com/images/06a252cc67b1b2cd98272a5d82ba28ab3716643a928b1d7489bc485fdea65cad.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/06a252cc67b1b2cd98272a5d82ba28ab3716643a928b1d7489bc485fdea65cad.png">https://uploads.disquscdn.c...</a></p><p>I hear you on the action update use case. I realized we didn't have a public issue for that so feel free to +1 here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FPipedreamHQ%2Froadmap%2Fissues%2F438%3AxdTaigK4AuxfbRg0Lj6755jXWhY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/PipedreamHQ/roadmap/issues/438">https://github.com/Pipedrea...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4893323965">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893323965">9</a> (In reply to <a href="#c_4893299881">#8</a>) by Raymond Camden
		posted on 4/28/2020 at 4:44 PM
		</div>
		<div class="comment_text"><p>Um.... honestly I don't think I get it. If I'm specifying a range, why wouldn't I just use A2 if I don't want the headers? In other words, why would I use A1 if my intent is to not include the header? (And sorry, I misread the UI, range is required.)</p><p>I absolutely agree that removing the headers is a common use case, but if range is required, I also don't see why I'd ever include the header in that case. The only time I would be when using what you had suggested as a way to avoid specifying an end range.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893375440">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893375440">10</a> (In reply to <a href="#c_4893323965">#9</a>) by Dylan Sather
		posted on 4/28/2020 at 5:22 PM
		</div>
		<div class="comment_text"><p>Yeah, I was trying to avoid users having to hardcode the start and end of the range. We see this use case a lot: I want all records in a given column (without having to hardcode the end number of the range), but usually don't want the header row. This combination of options (A:B, Include Header Row = false) is just one way to approach the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893383309">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893383309">11</a> (In reply to <a href="#c_4893375440">#10</a>) by Raymond Camden
		posted on 4/28/2020 at 5:28 PM
		</div>
		<div class="comment_text"><p>So if I do A1 as a range and exclude headers, is my first row the second row? ie result[0] will be the first row of data? If I do A2 and exclude headers, what's the first row - the same? Ie it basically says "you didn't ask for the header but asked me to exclude it but I don't need to do anything" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893403481">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893403481">12</a> (In reply to <a href="#c_4893383309">#11</a>) by Dylan Sather
		posted on 4/28/2020 at 5:43 PM
		</div>
		<div class="comment_text"><p>Setting that param to false just removes the first element of the values property returned by Google Sheets:</p><p><code><br>if (includeHeader === false) {<br>  // Remove the first row<br>  response.data.values.shift()<br>}<br></code></p><p>If you just specify A1 and set includeHeader to false, you'll get no results: you asked for one row, and you also asked to remove the first row. Same with just including A2 and setting includeHeader to false: no data. That's why I think it makes sense to change the param to "Include First Row", since you're not always asking for a range that starts at A1 (in that case you probably would have never used the Include First Row param to begin with, though).</p><p>I empathize with the confusion, though. I'm letting all this marinate to see if there's a way to clarify in description / inline docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893418741">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893418741">13</a> (In reply to <a href="#c_4893403481">#12</a>) by Raymond Camden
		posted on 4/28/2020 at 5:54 PM
		</div>
		<div class="comment_text"><p>First off, an apology, when I said A1 and A2, I was being lazy, I meant using A1 or A2 as a starting point, so assume A1-A10 or some such. Let me rephrase then:</p><p>If I ask for A1 to A10, what happens when the setting, whatever it is, is on or off.<br>If I ask for A2 to A10, what happens when the setting is on or off?</p><p>I honestly think I would _not_ include this setting unless you specifically support an option to 'get all'. I think as soon as you ask for a range, you are being very specific on what you want, and this other setting then is just going to be confusing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4893421028">
	<div>
		<img src="https://disqus.com/api/users/avatars/dylansather.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4893421028">14</a> (In reply to <a href="#c_4893418741">#13</a>) by Dylan Sather
		posted on 4/28/2020 at 5:56 PM
		</div>
		<div class="comment_text"><p>Sure, that's good feedback.</p></div>
	</div>
</div>
		