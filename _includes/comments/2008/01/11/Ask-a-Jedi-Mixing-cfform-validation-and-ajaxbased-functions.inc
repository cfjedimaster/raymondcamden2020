
<div class="comment" id="c_1713676180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676180">1</a> by Devon
		posted on 1/12/2008 at 4:58 AM
		</div>
		<div class="comment_text"><p>I posted on using cfform and Spry validation a while back. In fact it's one of the few things I've actually posted on. I hopefully finish my BSc in a week and then I'll start posting more...well that's the plan.</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fblog.fusefly.info%2Findex.cfm%2F2007%2F10%2F7%2FUsing-CFFORM-and-Spry-validation%3AWeDHnZZypluOVn6UH7O2onyEX-4&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.fusefly.info/index.cfm/2007/10/7/Using-CFFORM-and-Spry-validation">http://blog.fusefly.info/in...</a>" &gt; Using CFFORM and Spry validation &lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676178">2</a> by Scott P
		posted on 1/12/2008 at 7:37 AM
		</div>
		<div class="comment_text"><p>The twelfth cylon is me - I have been waiting to tell you until the time was right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676179">3</a> by dickbob
		posted on 1/12/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>"As soon as your form is ok, it runs." hummm, I see that as a deal-breaker. So it's no good for extending form validation. Like seeing if one date is before another.</p><p>I must say I've been disappointed with the new UI functions in CF8.</p><p>Several things don't seem to work inside a cflayoutarea...</p><p>1. cfform with a enctype="multipart/form-data"</p><p>2. Two submit buttons with differing values</p><p>3. Spry accordions</p><p>Maybe I'm pushing CF too far on the client-side with my UI demands? Maybe I should remember CF is a server-side technology and pick up a book on Flex to get my demanding client-side stuff done?</p><p>It seems to offer so much (cfinput type="datefield") but drops the ball when you try and hang several features together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676183">4</a> by Raymond Camden
		posted on 1/12/2008 at 9:00 PM
		</div>
		<div class="comment_text"><p>@dickbob: Um, maybe I don't get your complaint. You can run code after CF does it's stuff and check for other items, like your date example. YOu can then do an alert and return false.</p><p>This post has nothing to do with CF8 and UI controls so I'm not sure why you bring that up here. But let me address your concerns:</p><p>1) cfform with a enctype="multipart/form-data"</p><p>Yep, you can't do file uploads via an ajax http hit. That's a browser limitation, not CF.</p><p>2) "Two submit buttons with differing values"</p><p>I've never seen issue with multiple submit buttons. But in theory all you have to do is use onClick on a button. Do X if you hit button 1, and Y if you hit button 2.</p><p>3) "Spry accordions"</p><p>Well, that may be Spry's fault too.</p><p>I think Adobe did a good job with the Ajax stuff. Yes, it will not cover every situation. That would be impossible, but they do provide good stuff out of the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676184">5</a> by dickbob
		posted on 1/12/2008 at 9:17 PM
		</div>
		<div class="comment_text"><p>@Ray: Sorry the complaint is that with form validation I want all the invalid fields to be alerted at once. Not half when the cffform validation is run and then another alert when that's okay but when my handcoded validation kicks in. Maybe I'm being unreasonable. Obviously the onSubmit function might not be field validation at all but some other action in which case my requirement might not suit someone else. :-)</p><p>Yes you're right I am a bit OT with my UI rant. Just had a frustrating week trying to get CF to do want I want :-)</p><p>1) Okay, I didn't realise that was a browser/ajax issue - sorry CF</p><p>2) I didn't want to have to code around what seems to be an necessary limitation. In a regular HTML form two submit button with the same name will return the differing values depending on which is clicked.</p><p>3) In my test it was so close. The CSS was laying out the panels and title bars but the JS wasn't closing up the panels and the bars weren't reacting to any clicks.</p><p>Maybe I should rip the whole lot out of CF and do it all directly in Spry? Which is, of course, what is behind most of this functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676182">6</a> by Raymond Camden
		posted on 1/12/2008 at 9:33 PM
		</div>
		<div class="comment_text"><p>2) Can you define your issue more? I've never seen an issue with 2 submit buttons. What is the problem you are having? I ran this code:</p><p>&lt;cfform name="f" method="post"&gt;<br>&lt;cfinput type="submit" name="alpha" value="alpha"&gt;<br>&lt;cfinput type="submit" name="beta" value="beta"&gt;<br>&lt;/cfform&gt;</p><p>&lt;cfdump var="#form#"&gt;</p><p>And it worked perfectly. If I click beta, I see beta, and vice versa.</p><p>Going back to your original issue, it would be nice if you could say, "Hey CF, run YOUR tests, return the results, then let me do my tests, and I'll show one error". Flex allows for that. CF does it's best though. Don't forget you have other options as well. You can write your own validation routines as well. So you could have 2 fields for dates that are required, and write custom validation for them. If your intent is "dates must be filled" and "date a must be before date b", then you have to cover both of that - but the point is - you can customize stuff up a bit. And the rest of your form can use 'normal' cf validation. So you don't have to throw away the whole thing.</p><p>"Maybe I should rip the whole lot out of CF and do it all directly in Spry? Which is, of course, what is behind most of this functionality. "</p><p>Are you saying Spry is behind CF8's Ajax stuff? If so - you are wrong. It is mostly Ext and Yahoo stuff, although there is some Spry stuff. As for ripping out CF and doing all Spry, you would be the best judge of that for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676186">7</a> by dickbob
		posted on 1/13/2008 at 12:15 AM
		</div>
		<div class="comment_text"><p>2) Sure, try this...</p><p>&lt;cflayout name="test" type="tab"&gt;<br>&lt;cflayoutarea name="tab1" title="Tab 1"&gt;<br>&lt;cfform name="f" method="post"&gt;<br>&lt;cfinput type="submit" name="alpha" value="alpha"&gt;<br>&lt;cfinput type="submit" name="beta" value="beta"&gt;<br>&lt;/cfform&gt;<br>&lt;/cflayoutarea&gt;<br>&lt;/cflayout&gt;</p><p>What do you get? I get alpha even if I click beta.</p><p>"You can write your own validation routines as well". Are you talking about using onValidate? Your reply got me to lookup the attributes of cfinput again. This could be a good approach. Obviously it drops the benefit of the validate attribute but I guess I could clone the code into my function and then extend it. Fair point.</p><p>By "what is behind most of this functionality" I was inferring the the tabs/panels stuff of cflayout rather than the form validation of cfform.</p><p>I appreciate your time and thoughts at the weekend :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676188">8</a> by Raymond Camden
		posted on 1/13/2008 at 1:32 AM
		</div>
		<div class="comment_text"><p>Yep, looks to be a bug. Make sure you log it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/go/wish">www.adobe.com/go/wish</a></p><p>Just to be picky - if you use onValidate, you lose built in validation for _that_ field, so using your example of a form and needing to check 2 dates, if you had N fields, you can use the built in stuff for the rest at least. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676185">9</a> by mahcsig
		posted on 1/13/2008 at 3:19 AM
		</div>
		<div class="comment_text"><p>I only have CF7 installed here, but you could include /cfide/scripts/cfform.js and use the CF javascript functions:</p><p>_CF_checkdate<br>_CF_checkinteger<br>_CF_checkphone<br>_CF_checkzip<br>etc...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676181">10</a> by dickbob
		posted on 1/15/2008 at 1:34 PM
		</div>
		<div class="comment_text"><p>@Ray: Bug logged</p><p>@mahcsig: That JS script is also included when CF8 builds a CFFORM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676187">11</a> by Doug - C4S
		posted on 6/19/2008 at 7:05 PM
		</div>
		<div class="comment_text"><p>dickbob:<br>In regards to this bug:</p><p>"I ran this code:</p><p>&lt;cfform name="f" method="post"&gt;<br>&lt;cfinput type="submit" name="alpha" value="alpha"&gt;<br>&lt;cfinput type="submit" name="beta" value="beta"&gt;<br>&lt;/cfform&gt;</p><p>&lt;cfdump var="#form#"&gt;</p><p>And it worked perfectly. If I click beta, I see beta, and vice versa."</p><p>Did you ever find a solution around it or get a bug resolution?  I am tearing my hair out over this one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676189">12</a> by dickbob
		posted on 6/19/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>@Doug: Sorry, no solutions and I've not tried it since.</p><p>I've decided ColdFusion doesn't do client-side.</p><p>After playing with cfform etc in earlier versions and the Ajax stuff in CF8 I've concluded there are too many compromises. Sure, it gets you up and running quickly and if your UI requirements are simple then it's a quick win but anything really creative or demanding then you'll soon hit a brick wall.</p><p>Use CF for what it was originally designed for: Server-side business logic and data interaction. Leave the glitzy client-side stuff to jQuery/EXT/YUI/Spry etc or better still invest some time in Flex as I am.</p><p>Let's hope the CF9 development team don't waste too much time on building client-side functions for the Marketing department :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676191">13</a> by Doug - C4S
		posted on 6/19/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>You KNOW Adobe will invest the majority of efforts in the UI though...  After all, it is sold as a RAD type product.  <br>I have mixed feelings, I like the "ease" of many of the functions, just not the shortcomings. (Hmmm... my dad's voice in my head - "nothing worthwhile is ever easy". BUT is the inverse ALMOST true in this case? "nothing easy is worthwhile")HA!<br>Wish I had more time to invest in Flex.  I'll get there.  I'm still converting a client from old 3.0 written code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676190">14</a> by Greg Thompson
		posted on 12/30/2008 at 10:47 PM
		</div>
		<div class="comment_text"><p>Try this code to have multiple forms in cflayout</p><p>&lt;cflayout name="test" type="tab"&gt;<br>&lt;cflayoutarea name="tab1" title="Tab 1"&gt;<br>&lt;cfform name="f1" method="post"&gt;<br>&lt;cfinput type="text" name="hello" value=""&gt;<br>&lt;cfinput type="button" name="alpha" value="alpha" onClick="this.form.submit()"&gt;<br>&lt;/cfform&gt;<br>&lt;/cflayoutarea&gt;<br>&lt;cflayoutarea name="tab2" title="Tab 2"&gt;<br>&lt;cfform name="f2" method="post"&gt;<br>&lt;cfinput type="text" name="helloworld" value=""&gt;<br>&lt;cfinput type="button" name="beta" value="beta" onClick="this.form.submit()"&gt;<br>&lt;/cfform&gt;<br>&lt;/cflayoutarea&gt;<br>&lt;/cflayout&gt;<br>&lt;cfdump var="#FORM#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676192">15</a> by wembly
		posted on 4/8/2011 at 5:55 AM
		</div>
		<div class="comment_text"><p>been a while since thread was active, for those of us still playing around with this.  I don't know if it is better in cf9, but the 'hack' i found you can use in the cfform tag is to do something like this...</p><p>&lt;cfform name="myForm" method="post" action="post.cfm" onSubmit="myAjaxFunction();return false;"&gt;</p><p>Not the most graceful logic, but the return false at the end of the onSubmit will override the return true CF is nice enough to put in there by default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1829903361">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1829903361">16</a> by Jack
		posted on 2/2/2015 at 2:11 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I know this is old post.  What I am trying to do is very similar</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F28142742%2Fcfform-validation-and-onclick-before-submit%3AkP884_KxPm65iyHrO7rDNIAQhMk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/28142742/cfform-validation-and-onclick-before-submit">http://stackoverflow.com/qu...</a></p><p>but I can't seems to make it work.  I also tried putting the onsubmit in the cfform tag but it won't work because my signin function is actually a CF template and not a script.  If the signin is not successful it will loop within the popup.  If it is successful it will call window.document.forms[0].submit(); to submit the form</p><p>Any help is appreciated.  Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1829998304">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1829998304">17</a> (In reply to <a href="#c_1829903361">#16</a>) by Raymond Camden
		posted on 2/2/2015 at 3:45 AM
		</div>
		<div class="comment_text"><p>I honestly can't recommend anything more than removing cfform. You say your signin function is actually a CF template. I'd start by changing it so that it can accept username/password values sent by Ajax and just return a 0 or 1 to represent a valid set of credentials.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1831397080">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1831397080">18</a> (In reply to <a href="#c_1829998304">#17</a>) by Jack
		posted on 2/2/2015 at 10:39 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I am not familiar with Ajax. I am open to all solutions. If you can give me an example, that will be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1831401511">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1831401511">19</a> (In reply to <a href="#c_1831397080">#18</a>) by Raymond Camden
		posted on 2/2/2015 at 10:42 PM
		</div>
		<div class="comment_text"><p>An example of Ajax? That's pretty broad. :) You could maybe start w/ my video series on jQuery: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.youtube.com%2Fplaylist%3Flist%3DPL_z-rqJYNijrtVAc5qQbkzHnDELANGiOn%3Ax41AKUXht5GxlUS09VfFZXzWB2k&amp;cuid=3321886" rel="nofollow noopener" title="https://www.youtube.com/playlist?list=PL_z-rqJYNijrtVAc5qQbkzHnDELANGiOn">https://www.youtube.com/pla...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1831404186">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1831404186">20</a> (In reply to <a href="#c_1831401511">#19</a>) by Jack
		posted on 2/2/2015 at 10:44 PM
		</div>
		<div class="comment_text"><p>An example of how you would code in my case :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1831547381">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1831547381">21</a> (In reply to <a href="#c_1831404186">#20</a>) by Raymond Camden
		posted on 2/3/2015 at 12:25 AM
		</div>
		<div class="comment_text"><p>Sorry - no.</p></div>
	</div>
</div>
		