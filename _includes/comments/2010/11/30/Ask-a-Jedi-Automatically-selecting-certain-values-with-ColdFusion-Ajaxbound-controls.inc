
<div class="comment" id="c_1713728015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728015">1</a> by Richard Migambi
		posted on 12/1/2010 at 12:12 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I have been trying to use this example and similar ones(from Ben Forta), these work fine on my machine but not on my host server.  I always get a bind error:cannot find cfc(cfc name). Yet I can call this cfc using cfinvoke and it returns the values fine. I use CF9 same as the host server...any pointers please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728016">2</a> by Raymond Camden
		posted on 12/1/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>It should work if it can find the CFC. Do you have it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728021">3</a> by Richard
		posted on 12/1/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>unfortunately no as it's protected by a password(it's a client site) - i have tried moving the page i call the cfc from to the webroot though and it works but still not what am looking to do</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728017">4</a> by Daniel Heighton
		posted on 12/1/2010 at 8:29 PM
		</div>
		<div class="comment_text"><p>I am working on stuff very similiar to this site, and may use this. I had a related problem though. If you were to use a javascript function to select certain items in the Media ID select. (In my case I made a hyperlink to select related elements). It seems the second dropdown doesn't get the change() event or something and never updates. Any thoughts on that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728018">5</a> by Raymond Camden
		posted on 12/1/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>@Richard: Not sure what to suggest. Does Firebug show anything odd? Like a redirect or an error or something else?</p><p>@Daniel: Yeah - thats an issue I've had for a LONG time. There has never been a way to 'force' a bind refresh. I blogged on it before I think - there is a function you can call, it's just not documented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728019">6</a> by Daniel Heighton
		posted on 12/1/2010 at 9:00 PM
		</div>
		<div class="comment_text"><p>@Raymond: I found your blog entry for this, incase anyone is interested: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F7%2F8%2FForcing-ColdFusion-to-recognize-changes-made-to-data-used-for-Ajax-bindings%3ATuRkvvcmxh23JCGYkAPHSET7EBQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/7/8/Forcing-ColdFusion-to-recognize-changes-made-to-data-used-for-Ajax-bindings">http://www.coldfusionjedi.c...</a></p><p>I'll look into using this today. In my own pages I was trying to force the change event with jquery's event functions, but it never worked. It also might help me get some Jquery plugins working overtop of the select statements (things to make mulitple selects easier to use, like ASM Select)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728022">7</a> by Raymond Camden
		posted on 12/1/2010 at 9:05 PM
		</div>
		<div class="comment_text"><p>Can I just say that it is sad that you were able to find it and I could not - even though it's my own blog. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728020">8</a> by Daniel Heighton
		posted on 12/1/2010 at 10:52 PM
		</div>
		<div class="comment_text"><p>I just searched for "cfselect" I think it was in the first 3 results! Though the date explained why I hadn't read it since I didn't start following until this year sometime.</p><p>Very tangential to the post itself, but related since it comes down to usability with selects. I like to avoid using select-multiples for usability reasons. (Lots of non-techies struggle with them). But the power they give in using them for searching and forms is incredible.</p><p>I've been trying to use a JQuery plugin called ASM (Alternative Select Multiple) with the cfselect elements bound to CFCs. It never works. The Bind handler never seems to execute the change() event properly, or something but when I execute manually via a button or hyperlink it works just fine.</p><p>Ultimately, I think I just need to make the switch to using JQuery's Ajax with Coldfusion. Do you have any references on tutorials on making the jump.</p><p>Off to search your blog posts. So I may find it before you do ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728024">9</a> by Richard Migambi
		posted on 12/2/2010 at 2:55 AM
		</div>
		<div class="comment_text"><p>Hi Ray, yes Firebug logs an error: "File not found: /cbincludes/select.cfc" (cbincludes is the includes mapping folder) but the cfc is there - and I am calling it from one of the include pages. <br>Do you have any Jquery script that does the same? shame I can't seem to get this working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728023">10</a> by Raymond Camden
		posted on 12/2/2010 at 3:08 AM
		</div>
		<div class="comment_text"><p>So if you go to</p><p>yoursite/cfincludes/select.cfc</p><p>do you get a response? Remember that for Ajax calls, CF mappings don't matter. It needs a CFC to hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728025">11</a> by Raymond Camden
		posted on 12/2/2010 at 3:15 AM
		</div>
		<div class="comment_text"><p>@Daniel: I don't have anything specifically related to migrating from CFAJAX to jQuery. And also - it isn't a complete migration. CF's Ajax support is both in the plumbing area and the front end area. It's just the front end stuff I personally moved away from.</p></div>
	</div>
</div>
		