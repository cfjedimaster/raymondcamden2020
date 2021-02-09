
<div class="comment" id="c_1713654078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654078">1</a> by Justice
		posted on 6/13/2006 at 9:22 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Maybe I am just a bit slow, but why would you want to re-invent the wheel like this?  Everything this Spy does could be done with JS and CF currently, and with tags I know now.</p><p>I'm not trying to be an ass, but why would I want to take the time to learn how to write in Spry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654062">2</a> by Scott Stroz
		posted on 6/13/2006 at 9:36 PM
		</div>
		<div class="comment_text"><p>Justice - Spry is not just for CF, just like Flex is not just for CF.  My guess, fwiw, is its a way to have to products, one in each corner, in the Web 2.0 wars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654077">3</a> by Raymond Camden
		posted on 6/13/2006 at 9:42 PM
		</div>
		<div class="comment_text"><p>Spry is an AJAX framework. Sure I could write my own - but why? Well, ok, so I -do- reinvent the wheel a few times w/ CF, but my JS skills aren't the best, and this makes AJAX work easy. Also note that I -am- using CF, to power the XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654080">4</a> by Justice
		posted on 6/13/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>ahhh, I gotcha.  So this really would let you do some basic development just using xml and spry / javascript, with no need to have a CF or ASP layer.  Gotcha, that is pretty dang cool.</p><p>Someone must make one language to rule them all, a nice english based one.</p><p>'Create a report to show me my revenue from 2006'  BAM!  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654087">5</a> by Raymond Camden
		posted on 6/13/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>Well something needs to make your XML. It need not be dynamic though. Mine was. View source on the demo to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654084">6</a> by Neil Bailey
		posted on 6/14/2006 at 12:21 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have been using Flash forms (actually, we've been using them EVERYWHERE, and it was a mistake), and we're just starting to move over to AJAX-ified forms instead.  Currently we're using CFAJAX, and its...ok....</p><p>How difficult was it to integrate SPRY w/ your ColdFusion CFCs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654090">7</a> by Raymond Camden
		posted on 6/14/2006 at 12:31 AM
		</div>
		<div class="comment_text"><p>I had 2 issues.</p><p>First, my CFCs were returning "normal" data. Queries, arrays, etc. Spry wants XML. So I just built a helper function or two to convert queries/arrays to XML. Problem solved.</p><p>Second, when you return XML from a CFC, the CFC will still WDDX encode it. You need to ensure you do returnType="xml" in order for the CFC to not WDDX encode stuff. See my zip in the last entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654085">8</a> by adam
		posted on 6/14/2006 at 7:35 AM
		</div>
		<div class="comment_text"><p>did you check this <a href="http://disq.us/url?url=http%3A%2F%2Fatlas.asp.net%2Fatlastoolkit%2F%3A__zhSBgsnjSx7OA9oD7_U1hGLKU&amp;cuid=3321886" rel="nofollow noopener" title="http://atlas.asp.net/atlastoolkit/">http://atlas.asp.net/atlast...</a> it looks pretty good too. Please review for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654091">9</a> by Raymond Camden
		posted on 6/14/2006 at 5:37 PM
		</div>
		<div class="comment_text"><p>Heh, well, I can't review everything. :) If you want, check it out and share your thoughts on the blog. I know I wouldn't mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654086">10</a> by Will
		posted on 6/16/2006 at 2:16 AM
		</div>
		<div class="comment_text"><p>Hey Ray, does the paging work for you? I tried it on your example, it didn't work and when I tried it on my own code, that also didn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654089">11</a> by Raymond Camden
		posted on 6/16/2006 at 2:29 AM
		</div>
		<div class="comment_text"><p>Try now. I think I forgot to upload one file. It's working for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654069">12</a> by Will
		posted on 6/16/2006 at 8:54 PM
		</div>
		<div class="comment_text"><p>Well, I got my paging working now (as did you) but I noticed something else funny... the sorting only applies to what is on screen. so if you sort by entry it sorts the 10 on screen, you then hit next and those were the next 10 regardless of your sorting.... so it isn't sorting the entire data set and then paging those. any ideas? I'm pretty new to this and of course its pretty new itself so there isnt a lot of documentation or examples to go from, but i think yours is the only example whre sorting and paging are being used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654066">13</a> by Mike
		posted on 7/6/2006 at 11:45 AM
		</div>
		<div class="comment_text"><p>Wow. I was looking for an easy pagination solution in Spry (the documentation is.. you know.. hardly available, or I just didn't  spend enough time searching) - and yours seems to be a perfect solution. Thanks for saving me bunch of time. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654067">14</a> by Raymond Camden
		posted on 7/6/2006 at 3:41 PM
		</div>
		<div class="comment_text"><p>Thanks for the compliments. I plan another Spry demo in the next few days that shows a simple Related Selects example.</p><p>The Spry team is -very- aware that the documentation needs work. It will happen. Do not forget it is still pre-release software. I tend to forget to remind folks that when I'm gushing about the  software.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654070">15</a> by Chris
		posted on 12/12/2006 at 12:22 AM
		</div>
		<div class="comment_text"><p>Hello;<br>Im new to SPRY and the blog examples have helped me greatly and I thank everyone who's contributed.</p><p>I have a situation where Id like to only trigger SPRY/AJAX<br>queries based on a javascript function but have been unable<br>to figure out how to implement it.<br>In specific; Im sending some parameters from an existing<br>FLASH SWF via the FSCommand with the intent of showing some<br>record details outside the flash object on the same html page.<br>Has anyone triggered the SPRY functions from within another<br>JS Function???</p><p>I've tried embedding the Spry.Data.XMLDataset constructor</p><p>like...<br>var dsCerts = new Spry.Data.XMLDataSet("spry_cert_records2.cfm?ID=" + args,"certs/cert");</p><p>within the FSCommand reciever function but this doesn't work..</p><p>any hints would be greatly appreciated</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654065">16</a> by Raymond Camden
		posted on 12/12/2006 at 7:32 AM
		</div>
		<div class="comment_text"><p>So how exactly did it not work? What error did you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654072">17</a> by Chris
		posted on 12/18/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Hi;<br>Im trying to trigger a detail region query from within<br>the javascript function..</p><p>function looks like this:<br>function myFlash_DoFSCommand(command, args)                {<br>  var myFlashObj = InternetExplorer ? myFlash : document.myFlash;<br> alert (args);</p><p>var lccObjs = new Spry.Data.XMLDataSet("spry_lccobj_records.cfm?id=" + args,"objs/obj");<br>&lt;!--- var dsCerts = new Spry.Data.XMLDataSet("spry_cert_records2.cfm?ID=23","certs/cert"); ---&gt;<br>}</p><p>and detail region looks like this</p><p> &lt;div id="Layer1"&gt;<br>&lt;div id="Obj_Detail" spry:detailregion="lccObjs" class="bigbox"&gt;<br>  &lt;p&gt;&lt;span class="style1"&gt;Object ID ---- Object Name -- Object Position&lt;/span&gt; &lt;br /&gt;<br>    {OBJ_ID} - {OBJ_NAME} - {POSITION} &lt;br /&gt;<br>  &lt;/p&gt;<br>  &lt;p&gt;&lt;span class="style1"&gt;Comments&lt;/span&gt;&lt;br /&gt;<br>  {COMMENTS}&lt;/p&gt;<br>  &lt;p&gt;&lt;span class="style1"&gt;X Location:{XLOC}  Y Location:{YLOC}&lt;/span&gt;&lt;/p&gt;<br>  URL=&lt;a href="{CERT_LINK}" terget="_blank"&gt;{CERT_LINK}&lt;/a&gt;&lt;br /&gt;<br>&lt;/div&gt;<br>&lt;/div&gt;</p><p>error report is:<br>Control Room Equipment Viewer</p><p>Object ID ---- Object Name -- Object Position <br>{OBJ_ID} - {OBJ_NAME} - {POSITION}</p><p>Comments<br>{COMMENTS}</p><p>X Location:{XLOC} Y Location:{YLOC}</p><p>URL={CERT_LINK}<br>spry:region or spry:detailregion attribute has no data set!<br>spry:region or spry:detailregion attribute has no data set!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654071">18</a> by Raymond Camden
		posted on 12/18/2006 at 7:27 PM
		</div>
		<div class="comment_text"><p>If you have the DIV on screen pointing to a DS, you must have a DS. If you don't want to _load_ the DS at launch, just make an empty DS:</p><p>var dsCerts = new Spry.Data.XmlDataSet("", "");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654068">19</a> by Chris
		posted on 12/19/2006 at 12:22 AM
		</div>
		<div class="comment_text"><p>Thank you... you've pointed me in the right direction..<br>(im still getting errors from the detail region's field names.. .. like</p><p>processTokens(): Value reference has no data set specified: {OBJ_NAME}</p><p>but i should be able to figure that out</p><p>thank you again ... oh CF/JS Wizzard</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654074">20</a> by Duane Hardy
		posted on 3/1/2007 at 4:09 AM
		</div>
		<div class="comment_text"><p>I really appreciate this spry front end example.  In this example you filter "Entries" with the selected category and return the xml through your proxy.  How would you write the spry data call if the filter was a text box that was returned from a form.</p><p>I am trying to do this presently and I am struggling with getting the data back into the dynamic regions.  I am presently have a form that sends the form variables (keyword) to xmlproxy.cfc and returns the xml document filtered by the "keyword".  The problem is I can't get it to show up in the dynamic regions.</p><p>How do I get the xml back into the dymamic regions.  I think you in advance for any help you might give.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654073">21</a> by Raymond Camden
		posted on 3/1/2007 at 7:44 AM
		</div>
		<div class="comment_text"><p>There are multiple ways. First - my application here gets filtered data from the back end. It does this by binding to the categories drop down. You can bind instead to the form field as you said.</p><p>However - you can also filter on the client side. For that - I'd point you to the docs. :) It is doable and the Spry folks have good docs on it. Oh - a good online example - RIAForge. That search has a text field that filters as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654075">22</a> by Kalen Gibbons
		posted on 10/26/2007 at 3:28 AM
		</div>
		<div class="comment_text"><p>The link at the top of the page is broken and needs to be updated.  It still points to the <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> domain, while the correct path is now: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fspry%2Fblog3.cfm%3AjrO4OWM3Hr5eCxHuYm57ZjmUaIg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/spry/blog3.cfm">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654076">23</a> by Raymond Camden
		posted on 10/26/2007 at 4:53 AM
		</div>
		<div class="comment_text"><p>I've got quite a few blog entries - so it is no surprise there are still links like this. But you figured it out just fine, so all is well. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654081">24</a> by Dav R
		posted on 11/11/2009 at 10:39 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>The demo page <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fspry%2Fblog3.cfm%3Al1S_nrJbHmiaUgzNY0U7G2gpagk&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/spry/blog3.cfm">http://ray.camdenfamily.com...</a> <br>is not working. Plz fix :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654092">25</a> by Raymond Camden
		posted on 11/12/2009 at 12:39 AM
		</div>
		<div class="comment_text"><p>Sorry - that code is no longer online. (Note that this entry is more than 3 years old now. :)</p></div>
	</div>
</div>
		