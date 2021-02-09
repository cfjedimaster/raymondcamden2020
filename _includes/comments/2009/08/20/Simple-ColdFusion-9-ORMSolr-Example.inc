
<div class="comment" id="c_1713717818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717818">1</a> by Art
		posted on 8/20/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>Great example, thanks. How would you modify CF8WACK Vol-2 Pg-463 Listing 39.13 - "Combining Verity Searches with SQL Queries on the Fly", if you still need to simultaneously get additional data out of the model when you run your cfsearch?</p><p>Isn't a "slight logic bug" illogical?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717811">2</a> by Shannon Hicks
		posted on 8/20/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>Now show an example of how to index more complex content. Say your pressreleases object did a many-to-many join to a contacts table, and a one-to-one join on author. How can you index that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717809">3</a> by Raymond Camden
		posted on 8/20/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>@Art: The key result from the search is the same as the PK in the database, so I could use the CF9 entity functions if I needed "more" then I could index. Don't forget we have both 4 custom fields as well as categorization we can use as well (which could be - kinda - two more fields).</p><p>@Shannon: To be honest, that isn't too exciting. I was able to skip quite a bit with one call: entityToQuery, but if I couldn't do that, then I'd simply loop over and make a query by hand. I _could_ do N cfindex calls as well, but that tends to be slow. If folks do feel a more complex example would be warranted, then I can definitely consider it for the next post.</p><p>So does anyone see the security error with the search?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717810">4</a> by Daniel Budde
		posted on 8/20/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>Personnally I started avoiding using Verity because of the resource hog it became in CF7+.  I tried seperating out the verity server from the CF server, but I was never able to get it to function well.  Do you know if Solr performs any better than Verity?  I am currently looking for performance information, but if anyone knows anything, I would be glad to hear it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717812">5</a> by Raymond Camden
		posted on 8/20/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>I've not done any testing yet, sorry. I can say I did a "large index" test with Seeker, my Lucene wrapper for CF8. It was able to search a multimillion index pretty darn fast (I think it may have been 20 million even - but not sure).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717814">6</a> by Rick Mason
		posted on 8/21/2009 at 1:07 AM
		</div>
		<div class="comment_text"><p>Thanks for this post. I think SOLR and ORM are the two things I'm most looking forward to in CF9. We already have plans to upgrade our servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717817">7</a> by david buhler
		posted on 8/21/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>"Unfortunately, there are no script based alternatives for Solr/Verity support."</p><p>When I saw Ben Forta speak with Adam Lehman at NYCFUG, it was my understanding that every tag but 1 (I forget which one) would be available in CFScript syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717815">8</a> by Raymond Camden
		posted on 8/21/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>Unfortunately this is not true. Some new things are being added - for example, cfdirectory support was fixed post public beta - but as far as I know, it will NOT be 100%. I've asked Adobe to ensure they carefully document what can and cannot be done in CFS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717816">9</a> by david buhler
		posted on 8/21/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>Boo. Then again, I applaud their willingness to keep pushing in new features in smaller releases, even if it's not 100%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717813">10</a> by pat branely
		posted on 8/22/2009 at 7:09 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>how well does this work with verity/k2 ?</p><p>from my experience there is a massive performance hit when calling CFindex using verity and updating only 1 record. since moving from CF6 to cf7/8 we have had to re-structure our apps to CFINDEX via a schedule and pass a query with a large number of records to cfindex. ie. cfindex with 1 record = 10 seconds. cfidnex passing 100 records = 10 seconds.</p><p>Does CF9 bring back the the vdk style of updating your index on save ? from your example - It looks like it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717819">11</a> by Raymond Camden
		posted on 8/22/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>Wow, I've never seen Verity that slow. I've certainly seen it go slow if you did a lot of singular updates instead of a large query at once, but for atomic operations, it always went fast for me. To be fair, it has been a while since I used Verity. I did it last for CFCookbook, but I never saw slowness when editing content.</p><p>To your last question, I'm not sure you mean by 'vdk style of updating' - but - as far as I know, this code should just plain "work" if you switched from Solr to Verity - in fact, I'm willing to bet the delete bug doesn't exist on the Verity site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717830">12</a> by pat branely
		posted on 8/23/2009 at 12:43 PM
		</div>
		<div class="comment_text"><p>VDK in 6.1 allowed atomic updates - ie save a record update the index with the changes of that record. it might take a little extra time but nothing noticeable on save</p><p>K2 in 7/8 would take seconds to update just 1 record in the index. it was so slow for us we had to deferr indexing out of the save operation on records and into a schedule task.</p><p>anyways im excited to see this solr example in CF9</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717831">13</a> by AJ Mercer
		posted on 10/15/2009 at 11:23 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Have you tried to use custom1 in cfsearch with solr?<br>&lt;cfsearch collection="#arguments.collection#" type="simple" criteria="CF_CUSTOM2 &lt;matches&gt; #newResId#" name="qTemp" /&gt;<br>Throws an error for me.</p><p>CF9 doc say custom1 .. 4 are for verity only<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-7d04.html%3AIDfUkz5q9451XNMHU1gcTMA47Gc&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-7d04.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717835">14</a> by Raymond Camden
		posted on 10/15/2009 at 3:47 PM
		</div>
		<div class="comment_text"><p>I _thought_ that I had and that it worked. What error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717832">15</a> by AJ Mercer
		posted on 10/15/2009 at 4:36 PM
		</div>
		<div class="comment_text"><p>Looks like the problem is actually a corrupt PDF.</p><p>However, one corrupt PDF through an error,<br>but another one just hangs the systems???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717833">16</a> by Raymond Camden
		posted on 10/15/2009 at 4:42 PM
		</div>
		<div class="comment_text"><p>So it sounds like you are saying 2 things her.e</p><p>1) A bad PDF that gets indexed causes the entire collection to stop working. Right?</p><p>2) It also sounds like another bad PDF caused the server to hang. Right?</p><p>Please confirm as to me it sounds like 2 separate issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717837">17</a> by AJ Mercer
		posted on 10/15/2009 at 4:56 PM
		</div>
		<div class="comment_text"><p>The process does a cfindex update and then a cfsearch. The collection is not getting corrupted.</p><p>There are (at least) two corrupt PDF files to be added to the collection. One throws and error (which can be handled with try/catch). The other is hanging CF - no error thrown, not even a timeout.</p><p>I took out cfsearch as I thought that was causing the error - but still hangs.</p><p>I added cfpdf getinfo (removing cfindex) and that hangs the system on the same file.</p><p>I will do more testing tomorrow when I am back in the office and let you know what I discover.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717834">18</a> by Raymond Camden
		posted on 10/15/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>Where is the error - is it in the cfindex or the cfsearch? You said you took out the cfsearch but it still hanged - but is that for the "Hang" PDF or the "Error" PDF? (It seems like one pdf causes an error, one a hang.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717840">19</a> by AJ Mercer
		posted on 10/16/2009 at 7:56 AM
		</div>
		<div class="comment_text"><p>added a bug<br>    <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D80390%3ALGzxQfkm43qQneFvSK2F1xywcOc&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=80390">http://cfbugs.adobe.com/cfb...</a></p><p>but not sure how to supply my test code and files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717836">20</a> by Phillip Senn
		posted on 11/10/2009 at 6:55 AM
		</div>
		<div class="comment_text"><p>I'm starting to learn the new syntax.<br>So, instead of:</p><p>&lt;cfset Application.prService = CreateObject("component","Model.prService")&gt;<br>we now say:<br>this.mappings["/model"] = getDirectoryFromPath(getCurrentTemplatePath()) &amp; "model";<br>application.prService = new model.prService();<br>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717843">21</a> by Raymond Camden
		posted on 11/10/2009 at 7:27 AM
		</div>
		<div class="comment_text"><p>Not exactly. Typically a "service" component isn't an entity. An entity normally represents one row of data, or one "instance", so one person. A service component typically works with data as a whole. So my userService, for example, is my main API to get users. The userService may return user entities.</p><p>Make sense?</p><p>To be clear, CF ORM doesn't really DEMAND you follow any particular type of way of coding. So don't take what I say as the One True Way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717841">22</a> by Henry Ho
		posted on 6/3/2010 at 6:13 AM
		</div>
		<div class="comment_text"><p>custom1, custom2, custom3, custom4 work with Solr??  The documentation said they're only for Verity &lt;MATCHES&gt; operator.  How to use with customX with Solr?</p><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717842">23</a> by Raymond Camden
		posted on 6/3/2010 at 3:17 PM
		</div>
		<div class="comment_text"><p>You can use them to store additional data. This can be used when displaying the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717844">24</a> by Raymond Camden
		posted on 6/3/2010 at 3:24 PM
		</div>
		<div class="comment_text"><p>You can search against custom fields using a colon operator:</p><p>custom1:NNNNN</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717847">25</a> by Henry Ho
		posted on 6/3/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>awesome, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717851">26</a> by Fabio
		posted on 8/4/2010 at 1:04 PM
		</div>
		<div class="comment_text"><p>A little dummy question about coldfusion + solr search engine.<br>I am indexing hundreds of .htm docs with a 'question' in the &lt;title&gt; and the 'answer' in the &lt;body&gt;. <br>1) Will Solr prioritize the title in my cfsearch? I mean, is the title more important for the engine, isn't it?<br>2) And how can I add one or more categories/tags to my doc in the index, e.g. based on the argument? I mean, how can I read a html tag (ex. &lt;h1&gt;) and put its content into an index field? is it possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717849">27</a> by Raymond Camden
		posted on 8/4/2010 at 4:11 PM
		</div>
		<div class="comment_text"><p>1) As far as I know, Solr does get some context into what it indexes, so it should treat TITLE as more important. To be honest, I don't have proof of this.</p><p>2) You can use categorization when you index data. If you are indexing files, it means you have to switch to a more manual process, but you can do it. The cfindex tag supports the category and categorytree arguments. You also have 4 custom fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717850">28</a> by Fabio
		posted on 8/4/2010 at 4:39 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for your ultra-fast answer Raymond.<br>I knew that categorization would let me achieve my goal but... no reference on how to do it actually. I mean how can I assign a document to the 'red' category and another to the 'blue' one?<br>To be honest, here's what I'm tryiing to realize:<br>my .htm doc contains &lt;title&gt;What color are your eyes?&lt;/title&gt;&lt;body&gt;They are blue.&lt;/body&gt; . I want to search "are your eyes blue?" or "tell me your eyes' color" and get that as a result.  Solr doesn't seem to get the more relevant word 'eyes'..  It highlights 'what color' or 'me your' .. wtf?!? Also, I am working in italian language (cfcollection cfindex cfsearch using language='italian'). <br>Indeed, for categorizing, do I have to put some category tag (e.g. &lt;h1&gt;Blue&lt;/h1&gt;) and tell solr CUSTOM1="h1" ? <br>Feel free to send me an e-mail if you can help me, please.<br>Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717852">29</a> by Raymond Camden
		posted on 8/4/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>The docs do discuss this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWSc3ff6d0ea77859461172e0811cbec0ef2f-7ff6.html%23WSc3ff6d0ea77859461172e0811cbec22c24-7b29%3AXoc5T5Emt0Ks2k3wSjZR8_UPrW4&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WSc3ff6d0ea77859461172e0811cbec0ef2f-7ff6.html#WSc3ff6d0ea77859461172e0811cbec22c24-7b29">http://help.adobe.com/en_US...</a></p><p>However, in terms of file based indexing the category/categoryTree you use is assigned to every thing you index. In order to apply a unique value to each file, you would need to a) decide on your business logic (ie, WHAT cat goes with what file) and b) index one file at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717853">30</a> by Fernando
		posted on 8/25/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>You mentioned in a previous post that Solr would "supposedly" treat TITLE as more important in an HTML doc collection.  What about if I want to give preference to certain DB table fields?  For example, I create a query to index with title, description, actors, and themes fields, but I want the title to be the most impotant (and then description, actors, and themes in that order or importance, if possible).  Is this something that Solr does implicitly by me giving the fields the correct "mapping names" that Solr understands so as to be able to give preference?  Or is there some manual way to do this via some configuration attributes or some xml file somewhere?</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717855">31</a> by Raymond Camden
		posted on 8/26/2010 at 3:45 PM
		</div>
		<div class="comment_text"><p>It looks like you can "boost"</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.apache.org%2Fsolr%2FSolrRelevancyFAQ%23How_can_I_make_.22superman.22_in_the_title_field_score_higher_than_in_the_subject_field%3AlgH_ARiJvsVuA2hlaFLQ9fAclwY&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.apache.org/solr/SolrRelevancyFAQ#How_can_I_make_.22superman.22_in_the_title_field_score_higher_than_in_the_subject_field">http://wiki.apache.org/solr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717854">32</a> by Fernando
		posted on 8/30/2010 at 8:44 PM
		</div>
		<div class="comment_text"><p>That did the trick.  Thank you!  Next time I'll be a little more diligent and try to look for the actual product's docs as opposed to limiting my search to Adobe docs. :D<br>By using the "custom" attributes for my DB fields (custom1="title" custom2="description" etc), I was able to "boost" title in the criteria as follows:<br>criteria="custom1:#searchStr#^2 custom2:#searchStr#"...</p><p>Thank you once again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717856">33</a> by Raymond Camden
		posted on 8/31/2010 at 2:30 AM
		</div>
		<div class="comment_text"><p>No problem. Solr is something I really need to spend more time with. It is incredibly powerful and I'm overjoyed (can I say that?) with Adobe adding it to ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717858">34</a> by geekatwork
		posted on 9/2/2010 at 5:18 AM
		</div>
		<div class="comment_text"><p>Has any one had any luck in converting &lt;CONTAINS&gt; code from Verity to Solr. Whenever I search for a substring in a string it returns all matching parts of the substring. e.g. Looking for "hello world" in "always use hello world the first time" returns matches for hello and for world.<br>I can get it to work by using +custom1:(+hello +world) but that seems wrong, I would have thought +custom1:"hello world" would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717859">35</a> by geekatwork
		posted on 9/2/2010 at 6:02 AM
		</div>
		<div class="comment_text"><p>Re: converting &lt;CONTAINS&gt; code from Verity to Solr<br>Use custom1:"hello world"~1000000 , I nearly had it but I'd left the 1000000 (slop?) of of it when testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717865">36</a> by Fernando
		posted on 9/15/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>Has anyone had any issues when modifying schema.xml (in either the collection folder or the actual solr template folder) and then restarting the solr service?  When I do it, none of the collections show up and I get an error when trying to add new ones (The logs haven't proved to be very useful so far...).  I then have to manually remove the custom collections folders and their respective entries in solr.xml, and replace the schema.xml with the original.  Once I do this and I restart the solr service, I can then add new collections again.<br>This obviously will not work for a production environment since anytime the server restarts, searching will not work in any applications that have implemented it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717860">37</a> by Fernando
		posted on 9/28/2010 at 1:49 AM
		</div>
		<div class="comment_text"><p>Anybody have a similar issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717862">38</a> by Fernando
		posted on 9/28/2010 at 8:24 PM
		</div>
		<div class="comment_text"><p>It seems one cannot have multiple tokenizers per fieldType in the schema.xml</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717861">39</a> by sean hogge
		posted on 10/15/2010 at 1:33 AM
		</div>
		<div class="comment_text"><p>I have a couple of strange things going on with Solr that I can't find a solution for anywhere.  I'm convinced it's because I'm missing something obvious, so hopefully it's a simple matter to point out where I'm wrong.</p><p>ColdFusion 9.0.1 Standard on Linux - web root is /www, but web sites are hosted in /www/<a href="http://disq.us/url?url=http%3A%2F%2Fsitename.com%3AI2yt6Bkbiqe--X28R7pN4VyLtAI&amp;cuid=3321886" rel="nofollow noopener" title="sitename.com">sitename.com</a>.</p><p>When I index /www/<a href="http://disq.us/url?url=http%3A%2F%2Fsitename.com%3AI2yt6Bkbiqe--X28R7pN4VyLtAI&amp;cuid=3321886" rel="nofollow noopener" title="sitename.com">sitename.com</a>, and search the index, I get hits from /www/CFIDE.  I have no symlink, only the mapping in the CF administrator.</p><p>My "common sense" tells me Solr shouldn't index anything not physically present in the recursed directories.  Is there some known setting that I need to flip to prevent this behavior, or am I completely misunderstanding the issue here?  I swear I'm not a complete idiot.  Mostly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717866">40</a> by sean hogge
		posted on 10/15/2010 at 1:43 AM
		</div>
		<div class="comment_text"><p>Well, it looks like purging and re-indexing seems to have remedied that issue.  And it appears to be non-reproducible.</p><p>But since I've gone and revived this old thread, I'd love to hear any recommendations for a good solution to search CFML content.  Is there a site spider plugin that might integrate with Solr somehow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717867">41</a> by Mike
		posted on 10/15/2010 at 11:10 PM
		</div>
		<div class="comment_text"><p>Can you please show me the whole statement for the search?<br>I need to boost scoring for title and by using this snippet:<br>criteria="custom1:#searchStr#^2 custom2:#searchStr#".<br>(from above) the search doesn't return anything.</p><p>This is my statement:<br>&lt;cfindex collection="myCol" action="update" body="title,description" custom1="description" title="title" key="ID" query="myQ"&gt;<br>&lt;cfsearch collection="myCol" criteria="title:#searchStr#^10 custom1:#searchStr#^5" name="searchResult" &gt;</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717864">42</a> by Raymond Camden
		posted on 10/18/2010 at 3:19 PM
		</div>
		<div class="comment_text"><p>If you only boost title, does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717863">43</a> by Mike
		posted on 10/18/2010 at 5:12 PM
		</div>
		<div class="comment_text"><p>No it doesn't. Not sure what's going on but whenever I'm adding title: to the search criteria it seems that it's using the whole thing for the search and as a result it doesn't find anything.<br>I searched all over the place and can't find a reason for it.</p><p>Very strange.<br>Can somebody test and see if they can use title: in the search criteria to boost the score?</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717872">44</a> by Eduardo Aben Athar
		posted on 10/19/2010 at 5:49 PM
		</div>
		<div class="comment_text"><p>Raymond Speaks!<br>Have you tested with the Solr search index with more than 10,000 accessions of contents and 5000 hits a day in it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717868">45</a> by Raymond Camden
		posted on 10/19/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>Nope, I do not have anything in production yet with it. I'm considering perhaps using it at CFLib as a good test.</p><p>I'm presenting on SOLR at RIAUnleashed, and will have a small sample app then. I can try running JMeter against the site and see how it holds up. But to be honest, 10K hits in a day isn't a whole heck of a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717871">46</a> by David Arnold
		posted on 10/19/2010 at 10:42 PM
		</div>
		<div class="comment_text"><p>I have a CF9 site that I am trying to use SOLR on to index PDF files. I am able to do cfm and txt files, but not PDF. Any reason as to why.  I also built a Verity collection, which does find the PDFs.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717869">47</a> by Raymond Camden
		posted on 10/20/2010 at 7:57 PM
		</div>
		<div class="comment_text"><p>David, there were bugs in PDF indexing fixed in 901/CHF. So ensure you have BOTH 901 installed AND the cumulative hot fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717870">48</a> by David Arnold
		posted on 10/20/2010 at 8:26 PM
		</div>
		<div class="comment_text"><p>I applied the HF and reindexed. Still no PDFs.<br>Destroyed the collection and rebuilt. Reindexed. Still no PDFs.</p><p>Thanks for the help.<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717902">49</a> by Raymond Camden
		posted on 10/21/2010 at 4:19 PM
		</div>
		<div class="comment_text"><p>Can you say _how_ you did the index? Was it via the cf admin or was it via cfindex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717873">50</a> by David Arnold
		posted on 10/21/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>Sure.</p><p>The collection was created from the website via the CF ADMIN pages.</p><p>The index was created from a webpage using CFINDEX. I will post the code below, just in case...</p><p>&lt;CFSET IndexCollection = "psolr"&gt;<br>&lt;CFSET IndexDirectory = "d:\prelude-printed\docs"&gt;<br>&lt;CFSET IndexRecurse = "YES"&gt;<br>&lt;CFSET IndexExtensions = ".*"&gt;<br>&lt;CFSET IndexLanguage = "english"&gt;</p><p>&lt;CFINDEX<br>   collection="#IndexCollection#"<br>    action="update"<br>    type="PATH"<br>    key="#IndexDirectory#\"<br>    extensions="#IndexExtensions#"<br>    recurse="#IndexRecurse#"<br>    language="#IndexLanguage#"<br>	URLPATH="<a href="http://disq.us/url?url=http%3A%2F%2Fnewdev.hipco.com%2Fpreludedocuments%2Fdocs%2F%3Atv4p6atJayLKe8EIgGRmZJKhaWg&amp;cuid=3321886" rel="nofollow noopener" title="http://newdev.hipco.com/preludedocuments/docs/">http://newdev.hipco.com/pre...</a>"<br>&gt;</p><p>I have contact Adobe support in regards to this. Waiting to hear from them.  The server is a new install of W2K3, CF9 with the update and CHF applied. No other application are on the server, other than IIS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717875">51</a> by Raymond Camden
		posted on 10/21/2010 at 6:42 PM
		</div>
		<div class="comment_text"><p>Ok, so to be clear, you run this and the PDFs are not added. Add a status attribute to your cfindex tag. This returns a structure that tells you how much stuff was added, updated, and deleted. I'd also check your extensions value. Maybe specifically use *.pdf just to see if it makes a difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717874">52</a> by David Arnold
		posted on 10/21/2010 at 8:07 PM
		</div>
		<div class="comment_text"><p>Okay.</p><p>Thanks to your suggestions, I thought it was very weird that it was not indexing the PDFs that Verity has previously indexed (different collection). I threw in the status attribute as you suggested. I was able to see the txt and cfm files that I had also added to that directory to be indexed. Those all indexed just fine, but none of the PDFs in same directory.</p><p>I then decided to put in some other documents (XLS, BMP, DOC, etc...) into the directory to see if the indexing was going to work. It did!</p><p>I then found some "other" PDFs, put them in the directory, and they indexed!</p><p>Background: The PDFs are created by a system called DCS, which we use for invoice printing for our ERP system. It is odd to me that Verity can index these PDFs while Solr cannot. I took a look at the PDF, it is compatible with 5.x and greater.  There must be something with these PDFs that Solr does not like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717876">53</a> by Raymond Camden
		posted on 10/21/2010 at 8:11 PM
		</div>
		<div class="comment_text"><p>Odd -well - at least you got part of the way. :) I'd file a bug w/ Adobe on your DCS PDFs.</p><p>Also - you may want to try using CFPDF to read the text from them. If you can, you can index them manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717877">54</a> by David Arnold
		posted on 10/21/2010 at 8:51 PM
		</div>
		<div class="comment_text"><p>Been contacted by Adobe in regards to this and providing examples to them for further review. I will let you know how it progresses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717879">55</a> by David Arnold
		posted on 10/28/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>I have a bug logged with Adobe.</p><p>It seems that a PDF is not a PDF. Adobe called the PDF corrupt, even though it can be indexed by Verity, open/modified by Acrobat, and modified by CFPDF.</p><p>We are going to create a PDF from a PDF (using the CFPDF tag) and then letting Solr index that PDF. We tested the process and it works!</p><p>Thanks to all that helped in this.<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717878">56</a> by Jerry
		posted on 4/13/2011 at 7:18 PM
		</div>
		<div class="comment_text"><p>Could you address how to set up file collections when the target files reside on a server other than my webserver?    I have installed SOLR service from the CF9 disk on the target FileServer and can see it running there but I cannot get files added to a SOLR collection in the Administrator on the webserver.  I think I'm missing something really obvious here.  I've looked for this answer everywhere, including your collaborative book(s) on CF9.  Your thoughts would be most appreciated.  CF9, W2003, IIS<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717880">57</a> by Shannon Hicks
		posted on 4/13/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>Jerry -</p><p>I'm sure the problem is you have it locked down so solr is only accessible to localhost. You need to open it up to allow access from your web server. You might need to do this both at the solr level, and at the machine or network firewall level, depending on your setup.</p><p>For solr, you basically have to do the opposite of this tech article, either allowing from any IP, or just from your CF server's IP: <a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F807%2Fcpsid_80719.html%3AeQ8iJRhYGukwNRHeZmbO4DoJ4Us&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/807/cpsid_80719.html">http://kb2.adobe.com/cps/80...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717889">58</a> by Jerry
		posted on 4/14/2011 at 2:19 AM
		</div>
		<div class="comment_text"><p>Shannon,  thanks for the idea.  I determined that those files (on both servers) are in the default configuration --that of Not locked down.  I tried mixing it up as best I could, as well.  I think my issue is much more fundamental.  I gotta start over from the beginning.<br>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717887">59</a> by conor
		posted on 5/23/2011 at 2:51 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am new to coldfusion and I am reading up on how to use solr. I am reading throught your solr example on <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F8%2F20%2FSimple-ColdFusion-9-ORMSolr-Example%3AV1PKjk2FeW8pBk_j6n9hDNz1nnk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/8/20/Simple-ColdFusion-9-ORMSolr-Example">http://www.coldfusionjedi.c...</a> and I have downloaded the zip.  However, when I launched it locally, I get the error: 'Datasource pressreleases could not be found.'  Casn you tell me what I must do for this?</p><p>Thanks for you help!<br>Conor</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717892">60</a> by Raymond Camden
		posted on 5/23/2011 at 3:52 PM
		</div>
		<div class="comment_text"><p>Create a datasource called pressreleases. Point it to a MySQL db (an empty one). Any dbtype should work actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717888">61</a> by Mike
		posted on 8/30/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>Can somebody show me how to search in the custom fields.<br>Using<br>&lt;cfsearch collection="mycollection" criteria="#searchString# custom2:#searchString#" name="q" status="r" suggestions="always" contextPassages="0"&gt;</p><p>I get a big fat error:</p><p>here was a problem while attempting to perform a search.<br>Error executing query : orgapachelucenequeryParserParseException_Cannot_parse_custom_Encountered_EOF_at_line_1_column_7__Was_expecting_one_of____________________QUOTED_______TERM_______PREFIXTERM_______WILDTERM_____________________NUMBER_______</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717893">62</a> by Raymond Camden
		posted on 8/31/2011 at 12:25 AM
		</div>
		<div class="comment_text"><p>Do you get it for all values of searchString?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717890">63</a> by Mike
		posted on 8/31/2011 at 3:01 AM
		</div>
		<div class="comment_text"><p>Yes, and basically the value I'm searching exists in the query.<br>I thought I have the syntax wrong, but didn't find anywhere a different way of doing it.</p><p>BTW I'm on CF 9.01.</p><p>Thanks Ray for your quick response</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717895">64</a> by Raymond Camden
		posted on 9/1/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>That's the right syntax for searching against a custom field so I'm not sure what to suggest. If you want to ping me off the blog I can maybe dig a bit deeper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717899">65</a> by Mike
		posted on 9/1/2011 at 5:45 PM
		</div>
		<div class="comment_text"><p>I kind of fix it by adding the custom filed to the body.</p><p>Not the ideal solution but it's working. I will try on a different server and let you know.</p><p>eagerly waiting for CF10. I hope solr will finally have all the features enabled and working.</p><p>Thanks again  <br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717896">66</a> by Raymond Camden
		posted on 9/1/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>Solr does have all the features. CFSEARCH does not. :) Remember you can hit Solr directly via HTTP and get the results back. CFSEARCH as a wrapper can't cover every feature.</p><p>I can say that in my CF/Solr preso next week I'm revealing one of the new things in CF10. You should attend. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717898">67</a> by Mike
		posted on 9/1/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>you are right I meant cfsearch not solr.</p><p>Is it on the cfmeetup or something else?<br>Please provide URL if it's available.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717897">68</a> by Raymond Camden
		posted on 9/1/2011 at 10:14 PM
		</div>
		<div class="comment_text"><p>Here are the details.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fevent%2Findex.cfm%3Fevent%3Ddetail%26id%3D1864016%26loc%3Den_us%3AnbY3FfnJr7LUV0hQQ1T--IdaiCc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/event/index.cfm?event=detail&amp;id=1864016&amp;loc=en_us">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717901">69</a> by Mike
		posted on 9/1/2011 at 10:32 PM
		</div>
		<div class="comment_text"><p>Ray, will there be a recording of this event? Because it's mid day,  I don't think I can attend but I will very much like to see it.</p><p>Also, I really hope that some advanced features are shown  including the ability to access  solr directly as you mention in the previous message.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717900">70</a> by Raymond Camden
		posted on 9/1/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>There will be a recording, but I'm not going that deep. I just mention it's possible. Remember there is a web based interface to Solr. By default you can hit it here - http://localhost:8983/solr/</p><p>Basically you just need to make HTTP requests with the right url parameters. Check the Solr docs for information on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717905">71</a> by sdtacoma
		posted on 9/2/2011 at 2:14 AM
		</div>
		<div class="comment_text"><p>Is there a way to cfdump or view the contents of a collection some way? I am trying to update a collection and want to see if my update is in the collection or not. Searching the collection isn't returning any hits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717906">72</a> by Raymond Camden
		posted on 9/2/2011 at 5:11 AM
		</div>
		<div class="comment_text"><p>If you search for nothing, it will return everything.</p><p>If you want to search for a specific item, remember you can search against the key field. I'm not having luck now using a file based key, but I'm pretty sure it _does_ work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717908">73</a> by Mike
		posted on 9/8/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Did you have a chance to see if ranking works in CF implementation. <br>See my previous post (41).</p><p>Thx<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717907">74</a> by Raymond Camden
		posted on 9/8/2011 at 11:35 PM
		</div>
		<div class="comment_text"><p>It seems to work for me. I tried this search against a collection created on cfdocs:</p><p>cffeed title:cfthread</p><p>Which means: cffeed in the body or cfthread in the title.</p><p>I then did</p><p>cffeed title:cfthread^100</p><p>And the result with cfthread in the title popped to the top rank wise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717910">75</a> by Mike
		posted on 9/8/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>Can you please show the whole index and search statement?<br>Maybe I'm doing something wrong, even though if I would have it wrong (from a syntax point of view) I would expect an error, But I get no results.<br>If I do a normal search without ranking I get results</p><p>Thx for the quick replay<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717911">76</a> by Raymond Camden
		posted on 9/8/2011 at 11:58 PM
		</div>
		<div class="comment_text"><p>I did post the entire search statement above. The index is an index of the CFDocs that ship with ColdFusion. I created that in the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717913">77</a> by Mike
		posted on 11/26/2011 at 9:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Unfortunately it's me again, For the life of me  I can't get how to boost certain fields so they show at the top.</p><p>CF version: 9,0,1,274733  <br>Update Level 	chf9010002.jar</p><p>I'm using the following code:<br>&lt;cfquery name="getBooks"&gt;<br>	select bookID, title, url, datePublished, author, description<br>	from  books<br>&lt;/cfquery&gt;</p><p>&lt;cfindex collection="books" action="update"   body="description" <br>	 custom1="datePublished" custom2="url" <br>	 custom3="author" title="title" <br>	 type="custom" key="bookID" query="getBooks"&gt;</p><p>	&lt;cfsearch collection="books" criteria="title:#searchCriteria#^10" name="results" status="r" suggestions="always" <br>			 ContextBytes="1000" ContextPassages="4"&gt;</p><p>When I run this I get 0 results.</p><p>If I removed the title from the criteria:<br>&lt;cfsearch collection="books" criteria="#searchCriteria#" name="results" status="r" suggestions="always" <br>			 ContextBytes="1000" ContextPassages="4"&gt;</p><p>I get all the hits but entries without the search query in the title have higher ranking  then the ones with the criteria.</p><p>Is this the correct syntax? do I have to make changes to the solrconfig.xml file?</p><p>Based on all I have read it should work, but it doesn't (for me).</p><p>Please help.</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717909">78</a> by Raymond Camden
		posted on 11/27/2011 at 12:23 AM
		</div>
		<div class="comment_text"><p>Odd. I tested it on an index of cfdocs, and it seems to work ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717912">79</a> by Mike
		posted on 11/27/2011 at 5:23 AM
		</div>
		<div class="comment_text"><p>and that's what's killing me. It should work but it doesn't. I have tried on 3 different computers with standard CF9 installation.</p><p>Is your installation standard?<br>Do I have to update the installation of solr?<br>Can you please send me your solr confing xml file.</p><p>I have read that I can play with that.</p><p>Thanks Ray for the quick response on a Saturday.</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717914">80</a> by Raymond Camden
		posted on 11/27/2011 at 5:27 AM
		</div>
		<div class="comment_text"><p>901+latest CHR. <br>My solr config wasn't modified. I just made an index of the cfdocs that ship with CF. If you make one it should be the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717923">81</a> by Mike
		posted on 11/27/2011 at 8:22 AM
		</div>
		<div class="comment_text"><p>No luck, I have tried indexing documents instead of a query and same result.</p><p>If it's not too much to ask can you please (when you have some time) post the exact statements to create the collection, index and search with boost.</p><p>Definitely I am missing something.</p><p>Thanks again<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717920">82</a> by Raymond Camden
		posted on 11/27/2011 at 9:33 AM
		</div>
		<div class="comment_text"><p>Given a file index of cfdocs, this is what I saw:</p><p>I searched for rss and number one was: Adobe ColdFusion * cffeed</p><p>I then did</p><p>rss OR title:RSS</p><p>and then an item with RSS in the title went to the top. When I boosted the score by 10, it stayed at number one, but oddly the score went down by 10. So... um... not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717924">83</a> by Mike
		posted on 11/27/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>Don't know what to say. It just doesn't work. By adding criteria="#searchCriteria# or title:#searchCriteria#" the order actually changes but not for good. Actually the first 3 returns have no mention of the searchCriteria in the title, while the last item has. I was hoping that by looking at your exact code I can see something that I'm missing...Maybe the boost has to be done when indexing the collection</p><p>Thanks<br>and have a great week-end</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717918">84</a> by Raymond Camden
		posted on 11/28/2011 at 12:42 AM
		</div>
		<div class="comment_text"><p>Well, it makes sense that the first 3 may not have it in the title. You said, "X or title:X". Did you try "X OR title:X^10"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717922">85</a> by Mike
		posted on 11/28/2011 at 2:08 AM
		</div>
		<div class="comment_text"><p>Yes, I have tried lower and upper case, with or without boosting the title, out of desperation change even the order.</p><p>And while the order changed there were more entries at the top without the search word in the title.</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717919">86</a> by Raymond Camden
		posted on 11/28/2011 at 2:14 AM
		</div>
		<div class="comment_text"><p>Any chance you can share a zip of your data?</p></div>
	</div>
</div>
		