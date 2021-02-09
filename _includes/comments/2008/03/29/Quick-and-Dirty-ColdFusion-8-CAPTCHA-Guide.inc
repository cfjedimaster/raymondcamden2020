
<div class="comment" id="c_1713678653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678653">1</a> by James Moberg
		posted on 3/30/2008 at 11:13 PM
		</div>
		<div class="comment_text"><p>Your captcha form is still extremely spammable... I made this same mistake 2 years ago.</p><p>Spammers will manually build a profile based on your form.  They will store the captchaHash and enter in the correct value in the  "captcha" field.  Since captchaHash will always equal the hashed captcha value, they can store the 2 parameters and then post as many bogus emails, names and comments as they desire while using a fake http_referer and user_agent from multiple compromised IP addresses.</p><p>In order to fix this, add a changing unpublished, non-displayable prefix/suffix to the generated hash to ensure that it can't be saved and used forever:<br>&lt;cfset captchaHash = hash("#DateFormat(Now(),'YYYYMMDD')##captcha#")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678652">2</a> by Raymond Camden
		posted on 3/30/2008 at 11:24 PM
		</div>
		<div class="comment_text"><p>Wow, thats a pretty easy way around it.</p><p>So for your solution, I take the user's value, add the prefix, then hash it.</p><p>How do you handle edge cases - like me hitting your form at 11:59PM? For dates you could get around this by checking for both today and yesterday though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678658">3</a> by James Moberg
		posted on 3/30/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>Yes, if part of the hashed value is the date, you can easily attempt to convert it back to a date and validate [isDate()] and then perform a DateDiff() function.  24 hours or even 48 hours is not too long for a dynamic parameter to be valid... you just don't want values to be archived and eternally exploitable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678654">4</a> by James Moberg
		posted on 3/30/2008 at 11:46 PM
		</div>
		<div class="comment_text"><p>Whoops... I forgot.  (I posted too quickly.)  "Hash" is one way.  You'll have to "encode" that values so that you can "decode" after posting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678656">5</a> by Raymond Camden
		posted on 3/31/2008 at 1:44 AM
		</div>
		<div class="comment_text"><p>Well, what I was thinking was</p><p>if(today + userentry -&gt; hashed) neq the hash</p><p>then try (yesterday + userentry -&gt; hashed)</p><p>You could even try yesterday conditionally - ie, only in the first hour after midnight.</p><p>Maybe another option would be to use unique hashes. Ie, as soon as you use it, don't use it again. You could store this in the app scope. It wouldn't persist forever, but would stop immediate attacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678657">6</a> by James Moberg
		posted on 3/31/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>If you encoded the values, you could also pass the key ID in it... so that all values are passed in a single encrypted token.  Kinda like:</p><p>Hash = CFusion_Encrypt("ID-YYYYMMDD-CaptchaWord", KEY)</p><p>HashDecoded = CFusion_Decrypt(Hash, KEY)<br>ID = ListFirst(HashDecoded,"-")<br>ValidDate = ListGetAt(HashDecoded,2,"-")<br>CaptchaWord = ListLast(HashDecoded,"-"))</p><p>... and then perform any needed validation.   Of course, you'd have to substitute CFusion_Encrypt with something else to work in CFMX8 and BlueDragon.  You'd also have to ensure that the values passed don't contain quotation marks and choose a delimiter that works for your application.</p><p>This should not be an attempt to obfuscate the code, just make it more difficult to be abused and expire-enabled so that it can't be remotely stored for later posting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678655">7</a> by Chad
		posted on 4/1/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>I stick with Lyla captcha - it works great and there is no workarounds I have to deal with and is a breeze to implement. Until CF8 comes up with a better solution I will continue to use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678661">8</a> by James Moberg
		posted on 4/1/2008 at 3:22 AM
		</div>
		<div class="comment_text"><p>Concerning Lyla, all Hash References are valid for 30 minutes by default... sometimes it takes me more than 30 minutes to generate a response.  (I'd hate to be cflocated back to an empty form because I exceeded a preset time limit.)</p><p>Also a persistent scope is required to store the temporary Lyla hash which means that any internal hiccup could result in losing the hash.  An encrypted/decrypted method would never be impacted by a server restart, require additional clean-up cycles, or have to work around sticky sessions in a clustered environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678660">9</a> by Fernando
		posted on 4/2/2008 at 12:54 PM
		</div>
		<div class="comment_text"><p>Why not a session variable?</p><p>After setting the random text variable, we set that variable into a session. Like Session.Captcha=randomText<br>Is this safe?</p><p>If not safe, why not do an Application variable (yes, going crazy).<br>Create a Structure in an Application variable where you set the IP of the user with the value of the random text.<br>I, for instance, keep a an Application structure of online users (for 20 minutes) defined by a UUID for each user. I can store it there also and it gets deleted after 20 minutes of idle time from the user or it gets replaced when the user requests another Captcha.<br>Safer? More insane?</p><p>What do you think? What is the safest and easy way to check the Captcha value?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678662">10</a> by Raymond Camden
		posted on 4/2/2008 at 2:47 PM
		</div>
		<div class="comment_text"><p>I avoided session variables in both my guides as I wanted something that could run in _any_ CF application, whether or not sessions were enabled. (Don't forget that sessions are optional.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678666">11</a> by James Moberg
		posted on 4/2/2008 at 5:18 PM
		</div>
		<div class="comment_text"><p>I agree with Raymond.  I also avoid session and application variables if possible so that the process will work in all CF engines and applications without requiring the enabling of additional scopes, url/form parameters and/or dependence on cookies.  A date/time-based encoded value basically performs the same exact function without the session/application memory requirements (and problems) and can easily be used over multiple servers (ie, a comment engine that posts to a third-party server.)</p><p>Again, if there are any hickups in the server, both session and application variables will be cleared.  If they expire within 20 minutes and the user is still composing their message, please ensure that their message is reposted so they don't have to hit their back button.  (I usually compose my messages in a separate text editor and then copy-and-paste to the webform in case there are any posting problems and I need to repost.)</p><p>Adding the IP is not a bad idea, but some ISPs (like AOL) change the IP address of the user mid-session.  I would only integrate IP restrictions to a targeted audience when I know for a fact that their IP addresses will not change (ie, enabling a remotely hosted application to work only for certain employees if they are accessing from the office IP class.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678670">12</a> by sal
		posted on 4/3/2008 at 2:11 AM
		</div>
		<div class="comment_text"><p>Interesting comments...</p><p>But one question on your initial post Ray? I noticed you compared "&lt;cfif hash(form.captcha) neq form.captchaHash&gt;"... by putting a cfimage within a cfform tag does that automagically become part of the form struct? I'm not following where you set the form.captcha?</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678667">13</a> by sal
		posted on 4/3/2008 at 2:12 AM
		</div>
		<div class="comment_text"><p>oops.</p><p>nevermind...</p><p>/banging head...</p><p>sorry man. hah!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678668">14</a> by Timothy Farrar
		posted on 4/3/2008 at 3:36 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>What release of cf8 are you running? I tried the captcha with the word hello. It told me I needed the dimmensions 130 width, and then a height of 35. I entered these dimensions, and it worked. Just want to make sure what I am working on will work on other servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678669">15</a> by Raymond Camden
		posted on 4/3/2008 at 4:51 AM
		</div>
		<div class="comment_text"><p>Technically I can't talk about the version of CF I'm running. But I'll test again on my CF8 box. I distinctly remember this odd error issue - where I had to go one more on the width then what the error told me.</p><p>Either way - it's a DARN nice helpful message to have.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678671">16</a> by Raymond Camden
		posted on 4/3/2008 at 5:01 AM
		</div>
		<div class="comment_text"><p>sal - glad you got it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678672">17</a> by dan plesse
		posted on 4/7/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>I just added</p><p>&lt;cfimage <br>       action="captcha" <br>       height="60" <br>       width="200" <br>       text="#session.whatWasIt#" <br>       difficulty="low" <br>       fonts="verdana,arial,times new roman,courier" <br>       fontsize="15"   /&gt;</p><p>to my &lt;cfform&gt; and the image did not show. I am using CF 8.0.1 too. Can you believe that. I wrote to Ben Forta too about this.</p><p>Code:</p><p>&lt;cfformgroup type="vertical" label="Step 4 - Human or Robot check "&gt;</p><p>    &lt;cfinput type="text" name="captcha_test"  value="" size="7" /&gt;<br>    &lt;cfimage <br>       action="captcha" <br>       height="60" <br>       width="200" <br>       text="#session.whatWasIt#" <br>       difficulty="low" <br>       fonts="verdana,arial,times new roman,courier" <br>       fontsize="15"   /&gt;</p><p>  &lt;/cfformgroup&gt; thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678675">18</a> by Raymond Camden
		posted on 4/7/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>If you view source, do you see an &lt;IMG&gt; tag where the captcha should be?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678673">19</a> by Hey
		posted on 4/8/2008 at 4:51 PM
		</div>
		<div class="comment_text"><p>I placed your code in, and on the validation of the form.captcha and the hash: &lt;cfif hash(form.captcha) neq form.captchaHash&gt;</p><p>I receive these values:</p><p>Form: 8B8C20ABED3E28B960ABD3FC127A83BF</p><p>Hash: 5E47596628F59DF0AB12A8C2B9A83278</p><p>But I entered in the text in the image correctly?</p><p>I guess I'm missing something</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678674">20</a> by Raymond Camden
		posted on 4/8/2008 at 5:20 PM
		</div>
		<div class="comment_text"><p>@Hey - not sure what to tell you - do you have it online anywhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678678">21</a> by asa
		posted on 4/10/2008 at 2:53 AM
		</div>
		<div class="comment_text"><p>If i use James Moberg/Ray's method to limit a captcha's life, what's to stop a spammer from using the same captcha a million times before it expires? If there is a form field with the captcha hash in it then a spammer could solve it once and then submit the form a million times using the same hashed captcha and solved captcha.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678676">22</a> by James Moberg
		posted on 4/10/2008 at 3:22 AM
		</div>
		<div class="comment_text"><p>What's to stop a spammer?  Nothing.  But a spambot won't post thousands of posts within a small amount of time in fears that it may raise an alarm or provide too easy of logfile to review.</p><p>If you want to add another level of security, you could use an encoded hash and additionally include their IP address into it.  This wouldn't stop a spammer from posting to the page multiple times in a short period of time from the same IP, but it would stop the profiling and returning from multiple spambots through proxies and compromised servers.</p><p>I've also been using Project HoneyPot to identify compromised IP addresses and post a special message for anyone trying to post from known IPs.  Think of it as a DNS blacklist for abusive visitors.<br><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FDNSBL%3AFbo_lX3At6HIZrCuhj-B8wpiBek&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/DNSBL">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678677">23</a> by James Moberg
		posted on 4/10/2008 at 3:38 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I just noticed that when "asa" posted, that the "from" and "return-path" email address on the subscribed message was listed as his.  This means that his personal email address has been exposed and that mine is also sent to anyone that subscribes to this post.  This also means that bounces will go to him.</p><p>There is a problem with this... I have Sender Policy Framework (SPF) configured for third-party mailservers to not accept any email that is not sent from my mail server.  To deal with this, please modify your CFMAIL tag as follows:<br>from="submitter@email.com" failto="blog@coldfusionjedi.com"<br>... or you could use your email address in both places (from/failto) to protect the privacy of users who post on your forums.</p><p>For more on SPF, go to:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.openspf.org%2F%3AMY-aTTMb5LZ3cQkfoeADlPnyte0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.openspf.org/">http://www.openspf.org/</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FSender_Policy_Framework%3AUB8CH5X23nC5DpwxN1mxW9b5BpE&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Sender_Policy_Framework">http://en.wikipedia.org/wik...</a></p><p>Also, for bypassing anti-spam filters, read this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.list-unsubscribe.com%2F%3AV4_5l8dJF-sxN0SXPIY1awAc2yc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.list-unsubscribe.com/">http://www.list-unsubscribe...</a><br>and add the following:<br>&lt;CFMAILPARAM Name="List-Unsubscribe" Value="&lt;<a href="http://disq.us/url?url=mailto%3Aunsubscribe%40email.com%3AoMImoXQXmgRch3da9UlILyl7_2Q&amp;cuid=3321886" rel="nofollow noopener" title="mailto:unsubscribe@email.com">mailto:unsubscribe@email.com</a>&gt;"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678679">24</a> by smee
		posted on 7/8/2008 at 2:23 AM
		</div>
		<div class="comment_text"><p>Everything works fine EXPECT for the</p><p>&lt;cfif hash(form.captcha) neq form.captchaHash&gt;<br>&lt;cfset error = error &amp; "You did not enter the right text. Are you a spammer?&lt;br /&gt;"&gt;<br>&lt;/cfif&gt;</p><p>I have the first part of the section as an include file so I could reuse. When I tried to add it the &lt;cfif hash&gt; statement on the actually page, it breaks. What am I doing wrong. I have done your code on other website and it works great. I did it as an include files. Trying to get it working on the forum is harder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678680">25</a> by Raymond Camden
		posted on 7/8/2008 at 5:09 AM
		</div>
		<div class="comment_text"><p>Well I'd need to see the entire application. If the original code works for you and your modified code does not, then I'd consider just reverting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678682">26</a> by Superfly
		posted on 10/24/2009 at 5:02 PM
		</div>
		<div class="comment_text"><p>Ray, James,<br>thank you for depping it to the best here.</p><p>As you call yourself "quick and dirty" these threads, I'd like to submit one that could be safe enough for non higly exposed web sites.</p><p>I use CF regular expression validation to control the captcha verification. I think that the fact CF will write the value within a script that add extra characters ('(','/',')') will be *quite* a 1st level protection acceptable method.</p><p>The main advantage is that using CF validating JS scripts, the form will not be submitted and we don't have to repopulate values that were previously given by the user, which is quite simple for simple texts inputs (as you did well), but can be a real headache if we have to manage selects, grids or file uploads.</p><p>Once again, we have to balance between ease of (re-)use, I choosed ease ... for now (until I got spammed despite of this ?).</p><p>I made a little &amp; simple actor (fusebox like) that I simply &lt;cfinclude&gt; in any form I want to be captcha controlled :</p><p>*** code bellow ****<br>&lt;cfprocessingdirective pageencoding="utf-8"&gt;<br>&lt;cffunction name="makeRandomString" returntype="string" output="false"&gt;<br>    &lt;cfset var chars = "12345689abdefghjnqrtyABCDEFGHKLMNPQRSTUVWXYZ"&gt;&lt;!---do not use both 7 and 1 if you're french or your site intends french users; we are not familliar with '7' without the small horizontal bar in the middle of the vertical part  ---&gt;<br>    &lt;cfset var length = 5&gt;<br>    &lt;cfset var result = ""&gt;<br>    &lt;cfset var i = ""&gt;<br>    &lt;cfset var char = ""&gt;</p><p>    &lt;cfscript&gt;<br>    for(i=1; i &lt;= length; i++) {<br>        char = mid(chars, randRange(1, len(chars)),1);<br>        result&amp;=char;<br>    }<br>    &lt;/cfscript&gt;<br>   &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>&lt;div id="captcha"&gt;</p><p>&lt;cfoutput&gt;<br>	&lt;cfset captcha = makeRandomString()&gt;<br>	&lt;span class="required"&gt;Anti-spam&lt;/span&gt;&lt;br /&gt;<br>	Please write these characters bellow<br>	&lt;cfimage action="captcha" width="180" height="40" text="#captcha#" fonts="verdana,arial,system" difficulty="medium"&gt;&lt;br&gt;<br>	&lt;label for="doloveYourmom"&gt;Vérification&lt;/label&gt;<br>	&lt;cfinput type="text" name="doloveYourmom" id="ilfautbiencontroler" maxlength="6" style="width:100px;" validate="regular_expression" pattern="(#captcha#)" message="Characters does not match" &gt; &lt;!--- do not name the input field with input or captcha string like. Do not leave this comment either ! ---&gt;<br>&lt;/cfoutput&gt;<br>&lt;/div&gt;<br>*** end of code ***</p><p>I've also thought about another solution, but time is missing: Instead of validating the captcha string on submit, we could set up a cfc binded field that will indicate in real time if the input of the user meets the captcha (I.e an image close to the input field that displays red 'non matchning' or green 'matching'). Moreover, this cfc could enable or disable the submit button, regading input and captcha match.<br>You're the experts ... maybe you could give this a try ?</p><p>Again, thanks for this (and the rest) !<br>Antoine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678681">27</a> by Superfly
		posted on 10/24/2009 at 5:07 PM
		</div>
		<div class="comment_text"><p>sorry, tranlating issue within the Cfinput field, both ID and Nem should match, as in :<br>&lt;cfinput type="text" name="doloveYourmom" id="doloveYourmom" maxlength="6" style="width:100px;" validate="regular_expression" pattern="(#captcha#)" message="Characters does not match" &gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678683">28</a> by Andy
		posted on 3/15/2011 at 1:33 AM
		</div>
		<div class="comment_text"><p>This is a great tip!  one mor question - how do you validate a radial button in this form?  thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678684">29</a> by jack
		posted on 5/10/2011 at 3:35 AM
		</div>
		<div class="comment_text"><p>Thank you for this update to your original article!  btw, I love your little interstitial jokes! they literally made me LOL!</p></div>
	</div>
</div>
		