
<div class="comment" id="c_1713655019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655019">1</a> by Teddy R Payne
		posted on 7/14/2006 at 3:31 PM
		</div>
		<div class="comment_text"><p>I downloaded it and so far it is looking nice.  I will have to play with the new features or find them, whichever comes first. ;)</p><p>They need to update the documentation PDF when they create releases.  The deployment examples still show version 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655017">2</a> by joel
		posted on 7/14/2006 at 5:29 PM
		</div>
		<div class="comment_text"><p>Good timing, was toying around with this yesterday. Just noticed the nonXMLDataSet sample in the /samples folder. I'm wondering if it might be easier to turn query results into Spry datasets using this method instead of using XML. (I'm having a variety of issues with query as XML across platforms and CFMX versions.) Guess it's time to find out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655026">3</a> by Raymond Camden
		posted on 7/14/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Amazing. That was there before, but I didn't notice it. I am doing work on building a WDDX to SPRY converter. This would allow you to point to a CFC method (that returns a query) and simply not worry. I had built a prototype, but I wasn't using their method. I'll rewrite it tonight and share it. The goal is to end up like this:</p><p>var dsData = new WDDXSpry("foo.cfc?method=getPeople", "people/people");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655025">4</a> by Massimo Foti
		posted on 7/14/2006 at 7:55 PM
		</div>
		<div class="comment_text"><p>Teddy, I wrote a custom tag for that (I haven't tested it with Spry 1.2). You can grab it from here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.olimpo.ch%2Ftmt%2Ftag%2Fsprydataset%2F%3AMrYRHq-02DB9hHnbFp1eb8hsr8g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.olimpo.ch/tmt/tag/sprydataset/">http://www.olimpo.ch/tmt/ta...</a></p><p>This way you skip the XML step altogether and you don't even need Google's XPath library</p><p>Inside the .zip you can find two different examples</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655028">5</a> by James Edmunds
		posted on 7/14/2006 at 8:59 PM
		</div>
		<div class="comment_text"><p>I am particularly interested that there is now compatibility with Prototype. I did this in Prototype because I already understood the formobserver (and don't know enough about Spry yet to know if there is an equivalent):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pasa-online.org%2Fvolunteers%2Fp1.cfm%3A1HKz0e2yKFR9KgfrBDg6gxIPIoo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pasa-online.org/volunteers/p1.cfm">http://www.pasa-online.org/...</a></p><p>(don't worry, these are all made-up names, the real volunteer file is somewhere else!)</p><p>Now that Spry seems prototype-friendly, I am going to look for a way to have the results on the right-hand pane be a Spry master region, with a Spry detail region also appearing on the page. Wish me luck ;).</p><p>BTW, you won't find prototype 1.5 rc0 on the official prototype site (it's still 1.4 something there), but you can grab it out of the <a href="http://disq.us/url?url=http%3A%2F%2Fscript.aculo.us%3AaI9Cyr8yY3v7X9tOWAsjnHP0AuU&amp;cuid=3321886" rel="nofollow noopener" title="script.aculo.us">script.aculo.us</a> package:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fscript.aculo.us%2F%3Ax_vjcV4w9GJ3n7gkv1KACtyjSs8&amp;cuid=3321886" rel="nofollow noopener" title="http://script.aculo.us/">http://script.aculo.us/</a></p><p>Thanks for the post about the Spry update, Ray!</p><p>-James</p></div>
	</div>
</div>
		