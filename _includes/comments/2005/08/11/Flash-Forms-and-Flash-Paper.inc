
<div class="comment" id="c_1713619935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619935">1</a> by Ryan Guill
		posted on 8/11/2005 at 9:36 PM
		</div>
		<div class="comment_text"><p>awesome, I think this will work just fine.  Thanks!</p><p>How about another question though.  You know how when you browse a flash form and then go to another page, if you hit the back button the flash form is expired?  Can you think of any way to be able to programatically know that the form has expired and reload the page automatically?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619934">2</a> by Raymond Camden
		posted on 8/11/2005 at 9:39 PM
		</div>
		<div class="comment_text"><p>Sorry, no. You do know you can control the timeout behavior though, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619931">3</a> by Ryan Guill
		posted on 8/11/2005 at 9:42 PM
		</div>
		<div class="comment_text"><p>I had it in my head that the timeout was just for caching, i didn't realize it would affect it when you went back to it.  Thats great, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619939">4</a> by Simeon
		posted on 8/11/2005 at 10:36 PM
		</div>
		<div class="comment_text"><p>I am pretty sure I saw a comment in the live docs that had some js for fixing the back problem on flashforms.</p><p>However just in case you are doing somethign like I am, which is displaying different flashpaper docs, I will share some of the fun I have had.  In addition do doing exactly what ray has done above, I added buttons to the top of the form to allow people to load different docs into the space.  I also played with using tabs and displaying the content on the different tabs.</p><p>Back on rays post above.  After several hours I have decided that although we can load .swf files using the img tag, we can not control their hieght and width.  if you use some AS to load an image using the same html the jpg will respect the attributes but the flashpaper wont.  I had decided that the fact that your other example worked so well was because the graphs were something we could control the output size of to begin with.</p><p>My next task is to try to hack a swf to actually load into one of the container types.  Because if we can do this, then we can access the flashpaper api which will allow us to both set the size of the document, but also disable features like printing and coping.  Making this ideal for documents with sensitive information.  Which is what I have :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619937">5</a> by Todd
		posted on 8/11/2005 at 10:45 PM
		</div>
		<div class="comment_text"><p>Just for the heck of it, I tried throwing this concept into an alert box to create the flashpaper in a 'popup window' - does the same unfortunate thing that the charts do - the first time you test it works great, but if you close the popup and try again (without reloading) it cuts off 99% of the doc....If anyone has ideas, please share! :)</p><p>Here is the code:</p><p>&lt;cfdocument format="flashpaper" name="fp"&gt;<br>&lt;h1&gt;Flash Paper Help&lt;/h1&gt;</p><p>&lt;p&gt;<br>The following text would normally describe how a person would fill out the form.<br>It could discuss what the fields mean. Of course, most people don't need help<br>filling out forms, and if they do, they probably shouldn't be in front of a computer<br>anyway.<br>&lt;/p&gt;<br>&lt;/cfdocument&gt;</p><p>&lt;cfset fileName = expandPath("./flashpaper.swf")&gt;<br>&lt;cffile action="write" file="#filename#" output="#fp#"&gt;<br>&lt;cfsavecontent variable="testFlashPaper"&gt;<br>var msg = '&lt;img src="flashpaper.swf" height="300" width="400"&gt;'+'&amp;nbsp;'<br>var alertSettings:Object = {title:'Warning', message: msg, width:600, height:400, headerHeight:27}<br>errorpopup = mx.managers.PopUpManager.createPopUp(this, FormErrorException, true, alertSettings);<br>errorpopup.centerPopUp(this); <br>&lt;/cfsavecontent&gt;</p><p>&lt;cfform name="test" format="flash" width="700" height="600"&gt;<br>	&lt;cfinput type="button" name="Popup_chart" value="Popup FlashPaper" onclick="#testFlashPaper#"&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619936">6</a> by Rob
		posted on 8/12/2005 at 3:14 AM
		</div>
		<div class="comment_text"><p>Is there some kind of weirdness going on with the img tag. I am trying to create sort of like a random picture barner on top of my flash forms and everytime the image won't load or the image gest distorted. Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619941">7</a> by Alain
		posted on 11/19/2009 at 4:40 PM
		</div>
		<div class="comment_text"><p>Just in case this thread is not dead... On the same topic, but slightly different... How could I get CF to generate a pdf on the fly (&lt;cfdocument format="pdf" ...) without opening/displaying it, but just having it sent as an attachment using CFMAIL. I have been pulling my hair on this one...</p><p>Help appreciated... Thanks,</p><p>Alain</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619942">8</a> by Raymond Camden
		posted on 11/19/2009 at 5:21 PM
		</div>
		<div class="comment_text"><p>Just use the name attribute. It saves the PDF info to a variable.</p></div>
	</div>
</div>
		