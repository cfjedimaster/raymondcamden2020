
<div class="comment" id="c_1713653787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653787">1</a> by Bryan Ashcraft
		posted on 6/3/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>After posting on the CF list I found these little gems and thought others might like to have look.</p><p>Thanks to Massimo (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.massimocorner.com%3AOQoBofii2nCYF7rKu7fpxSm4K_A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.massimocorner.com">http://www.massimocorner.com</a>):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.olimpo.ch%2Ftmt%2Ftag%2Fspryxml%2F%3AFAbb9gy_yyIG47UPLTBxpucub1g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.olimpo.ch/tmt/tag/spryxml/">http://www.olimpo.ch/tmt/ta...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.olimpo.ch%2Ftmt%2Ftag%2Fsprydataset%2F%3AMrYRHq-02DB9hHnbFp1eb8hsr8g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.olimpo.ch/tmt/tag/sprydataset/">http://www.olimpo.ch/tmt/ta...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653799">2</a> by Raymond Camden
		posted on 6/3/2006 at 12:51 AM
		</div>
		<div class="comment_text"><p>Cool stuff. I was planning on sharing my utils as well. So hopefully he won't mind. :) I'm thinking of a generic proxy CFM that will be written in ways like a CFC. But you could do stuff like:</p><p>/foo.cfc?cfc=path.to.cfc&amp;method=X&amp;arg1=val1</p><p>Etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653797">3</a> by Dan Sorensen
		posted on 6/3/2006 at 1:55 AM
		</div>
		<div class="comment_text"><p>It doesn't look like your example has any dynamic updating. If that's the case, than this example is the same as looping over query data into a table with a CF server side script...right? (not that there's anything wrong with that)</p><p>I'll need to spend time with their dynamic master/detail feature before I get too excited.</p><p>Looking over their documentation, there's probably a way to create a CF custom tag that accepts a query, and two sets of column names (master cols and detail cols) and automatically generates a dynamic master/detail page similar to their examples. Now THAT would be nice. ;-)</p><p>Thanks for bringing this topic up again. I have been meaning to spend more time looking over SPRY.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653800">4</a> by Raymond Camden
		posted on 6/3/2006 at 2:00 AM
		</div>
		<div class="comment_text"><p>Yes, I should have made it clear this was a read only demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653796">5</a> by Matt Stoner
		posted on 6/3/2006 at 2:17 AM
		</div>
		<div class="comment_text"><p>Thanks for the demo. I had looked at the adobe labs page recently, but it was nice to see an implementation. I'm definitely going to be using spry now and your xml cfcs!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653801">6</a> by Kyle Hayes
		posted on 6/3/2006 at 2:42 AM
		</div>
		<div class="comment_text"><p>Something I would like to add, is that you cannot use this framework (yet) as purely an AJAX solution. I am working on a project right now that is using AJAX technology and I attempted to use the Spry framework for this. The problem I had is that, I didn't need the Ajax transaction when loading thet page nor did I have any datasets to return. I wanted to submit a transaction when the user submitted a form. What happened is that Spry threw an error because it did not receive any data wehn the page loaded. You cannot specifically tell it to wait for the data, it wants it to be available upon loading the page. I suppose a workaround could have been sending blank data, but I just decided to switch to Prototype. I do however, like how Spry acts in a very similar way to the Cfoutput-query function. Very slick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653805">7</a> by Raymond Camden
		posted on 6/3/2006 at 5:25 AM
		</div>
		<div class="comment_text"><p>Kyle, I don't remember anything saying that stuff had to be loaded immidiately. I think that's just how their demos work in general. I'll post to the forums and see if I can confirm that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653798">8</a> by Kyle Hayes
		posted on 6/3/2006 at 6:16 AM
		</div>
		<div class="comment_text"><p>I just created this page as an example:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kylehayes.info%2FsendFeed%2Fspryeg.cfm%3A6WyI-Qs-bcpUkyog2ITeVHarvX0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kylehayes.info/sendFeed/spryeg.cfm">http://www.kylehayes.info/s...</a></p><p>As you can see, because I don't call the dataset initially, I get an error. And the only way to prevent this error is to create a dataset, that simply has no data in it (at least from what I have found).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653802">9</a> by Kyle Hayes
		posted on 6/3/2006 at 6:19 AM
		</div>
		<div class="comment_text"><p>I suppose what I could do is create this kind of dataset:</p><p>var dsStatus = new Spry.Data.XMLDataSet("", "status/message");</p><p>where I am not passing a url but I am passing the arguments that desribe how the data will be coming in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653807">10</a> by Mike Nimer
		posted on 6/3/2006 at 11:47 PM
		</div>
		<div class="comment_text"><p>&gt;ColdFusion was wrapping my response in WDDX. So what could I do?</p><p>Ray, I found this problem myself in CF7 when I was playing around with ajax. So in CF7.1 I modified the return behavior of CFCs. As you discovered, by default if you request a CFC from a URL all values are wrapped in WDDX (this way you can return complex types). However, now there is one exception. If you set the ReturnType="XML" we won't wrap it in wddx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653804">11</a> by Raymond Camden
		posted on 6/3/2006 at 11:53 PM
		</div>
		<div class="comment_text"><p>7.1.... that's the latest released version, or is that Mystic? (Either way - Mike - this is cool to here. Thank you!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653809">12</a> by Raymond Camden
		posted on 6/4/2006 at 6:12 AM
		</div>
		<div class="comment_text"><p>Kyle - now be clear on this - I'm new to Spry so I could be wrong, so plese take what I say with a grain of salt. The reason you get an error is because you are trying to use the binding and the data is not there. Therefore, the error makes sense. If you don't want data to load immediately, you can't use the fancy binding. But - you can still use the AJAX features along with the xpath parsing. You would just need to build the result yourself. So, you can use Spry to call the XML resource and than take the nice dataset result and do with it what you want. Add to a drop down, modify text fields, whatever. I'd still consider this pretty darn useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653808">13</a> by John Farrar
		posted on 6/4/2006 at 7:01 AM
		</div>
		<div class="comment_text"><p>Well, guess what I found wrong with the demo. Bet you did a CSS layout! LOL, if the window is to small it doesn't display content in the right place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653806">14</a> by Kyle Hayes
		posted on 6/4/2006 at 12:12 PM
		</div>
		<div class="comment_text"><p>Ray - Thank you for that insight. I think what you said is probably right. The day I tried the Spry framework, I did not delve into the documentation details of the various functions and objects, so I didn't even think abou the fact that the object returned is probably still an xml dataset. Thank you for looking into this, Ray. I really did want to like Spry (as I have been an Adobe guy for so many years). So I shall give it another chance. Onward, Mission: I heart Spry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653811">15</a> by Dave Carabetta
		posted on 6/5/2006 at 11:05 PM
		</div>
		<div class="comment_text"><p>My only real rub with the framework is that it required proprietary extensions to the HTML syntax, which means that it's going to break validators. Personally, I don't really care if it doesn't validate on account of these extensions, but it's something to consider that you're now augmenting the standard HTML syntax with proprietary code. Wasn't Microsoft lambasted for trying to do the same thing several years ago?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653810">16</a> by Jamie Munro
		posted on 6/6/2006 at 12:29 AM
		</div>
		<div class="comment_text"><p>Has anyone got this to work using a dataset returned from a CFC?  If I run the CFC method on its own I get the XML document returned to the browser, but calling the same URL in the javascript function fails.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653815">17</a> by Raymond Camden
		posted on 6/6/2006 at 6:41 AM
		</div>
		<div class="comment_text"><p>CFCs return their data WDDX encoded. Did you ry using returnType="xml" as Nimer described above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653818">18</a> by Jamie Munro
		posted on 6/6/2006 at 5:27 PM
		</div>
		<div class="comment_text"><p>I had the returntype set to XML.  I have some other things to work on but hopefully I'll get a chance to look into this again.  Spry looks like a great start from Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653786">19</a> by Damon Cooper
		posted on 6/16/2006 at 5:20 AM
		</div>
		<div class="comment_text"><p>Ray, yes, Mike meant CF 7.0.1.</p><p>HTH<br>Damon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653788">20</a> by Raymond Camden
		posted on 6/16/2006 at 5:25 AM
		</div>
		<div class="comment_text"><p>Thanks. I tested on Mystic but am glad to hear it's in the released edition as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653790">21</a> by Dave Spurr
		posted on 8/9/2006 at 12:27 AM
		</div>
		<div class="comment_text"><p>I really wanted to check out this demo after hearing about it on the Helms &amp; Peters Podcast, but I get a CF file not found error on the demo link (/spry/blog.cfm).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653789">22</a> by Raymond Camden
		posted on 8/9/2006 at 12:31 AM
		</div>
		<div class="comment_text"><p>Fixed Dave.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653791">23</a> by Doug
		posted on 9/8/2006 at 1:47 AM
		</div>
		<div class="comment_text"><p>I am trying to sort this all out in my head from square 1. So how does the data come from the CFC? Can you talk more about that aspect, OR is there a resouce that I have missed somewhere along the way that explains that.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653812">24</a> by Raymond Camden
		posted on 9/8/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>CFCs can return data to remote clients - not just to local CF code. So I can point Spry to a CFC method that returns XML. In THIS blog entry I said I couldn't, and I had to point to a CFM, but Mike Nimer let me know that I could point to a CFC if the returnType was XML (if you don't do that, then the CFC wraps the result in WDDX).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653813">25</a> by Doug
		posted on 9/13/2006 at 7:58 PM
		</div>
		<div class="comment_text"><p>Great. I used the tag from one of the links above which itegrated quite nicely.</p><p>New question regarding formatting of content. How? it looks like the typical html tags are not interpreted. Are there any work arounds for this?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653820">26</a> by Raymond Camden
		posted on 9/13/2006 at 8:01 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you mean. Spry lets you formdata anyway you want. So for example: &amp;lt;b&amp;gt;{foo}&amp;lt;/&amp;gt;. I surrounded the foo token with bold tags. I can really use any layout I would like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653817">27</a> by Raymond Camden
		posted on 9/13/2006 at 8:02 PM
		</div>
		<div class="comment_text"><p>formdata=format data</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653816">28</a> by Doug Bedient
		posted on 9/14/2006 at 5:56 PM
		</div>
		<div class="comment_text"><p>Sorry. Here is an example.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.tusker.com%2FSpry_P1_3_08-11%2Fsamples%2FZuggestSample.html%3A99UL3PRrroDGC7_GkczwwyyBT4c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tusker.com/Spry_P1_3_08-11/samples/ZuggestSample.html">http://www.tusker.com/Spry_...</a></p><p>Currently there is some additional garbage because it was pasted directly from word but it shows what I'm am referrering to. All of the HTML tags are treated as text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653822">29</a> by Raymond Camden
		posted on 9/14/2006 at 6:03 PM
		</div>
		<div class="comment_text"><p>Oh you mean the HTML returned from XML. Yes, there is a solution to that. Give me a few to dig it up from my brain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653825">30</a> by Raymond Camden
		posted on 9/14/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>Ok, you have to do this server side where the XML is generated. It needs to wrap the info in cdata. Here is an example from my blog demo:</p><p>&lt;cfset txt = "&lt;![CDATA[" &amp; txt &amp; "]]" &amp; "&gt;"&gt;</p><p>I basically use this to wrap text that may have html. For text that won't have html, I don't wrap it like that. I do this instead:</p><p>&lt;cfset txt = xmlFormat(txt)&gt;</p><p>I can't take credit for this - I believe Adobe posted a response to me on the forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653824">31</a> by Doug
		posted on 9/14/2006 at 7:35 PM
		</div>
		<div class="comment_text"><p>In the spryxlm.cfm tag the formatting is structured as:</p><p>&lt;cfset fieldsList = LCase(attributes.variable.columnList)&gt;<br>&lt;cfset xmlData = ""&gt;<br>&lt;cfloop query="attributes.variable"&gt;<br>	&lt;cfset jsRow = ""&gt;<br>		&lt;cfloop index="x" list="#fieldsList#"&gt;<br>		&lt;cfset jsRow = jsRow &amp; "&lt;" &amp; x &amp; "&gt;" &amp; XMLFormat(attributes.variable[x][attributes.variable.currentRow]) &amp; "&lt;/" &amp; x &amp; "&gt;"&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset xmlData = xmlData &amp; "&lt;#attributes.rownode#&gt;" &amp; jsRow &amp; "&lt;/#attributes.rownode#&gt;" &amp; Chr(13)&amp; Chr(10)&gt;<br>&lt;/cfloop&gt;</p><p>I saw your other posting where you implemented the CDATA but as the structure of this is slightly different, I am unsure how to include it. I tried replacing the XMLFormat but it puked.</p><p>&lt;cfset jsRow = jsRow &amp; "&lt;" &amp; x &amp; "&gt;" &amp; XMLFormat(attributes.variable[x][attributes.variable.currentRow]) &amp; "&lt;/" &amp; x &amp; "&gt;"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653829">32</a> by Raymond Camden
		posted on 9/14/2006 at 7:37 PM
		</div>
		<div class="comment_text"><p>Heh, ok, but _how_ did it puke? :) Remember for the lines you cdata you DONT use xmlFormat on the value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653826">33</a> by Doug
		posted on 9/14/2006 at 7:50 PM
		</div>
		<div class="comment_text"><p>Is that what you used &lt;cfif listFindNoCase(arguments.cDataCols, col)&gt; for? Does encapsulating everything cause the errror?</p><p>&lt;cfset fieldsList = LCase(attributes.variable.columnList)&gt;<br>&lt;cfset xmlData = ""&gt;<br>&lt;cfloop query="attributes.variable"&gt;<br>	&lt;cfset jsRow = ""&gt;<br>		&lt;cfloop index="x" list="#fieldsList#"&gt;<br>		&lt;cfset jsRow = jsRow &amp; "&lt;" &amp; x &amp; "&gt;" &amp; &lt;![CDATA[" &amp; attributes.variable[x][attributes.variable.currentRow] &amp; "]]&gt;&lt;/" &amp; x &amp; "&gt;"&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset xmlData = xmlData &amp; "&lt;#attributes.rownode#&gt;" &amp; jsRow &amp; "&lt;/#attributes.rownode#&gt;" &amp; Chr(13)&amp; Chr(10)&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653830">34</a> by Doug
		posted on 9/14/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>Got it! Thanks for your help. Obviously some syntax issue. This works</p><p>&lt;cfset jsRow = jsRow &amp; "&lt;" &amp; x &amp; "&gt;&lt;![CDATA[" &amp; attributes.variable[x][attributes.variable.currentRow] &amp; "]]&gt;&lt;/" &amp; x &amp; "&gt;"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653831">35</a> by GOD
		posted on 3/8/2007 at 7:06 AM
		</div>
		<div class="comment_text"><p>Cold Fusion is dead</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.tiobe.com%2Findex.htm%3Ftiobe_index%3AAUR835RYY3mOdNNCQF_w_xUpojE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tiobe.com/index.htm?tiobe_index">http://www.tiobe.com/index....</a></p><p>grow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653828">36</a> by Raymond Camden
		posted on 3/8/2007 at 8:43 PM
		</div>
		<div class="comment_text"><p>God: I refuse to listen to anyone who doesn't post a real name. If you are convinced that CF is dead, have the guts to stand up and at least be honest about who you are. The TIOBE index is not perfect and does not cover a lot of places where CF rules - intranets. Anyway, this comment is not even on topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653827">37</a> by Kyle Hayes
		posted on 3/8/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>Yeah, Ray, you tell 'em!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653832">38</a> by John Farrar
		posted on 3/8/2007 at 10:29 PM
		</div>
		<div class="comment_text"><p>Ray, I personally know God. He loves me so much he gave his son for me. Yet, on the subject of ColdFusion my opinion is this imposter will be dead before ColdFusion is!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653834">39</a> by Byron
		posted on 5/9/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray.</p><p>I've finally sat down with Spry this morning and have been working it, testing this, trying that etc. So far, so good. I really like that I'm seeing and I can see how incredibly useful this is.</p><p>One question:</p><p>What's a nice way (or good way) to create something like a nested/grouped output?</p><p>I've got a dataset that contains item names, they constitute 'groups' of data. Each item in turn has a number of locations and finally details.</p><p>So if I want to output and group by item name, then location then display the details what's your observation on best route with Spry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653833">40</a> by Dan Sorensen
		posted on 5/9/2007 at 9:40 PM
		</div>
		<div class="comment_text"><p>I just got Dreamweaver CS3 yesterday and WOW!!! it makes using Spry so easy. I know Dreamweaver isn't the favorite coding product out there, but I now see how all this Spry stuff works into Adobe's master plan. :-)</p><p>If there's an annoyance, it's that the Spry version of the dynamic table doesn't have paging built in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653835">41</a> by Raymond Camden
		posted on 5/10/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>@Bryan: I'd use 2 datasets. Remember that the URL of a dataset can be bound to a value from another dataset. Search my blog for the CFLib Spry demo as it shows an example of this.</p><p>@Dan: I've heard this. I downloaded the demo just to see it - but I haven't tried it yet.</p><p>Spry does support paging - it may not be in an easy DWMX wizard though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653836">42</a> by Dan Sorensen
		posted on 5/10/2007 at 1:45 AM
		</div>
		<div class="comment_text"><p>Re paging: The Spry documentation (<a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fen_US%2FSpry%2F1.4%2Findex.html%29%3ACZBgOEq4SwCHYdKwYT2LwrB06D8&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/en_US/Spry/1.4/index.html)">http://livedocs.adobe.com/e...</a> isn't very clear on how to use the dynamic table. (Livedocs aren't easy to search) Your blog is a great help, but where do you go to get your info on Spry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653837">43</a> by Dan Sorensen
		posted on 5/10/2007 at 1:48 AM
		</div>
		<div class="comment_text"><p>To answer my own question, most of your blog posts still refer to Adobe Labs for Spry documentation. I wonder why the official released livedocs help (referred to by Dreamweaver) doesn't include the entirety of that labs info...</p><p>Hmmm. Obviously this is rhetorical. ...now back to your regularly scheduled programming. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653838">44</a> by Raymond Camden
		posted on 5/10/2007 at 1:54 AM
		</div>
		<div class="comment_text"><p>I think paging may not be officially "baked" in yet, if that makes sense. I mean the whole framework is still in development of course, but I believe paging may not be "officially unofficial" yet. ;)</p><p>Does that make sense? Thank you for the link though - I'm going to blog it a bit later.</p></div>
	</div>
</div>
		