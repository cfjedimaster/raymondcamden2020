
<div class="comment" id="c_1713676269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676269">1</a> by todd sharp
		posted on 1/15/2008 at 11:47 PM
		</div>
		<div class="comment_text"><p>My first thought was custom tag...</p><p>It may be overkill, but that way you could basically include every possible form field and validation and conditionally render them based on attributes.</p><p>When I think UI I think custom tag....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676272">2</a> by Todd Rafferty
		posted on 1/16/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>Probably should warn that isValid('email',<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>) is a simple regex and does not cover all the possible (valid) email domains available online.  Tom Jordahl commented here ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F265-ColdFusion-Email-Validation-IsValid-And-CFMail-Errors.htm%3AKSG9PMiWNUyz9SvrP3sAG5SjzLM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/265-ColdFusion-Email-Validation-IsValid-And-CFMail-Errors.htm">http://www.bennadel.com/blo...</a> ) with clarification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676271">3</a> by Brian Swartzfager
		posted on 1/16/2008 at 6:45 PM
		</div>
		<div class="comment_text"><p>If I were in a similar situation, and I was using ColdFusion 8, I'd put any common validation functions in a CFC, then create the forms such that if the user has JavaScript enabled, the validation functions could be run client-side via cfajaxproxy.  If JavaScript is disabled on the user's browser, then you can simply call those same CFC functions server-side.  So you end up using the same validation code both server-side and client-side.</p><p>I will make the disclaimer that I'm basing that idea on my understanding of what cfajaxproxy does, not on actual experience...but it's on my to-do list.  ;)</p><p>But even if you don't have CF8 (or if cfajaxproxy doesn't quite work that way), you can still program your form to access server-side validation code via AJAX and return any validation errors without reloading the form, thereby still leaving you with one set of validation code to maintain.</p><p>I would love to have a universal form generator that does all the grunt work (generating the form, handling validation, etc.) and have thought about building one on more than one occasion.  But there are just so many possible permutations in play.  You could build one to handle the basics, but a lot of times the forms that I build entail conditional behaviors or conditional validations (example:  if the user checks this box, they must enter a value in this text field and check one of these other boxes).  I've yet to think of a simple, straightforward way to build a generator that could deal with that. It makes my head hurt just thinking about it.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676270">4</a> by Tony Piscotti
		posted on 1/16/2008 at 9:21 PM
		</div>
		<div class="comment_text"><p>Thanks for your input on this everyone!</p><p>I've actually already been approaching the forms much like Ray pointed out...adding all my &lt;cfparams&gt; at the top and then creating an error array and appending to it with validation results and messages.  All in all, I'm comfortable with my current approach and I've really boiled down old bad hacks to lean code that takes advantage of built in functions, et al.</p><p>So why bother asking for another method, you wonder?</p><p>No major reason really.  I think now that I've been learning (trying to learn) Model-Glue and getting my head around frameworks and the MVC paradigm (in my continuous effort to purge bad old CF habits), I couldn't help wonder out of very slight paranoia, "hey, am I setting up these forms incorrectly as well? Do I need to use a MVC approach to these??"</p><p>As a sidenote to respond to Brian's comment: nfortunately, this company isn't on CF8 just yet.  I'm certainly pushing for it at almost every weekly meeting.  It's a budgeting issue, is all.  So for now I'm still using what's available through CF7.</p><p>If it were just a small handful of forms I needed to consider, I might just leave the cfparams and validation hardcoded above the form and be fine with that.  But I'm basically trying to globalize the process for 40+ forms (and it only grows, it seems).  So I may just try the customtag approach and expand on that a bit.  Whatever I can do to globalize the process.</p><p>Also, thanks for the link to Ben's article...I've been wondering about the extent of the isValid("email", <a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>) validation.  It has been working fine for us on these forms since almost all who fill them out are in the US using the most common domain extensions...haven't been getting any complaints on this from our marketing department anyway.  But nonetheless I should still update my email validation so that it's always comprehensive.</p><p>Anyway, thanks again for all the suggestions...I'll consider all points mentioned and see what ends up working best for me.</p><p>Best,<br>Tony</p></div>
	</div>
</div>
		