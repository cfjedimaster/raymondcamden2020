
<div class="comment" id="c_1713724595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724595">1</a> by Michael Evangelista
		posted on 5/27/2010 at 11:16 AM
		</div>
		<div class="comment_text"><p>Here's a multipart form i did as part of one of my first jquery-based projects, which made it into the jQuery docs: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FValidation%23A_multipart_.22buy.26sell_a_house.22_form%3AujRu_dEp2ANP_NWfJPiZzD2XOL4&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Validation#A_multipart_.22buy.26sell_a_house.22_form">http://docs.jquery.com/Plug...</a></p><p>the trick here - and the reason joern wanted to use it in the demos - was validating each section before allowing the user to progress to the next (as opposed to validating the whole form on submit), meanwhile, allowing for all of the next/back stuff to work between steps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724593">2</a> by Josh Curtiss
		posted on 5/27/2010 at 12:39 PM
		</div>
		<div class="comment_text"><p>I've done something similar to this. I had multiple forms, one form for each step in the form. Then I would just hide/display the appropriate form as I went. I guess there's no fundamental difference between multiple forms or multiple divs, since the final action in the end was an AJAX call anyway.</p><p>I find myself coding this way more after having learned Flex... I love having all the "screens" loaded to have that instantaneous response when the user clicks "Next" or whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724594">3</a> by Byron Raines
		posted on 5/27/2010 at 5:20 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  Exactly what I was looking for.  Works perfectly. Much cleaner.  Glad that I was on the right track.  Would it be better to do an if statement to append input tag with value="Submit" or if statement just to change value to "submit" after the input statement has been appended?</p><p>@Michael Validation was the next step.  I'll look at that post.</p><p>Thanks</p><p>byron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724598">4</a> by Bobby Jack
		posted on 5/27/2010 at 5:49 PM
		</div>
		<div class="comment_text"><p>For usability, you should probably have a submit button in your markup, add an action to your form, and only hide your questions via javascript, not CSS. This would allow the form to work if javascript is not available.<br>Ironically, this comment form only works with javascript enabled, too! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724597">5</a> by Sean
		posted on 5/27/2010 at 5:57 PM
		</div>
		<div class="comment_text"><p>Cool stuff! My only complaint is that semantically it would be better to use fieldsets instead of divs to wrap each individual question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724599">6</a> by Dave H
		posted on 5/27/2010 at 6:08 PM
		</div>
		<div class="comment_text"><p>Great tutorial, but please use fieldset and label elements instead of div's and p's!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724600">7</a> by Jamie Thompson
		posted on 5/27/2010 at 6:25 PM
		</div>
		<div class="comment_text"><p>Maybe it's just my OCD talking, but with brevity in mind you could also do the following:</p><p>$('.question').append("&lt;br/&gt;&lt;input type='button' value='Next' class='questionBtn'&gt;").eq(0).show();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724601">8</a> by Phillip Senn
		posted on 5/27/2010 at 6:41 PM
		</div>
		<div class="comment_text"><p>At Google I/O, they demonstrated a expense app that did a slide left and slide right to transition between pages.  I know there is a slide up and down built into jQuery, but how do you slide left and right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724607">9</a> by Grant
		posted on 5/27/2010 at 6:58 PM
		</div>
		<div class="comment_text"><p>Here's *my* OCD piping up:</p><p>$(document).ready(function() {});</p><p>is the same as:</p><p>$(function() {});</p><p>save your fingers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724604">10</a> by Raymond Camden
		posted on 5/27/2010 at 10:09 PM
		</div>
		<div class="comment_text"><p>@Sean/Dave: To be honest, I keep forgetting about fieldset. Good point though.</p><p>@To Both OCD Guys - Yes - nice - I'm OCD most of the time. ;)</p><p>@Phillip Senn - you can easily do transitions in jQuery. I tend to hate em though. A transition is nice once - not after that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724606">11</a> by Raymond Camden
		posted on 5/27/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>@Phillip Senn - Ok, I lie - this is a cool mod:</p><p>		$(this).parent().next().fadeIn('slow');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724602">12</a> by Dave
		posted on 5/28/2010 at 3:38 AM
		</div>
		<div class="comment_text"><p>Couldn't the click handler just be reduced to this one liner?</p><p>$(this).parent().hide().next().show().length || $("#mainform").submit();</p><p>Or use an if on !length if you prefer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724603">13</a> by Tom Sucaet
		posted on 5/28/2010 at 3:31 PM
		</div>
		<div class="comment_text"><p>I have some great experience with the jQuery FormWizard plugin:<br><a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Fproject%2Fformwizard%3AYOWzOPDuV1RGwdEO__ab4aE_Eto&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/project/formwizard">http://plugins.jquery.com/p...</a><br>It also works great with the jQuery validation plugin and you can even add transition animation between the form steps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724605">14</a> by Paul Baylis
		posted on 7/15/2010 at 9:10 AM
		</div>
		<div class="comment_text"><p>@Tom, or anyone else who may know:<br>I've had a fiddle with &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fthecodemine.org%2F%3AojyIXuRAeWsk7UMuRJGQToIJ5b8&amp;cuid=3321886" rel="nofollow noopener" title="http://thecodemine.org/">http://thecodemine.org/</a>"&gt;jQuery Form Wizard&lt;/a&gt; and built a multi-page validating form. However, I don't know how to access and use the form data that it posts. See my &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.catholicpages.co.nz%2Ftesting%2Fcatholicpages%2FregisterBusiness.cfm%3AVr2ucxkp1fU_lqHmNGtQ59Pyh1w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.catholicpages.co.nz/testing/catholicpages/registerBusiness.cfm">http://www.catholicpages.co...</a>"&gt;working example here&lt;/a&gt; .</p><p>My form currently posts to a cfm file, which has a basic insert query, but I don't know what the data looks like or how to reference it in order to insert it. The FormWizard site doesn't provide much help and I see two other people have asked this same question on the jQuery forum but no-one's answered.</p><p>Any help appreciated immensely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724608">15</a> by Paul Baylis
		posted on 7/15/2010 at 9:12 AM
		</div>
		<div class="comment_text"><p>Sorry, I didn't realise the blog automatically formats URLs.</p><p>Working example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.catholicpages.co.nz%2Ftesting%2Fcatholicpages%2FregisterBusiness.cfm%3AVr2ucxkp1fU_lqHmNGtQ59Pyh1w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.catholicpages.co.nz/testing/catholicpages/registerBusiness.cfm">http://www.catholicpages.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724609">16</a> by Paul Baylis
		posted on 7/16/2010 at 12:37 AM
		</div>
		<div class="comment_text"><p>OK, the answer is that the form input variables are automatically available in the "form" scope of the page specified in the form "action" attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724612">17</a> by Raymond Camden
		posted on 7/17/2010 at 7:27 AM
		</div>
		<div class="comment_text"><p>Don't forget you can cfdump to a file. Just do that for the FORM scope and look at the values when the file is written out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724613">18</a> by Karolus
		posted on 2/21/2011 at 6:50 AM
		</div>
		<div class="comment_text"><p>I want to have the questions as shown here, but if I have a question, whose answers create a branch, to other questions, how would this be done with this code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724611">19</a> by Raymond Camden
		posted on 2/21/2011 at 7:12 AM
		</div>
		<div class="comment_text"><p>With the code as is - no - it can't be done. You would need to customize the code above.</p></div>
	</div>
</div>
		