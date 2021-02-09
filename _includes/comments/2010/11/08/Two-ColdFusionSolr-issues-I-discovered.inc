
<div class="comment" id="c_1713727409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727409">1</a> by Rick Smith
		posted on 11/11/2010 at 6:00 AM
		</div>
		<div class="comment_text"><p>Ray, will you please post your presentation/slides after the conference?  Although I've found a tremendous amount of information on [CF] solr, I've been setting up a scenario for a client with 10k documents and been spending quite a bit of time familiarizing myself with it.  Having used Verity extensively in the past, I'm still tweaking solr to get my result exactly how I want them.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727411">2</a> by Raymond Camden
		posted on 11/12/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>I will - and if it goes well - I'll offer to do it for the Online Meetup. To be honest though, it sounds like you have Solr up and running but haven't yet tuned it to your needs yet. This class is more an intro level discussion of Solr within CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727412">3</a> by John Wells
		posted on 12/13/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Is it clear that SOLR is the way to go vice Verity?  Any clear performance gotchas that arent well know?</p><p>We are about to index 4 million files and are looking for writeups on the kinds of performance and useability details that could make a big difference at that level.</p><p>The set of  files has some logical breakouts, with the largest being 750,000.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727405">4</a> by Raymond Camden
		posted on 12/13/2010 at 9:11 PM
		</div>
		<div class="comment_text"><p>Yes - Verity is officially deprecated. I bet it will be gone in CF10 (but can't promise it will).</p><p>Performance issues? None that I know of. Wait - I do know there is a issue with some types of PDFs - but I'm not aware of it being critical. For the most part the answer is no. If you are going to be indexing a large number of binary files, expect it to be slow. There is no way around that. But - that should typically be a one type operation - or an operation you don't do often.</p><p>Looking at your second paragraph, I'd assume the initial index of your 4 million files will be slow. You may want to consider breaking it up into chunks (like files 1-250K, etc). Oh heh -just saw paragraph3. :) So I think you will be ok. The initial index will be painful, but going forward, your atomic operations (updating, removing, adding) should be zippy. Search should be zippy too. I've seen searches on indexes of 20M records and it was fast.</p><p>Obviously if you see different, please let me know!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727404">5</a> by Daren Valentine
		posted on 12/19/2010 at 7:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Have you had any problems where Solr does not either index a document properly or searching does not return an expected result.  I have a pdf document that contains the word "infrared".  Solr will return the document is the search criteria is "infrared*", but not if "infrared".  Also, using "infrared OR infrared*" as the crit does not work either!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727403">6</a> by Raymond Camden
		posted on 12/19/2010 at 8:07 PM
		</div>
		<div class="comment_text"><p>I haven't had my coffee yet - but isn't that the same word?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727402">7</a> by Daren Valentine
		posted on 12/20/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>Yes, same word. That's what is so freakin weird.  If I just search for "infrared" in the pdfs, one client's document is not returned.  If I search for "infrared*" using the wildcard at the end, it is returned.  Likewise, other clients with infrared on their documents disappear with the wildcard.  So, thinks I, just take the user's search input and create a new search string with both iterations "infrared OR infrared*".  No good!  My duck tape solution was to search the collection twice, once with and once without the wildcard, and coalesce the results. Very inelegant, but it was the only thing that worked</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727413">8</a> by Raymond Camden
		posted on 12/20/2010 at 6:26 AM
		</div>
		<div class="comment_text"><p>You see, this is where the coffee would have helped. I swear I did not see the * at the end of the second example. Could you share the PDF where infrared existed but did NOT return when you didn't have the *?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727406">9</a> by Raymond Camden
		posted on 12/24/2010 at 9:01 PM
		</div>
		<div class="comment_text"><p>Thought I'd share an update. Daren and I shared an email and he sent me his test files. Unfortunately I wasn't able to see anything so I recommended he visit the CF bug site and report it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727407">10</a> by Raphael Sbegue
		posted on 2/11/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>Hello Ray ..</p><p>I'm having a serious problem in the use Solr to view binary documents like ms-word and pdf ...</p><p>In theory they are working perfectly for the search in the document, but when I use the context to display the information he can only tell the start of the document not displaying information from the middle or end of document.</p><p>Is there somewhere in the configuration of the Solr increase the amount of bytes for the context?</p><p>Code:<br>&lt;cfsearch name = "results" collection = "myCollection"Crit = "# # <a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>"status = "sCollection" contextpassages = "3" suggestions = "always" contextHighlightBegin = "&lt;b&gt; " contextHighlightEnd = "&lt;/ b&gt; "/&gt;</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727410">11</a> by Raymond Camden
		posted on 2/12/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get your meaning. Are you saying the context portion is incorrect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727408">12</a> by Raphael Sbegue
		posted on 2/12/2011 at 12:21 AM
		</div>
		<div class="comment_text"><p>It is as if the collection does not index the file correctly.</p><p>In the search it returns the correct file and summary, but in context when the terms are searched for the end of the file it returns nothing like it had a limiter of bytes to display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727416">13</a> by Raymond Camden
		posted on 2/12/2011 at 2:10 AM
		</div>
		<div class="comment_text"><p>And you are running CF901 _and_ the CHF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727415">14</a> by Raphael Sbegue
		posted on 2/12/2011 at 3:27 AM
		</div>
		<div class="comment_text"><p>I think it's the CF 9 without hot fix, I'll check and come back here to say whether it worked or did</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727417">15</a> by Fernando
		posted on 3/3/2011 at 12:58 AM
		</div>
		<div class="comment_text"><p>I am having the same issue where no matter how big I set contextpassages or contextbytes to, it always caps off at a couple of words.  I want to bring at least 500 characters (or whatever amount it translates into bytes) of a description field from a collection (created from a query, not documents), but it seems to always bring the same small amount no matter what i set those 2 attributes to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727420">16</a> by Mike Lerley
		posted on 9/13/2014 at 12:29 AM
		</div>
		<div class="comment_text"><p>I know this is old, but what Fernando points out is still happening in CF10. If you look at the SOLR logs at the URL generated by CF, it is always setting contextbytes to 100. Infuriating...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727422">17</a> by Raymond Camden
		posted on 9/13/2014 at 12:30 AM
		</div>
		<div class="comment_text"><p>Is there a bug filed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727425">18</a> by Mike Lerley
		posted on 9/13/2014 at 12:33 AM
		</div>
		<div class="comment_text"><p>Don't know... and honestly not sure where to look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727421">19</a> by Raymond Camden
		posted on 9/13/2014 at 12:34 AM
		</div>
		<div class="comment_text"><p>Bugs can be search, added here: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2F%3A8Dt2vSz_VS57sVZ1hi6a1xvj3vo&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/">https://bugbase.adobe.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727426">20</a> by Mike Lerley
		posted on 9/13/2014 at 12:38 AM
		</div>
		<div class="comment_text"><p>Thanks, I'll check it out. Not on Friday at 4:38 though :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727424">21</a> by Mike Lerley
		posted on 9/15/2014 at 11:02 PM
		</div>
		<div class="comment_text"><p>Submitted. Bug #3824890</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3824890%3AxwVWeWSL1juHhn5AD6J5VhV_coQ&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3824890">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		