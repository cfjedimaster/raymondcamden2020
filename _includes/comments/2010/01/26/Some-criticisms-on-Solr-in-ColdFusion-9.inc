
<div class="comment" id="c_1713721465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721465">1</a> by Josh Curtiss
		posted on 1/27/2010 at 12:23 AM
		</div>
		<div class="comment_text"><p>Isn't it true that Verity doesn't support the new Office 2007 file formats? This was a deal-breaker for me. It made Solr wonderful for me compared to Verity despite other faults.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721469">2</a> by Raymond Camden
		posted on 1/27/2010 at 12:26 AM
		</div>
		<div class="comment_text"><p>Fire me off an example and I'll add it to my test. Be sure to send me a snippet of text in case I can't open it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721464">3</a> by John Sieber
		posted on 1/27/2010 at 2:00 AM
		</div>
		<div class="comment_text"><p>Thanks for taking the time to test and post your findings. On one of my sites I have a large .pdf file based collection that I planned to move from verity to solr. I think I will now wait as these issues will cause headaches for me that I would rather not have right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721466">4</a> by Raymond Camden
		posted on 1/27/2010 at 2:30 AM
		</div>
		<div class="comment_text"><p>@Josh - Thanks for the test file. As you expected, Verity did NOT parse the DOCX. Solr did. Like before though it missed all the metadata. It did, though, correctly match inside. Oh - one change - it DID do context this time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721470">5</a> by Shannon Hicks
		posted on 1/27/2010 at 4:02 AM
		</div>
		<div class="comment_text"><p>I will point out that most of the problems you've encountered are with Adobe's CF implementation of Solr, not with Solr itself. Ditching cfindex/cfsearch and using Solr's API directly ends up being a far more useful, though nowhere near as easy.</p><p>I *really* need to clean up my cfsolr library and get that released :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721473">6</a> by Raymond Camden
		posted on 1/27/2010 at 4:12 AM
		</div>
		<div class="comment_text"><p>Why not just build off of my Seeker OS project? ;) Although it is Lucene, not Solr.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721475">7</a> by Peter Harris
		posted on 1/27/2010 at 4:37 AM
		</div>
		<div class="comment_text"><p>Second what Shannon says, this is ColdFusion, not Solr.</p><p>We've gone the standalone solr route and couldn't be happier.  We use Tika for binary text extraction and don't have the issues described above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721474">8</a> by Raymond Camden
		posted on 1/27/2010 at 4:50 AM
		</div>
		<div class="comment_text"><p>Good points on the "It isn't Solr's fault" thread. Do you guys think I don't make that clear enough? The comments should clear it up of course, but if it needs clarifying even more, I can add a note to the end of the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721476">9</a> by Todd Rafferty
		posted on 1/27/2010 at 5:40 PM
		</div>
		<div class="comment_text"><p>@Ray: I think when you read the blog and come across statements like "I don't think I can recommend Solr for production user" - it means you're blaming Solr. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721477">10</a> by Raymond Camden
		posted on 1/27/2010 at 5:43 PM
		</div>
		<div class="comment_text"><p>Good point - I added a qualifier and I fixed the typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721479">11</a> by Sid Maestre
		posted on 1/28/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Is there any problem continuing to use Verity when upgrading to ColdFusion 9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721478">12</a> by Raymond Camden
		posted on 1/28/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>@Sid: I don't believe so. Again - note that Adobe says Solr is much faster. As I said above, I do not think my speed tests are very accurate. I think, most likely, you will find Solr faster. That being said, Verity should be "good enough". I do think Verity will be removed soon. But it's not like you will be surprised by this. If Verity is removed in CF10, you will have plenty of time to migrate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721498">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721498">13</a> by Aaron Longnion
		posted on 6/23/2010 at 5:57 PM
		</div>
		<div class="comment_text"><p>Hi @Shannon or @Peter (or anyone else) - do you have any documentation and/or CFC wrappers to share for a Standalone SOLR implementation with CF? We're on CF9, but have over 700,000 documents (think CV's and resumes), so we don't want to break old search functionality when upgrading from Verity to SOLR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721492">14</a> by Shannon Hicks
		posted on 6/23/2010 at 6:32 PM
		</div>
		<div class="comment_text"><p>@aaron</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsolrlib.riaforge.org%2F%3AtDbVaL89Hk9tdCMxAHBE1SDqoPU&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsolrlib.riaforge.org/">http://cfsolrlib.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721496">15</a> by alex
		posted on 7/16/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>It seems like some of your issues were addressed in 9.0.1 according to the doc: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fdocumentation%2Fen%2Fcoldfusion%2F901%2Fcf901features.pdf%3AeWlkcEuRQryUzhGcB6Jt_4jyWX8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/documentation/en/coldfusion/901/cf901features.pdf">http://www.adobe.com/suppor...</a></p><p>I'd be interested in a followup post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721495">16</a> by Raymond Camden
		posted on 7/16/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>Yep, if you saw my post on the 901 released, I mentioned this specifically. A follow up is planned.</p><p>CF901 blog post: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F7%2F13%2FColdFusion-901-Released%3ATf6dNvOmYPajDByPfkNBtQaVaGU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/7/13/ColdFusion-901-Released">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721500">17</a> by Ed
		posted on 8/31/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>Is the lack of MS Office 2007 support in Verity new to CF9?  We are currently on CF8 with a pretty large doc store 280k+ docs indexed and working fine with Word 2007 files.  As one of the other comments said...  think CV's indexed and search-able so I know I would hear about it if Word 2007 files did not show up.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721499">18</a> by Raymond Camden
		posted on 8/31/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>Basically Verity hasn't been updated in 100 years. (Well the embedded version.) I'd consider testing in Solr and only Solr.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721501">19</a> by Bobbytuck
		posted on 6/21/2011 at 1:24 AM
		</div>
		<div class="comment_text"><p>I realize this is pretty old, but is there any easy way to include a PDF or Excel or Word file creation date in the initial solr CFINDEX? Is it possible to do this with a custom field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721504">20</a> by Raymond Camden
		posted on 6/21/2011 at 6:13 AM
		</div>
		<div class="comment_text"><p>If you create the index manually - sure - but then you don't get the auto text extraction. Actually wait - if you do a file/dir based index, and then follow it up with manual updates, then yes, that should work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721503">21</a> by Ronnie
		posted on 9/30/2011 at 6:47 PM
		</div>
		<div class="comment_text"><p>In reference to Ray's comments regarding the context field not displaying any additional information, I found the same situation.  I altered the xml files as described but no new information showed up in the context field.  Verity had useful information to display on search results page.  Any suggestions as to retrieve the same sort of information in context field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721581">22</a> by Raymond Camden
		posted on 9/30/2011 at 7:07 PM
		</div>
		<div class="comment_text"><p>Ronnie, a few things:</p><p>a) Are you running 901+the latest hot fixes?<br>b) Did you remember to _ask_ for context with the contextPassages attribute?<br>c) Did you reindex your data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721577">23</a> by Ronnie
		posted on 10/5/2011 at 11:03 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>1.  /opt/coldfusion9/lib/updates/hf901-00002.jar<br>2.  &lt;cfsearch collection="#coll#" name="Getresults" startrow="#startRow#" maxrows="#maxRow#"  contextpassages="1"<br>	  contextbytes="500" contexthighlightbegin="&lt;strong&gt;" contextHighlightEnd="&lt;/strong&gt;" <br>	 criteria="#searchFor#" suggestions="Always" status="info" language="English" &gt;<br>3. Not explicitly.  Each time the scheduled task that builds the collection (weekly) runs, it purges the collection and then rebuilds it.  I assumed that indexed it so that it would never need to be reindexed per se.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721585">24</a> by Raymond Camden
		posted on 10/7/2011 at 8:16 PM
		</div>
		<div class="comment_text"><p>So yeah, if you purge and reindex it should be refresh. Odd. At this time I'll have to punt and suggest calling Adobe for support. You mentioned you altered the XML files. If you try with a new collection, and don't change the XML, do you see anything different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721583">25</a> by Ronnie
		posted on 11/19/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>Ray, first off, I was able to fix the previous problem by making the changes to the config files.  It didn't happen right away but I think that after our SAs bounced our server and I reran the collection build all was well.  Now for the next problem, I posted this to another of you blogs so forgive me if it's a duplicate.</p><p>Our team has been in the process of moving our site search from Verity to Solr. We are running CF9. I am able to build the collections and search them but have run into a problem. Hopefully, someone can shed some light on a solution. We are using cfincludes which can be either cfm or html files. When the search results are displayed and clicking on one of the links that happen to be one of the included files, none of the css is applied which is usually displayed from the file containing the cfinclude. Is there any way to have Solr display the link to the file that contains the cfinclude with all the CSS displayed properly as opposed to the included file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721580">26</a> by Raymond Camden
		posted on 11/19/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>I responded to your question on the other comment you posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721578">27</a> by Garth Beebe
		posted on 8/28/2012 at 5:30 PM
		</div>
		<div class="comment_text"><p>Is there an issue with indexing .zip files and password encrypted pdfs?<br>I thought i had read a few months ago (most likely longer) that password encrypted pdfs were an issue.</p><p>Garth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721582">28</a> by Raymond Camden
		posted on 8/28/2012 at 5:48 PM
		</div>
		<div class="comment_text"><p>Not sure. The easiest thing to do though is to write a quick test and report back to us. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721584">29</a> by Garth Beebe
		posted on 8/28/2012 at 6:38 PM
		</div>
		<div class="comment_text"><p>I was unable to index password encrypted pdfs. Wasn't sure if there was a setting or solr config file i could change.</p><p>In the mean time i found on <a href="http://disq.us/url?url=http%3A%2F%2Fwiki.apache.org%2Fsolr%2FExtractingRequestHandler%3A1PUPhywsokkAx-nJuQYNmApOmjQ&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.apache.org/solr/ExtractingRequestHandler">http://wiki.apache.org/solr...</a><br>some information regarding this. :)</p><p>It appears that you can not with the version (1.3) that comes with CF 9.</p><p>I tried to index zip files via the CFadmin interface. This errored out.<br>My thought was same as above.... maybe i needed to add something to the config file.</p><p>I haven't found anything yet on <a href="http://disq.us/url?url=http%3A%2F%2Fwiki.apache.org%2Fsolr%3A1CBbJj-UMLSnw6PaGEl72i-ek_w&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.apache.org/solr">http://wiki.apache.org/solr</a>, but will keep looking.</p><p>Thanks</p></div>
	</div>
</div>
		