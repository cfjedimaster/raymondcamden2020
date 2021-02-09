
<div class="comment" id="c_1713719325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719325">1</a> by Sean Coyne
		posted on 10/30/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>Strange that the cfsearch tag won't change the AND/OR/NOT operators to the solr equivalent for you.  This would help with migration to the new platform.  Less legacy code to change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719326">2</a> by Dan G. Switzer, II
		posted on 10/30/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>If you use Verity's "internet" search type, then it already works like Solr. The "internet" search type uses + to force an inclusion and - to exclude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719329">3</a> by kevin penny
		posted on 10/31/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>Solr should certainly be supporting AND/OR searches - we've done extensive solr integration and the schema.xml for solr defines what your 'default' predicate is - and defaults to OR but can be modified - that means that if you have a search string of 'Jim Jones' solr would interpret this as 'JIM AND Jones' and look for documents with both in it.<br>Personally I'd use solr stand alone and tweak the configs - but another thing you can do is find the ip/port solr is running on and execute your search through the browser and append ?debugQuery=true to see exactly what your search string is resulting to, as it's difficult at times to determine output response w/o having this debug information (can be found at something like 127.0.0.1:8983/solr/select?q=Jim Jones&amp;debugQuery=true type of a url)</p><p>I did a cfug topic on this stuff at <a href="http://disq.us/url?url=http%3A%2F%2Fcolderfusion.com%3ARC8_0tBwls5H2hvVMp5gmLc7n20&amp;cuid=3321886" rel="nofollow noopener" title="colderfusion.com">colderfusion.com</a> - Long live Solr!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719328">4</a> by kevin penny
		posted on 10/31/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>And maybe the CF implementation doesn't support the 'filter query' stuff, but solr does - i.e. q=search string&amp;fq=filtered search.<br>I'm not a fan of the implementation, as they just tried to be 'verity-like' with the results. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.apache.org%2Fsolr%2FCommonQueryParameters%3Fhighlight%3D%2528query%2529%3AW4Uge69nxs9ETza07Kh6YUz5GMw&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.apache.org/solr/CommonQueryParameters?highlight=%28query%29">http://wiki.apache.org/solr...</a>|%28filter%29#fq</p><p>I'd do outside CF's implementation and go directly to solr and parse the xml files returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719330">5</a> by Raymond Camden
		posted on 10/31/2009 at 12:32 AM
		</div>
		<div class="comment_text"><p>@kevin: To your first point - are you saying SOlr should support the actual word "AND" and "OR" or the style? If so - I definitely didn't say it didn't support and/or, just not the actual words.</p><p>@Kevin: Nice to know. I'm not sure I'd agree with you about 'going' native. It's nice that you can for sure, but for most users, I don't think it will be an option they are comfortable with, or would need per se.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719327">6</a> by kevin penny
		posted on 10/31/2009 at 12:52 AM
		</div>
		<div class="comment_text"><p>Accodoring to the apache solr site/lucene parsing syntax both AND and OR (upper case) as well as the + - operators work just fine - I've spent less trying to see how cf9 implements it than actually using solr syntax directly, but here's where the syntax is stated on the Lucene (solr's java engine) site:<br><a href="http://disq.us/url?url=http%3A%2F%2Flucene.apache.org%2Fjava%2F2_4_0%2Fqueryparsersyntax.html%3AejAefEAMYQOVva23O-ittlYZxC8&amp;cuid=3321886" rel="nofollow noopener" title="http://lucene.apache.org/java/2_4_0/queryparsersyntax.html">http://lucene.apache.org/ja...</a></p><p>Here's a raw search string that can be executed once a solr 'collection' in cf9 has been created called 'core0'<br>http://127.0.0.1:8983/solr/core0/select/?q=Belkin%20AND%20ipod&amp;version&amp;version=2.2&amp;start=0&amp;rows=10&amp;indent=on&amp;debugQuery=true<br>Where I'm searching for both 'Belkin' AND 'ipod' together in the same document - from the debugQuery output it states:<br>+contents:belkin +contents:ipod which essentially converts the AND to plus signs. This is what solr is doing under the hood.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719331">7</a> by Raymond Camden
		posted on 10/31/2009 at 12:55 AM
		</div>
		<div class="comment_text"><p>I confirmed this myself. So wtf - why would the docs specifically say to use +, -, etc? Does NOT work as well? Going to ping my Adobe contact to find out more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719333">8</a> by kevin penny
		posted on 10/31/2009 at 1:03 AM
		</div>
		<div class="comment_text"><p>Best of Luck there - I didn't think Solr was covered well, nor given the attention it deserves - I'm glad they moved in that direction and I will take it as a 1.0 implementation of it (hence the move direct to the solr xml as you can do what you like). I'd also mention the ria forge solColdFusion component that works nicely with your existing Solr Collection is certainly worth checking out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719332">9</a> by Dan G. Switzer, II
		posted on 10/31/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>It's possible Adobe just specified the shorthand, since it's what the major search engines use--like Google. Users are probably more familiar with the +coldfusion +solr syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719334">10</a> by Raymond Camden
		posted on 10/31/2009 at 1:08 AM
		</div>
		<div class="comment_text"><p>I'm not sure I agree with that. If I had to show someone +X +Y or X AND Y, I think they would prefer X AND Y.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719335">11</a> by kevin penny
		posted on 10/31/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>Agreed Ray - our users certainly prefer 'AND' syntax, as our search logging attests to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719336">12</a> by Rick Mason
		posted on 10/31/2009 at 2:12 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Solr has a lot of features that aren't exposed by CF.  But there is a javascript library that does expose many more called Ajax Solr:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fasserttrue.blogspot.com%2F2009%2F10%2Fintroducing-ajax-solr-library.html%3ArPsNyweFe8ALJClYuXT4EJPu6GE&amp;cuid=3321886" rel="nofollow noopener" title="http://asserttrue.blogspot.com/2009/10/introducing-ajax-solr-library.html">http://asserttrue.blogspot....</a></p><p>While I haven't used the Ajax Solr yet - javascript is a wee bit easier for me to grok than java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719337">13</a> by Raymond Camden
		posted on 10/31/2009 at 2:14 AM
		</div>
		<div class="comment_text"><p>@Rick: Cool. I would like to do another blog later about using the web service stuff, the solr admin, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719338">14</a> by Raymond Camden
		posted on 10/31/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>Heard back from Adobe. The use of + and not "AND" (or any other keyword except OR once) was a doc mistake. They said the same as above, that AND is certainly supported. I've got to go update my WACK chapter now and restore some of the text I had taken out. I'm also going to go edit the blog entry right now (since some people don't read comments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719339">15</a> by John Lang
		posted on 11/2/2009 at 6:20 PM
		</div>
		<div class="comment_text"><p>Verity in CF7 / CF8 has a limit specified in the documentation, but it really isn't enforced in any way whatsoever, at least not on Enterprise. We're well exceeding the limits and have been for awhile and nothing happens. Unless the limit is "per collection" which isn't really clear. We're exceeding it across 4-5 collections collectively.</p><p>In any case, Solr sounds promising. I work for the government so we'll probably have it when CF 10 is out. We just recently (3 months or so) upgraded to CF 8.</p><p>Thanks for the post comparing the 2 Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719361">16</a> by Ryan Stille
		posted on 1/18/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Anyone notice the data that solr is indexing looks quite a bit different than what Verity is storing?  I just did a test with two collections, a Verity one and a Solr one, indexing a single word document.  When I search against the two and dump the results, I see the summary from Verity is much longer than the one returned by Solr, and is cleaner.  By cleaner I mean that the Solr result has what I can only assume is MS Word formatting codes.  Its pretty ugly and not near as useful.</p><p>I was getting ready to migrate from Verity to Solr but this really makes me rethink that decision.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719360">17</a> by Raymond Camden
		posted on 1/18/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p>I had not seen that, but will test it out myself as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719370">18</a> by Ryan Stille
		posted on 1/18/2010 at 8:00 PM
		</div>
		<div class="comment_text"><p>Ugh it gets worse.  I threw an additional document into my two test collections, the iPhone User's Guide PDF from Apple's site.  I searched for "memory", which I can easily see is in there.  The Verity search found it just fine, but when I search for it in the Solr collection I get zero results!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719365">19</a> by Raymond Camden
		posted on 1/18/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>I'm also seeing that the title isn't being picked up in Solr. Verity gets the title. I'm not happy. Going to bug some people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719363">20</a> by Steven Erat
		posted on 1/27/2010 at 12:19 AM
		</div>
		<div class="comment_text"><p>The Verity K2 server can be installed independently on a different server, and then a remote ColdFusion server can be configured to connect to it.  This is a great solution for scalability.  However, the license agreement with Verity in ColdFusion MX 7,8 and 9 indicates that only one host is allowed to connect to the K2 server (and there is a config file which enforces this limitation).</p><p>If you have multiple CF instances installed on the same server then they can all connect to a single K2 server.  But if you have a remotely distributed ColdFusion cluster where clustered instances exist on different servers, then they cannot all connect to the same K2 server.</p><p>This is a serious problem limiting scalability.  In that scenario, all instances on a particular server host must connect to their own K2 server, and manage its collections there.  A CF instance from each server must manage creating, optimizing, and indexing collections, and since it must also be performed by CF instances on other servers this becomes an redundant task that is prone to headaches if the different K2 servers get out of sync.</p><p>Sooooo, my question is, if I install CF9 with Solr and decide to put Solr on its own server, can I have a CF9 cluster across multiple servers where all instances can connect to a single Solr server?</p><p>I suspect that this will be possible.  If so, then this is a major advantage because it reduces maintenance efforts, eliminates synchronization problems, and most importantly lets you better scale ColdFusion applications.</p><p>I could install and try it out, but I thought I'd share my thoughts on this potential advantage here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719357">21</a> by Shalin Shekhar Mangar
		posted on 1/27/2010 at 2:04 AM
		</div>
		<div class="comment_text"><p>With the Solr 1.4 release, there's a new token filter called the ReversedWildcardFilter which make it possible to query with a leading wildcard. See <a href="http://disq.us/url?url=http%3A%2F%2Fwiki.apache.org%2Fsolr%2FAnalyzersTokenizersTokenFilters%23solr.ReversedWildcardFilterFactory%3A-LJJNn8DmJE6yKEIihq1Amt5wgo&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.apache.org/solr/AnalyzersTokenizersTokenFilters#solr.ReversedWildcardFilterFactory">http://wiki.apache.org/solr...</a></p><p>I've absolutely no idea about what the Solr schema and queries look like so I cannot comment on the relevancy  issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719368">22</a> by larry
		posted on 2/18/2010 at 2:49 PM
		</div>
		<div class="comment_text"><p>utilities that you should consider which address these file formats. (a) Tika, at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.lucidimagination.com%2FCommunity%2FHear-from-the-Experts%2FArticles%2FContent-Extraction-Tika%3AtDxZC2709Wgoo4AqDMNE273_caU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.lucidimagination.com/Community/Hear-from-the-Experts/Articles/Content-Extraction-Tika">http://www.lucidimagination...</a> ; and Solr Cell which is part of the LucidWorks Certified Distribution for Solr, documented at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.lucidimagination.com%2Fsearch%2Fdocument%2FCDRG_ch06_6.2.10%3AwGPYAnetG_27YnUpVJNh2oKx6xA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.lucidimagination.com/search/document/CDRG_ch06_6.2.10">http://www.lucidimagination...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719366">23</a> by Fabio
		posted on 8/4/2010 at 1:56 PM
		</div>
		<div class="comment_text"><p>I indexed the same collection with Verity and with Solr. All files are .html with normal text content. Verity index size -&gt; 600 Mb Solr index size -&gt; 30 Mb . Is it normal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719362">24</a> by Raymond Camden
		posted on 8/4/2010 at 4:03 PM
		</div>
		<div class="comment_text"><p>No idea. ;) But remember that the Verity code (included with CF) is quite old now - so the index size being large could simply be a reflection of an older engine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719367">25</a> by PRB
		posted on 7/22/2011 at 5:12 AM
		</div>
		<div class="comment_text"><p>Hey Ray - did you ever learn anything from Adobe on this last issue that Ryan pointed out, where Verity was finding the word, but SolR wasn't, and it's clearly listed in the document?</p><p>I'm experiencing something similar and I remember you mentioned this on your blog a year ago so here I am.</p><p>My problems is this:  I have a document that has these words in it somewhere:  Alex   and   Alexander</p><p>When I search (using SolR):</p><p>Alex == 0 results<br>Alexander == 1 result<br>Alexanders == 1 result  (note the "S" at the end of this)</p><p>So the problem is that it IS returning a result for a hit that doesn't exist, and it's NOT returning a result for a word thats clearly in there.</p><p>I think these might be related, so I'm pinging this thread in case someone else has seen this or has a fix.</p><p>G'night and thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719364">26</a> by Raymond Camden
		posted on 7/27/2011 at 5:52 AM
		</div>
		<div class="comment_text"><p>Solr support was improved in 901, are you running that version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719371">27</a> by Jay Pandya
		posted on 11/5/2011 at 10:46 AM
		</div>
		<div class="comment_text"><p>This is really nica feature and good explanation why to use solr over verity search.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719358">28</a> by Devendra Wangikar
		posted on 8/29/2013 at 10:59 AM
		</div>
		<div class="comment_text"><p>Hello Everyone</p><p>I'm facing one issue with NOT operator in Lucene Solr.</p><p>Issue :  NOT is considered as operator and give me result correct but 'not' is not considered as operator where AND/OR/and/or (all ) are considered as operators.</p><p>Can you please help me here ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719359">29</a> by Raymond Camden
		posted on 9/3/2013 at 2:39 PM
		</div>
		<div class="comment_text"><p>I'm not sure you're right. When I test here, for example, I see a different # of results for "coldfusion and phonegap" versus "coldfusion AND phonegap".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719369">30</a> by Raymond Camden
		posted on 9/3/2013 at 2:41 PM
		</div>
		<div class="comment_text"><p>Actually - check the blog post itself (did you read it? :) I cover NOT. You are supposed to use -, not NOT.</p></div>
	</div>
</div>
		