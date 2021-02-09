
<div class="comment" id="c_1714083430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083430">1</a> by Adam Cameron
		posted on 7/21/2014 at 5:49 PM
		</div>
		<div class="comment_text"><p>I recommend you don't invent a rule, you just follow the already-published and industry-accepted rules.</p><p>See here for testing of isValid("email"): <a href="http://disq.us/url?url=http%3A%2F%2Fcfmlblog.adamcameron.me%2F2014%2F07%2Fboth-coldfusion-and-railo-make-pigs-ear.html%3AgceD2Jtmok8zlG-zGYpW570XFfg&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmlblog.adamcameron.me/2014/07/both-coldfusion-and-railo-make-pigs-ear.html">http://cfmlblog.adamcameron...</a></p><p>There's a link in the to Wikipedia, which in turn links to the RFCs.</p><p>There's no rule specifically regarding TLD-length, so I recommend you don't invent one. There are, however, various rules for the domain part of an email address (composition, length, etc). All the rules are very well described, and easy to understand.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083432">2</a> by Zac Spitzer
		posted on 7/21/2014 at 5:52 PM
		</div>
		<div class="comment_text"><p>if you aren't doing bulk validation, you can always just look up the domain via DNS, networks and servers are a lot faster than they used to be</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083431">3</a> by Raymond Camden
		posted on 7/21/2014 at 5:54 PM
		</div>
		<div class="comment_text"><p>So, if it is so easy, why don't we have a good one at CFLib? ;)</p><p>Seriously though - I may just remove the server side checking completely. If someone wants to put a bad email address in, it's not like I care, and I'm also checking client side with the built in checking used with type="email" in modern browsers (which, by the way, had no issues at all with .directory) .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083428">4</a> by Raymond Camden
		posted on 7/21/2014 at 5:54 PM
		</div>
		<div class="comment_text"><p>Zac, this wasn't for bulk testing, just for my blog. (Of course, the issue I talk about is more general than that.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083429">5</a> by Adam Cameron
		posted on 7/21/2014 at 6:00 PM
		</div>
		<div class="comment_text"><p>@Ray... I think it's because most CFML developers - like Adobe ColdFusion and Railo engineers - don't bother to read the RFCs, and just *guess* how to validate an address based on the subset of rules they are personally familiar with.</p><p>I'm with you... if you don't *care* about the user's email address, don't bother validating it. If you do actually care, then you need to tell them they need to give you a valid address, and then email them some sort of confirmation to respond to before they progress with [whatever]. That's the only reliable way to do it.</p><p>Of course this is overkill for a blog ;-)</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083434">6</a> by Chris Long
		posted on 7/21/2014 at 6:38 PM
		</div>
		<div class="comment_text"><p>That isn't the only problem ColdFusion has with email validation.  They also don't allow a bunch of special characters in the user account portion that are perfectly valid according to the specs.</p><p>We ran into this issue a little while back when a user had an email address with an ampersand in it and our website wouldn't allow it because we were using CF's built-in validation.  We eventually had to switch to our own RegEx.  Off the top of my head, two characters CF can't handle are ampersand (&amp;) and double-quote (").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083433">7</a> by Tom Chiverton
		posted on 7/21/2014 at 7:09 PM
		</div>
		<div class="comment_text"><p>I've had a bug open for isValid() since, roughly, forever : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.elliottsprehn.com%2Fcfbugs%2Fbugs%2F83327%3Aviev5AVavS4YpkdB1ui4CZHr1qA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.elliottsprehn.com/cfbugs/bugs/83327">http://www.elliottsprehn.co...</a></p><p>Adobe don't seem to care.</p><p>I agree with the above though - if you care it's because you want to use it on behalf of the user, so validate it to the RFC and be sure to send it a confirmation link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083435">8</a> by James Moberg
		posted on 7/21/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>We quit using isValid() for validating email back in CF7. IsEmail() doesn't allow email addresses with the plus (+) symbol. Regex can get too complex &amp; difficult to troubleshoot. I'm in the process of switching to this java library as it passes 164 unit tests and can optionally check DNS to verify whether a mail server (MX) record exists for the domain.<br><a href="http://disq.us/url?url=http%3A%2F%2Fisemail.info%2Fabout%3AZ_u7-y2SWGh5vbhB4w9KQwURJC8&amp;cuid=3321886" rel="nofollow noopener" title="http://isemail.info/about">http://isemail.info/about</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083436">9</a> by Raymond Camden
		posted on 7/21/2014 at 8:10 PM
		</div>
		<div class="comment_text"><p>As just an FYI, in 10 at least, + is ok in the address name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083439">10</a> by James Moberg
		posted on 7/22/2014 at 3:38 AM
		</div>
		<div class="comment_text"><p>I compared isValid (BIF), isEmail (UDF) and IEMail (java, from 2010) on CF8, 9, 10 &amp; 11.  IsEMail was consistent on all CF versions and passed more unit tests. Since the BIF has finally been fixed on CF10/11, any idea if Adobe will fix it for customers that are still on 9 when the issues were first reported and it was the only version available? (It's not 12/31/2014 EOL already, is it?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083441">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083441">11</a> by dawesi
		posted on 7/22/2014 at 1:20 PM
		</div>
		<div class="comment_text"><p>The amount of email validators that think bla@dawes.id.au is invalid is huge.</p><p>I agree, there is no need to have a hardcoded list.... not that it is hard to get hold of (<a href="http://disq.us/url?url=http%3A%2F%2Fau.godaddy.com%2Ftlds%2Feoi%2Feoidatarequesthandler.ashx%3Fact%3D0%29%3AKrmIBrhtfAP6_bqZtaf2fITm2NE&amp;cuid=3321886" rel="nofollow noopener" title="http://au.godaddy.com/tlds/eoi/eoidatarequesthandler.ashx?act=0)">http://au.godaddy.com/tlds/...</a>.. but bad idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083440">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083440">12</a> by Nando Breiter
		posted on 7/24/2014 at 3:52 PM
		</div>
		<div class="comment_text"><p>I've been of the opinion for a very long time now that a valid email address is one someone can send an email to and reach the intended recipient. A valid telephone number is one someone can call and reach the intended person. And a valid zip code is one that can be placed on an envelope and the envelope reaches the intended destination.</p><p>Programmers should not be attempting to "validate" these bits of information with limiting programming scripts. Only a user can be responsible for the actual validity of these bits of information, and programmers (especially US-based programmers) block or mangle valid information with their validation scripts all too often. And they often have no idea.</p><p>As an example, I've entered a valid URL for my website in the Website field above, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.aria-media.com%3A4n2tgN0fqRizT3XVscTRwrmvYjQ&amp;cuid=3321886" rel="nofollow noopener" title="www.aria-media.com">www.aria-media.com</a>. This address works when I use it in a browser, but I can't submit this comment because the validation script doesn't accept it. So I deleted the website from the field and try to submit again ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083442">13</a> by Rubens Kuhl
		posted on 7/25/2014 at 1:36 AM
		</div>
		<div class="comment_text"><p>I think is overkill to match what TLDs exist and what do not, but if one really wants to do that, updating a new version from Mozilla Public Suffix List every month might be an option:<br><a href="https://disq.us/url?url=https%3A%2F%2Fpublicsuffix.org%3AsmzC2G4OPt0qvjLvrC6qE91Ho6g&amp;cuid=3321886" rel="nofollow noopener" title="https://publicsuffix.org">https://publicsuffix.org</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083438">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083438">14</a> by dawesi
		posted on 7/25/2014 at 3:36 AM
		</div>
		<div class="comment_text"><p>Nice of mozilla to put it in a non-standard format... not.</p><p>Either way most email servers will not let you authenticate a user these days. The only way to do that is send and email and wait for a bounce.</p><p>Email authentication was a great way to check a live address in the past, but too many spammers used it to setup lists, so any decent email server now will block this technique. I used to use this for email lists, now it's just easier to send an email. It gives you a lot more information about them anyway when they click on a link to verify they then go to the web browser where you can determine a whole bunch of further information (geo, and other demographics through google analytics, including sex, hobbies, etc)</p><p>---</p><p>getting back to the point, just write a regex that works... simple and test it with the entire godaddy or whatever list you want. also allow for plus addresses (new+accounts@me.com) and other punctuation like dot, dash, underscore in the account and use a domain regex for the domain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2382726873">
	<div>
		<img src="https://disqus.com/api/users/avatars/tim_garver.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2382726873">15</a> by Tim Garver
		posted on 11/28/2015 at 4:48 PM
		</div>
		<div class="comment_text"><p>I know this is an older post, but i just ran into this today testing tim.garver@gmail and isValid says that is valid. i have used this function for years and never know it failed on such a simple test is mind boggling. missing the TLD causes it to say yes its valid. insane. We are running CF11.6 i am going to test this on a CF901 box next week. Can anybody else confirm this on CF9x?</p><p>Thanks<br>Tim</p></div>
	</div>
</div>
		