
<div class="comment" id="c_1713743450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743450">1</a> by Ryan Anklam
		posted on 10/23/2012 at 6:10 PM
		</div>
		<div class="comment_text"><p>One thing I like to do if I just need a cross browser selector engine that works on IE6 &amp; 7 use Sizzle.js instead of the entire jQuery code base.  Same selector engine but without all of the other jQuery goodies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743452">2</a> by Tony Weeg
		posted on 10/23/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>this is great.  it also smells like the start of a thinnerer jquery, jediQuery!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743453">3</a> by Raymond Camden
		posted on 10/23/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>Ryan, you bring up a good point about compatibility. In my case, I made the conscious decision to not worry about IE6, because this functionality was used to highlight a LI. If it "breaks", then it isn't broken. You can see still the LI items. (In fact, since it loads with one highlighted, you still see a highlighted product.)</p><p>Christian Heilmann gave an incredible presentation last week (so good I'm going to blog the link a bit later) where he made an excellent point (I'll paraphrase here, any mistake is mine, not his)</p><p>"There is no such thing as a broken escalator. It's just stairs."</p><p>The context was in regards to how your code 'breaks' and what happens in those browsers.</p><p>In this - admittedly - trivial example, nothing is really lost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743454">4</a> by andy matthews
		posted on 10/23/2012 at 6:20 PM
		</div>
		<div class="comment_text"><p>Reminds me of this blog post I put out a few months ago:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fandymatthews.net%2Fread%2F2012%2F08%2F16%2FSaying-Goodbye-to-jQuery-Mobile%3Aw16rhNKzFDAVJqrxM3qP5RAyum4&amp;cuid=3321886" rel="nofollow noopener" title="http://andymatthews.net/read/2012/08/16/Saying-Goodbye-to-jQuery-Mobile">http://andymatthews.net/rea...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743455">5</a> by Phillip Senn
		posted on 10/23/2012 at 6:30 PM
		</div>
		<div class="comment_text"><p>I can't trust plain JavaScript.  When IE uses one kind of event model and the rest of the world uses a different kind, I rely on jQuery to normalize that stuff.</p><p>What if you load the page a second time?<br>What if you load the page from another page on the site that had already loaded jQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743456">6</a> by Raymond Camden
		posted on 10/23/2012 at 6:36 PM
		</div>
		<div class="comment_text"><p>It depends on how far back in IE you want to handle. Look at my example. Does it need to work in IE6? I'd think not. Fewer and fewer people are supporting IE6. Even jQuery is dropping it next year. I'm not saying *no one* needs to support IE6, just saying it isn't necessarily something all of us have to support. And given that, doesn't it make sense to be _aware_ of what you can do in vanilla JS w/o a library?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743458">7</a> by Phillip Senn
		posted on 10/23/2012 at 6:44 PM
		</div>
		<div class="comment_text"><p>Events may have been an example that was "not optimal".<br>Let's say you want to add two numbers together.  Crockford in his video series on JavaScript, the Good Parts says to use:<br>A = +B +(+C);</p><p>You prefix both variables with a plus sign to make sure they are numbers, and wrap the second variable in parenthesis to guard against the two plus signs from touching each other and thus becoming B ++C.</p><p>Here again, a not optimal example, but you can see why I don't trust plain JavaScript.  I would use a library to add two variables together and ensure that I don't get NaN as one of possible return values.</p><p>Especially if that library is cached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743457">8</a> by Raymond Camden
		posted on 10/23/2012 at 6:46 PM
		</div>
		<div class="comment_text"><p>Wow. Phillip... I respectfully disagree agree with you violently. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743460">9</a> by Adrian J. Moreno
		posted on 10/23/2012 at 7:00 PM
		</div>
		<div class="comment_text"><p>This looks like a Catch 22 situation.</p><p>Using jQuery makes the request heavier and "hides" what's really going on in the behavior (JavaScript) layer.</p><p>Not using jQuery will confuse the section of the interwebs that never took the time to actually learn JavaScript and you'll be deluged in "how do you do it with jQuery" requests.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743461">10</a> by Craig S
		posted on 10/23/2012 at 8:42 PM
		</div>
		<div class="comment_text"><p>One important thing to note regarding browser compatibility - querySelector and querySelectorAll only support whatever selectors the browser supports.  So your example won't work in IE7 or IE8 either, since neither supports the :nth-child() selector.  Sometimes it's best to just deal with the extra few kilobytes and use jQuery for things like this just to make sure you have your bases covered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743463">11</a> by Raymond Camden
		posted on 10/23/2012 at 9:00 PM
		</div>
		<div class="comment_text"><p>@Craig: Or - just use querySelectorAll and use the Nth item that way. One more additional line if I cared to support IE7/8. That's a lot better than loading the entire jQuery library.</p><p>To be clear, I'm not arguing for _never_ using jQuery. I'm just saying there are times when you don't need an entire library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743464">12</a> by Giancarlo Gomez
		posted on 10/23/2012 at 10:41 PM
		</div>
		<div class="comment_text"><p>Great Post Ray, I think what people need to understand is learn JavaScript, know your CSS and by now your HTML really should be up to par! We are web developers people!!! Also, why are people still supporting IE6? I think that argument is already dead in the water.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743466">13</a> by Jack
		posted on 10/24/2012 at 1:03 AM
		</div>
		<div class="comment_text"><p>The escalator/stairs quip came from the immortal Mitch Hedberg: “An escalator can never break: it can only become stairs. You would never see an Escalator Temporarily Out Of Order sign, just Escalator Temporarily Stairs. Sorry for the convenience.”  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743462">14</a> by Raymond Camden
		posted on 10/24/2012 at 1:06 AM
		</div>
		<div class="comment_text"><p>Ah, nice, thanks Jack. Now I need to go ahead and quickly blog the presentation CH gave. I loved it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743465">15</a> by Roland
		posted on 10/24/2012 at 3:10 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The library should be cached the second time (and thereafter) that you call the page, making the network traffic just a simple "not modified" response.  Even better, if you're using a public CDN for the jquery libs, your browser probably already has it cached from other applications.</p><p>I don't disagree that we should avoid overusing libraries - especially for simple tasks - but you really shouldn't worry about the network impact if your web server is configured correctly or you're on a CDN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743471">16</a> by Adam Tuttle
		posted on 10/24/2012 at 3:23 PM
		</div>
		<div class="comment_text"><p>The thesis of your post is correct and fine, however, most people will already have the CDN hosted copy of jquery cached, so for most people it would be a non-issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743467">17</a> by Raymond Camden
		posted on 10/24/2012 at 3:24 PM
		</div>
		<div class="comment_text"><p>@Roland: You are right, but, cached or not, if there is no need for an additional 30K of code, then why include it? Especially on mobile where the impact may be greater.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743472">18</a> by Raymond Camden
		posted on 10/24/2012 at 3:25 PM
		</div>
		<div class="comment_text"><p>@Adam - your comment came in while I was replying to Roland, but, I'll just say ditto (my last comment ;)</p><p>I disagree that it is a non-issue on mobile. The parsing of the JS code _is_ an impact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743475">19</a> by Raymond Camden
		posted on 10/24/2012 at 3:26 PM
		</div>
		<div class="comment_text"><p>And again - much more than the impact of the library - it is the _need_ for the library. My main point here is to remind people that a lot of what you may use jQuery for can be accomplished in vanilla JS just as easily. We can agree on that, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743476">20</a> by Scott Stroz
		posted on 10/24/2012 at 3:30 PM
		</div>
		<div class="comment_text"><p>Worried about a 30 kb file? Are we back in the 90's?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743477">21</a> by Raymond Camden
		posted on 10/24/2012 at 3:32 PM
		</div>
		<div class="comment_text"><p>Seriously - if the only thing you take from this, "It's just 30K, why worry", then you are not getting the point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743478">22</a> by Roland
		posted on 10/24/2012 at 3:36 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I would say "somewhat agree".  For truly trivial code, yes I agree it's silly to use a library.  But the second you get in to event handling and DOM manipulation (as in actually modifying it), I think a well-tested library is a better approach.  I mean, sure you can write something that looks pretty simple, but does your event code work the same across all 4 major browsers, the minor ones, and all the mobile ones too?   How do you know?  Did you take the time to test it on every one of those platforms?</p><p>jQuery isn't just about providing easier syntax - it's also about providing consistent behavior models across many different platforms.  It exists to worry about browser quirks so you don't have to (for the most part).   Unless your code is super trivial, which it no longer is the second you're using events and searching the DOM, then I think the benefits of a library like jQuery far outweigh the minor penalty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743479">23</a> by Raymond Camden
		posted on 10/24/2012 at 3:39 PM
		</div>
		<div class="comment_text"><p>But Roland, I _did_ make use of events and I _did_ make use of DOM manipulation. It was a trivial example, but I did do that.</p><p>And whether you use jQuery, Ext, or no library, *yes*, you test across all platforms. Period. Using jQuery does not give you a free pass to skip testing. Agreed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743482">24</a> by Roland
		posted on 10/24/2012 at 3:48 PM
		</div>
		<div class="comment_text"><p>Agreed on the importance of testing.  But also, it's just simply not economical to test on every browser and every platform and every version that may come up.  Using jQ, you can be reasonably well assured it will work on the edge-case browsers/platforms/versions too.</p><p>I agree that in this particular case, especially given the intended usage and context, jQuery is unnecessary.  However, if that code was very important to a production application that I was supporting, you can bet your behind I'd have used jQ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743481">25</a> by Raymond Camden
		posted on 10/24/2012 at 4:15 PM
		</div>
		<div class="comment_text"><p>I'm sorry - I don't buy the "can't afford to test" - that is just an excuse. If you want to support browsers X, Y, and Z, then you test for them. Period. (To be clear though - my assumption is that you make the decision to limit your support to X, Y, and Z, and not every browser.)</p><p>I'd argue "this particular case" is not the unusual. Obviously there is a wide range of AJAX apps out there. From something as simple as mine to as complex as GMail.</p><p>My hope here though is that folks are reminded of what vanilla JS can do. Things like querySelector and the classList API are very powerful and very well supported.</p><p>For example, querySelector has 93% support, including IE8.  It is completely supported on mobile.</p><p>classList has less support - around 60%, with IE being the big one out. Mobile though is rock solid (outside of - oddly - Opera Mini).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743484">26</a> by Raymond Camden
		posted on 10/24/2012 at 4:16 PM
		</div>
		<div class="comment_text"><p>Btw - I should point out I used <a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%3ALgaGQXGS3y6Ft8p-Gu6GiHj1dvk&amp;cuid=3321886" rel="nofollow noopener" title="caniuse.com">caniuse.com</a> for those stats. If you aren't using that site to check browser support - start. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743483">27</a> by Scott Stroz
		posted on 10/24/2012 at 4:23 PM
		</div>
		<div class="comment_text"><p>OK...I think I get the point of the post now. I don't think I agree, though.</p><p>jQuery has better compatibility than 60% for class manipulation. That right there is worth the extra 30kb, IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743487">28</a> by Raymond Camden
		posted on 10/24/2012 at 4:42 PM
		</div>
		<div class="comment_text"><p>Let me ask this then. Did you know it was that easy?</p><p>dom.classList.add()</p><p>I worry about people who only use jQuery and don't even _look_ at what JS and the DOM APIs can do.</p><p>I know I didn't realize it was that easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743485">29</a> by Scott Stroz
		posted on 10/24/2012 at 5:00 PM
		</div>
		<div class="comment_text"><p>I did not know it was that easy - and it really does not surprise me that the browser makers are adding stuff like this. But at 60% compatibility - with no IE - that is kind of a 'blocker' for most, I would assume.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743489">30</a> by Manithan
		posted on 10/24/2012 at 5:01 PM
		</div>
		<div class="comment_text"><p>zeptojs is an alternative and liter version of jquery with same syntax for modern browsers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743486">31</a> by Raymond Camden
		posted on 10/24/2012 at 5:04 PM
		</div>
		<div class="comment_text"><p>@Manithan: Zepto is nice. I used it recently to help with scroll/touch issues on mobile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743488">32</a> by Crawford Comeaux
		posted on 10/24/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Just did a case-sensitive search through the jQuery &amp; sizzle sources. Here's the result:</p><p>jQuery 1.8<br>----------<br>"IE"/"Internet Explorer" - 117<br>Safari - 11<br>Opera - 9<br>Webkit - 8<br>Firefox - 7<br>Chrome - 5<br>Gecko - 1</p><p>sizzle.js<br>---------<br>"IE"/"Internet Explorer" - 17<br>Opera - 5<br>Webkit - 2<br>Safari - 2<br>Chrome - 2<br>Firefox - 0<br>Gecko - 1</p><p>So I guess the quick &amp; dirty response to "Why jQuery?" is "Microsoft."</p><p>It's possible to build your own version of jQuery that easily excludes components using Grunt - <a href="http://disq.us/url?url=http%3A%2F%2Fnet.tutsplus.com%2Ftutorials%2Fjavascript-ajax%2Fhow-to-build-your-own-custom-jquery%2F%3Axh8ozLo-G947pqH_9nvGvvoUXN4&amp;cuid=3321886" rel="nofollow noopener" title="http://net.tutsplus.com/tutorials/javascript-ajax/how-to-build-your-own-custom-jquery/">http://net.tutsplus.com/tut...</a></p><p>I wouldn't recommend doing that without modifying your development workflow to easily incorporate it and DOCUMENTING ALL PARTS OF IT. Don't make it so that anyone else working on the project in the future has to deal with figuring out why random bits of jQuery are throwing errors.</p><p>If you really want to get crazy, you could strip out the code for functions you don't need &amp; replace them with some sort of lazy-loader. Bonus points go to whoever's lazy-loader also updates the custom core so that the lazy-loader's only called by the first visitor to the updated code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743490">33</a> by Crawford Comeaux
		posted on 10/24/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>I make no apologies for any showers that need to be taken after reading my previous post. You were asking for it, what with all that lurid talk of jQuery alternatives (or even going back to pure js!), so you were dirty to begin with!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743492">34</a> by Raymond Camden
		posted on 10/24/2012 at 8:29 PM
		</div>
		<div class="comment_text"><p>All those mentions of IE - man - that must mean it is an AWESOME browser!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743491">35</a> by Crawford Comeaux
		posted on 10/24/2012 at 9:43 PM
		</div>
		<div class="comment_text"><p>anSEOpersonsayswhat?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743495">36</a> by Khoa
		posted on 10/25/2012 at 5:34 AM
		</div>
		<div class="comment_text"><p>I think it depends on where your interest lies. If JS is not your area of expertise and you need something quick but RELIABLE, I think it’s fine to jump right into using jQuery and learn how to use it and focus on your task at hand, not to worry about how things are done underneath. It's like using a computer, if you know how hardware/software works (maybe because you are an IT engineer, web developer, etc.), you can use your computer much more effectively. But it is not a requirement if all someone cares about is writing some documents and browsing the web.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743494">37</a> by Douglas Hirsh
		posted on 10/27/2012 at 5:04 AM
		</div>
		<div class="comment_text"><p>I disagree with this post to a certain extent.  Sure jQuery takes up 33k compressed, but if your production server is configured properly your JavaScript should be cached.  No network connection should be made to get jQuery once it has been retrieved once.  If you use a CDN to deliver jQuery to the client then you don't even need to worry about your server's configuration.  Microsoft provides a free CDN for jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743493">38</a> by Raymond Camden
		posted on 10/27/2012 at 7:35 PM
		</div>
		<div class="comment_text"><p>@Douglas: I feel like I'm repeating myself a bit here. ;) Again - this is a lot more than just size - it is more about remembering what can be done in JS w/o needing a library. I know I've said this a few times now in the comments, but I feel like folks aren't getting it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743496">39</a> by Edward Beckett
		posted on 11/7/2012 at 12:29 AM
		</div>
		<div class="comment_text"><p>If speed is an issue ... you might want to stay tuned to this awesome little project <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fwebjars%2Fjquery%3ATiGbELBUQ4xWzqkqpB-6gGM8-2k&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/webjars/jquery">https://github.com/webjars/...</a> ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743498">40</a> by Raymond Camden
		posted on 11/7/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>How would this be different than a gzipped jQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743497">41</a> by Edward Beckett
		posted on 11/7/2012 at 12:58 AM
		</div>
		<div class="comment_text"><p>None I presume ... I guess the real benefits would be aimed at packaging. I.E. backbone, twitter-bootstrap .. etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743499">42</a> by Raymond Camden
		posted on 11/7/2012 at 1:05 AM
		</div>
		<div class="comment_text"><p>That I can see then. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743504">43</a> by Edward Beckett
		posted on 11/7/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>I have to agree with you. Learning how to use jQuery effectively is just as important learning jQuery.</p><p>I recently re-developed a site that had five or six different versions of jQuery being called in-line throughout the site ... not fun to debug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743503">44</a> by Chris Ferdinandi
		posted on 2/13/2013 at 7:22 AM
		</div>
		<div class="comment_text"><p>I've just started moving away from jQuery myself, and have been using similar techniques to what you described in this post.</p><p>I'm not concerned with IE6 support, and querySelector's work great with IE8 and up, but IE7 is still a sticking point for me. Use is rapidly declining, but for those of us who support corporate clients, older IE support is sometimes still an unfortunate must.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743501">45</a> by Raymond Camden
		posted on 4/26/2013 at 3:24 PM
		</div>
		<div class="comment_text"><p>Just to add: <a href="http://disq.us/url?url=http%3A%2F%2Fremysharp.com%2F2013%2F04%2F19%2Fi-know-jquery-now-what%2F%3AjCkdralJk-uFaLsp_bEmBLx3x0o&amp;cuid=3321886" rel="nofollow noopener" title="http://remysharp.com/2013/04/19/i-know-jquery-now-what/">http://remysharp.com/2013/0...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743502">46</a> by No one important
		posted on 10/21/2013 at 9:55 AM
		</div>
		<div class="comment_text"><p>I'll make a small rant here, just saying that although you still have a bit of a jQuery attachment; I very much abhor the nonsense. Others keep saying that jQuery makes their code "magically compatible" and fixes problems; but taking 3 seconds learning what jQuery is actually doing means you can ditch the 'weight' (and serious weight at that given how much the library does in the background) and directly manipulate the code. (Small scale cases, but that's what most people use jQuery for anyways)</p><p>Saying you need a library to tell if a variable is a number or not is plain ignorance about how javascript works. (Again, something I tend to find distasteful. Ideally, you should NEVER need "typeof" and writing code such that avoids type checking (without errors or *shudder* try catch) is faster and more 'compatible' than code that requires excessive type checking... I digress.)</p><p>But the worst offense I see with people using jQuery is that they're clearly idiots (sorry). I've seen several "professional" webpages that load the jQuery library only to use a single function that calls another function "document.getElementById()" at most using two or three functions for an ENTIRE MEMORY SUCKING LIBRARY! And you have to be the LOWEST common denominator to even BELIEVE jQuery magically makes "document.getElementById()" "compatible with IE6" (hint, it already is -__-;)</p><p>So for my perspective... it is just so much, why! Javascript is very powerful on its own, so much more so than anyone seems to realize... why do we have to wait for jQuery to make a bastardized interface instead of using what we already have?</p><p>[And of course, ranting about how great CSS selectors are when people are just using them because they don't know how anything about the DOM. (They are powerful, but if a short walk [ignoring idiots that keep yelling how slow *LONG* walking is (hint, jquery uses (or use to use) walks to emulate css selectors (err, I think... may have forgotten)] can get you where you want to be and you're "concerned" about "compatibility"... you don't just keep loading libraries hoping it all works. You make it compatible from step one.)]</p><p>[side note: even if jQuery would make your code "ie6" compatible... it would run so slowly and painfully that providing the SMART choice of "just let me have no javascript" which has many supports under html and css... but again, I digress; javascript for everything that doesn't need it... it is the future :(]</p><p>~No one has had no 'professional' work and probably is wrong on many levels but is opinionated and feels people should just learn how to program.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743505">47</a> by Colm O&amp;aposG
		posted on 10/6/2014 at 12:58 PM
		</div>
		<div class="comment_text"><p>DOMContentLoaded is not compatible with IE8 according <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FEvents%2FDOMContentLoaded%3AkMt7f0ZWhciwBunt0frTgYnKJTI&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/Events/DOMContentLoaded">https://developer.mozilla.o...</a> so better to use readystatechange perhaps ?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FEvents%2Freadystatechange%3AG1Uj1OgRUoJow26SFQGZuWv8Upo&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/Events/readystatechange">https://developer.mozilla.o...</a></p><p>Best regards / Colm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743506">48</a> by Raymond Camden
		posted on 10/6/2014 at 2:29 PM
		</div>
		<div class="comment_text"><p>If you need to support IE8, sure. I'd consider IE8 to be old enough to be not supported, but that's just me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1872727267">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_yuO5V4XbGn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1872727267">49</a> by Paul Browne
		posted on 2/24/2015 at 3:01 PM
		</div>
		<div class="comment_text"><p>I just converted my old javascript plugin <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FPaul-Browne%2Fjaygrid%3AfOD7wYWhRz1WjajeAZPVJ7ni81Q&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Paul-Browne/jaygrid">https://github.com/Paul-Bro...</a> to a pure javascript one <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FPaul-Browne%2FepicGrid%3A0Ud1hROFd7arDM6lpGyQ6AYUcUQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Paul-Browne/epicGrid">https://github.com/Paul-Bro...</a></p></div>
	</div>
</div>
		