
<div class="comment" id="c_2377489779">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2377489779">1</a> by Šime Vidas
		posted on 11/25/2015 at 3:10 AM
		</div>
		<div class="comment_text"><p>Regarding <code>new-password</code>, couldn’t it be used as a hint for the browser to offer automatic password generation on that input? I know Safari has such a generator, although I forgot how it can be triggered. Browsers already provide password managers and sync between devices, so password generation would be the final step in handling passwords for the user completely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2377834150">
	<div>
		<img src="https://disqus.com/api/users/avatars/mem_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2377834150">2</a> by Mem's
		posted on 11/25/2015 at 10:14 AM
		</div>
		<div class="comment_text"><p>&gt; new-password (oh my god don’t use this, why would you want to recommend re-using the same password???)</p><p>I don't understand why you say that. The spec specify: "A new password <br>(e.g. when creating an account or changing a password)". "New" don't <br>mean "reuse"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2377875473">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2377875473">3</a> by Craig Francis
		posted on 11/25/2015 at 11:00 AM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="simevidas:disqus" href="https://disqus.com/by/simevidas/" rel="nofollow noopener" title="https://disqus.com/by/simevidas/">Šime Vidas</a>, yes Safari does use the `new-password` autocomplete value, and I'm hoping that password managers like 1Password will use it soon as well (<a href="https://disq.us/url?url=https%3A%2F%2Fdiscussions.agilebits.com%2Fdiscussion%2F28844%2Fusing-new-html5-autocomplete-attribute-values%29%3A8ocO5iYCb_mRy-F_Vdb8hk8KYz0&amp;cuid=3321886" rel="nofollow noopener" title="https://discussions.agilebits.com/discussion/28844/using-new-html5-autocomplete-attribute-values)">https://discussions.agilebi...</a>. This is especially important on password change pages, where you will typically have 3 password fields (old/new/repeat-new).</p><p>I'd also like to add that these examples should all use a &lt;label for="XXX"&gt; around the labels, as this does effect the heuristics the browser uses for the guessing-based autocomplete (and is really important for assistive technology / usability / validation).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378052234">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378052234">4</a> (In reply to <a href="#c_2377875473">#3</a>) by Raymond Camden
		posted on 11/25/2015 at 1:41 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this Craig. From what I see of the spec, <a href="https://disq.us/url?url=https%3A%2F%2Fhtml.spec.whatwg.org%2Fmultipage%2Fforms.html%23attr-fe-autocomplete-new-password%3A0zfPhVxg3lXqPwYDdiZViuPC4qc&amp;cuid=3321886" rel="nofollow noopener" title="https://html.spec.whatwg.org/multipage/forms.html#attr-fe-autocomplete-new-password">https://html.spec.whatwg.or...</a>, new-password doesn't mention anything like this, but I definitely see how it could be used like this. My concern is that it will auto suggest a previous password outside of Safari. I'm going to test.</p><p>re: labels - I definitely agree, but does it impact what I'm discussing in this blog post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378058031">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378058031">5</a> (In reply to <a href="#c_2377875473">#3</a>) by Raymond Camden
		posted on 11/25/2015 at 1:46 PM
		</div>
		<div class="comment_text"><p>Ok, so given this form:</p><p>	&lt;form autocomplete="on"&gt;</p><p>		new-password, text: &lt;input type="text" name="p1" autocomplete="new-password"&gt;<br></p><p>		new-password, pword: &lt;input type="password" name="p2" autocomplete="new-password"&gt;<br></p><p>		&lt;input type="submit"&gt;</p><p>	&lt;/form&gt;</p><p>Safari did *not* offer to generate a new password for me. Should it have?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378061226">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378061226">6</a> (In reply to <a href="#c_2377875473">#3</a>) by Raymond Camden
		posted on 11/25/2015 at 1:48 PM
		</div>
		<div class="comment_text"><p>Ok, so in Safari preferences, I did *not* have usernames/passwords remembering enabled. When i did that, Safari did try to auto fill the password, but it did not try to generate a new one for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378061777">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378061777">7</a> (In reply to <a href="#c_2377834150">#2</a>) by Raymond Camden
		posted on 11/25/2015 at 1:48 PM
		</div>
		<div class="comment_text"><p>My worry is that it would suggest a previous password. It doesn't seem to - so I could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378070668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378070668">8</a> (In reply to <a href="#c_2377875473">#3</a>) by Raymond Camden
		posted on 11/25/2015 at 1:55 PM
		</div>
		<div class="comment_text"><p>Ok, *finally*, I got it working following this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macworld.com%2Farticle%2F2058081%2Fhow-to-use-icloud-keychain.html%3AZHFcsf6hVBFnCoMfcnoE-mcKZuY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macworld.com/article/2058081/how-to-use-icloud-keychain.html">http://www.macworld.com/art...</a></p><p>I have to wonder how many users actually do this - I can't imagine that many. :\</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378074228">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378074228">9</a> (In reply to <a href="#c_2377875473">#3</a>) by Raymond Camden
		posted on 11/25/2015 at 1:57 PM
		</div>
		<div class="comment_text"><p>Holy crap. So imagine this form field:</p><p>		new-password, pword: &lt;input type="password" name="p2_new" autocomplete="new-password"&gt;<br></p><p>In Firefox, it actually suggested one of my real passwords. I saw this by editing the DOM element and changing it to text. The value was a password I've used before. That has to be real bad, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378087498">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378087498">10</a> (In reply to <a href="#c_2378052234">#4</a>) by Craig Francis
		posted on 11/25/2015 at 2:07 PM
		</div>
		<div class="comment_text"><p>re:labels, it can do depending on the browser... if the browser does not understand these new autocomplete values they will use the &lt;label&gt; first before using the name to guess at what the field is for.</p><p>And you should ideally use them for all examples, so any inexperienced developers will hopefully start to learn that they are needed all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378089404">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378089404">11</a> (In reply to <a href="#c_2378070668">#8</a>) by Craig Francis
		posted on 11/25/2015 at 2:08 PM
		</div>
		<div class="comment_text"><p>I think a fair few do on their iPhone/iPad, but I'm just hoping it becomes more useful given time (especially when password managers can start using this, rather than guessing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378092362">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378092362">12</a> (In reply to <a href="#c_2378074228">#9</a>) by Craig Francis
		posted on 11/25/2015 at 2:10 PM
		</div>
		<div class="comment_text"><p>Ok, that's not good... I'll have to do some digging, but I don't believe Firefox actually reads the autocomplete value at the moment (it just defaults to "on", and I believe it always stays "on" even if you tell it otherwise).</p><p>That said, it really should not be pre-filling existing passwords (unless maybe that password was provided on the website/domain you were testing on?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378094119">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378094119">13</a> (In reply to <a href="#c_2378087498">#10</a>) by Raymond Camden
		posted on 11/25/2015 at 2:12 PM
		</div>
		<div class="comment_text"><p>I absolutely agree I should use them in all examples - but specifically for now I want to keep the examples as is and then *add* examples with labels, to see if there is a change in behavior. Going to try that now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378097314">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378097314">14</a> (In reply to <a href="#c_2378087498">#10</a>) by Raymond Camden
		posted on 11/25/2015 at 2:14 PM
		</div>
		<div class="comment_text"><p>Ok, in this test:</p><p>	labels<br></p><p>	&lt;form&gt;</p><p>		&lt;label for="fname1"&gt;First Name: &lt;/label&gt;</p><p>		&lt;input type="text" name="fname1" id="fname1" autocomplete="given-name"&gt;<br></p><p>		&lt;label for="lname1"&gt;Last name:&lt;/label&gt;</p><p>		&lt;input type="text" name="lname1" id="lname1" autocomplete="family-name"&gt;<br></p><p>		&lt;input type="submit"&gt;</p><p>	&lt;/form&gt;</p><p>I saw *no* change in terms of auto fill. No browser suggested a previous first/last name. Did I do it wrong perhaps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378100140">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378100140">15</a> (In reply to <a href="#c_2378092362">#12</a>) by Raymond Camden
		posted on 11/25/2015 at 2:16 PM
		</div>
		<div class="comment_text"><p>The password it uses *was* one I used on my testing domain, but still it shouldn't suggest it for sure. I raised the comment on Twitter (I think I have a few Mozillians following me) to see if they can confirm this should be logged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378118813">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378118813">16</a> (In reply to <a href="#c_2378097314">#14</a>) by Craig Francis
		posted on 11/25/2015 at 2:29 PM
		</div>
		<div class="comment_text"><p>Firefox: Does not really support autocomplete profiles, it simply remembers the values that have been entered into that text field for that website.<br><a href="https://disq.us/url?url=https%3A%2F%2Fsupport.mozilla.org%2Fen-US%2Fkb%2Fcontrol-whether-firefox-automatically-fills-forms%3AUUDt-rSkw1CTnxrLuozAw2OxR80&amp;cuid=3321886" rel="nofollow noopener" title="https://support.mozilla.org/en-US/kb/control-whether-firefox-automatically-fills-forms">https://support.mozilla.org...</a></p><p>Chrome: Has fairly recently started using the autocomplete attribute, but it is still messy (and I can't work out what it uses to decide if it will use it or not, it seems to require at least one of the address fields to exist).</p><p>Safari: I've not done much testing, but it seems to work similar to Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378122519">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378122519">17</a> (In reply to <a href="#c_2378097314">#14</a>) by Craig Francis
		posted on 11/25/2015 at 2:30 PM
		</div>
		<div class="comment_text"><p>As for label testing, try this:</p><p>&lt;form action="./"&gt;<br>&lt;label for="AAA"&gt;First Name&lt;/label&gt;<br>&lt;input type="text" name="AAA" id="AAA"&gt;<br>&lt;label for="BBB"&gt;Last name&lt;/label&gt;<br>&lt;input type="text" name="BBB" id="BBB"&gt;<br>&lt;label for="CCC"&gt;XXX&lt;/label&gt;<br>&lt;input type="text" name="CCC" id="CCC"&gt;<br>&lt;input type="submit"&gt;<br>&lt;/form&gt;</p><p>Test that, then change XXX to "Address", and suddenly Chrome/Safari start working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378128719">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378128719">18</a> (In reply to <a href="#c_2378100140">#15</a>) by Craig Francis
		posted on 11/25/2015 at 2:35 PM
		</div>
		<div class="comment_text"><p>I think it just comes under "we remember this websites password", and completely ignores the autocomplete attribute.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FSecurity%2FSecuring_your_site%2FTurning_off_form_autocompletion%3A9EEN4hJm5yfM7XDSzYN2Igr5k7E&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/Security/Securing_your_site/Turning_off_form_autocompletion">https://developer.mozilla.o...</a></p><p>"Many modern browsers do not support autocomplete="off" for login fields [...] This is the behavior in Firefox (since version 38), Google Chrome (since 34), and Internet Explorer (since version 11)."</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378176558">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378176558">19</a> (In reply to <a href="#c_2378128719">#18</a>) by Raymond Camden
		posted on 11/25/2015 at 3:08 PM
		</div>
		<div class="comment_text"><p>Seems.... risky. I mean, I use a unique name/id. I used new-password, not password. Not sure why it would still suggest a known password just because type=password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378190741">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378190741">20</a> (In reply to <a href="#c_2378176558">#19</a>) by Craig Francis
		posted on 11/25/2015 at 3:18 PM
		</div>
		<div class="comment_text"><p>For Firefox (at the moment), it doesn't matter what you set the autocomplete attribute to on the password field... it's always seen as "on", even if you explicitly set it to "off" then it just ignores it, and any other value is just assumed to mean "on" anyway.</p><p>And because of that, it just assumes any password field is the password field for the website, so it will auto suggest any previously used passwords for that website :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378206151">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378206151">21</a> (In reply to <a href="#c_2378190741">#20</a>) by Raymond Camden
		posted on 11/25/2015 at 3:28 PM
		</div>
		<div class="comment_text"><p>Fair enough - but I can't get Chrome to recreate the same behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2378215042">
	<div>
		<img src="https://disqus.com/api/users/avatars/craigfrancis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378215042">22</a> (In reply to <a href="#c_2378206151">#21</a>) by Craig Francis
		posted on 11/25/2015 at 3:34 PM
		</div>
		<div class="comment_text"><p>I'm not sure Chrome is using the "new-password" value at the moment (nor do I think they have a way to generate a random password).</p><p>It doesn't help that there have been a few different versions of this spec, including things like "x-autocompletetype", and the ever changing list of fields for the address.</p><p>That said, I don't think its really changed for about a year, so hopefully the browsers and password managers will standardise on this one and we can all start using it... in the mean time, as website creators we can just add it and wait for everyone to catch up :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2386433983">
	<div>
		<img src="https://disqus.com/api/users/avatars/mistersender.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2386433983">23</a> by mistersender
		posted on 12/1/2015 at 3:01 AM
		</div>
		<div class="comment_text"><p>I have had some fun struggles with autocomplete, and lacking time to blog, thought I would throw out a couple of gotchas I've found working with them (mostly js related):</p><p>- if you have events attached to `change` events on your form/fields, they won't fire reliably if the user uses native autocomplete. They *will* fire for `input` events, though, so at least that's an easy fix. Same deal on mobile devices. I think that is true for all input fields, selects still require some weird hoodwinkery with setTimeouts<br>- toggling autocomplete on and off with javascript does not work very well. I had an application that could be autocompleted from a googleplaces search OR native autocomplete. if googleplaces was used, i needed to disable native autocomplete... didn't work great. Don't know why yet.. it's really bothering me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2387724367">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2387724367">24</a> (In reply to <a href="#c_2386433983">#23</a>) by Raymond Camden
		posted on 12/1/2015 at 9:02 PM
		</div>
		<div class="comment_text"><p>That's some pretty fascinating details - thanks for sharing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2620667740">
	<div>
		<img src="https://disqus.com/api/users/avatars/vrtjason.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2620667740">25</a> by Jason McNeill
		posted on 4/13/2016 at 12:01 AM
		</div>
		<div class="comment_text"><p>How's this for convoluted-yet-futureproof (I would apply masking to the characters in the password field with javascript):<br><code><br>&lt;!-- Field names are always unique and therefore will never be remembered: --&gt;<br>&lt;cfset session.usernamefieldname = CreateUUID()&gt;<br>&lt;cfset session.passwordfieldname = CreateUUID()&gt;<br><br><strong>Username:</strong><br>&lt;input type="text" name="&lt;cfoutput&gt;#session.usernamefieldname#&lt;/cfoutput&gt;"&gt;<br><br><strong>Password:</strong><br>&lt;input type="text" name="&lt;cfoutput&gt;#session.passwordfieldname#&lt;/cfoutput&gt;"&gt;<br></code></p></div>
	</div>
</div>
		