
<div class="comment" id="c_1713671685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671685">1</a> by CeeVee
		posted on 9/13/2007 at 12:52 AM
		</div>
		<div class="comment_text"><p>You like APIs, eh? You might want to check out this list of APIs. Maybe we'll see a few on RIAForge sometime soon?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftechmagazine.ws%2Ffull-web-20-api-list%2F%3Axnd5JZZ-Nc20PYsZ3ZAzbUdLS6w&amp;cuid=3321886" rel="nofollow noopener" title="http://techmagazine.ws/full-web-20-api-list/">http://techmagazine.ws/full...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671696">2</a> by Phillip Senn
		posted on 9/13/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is fantastic!  I've kept in the back of my mind an option to <br>allow the user to choose a kuler theme and have it change the:<br>1 background color (sometimes called the wrapper)<br>2 content color (760 pixels wide)<br>3 navigation<br>4 outline (header/footer)<br>5 breadcrumb/message area</p><p>The only problem is that it might not work with a foreground font.</p><p>I'm unclear how to get the hex values for each of the 5 swatches.<br>I see that there is an array with three elements, but shouldn't there be 5?<br>Each element has Channel1, Channel2, Channel3, Channel4,<br>a ColorMode ("rgb"), a hex and an Index (0,1,2).<br>I suppose I should use the hex, but I'm confused by the number of elements in the array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671694">3</a> by tim strickland
		posted on 9/13/2007 at 1:20 AM
		</div>
		<div class="comment_text"><p>Hi Phillip,</p><p>Not all themes have 5 swatches - kuler allows between 3-5 swatches when saving a theme. So you will want to verify that there is 5 swatches for the theme you retrieve. You can also view a sample RSS feed with notations at <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Fwiki%2Findex.php%2FKuler%3ASample_RSS_Feed%3A3gZ0ULDtnwwpp_UiHCO5ipR5U3A&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/wiki/index.php/Kuler:Sample_RSS_Feed">http://labs.adobe.com/wiki/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671695">4</a> by Phillip Senn
		posted on 9/13/2007 at 4:20 AM
		</div>
		<div class="comment_text"><p>It's because the cfdump had a top="3" argument.<br>But you're link helped, too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671698">5</a> by Scott P
		posted on 9/13/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>add that to blogCFC 6 - the ability to set a primary color then have it get a theme from kuler that go with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671697">6</a> by existdissolve
		posted on 9/13/2007 at 4:49 AM
		</div>
		<div class="comment_text"><p>kuler rocks!</p><p>It has helped me immensely in my design work, and I simply love the layout of the application itself--very sexy (sexy=truth).</p><p>As to the definition of a swatch, think of it in terms of Photoshop and Illustrator which allow users to apply colors (swatches) to various elements.  The killer part about kuler is that it allows one to download swatch collections that can be directly imported into these programs and used immediately.  Simply awesome.</p><p>As a side note, as soon as Galleon 2 is released, the winner of the logo contest should be required to submit a Galleon 2 scheme to kuler...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671702">7</a> by Raymond Camden
		posted on 9/13/2007 at 5:16 AM
		</div>
		<div class="comment_text"><p>@CeeVee - Yep, I'm aware of the list. :)</p><p>@Phillip - Due to the complexity of the data, I had to munge a bit for the swatches. So everything else is normal query data, but swatches are arrays of structs.</p><p>Oh and yea - sorry - the darn top= works nice - but stops EVERYTHING at 3, not just the query.</p><p>ScottP - you trying to make BlogCFC6 even long to develop? ;)</p><p>Existdissolve - I keep saying it is a week away - hopefully it will be this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671686">8</a> by Lola LB
		posted on 9/13/2007 at 3:05 PM
		</div>
		<div class="comment_text"><p>Now, if there was somehow a way to get these swatch in a format that I could take to the paint shop and have them match the color swatches, I'd be in heaven!  I'm supposed to be picking out the colors to paint the room in ths house but it's quite overwhelming to stand in front of the paint chip wall and try to come up with a combination that isn't so awful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671684">9</a> by existdissolve
		posted on 9/13/2007 at 3:26 PM
		</div>
		<div class="comment_text"><p>I don't know how accurate this is, but <a href="http://disq.us/url?url=http%3A%2F%2Fwww.easyrgb.com%2F%3AcudCtZ3Ak-wTnpDJheaixIaj1gw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.easyrgb.com/">http://www.easyrgb.com/</a> has a service into which you can import rgb values and it finds the closest match to various paint-provider's collections (e.g., Sherwin Williams).  You could, I guess, create a theme in kuler and then paste the values into this service, though I can't make any claims for the accuracy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671687">10</a> by Scott Fitchet
		posted on 9/13/2007 at 6:07 PM
		</div>
		<div class="comment_text"><p>Nice CFC idea!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671691">11</a> by Phillip Senn
		posted on 9/14/2007 at 8:55 AM
		</div>
		<div class="comment_text"><p>Ok, here's what I mean:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aacr9.com%2Findex%2Fcoldfusion%2Fkuler%3AZAXowoDNs4mqAI6_5Xa38ChVXF4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aacr9.com/index/coldfusion/kuler">http://www.aacr9.com/index/...</a></p><p>Proof-of-concept type thing.<br>What I really need to do is show the swatches and allow the user to determine everything that can be colorized (including fonts).</p><p>Plus it could use some AJAX help.<br>The zip file is:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aacr9.com%2Findex%2Fcoldfusion%2Fkuler%2FmyKuler.zip%3AyvpZc8nU-hDlU7CxlbsyEtHTtXY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aacr9.com/index/coldfusion/kuler/myKuler.zip">http://www.aacr9.com/index/...</a></p></div>
	</div>
</div>
		