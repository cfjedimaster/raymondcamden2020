
<div class="comment" id="c_1713655031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655031">1</a> by Tony Petruzzi
		posted on 7/14/2006 at 6:07 PM
		</div>
		<div class="comment_text"><p>I think I'm missing something here or the debug example is broken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655038">2</a> by Raymond Camden
		posted on 7/14/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>Define broken. Do you get a JS error? Do you get a blank plage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655039">3</a> by joel
		posted on 7/14/2006 at 6:16 PM
		</div>
		<div class="comment_text"><p>The {ds_EvenOddRow} seems to break spry:hover. I had a hover class that would change the background color of the moused-over row, but it has no effect if background-color is specified in the .even and/or .odd classes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655044">4</a> by Raymond Camden
		posted on 7/14/2006 at 6:22 PM
		</div>
		<div class="comment_text"><p>Joel, be sure to report it at the forums.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Flabs_spry_pr1_forum%3AATT71wRIo9q7DTcTCHM6TeVbm_s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/labs_spry_pr1_forum">http://www.adobe.com/go/lab...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655040">5</a> by Jose Alberto Guerra
		posted on 7/14/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>Did you noticed that every time you reorder the list clicking NAME or CATEGORY or DATE, it regenerates the "UDFs_SPRY_DIV" and the "Body_Div" TWICE?? . . .   and why does it regenerates the "Body_Div" if it is reordering the "UDFs_SPRY_DIV"??</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655043">6</a> by Raymond Camden
		posted on 7/14/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>It makes sense to regen the body as sorting could change the current selected row I suppose. As for why it shows up twice, I'm not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655047">7</a> by Dan Sorensen
		posted on 7/14/2006 at 7:59 PM
		</div>
		<div class="comment_text"><p>I wonder if there is a way to turn the cursor from an I-Beam into a pointer when you mouse over the sortable column headers, I think that would be more intuitive.</p><p>Otherwise, it's pretty cool! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655049">8</a> by joel
		posted on 7/14/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>Yes, use spry:hover</p><p>td class="subheader" onclick="dsUsers.sort('LAST_NAME', 'toggle')" spry:hover="subhdrselected"&gt;Last Name&lt;/td</p><p>where the hover class subhdrselected contains "cursor: pointer;"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655046">9</a> by James Edmunds
		posted on 7/15/2006 at 6:53 PM
		</div>
		<div class="comment_text"><p>Adobe labs now has a nice annotated roundoup of Spry 1.2 samples all linked from one page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2F%3AQEtyMzkWrtHt73kjC16k87BsKqw&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/">http://labs.adobe.com/techn...</a></p><p>-James</p></div>
	</div>
</div>
		