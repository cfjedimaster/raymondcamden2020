
<div class="comment" id="c_1713712475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712475">1</a> by Neil Bailey
		posted on 2/10/2009 at 2:57 AM
		</div>
		<div class="comment_text"><p>We ALWAYS do as much client-side validation as possible, negating the need for multiple AJAX calls to the server.  JS has come a long, long way since the days of mouse-rollovers and status bar messages :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712476">2</a> by Rick Mason
		posted on 2/10/2009 at 4:04 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The date validation isn't bullet proof.  Try entering 5/22//52 and it doesn't catch it.  Believe me that's a very common error in a date field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712477">3</a> by Raymond Camden
		posted on 2/10/2009 at 4:11 AM
		</div>
		<div class="comment_text"><p>I just did a quick test w/ the native JavaScript Date() constructor. When you pass M/D/Y and duplicate the /, it simply ignores it. So it treats //// as /, which is probably a fair thing to do. So I think this is more a 'looseness' in JS than jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712474">4</a> by Gabe
		posted on 2/10/2009 at 4:49 AM
		</div>
		<div class="comment_text"><p>I had to build a huge, 300+ element form with multiple levels of validation, and the jQuery form validation was a life savior. The only problem I had was IE6 support. Without multiple ondocument loads, certain things were ignored in IE6. Of course, worked greatin every other browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712480">5</a> by Gabe
		posted on 2/10/2009 at 5:05 AM
		</div>
		<div class="comment_text"><p>Sorry, shouldn't have tried writing that last post on the iPhone on the couch.  In IE6, the document.ready function didn't work in every case, because IE6 had not finished rendering the page (completely).  I had to add something like:</p><p>    setTimeout(function() {<br>        doSomething(); <br>    }, 500);</p><p>using the setTimeOut option for each validation in the document.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712478">6</a> by todd sharp
		posted on 2/10/2009 at 5:06 AM
		</div>
		<div class="comment_text"><p>Am I the only one who realized that you slipped your birthday in to this post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712479">7</a> by denny
		posted on 2/10/2009 at 5:09 AM
		</div>
		<div class="comment_text"><p>Heh.  I'm a broken record, but Dojo has /excellent/ validation stuff.</p><p>And Dojo is geared for internationalization, and accessibility.</p><p>jQuery is getting there, but I love how dojo made it a huge part of the whole deal.</p><p>Probably un-needed in the grand scheme of things, I mean, who really needs multiple languages or accessibility? -- But still, I really think it's swell that Dojo made it an important part of their overall approach.</p><p>I just saw a blog post on using jQuery to do server-side validation, which looked interesting.  If I come across it again I'll send you the link.</p><p>Sorry to keep saying "check out dojo", but I keep seeing people sorta re-inventing the wheel-- while leaving some pretty cool spokes off, as it were.</p><p>Guess I'm a fanboy of sorts.  Heh.  I'm down with that.</p><p>:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712481">8</a> by shag
		posted on 2/10/2009 at 5:18 AM
		</div>
		<div class="comment_text"><p>Even our UK friends will like this as the date accepts European date formats (22/5/09).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712483">9</a> by Scott Stroz
		posted on 2/10/2009 at 5:20 AM
		</div>
		<div class="comment_text"><p>Does the addition of the extra 'arguments' break HTML/XHTML validation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712482">10</a> by Brian Swartzfager
		posted on 2/10/2009 at 5:22 AM
		</div>
		<div class="comment_text"><p>When it comes to dates, you're probably better off giving the user some sort of date picker so you can limit the number of possible errors the user can make.  Fortunately, there are a number of date picker plugins for jQuery.  :)</p><p>I have to agree with Rick, though:  the date validation code in this Validation plugin has room for improvement.  It failed my favorite date validation test, which is to see if it tags a non-existent date like Feb. 31 as being wrong.  That's something a date picker can prevent merely by not giving you the option of picking that date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712484">11</a> by denny
		posted on 2/10/2009 at 5:29 AM
		</div>
		<div class="comment_text"><p>@Scott</p><p>Check this out: <a href="http://disq.us/url?url=http%3A%2F%2Fdojotoolkit.org%2Fforum%2Fdojo-and-html-doctype-validation%3A1Vtfsr5HKida-5i51aCxUX6Urx0&amp;cuid=3321886" rel="nofollow noopener" title="http://dojotoolkit.org/forum/dojo-and-html-doctype-validation">http://dojotoolkit.org/foru...</a></p><p>Basically, you can use pure JS or CSS if you're concerned with html validation, whatever the JS library.</p><p>Depends on how you want things to degrade and whatnot, too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712485">12</a> by Raymond Camden
		posted on 2/10/2009 at 5:34 AM
		</div>
		<div class="comment_text"><p>@Scott Stroz: If it does break HTML/XHTML validation, remember that this style ('inline', which is a term I picked and may not be the best term) is _optional_. Most examples I saw did not use this. I liked it though and that's why I focused on it for this entry. If you are concerned about HTML/XHTML validation you would simply not use that style (if it does indeed break). The good news is that the 'harder' way isn't that much harder really. (Next blog entry later tonight/tomorrow.)</p><p>@ToddSharp: Did I really? Hmmm, isn't that interesting. I'll have to include a link to the wishlist in the next example. ;)</p><p>@Denny: DOJO - I can only learn one thing at a time! ;)</p><p>@BrianS: Yep, when I was playing with the UI stuff last week or so, I did see the date picker and thought it was rather nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712486">13</a> by Scott Stroz
		posted on 2/10/2009 at 5:35 AM
		</div>
		<div class="comment_text"><p>Wasn't worried as much as I was curious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712487">14</a> by existdissolve
		posted on 2/10/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>@ray--</p><p>I've used Spry's validation tools a little--I like how simple they are, but the amount of markup (and JS includes) required is a bit overwhelming.</p><p>I like that this spits out error messages for you--the less typing, the better :)</p><p>Hopefully, Spry will steal some of the nice things here and implement them into future releases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712488">15</a> by Raymond Camden
		posted on 2/10/2009 at 7:48 AM
		</div>
		<div class="comment_text"><p>Yeah, I don't think I stressed this enough, but the built in error messages are DARN nice and very intelligent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712491">16</a> by Jeff Self
		posted on 2/10/2009 at 8:24 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Any way to set custom patterns?  For instance, I'm working on a single field form that accepts either a 13 digit number or a 8 digit number.  Anything else should be invalid.  I've just started playing with jquery in the last week and I find it pretty cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712496">17</a> by Paul Sturm
		posted on 2/10/2009 at 8:30 AM
		</div>
		<div class="comment_text"><p>Ray, I started using this about 2 months ago and I found the same issue - the inline docs leave something to be desired.  I didn't contact anyone, I'm the kind to waste too much time on something instead of asking for help. I'd bet your way is quicker!</p><p>I've slipped the class fields into my code generator that builds my forms for a given database table. Then all I've got to do is create my $(document).ready()</p><p>Very unobtrusive. I should have guessed this was built by a jQuery team member since it is so 'elegant'.</p><p>By the way, your post form won't allow for email addresses with a '+' in it - as if that was invalid.  I'll have to check and see if THIS plugin will allow it...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712489">18</a> by Raymond Camden
		posted on 2/10/2009 at 8:48 AM
		</div>
		<div class="comment_text"><p>@Jeff Self: Yes, you can do custom validation. I'll show an example of that around my 3rd blog entry.</p><p>@Paul Sturm: Sorry about that. That is a bug fixed in BlogCFC, but my blog install here is a bit out of date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712490">19</a> by denny
		posted on 2/10/2009 at 8:54 AM
		</div>
		<div class="comment_text"><p>@Jeff:</p><p>Extending jQuery validation:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F5onkka%3AxEUPsVPQDjfH-5fsXovgcN1fpRM&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/5onkka">http://tinyurl.com/5onkka</a></p><p>You'll be wanting to look at the regular expression stuff.</p><p>Something like this:</p><p>$.validator.addMethod('eightOr13', function (value) { <br>    return /^((\d{13})|(\d{8}))$/.test(value); <br>}, 'Please enter a valid 8 or 13 digit code.');</p><p>I still like dojo's approach better tho.  :-)P</p><p>@Ray: time is an interesting concept.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712492">20</a> by Brad Wood
		posted on 2/10/2009 at 9:12 AM
		</div>
		<div class="comment_text"><p>We are using the jQuery validation plug-in.  It does make 95% of your basic validation tasks easy.  My main problem with it was that the "remote" validation type that lets you use an ajax call to get a response from the server only lets you pass back true or false.  You aren't allowed to use a custom message based off of something random like "That discount code expired on January 1st"</p><p>Luckily, it's all open source so it was an easy addition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712493">21</a> by Raymond Camden
		posted on 2/10/2009 at 9:17 AM
		</div>
		<div class="comment_text"><p>@Brad Wood: Hush, you are giving away some of the cool things I want to bring up. ;) The Ajax validation part is probably the slickest part of the package. I can't wait to demo it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712494">22</a> by Sebastiaan
		posted on 2/10/2009 at 2:19 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I was reading the comments hoping someone would address the Ajax stuff. I currently use a similar validation-framework (Prototype 1.5 - an older version, but nonetheless it works like a charm), but haven't been able to figure out how it can reset the validations when NOT using a submit button. Hence using an AJAX call in a button using onclick to submit the form. Currently I'm using a CFGRID (it's residing in a cflayoutarea with tabs) and in the other I have a form that's submitting NEW data to the grid. But the validation only works when I'm leaving the field (onblur) and not on the button. If I submit it all the validation messages don't disappear and when using the form a second time (adding another) the validation doesn't work at all. Of course no problems at all when replacing the on-click action button with a submit button.</p><p>Come up with the preso/demo ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712497">23</a> by Seb Duggan
		posted on 2/10/2009 at 3:45 PM
		</div>
		<div class="comment_text"><p>Yes, the extra arguments break HTML validation.</p><p>I prefer to use tha alternate method: if you also add the jQuery metadata plugin - <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Fproject%2Fmetadata%3AGW7PEaynwq8pbSP7ERJRRkC2Psc&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/project/metadata">http://plugins.jquery.com/p...</a> - you can do something like this:</p><p>&lt;p&gt;<br>&lt;label for="cage"&gt;Age&lt;/label&gt;<br>&lt;em&gt;*&lt;/em&gt;&lt;input id="cage" name="cage" size="4" class="required number {min:1,max:100}" /&gt;<br>&lt;/p&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712502">24</a> by Jörn Zaefferer
		posted on 2/10/2009 at 4:25 PM
		</div>
		<div class="comment_text"><p>About the date validation issues: This is certainly a weak feature of the plugin, but one that seemed to work well most of the time, that is, I rarely ever see any questions or requests on the date methods. If there were more requests, I'd consider integrating the datejs library (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.datejs.com%2F%29%3AutnR82DdMeTRCDM0ijJfZK4mou4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datejs.com/)">http://www.datejs.com/)</a>.</p><p>About Gabe's issue in IE6 and document-ready: Have you tried placing your doSomething()-call in a script block just before the closing body-tag?</p><p>About localization: The plugin has english as the default language, but is bundled with 17 localizations (mostly contributions from other users).</p><p>About accessibility: The plugin uses labels with the correct for-attribute for the error messages, so a screenreader should be able to link the error-label to the associated input.</p><p>@Brad Wood: Would you mind sharing your addition?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712507">25</a> by Jeff Horne
		posted on 2/10/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>I've started using jquery recently and have found it very promising.  I recently integrated a datepicker into our customer website and skinned it with ThemeRoller from the &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fui.jquery.com%2Fhome%3Am0aGR-nK5MRHfDm2W5L1yTM3eFM&amp;cuid=3321886" rel="nofollow noopener" title="http://ui.jquery.com/home">http://ui.jquery.com/home</a>" target="_blank"&gt;jquery UI site&lt;/a&gt;.  I was then bitten by the IE6 unable to handle a png problem.  It's always something with IE6.</p><p>Unfortunately, most of the examples I find are with php and asp so I have to integrate it into cfm myself.  Your ideas are very, very helpful, Ray.  My latest adventure is to place a file upload form into a jquery accordion panel that stays in the panel after the upload.  It's slow going.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712506">26</a> by Jeff Horne
		posted on 2/10/2009 at 7:06 PM
		</div>
		<div class="comment_text"><p>Oops.  Sorry about the link in my last post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712500">27</a> by Raymond Camden
		posted on 2/10/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>No worries Jeff Home. I keep meaning to add text to the comment form mentioning that URLs are auto linked and HTML is escaped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712501">28</a> by Tony Nelson
		posted on 2/10/2009 at 7:55 PM
		</div>
		<div class="comment_text"><p>I've recently started playing with jQuery afters years with Prototype and have found jQuery has some pretty elegant plugins compared to Prototype.</p><p>The inline validation seems convenient, but maybe not the most unobtrusive approach. If you think of validation as just another aspect of your application, having the validation rules (class="required" minlength="2") applied directly to the form fields isn't the best separation of concerns.</p><p>Granted the pragmatic side of me says this lightweight approach probably fits the need for most developers out there and that a more AOP-style validation engine, either database or XML driven, might be a little overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712508">29</a> by Raymond Camden
		posted on 2/10/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>@Tony: Working on the demos for the next post now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712504">30</a> by Lola LB
		posted on 2/10/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>Interesting.  I like this better than the built-in cfform validation where you have popup windows.  Somehow I find these popup windows rather irritating and not very attractive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712510">31</a> by Raymond Camden
		posted on 2/10/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>Agreed. Also, I tend to prefer errors on top of my form, not to the right of the fields, especially on short forms. This plugin allows for that and that will be in my demos later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712499">32</a> by Neil Bailey
		posted on 2/10/2009 at 9:33 PM
		</div>
		<div class="comment_text"><p>My biggest problem w jQuery is that its ANOTHER freaking library that I have to learn and download to the client machine.</p><p>We currently use the EXTJS package, and while its not stoopid large, its not tiny.</p><p>Why can't there be a single package that does every freaking thing...........  &lt;piss and moan&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712509">33</a> by Raymond Camden
		posted on 2/10/2009 at 9:36 PM
		</div>
		<div class="comment_text"><p>Since my return to JS (that sounds overly dramatic) I've found that the various JS libraries are much like the various server side languages we have.</p><p>Both PHP and CF support reading files, but they certainly do it different ways. Ditto for the JS frameworks out there.</p><p>It is important that you (and by you I mean either you as the sole developer or you and your organization) find the library that enables you to be the most productive. (Frankly I think client download isn't a huge concern. jQuery has compressed versions and I'm sure EXT does as well. Spry does for sure.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712503">34</a> by denny
		posted on 2/11/2009 at 6:23 AM
		</div>
		<div class="comment_text"><p>@Jörn: Sweet!  I loves me some multi-language and accessibility.  Scores some major points in my book.  Might not hurt to add that info to the plugin page.  I know most people don't care, but still.</p><p>@Everyone/anyone:<br>jQuery seems to be going for the bottom-up on localization and accessibility, vs. dojo's top-down.  I can appreciate the logic, and I feel that the only way it will work, is if devs guide other devs in "the right way" to code this stuff.</p><p>Make a big deal about being multi-lingual, and accessible (in general)!  <br>Or maybe don't.  Evolution will take care of all of it, in the end, come to think of it.  Eh.  =]</p><p>@Ray &amp; Niel: Dojo has had /everything/ and /anything/ that I've needed to do with JS.  Just amazing stuff.  The build system, various tools for working with other languages... just far-out, wonderful stuff.  I like how things are organized (the sources)... the list goes on and on.</p><p>Course, javascript is a pretty freaky language in and of itself, and just about any "helper" lib can do nifty things for it, so... guess whatever floats your boat, as with anything.</p><p>Swell to hear that localization and accessibility have been thought of with this jQuery validation plugin.  I don't know why I like that so much, but I do.  =]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712505">35</a> by Michael Williams
		posted on 2/11/2009 at 11:07 AM
		</div>
		<div class="comment_text"><p>I would like to see your take on server side validation. I don't think enough is written on that subject. Especially with regards to xss.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712514">36</a> by Jose Galdamez
		posted on 2/13/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>The timing for this is great. I was going through the WACK book volume 1, and was loving the fact that you could have CF take care of client-side validation through the use of &lt;cfform&gt;. I was able to get &lt;cfform&gt; validation working in a snap on our testing server, but the minute I sent the files to production they stopped working. The code was fine. I believe that our hosting provider at the university has to be mapping something improperly so that the JavaScript files aren't being loaded properly (e.g. /CFIDE/).</p><p>That means we can't rely on &lt;cfform&gt; for any of its JS or AJAX-related features. Bummer!</p><p>After shopping around, I found jQuery to be a nice alternative. These demos make it seem even more enticing. In a way, the examples here are better than what one would get from &lt;cfform&gt; because you don't get the annoying alert() window. The error messages are much more friendly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712513">37</a> by denny
		posted on 2/13/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>@Jose</p><p>You can use the "scriptsrc" cfform attribute to specify a different directory to pull the JS and stuff from, bypassing a call to your IT department.</p><p>HIH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712517">38</a> by Chris
		posted on 2/16/2009 at 4:39 PM
		</div>
		<div class="comment_text"><p>Ray, this is perfect.  I'm working on a site with some forms and I have to use validation.  Sharpening my teeth with jquery at the same time.</p><p>I couldn't figure out from the documentation for the validation plug in how to make a text input field required when they choose a specific drop down box.</p><p>Basically I have a "how did you hear from us" drop down.  If they choose "OTHER" I need to make the "OTHER" input field required.</p><p>If this is in the documentation, I'm sure I missed it for sure.  Maybe a link to the page?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712518">39</a> by Raymond Camden
		posted on 2/16/2009 at 5:15 PM
		</div>
		<div class="comment_text"><p>The second entry in this series shows an example of 'if you pick a checkbox, you must enter so and so field', but this is not exactly what you mean. I'll do some research and get back to you. Most likely it will be a 'depends' type thing, which I saw an example of before and need a bit more coffee to figure out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712516">40</a> by Raymond Camden
		posted on 2/16/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>The solution is here. I'm about to get my kids up for school and do other things to prep for work so I'll be off the grid for about 1.5 hours. But I can whip up a quick demo when I get back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712520">41</a> by Raymond Camden
		posted on 2/16/2009 at 7:43 PM
		</div>
		<div class="comment_text"><p>Here ya go:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F2%2F16%2FjQuery-Form-Validation-with-Selects%3AhI5GKvcrUkwg8zPUMmSENEHVU6o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/2/16/jQuery-Form-Validation-with-Selects">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712521">42</a> by Prabhjot singh
		posted on 4/3/2009 at 10:19 AM
		</div>
		<div class="comment_text"><p>Hi there,</p><p>Iam new to ASP.NET and jquery, i implemented the above written code in my .aspx pages. I have added the .js files onto the page. Now, whenever i run my project i get an error "jquery is undefined". I really don't know how to move forward. any help!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712522">43</a> by Raymond Camden
		posted on 4/3/2009 at 3:32 PM
		</div>
		<div class="comment_text"><p>Did you download the jQuery file itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712515">44</a> by prabhjot singh
		posted on 4/3/2009 at 4:23 PM
		</div>
		<div class="comment_text"><p>yes sir, i did. i downloaded the plugin aswell. i created a new folder in my site by the name "js" and have put in the pluggin aswell as the jquery file. But still no results. i have a feeling that iam goin wrong somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712519">45</a> by Raymond Camden
		posted on 4/3/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>Are you sure jQuery is loading right? In other words, if your HTML does:</p><p>&lt;script src="/js/jquery.js"&gt;&lt;/script&gt;</p><p>Is that the right path to the jquery folder? Does Firebug confirm the script has loaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712523">46</a> by prabhjot singh
		posted on 4/4/2009 at 10:18 AM
		</div>
		<div class="comment_text"><p>hey, thanks for your help. It seems that the jquery files are loading pretty well, but now the error which it shows  is something like this:</p><p>$("#form1").validate(); is undefined.</p><p>The code which i have written is as follows:</p><p> &lt;script src="jquery.js" type="text/javascript"&gt;&lt;/script&gt;</p><p>    &lt;script src="jquery.validate.pack.js" type="text/javascript"&gt;&lt;/script&gt;</p><p>    &lt;script src="jquery.validate.js" type="text/javascript"&gt;&lt;/script&gt;<br>    &lt;script src="jquery.form.js" type="text/javascript"&gt;&lt;/script&gt;<br>    &lt;script src="jquery-1.3.2.min.js" type="text/javascript"&gt;&lt;/script&gt;<br>    &lt;script type="text/javascript"&gt;<br>        $(document).ready(function() {<br>            $("#form1").validate();<br>        });</p><p>    &lt;/script&gt;</p><p>and then the form validations in the body tag. What more i have to do??</p><p>Regards<br>Prabhjot Singh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712524">47</a> by Raymond Camden
		posted on 4/4/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>This means the validation plugin isn't being found. Do you see the script src pointing to it? You need to ensure that is the right location for the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712530">48</a> by prabhjot singh
		posted on 4/6/2009 at 9:14 AM
		</div>
		<div class="comment_text"><p>Hi, iam getting an error when i run my program on firebug</p><p>key is undefined<br>[Break on this error] var parts = key.split(".");</p><p>This error is pointing to jquery.js file. When i open the description i get this</p><p>data()()jquery.js (line 1355)<br>data()(input#cname.required)jquery.v...lidate.js (line 795)<br>rules()(input#cname.required)jquery.v...lidate.js (line 771)<br>(?)()()jquery.v...lidate.js (line 609)<br>(?)()()jquery.js (line 353)<br>grep()(Object length=3 0=input#cname.required, function(), undefined)jquery.js (line 1129)<br>filter()(function())jquery.js (line 352)<br>refresh()()jquery.v...lidate.js (line 605)<br>validator()(undefined, form#form1)jquery.v...lidate.js (line 397)<br>validate()(undefined)jquery.v...lidate.js (line 245)<br>(?)()()index.aspx (line 16)<br>(?)()()jquery.js (line 2905)<br>each()([function(), function()], function(), undefined)jquery.js (line 690)<br>ready()()jquery.js (line 2904)<br>(?)()()jquery.js (line 2929)<br>[Break on this error] var parts = key.split(".");</p><p>I have written down the same code as u. What next should i do??</p><p>Regards<br>prabhjot singh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712526">49</a> by prabhjot singh
		posted on 4/6/2009 at 1:21 PM
		</div>
		<div class="comment_text"><p>hey Ray,</p><p>Everything is working just fine, Thanks for your help. Iam so happy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712531">50</a> by prabhjot singh
		posted on 4/6/2009 at 3:11 PM
		</div>
		<div class="comment_text"><p>hi, can ia add my own functions in jquery file and make them work like all other functions??? what i have done is,</p><p>i have to validate my first name and the last name field in such a way that no alpha-numeric character is entered. The "required" is working fine, but what about the other thing like i have mentioned. I tried by putting in a new function in jquery.js but it did'nt work. So, is it possible??</p><p>Regards<br>Prabhjot singh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712532">51</a> by Raymond Camden
		posted on 4/7/2009 at 2:00 AM
		</div>
		<div class="comment_text"><p>You don't want to modify jQuery.js. Instead, you want to look at the plugin architecture:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FAuthoring%3AmzIXGPR9v7ADyhmh4cCfdheJbOk&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Authoring">http://docs.jquery.com/Plug...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712527">52</a> by Trevor
		posted on 4/16/2009 at 1:30 AM
		</div>
		<div class="comment_text"><p>Do you know if you can do a cross-domain option on this like you can with the $.ajax method?  I've got what I want with straight-up jQuery, but turning it into something validator can deal with has been difficult.  Here's the Pastie of my attempt to add a method to validator to accomplish this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastie.org%2F447779%3AXTxuohJ05q-Z9P1sdVJpVB_Tp-c&amp;cuid=3321886" rel="nofollow noopener" title="http://pastie.org/447779">http://pastie.org/447779</a></p><p>-TR</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712529">53</a> by adnan
		posted on 6/8/2009 at 8:59 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Thanks for sharing your ideas. But like others I also love the Spry validation of dreamweaver because of its ease of use and modifications. I can simple add the spry validation using mouse clicks. And I found a way for using the Spry validation of dreamweaver with jQuery ajax form submit here: <a href="http://disq.us/url?url=http%3A%2F%2Fabcoder.com%2Fjavascript%2Fusing-dreamweaver-spry-validation-with-jquery-ajax-form-plugin%2F%3Azk8W4k3oFG5Z0jXyIkdtbXiavhg&amp;cuid=3321886" rel="nofollow noopener" title="http://abcoder.com/javascript/using-dreamweaver-spry-validation-with-jquery-ajax-form-plugin/">http://abcoder.com/javascri...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712535">54</a> by Ben Lopez
		posted on 6/12/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>Ray, whenever I try to solve a problem with ColdFusion and I see you have a tutorial on it, that is the first place I go. I wasn't expecting to see your name on a jQuery issue. But, clicked this link when I saw your name and low and behold I found the answer.</p><p>I could not get the required class to work on a file upload. I was using the recommended mime-type for the accept attribute "image/jpeg". When I changed it to accept="jpg" ... problem solved.</p><p>Thanks for posting this tutorial. I look forward in seeing more on jQuery from you.</p><p>I'm with you on learning one thing at a time. Unfortunately, for me I have a job offer and they are using DoJo...I understand that the 2 frameworks can will not conflict.</p><p>Thanks again Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712528">55</a> by Raymond Camden
		posted on 6/12/2009 at 8:11 PM
		</div>
		<div class="comment_text"><p>Thanks for the kind words, Ben. I've been doing jQuery a lot lately. Did you know I blog on InsideRIA now? I do most of my jQuery stuff there, but will do jQuery/CF stuff here. As for jpeg vs jpg - I run into that a lot as well.</p><p>Dojo: Yep, you can set up jQuery to use another 'root' instead of $. That way it won't conflict.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712534">56</a> by Jay
		posted on 7/20/2009 at 11:03 AM
		</div>
		<div class="comment_text"><p>Great post Ray -- very helpful in setting up the plugin for the first timers.</p><p>I've had a few stints with the plugin myself --  But I was wondering if you knew of a way to 'highlight' the fieldset/div/table row (or another parent element) instead of adding a label with the error message inside. Know what I mean? So if the name textbox is empty, that entire div is highlighted, instead of the label action.</p><p>That's what I'm working on now. Would love your thoughts on it if possible.</p><p>Fantastic site btw -- keep up the great work :)</p><p>~Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712536">57</a> by Raymond Camden
		posted on 7/20/2009 at 2:33 PM
		</div>
		<div class="comment_text"><p>Check out the demos page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fvalidate%2Fdemo%2F%3ApiuORK7GHd49YkRcxxvMjfPm0_w&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/validate/demo/">http://jquery.bassistance.d...</a></p><p>The demo with 'custom display' is close to what you want I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712533">58</a> by nemrod
		posted on 7/28/2009 at 4:52 AM
		</div>
		<div class="comment_text"><p>The javascript include files 404, the validation of the examples isn't working. Just a heads up :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712539">59</a> by Bill
		posted on 8/27/2009 at 4:31 PM
		</div>
		<div class="comment_text"><p>I am preparred to get flamed over this, so fill the gascans.<br>But I am new at this, that said:<br>Why do you prepend the fields with the letter "c"?<br>Is it a convention or part of the api for the validation plugin?<br>It seems to be kind of sporadic to the untrained eye.<br>I've attached your code below as an example.</p><p>&lt;pre&gt;<br>&lt;p&gt;<br>&lt;label for="cname"&gt;Name&lt;/label&gt;<br>&lt;em&gt;*&lt;/em&gt;&lt;input id="cname" name="name" size="25" class="required" minlength="2" /&gt;<br>&lt;/p&gt;<br>&lt;p&gt;<br>&lt;label for="cage"&gt;Age&lt;/label&gt;<br>&lt;em&gt;*&lt;/em&gt;&lt;input id="cage" name="cage" size="4" class="required number" min="1" max="100" /&gt;<br>&lt;/p&gt;<br>&lt;/pre&gt;</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712537">60</a> by Raymond Camden
		posted on 8/27/2009 at 4:34 PM
		</div>
		<div class="comment_text"><p>No good reason, outside of me thinking it was weird to have ID and NAME be the same, although I don't believe there is any need to have them different.</p><p>So... ignore/don't worry about/etc. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712542">61</a> by Vesselin Obreshkov
		posted on 6/26/2010 at 4:25 AM
		</div>
		<div class="comment_text"><p>Isn't it considered bad (X)HTML though to have attributes such as "minlength" and such for the purpose of validation when jQuery allows you to specify all that in much more "standards friendly" way like this:</p><p>&lt;code&gt;<br>&lt;script&gt;<br>$().ready(function() {<br>  $("#form).validate({<br>     rules: {<br>       name: "required",<br>       number: { <br>         required: true,<br>         number: true<br>       },<br>       messages { ... }<br>     }<br>  });<br>});<br>&lt;/script&gt;<br>&lt;/code&gt;</p><p>This way you can also add custom error messages for each field in the same consistent way you define the rules for each field (would've been even nicer if they simply added a message attribute to the rules options).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712545">62</a> by Raymond Camden
		posted on 6/28/2010 at 4:57 PM
		</div>
		<div class="comment_text"><p>@Vesselin: If you look at the other entries in this series (see Related Blog Entries above), you will see I discuss that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712546">63</a> by John
		posted on 12/1/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>Dear Raymond,</p><p>Thanks for the great article!<br>I'd like to put the labels on the right of text input fields and display the error messages under input fields.<br>Tried almost anything, but to no avail. :-(</p><p>Any help is greatly appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712544">64</a> by Raymond Camden
		posted on 12/1/2010 at 9:43 PM
		</div>
		<div class="comment_text"><p>Initial quick response - for labels on the right - thats a purely HTML/CSS issue. You don't use jQuery for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712543">65</a> by John
		posted on 12/1/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Thanks for the quick response!<br>You're right and I know how to do it by simply displacing the &lt;label&gt; and &lt;input&gt; tags. But the problem is the label gets completely disordered when the error message appears.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712547">66</a> by Raymond Camden
		posted on 12/2/2010 at 5:54 AM
		</div>
		<div class="comment_text"><p>Looking at the docs, <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FValidation%2Fvalidate%23toptions%3A2Ovcqx_mZSEJFxawDHeZk9lmBhE&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Validation/validate#toptions">http://docs.jquery.com/Plug...</a>, it seems like the errorContainer specifies what is used for error messages. I'd look into that as a way of saying, 'put the errors here.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712550">67</a> by John
		posted on 12/2/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>More than what I expected -- So helpful! Thanks! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712549">68</a> by OnLine
		posted on 7/3/2011 at 11:40 AM
		</div>
		<div class="comment_text"><p>Hy,<br>For simple form, with two or three fields, i think is better to write yourself the validation code than including the entery Validation plugin.<br>Something like: if ($('elm').val().length == 0) { alert('message'); }<br>Or:<br>if($('elm').is(':checked')) { alert('message'); }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712551">69</a> by Raymond Camden
		posted on 7/3/2011 at 4:58 PM
		</div>
		<div class="comment_text"><p>Well certainly - but most forms are not one or two fields. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712553">70</a> by kumar
		posted on 6/20/2012 at 3:26 AM
		</div>
		<div class="comment_text"><p>Thanks for the simple post</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712554">71</a> by 1
		posted on 7/8/2012 at 6:42 PM
		</div>
		<div class="comment_text"><p>Your example only works onsumbit while theirs works after input why is that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712555">72</a> by Raymond Camden
		posted on 7/8/2012 at 6:46 PM
		</div>
		<div class="comment_text"><p>That's just how I liked it. This blog entry is a few years old but if I remember right, you can do either. It is up to you to decide when you want the validation to fire.</p></div>
	</div>
</div>
		