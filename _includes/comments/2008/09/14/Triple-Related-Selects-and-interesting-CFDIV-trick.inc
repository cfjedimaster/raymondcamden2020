
<div class="comment" id="c_1713685742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685742">1</a> by Alexander
		posted on 9/15/2008 at 4:57 AM
		</div>
		<div class="comment_text"><p>Great post - i'd like to see this be extended in the following way. Lets say the related selects are in a form with other inputs. If the form is submitted but is there a way to remember my selections on those related selects?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685744">2</a> by Raymond Camden
		posted on 9/15/2008 at 4:59 AM
		</div>
		<div class="comment_text"><p>I've blogged before about pre-selecting values (mostly sure I did, use the search ;), but the short answer is that it tends to be a pain in the rear. I've yet to see a framework that makes that simpler. (Which doesn't mean it doesn't exist, just that I haven't seen it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685766">3</a> by Rigo
		posted on 9/16/2008 at 8:17 PM
		</div>
		<div class="comment_text"><p>Ray: the cfdiv tip was taken from the Farrar´s book the same as the idea of related selects with AJAX. But in the book, the author uses arrays to fill the selects and, like you say: "it's nice to be able to use the exact same code for your Ajax code as you would for other code", then I wanted to use just cfqueries.</p><p>Thanks for the article and the advices. Rigo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685767">4</a> by Russ
		posted on 10/31/2008 at 3:04 AM
		</div>
		<div class="comment_text"><p>If you like that, you might like another twist as well. In one form I was working on I needed to call a JS function after some content loaded into a cfdiv, so I used something like this:</p><p>&lt;cfselect name="Select1" id="Select1" bind="cfc:GetSelect1Arr()" bindonload="yes" /&gt;<br>&lt;cfdiv name="Select2" id="Select2" bind="cfc:GetSelect2Arr({Select1})" bindonload="no" /&gt;<br>&lt;cfinput type="hidden" name="JSTrigger" bind="javascript:YourJSFunctionHere({Select2.innerHTML})" bindonload="no"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685764">5</a> by los
		posted on 6/18/2009 at 5:32 AM
		</div>
		<div class="comment_text"><p>At long last, I am delving into the CF8/Ajax world. I need to do exactly what the OP did (i.e. 3 related selects). I downloaded the code and ran it but none of the selects get populated. I was able to cfinvoke the methods with out a problem. What gives?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685765">6</a> by Raymond Camden
		posted on 6/18/2009 at 6:25 AM
		</div>
		<div class="comment_text"><p>What does Firebug show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685768">7</a> by Rigo
		posted on 6/18/2009 at 5:29 PM
		</div>
		<div class="comment_text"><p>los:</p><p>The data displayed are taken from the QryPlaces.cfm file. Check the cfinclude tag at the beginning of the Places.cfc referencing to QryPlaces.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685773">8</a> by los
		posted on 6/18/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>@Ray &amp; @Rigo<br>Thanks for the quick response. In Firebug under Console, at the very bottom, I do get the data from the CFC returned:</p><p>{"COLUMNS":["IDDIVISION","DSDIVISION"],"DATA":[[1,"Pacific"],[3,"South Atlantic"],[2,"West South<br> Central"]]}</p><p>While I am not new to ColdFuison, I am new to the world of Ajax. So it's entirely possible that I have missed some trivial detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685775">9</a> by Bill
		posted on 9/14/2009 at 6:56 PM
		</div>
		<div class="comment_text"><p>I've been challenged by using cfselect,hope someone can help.<br>I have multiple drop-downs that are populated from same database table, each by selecting distinct record. I first set it as the example in this thread when you select Country, populate State, when select State populate City etc. It works perfect. But the user wants that selection can be started at any drop-down, not like you have to select Country first as in this thread example. The drop-downs are related but they are not always hierarchy. And user want flexibility.<br>So my trouble is to display drop-downs so user can start selection at any one and populate the rest drop-downs. <br>I tried to add all arguments to each cfc and make bindonload true, using @change and @none when calling cfcs,<br>but could not get anywhere. Hope someone could point me to the right direction.</p><p>Thanks,<br>Bill</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685777">10</a> by Sebastiaan
		posted on 10/29/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I've been Googling until my fingers turned painful, but to no avail. No jQuery or CF-script out there that'll give me two selectboxes where it is possible to drag (or click via buttons) items from one selectbox to the other (without duplicating). Have you seen something like that anywhere, preferably a script that can be used several times on the same page ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685774">11</a> by Raymond Camden
		posted on 10/29/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>Have you tried the Sortable widget from jQuery UI?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjqueryui.com%2Fdemos%2Fsortable%2F%23connect-lists%3AyZpWUwaN6zcggPbhBNb2LuaBGHk&amp;cuid=3321886" rel="nofollow noopener" title="http://jqueryui.com/demos/sortable/#connect-lists">http://jqueryui.com/demos/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685779">12</a> by Sebastiaan
		posted on 10/30/2009 at 2:39 PM
		</div>
		<div class="comment_text"><p>Hi Ray, that URL doesn't seem to work for me, the whole domain <a href="http://disq.us/url?url=http%3A%2F%2Fjqueryui.com%3ApCRpRGK8EwU09Utc3edd18IsCOQ&amp;cuid=3321886" rel="nofollow noopener" title="jqueryui.com">jqueryui.com</a> doesn't work for me, I keep getting "Unable to connect" in Shiretoko on Ubuntu (Karmic Koala - wow, that's some sweet piece of OS)... <a href="http://disq.us/url?url=http%3A%2F%2Fdev.jquery.com%2F%3AQGK51sofCcikB7IrFv5CeQxaFqY&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.jquery.com/">http://dev.jquery.com/</a> seems to work though, I'll see if I can find the same stuff there...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685780">13</a> by Sebastiaan
		posted on 10/30/2009 at 3:09 PM
		</div>
		<div class="comment_text"><p>Probably my bad, had a fresh install of Karmic Koala and Shiretoko refused to cooperate. Now after some additional packages having been installed, the URL works for me. And yes, your example is somewhat what I need, at least the dragging and dropping between the two lists. Sorting within the list is not an issue right now.</p><p>I just need two selects, one with all available items (minus the ones already chosen) and one with the chosen items. And the ability to move those back and forth, preferably several at a time ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685781">14</a> by Brian Chignoli
		posted on 3/3/2010 at 12:10 AM
		</div>
		<div class="comment_text"><p>The sample code is no longer available for download. Could you post another link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685783">15</a> by Raymond Camden
		posted on 3/3/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>Eh? I just tried the Download link and it worked fine. Did you mean another link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685782">16</a> by Brian Chignoli
		posted on 3/3/2010 at 1:28 AM
		</div>
		<div class="comment_text"><p>You're right, I was clicking the link under "TweetBacks" by accident. Sorry. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685785">17</a> by Albert
		posted on 3/16/2010 at 11:25 PM
		</div>
		<div class="comment_text"><p>Raymond,<br>I am glad to find this code, it is very useful.<br>just in case, how can I do blank first row in the first select if I use a result from the database query ?<br>Thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685784">18</a> by Raymond Camden
		posted on 3/18/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>I believe you would need to add a fake row in your query, or switch to using just JS to get/fetch the results. That would give you more control and allow you to add the blank row client side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685786">19</a> by Steve
		posted on 8/31/2010 at 9:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Have this working well (only using 2 chained selects).</p><p>However, I allow users to edit the form - and unfortunately I cannot get the 'selected = "xyz"' to work, so that if they come back to the form its highlighted/selected their previous answer.</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685787">20</a> by Raymond Camden
		posted on 8/31/2010 at 10:20 PM
		</div>
		<div class="comment_text"><p>That's a whole other issue. You have to write code that, on loads, updates the selects one by one. I've got an entry on the blog about that (with related selects), but don't remember the exact title. It's a pain. You can't just set the second drop down as it's values don't exist when the page is rendered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685789">21</a> by Andy
		posted on 8/4/2011 at 9:42 PM
		</div>
		<div class="comment_text"><p>Re: "You can download it below"... Where is the link to download??  There is an include &lt;cfinclude template="QryPlaces.cfm"&gt; that I'd like to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685790">22</a> by Raymond Camden
		posted on 8/4/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>Right above the banner ad. In the gray-ish/dark-ish box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685792">23</a> by Andy
		posted on 8/4/2011 at 10:36 PM
		</div>
		<div class="comment_text"><p>Oops missed it.  Got it now though... Thanks Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685794">24</a> by Andy
		posted on 8/5/2011 at 12:06 AM
		</div>
		<div class="comment_text"><p>The .zip code works like a charm when I upload and test on my server... however when I try to customize I get three bind failed errors.  I posted my problem to the Adobe CF Forums.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F3841429%233841429%3A1-Wzq2aFIxzBUI9vh1tN-hK3-CA&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/3841429#3841429">http://forums.adobe.com/mes...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685791">25</a> by Marc
		posted on 2/22/2013 at 12:49 PM
		</div>
		<div class="comment_text"><p>Hi Ray, helpfull piece of code, thans for that :-)<br>How can i get the 3 values if i want store them in a database ?</p><p>Regards</p><p>Marc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685795">26</a> by Raymond Camden
		posted on 2/23/2013 at 7:49 PM
		</div>
		<div class="comment_text"><p>Just use a regular form submit I suppose?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685796">27</a> by Marc
		posted on 2/24/2013 at 12:20 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I just copied the files on my server (CF8) but the dropdown lists are empty, any idea ?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685847">28</a> by Raymond Camden
		posted on 2/24/2013 at 3:55 AM
		</div>
		<div class="comment_text"><p>Nope, no idea. Have you done any basic debugging w/ something like Chrome Dev Tools? If you don't know what I mean, watch this preso:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F2%2F22%2FPresentation-Browser-Tools-for-Debugging%3AVxLWFtgLEubPbtD-PbJUaki_i0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/2/22/Presentation-Browser-Tools-for-Debugging">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685846">29</a> by Marc
		posted on 2/24/2013 at 2:50 PM
		</div>
		<div class="comment_text"><p>Got this if i run FF debugger/check utility :</p><p>[10:51:31,684] SyntaxError: parseJSON @ http://********.com/CFIDE/scripts/ajax/package/cfajax.js:798</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685849">30</a> by Raymond Camden
		posted on 2/24/2013 at 9:22 PM
		</div>
		<div class="comment_text"><p>Look at the network tab and examine the XHR requests. They may have additional text in them breaking the JSON. I show a specific example of this in the video. If you tell me where your script is online, I can look quickly too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685851">31</a> by Marc
		posted on 2/24/2013 at 10:00 PM
		</div>
		<div class="comment_text"><p>sended you by email the url's</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685850">32</a> by Raymond Camden
		posted on 2/24/2013 at 11:01 PM
		</div>
		<div class="comment_text"><p>Marc, you *really* need to watch the video I pointed you too. I opened up Chrome Dev Tools. Switched to the Network tab. Looked at the XHR request and saw this in the response:</p><p>368?ms0?ms</p><p>HeadersPreviewResponseCookiesTiming</p><p>&lt;link rel="stylesheet" href="css/ks.css" type="text/css" media="screen"&gt;<br>&lt;link href='<a href="http://disq.us/url?url=http%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DMarvel%3A400%2C700%2C700italic%2C400italic%27%3AeMul3NIMsSm0IH6Hxu_j6_CTEVg&amp;cuid=3321886" rel="nofollow noopener" title="http://fonts.googleapis.com/css?family=Marvel:400,700,700italic,400italic'">http://fonts.googleapis.com...</a> rel='stylesheet' type='text/css'&gt;</p><p>{"COLUMNS":["IDDIVISION","DSDIVISION"],"DATA":[[1,"Pacific"],[3,"South Atlantic"],[2,"West South Central"]]}</p><p>See the LINK tags? You probably have onRequestStart code in your App.cfc or stuff in an App.cfm automatically adding this to ALL requests. Therefore it breaks your JSON result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685848">33</a> by Sean
		posted on 1/30/2014 at 10:05 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am trying to submit the values from this select into a form. <br>As of now the values are id#'s<br>Is there a way, where the value="DsDivision.. actual text value".. can be submitted?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685852">34</a> by Raymond Camden
		posted on 1/30/2014 at 7:46 PM
		</div>
		<div class="comment_text"><p>Sorry - what? Are you saying you want the text of a drop down to submit, not the value?</p></div>
	</div>
</div>
		