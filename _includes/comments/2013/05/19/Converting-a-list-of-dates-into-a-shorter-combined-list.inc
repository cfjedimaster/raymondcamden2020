
<div class="comment" id="c_1713746451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746451">1</a> by James Moberg
		posted on 5/20/2013 at 7:06 PM
		</div>
		<div class="comment_text"><p>Thanks for the article.  This would be a good UDF.  Please submit it to <a href="http://disq.us/url?url=http%3A%2F%2FCFLib.org%3AWOdcErJNG97LPvefvtc2ezLtDsI&amp;cuid=3321886" rel="nofollow noopener" title="CFLib.org">CFLib.org</a>.</p><p>You should update the title of the article to "Array of dates" instead of a "list of dates".  ;)</p><p>Another requirement is ColdFusion 10 since ArrayEach() is a new CF10 function.  (We still haven't upgraded to CF10 yet and are still evaluating all of the newly introduced bugs to determine the potential impact on existing apps.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746464">2</a> by Raymond Camden
		posted on 5/20/2013 at 7:13 PM
		</div>
		<div class="comment_text"><p>I tend to assume latest CF for all my blog posts. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746471">3</a> by James Moberg
		posted on 5/20/2013 at 7:41 PM
		</div>
		<div class="comment_text"><p>ok.  Fair assumption, but not everyone in your audience is on CF10 yet.</p><p>As a preventative practice, we haven't adopted CF10-only functions as we're not fully committed to running apps solely on ColdFusion 10 yet.  We still have to provide support for many CF9 applications and need to ensure that the functions work on both CF9 &amp; 10.  (We're slowly upgrading, but are still testing to ensure that existing native CF10 functions &amp; tags return the same results as CF9.)</p><p>If you wrote this as a CF9/10 compatible UDF, it be valuable to accept either a list or array of values, test for valid dates and sort (in case you've assumed the dates are already sorted and they aren't).  I know it's only a CF10 &amp; javascript proof-of-concept and these things weren't necessary for the demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746452">4</a> by Raymond Camden
		posted on 5/20/2013 at 8:22 PM
		</div>
		<div class="comment_text"><p>While not everyone is on the same version, I simply refuse to write multiple versions of a blog post to support older CF, Railo, etc. My expectation is that a reader on CF9 should at least be *aware* of what changed and would have the basic understanding of how to back port. So for example, when they got an error on arrayEach, their thinking should be, "The latest CF is 10, let me see if it is there." They check the docs, see it is there, and read to see what it does. It then becomes obvious to them how to rewrite it.</p><p>That being said, if you want to backport it for 9 and submit to CFLib, I wouldn't mind. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746453">5</a> by James Moberg
		posted on 5/20/2013 at 9:07 PM
		</div>
		<div class="comment_text"><p>My thinking was "oh, he used a unknown function... what's is that?  A UDF?  Java?  Wait a minute; let me google that.  I see, it's a CF10-Only function.  I should have known that 'ColdFusion' means 'Adobe ColdFusion 10-Only' when Raymond is referencing it."</p><p>I don't refer to rewriting ColdFusion functions for multiple versions of ColdFusion engines as "backporting".  I see it as making functions available and accessible to larger audiences of "ColdFusion" developers (CF8/9, Railo, BlueDragon, etc)... especially when there's absolutely no reason that minor changes can't be made so that it supports a larger developer base.</p><p>I hope you agree that CF Developer's time is valuable.  For a new developer, having to jump through your expectations of the reader may either challenge them to learn more or turn them off while reverting to another language that they are more comfortable with.  Any language clarifications that you can add would benefit new CF developers as well as first time visitors to your blog from search engines.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746456">6</a> by Raymond Camden
		posted on 5/20/2013 at 9:38 PM
		</div>
		<div class="comment_text"><p>"I hope you agree that CF Developer's time is valuable. For a new developer, having to jump through your expectations of the reader may either challenge them to learn more or turn them off while reverting to another language that they are more comfortable with."</p><p>So where do you draw the line? Should I make it work for CF5? CF4? I just do not agree. A CF Developer should be aware that there are multiple versions of CF. A CF developer should know that when they see</p><p>foo()</p><p>It is either a UDF or a BIF. SInce I didn't define foo() earlier, it must be a BIF. If they don't recognize it, then they need to do the work (which is what - checking the CF10 Reference Guide) to see what it means. That's 5 seconds of research that I would expect any decent developer to be able to do.</p><p>"Any language clarifications that you can add would benefit new CF developers as well as first time visitors to your blog from search engines."</p><p>This blog post wasn't about new stuff in CF, or Array functions in general. I would not expect to have to explain every BIF used in a code sample.</p><p>I think we are just going to have to agree to disagree on this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746458">7</a> by James Moberg
		posted on 5/20/2013 at 10:19 PM
		</div>
		<div class="comment_text"><p>I've found the AdobeCF Reference Guides to be lacking at times.  I usually search blog posts and the seldomly reviewed Adobe bug base for additional information when basic functions don't work as advertised.  (Try using isNull() and enjoy 5 seconds of research determining why it doesn't work.)<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2F%3A8Dt2vSz_VS57sVZ1hi6a1xvj3vo&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/">https://bugbase.adobe.com/</a></p><p>I guess what I'm saying is that I'd rather not spend 5 seconds researching a ACF10-only BIF and then invest additional time reprogramming it so that it works with "ColdFusion" (aka CFML).  (Imagine if Railo ColdFusion developers did that without mentioning that they were using Railo.)</p><p>Where to dray a line?  Not sure.  There used to be a "CFML Language Advisory Committee" to identify core features of CFML and you were and initial member of the team, but it seems defunct now.:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.opencfml.org%2F%3AtAQFjxX4J8bY98k0WWCou9THOgo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.opencfml.org/">http://www.opencfml.org/</a><br>Are the recommendations made there available anywhere?  If so, perhaps using "core ColdFusion" functions would be the logical choice.</p><p>At any rate, it'd be simple for you to identify your ACF10-only samples as such.  (You don't need to explain how it works, just identify it as being proprietary "Adobe CF10 only" code.)  Another benefit of this is that search engines would index the "Adobe ColdFusion 10" keyword phrase instead of the single  "ColdFusion" keyword that's been around since 1998. (Better SEO, targeted visitors, less annoyed Railo/BlueDragon and CF9- developers... it's a win/win.)</p><p>You can disagree with me.  I don't mind.  I only wanted to voice my opinion of your writing for a larger ColdFusion audience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746459">8</a> by Raymond Camden
		posted on 5/20/2013 at 10:33 PM
		</div>
		<div class="comment_text"><p>"I've found the AdobeCF Reference Guides to be lacking at times. " How so? Mind you - I know they aren't perfect. But I found arrayEach in 5 seconds:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FCFMLRef%2FWSf23b27ebc7b554b6-179bf6ef13585ac1b4d-8000.html%3AfqBN5on-tegoIObuow_ZLz2OSiU&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/CFMLRef/WSf23b27ebc7b554b6-179bf6ef13585ac1b4d-8000.html">http://help.adobe.com/en_US...</a></p><p>(I had the ref bookmarked though.) What I just did should be expected of any developer. Any language. Period.</p><p>"(Imagine if Railo ColdFusion developers did that without mentioning that they were using Railo.)"</p><p>It isn't my concern if Railo adds foo(). I don't mean that as a slight against them. But honestly, it isn't the standard. Adobe ColdFusion is what I use, what I talk about, etc. I can't see anyone who knows this blog ever thinking that maybe I was using a Railo-only function.</p><p>"If so, perhaps using "core ColdFusion" functions would be the logical choice."</p><p>Err... so I shouldn't use CF10 on my blog? Man, I work for Adobe. It is our product. I don't know what you expect here but I do not think it is reasonable.</p><p>"At any rate, it'd be simple for you to identify your ACF10-only samples as such. "</p><p>Again. CF10 was NOT the point of this article. I wasn't highlighting new stuff in CF10. I was showing how to solve a solution. I used the most current version of CF at the time of this blog post. How is this *not* expected?</p><p>"(Better SEO, targeted visitors, less annoyed Railo/BlueDragon and CF9- developers... it's a win/win.)"</p><p>Railo/BlueDragon users already know they are using an alternative CF engine. It is their job to know what their engine supports. It is not my job to check with them.</p><p>And as I said, CF9 users, or heck, any CF user not on latest, should hopefully be *aware* of what is supported in the most recent version. They may not be using it, but they should at least have the basic knowledge. ("Oh yeah, CF10 added closures/callbacks/etc.")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746461">9</a> by James Moberg
		posted on 5/20/2013 at 11:25 PM
		</div>
		<div class="comment_text"><p>I'm using Bing. I searched for "arrayeach ColdFusion". First page contained some blog posts and official Adobe CF8 &amp; 9 results for regular arrays.  I've reviewed the top 42 results and gave up as I didn't see the URL you referenced.  Google remembers your history &amp; returns results based on what you've used before.  I was well past 5 seconds.  I guess you incorrectly assumed all visitors are using Google?</p><p>I don't recall stating that you shouldn't use ACF10 or use ACF10-only functions.  (I'm trying to use it myself, but am still worried about what still hasn't been identified as "not working" yet.)  I recommended adding "Adobe" and "10" to your article.  I also indicated that my development preference was to write functions that worked on the largest base of ColdFusion installations whenever possible.  That's fine if you don't care and only support Adobe ColdFusion 10.  (I often get the feeling that many people at Adobe don't care, so I've grown accustomed to being ignored.)</p><p>Oh yeah, CF10 added a lot of stuff I don't use and still hasn't improved upon or fixed issues regarding CFSpreadsheet, CFImage or CFDocument.  ColdFusion 10 is still using discontinued FCKEditor (requires Flash) unless you choose to be secure and block everything. (I use third-party components to gain expected functionality.)  I'm guessing that many CF9 users will hope that this will be fixed in CF11 and then upgrade.  (I haven't been able to sell my clients on upgrades to CF10 when the features they rely on daily haven't improved.)</p><p>I'll write &amp; submit a "ColdFusion" UDF.  I'll add support to identify and accept both lists &amp; arrays of valid dates.  Thanks for your time &amp; responding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746457">10</a> by Raymond Camden
		posted on 5/20/2013 at 11:28 PM
		</div>
		<div class="comment_text"><p>"I guess you incorrectly assumed all visitors are using Google?"</p><p>Dude. There is a reference guide. It is free. Yes, I google for CF stuff quite a bit too, but at the end of the day I know the reference guide is *the* place to find proper docs. There is an online version and a downloadable PDF.</p><p>"I recommended adding "Adobe" and "10" to your article. "</p><p>Again - this is *not* a CF10 article. This has nothing to do with CF10. Yes I used CF10 but it is irrelevant to the post. You've made it a point in your comments but frankly, I do not think it needed to be. You bring up issues with CF10 and I will not deny there are bugs, but frankly, you are going way over board here.</p><p>It was a simple example. I used the latest version of CF available to anyone who wants to use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746460">11</a> by Raymond Camden
		posted on 5/20/2013 at 11:29 PM
		</div>
		<div class="comment_text"><p>To amend my first comment, if you worked for me and said you couldn't find arrayEach, I'd fire you. Seriously. Not knowing where the reference guide for your language is is just plain silly.</p><p>OK, I wouldn't fire you, but I'd show you the darn URL and ask you to bookmark it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746462">12</a> by Scott Stroz
		posted on 5/20/2013 at 11:54 PM
		</div>
		<div class="comment_text"><p>So, you could not find anything on Bing, but searchign for 'arrayeach coldfusion' in a Chrome incognito window shows the result Ray pointed to at the top position. Maybe the issue is with Bing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746463">13</a> by James Moberg
		posted on 5/21/2013 at 12:53 AM
		</div>
		<div class="comment_text"><p>I found ArrayEach before initially commenting, was familiar with the CF10 guide and wasn't confused. I'm unable to speak for every visitor that reads your post without being familiar with who you are and what version of ColdFusion you use.</p><p>When using Google to search for CF functions, I'm required to add "ColdFusion 9" or "ColdFusion 10" to my query or CF8 references are shown by default.  (See, it's a good practice to preface the version of ColdFusion at all times.)  Clicking on any CF8 result on Adobe promotes CF9 resources, but only links back to the main CF9 guide page and there's no links to CF10...  so having developers manually bookmark CF10 URLs is a great recommendation.  (It'd be nice if the older CF guide versions cross-promoted the newer CF10 guide or if the newer CF10 guide had better PageRank, but bookmarks appear to be superior.)</p><p>Please note that simply bookmarking Adobe CF-related stuff isn't good enough.  Information has been disappearing over the years.  I've been saving snippets to Evernote. A recent example that I reported was technote 18898 "ColdFusion: Maximum SSL encryption levels by version".<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Ftn_18898%3A_0YiU4_rCPjg01oxbCfT7zjPKfs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/tn_18898">http://www.adobe.com/go/tn_...</a><br>(I'd love to read this technote if you have a working bookmark or saved it before it disappeared.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746470">14</a> by Raymond Camden
		posted on 5/21/2013 at 1:01 AM
		</div>
		<div class="comment_text"><p>I'm sorry man. I think we are *miles* apart on this. If any developer out there has an issue finding the CF10 docs, or the downloadable version, I'll gladly tell them.</p><p>I will not be prefacing every blog post with a version number. Period. I appreciate your taking the time to bring up your concern, but let's let this go now and turn the focus back on the topic at hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746465">15</a> by James Moberg
		posted on 5/21/2013 at 1:43 AM
		</div>
		<div class="comment_text"><p>I will be sure to provide new developers with your contact information and indicate that you are use only the latest version of Adobe ColdFusion.  Thanks again.</p><p>Back to the topic, what if the list of dates is not within your control and is not in ascending order?  ArraySort only works with numbers &amp; text, but sorting by "text" actually appears to work.  This doesn't appear to be documented in the CF10 Guide.  Is it safe?</p><p>arraysort(dates, "text");<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-7f14.html%3A9xcygJqBlYNvd6h74BnTsWne1W0&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-7f14.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746468">16</a> by Raymond Camden
		posted on 5/21/2013 at 2:19 AM
		</div>
		<div class="comment_text"><p>If I needed to sort the values in CF, I'd use arraySort() in CF10 to write a function that converts the dates into "time since epoch" and then sort by that. In CF less than 10, I'd use something like the quickSort UDF which lets you use a UDF to define sorting params.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746472">17</a> by James Moberg
		posted on 5/21/2013 at 2:39 AM
		</div>
		<div class="comment_text"><p>The dates are already rendering in array as {ts 'YYYY-MM-DD HH-MM-SS'} and appear to be text sortable.  (I know it's just a visual representation of the date and not actually stored like that.)  It works correctly with years 100 to 9999, but sorts incorrectly at 10,000+.  I can't seem to generate a date with a year less than 100 using CreateDate or javascript.  I don't mind jumping through some extra hoops to ensure data integrity, but wonder under what circumstances it would be necessary.  Are there any reasons that it wouldn't be safe to use "text" ArraySort apart from the year 10,000 issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746473">18</a> by Ty Whalin
		posted on 5/21/2013 at 2:52 AM
		</div>
		<div class="comment_text"><p>This was good for me to check out. Getting ready to code for my new blog layout. Added a recent post widget for output. Going to allow for filter of dates to display to the user when they select the dates by the archive feed.</p><p>Plan to use dates instead of by categories. This all is part of an earlier discussion we had Ray, about the cffeed tag and categories for blogging if you remember. You just provided an interesting starting point for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746475">19</a> by Adam Cameron
		posted on 5/21/2013 at 4:58 AM
		</div>
		<div class="comment_text"><p>Ray / James<br>I know Ray wants to move on from this side topic, so I will post this and not respond to any feedback to it to prevent protracting things even more.</p><p>As a blog-writer myself, I completely agree with what Ray says and his approach to using the *current* version of ColdFusion in his examples should the situation arise. If he was using CF11-only functionality, you'd have a point James, but I don't think you do in saying Ray should downgrade his code to work on CF9. Why CF9? Why not CF8? (etc, as other people have said). it's not even like CR10 is *bleeding edge*: it's been out for over a year now!</p><p>On my own blog I'll use whatever is available to me in ColdFusion, and only identify a version if I'm discussing version or platform differences, or I'm specifically blogging about a feature a given version or platform has that another does not.</p><p>Equally, I don't believe it's my job or Ray's job to dumb down our writing to cater to some lower common denominator. It's our "job" to raise people's game. Not lower our own one.</p><p>And why on earth - James - do you use Bing? It's really quite rubbish compared to Google. This is perhaps part of your problem.</p><p>James if you would like me to discuss which versions or platforms I code to or why, I'm happy to do so: hit me up directly (email on my own blog, linked to above).</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746476">20</a> by Raymond Camden
		posted on 5/21/2013 at 5:03 AM
		</div>
		<div class="comment_text"><p>@James: I can't think of any reasons, but, it would bug me. I'd do it right.</p><p>@Ty: Glad you found this useful.</p><p>@Adam: We need to have that pint.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746477">21</a> by Ty Whalin
		posted on 5/21/2013 at 6:33 AM
		</div>
		<div class="comment_text"><p>Ray, this may seem a tad ridiculous considering I have been blogging for sometime now. Plus my experience with creating online profiles is well rounded, but what is the reason I can not get my pic on your blog? Are those Gravatar pics or WP pics? How do I get mine to show? Do I need to register or something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746479">22</a> by Raymond Camden
		posted on 5/21/2013 at 6:49 AM
		</div>
		<div class="comment_text"><p>They are gravatar pics. Ensure your email in the field matches your gravatar account.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746478">23</a> by Ty Whalin
		posted on 5/21/2013 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ah, you are right. Thought this address was already added. Keep the post coming.</p></div>
	</div>
</div>
		