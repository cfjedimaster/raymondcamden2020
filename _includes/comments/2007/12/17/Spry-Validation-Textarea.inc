
<div class="comment" id="c_1713675577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675577">1</a> by Raul Riera
		posted on 12/17/2007 at 11:10 PM
		</div>
		<div class="comment_text"><p>I was playing around with spry vaiidation the other day and I found out that the submit valiation will never fire if your form is wrapped like this</p><p>&lt;table&gt;<br>   &lt;form&gt;<br>       &lt;tr&gt;</p><p>thats BAD html I know, but its just funny how it brakes only the submit valiation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675578">2</a> by Raul Riera
		posted on 12/17/2007 at 11:26 PM
		</div>
		<div class="comment_text"><p>I also had problems (unable to) using Spry validation within a cfwindow pop up</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675589">3</a> by Darrell
		posted on 12/18/2007 at 9:20 AM
		</div>
		<div class="comment_text"><p>It worked for me, thanks for the tutorial.  Guess I gotta start learning me some Spry.</p><p>Next step, convince co-workers that ColdFusion/Spry is equal to or perhaps better than anything .net...gonna be tough but wish me luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675592">4</a> by Raul Riera
		posted on 12/18/2007 at 10:19 AM
		</div>
		<div class="comment_text"><p>I didnt meant that this example didnt work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675588">5</a> by Sigepjedi
		posted on 2/6/2008 at 10:45 PM
		</div>
		<div class="comment_text"><p>Great example Ray.</p><p>I was wondering if you could drop another spry example showing the use of combining textareavalidation with XHR Submit?<br>Im trying to create a basic one page for comment posting that will allow a user to enter a comment into the text area (use validation here), then submit using XHR.</p><p>They both work fine without the other in the mix, but once I put them together... boom.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675590">6</a> by Sigepjedi
		posted on 2/6/2008 at 11:09 PM
		</div>
		<div class="comment_text"><p>Here is a good Spry Example I found which uses both, a little different than they are shown separately: <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fform_submission%2FSubmit_and_Validate_Form.php.html%3AB_4GbHydKsi1-W90BYrcxnKO-PM&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/form_submission/Submit_and_Validate_Form.php.html">http://labs.adobe.com/techn...</a></p><p>Ive been able to get these to work together, and am now just trying to figure out how to display the new comment properly without page load.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675591">7</a> by Raymond Camden
		posted on 2/6/2008 at 11:44 PM
		</div>
		<div class="comment_text"><p>I'll try to do a demo later this week. Please watch the main blog though as I'll probably forget to comment here again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675594">8</a> by jonese
		posted on 2/26/2008 at 7:34 PM
		</div>
		<div class="comment_text"><p>I like the validation but i hate the placement of the validation. I hope they come up with a way (or someone clue's me into how) to have a form element in one location but have the error message show up in another. Say at the top of a form, or over on the side  or just in another table cell not in the originating SPAN tag....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675593">9</a> by Raymond Camden
		posted on 2/26/2008 at 7:44 PM
		</div>
		<div class="comment_text"><p>That's not a bad idea. I'd imagine a 'bucket' div that is invisible, and on erorr, Spry would show it, and append errors to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675602">10</a> by Colin
		posted on 12/14/2008 at 3:41 PM
		</div>
		<div class="comment_text"><p>Hi there</p><p>Is there any way in which the spry validation error could be shown in the text box or text area, like the hints are. I use CSS for the page layout and the current error messages do not  show up in their correct location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675598">11</a> by Raymond Camden
		posted on 12/15/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>I don't think so. If you could run a custom JS function on error than it would be easy. I checked the docs and don't see this, but I didn't check for too long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675600">12</a> by Raymond Camden
		posted on 12/15/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>I don't think so. If you could run a custom JS function on error than it would be easy. I checked the docs and don't see this, but I didn't check for too long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675599">13</a> by Raymond Camden
		posted on 12/15/2008 at 2:21 AM
		</div>
		<div class="comment_text"><p>I don't think so. If you could run a custom JS function on error than it would be easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675597">14</a> by Colin
		posted on 12/15/2008 at 2:55 AM
		</div>
		<div class="comment_text"><p>Thanks for looking. I was just wondering if t would be possible. But not sure if I would need it anyway as the hints  re-appear if nothing is entered into the textbox and the user moves to another part of the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675601">15</a> by Raymond Camden
		posted on 12/15/2008 at 2:56 AM
		</div>
		<div class="comment_text"><p>Sorry for the multiple comment post there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675604">16</a> by Ligia
		posted on 11/13/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>I was wondering if we could count words and not characters, does anybody know where I can find an example using Spry validation?<br>Mnay thanks!</p></div>
	</div>
</div>
		