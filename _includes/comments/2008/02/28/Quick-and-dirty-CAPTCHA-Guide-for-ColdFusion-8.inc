
<div class="comment" id="c_1713677611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677611">1</a> by Will
		posted on 2/29/2008 at 6:32 PM
		</div>
		<div class="comment_text"><p>Hey Ray, we are trying to use a CAPTCHA in our application but for various reason we are writing the file to a location before using it on screen. Most CF tags that give an option to display something or write to a destination, do one OR the other. It seems with cfimage and CAPTCHA, even if you specify a destination attribute it ALSO tries to write it to the browser. For example, if I put destination="c:\image.jpg", it writes the file to the c drive then renders &lt;img src="c:\image.jpg"&gt; in the final HTML. Not at all what I would expect from the documentation or past experience with other CF tags. Would you consider that normal behavior or a bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677609">2</a> by Raymond Camden
		posted on 2/29/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>Confirmed. You can fix this by wrapping the tag in cfsavecontent. That will suppress it. I'm filing a bug report now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677616">3</a> by Will
		posted on 2/29/2008 at 7:34 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray - for both the fix and filing the bug. You're a life saver!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677620">4</a> by Bob
		posted on 5/6/2008 at 6:49 PM
		</div>
		<div class="comment_text"><p>Very helpful.<br>May I ask why you use the ucase function when validating in this line:</p><p>&lt;cfif hash(ucase(form.captcha)) neq form.captchaHash&gt;</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677612">5</a> by Raymond Camden
		posted on 5/6/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>I've had issues with case and hashes before, so this just removes it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677614">6</a> by Nate
		posted on 5/9/2008 at 2:34 AM
		</div>
		<div class="comment_text"><p>Occasionally the captcha image has an icon character in it, like a skull and crossbones or the international "rewind" symbol (like &lt;&lt;). Is there a way to restrict it to just numbers and letters? I don't expect my site users to know the hotkeys for dingbat symbols, etc. :-)</p><p>I put an example up at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.centralscene.com%2Fcaptcha%2Fcaptcha.png%3AcjFUw4v8EVrwDSwY5d8cmCrzwkE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.centralscene.com/captcha/captcha.png">http://www.centralscene.com...</a> (keyboard icon).</p><p>Thanks for the great example, and the help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677613">7</a> by Raymond Camden
		posted on 5/9/2008 at 5:36 PM
		</div>
		<div class="comment_text"><p>@Nate:</p><p>You can control the text since - well - you have to. But what you are seeing is the font being one of the symbol fonts. CF's captcha support lets you specify fonts. I didn't do that in my example as I wanted the code to work on both Macs and Windows machines. In a real production environment you would want to specify a few fonts that you know folks can read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677606">8</a> by Eric
		posted on 8/10/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>Working on adding this to my website, but I get an error on the random character generator script.</p><p>   &lt;cfscript&gt;<br>   for(i=1; i &lt;= length; i++) {<br>      char = mid(chars, randRange(1, len(chars)),1);<br>      result&amp;=char;<br>   }<br>   &lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677607">9</a> by Raymond Camden
		posted on 8/10/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>Eric - are you sure you are using CF8? What error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677610">10</a> by Radek
		posted on 9/23/2008 at 2:53 AM
		</div>
		<div class="comment_text"><p>Hi I tried this and it works great, the problem what I have is  I have CF 7 and want to make it work but of course it is throwing an error about the cfscript, is there a way or something to make it workunder CF 7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677618">11</a> by Raymond Camden
		posted on 9/23/2008 at 4:58 AM
		</div>
		<div class="comment_text"><p>Change the &lt;= to lte.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677608">12</a> by farshid
		posted on 10/13/2008 at 11:14 AM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond,</p><p>Your solution is very user friend and cool,</p><p>Good luck in your life,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677617">13</a> by Mike Pacella
		posted on 1/13/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Excellent post.  I used a lot of your code as the basis for my captcha functionality.</p><p>One comment, though.  What about the problem of a user who submits 1 for your form.captcha field, and then the hash of 1, (which is c4ca4238a0b923820dcc509a6f75849b) for the form.captchaHash field?  Way to easy to break that IMO.</p><p>In order to fix this, one thing we've done is concatenated a secret suffix to the captcha text before hashing it.  For example:</p><p>Let the secretSuffix = "iHateRobots".<br>Let the randomly generated string = "ABCDE";</p><p>We would now hash ("ABCDEiHateRobots") and store that in the form.captchaHash field.  When checking for validity simply:</p><p>Let the user input = "ABCDE";</p><p>Hash the userInput &amp; secretSuffix, check against your form.captchaHash field, and this will protect you against that basic CAPTCHA bypass.</p><p>With all of that having been said, this post is excellent and superbly captures the basics of creating a captcha.  Nice job, and thanks again for the post!</p><p>- Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677615">14</a> by Raymond Camden
		posted on 1/13/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>Mike, nope, that is precisely the biggest issue with my code here (and I think someone may have raised it already). What you are doing is referred to as adding a salt (I believe) and would be a smart idea. You could store that salt in the session which is another way to help block a robot as they will not (normally) have a session. You would want the salt to be random as well. Ie, onSessionStart, session.salt = random.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677624">15</a> by Mike Pacella
		posted on 1/13/2009 at 2:08 AM
		</div>
		<div class="comment_text"><p>Even better!  Random session salt versus one globally concatenated suffix would work perfectly for us. So simple, yet so very powerful.  Thanks again, and keep up the great posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677625">16</a> by Beaglis
		posted on 1/15/2009 at 12:39 AM
		</div>
		<div class="comment_text"><p>captcha doesn't display in Palm Blazer v4.5 (Treo 700p).  Anybody have any experience with this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677629">17</a> by Beaglis
		posted on 1/15/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>I found out the problem with Captcha and Blazer.  CFimage generates a PNG file that has 'layers'.  If I open the generated captcha image in photoshop and the 'flaten' the image and get rid of the layer and then re-save, then I can view the image in Blazer.</p><p>Anyone know how to make CF generate a captcha png without layers? Or some workaround to this?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677626">18</a> by Beaglis
		posted on 1/15/2009 at 1:32 AM
		</div>
		<div class="comment_text"><p>I found a workaround...</p><p>I save the captcha to a destination (use cfsavecontent as mentioned above), then I convert the image format to jpg, then I display the image with IMG tag.</p><p>Converting to JPG removes the layers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677627">19</a> by levensok
		posted on 1/22/2009 at 4:37 AM
		</div>
		<div class="comment_text"><p>This was an excellent tutorial!  I did have one problem with implementation.  The captcha cfimage displays fine for about 5 minutes after restarting the app server, then intermittantly will not display unless the page is refreshed a bunch of times.  Here's my example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fv3.lightspeedvt.net%2Febay_reg%2Fregister.cfm%3A-i4yNaHRi9efXoSUt0uXbjyt9-s&amp;cuid=3321886" rel="nofollow noopener" title="http://v3.lightspeedvt.net/ebay_reg/register.cfm">http://v3.lightspeedvt.net/...</a></p><p>If you refresh the page a few time, the captcha image will by displayed and then broken seemingly at random.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677628">20</a> by Raymond Camden
		posted on 1/22/2009 at 6:59 AM
		</div>
		<div class="comment_text"><p>I wonder if it is a bad font? If you did not specify the fonts attribute, the font is going to be random. So maybe specify a font that works, and see if it works well 100% of the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677630">21</a> by Andrew
		posted on 2/6/2009 at 5:47 PM
		</div>
		<div class="comment_text"><p>Seems like 'levensok' gave up, example url does not have captcha on it any more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677631">22</a> by Geoff
		posted on 2/19/2009 at 5:14 AM
		</div>
		<div class="comment_text"><p>In addition to the server side checks on the captcha you can use javascript on the client side to check it before allowing submission of the form. There are two hashing libraries for JS available, at least. I'm using SHA-256 in CF and the JS library that offers the same.</p><p>This has the advantage of alerting the user before submission that they've got it wrong, which is less stressful than waiting for a response to find out and having the characters change all over again.</p><p>It's not going to do much in the way of preventing brute force attacks etc as they'll be posting direct, but it does mitigate some of the negative effects on the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677635">23</a> by Lucas Sá
		posted on 3/13/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>I guess this is not a good method to block flooders. Indeed, it could block a spammer bot if the process doesn't start by a human. For example, if a man read a captcha, he (actually his robot) will be able to post as many things as he want (including in other resources that requires the same captcha), since the code has the Hash in a input hidden, so he could use the same hash (which he knows the captcha) for every post.</p><p>A good solution would be save the hash in Session scope, but it has its limitations. It impedes the user to access two pages that requires captcha simultaneously, once the first captcha would be "nullified" by the second.</p><p>In this case, I would suggest a mix between both solutions, creating an associative array (map, or a structure in the case of CF) of captchas generated for that user and store it in Session scope with the hash and the value of captchas. Also, put the hash in a hidden field as in this example and verify that hash in the "table" of captchas when user submits. If captcha matches the hash, delete its array register.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677634">24</a> by Sam
		posted on 5/27/2009 at 2:46 PM
		</div>
		<div class="comment_text"><p>Has anybody thought about taking this a step further with regards to accessibility?</p><p>Standard captcha will cause problems for the blind and partially sighted. There is some good information about this on the W3C website;<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2F2005%2FNOTE-turingtest-20051123%2F%3ApgKuaASQWk7DPEa_JolzLhK0VcU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/2005/NOTE-turingtest-20051123/">http://www.w3.org/TR/2005/N...</a></p><p>Although these users make up a very small percentage of our visits, some websites need to incorporate alternatives to meet guidelines and to ensure nobody is excluded.</p><p>I have not seen an example yet of anybody using text to speech with coldfusion.</p><p>Your thoughts and ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677633">25</a> by Raymond Camden
		posted on 5/27/2009 at 4:19 PM
		</div>
		<div class="comment_text"><p>There is a Java project, FreeTTS, that could work. I'm looking at this today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677632">26</a> by peters
		posted on 6/3/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>Why dont we use encrypt and decrypt ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677639">27</a> by Ron
		posted on 6/12/2009 at 6:39 PM
		</div>
		<div class="comment_text"><p>I am randomly getting an error when the page first loads.</p><p>"Cannot find the config file. configFile=..."</p><p>If you refresh the page, then it's fine, but its the initial load of the page.</p><p>Other than that, great script!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677637">28</a> by Raymond Camden
		posted on 6/12/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Um, what configFile? My demo here doesn't make use of it. Are you using my code here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677636">29</a> by Ron
		posted on 6/12/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Oh wow! Thanks. That made me go back and compare code. It's a leftover from the previous captcha script I was using before I found yours.</p><p>Thanks for straightening me out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677638">30</a> by Sam
		posted on 6/15/2009 at 4:09 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Did you have any success with the FreeTTS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677640">31</a> by Raymond Camden
		posted on 6/15/2009 at 5:30 PM
		</div>
		<div class="comment_text"><p>Yep: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F5%2F29%2FGenerating-Speech-with-ColdFusion-and-Java%3Ag32iaqzlisT5zxuWHumcLW9jjuk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/5/29/Generating-Speech-with-ColdFusion-and-Java">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677644">32</a> by Jeff
		posted on 6/24/2009 at 6:49 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Thanks for the post. Works great!</p><p>I find the captcha to always be legible but, is there a simple solution to provide a refresh link that doesn't clear the filled form fields?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677642">33</a> by Sam
		posted on 6/24/2009 at 11:56 AM
		</div>
		<div class="comment_text"><p>Hi Jeff,</p><p>I use a JavaScript method;</p><p>&lt;a href="javascript:location.reload(false)"&gt;Refresh&lt;/a&gt;</p><p>You can see this in action here;</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.stratford.gov.uk%2Flabs%2Ffeedback%2Fthickbox%2Fcaptcha.cfm%3AKsT58320JxpoRt27NaWg59-ZbbE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stratford.gov.uk/labs/feedback/thickbox/captcha.cfm">http://www.stratford.gov.uk...</a></p><p>Hope this helps!</p><p>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677641">34</a> by Sam
		posted on 6/24/2009 at 12:04 PM
		</div>
		<div class="comment_text"><p>I've realised the method I described above will not work in IE... the location.reload acts just like a browser refresh and IE will clear out the form fields annoyingly!</p><p>Thinking caps back on!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677645">35</a> by Jeff
		posted on 6/24/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>Thanks Sam! I have another question to all... Is there a simple way to add email validation to this form? I like the idea of not using JavaScript to handle error messages but and pretty new to CF. I am using the code pretty much as is above and noticed that as long as the field isn't empty any value can be passed. Any help is appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677646">36</a> by Ron
		posted on 6/25/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>Add this to the &lt;cfif isDefined("form.send")&gt;</p><p>&lt;cfif not len(trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>)) or not isValid("email", <a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>)&gt;<br>&lt;cfset error = error &amp; "Please include a valid email address!&lt;br&gt;"&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677643">37</a> by rencontres
		posted on 6/25/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>nobody answered me about encrypt and decrypt why don't we use them to pass the captcha ? it looks better than hash</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677647">38</a> by Jeff
		posted on 6/25/2009 at 12:35 AM
		</div>
		<div class="comment_text"><p>Thanks for that solution Ron! Worked like a charm!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677651">39</a> by Holly Jones
		posted on 7/7/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>Thanks for the example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677659">40</a> by Jeff
		posted on 7/8/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>I need some help! I had this working fine and now it's just not working. After filling in the form, the form is still visible and the text "Correct these errors" is still showing with no error messages. I am using the code exactly as is. Does anyone have any ideas? Here is the site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.overdriveevent.com%2Fcontact-us.cfm%3AXZj8gENLZTzTBy3SRQ02VU-XDdk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.overdriveevent.com/contact-us.cfm">http://www.overdriveevent.c...</a></p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677653">41</a> by Raymond Camden
		posted on 7/8/2009 at 2:09 AM
		</div>
		<div class="comment_text"><p>I don't believe you are using the code exactly as is. I bet you are missing:</p><p> &lt;cfif errors is ""&gt;<br>      &lt;!--- do something here ---&gt;<br>      &lt;cfset showForm = false&gt;<br>   &lt;/cfif&gt;</p><p>or you are missing the &lt;cfif showForm&gt; aroudn the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677654">42</a> by Mike H
		posted on 7/9/2009 at 4:48 PM
		</div>
		<div class="comment_text"><p>I think levensok's issue might have been with load balancing.  cfimage writes the image to disk before displaying it.  This means the image could be written to one server but the second server is trying to display it which obviously won't work.  It seems the only way to solve this is to use sticky sessions, which is not an option for me.  I guess I could use a folder that all the servers have access to but then I need to deal with the cleanup.  Not an option I'd like to use.  Has anyone else figured out a way around this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677649">43</a> by Raymond Camden
		posted on 7/9/2009 at 4:58 PM
		</div>
		<div class="comment_text"><p>Unfortunately there is no easy way. The captcha form of cfimage handles both randomly placing the text, saving the file, and generating HTML. You can't make it not do the HTML.</p><p>You can, of course, make your own image, but then you need to be responsible for adding the text yourself (which means picking the random font, position, etc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677652">44</a> by Jackie
		posted on 9/14/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>I'm trying to use the captcha with CF8, but the hashed value for the form.captcha is different from the from to the submit side of the script, thus, the submit fails every time.  What gives?  Does nobody else have this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677650">45</a> by jason
		posted on 10/27/2009 at 6:04 PM
		</div>
		<div class="comment_text"><p>I'm trying to implement this but am having problems.. my image is not showing up. I stripped it from my code and posted your code from the example above verbatim and the image shows broken... when I look at the properties... i see the image as</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmydomain.com%2FCFFileServlet%2F_cf_captcha%2F_captcha_img-1287068910168207643.png%3AXLejSd6LS0DNeiAm4I5skFjzLAA&amp;cuid=3321886" rel="nofollow noopener" title="mydomain.com/CFFileServlet/_cf_captcha/_captcha_img-1287068910168207643.png">mydomain.com/CFFileServlet/...</a></p><p>Is this a server setting that is incorrect? While I'm pretty good at coding CF.. I'm a bit clueless when it comes to server settings like this. I am using CF8 as well.</p><p>Thanks and great tutorial... Nice an easy... I just need to get mine to work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677655">46</a> by Raymond Camden
		posted on 10/27/2009 at 6:05 PM
		</div>
		<div class="comment_text"><p>Capcha's make use of a dynamic image hosted directly by the CF server, so yes, that image does make sense. Can you share your code, and the URL if it is on a public server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677656">47</a> by jason
		posted on 10/27/2009 at 6:16 PM
		</div>
		<div class="comment_text"><p>Ray,<br>My code is the EXACT code, with nothing else on it as your page above...<br>I just turned on robust reporting and see it's messing with one of my components it seems. I'm even more lost now that I see the error.. it's usually opposite!</p><p>The sample form is located at:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hermanscentral.com%2Frfq%2Findex3.cfm%3AWyL3beD0AxrSmrT0bFv7CsJAsKY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hermanscentral.com/rfq/index3.cfm">http://www.hermanscentral.c...</a></p><p>I GREATLY appreciate the help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677658">48</a> by Raymond Camden
		posted on 10/27/2009 at 6:24 PM
		</div>
		<div class="comment_text"><p>Looks like something not configured right. Do you have a 404 handler for the server? Disable it - just temporarily - and see if that corrects it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677660">49</a> by jason
		posted on 10/27/2009 at 6:46 PM
		</div>
		<div class="comment_text"><p>I'm sorry I wasn't clear.. I had said I already cleared out my custom 404.. so in cf admin on Missing Template Handler and Site-Wide Error Handler I have nothing entered. I did have a custom 404 that cleans misc strings and such.. and then attempts to find products or departments related and serve up a related result for 404s....</p><p>Turns out this was triggering the custom 404.cfm BUT on removing that 404.. (just removing all fancy code and putting 404 on that 404.cfm) the image still doesn't pop up.</p><p>Any other ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677657">50</a> by jason
		posted on 10/27/2009 at 8:14 PM
		</div>
		<div class="comment_text"><p>Ray - Thanks again for your help.. for those that come across the same issue.. it was a matter of mapping a virtual directory..</p><p>so create a virtual directory called CFFileServlet<br>Map it to (your coldfusion install) / tmpCache/CFFileServlet and there you have it.</p><p>You rule an thanks for the tutorial!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677661">51</a> by salvatore fusto
		posted on 3/17/2010 at 8:29 PM
		</div>
		<div class="comment_text"><p>Ray,<br>instead of putting the captcha string (plain or hash'ed) in a form field, i use to put it in the session scope, so its value is not in any way transferred to browser: at submit i get my captcha from session and compare ot with the submited value. What do you think about?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677663">52</a> by Raymond Camden
		posted on 3/17/2010 at 8:35 PM
		</div>
		<div class="comment_text"><p>That is better. I avoided the session scope because I wanted this demo to be as simple as possible. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677664">53</a> by Reshma
		posted on 5/4/2010 at 11:43 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I get a java.lang.reflect.InvocationTargetException exception for the following line in the cfc file:<br>var fileOutputStream = createObject("java", "java.io.FileOutputStream").init(arguments.filePath);</p><p>Please can you help me out?</p><p>Thanks,<br>Reshma</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677665">54</a> by Reshma
		posted on 5/4/2010 at 11:48 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I just wanted to mention that the version of CF that we are using is CF 6.</p><p>Thanks,<br>Reshma</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677666">55</a> by Raymond Camden
		posted on 5/4/2010 at 3:09 PM
		</div>
		<div class="comment_text"><p>I assume you are talking about Lyla, not the built in captcha in CF8? If so - it may simple be that Lyla doesn't support CF6. You should contact them to see. I checked their FAQ and saw mention of CF7 functionality, so that is probably it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677668">56</a> by Reshma
		posted on 5/7/2010 at 5:16 PM
		</div>
		<div class="comment_text"><p>Thank you Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677667">57</a> by Aaron H
		posted on 9/9/2010 at 5:55 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I was wondering if you have had to integrate this into an application already using jQuery for form validation. I did further research and it seems that doing an ajax post to validate would not be a secure option. Any thoughts on this? Thanks.</p><p>Sincerely,<br>Aaron H.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677669">58</a> by Raymond Camden
		posted on 9/9/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>I've not done this with jQuery validation yet. If you stored the hash in a session scope then it should be ok to do.</p><p>I'll put it on my list. I've done a few blog entries already on the main jQuery validation library, and this would be a good followup. (Warning, I'll probably forget to post back here, so check the blog daily. Or every hour. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677670">59</a> by Jeremy&amp;aposs Dad
		posted on 3/4/2011 at 12:12 PM
		</div>
		<div class="comment_text"><p>Is there a way to refresh the cfcaptcha image without refreshing the whole page, in case people can't identify the text and want to try a new image?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677671">60</a> by Raymond Camden
		posted on 3/4/2011 at 2:12 PM
		</div>
		<div class="comment_text"><p>It is possible. You would need to use Ajax to reload the image and ensure you use the right validation on saving. If you remind me, I can try to whip up a demo of this next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677672">61</a> by Peters
		posted on 3/5/2011 at 1:13 AM
		</div>
		<div class="comment_text"><p>I use another system. I check if the field is ok<br>if the field is ok, it is in hidden and the guy does not have to refill it. If there is 0 error, the form is processed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677674">62</a> by Raymond Camden
		posted on 3/15/2011 at 7:26 AM
		</div>
		<div class="comment_text"><p>@Jeremy's Dad: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F3%2F14%2FUsing-CAPTCHA-in-ColdFusion-with-reload-powered-by-jQuery%3AKkmTOgZIXhIfgKVU2wiB33VoLa8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/3/14/Using-CAPTCHA-in-ColdFusion-with-reload-powered-by-jQuery">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677675">63</a> by Sean Harrison
		posted on 3/15/2011 at 5:02 PM
		</div>
		<div class="comment_text"><p>Why not skip the hashing altogether, and just write the string to a session var before it renders, then check it on the far side?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677677">64</a> by Raymond Camden
		posted on 3/15/2011 at 5:05 PM
		</div>
		<div class="comment_text"><p>Sean - for this demo I wanted something as simple as possible. Therefore, I did not assume the Session scope was enabled. If you view the new version I linked to above, one of the changes I made was to use the Session scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677681">65</a> by JP
		posted on 3/15/2011 at 6:14 PM
		</div>
		<div class="comment_text"><p>I've had issues with spam bots finding the word "captcha," and doing a really good job at being able to read these captcha images. To partly combat it, I suggest not using the word "captcha."</p><p>I also pass an encrypted URL param based on a session variable to the captcha.cfm code. If the decryption fails, the captcha.cfm code has detected a spam bot. For example: (in the form code)</p><p>&lt;cfset sessionID = Session.sessionID&gt;<br>&lt;cfset appID = getAppID ()&gt; &lt;!--- you would write getAppID () ---&gt;<br>&lt;cfset enc = Encrypt (sessionID, appID, "CFMX_COMPAT", "hex");<br>&lt;img src="skinnypig.cfm?sid=#somevalue#"&gt;</p><p>NOTE: skinnypig.cfm replaces captcha.cfm, and you would write getAppID (), specific to your application framework.</p><p>Then in your captcha.cfm code:</p><p>&lt;cfparam name="URL.sid" default=""&gt;<br>&lt;cfset sessionID = Session.sessionID&gt;<br>&lt;cfset appID = getAppID ()&gt;<br>&lt;cfset encSessionID = Decrypt (URL.sid, appID, "CFMX_COMPAT", "hex")&gt;<br>&lt;cfset flValid = true&gt;<br>&lt;cfif sessionID NEQ encSessionID&gt;<br>	&lt;cfset flValid = true&gt;<br>&lt;/cfif&gt;</p><p>if the decryption fails, you would store some constant value, such as "SPAMBOT-DETECTED" in your session variable. When your form is submitted, you can check to see if the captcha code detected a spambot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677678">66</a> by Michael Kane
		posted on 4/12/2011 at 1:24 AM
		</div>
		<div class="comment_text"><p>I can't get the image to load, under CF 9.0.1. The source shows the path to the image as "/CFFileServlet/_cf_captcha/_captcha_img-6722633845177586041.png" but all I see is a red x.</p><p>I found discussion of the same problem at <a href="http://disq.us/url?url=http%3A%2F%2Fforums.crystaltech.com%2Findex.php%3Ftopic%3D34384.0%3AQnObZxV03YhWeq0I6hE-g3Fzzpg&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.crystaltech.com/index.php?topic=34384.0">http://forums.crystaltech.c...</a> but the answer seems to be that in CF 9 you have to save the image and then have the img tag refer to the file saved.</p><p>Is that the case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677679">67</a> by Raymond Camden
		posted on 4/12/2011 at 1:28 AM
		</div>
		<div class="comment_text"><p>Nope, it is not the case. Most likely something was misconfigured on the web server. I assume you are using Crystaltech, right? If so - that's a bug in their implementation, and if they are requiring this, it is their fault.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677680">68</a> by Michael Kane
		posted on 4/12/2011 at 1:47 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray. I am not using CrystalTech, never even heard of it. I am the Cold Fusion server admin, I'm working on an internal DEV server, Windows 2003 VM, that our central IT folks built but which I administer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677682">69</a> by Raymond Camden
		posted on 4/12/2011 at 1:49 AM
		</div>
		<div class="comment_text"><p>Hmm. Any particular errors in IIS logs? Perhaps do a quick reinstall to ensure web mappings didn't get borked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677684">70</a> by Michael Kane
		posted on 4/12/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>Ray, the problem seems to be the server configuration. I put a simple test file on my internal DEV, QA, and PROD servers, and it does not work, but the same file works fine on my server in our external DMZ. Now I just have to figure out what is causing the problem. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677686">71</a> by Bill Horvath
		posted on 4/15/2011 at 3:24 AM
		</div>
		<div class="comment_text"><p>Ray, for the record, Crystaltech no longer has the CF 9 update on any of their shared servers... much to my chagrin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677685">72</a> by jaylon j
		posted on 4/19/2011 at 11:37 PM
		</div>
		<div class="comment_text"><p>new developer here, how would set this up to send the comments to my email?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677687">73</a> by Raymond Camden
		posted on 4/19/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>Just use the cfmail tag. Check the docs. It's pretty easy to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677689">74</a> by Susan Hansen
		posted on 7/26/2011 at 2:43 AM
		</div>
		<div class="comment_text"><p>Is it better to use this than to cfformprotect? We've used that on our forms and been pretty happy with it. I really don't want to do captcha if I can help it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677688">75</a> by Raymond Camden
		posted on 7/27/2011 at 6:08 AM
		</div>
		<div class="comment_text"><p>I'd say no. cfformprotect is like the Galactus of spam protection. I use it here. It's a bit more involved setup wise, and some of the services it use has costs for commercial usage (I believe), so CAPTCHA is still something you will need from time to time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677690">76</a> by David Jacobson
		posted on 1/5/2013 at 5:23 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Is there a way to validate the hash via javascript?  If so, can you give me an example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677692">77</a> by Raymond Camden
		posted on 1/5/2013 at 9:04 PM
		</div>
		<div class="comment_text"><p>If you use the modified version that stores the CAPTCHA in the session (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F3%2F14%2FUsing-CAPTCHA-in-ColdFusion-with-reload-powered-by-jQuery%29%3A81A8txjj0O7Z7MDTxQa5wP2A3Fg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/3/14/Using-CAPTCHA-in-ColdFusion-with-reload-powered-by-jQuery)">http://www.raymondcamden.co...</a>, then you could use AJAX to hit the server and confirm if the values match.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677693">78</a> by DoctorG
		posted on 7/7/2014 at 6:38 AM
		</div>
		<div class="comment_text"><p>I'm in the process of implementing your Captcha code, not sure whether to use the session value code or the original, with the hash function. To get the image to redisplay without loosing the form data or displaying the error message, I just added a button (name=newimage) and used a cfif block around the null errors section, as follows:<br>&lt;cfif NOT isDefined("form.NewImage")&gt;   <br>    	&lt;cfif errors is ""&gt;<br>        	&lt;!--- do something here ---&gt;<br>        	&lt;cfset showForm = false&gt;<br>    	&lt;/cfif&gt;<br>    &lt;/cfif&gt; <br>I also specified the font type as serif to help differentiate letters and numbers in the image. Before I post my page, I'm wondering, since these posts are so old, is this approach still regarded as effective, or is Google's reCaptcha the standard now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677694">79</a> by Raymond Camden
		posted on 7/7/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you are asking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677696">80</a> by DoctorG
		posted on 7/7/2014 at 9:58 PM
		</div>
		<div class="comment_text"><p>Hackers and spammers have gotten more sophisticated in their ability to circumvent antispam measure such as this method based on CFIMAGE, and the code uses the word "captcha" in several instances. Some bots search for this word in order to get around the measures implemented to stop them The images used by your method may be more easily deciphered than, say, those used by reCaptcha, which I find difficult to use, myself (the images presented in the form, not the code). I was just wondering whether you still regard your method still effective given today's environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677697">81</a> by Raymond Camden
		posted on 7/7/2014 at 10:07 PM
		</div>
		<div class="comment_text"><p>Well, you may notice I don't use it here. :) Here I use cfformprotect which uses Akismet and... something else (bit busy). I do use captcha in other sites. I know it isn't perfect, but it doesn't seem to hurt either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677698">82</a> by DoctorG
		posted on 7/8/2014 at 3:46 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray. I am looking at cfformprotect as well as cfcaptcha, but I wanted a simpler approach to get something out the door more quickly. I'll see what happens .....</p></div>
	</div>
</div>
		
<div class="comment" id="c_4754582905">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_2xBsmup2Gr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4754582905">83</a> by Craig Baker
		posted on 1/12/2020 at 6:18 PM
		</div>
		<div class="comment_text"><p>Thanks for this Ray. Works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4754725656">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4754725656">84</a> (In reply to <a href="#c_4754582905">#83</a>) by Raymond Camden
		posted on 1/12/2020 at 8:37 PM
		</div>
		<div class="comment_text"><p>You are most welcome. I fixed the formatting issues.</p></div>
	</div>
</div>
		