
<div class="comment" id="c_1713674149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674149">1</a> by Andrew
		posted on 11/9/2007 at 10:26 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>   Thanks so much for the information.  It really helped me understand how to use application.cfc, as well as give me an idea of what to include where.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674169">2</a> by Kris Brixon
		posted on 11/9/2007 at 10:34 PM
		</div>
		<div class="comment_text"><p>I like onRequestEnd for logging based on the idea that anything not related to what gets displayed on the screen should be pushed off as late as possible so the page can start rendering for the user as soon as possible.</p><p>I like to cfflush the header and navigation of the page so that it starts to load while the main content is cooking in the CF engine. End users comment that the pages load faster, even though the total time is the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674167">3</a> by David Buhler
		posted on 11/9/2007 at 11:38 PM
		</div>
		<div class="comment_text"><p>If you define onMissingTemplate() in a site's root application.cfc, and you define a MissingTemplate page in the CF Admin, which one takes precedence?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674168">4</a> by Michael Brennan-White
		posted on 11/9/2007 at 11:57 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You should put the How Cold Fusion can Save your business ecommerce example on CFlearn .  I don't know how I missed it when you originally published it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674173">5</a> by Raymond Camden
		posted on 11/10/2007 at 12:06 AM
		</div>
		<div class="comment_text"><p>David, onMissingTemplate takes precedence, which is good. App should be able to override server in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674174">6</a> by Qasim Rasheed
		posted on 11/10/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the nice explanation. Can you add this explanation as comments to your Application.cfc reference as it would help anyone downloading that PDF without looking at this post.</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674175">7</a> by Raymond Camden
		posted on 11/10/2007 at 12:56 AM
		</div>
		<div class="comment_text"><p>Qasim - actually - no. The point of the App.cfc file is to be more of a code skeleton. Something you can cut and paste into your file, or, what I did was make a Snippet out of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674179">8</a> by Rob
		posted on 11/10/2007 at 1:36 AM
		</div>
		<div class="comment_text"><p>Do you have any considerations about what methods would NOT work in a FlashRemoting environment. I remember that there were issues with onRequest/onError giving a NULL result using FlashRemoting in CF7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674178">9</a> by Raymond Camden
		posted on 11/10/2007 at 1:52 AM
		</div>
		<div class="comment_text"><p>onError _will_ work with Flash Remoting. The code snippet I mentioned above should make flash remoting work as well as web services/CFCs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674176">10</a> by Jay
		posted on 11/10/2007 at 7:04 AM
		</div>
		<div class="comment_text"><p>Ray, you advise against include a page header/footer via onRequestStart and onRequestEnd...so, how *do* you recommend including those, if not via those methods in app.cfc ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674183">11</a> by Raymond Camden
		posted on 11/10/2007 at 6:25 PM
		</div>
		<div class="comment_text"><p>Check out:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F9%2F3%2FColdFusion-custom-tag-for-layout-example%3AN2OshZs7Hu-5ot7_HwTdthZHcao&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/9/3/ColdFusion-custom-tag-for-layout-example">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674184">12</a> by Mike
		posted on 1/27/2008 at 9:51 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Sorry to drag up an old thread,,  just wondered...</p><p>I have been using a standard Application.cfc based on your template for a while, but when i have tried to use cfajaxproxy it generates an error if i have anything in onRequestStart.. if i delete that, although it breaks my site atm the cfajaxproxy stuff works fine.</p><p>Any ideas why this might happen?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674182">13</a> by Raymond Camden
		posted on 1/28/2008 at 1:22 AM
		</div>
		<div class="comment_text"><p>onRequest. You will need to remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674185">14</a> by Mike
		posted on 1/28/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>Why is this? is it a bug or is  it like my bugs, actually a feature ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674186">15</a> by Raymond Camden
		posted on 1/28/2008 at 1:26 AM
		</div>
		<div class="comment_text"><p>Officially it isn't a bug. When you have onRequest, it blocks all Web Service or CFC method hits. This is documented. You _can_ get around it using a trick in onRequestStart. I don't have the trick handy (Sean created it). Personally I consider this a bug and I wish Adobe would change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674188">16</a> by Mike
		posted on 1/28/2008 at 1:51 AM
		</div>
		<div class="comment_text"><p>Thanks very much for the responce :)</p><p>It is annoying I suppose, but it was no great problem deleting onRequest!</p><p>I can finally sit back with a beer and enjoy my added Ajax functionality.</p><p>Thanks again, and keep blogging.</p><p>Thumbs up from me in the UK!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674189">17</a> by Raymond Camden
		posted on 1/28/2008 at 3:53 AM
		</div>
		<div class="comment_text"><p>So the question is - what type of beer?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674187">18</a> by Mike
		posted on 1/28/2008 at 4:10 AM
		</div>
		<div class="comment_text"><p>Oh, only the best Lager!</p><p>Carling, or maybe a refreshing Magners Cider!</p><p>Whats your tipple of choice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674191">19</a> by Raymond Camden
		posted on 1/28/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>Hmm. Not sure I have a favorite. Used to be Killian's Red, but I'm a bit over that now. I like dark, rich beers, that are strong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674190">20</a> by Mike
		posted on 1/28/2008 at 5:08 PM
		</div>
		<div class="comment_text"><p>You'd love 6X its something we have here - not sure if you have it there... velvety smooth!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674192">21</a> by Dan O&amp;aposKeefe
		posted on 4/5/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You mentioned if you include your UDF library in the onRequestStart method, that you need to copy them to the request scope in order for them to be available on all pages.</p><p>I understand using onRequest to include it will do that automatically for you, but how are you copying a UDF library to the request scope?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674194">22</a> by Raymond Camden
		posted on 4/5/2008 at 9:34 PM
		</div>
		<div class="comment_text"><p>I do it by hand. You can treat UDFs as variables.</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frequest.foo%3AJVNlJxdAjCSTX5h4xXY8IUzmsZE&amp;cuid=3321886" rel="nofollow noopener" title="request.foo">request.foo</a> = foo&gt;</p><p>That will copy foo, whether it be UDF, array, whatever, to the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674193">23</a> by Dan O&amp;aposKeefe
		posted on 4/6/2008 at 5:57 PM
		</div>
		<div class="comment_text"><p>So in your onRequestStart, you include the UDFLibrary, and if the library contained 5 functions, right after the include you would have 5 set statements, 1 for each function?</p><p>Thanks,</p><p>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674196">24</a> by Raymond Camden
		posted on 4/6/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>Nope - I do it all in the include. That keeps my app.cfc simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674195">25</a> by Richard Smith
		posted on 12/4/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I use Flex on my corporate intranet.  I have previously written a meeting scheduler with Coldfusion 7 (tested on 8 and works as is).  I enable session management and use a SESSION.DataSourceName in the onSessionStart function in my application.cfc so all components will reference same datasource.  While this is fine with my CF pages, I get an error when I call the CFC from a Flex remote object, "[RPC Fault faultString="Unable to invoke CFC - The requested scope session has not been enabled." faultCode="Server.Processing" faultDetail="Before session variables can be used, the session state management system must be enabled using the cfapplication tag."]"  Any idea how to make this work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674197">26</a> by Grant
		posted on 12/24/2009 at 1:55 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I used to email myself a dump of the errors, but i got so many that I couldn't keep up with them all because of the large volume of traffic running through my sites.</p><p>Also, sending mail in coldfusion 7 is a memory hog - so much so that I ended up writing my own cf_mail custom tag and a python script to send the mail as a separate process.</p><p>I also wrote my own fatalError(message) function that looks at my isDebugging() function and will dump out all the scopes I need when I'm fixing things.  Otherwise fatalError() will just show the simple message to the user.</p><p>I found this method to be much more useful than emailing myself an endless pile of errors I'd never read.</p><p>I'd love to hear your thoughts on my methods.  I still have a nagging feeling that I should be doing more, but as far as time management goes, I'm doing the best I know how currently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674198">27</a> by Raymond Camden
		posted on 12/24/2009 at 9:13 AM
		</div>
		<div class="comment_text"><p>I'm surprised by your statement about mail in CF7 being a hog. I know one of the big improvements to CF7 was the speed of mail. I've never seen it be a hog myself.</p><p>As for your method, sure, I mean, when in development you want to see the error immediately, and then hide it when in production. That's typically recommended I'd say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674199">28</a> by Sung
		posted on 4/28/2010 at 9:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>This is such an old topic that I'm afraid you might not even get this, but I'm still not clear on how you include UDFs in application.cfc.  Here's my code snippet:</p><p>&lt;cffunction name="OnRequestStart"&gt; <br>    &lt;cfargument name = "request" required="true"/&gt; <br>	&lt;!--- UDFs to include ---&gt;<br>	&lt;cfinclude template="/udf/listToQuery.cfm"&gt;<br>	&lt;cfif IsDefined("Form.logout")&gt; <br>        &lt;cflogout&gt; <br>    &lt;/cfif&gt;</p><p>You wrote:</p><p>Nope - I do it all in the include. That keeps my app.cfc simpler.</p><p>So are you saying I should include a statement in the UDF itself?  How would I do this for this example UDF, listToQuery.cfm?</p><p>Thanks!</p><p>- Sung</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674203">29</a> by Sung
		posted on 4/28/2010 at 10:12 PM
		</div>
		<div class="comment_text"><p>Ugh...never mind.  I was putting the chunk into the wrong component section! Now that I put it in OnRequest(), it works beautifully.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674202">30</a> by Raymond Camden
		posted on 4/28/2010 at 10:20 PM
		</div>
		<div class="comment_text"><p>Please be aware that using onRequest has side effects. Search the blog here to see what I mean. (Although somewhat fixed in ColdFusion 9.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674204">31</a> by Sung
		posted on 4/29/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray.  I think I finally figured it all out -- took a while.  It involved using cf_copyUdfs custom tag (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.electricsheep.co.nz%2Fproducts%2Fcustomtags%2Fview.cfm%3F%26name%3Dcf_copyUdfs%29%3AfWnUvmyWN6vz-7LfRTwJ8zW5sZg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.electricsheep.co.nz/products/customtags/view.cfm?&amp;name=cf_copyUdfs)">http://www.electricsheep.co...</a>.  I'm no longer using the onRequest method:</p><p>	&lt;cffunction name="OnRequestStart"&gt; <br>	    &lt;cfargument name = "request" required="true"/&gt; <br>		&lt;!--- UDFs to include ---&gt;<br>		&lt;cfinclude template="/udf/listToQuery.cfm"&gt;<br>		&lt;cfinclude template="/udf/QuerySim.cfm"&gt;<br>		&lt;cf_copyUdfs&gt;</p><p>Now that the UDFs are copied to the variable scope, I have access to them anywhere.  That did it!</p><p>- Sung</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674205">32</a> by Raymond Camden
		posted on 4/29/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>Glad you got it working. Typically what I do for udf libraries is just create a component for them, like utils. I then create an instance in the app scope and do <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.utils.foo%3A1UJBELGLG1_7yaqrzH4rdyUPBb8&amp;cuid=3321886" rel="nofollow noopener" title="application.utils.foo">application.utils.foo</a>(). It is a bit more typing though. Luckily Model-Glue has a nice way to make this simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674206">33</a> by guest
		posted on 4/15/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>Hi,<br>For better or worse, I have some includes that I want to include, but I want to switch to a cfc and I have some ajax-called functions in a cfc that still need to work.  Rather than re-write all my code, I was trying to use the hack recommended by Sean Corfield.</p><p>Raymond's post was the first I came when trying to fix this and I really appreciate all the helpful information here.  However, the hack he proposes wouldn't work for me.  Instead I had to change the if statement to use the arguments.targetPage:</p><p>    &lt;cfif right(arguments.targetPage,4)  is ".cfc"&gt;<br>        &lt;cfset StructDelete(variables,"onRequest")/&gt;<br>        &lt;cfset StructDelete( THIS, "OnRequest" ) /&gt;<br>    &lt;/cfif&gt;</p><p>I got this piece from Sean's site.  I was surprised it made a difference, but it did.  Thanks to both sites!!  Hopefully this will save someone else some research time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674207">34</a> by Bri Garrett
		posted on 6/1/2011 at 11:22 PM
		</div>
		<div class="comment_text"><p>Would you put variables that determine if a user is logged in our out in the ApplicationStart or SessionStart? I would think that you would want it in the ApplicationStart as you would want to see that a user is not logged in? (The variable would equal false or 0...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674209">35</a> by Raymond Camden
		posted on 6/1/2011 at 11:36 PM
		</div>
		<div class="comment_text"><p>You would want it onSessionStart. It is user specific and should be set when the user first hits the site. onApplicationStart would not be run if the application is already started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674208">36</a> by Animesh Dutta
		posted on 5/22/2013 at 12:10 PM
		</div>
		<div class="comment_text"><p>Hi,<br>Normally in which scope we should put our data source(Application,Session,Request)?Or it depends what kind of data source we are using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674210">37</a> by Raymond Camden
		posted on 5/22/2013 at 4:02 PM
		</div>
		<div class="comment_text"><p>Almost always a datasource is an application variable. It is rare for an app to use a datasource based on a particular user.</p></div>
	</div>
</div>
		