
<div class="comment" id="c_1713713673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713673">1</a> by John Bliss
		posted on 3/13/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>Why not use BlackWidow...?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsoftbytelabs.com%2Fus%2Fbw%2F%3AO3JnkRTUJcExaeYrbiFgMXO_2Lk&amp;cuid=3321886" rel="nofollow noopener" title="http://softbytelabs.com/us/bw/">http://softbytelabs.com/us/bw/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713693">2</a> by James Buckingham
		posted on 3/13/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>It probably defeats the purpose of the challenge I know but why not just use some freeware software to do it? (no names mentioned)</p><p>I did just that when a competitor of ours "stole" content off our site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713692">3</a> by Steve Ross
		posted on 3/13/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>does it have to be in CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713688">4</a> by John Lyons
		posted on 3/13/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>Use the windows port of wget and down the whole thing.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.gnu.org%2Fsoftware%2Fwget%2F%3AmqXh8eAe4W0eJTzpDVlkeuz71Qs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gnu.org/software/wget/">http://www.gnu.org/software...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713696">5</a> by Raymond Camden
		posted on 3/13/2009 at 6:10 PM
		</div>
		<div class="comment_text"><p>I look at this in 2 views. The practical need is for the MG team. If you use black magic voodoo to get the content, I'm happy and they are happy (by they I mean me too, I'm on the team :)</p><p>The other view is - I'd like to a CF solution too, just for fun. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713697">6</a> by Rand Thacker
		posted on 3/13/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>I just tried the wget thing (no need to grab the windows version, the linux did just fine).</p><p>I never knew about the recursive option.  Amazing.</p><p>I learned something new today: Thanks John Lyons (and Ray for issuing the challenge to begin with).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713689">7</a> by Steve Ross
		posted on 3/14/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>wget is nice but, what if you actually want to do something with the data, or only grab parts of the page (probably a more likely scenario).</p><p>Check out <a href="http://disq.us/url?url=http%3A%2F%2Fscrubyt.org%3AGjRHLXgExwk-nsf1itUXhNr3zvo&amp;cuid=3321886" rel="nofollow noopener" title="http://scrubyt.org">http://scrubyt.org</a> lets you grab parts of pages (even interact with them)</p><p>for example:</p><p>ebay_data = Scrubyt::Extractor.define do</p><p>  fetch '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.ebay.com%2F%27%3A6UTXFBQuH87u9vRBqoRSbMtW894&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ebay.com/'">http://www.ebay.com/'</a><br>  fill_textfield 'satitle', 'ipod'<br>  submit<br>  click_link 'Apple iPod'</p><p>  record do<br>    item_name 'APPLE NEW IPOD MINI 6GB MP3 PLAYER SILVER'<br>    price '$71.99'<br>  end<br>  next_page 'Next &gt;', :limit =&gt; 5</p><p>end</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713690">8</a> by Rick Stone - RoboHelp ACE
		posted on 3/14/2009 at 10:07 PM
		</div>
		<div class="comment_text"><p>The question in my mind here is to ask if RoboHelp will be used in the future for the docs.</p><p>If so, I have a page up at the link below that will assist in reverse engineering things.<br><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F2g8kd6%3ApRf3yGxaaE-BkGU8om5amycsIBk&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/2g8kd6">http://tinyurl.com/2g8kd6</a></p><p>If anyone creates a utility to grab this content and convert it to basic HTML pages, I'd love to know about it so I may steer folks to obtain it if needed. It would be a nice one to see.</p><p>Cheers all... Rick :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713695">9</a> by Ed Bartram
		posted on 3/25/2009 at 1:01 AM
		</div>
		<div class="comment_text"><p>My solution is posted at <a href="http://disq.us/url?url=http%3A%2F%2Fedbartram.com%2Fblog%2F2009%2F03%2Fconverting-model-glue-docs-to-html.cfm%3AyBADgyZ0VJXYJOCjLx-w7wbsnGU&amp;cuid=3321886" rel="nofollow noopener" title="http://edbartram.com/blog/2009/03/converting-model-glue-docs-to-html.cfm">http://edbartram.com/blog/2...</a> with a zip file containing the Model-Glue docs in HTML format.</p><p>I kept the code simple using CFHTTP calls and looping through the pages using FindNoCase() to strip out the desired content.</p><p>Is this what you were looking for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713691">10</a> by Raymond Camden
		posted on 3/25/2009 at 9:31 PM
		</div>
		<div class="comment_text"><p>@Ed (and all), Dan Wilson is monitoring this post as he is the one trying to get the docs.</p></div>
	</div>
</div>
		