
<div class="comment" id="c_1713620216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620216">1</a> by malcolm
		posted on 8/26/2005 at 6:36 AM
		</div>
		<div class="comment_text"><p>&gt;Hour offset.</p><p>Thanks Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620218">2</a> by Peter J. Farrell
		posted on 8/26/2005 at 8:17 AM
		</div>
		<div class="comment_text"><p>Yeah for XHTML compliant code...</p><p>With Tidy installed in FF, I'm like darn - 100+ errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620220">3</a> by Doug Hughes
		posted on 8/26/2005 at 5:28 PM
		</div>
		<div class="comment_text"><p>What I'd like to see is a more MVC-friendly aproach to the blog software.  I just did <a href="http://disq.us/url?url=http%3A%2F%2FCollinHughes.net%3ANG9yuvvp6UbGm9VgQrBIowoleK0&amp;cuid=3321886" rel="nofollow noopener" title="CollinHughes.net">CollinHughes.net</a> and had to really hack the crap out of your stuff to make it look like that (and work nicely with some others stuff I added in.  If the software used views to show the data, rather than custom tags (not to say that the views couldn't use the custom tags!) then I'd be able to keep the software unmodified, other than changing it's appearance -- allowing me to upgrade more easily in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620219">4</a> by Chevy
		posted on 8/26/2005 at 5:50 PM
		</div>
		<div class="comment_text"><p>Ray, will 4.0 allow multiple users to use the same blog and db?</p><p>i.e. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.com%2FuserABC%3A1jJe9UOuHC1fzRD6q7so3Wh1aPc&amp;cuid=3321886" rel="nofollow noopener" title="www.blogcfc.com/userABC">www.blogcfc.com/userABC</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.com%2FuserXYZ%3AS60KcjILZFQ5zGQv6wg271uphN8&amp;cuid=3321886" rel="nofollow noopener" title="www.blogcfc.com/userXYZ">www.blogcfc.com/userXYZ</a> uses the same code and db tables... instead of a seperate directory of code and database for each blog. Am I making sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620222">5</a> by Raymond Camden
		posted on 8/26/2005 at 5:57 PM
		</div>
		<div class="comment_text"><p>You _can_ do multiple users per blog, multiple blogs per one ORG folder. You can't do multiplie blogs per ONE client folder.... in 3.9. ;) I forgot to mention it in my post, but I'm now allowing you to pass in config details when you create the blog instance. I won't have specific support for what you want, but you would just need to write code in Application.cfm to set the right parameters. I'm not sure how well it will work - especially with links, but it should be closer to possible if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620223">6</a> by Raymond Camden
		posted on 8/26/2005 at 5:58 PM
		</div>
		<div class="comment_text"><p>Doug. I hear ya. Right now, I think the main layout IS nicely broken out, as is pod layout. What isn't broken out is the display of entries. I'm definitely going to look into making that easier. I'm thinking, and just thinking now mind you, of making the entry display also be custom tag based.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620226">7</a> by rd
		posted on 8/26/2005 at 6:37 PM
		</div>
		<div class="comment_text"><p>FYI, the UI is off in IE. Your pods are all the way at the bottom.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620225">8</a> by Raymond Camden
		posted on 8/26/2005 at 6:42 PM
		</div>
		<div class="comment_text"><p>Ugh - IE keeps having issues when I have text that is too wide. However - I don't see anything too wife about the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620227">9</a> by Raymond Camden
		posted on 8/26/2005 at 7:01 PM
		</div>
		<div class="comment_text"><p>Should be ok now. There is a dang bug with this layout where IE tends to break easily. Normally it is a too wide line, ie, a line with no spaces that is too long. This time, it was just a too long text with italics around it. Wierd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620224">10</a> by Terry Sasaki
		posted on 8/29/2005 at 6:05 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I just played around with your blogCFC - this is my first time! - and found it's great!</p><p>I would like to use Japanese with it, so I spent most of time with locale property file. Finally, I successfully implemented it saving the file as UTF-8 :) As it did not go well with eclipse's UTF-8, I used EmEditor for this purpose. (DB part was so easy.)</p><p>It's still in dev, but thanks a lot for your efforts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620229">11</a> by Pete Freitag
		posted on 8/29/2005 at 5:46 PM
		</div>
		<div class="comment_text"><p>Ray I can tell you from my experience with implementing trackbacks, that the SPAM is not too bad. I have maybe gotten one or two total, which is not bad since I get hit with comment spam much more frequently.</p><p>I have some articles on trackbacks here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Ftag%2Ftrackbacks%3AuSUjzHCcD4vsTD21ywWw4ILYyGk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/tag/trackbacks">http://www.petefreitag.com/...</a> including code, it was pretty easy to implement. Make sure that you include some salt in your trackback url's so that they can't be guessed, and incremented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620228">12</a> by Raymond Camden
		posted on 8/29/2005 at 6:44 PM
		</div>
		<div class="comment_text"><p>Terry, glad it worked for you!</p><p>Pete - thanks for the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620231">13</a> by CP
		posted on 8/30/2005 at 10:01 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How about a wysiwyg editor for adding and editing blog entries?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620230">14</a> by Raymond Camden
		posted on 8/30/2005 at 10:04 PM
		</div>
		<div class="comment_text"><p>For as long as air flows through my fatty lungs, a rich text editor shall not see the light of day in BlogCFC!!!!</p><p>(Ok, sorry about that. ;)</p><p>Seriously - I don't like the idea of a rich text editor. I think they have a bit too much overhead. Now, that being said, I will try to look into making it easier to add a rich text editor. For example, I may take the code that spits out the textarea and pass it to a custom tag. You would then modify that one custom tag to switch it from a textarea to some funky html editor.</p><p>The other big problem with including a text editor is licensing. I'd have to chekc and see if it was even allowed.</p></div>
	</div>
</div>
		