
<div class="comment" id="c_1713621394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621394">1</a> by Raymond Camden
		posted on 10/10/2005 at 6:03 PM
		</div>
		<div class="comment_text"><p>Also - his guess.cfm should do an isdefined check on url.guess. Just noticed that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621379">2</a> by Jeff
		posted on 10/10/2005 at 6:39 PM
		</div>
		<div class="comment_text"><p>One comment on the interface for this one.  I entered a number, and hit enter.  Nothing changed.  I did that 3 or 4 times before clicking the "Click to guess" link and seeing something change.</p><p> From that perspective, the interface is non-intuitive.  I see a form field which can be submitted by hitting the enter key.  ( And hitting the enter key does submit, since the screen redraws).</p><p> If you start making guesses by clicking the link, then hit the enter key the game doesn't save state and you lose all your guesses (and I assume a new number is chosen).</p><p> Food for thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621392">3</a> by Raymond Camden
		posted on 10/10/2005 at 6:42 PM
		</div>
		<div class="comment_text"><p>Oh, that's actually understandable. The original entry had text that mentioned that. It also had the persons email address. So I removed it all since I didn't think it mattered. So, pretend like it has nice text saying, "Don't just hit Enter". ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621390">4</a> by Justice
		posted on 10/10/2005 at 8:43 PM
		</div>
		<div class="comment_text"><p>Yea, sorry.  I did some research and found that I can put a javascript:void(0); then my ajax action, into the 'onSubmit' property of the form  (duhhh)  So, sorry about that, my new version can be submitted using enter and has proper field focus afterwards so you can just enter the number and hit enter over and over =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621388">5</a> by Bill
		posted on 10/10/2005 at 8:58 PM
		</div>
		<div class="comment_text"><p>The ajax part is nice; especially if you go there from this post, then use the demo, then want to hit your back button.. you don't have hit it 7 times.</p><p>However, the use of a link instead of a button has two problems to me.</p><p>1. the form field "infers" an http post; yet the link makes it a http get - I don't really like mixing the two up.</p><p>2. Even had the blurb been there making it so the enter key didn't work was pretty unintuitive.  He should have caught the enter key to make it fire the link if nothing else.  Accessibility is more than a buzzword.</p><p>He could have used a button to submit the form.  Granted, in the background with the AJAX it still would have been an http get request, but at least the UI would be consistent.</p><p>Overall though I still prefer this one to the others from a user perspective simply becuase of the no refresh.</p><p>Some more nits:<br>1. on the text field he has a javascript function attached to the keypress event, checkenter(), either he didn't define this or you took it out - what did it do? It may negate my earlier comment</p><p>2. when I view source i see he needs to have a doctype declaration.  The doctype really does matter in most modern browsers and how they render things so, even in a simple exercise, it should be there.</p><p>3. he should have his javascript block in the HEAD tag. (the head tag is missing entirely, as is the html tag and the closing body tag)</p><p>4. The style block should be moved out of the body and put in the aforementioned head tag</p><p>5. h1 tags should be used for structure on the document and not for emphasis.  Emphasis is why we have CSS and the strong and em tag.  Heck, em means "EMphasis"</p><p>6. since you mentioned buzzwords, and he is using AJAX I figure I can throw in another.. Unobtrusive Javscript.  He should try to avoid having inline javascript thus further leaving the HTML markup as purely structural.  He did a good job of using CSS classes (instead of inline) and the same could have been done for the javascript by attaching the event handlers during the body's onload event.</p><p>those are all pretty minor in the task of quickly solving your contest - but they are little things that are easy to do right and it is best to start doing them right so they become habit and thus basically no work in the future.</p><p>hope I don't come across as Anal here ;O) I just felt like doing a code review for some reason :O)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621382">6</a> by Justice
		posted on 10/10/2005 at 9:05 PM
		</div>
		<div class="comment_text"><p>Bill:</p><p>Thank you, I do appreciate it. =)  I came, over the past 3 years, from using front page, to Net Objects Fusion, to Dreamweaver, and now I use strictly CFEclipse.</p><p>I guess I take the doc declaration out because I never see that it makes much of a diff.  I know I should keep the javascript seperate, that was an oops on my part for this contest =)  At the point I wrote this, I did not know that the form object had an 'onSubmit' action I could tie too, I knew folks wouldnt like clicking the link (I didnt!)</p><p>I appreciate the feedback, as I really dont have anyone to 'mentor' from as far as making my code better.  My friends consider my anal because I indent everything for readability, but I really want to take it to the next level and make my code poetry =)</p><p>Thanks all for the advice!</p></div>
	</div>
</div>
		