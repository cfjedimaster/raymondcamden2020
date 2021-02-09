
<div class="comment" id="c_1713745143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745143">1</a> by Patrick Heppler
		posted on 3/12/2013 at 12:10 PM
		</div>
		<div class="comment_text"><p>Maybe it's just a typo but the time in 2011-12-22 10:22:00.0 looks a bit weird</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745145">2</a> by Raymond Camden
		posted on 3/12/2013 at 5:47 PM
		</div>
		<div class="comment_text"><p>Afaik it is valid. The .0 at the end is just milliseconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745149">3</a> by Ty Whalin
		posted on 6/14/2013 at 2:22 PM
		</div>
		<div class="comment_text"><p>Okay, Q's? I want to ask you about the posted_dt. Are you saying that the _dt at the end of this custom field is what is used to tell the SOLR that it is a datetime field? If yes, where can I find more of those endings for cfindexing control? Looked through a lot of documentation and have not noticed those yet. SOLR was introduced in CF9 correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745148">4</a> by Raymond Camden
		posted on 6/14/2013 at 3:13 PM
		</div>
		<div class="comment_text"><p>Yeah but custom fields were CF10, not 9, if I remember correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745151">5</a> by Ty Whalin
		posted on 6/14/2013 at 3:44 PM
		</div>
		<div class="comment_text"><p>I figured that was the case. Will need to do more research for those handy dandy extensions for custom fields. Currently creating a tag and category system along with a search box for searching blog pages by keyword, tag or category.  The only real problem I continue to battle; is the fact it keeps wanting to show results for the document pagename.cfm and the document title. I only want it to show the document title that is turned into a link to the blog post. Basically it is producing the same document in the results but with two different sets of links to the same document.</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745157">6</a> by Raymond Camden
		posted on 6/14/2013 at 3:51 PM
		</div>
		<div class="comment_text"><p>I'm sorry, I don't understand what you are saying. You have complete control over how you display results from cfsearch. I must not be understanding what you mean here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745156">7</a> by Ty Whalin
		posted on 6/14/2013 at 5:01 PM
		</div>
		<div class="comment_text"><p>Result output:<br>Title = link<br>pagename = link</p><p>This is the same output for the same page formatted as ahref. Only want the first one to show.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745154">8</a> by Raymond Camden
		posted on 6/14/2013 at 5:18 PM
		</div>
		<div class="comment_text"><p>.... um... again... I'm confused. The result of cfsearch is a query. *You* decide what columns to output when you loop over it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745150">9</a> by Ty Whalin
		posted on 6/14/2013 at 5:49 PM
		</div>
		<div class="comment_text"><p>Believe the problem to be solved at this point for the linking output. Next, It would appear I need to create more than one cfcollection. One for normal searching and a second for tags and categories. If you follow: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.linkworxseo.com%2Fblog%2F2011%2F11%2F03%2Fwhy-is-your-website-analytic-data-showing-as-not-provided-information.cfm%23disqus_thread%3AkbitLbyPxENJKky5m6WG2lbkqeY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.linkworxseo.com/blog/2011/11/03/why-is-your-website-analytic-data-showing-as-not-provided-information.cfm#disqus_thread">http://www.linkworxseo.com/...</a> and then click the first tag named analytics. You will then be shown a result  set for the tag and a different result set for the same cfcollection. This is why the search input should be split from the tag results output. Thinking a second cfcollection to split the searches. All tags and categories are not ready yet as I am still developing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745152">10</a> by Raymond Camden
		posted on 6/14/2013 at 6:39 PM
		</div>
		<div class="comment_text"><p>I'm confused - why do you need a second collection for categories and tags? CF's full text indexing supports categorizing content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745155">11</a> by Ty Whalin
		posted on 6/14/2013 at 9:44 PM
		</div>
		<div class="comment_text"><p>Yeah, I understand that the categoryTree and category can work, but I think I am torn between running a SQL statement or a cfindex tag to populate the cfsearch for results output.</p><p>&lt;cfloop index="i" from="2011" to="#LSDateFormat(now(),'yyyy')#"&gt;<br>&lt;cfindex<br>    categoryTree="tag/" <br>    category="#form.Criteria#" <br>    collection="site-search" <br>    action="update" <br>    type="path" <br>    key="#expandPath('\')#blog\#i#"<br>    custom1="pagepath"<br>    custom2="pagename"<br>    custom3="pagedescription"<br>    extensions="*."<br>    recurse="yes"<br>    language="english"<br>    urlpath="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.linkworxseo.com%2Fblog%2F%23i%23%3Ar0gjqS5EG-BXo2IUUXIPLGDlMZ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.linkworxseo.com/blog/#i#">http://www.linkworxseo.com/...</a>"&gt;<br>&lt;/cfloop&gt;</p><p>This cfindex is going to change my first site-search cfindex on the tag/ page. This cfindex is on the tag/analytics/ page which is a tag. Thinking about using refresh first and then run an update for the action on the tag/ page. What you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745162">12</a> by Raymond Camden
		posted on 6/14/2013 at 11:10 PM
		</div>
		<div class="comment_text"><p>Um... no idea what your doing here. :) But yeah - doing a refresh with a query (and it can be a fake query) is better than N atomic index operations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745160">13</a> by Ty Whalin
		posted on 6/15/2013 at 4:11 PM
		</div>
		<div class="comment_text"><p>Can you fix that link for me? Remove it or remove everything after blog/... Appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745161">14</a> by Raymond Camden
		posted on 6/15/2013 at 4:57 PM
		</div>
		<div class="comment_text"><p>Eh? You mean in the code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745159">15</a> by Ty Whalin
		posted on 6/16/2013 at 1:35 AM
		</div>
		<div class="comment_text"><p>No, just the bad link at urlpath. Think I got it all worked out, But it seems the cfindex is not updating. I ran a refresh and then changed it back to update and the results are only showing for one keyword now (google). Going to give it some time to find out if it will start showing other results now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745163">16</a> by Jim Allison
		posted on 11/8/2014 at 3:58 AM
		</div>
		<div class="comment_text"><p>It has been a while since this thread/question was posted, but I think I am running into the same issue of I can't DateFormat() the date from a Solr search.  My dates from Solr look like this:</p><p>Mon Apr 07 10:32:00 MDT 2014</p><p>When I do a DateFormat(myDate_dt,"mm/dd/yy") I get:</p><p>04/07/01</p><p>I really don't want to show all this date information from the Solr search.  Any thoughts or solutions?</p><p>Thank you</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745158">17</a> by Raymond Camden
		posted on 11/8/2014 at 8:03 PM
		</div>
		<div class="comment_text"><p>You could parse it as a list. List item 2 is the month, 3 is the day, and 6 is the year. You can ignore the timezone. Technically it may matter, like maybe it was 1am and in the TZ you care about it is 11pm, but probably it won't matter.</p><p>Note that I no longer use Solr here, I switched to a Google Custom Search Engine.</p></div>
	</div>
</div>
		