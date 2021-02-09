
<div class="comment" id="c_1713658407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658407">1</a> by jaques
		posted on 10/20/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>Ray, you are an effing God-send!  Your examples and this blog are exactly what Adobe needs to use a business model when it comes to marketing ColdFusion!</p><p>I get so tired of seeing and hearing things like, converting ColdFusion to PHP, or converting ColdFusion to Java/JSP, or need someone who knows Ruby on Rails.</p><p>The CF community seems to be in this protective circle, like a herd of elephants protecting it's young from the on-slaught of Ajax, php, *insert other language here*, and web 2.whatever!</p><p>(Sometimes I think the "intellectual elephants" make it hard to move from middle-user to advanced-user because they talk above everyone else, but anyway...)</p><p>The stigma(s) and labels should have been erased years ago.  It's been too long and this product is too good and powerful to be just seen as a secondary language by those in the mainstream development community.</p><p>So thank you Ray (and thanks to Ben, Matt, Sean, Joe and those others who I may have forgotten - ok, Boyzoid too)</p><p>I'm just tired of feeling beaten down and slapped because we use ColdFusion and not being able to find opportunities in our own places in the world where we have the opportunity to use ColdFusion.</p><p>Just my 0.02</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658411">2</a> by Teddy R Payne
		posted on 10/20/2006 at 11:12 PM
		</div>
		<div class="comment_text"><p>Ray,<br>A very valid point.  Recording where a user ends is just as important as where a user begins.  OnRequestStart would be the next evolution of this idea.</p><p>Application.cfc really never ceases to amaze me in how many different ways you can use it.  I can understand why popular CF frameworks mimic similar ideas to make things easier.</p><p>Thanks as always, ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658410">3</a> by Raymond Camden
		posted on 10/20/2006 at 11:21 PM
		</div>
		<div class="comment_text"><p>Actually, I wouldn't use onRequestStart. I'd use onSessionStart. If you used onRequestStart, you would need to use logic to only record it once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658412">4</a> by Scott Stroz
		posted on 10/21/2006 at 12:03 AM
		</div>
		<div class="comment_text"><p>this.clientStorage = 'registry'?  Please tell me that is a typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658416">5</a> by Raymond Camden
		posted on 10/21/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>It came from my App.cfc skeleton, and is the default. :) Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658408">6</a> by tony petruzzi
		posted on 10/21/2006 at 12:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I don't want this to sound like I'm being a dick, but why would you want to do this when Google Analytics is FREE for anyone to use now and has more reports then you could ever dream of. Coupled with the fact that someone else is doing all the monitoring so your server doesn't have to take the hit. What you doing in this article is really cool, on a very very small scale. Try doing this with a site that gets any amount of decent traffic and you'll bring it to it's knees.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658414">7</a> by Raymond Camden
		posted on 10/21/2006 at 12:19 AM
		</div>
		<div class="comment_text"><p>I disagree Tony.</p><p>1) Google Analytics is great - but is not tuned for reporting of this nature I'd say. I know you can do conversion reporting - but when it comes to something as important as this - I'd want more control.</p><p>2) What if you need answers faster than GA can provide? GA is sometimes 24 hours behind when it comes to stats.</p><p>3) Bring it to its knees???? How?? We are talking about recording data onSessionEnd. In my example it was simply a string. If you recorded more, like the contents of a cart, then you mean a simple array. I do not see this as a lot of data, and, it was data already in the sesison anyway. At most, I force the data to exist for a MS more before CF finally trashes it. At my last employer, we did this for a large ecommerce site that got a _lot_ of traffic and it didn't add anything at all to the load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658409">8</a> by Pragmatic Bastard
		posted on 10/21/2006 at 2:57 PM
		</div>
		<div class="comment_text"><p>Forget this "coldfusion talk" google analytics is one way, but the money u outlay on coldfusion could be well spent in other places, get php it is free and it is being used in a lot more places, coldfusion is dying, you only have to look at the list of programming languages to see that coldfusion in well down the list even after being around for over ten years - that doesn't bode well</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658413">9</a> by Raymond Camden
		posted on 10/21/2006 at 4:08 PM
		</div>
		<div class="comment_text"><p>Hi Pragmatic. I bet you are the same person who commented on Ben's blog and lied about me. You didn't have the guts to use your own name there either.</p><p>If you feel PHP is better than CF - that is certainly fine. But how can you expect anyone to beleive you if you are too scared to post your name, AND, you lie and say your blog url is Ben Forta's?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658415">10</a> by duncan
		posted on 10/23/2006 at 3:15 PM
		</div>
		<div class="comment_text"><p>PB is indeed correct that CF isn't the most popular programming language.  In fact according to this, it's about 29th:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.tiobe.com%2Ftpci.htm%3AVuOg_L6nN_qqbZ2tu4-Zm91sT50&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tiobe.com/tpci.htm">http://www.tiobe.com/tpci.htm</a></p><p>I'm now off to re-learn those up and coming languages Cobol, Prolog and Pascal ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658417">11</a> by Kola
		posted on 10/25/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>Ray, you have touched on a good point and reminded me of a great article that I just can't find the url for. Basically many of us think of a successful site or application as being an app or site delivered in time or in budget with the requested features, but for the stakeholders a successful site is probably one that generates additional income or converts prospects to actual customers. In order to achieve this we should start thinking about ways to test how successful and usable our application is - so not just examining empty shopping carts but how many people are giving up registering because they can't find a unique user name - (or giving up becuase they have to register) are people always confusing the credit card start date fields with the card expiry date fields?, how many people are doing a free text search for products that we do not stock - are people putting in adsfasdfadsfadsfdsaf@Adsfd.com as their email address? are they concerned about privacy? How many visitors are checking our 'about us page' before purchasing - these are all things we can programmatically check for, examine and use to make improvements to our sites/systems<br>---------------------------<br>Just as a pratical example (and not a dig at your blog software) - everytime I post a comment I forget to put in http:// when entering my website granted this is just a blog but you could log how many times people do that and tweak your site accordingly.</p><p>Kola</p></div>
	</div>
</div>
		