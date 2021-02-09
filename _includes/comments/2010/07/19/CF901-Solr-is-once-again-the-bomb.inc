
<div class="comment" id="c_1713725435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725435">1</a> by Tom Jenkins
		posted on 7/20/2010 at 11:39 AM
		</div>
		<div class="comment_text"><p>@Ray: Been testing SOLR against our old application that uses verity and very impressed so far. One quick question, what is the core0 collection? Is it important or can I remove it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725442">2</a> by Raymond Camden
		posted on 7/20/2010 at 3:20 PM
		</div>
		<div class="comment_text"><p>From what I know, you can't delete it. Let me try to find out why though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725440">3</a> by Ray Buechler
		posted on 7/20/2010 at 5:07 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Have you had any issues with Solr and large files? I was doing some tests similar to yours yesterday and ran into a situation where Solr seems to be choking on one particular PDF file.  The browser cranks for a while and eventually it stops and the center frame in the CF admin is blank. The document count on the collection screen remains the same (zero if it is a new collection). The PDF file in question is the coldfusion_9_cfmlref.pdf.</p><p>Note that verity indexes the file with no problem.</p><p>Thanks for the CF Admin Searcher extension. It's been very handy!</p><p>Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725438">4</a> by Raymond Camden
		posted on 7/20/2010 at 5:29 PM
		</div>
		<div class="comment_text"><p>Ouch. I can confirm that as well. I indexed a small folder of PDFs of which that was one. I'll raise this with the Adobe team.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725439">5</a> by Ray Buechler
		posted on 7/20/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>Thanks for passing it along to the Adobe Team! I may have to go with Verity for a project I'm working on rather than Solr, at least until this gets resolved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725436">6</a> by Raymond Camden
		posted on 7/20/2010 at 5:39 PM
		</div>
		<div class="comment_text"><p>More info: Nothing is logged to the solr logs. However, the exception logs shows:</p><p>"Error","jrpp-744","07/20/10","08:28:43","cfadmin","GC overhead limit exceeded The specific sequence of files included or processed is: C:\ColdFusion9\wwwroot\CFIDE\administrator\verity\indexcollection.cfm, line: 111 "<br>java.lang.OutOfMemoryError: GC overhead limit exceeded</p><p>I noticed that when I updated to CF901, my JVM min/max memory settings were reset to 512M as the max. I just changed that to 512/1024. I'm running the index again and will let you know. It's still ongoing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725441">7</a> by Raymond Camden
		posted on 7/20/2010 at 5:46 PM
		</div>
		<div class="comment_text"><p>I aborted the request after 15 minutes. Hmpth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725437">8</a> by Raymond Camden
		posted on 7/20/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>So as an FYI, I tried Verity. I first ran into an issue which prevented me from using Verity at all. I fixed that here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stillnetstudios.com%2Fverity-collection-error-coldfusion%2F%3A9oxgYrqb-WiPzVsxXufDqk0RRMo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stillnetstudios.com/verity-collection-error-coldfusion/">http://www.stillnetstudios....</a></p><p>When I got my collection created I tried an index. It took 60 seconds. So I've got an open request w/ Adobians to see what the heck. There is no reason why Solr should take that long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725446">9</a> by Raymond Camden
		posted on 7/20/2010 at 6:51 PM
		</div>
		<div class="comment_text"><p>@RayB: What platform are you on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725443">10</a> by Ray Buechler
		posted on 7/20/2010 at 7:00 PM
		</div>
		<div class="comment_text"><p>Windows 7, 64-bit...using the 64-bit version of CF (Developer Edition).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725449">11</a> by Raymond Camden
		posted on 7/20/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>Ok this is VERY interesting. So am I - and someone on Twitter (not you I assume? @dyakovich) said the exact same thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725447">12</a> by Ray Buechler
		posted on 7/20/2010 at 7:13 PM
		</div>
		<div class="comment_text"><p>I just confirmed that this issue occurs on Windows 7 32-bit too so it's not specific to Win7 64-bit</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725450">13</a> by Raymond Camden
		posted on 7/20/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>I've confirmed it on the Mac too. I got a reply from an Adobian too and he is looking at my source files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725454">14</a> by Raymond Camden
		posted on 7/20/2010 at 9:35 PM
		</div>
		<div class="comment_text"><p>Multiple updates from Adobe, specifically Vinu.</p><p>First, to the core0 question: core0 was the default collection shipped earlier with CF9. You should be able to delete it now. The restriction to have atleast one collection is no longer there.</p><p>Second, to the PDF: I think the issue is with that particular pdf. i am able to repro this. I was able to index 55 pdf's (excluding the cfml ref) of 90MB size in 3 mins with the default solr memory config of 256M. For indexing PDFs, we use the same API's as CFPDF and running CFPDF extracttext causes OOM (in ColdFusion and not Solr). We will investigate the issue with this particular pdf. Please exclude this file and let me know if you are able to index the other files.</p><p>Also to tune Solr, you can increase the solr buffer limit (default to 40) based on the solr memory parameters. i.e 80 for 512MB and so on. This will speed up the whole process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725453">15</a> by Ray Buechler
		posted on 7/20/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>Yep....I definitely think the problem is with that particular pdf. I tried to delete half the pages in the pdf and Acrobat crashed.</p><p>I also just indexed 341 pdf's in approximately 5 to 8 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725452">16</a> by Raymond Camden
		posted on 7/20/2010 at 11:00 PM
		</div>
		<div class="comment_text"><p>Woot. Let me just say - I am VERY happy to see it's just a problem PDF. Still though - it may be something to watch for in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725451">17</a> by Jeem
		posted on 7/21/2010 at 12:05 AM
		</div>
		<div class="comment_text"><p>I'm glad to hear there have been improvements with Solr, however, I am still waiting for Adobe (or Apache)  to integrate a web-crawler (Nutch?) that works with Solr before I make the switch from Verity...hoping it happens in CF10! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725456">18</a> by Ray Buechler
		posted on 7/21/2010 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ray....thanks for running this down. It's much appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725458">19</a> by Dave Yakovich
		posted on 7/21/2010 at 5:01 PM
		</div>
		<div class="comment_text"><p>My Windows 7 64bit/Solr issue happens with a pdf file, but the file size is only 35kb and is two pages in length. I'm able to index several pdf files before Solr hits this one pdf and chokes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725463">20</a> by Raymond Camden
		posted on 7/21/2010 at 5:05 PM
		</div>
		<div class="comment_text"><p>I will bring this up with Vinu.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725461">21</a> by Vinu
		posted on 7/21/2010 at 5:45 PM
		</div>
		<div class="comment_text"><p>@Dave Yakovich : Can you send me the pdf file to <a href="http://disq.us/url?url=http%3A%2F%2Fkvinu-at-adobe.com%3Am003A1Oc2376rzXsmr_1CM2JAHU&amp;cuid=3321886" rel="nofollow noopener" title="kvinu-at-adobe.com">kvinu-at-adobe.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725459">22</a> by Dave Yakovich
		posted on 7/21/2010 at 8:04 PM
		</div>
		<div class="comment_text"><p>E-mail sent with the PDF. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725479">23</a> by dk
		posted on 7/23/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>I just emailed Vinu, but figured I'd should post here as well.  If you have a pdf with a .PDF extenstion, it will choke and give you an org/apache/pdfbox/pdmodel/PDDocument null error.</p><p>Renaming the extension to .pdf will fix the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725476">24</a> by Anthony
		posted on 8/9/2010 at 7:46 PM
		</div>
		<div class="comment_text"><p>I am having an interesting problem doing a cfindex to a solr collection on a large group of documents (html, pdf. txt etc). If I run the cfindex on my XP dev machine, indexing, for example, 100 records of the same type (html), the routine runs flawlessly. If I run  the same on my Windows 2003 production server, I get the following errors:</p><p>Error opening new_searcher exceeded limit of maxWarmingSearchers4_try_again_later Error_opening_new_searcher_exceeded_limit_of_maxWarmingSearchers4_try_again_later request: http://localhost:8983/solr/casecollection/update?commit=true&amp;waitFlush=false&amp;waitSearcher=false&amp;wt=javabin&amp;version=1,</p><p>If I reduce the number to 4 records at a time, no errors. If I increase it to 5 records, I start to generate the errors.</p><p>I need to index 60k+ files, so this is a bit of a concern.</p><p>Any Suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725478">25</a> by Raymond Camden
		posted on 8/9/2010 at 9:47 PM
		</div>
		<div class="comment_text"><p>Vinu is on this thread so hopefully he will have an answer. Outside of that, your best option is to contact Adobe support. Sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725475">26</a> by Vinu
		posted on 8/9/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>@Anthony:<br>Open solrconfig.xml under &lt;collectiondirectory&gt;/conf and look for maxWarmingSearchers. You can increase the value of that, but make sure Solr has enough memory allocated. Restart Solr. The default may not be sufficient for Solr to handle load in production. (<a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWS9c725d03408c25f4-7613171712234bed95d-8000.html%29%3ARk5IfG1IAj194oDGTbUL3qE8iU8&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WS9c725d03408c25f4-7613171712234bed95d-8000.html)">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725473">27</a> by Anthony
		posted on 8/9/2010 at 11:25 PM
		</div>
		<div class="comment_text"><p>Thanks Vinu, but that did not do it. I increased memory to 1024 and changed maxWarmingSearchers to various values, however the issue simply followed the maxWarmingSearchers number, failing at 8, then 10, then 20 etc as I moved the number around.</p><p>Its odd cause the issue is on a windows 2003 server, yet performs as expected on my XP dev machine, running the same set of documents against the index.</p><p>I guess next is open a ticket with Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725470">28</a> by Anthony
		posted on 8/11/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>For the record, this was due to a corrupted collection. I deleted the collection, re-created it and indexing is working as expected. Now I need to figure out why indexing some .doc files is throwing errors to the server.log, but not to the cftry/cfcatch tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725471">29</a> by Garth Beebe
		posted on 1/20/2011 at 6:36 PM
		</div>
		<div class="comment_text"><p>Has there been any update to CF901 for SOLR and the issue of indexing .PDF extensions?<br>I did change the extension to lower case as stated in an earlier post. It worked, but seems odd that you would need to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725472">30</a> by Raymond Camden
		posted on 1/20/2011 at 6:58 PM
		</div>
		<div class="comment_text"><p>The latest 'build' of CF is 901+CHF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725485">31</a> by Barry Chesterman
		posted on 2/23/2011 at 2:10 AM
		</div>
		<div class="comment_text"><p>@Anthony. I also had the maxWarmingSearchers (Coldfusion9.0.1) using the cfindex tag. I was looping files to index each file with Solr.</p><p>I put a try/catch around the cfindex tag and found about 2 times out of 100 files generated that issue, so I put a cfthread sleep after each index to delay the calls to cfindex and it fixed the issue, almost like Solr couldn't handle so many 'index' queries hitting it one after the other?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725474">32</a> by Barry Chesterman
		posted on 2/23/2011 at 3:16 AM
		</div>
		<div class="comment_text"><p>Turns out (at least in my case) you can just index multiple files from a query by specify type="file" in cfindex and it doesn't seem to have the issues like the method I was using in my previous post (it would be nice if this was in the coldfusion docs);</p><p>&lt;cfindex<br>  action="update"<br>  collection="#arguments.collection#"<br>  type="file"<br>  query="tmpQuery"<br>  key="file"<br>  URLpath="urlpath"<br>  categoryTree="categorytree"<br>  custom1="custom1"<br>&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725481">33</a> by Mary Jo Sminkwy
		posted on 4/8/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>I'm also having a LOT of problems with the warming searchers error. My app runs a cfindex whenever a particularly type of data is added, and when my unit tests run that have several tests for this data type, I invariably get this error. I would expect I'd get it when the app is in production as well. The problem appears to be the ColdFusion commits after every cfindex tag and this causes Solr to open a new searcher and "auto warm" it (load from cache). If you are committing more frequently than the warming process, these searches pile up and you hit the error. Problem is, I'm not sure how we can work around this easily. I tried setting the autoWarmCounts to 0 to see if I could reduce the startup time (and since my app does a lot more indexing at runtime than searches so slow startup is not a big issue) but I still hit the error when the number of searches exceeded the maximum set. So kind of at a loss as to how to fix this. I could try setting the limit really high but that supposedly is a bit of a performance killer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725480">34</a> by Mary Jo Sminkey
		posted on 4/8/2011 at 8:53 PM
		</div>
		<div class="comment_text"><p>Bug report added for this, for anyone that wants to vote/add comments. Hopefully they can fix this in CF10.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D86807%3AWmszj1jbxcbNzuNpJsIAkkk6XIE&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=86807">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725486">35</a> by winterjunkie
		posted on 4/12/2011 at 4:01 PM
		</div>
		<div class="comment_text"><p>I was also receiving this error. I tried Barry's suggestion and added half a second cfthread sleep in the loop, which did worked for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725483">36</a> by Leon Chalnick
		posted on 10/22/2011 at 8:02 PM
		</div>
		<div class="comment_text"><p>Okay, this gets better all the time. So I've had the same problem with having to index a HUGE number of documents (HTML files). The problem was temporarily resolved by assigning more heap space to SOLR and then by upping the maxWarmingSearchers setting in solrconfig.xml. However...it appears that when SOLR rebuilds the index, it re-writes the solrconfig.xml file, overwriting our change to this setting!!! This happened when we reindexed last night. Then, of course, the indexing process failed with the same error re: maxWarmingSearchers. So we've got a chicken and egg problem going on here: In order for the indexing to work, we need to up the maxWarmingSearchers setting...but the process of reindexing appears to be overwriting the value of this setting!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725482">37</a> by Leon Chalnick
		posted on 10/22/2011 at 8:09 PM
		</div>
		<div class="comment_text"><p>Is there a 'master prototype' version of solrconfig.xml that any future copies of solrconfig.xml created by SOLR (and put in the individual collection directories) will be based on? If there is...what's its name and where is it located?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725477">38</a> by Raymond Camden
		posted on 10/22/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>I believe - stress - believe - it's copied from here:</p><p>C:\ColdFusion9\solr\solr\conf</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725484">39</a> by Leon Chalnick
		posted on 10/22/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>Yeah Ray, I'd noticed that and wondered. Beliefs are often good, and on occasion, correct :)</p><p>Vinu - do you *know* if this is the source for the solrconfig.xml that winds up in your collection directory? If not...what is the source? Is it accessible to developers somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725488">40</a> by Leon Chalnick
		posted on 10/27/2011 at 6:43 PM
		</div>
		<div class="comment_text"><p>Ray - The default for maxWarmingSearchers in the /solr/solr/conf/solorconfig.xml is 2. I just set it to 6 and reindexed. I figured I could test your theory about this being the "prototype" for the the config files created in the individual collections. The reindexing process over-wrote the solrconfig.xml in our collection's conf/ directory as expected. But  the value of maxWarmingSearchers in the new config file was set to 4. So I don't think it's using the config file under /solr/solr/conf as a prototype...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725491">41</a> by Raymond Camden
		posted on 10/28/2011 at 6:08 AM
		</div>
		<div class="comment_text"><p>You truly got me there. Punt to support?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725490">42</a> by Ronnie
		posted on 11/19/2011 at 12:42 AM
		</div>
		<div class="comment_text"><p>Our team has been in the process of moving our site search from Verity to Solr.  We are running CF9.  I am able to build the collections and search them but have run into a problem.  Hopefully, someone can shed some light on a solution.  We are using cfincludes which can be either cfm or html files.  When the search results are displayed and clicking on one of the links that happen to be one of the included files, none of the css is applied which is usually displayed from the file containing the cfinclude.  Is there any way to have Solr display the link to the file that contains the cfinclude with all the CSS displayed properly as opposed to the included file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725489">43</a> by Raymond Camden
		posted on 11/19/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>If I read you right, you are telling Solr to index CFM files. Normally you don't do that. Solr isn't CF so it can't really 'grok' what is going on. If you really want to do this, then the best I can suggest is logic in App.cfc/cfm that a) recognizes a direct request to a file that is normally included and b) redirects the request to the proper top level document that will include the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725492">44</a> by Leon Chalnick
		posted on 11/19/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>Just thought I'd update my status to me above-mentioned dilemma. We used Verity in the past and found that our nightly rebuilds worked best by deleting the collection and then recreating. But with SOLR you get into this chicken-and-egg problem using this approach due to SOLR's "insistence" on overwriting solorconfig.xml with its own default settings.</p><p>So it turns out that with SOLR, by setting cfindex action="refresh" we can work around this. It has the same effect of emptying out the collection and rebuilding it, but this way, it doesn't stomp on its own configuration file. Hope this proves helpful to anyone else with this problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725493">45</a> by Ronnie
		posted on 11/22/2011 at 11:42 PM
		</div>
		<div class="comment_text"><p>Just for my own clarification and future development, why don't you normally index cfm files when using Solr?  We currently use cfm and html files to display content.  By eliminating the former, wouldn't we be excluding the content in the cfm page that might want to be searched by a user?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725496">46</a> by Raymond Camden
		posted on 11/23/2011 at 12:12 AM
		</div>
		<div class="comment_text"><p>CFM files, much like PHP, etc, are dynamic files that typically spit out database data. When you tell Solr to index them though it is NOT "running" them, but rather reading the file in. So you are - basically - asking Solr to index</p><p>&lt;cfoutput&gt;#name#&lt;/cfoutput&gt;</p><p>which is meaningless.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725500">47</a> by Ronnie
		posted on 11/23/2011 at 12:21 AM
		</div>
		<div class="comment_text"><p>So then is there no way to index dynamic content with Solr?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725503">48</a> by Raymond Camden
		posted on 11/23/2011 at 12:37 AM
		</div>
		<div class="comment_text"><p>Of course there is. cfindex allows you to index queries. So you would simply pass a query to cfindex instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725498">49</a> by Kevin Anderson
		posted on 1/12/2012 at 1:44 PM
		</div>
		<div class="comment_text"><p>First off, I love Solr, especially the performance of searches. However, that said, I am fighting a major battle with using CFIndex to index files.</p><p>The maxWarmingSearchers issues continues to be a major issue. Due to the design of our system, we can simply index the documents in a directory path, rather, we must call CFIndex for each individual file based upon language, etc., from the database.</p><p>Solr has a lot of configuration options, however, it appears that CFIndex, when it invokes Solr, specifies that each invocation should perform a commit, not wait to flush (wish I could teach the 13-year old that), and not wait for a searcher. See the line below:</p><p>Error_opening_new_searcher_exceeded_limit_of_maxWarmingSearchers32_try_again_later Error_opening_new_searcher_exceeded_limit_of_maxWarmingSearchers32_try_again_later request: http://localhost:8983/solr/indure132/update?commit=true&amp;waitFlush=false&amp;waitSearcher=false&amp;wt=javabin&amp;version=1</p><p>Since it appears a commit is being forced on each index operation, the larger the collection, the worse the problem.</p><p>We have built a very poor work around by sleeping for 1000ms between each document and trapping for the error, then sleeping for 60 seconds, but this is not a good long term solution.</p><p>Any other ideas besides giving Adobe a swift kick in the #@$ to get a viable solution?</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725499">50</a> by Raymond Camden
		posted on 1/12/2012 at 5:42 PM
		</div>
		<div class="comment_text"><p>Well, certainly you can skip cfindex and use solr directly via cfhttp. Outside of that, you want to make sure you file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725502">51</a> by Rhys Jones
		posted on 3/28/2012 at 10:49 PM
		</div>
		<div class="comment_text"><p>@Kevin: if you do choose to use Solr via cfhttp, keep in mind that CF's implementation doesn't include all of the file extraction jars that the Solr Cell interface uses to extract content from files (PDF, Word, Excel).  Adobe utilizes its own PDF engine, as well as the MS Office formats from what I can gather.  I'm using CFIndex File similar to you where I'm populating some of the collection information from my database and then the rest of the content from the "rich content files".  Just thought I'd give you a heads-up that the Solr implementation is different from the one "out of the box" from Lucene.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725506">52</a> by Tim Parker
		posted on 3/29/2014 at 4:30 AM
		</div>
		<div class="comment_text"><p>We're bumping into the same problem - CF10 provides an option to suppress the autocommit (&lt;cfindex autocommit="no"....&gt;) - has anyone had any experience with this?  How vulnerable is uncommitted data (i.e. is it in memory or in a staging area on disk? - or, more to the point, is it critical to commit before restarting CF and/or the Solr engine??)</p><p>One thought we have is to wrap the collection in a CFC and commit every N updates (where N is probably in the 10-20 range) and/or when a CFSearch request comes in - any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725505">53</a> by Murray Hopkins
		posted on 9/10/2014 at 5:05 AM
		</div>
		<div class="comment_text"><p>Thanks for your Admin Searcher add-on to the administrator, Ray. I found it because I was googling why my simple searches were taking so long. The following is all run on my developer version under  CF 9,0,2,282541</p><p>Firstly I needed to remove the references to the Verity engine in the _inc9.cfm file - cf threw an error about verity being unsupported. Easy fix.</p><p>Now: timing....<br>I am only indexing db data. As you can see below there are only 32 records in the collection. I noticed that the actual execution time of the test request was way longer than the time reported by cfsearcher (as indeed it was when I ran the same search in my app). So I used getTickCount() around the cfsearch tag in your results.cfm page and this is what I get (as a typical example):<br>"Your search for +policy returned 11 item(s) out of 32 records. It took 1076ms to process and 5372ms overall. "</p><p>In cfsearcher I am only setting the collection and the criteria. The collection does use categories but the timing is the same whether or not I specify these in the search.</p><p>So, my question is, what would account for the extra 4 seconds? I recreated the collection from scratch before I tested in case it was "corrupted" in some way. No change. Any suggestions for places to optimise would be greatly appreciated.</p><p>Thanks Ray,<br>Murray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725504">54</a> by Raymond Camden
		posted on 9/10/2014 at 6:54 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I understand what you are saying. Are you saying your code takes 4 seconds longer to run than my admin tool?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725508">55</a> by @Raymond
		posted on 9/10/2014 at 7:45 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. No, what I am saying is that the timing reported by the tool based on the meta data returned from the cfsearch is (in the example above) 1076ms but the actual elapsed time for the same cfsearch via the tool as determined by wrapping it within getTickCounts reports that the search takes 5372ms. <br>I amended your results.cfm as follows to time and report:</p><p>	&lt;cfset variables.startTime = getTickCount()&gt;<br>    &lt;cfsearch collection="#form.collection#" criteria="#<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>#" name="result" status="meta" startrow="#url.start#" maxrows="#max#" <br>	contextpassages="3" contexthighlightbegin="____B____" contexthighlightend="____BE____" <br>	categorytree="#form.categorytree#" category="#form.category#" suggestions="always"&gt;<br>	&lt;cfset variables.totalTicks = getTickCount() - variables.startTime&gt;</p><p>    &lt;cfoutput&gt;<br>    &lt;p&gt;<br>    Your search for #<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a># returned #meta.found# item(s) out of #meta.searched# records. It took #meta.time#ms to process <br>and #variables.totalTicks#ms overall.  &lt;-- I added that last phrase</p><p>{etc}</p><p>I am curious about the 4 second difference. And, when I do the same search via my app I get a similar difference. I want my searches to be faster and was investigating the slowness and came upon your tool.</p><p>Thanks,<br>Murray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725509">56</a> by Raymond Camden
		posted on 9/10/2014 at 3:19 PM
		</div>
		<div class="comment_text"><p>You got me there. All I can think of is that the time reported is how long it took the search engine to respond, *but* CF does some work after it to get it ready. Like maybe the context passsages stuff is on the CF side, not the search engine. Try removing some of those features, get it down to just the search, and see if they match.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725510">57</a> by Murray Hopkins
		posted on 9/11/2014 at 2:43 AM
		</div>
		<div class="comment_text"><p>Thanks again Ray. I tried a couple of things:<br>1. Minimising all settings - 0 context, 1 row, etc etc. No difference<br>2. I searched against the empty bookclub collection. This resulted in:<br>Your search for book returned 0 item(s) out of 0 records. It took 1060ms to process and 7455ms overall.</p><p>I tried the bookclub multiple times and it always took between 7.4 and 7.9 seconds.</p><p>At the risk of hijacking your post, I would be interested to know if others are getting the same results. It is hard to understand why a search of an empty collection would take 7 seconds. To confirm these results I rebooted my computer (Win7 Prof 8gb ram) and restarted CF.</p><p>In my original testing against the same small collection on a shared host live server using my app I was getting similar delays. i.e. it was taking about 5 seconds (for just the cfsearch). So, it seems that it isn't just my computer, and I am at a loss.</p><p>Thanks again for looking at this.<br>Murray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725512">58</a> by Murray Hopkins
		posted on 9/11/2014 at 4:53 AM
		</div>
		<div class="comment_text"><p>PS: I tried the same search of the empty bookclub collection using the cfsearcher on a different computer with CF10 developer version and got:<br>Your search for book returned 0 item(s) out of 0 records. It took 437ms to process and 10858ms overall.</p><p>Multiple tests were all in the 10-11 second range.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725511">59</a> by Raymond Camden
		posted on 9/11/2014 at 7:01 AM
		</div>
		<div class="comment_text"><p>I haven't used Solr in a few months, but I know it has never been that slow. I honestly don't know what to tell you outside of trying the main CF support line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725513">60</a> by Murray Hopkins
		posted on 9/11/2014 at 7:48 AM
		</div>
		<div class="comment_text"><p>Thanks for looking at it Ray.  :-) <br>If I get it resolved I will post back here.<br>Go well,<br>Murray</p></div>
	</div>
</div>
		