
<div class="comment" id="c_1713739827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739827">1</a> by Doug
		posted on 3/16/2012 at 9:36 PM
		</div>
		<div class="comment_text"><p>heh.  You said, "my pee."</p><p>huhuhhuhhuhuh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739829">2</a> by Chuck S
		posted on 3/16/2012 at 10:55 PM
		</div>
		<div class="comment_text"><p>All of the IE enhancement budget was spent on television advertising.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739830">3</a> by Jim Priest
		posted on 3/16/2012 at 10:58 PM
		</div>
		<div class="comment_text"><p>Interesting!  FF correctly rendered the alert tip/box to the correct form field.</p><p>Chrome however didn't - then I noticed I had my font size jacked up slightly. Resetting my font size it displayed correctly.</p><p>FF seems to handle the font size better but not perfect.</p><p>We're getting there but it's still frustrating to see such differences in browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739832">4</a> by Justin Hansen
		posted on 3/17/2012 at 12:02 AM
		</div>
		<div class="comment_text"><p>Are they adding any of the HTML5 input validation to cfForm, cfInput, etc in CF10?</p><p>We have been a very heavy user of xForms/cfForm. The xForms solution works fantastic 99% of the time and we've customized it a lot, however, when you want to do something 'special' we have to work very hard to make it happen. I have all ready written a replacement set of custom tags that will give us the same experience. Basically wrapping cfinput... but now you are giving me ideas...  I digress to my original question....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739831">5</a> by Raymond Camden
		posted on 3/17/2012 at 12:46 AM
		</div>
		<div class="comment_text"><p>Why would they? We already support form validation via JS - so that wouldn't be necessary - and you can use html5 types (cfinput type=email) in CF10 so that should work too... although I think it forces the client side validation (I mean in JS). Basically - I would NOT recommend cfform if you want precise control over your forms. (That's my humble opinion.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739836">6</a> by Patrick Heppler
		posted on 3/17/2012 at 2:45 AM
		</div>
		<div class="comment_text"><p>Firefox accepts a@b as a valid e-mail. Bad idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739837">7</a> by Jason Fisher
		posted on 3/17/2012 at 5:03 PM
		</div>
		<div class="comment_text"><p>Interesting that 'url' will accept http://www. as well ... still, very cool to have a first cut that's JS-free.  Will definitely be looking at this in more depth for some internal apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739838">8</a> by Raymond Camden
		posted on 3/17/2012 at 7:26 PM
		</div>
		<div class="comment_text"><p>@Jason: Isn't that technically a url? <br>@Patrick: So yeah, see what Jason found. It's not going to be perfect. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739839">9</a> by Jason Fisher
		posted on 3/18/2012 at 2:48 AM
		</div>
		<div class="comment_text"><p>Yyes, I think a URL can end with a '.' according to the spec, so it would technically be valid IF 'www' were a top-level domain. So, format-wise, it might be OK, like the email example @Patrick pointed out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739841">10</a> by Patrick Heppler
		posted on 3/29/2012 at 11:26 AM
		</div>
		<div class="comment_text"><p>I played a bit with this. You can easily modify the form using firebug. Remove pattern or required attribute and just submit it w/o validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739840">11</a> by Ben Burwick
		posted on 3/29/2012 at 6:01 PM
		</div>
		<div class="comment_text"><p>@Patrick: You are correct.  If you play a bit you can defeat the validation, but modification via Firebug is possible with any client-side validation mechanism.  This is not a vulnerability introduced by the HTML5 form validation features.  It's why you always use server-side validation as well.  Client side validation is merely a convenience for the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739842">12</a> by Raymond Camden
		posted on 3/30/2012 at 3:33 PM
		</div>
		<div class="comment_text"><p>@Patrick: What Ben said. ;) Seriously - and I mentioned this somewhere - but client side validation is simply for the user experience. Not for security. You always back it up with server side validation. My feeling is this - look how easy it is to use. To me - that makes it worthwhile even though you need the back up checks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739843">13</a> by Jonas
		posted on 4/16/2012 at 8:17 PM
		</div>
		<div class="comment_text"><p>Hi, great tutorial! Any thoughts on how to achieve a conditional required field? Say you have a field that is required only if a specific checkbox is clicked? How do you do that? One could think about the use of JS, but in that case we would encounter two problems. First, if JS would be disabled, some fields would keep being validated while the conditional fields not. Second, even with the use of JS, how could you present/style the error message box in order to be consistent with the default one? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739844">14</a> by Raymond Camden
		posted on 4/16/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>As far as I know, you would have to use JS. As to your two problems:</p><p>"First, if JS would be disabled, some fields would keep being validated while the conditional fields not."</p><p>To me, and this is just my opinion, it falls into the 'your browser is so sucky it doesnt matter' category, and since we are using server-side validation as a 100% backend, we are safe.</p><p>"Second, even with the use of JS, how could you present/style the error message box in order to be consistent with the default one?"</p><p>I think you would get around that by using JS to manipulate the DOM. So imagine an email field that does NOT have the required field. If you click on some checkbox for a newsletter, for example, I'd use JS to add the required attribute to the DOM. Then when you submit the form, the UI should be the exact same as everything else.</p><p>That's just an idea though - haven't tested it. (But going to since now I'm curious.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739846">15</a> by Jonas
		posted on 4/16/2012 at 8:40 PM
		</div>
		<div class="comment_text"><p>Thanks for your answer. Yeah, that's the way I would go too. I would add the required attribute with JS and add the necessary validations for older browsers that don't support form validation. Also, and to prevent inconsistency when JS is disabled, I would add the formnovalidation attribute to the form and remove this with JavaScript, so that the validation is just done on server side when JS is off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739845">16</a> by Raymond Camden
		posted on 4/16/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>Oh now that's a smart trick - using formnovalidation and removing it with JavaScript. Thanks for sharing that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739847">17</a> by dbv
		posted on 11/30/2012 at 1:25 AM
		</div>
		<div class="comment_text"><p>Very useful article and resource.  Couple of questions:<br>a. Html5 Form doesn't need a method=["post"|"get"] so, how does it know what is what?<br>b. Running the demo, after the username/password/email/etc. have been submitted, they appear in the url bar.  Should that happen?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739850">18</a> by Raymond Camden
		posted on 11/30/2012 at 1:33 AM
		</div>
		<div class="comment_text"><p>a) It defaults to GET.<br>b) Yep, because of A. Normally I'd have added method="post".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739849">19</a> by dbv
		posted on 11/30/2012 at 2:04 AM
		</div>
		<div class="comment_text"><p>Okay, thanks.  I put the code into a web app with a method="post" and got a "Method Not Allowed" error.  Aaah!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739848">20</a> by Raymond Camden
		posted on 11/30/2012 at 3:54 AM
		</div>
		<div class="comment_text"><p>That would be something up on your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739851">21</a> by Token
		posted on 12/16/2012 at 6:09 AM
		</div>
		<div class="comment_text"><p>In order to do server-side validation you need to use &lt;cfinput&gt; tags and use the method "validateat=onserver". However &lt;cfinput&gt; does not support HTML5 attributes so it will not let me use the new "required" function. It just renders a normal &lt;input&gt; element without the "required" part.</p><p>How would you suggest one can offer HTML5 validation and server-side validation in one application?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739854">22</a> by Raymond Camden
		posted on 12/16/2012 at 7:49 AM
		</div>
		<div class="comment_text"><p>"In order to do server-side validation you need to use &lt;cfinput&gt; tags and use the method "validateat=onserver". "</p><p>Absolutely not! That's one way of doing it but not the only way. I never recommend cfinput myself.</p><p>So to answer your last question, I'd just do the validation manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739852">23</a> by token
		posted on 12/16/2012 at 8:03 PM
		</div>
		<div class="comment_text"><p>Do you mean by using hidden fields? Using cfparam with multiple if/else statements is very tedious</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739853">24</a> by Raymond Camden
		posted on 12/17/2012 at 8:04 AM
		</div>
		<div class="comment_text"><p>No, I didn't mean hidden fields - I meant manually, ie, cfparam and CFIFs. I don't find it tedious. It isn't exciting, but it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739855">25</a> by Jason Fisher
		posted on 12/18/2012 at 12:40 AM
		</div>
		<div class="comment_text"><p>To echo Ray's position:  hidden fields are able to be manipulated, so to do server-side validation, you actually have to check when the form is posted.  Ray recommends using CFIF and CFPARAM, and that's exactly right:  it's done on the form post action.  CFIF NOT LEN(form.firstName) THEN errors = "ERROR: You must provide a First Name value."  CFIF LEN(errors) THEN return errors ELSE [save to database] and return success</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739856">26</a> by Raymond Camden
		posted on 12/18/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>Eh? How is saying "Use CFIF" not right? It is... but obviously is just a high level remark of "use conditions" and not a full code sample. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739857">27</a> by Jason Fisher
		posted on 12/18/2012 at 12:50 AM
		</div>
		<div class="comment_text"><p>@Ray, I said CFIF "was exactly right" :)</p><p>I was just trying to provide a little pseudo code to back you up, because I completely agree that hidden fields don't address the server-side solution YOU were suggesting ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739858">28</a> by Raymond Camden
		posted on 12/18/2012 at 12:52 AM
		</div>
		<div class="comment_text"><p>-sigh- It's what I get for reading too quickly and being a bit defensive today (re: the HTML5/Sencha debate). Sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739859">29</a> by Jason Fisher
		posted on 12/18/2012 at 12:54 AM
		</div>
		<div class="comment_text"><p>It's all good, Raymond, and thank you (so many times) for all you do for the CF and web development communities!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739863">30</a> by LeBoss
		posted on 2/9/2013 at 1:03 AM
		</div>
		<div class="comment_text"><p>I just have one question how do you called the pop up window display after the error. How can one possibly code it. If any of you have an idea please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739861">31</a> by Raymond Camden
		posted on 2/9/2013 at 1:07 AM
		</div>
		<div class="comment_text"><p>LeBoss - are you saying you want some form of modal window to pupup for error display?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739865">32</a> by LeBoss
		posted on 2/9/2013 at 1:17 AM
		</div>
		<div class="comment_text"><p>Yes, something that look exactly like the one above</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739862">33</a> by LeBoss
		posted on 2/9/2013 at 1:20 AM
		</div>
		<div class="comment_text"><p>I have seen it on facebook and many popular websites i just don't have any idea how to make it. If you can help me i will be very grateful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739864">34</a> by Raymond Camden
		posted on 2/13/2013 at 5:51 PM
		</div>
		<div class="comment_text"><p>There are multiple JavaScript libraries out there that do UI things. I'd check out jQuery UI and it's Dialog control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739868">35</a> by Julien
		posted on 6/14/2013 at 9:58 AM
		</div>
		<div class="comment_text"><p>And what about that stupid IE that does not know what html 5 is ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739872">36</a> by Raymond Camden
		posted on 6/14/2013 at 3:24 PM
		</div>
		<div class="comment_text"><p>IE isn't a lost cause. IE10 supports form validation: <a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%2F%23feat%3Dform-validation%3A7X2cD7KHXDWuYD0OKUYOiOc5vfI&amp;cuid=3321886" rel="nofollow noopener" title="http://caniuse.com/#feat=form-validation">http://caniuse.com/#feat=fo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739869">37</a> by Doug
		posted on 6/14/2013 at 3:52 PM
		</div>
		<div class="comment_text"><p>... and yet IE10 doesn't work with Sharepoint.  Although I think that's more a problem with Sharepoint than with IE10.  LOL Microsoft, can't even get their own products to work with each other.</p><p>You should trying using some Sharepoint apps on an iPad. That is a level of broken beyond IE stuff. It's so bad instead I just connect to VMware instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739867">38</a> by Raymond Camden
		posted on 6/14/2013 at 4:07 PM
		</div>
		<div class="comment_text"><p>Believe it or not - I've never used Sharepoint. Ever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739873">39</a> by doug
		posted on 6/14/2013 at 4:44 PM
		</div>
		<div class="comment_text"><p>Then go to your CIO and give him a big hug for not forcing that on you.</p><p>Oh wait, you work for Adobe these days, don't you?  You dodged a bullet there, my friend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739870">40</a> by Raymond Camden
		posted on 6/14/2013 at 5:15 PM
		</div>
		<div class="comment_text"><p>Oh we all have our little issues. For us, it is an internal wiki that requires VPN *and* a OTP. It is super super super secure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739871">41</a> by James Polland
		posted on 5/20/2014 at 8:37 PM
		</div>
		<div class="comment_text"><p>Quick question what is the &lt;p/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739874">42</a> by Raymond Camden
		posted on 5/20/2014 at 11:20 PM
		</div>
		<div class="comment_text"><p>Just a self closing paragraph tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739876">43</a> by Heald Price
		posted on 8/12/2014 at 1:04 AM
		</div>
		<div class="comment_text"><p>yes, good example, but do not forget about some attributes like: novalidate. It can bring much headache like it my case when I wanted to upgrade my blog with HTML5 form validation. Fortunately, I found this article where I read about such things: <a href="http://disq.us/url?url=http%3A%2F%2Fbasicuse.net%2Farticles%2Fpl%2Ftextile%2Fhtml_css%2Fform_validation_in_html5%3A-5Sa0V6FF1Z2LK-aBIZIyPt062Y&amp;cuid=3321886" rel="nofollow noopener" title="http://basicuse.net/articles/pl/textile/html_css/form_validation_in_html5">http://basicuse.net/article...</a>. Such attribute will be useful in case when you need to have cancel or discard button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739875">44</a> by Raymond Camden
		posted on 8/12/2014 at 1:05 AM
		</div>
		<div class="comment_text"><p>Personally I think reset buttons don't serve any purpose - outside of folks accidentally clicking them.</p></div>
	</div>
</div>
		