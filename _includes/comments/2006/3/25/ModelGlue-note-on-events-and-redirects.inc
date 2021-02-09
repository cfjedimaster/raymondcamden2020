
<div class="comment" id="c_1713651108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651108">1</a> by Sean Corfield
		posted on 3/27/2006 at 12:41 AM
		</div>
		<div class="comment_text"><p>And just as an historical note: the redirect attribute was only added fairly recently - the non-redirecting version was the deliberate, original design. The "standard" approach was to have your initial event handler make the choice and set a result for authenticated or set a result for nonAuthenticated and use results for both, to select the next event to be handled: either showGalleries (for the authenticated case) or logon (for the nonAuthenticated case).</p><p>Redirect was added to allow for the "form-post-action-redirect" idiom to be handled directly in the XML (instead of requiring the action controller to do a cflocation).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651107">2</a> by Raymond Camden
		posted on 3/27/2006 at 5:55 AM
		</div>
		<div class="comment_text"><p>Sean, it seems like w/o this redirect attribute, you would need 2 events for every 1 event that has logon protection. Is that right? Seems like a lot of extra work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651092">3</a> by Sean Corfield
		posted on 3/27/2006 at 12:03 PM
		</div>
		<div class="comment_text"><p>Correct, a public event and a private (secured) event. Remember that my point was this was how you historically had to set things up...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651109">4</a> by Raymond Camden
		posted on 3/27/2006 at 6:10 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification, Sean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651110">5</a> by Teddy Payne
		posted on 3/27/2006 at 8:08 PM
		</div>
		<div class="comment_text"><p>Plato and Socrates were sitting in a grotto and conversing lightly.</p><p>Plato looked over to Socrates and asked a simple question, "Socrates, if you had another name, what would it be?"</p><p>Socrates thought for a moment and finally he spoke a single word, "Sean."</p><p>Plato looked to the sun for his muse and spoke, "I shall be known as Ray."</p><p>Sean nodded to Ray and the world was bright and cheerful.</p><p>Thanks for the work you two.  I am enjoying the entries for my new favorite framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651113">6</a> by Raymond Camden
		posted on 3/27/2006 at 8:16 PM
		</div>
		<div class="comment_text"><p>Heh, as if my ego needed more stroking. ;) To be honest, I'm definitely the newbie here. I definitely feel like I'm still learning MG and how best to use it. That's one reason I'm writing the series, and why I share my observations and issues, so that others can learn from my mistakes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651112">7</a> by Teddy Payne
		posted on 3/27/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>Ok, a question on the views.  If you have &lt;result name="someFoo" do="doFoo"&gt;, then the someFoo is based upon the addResult method of the viewState.  If you do not put a name of a result child node, will this automatically fire the event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651114">8</a> by Raymond Camden
		posted on 3/27/2006 at 10:13 PM
		</div>
		<div class="comment_text"><p>Teddy, I find your question a bit hard to read. Are you asking if a result with no name is automatically fired?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651116">9</a> by Sean Corfield
		posted on 3/27/2006 at 11:55 PM
		</div>
		<div class="comment_text"><p>Yes, &lt;result do="someEvent"/&gt; will always cause the someEvent handler to be queued up for execution (unless you've already redirected somewhere else).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651115">10</a> by Teddy Payne
		posted on 3/28/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>Sean answered the core of the question.  A result node without a name attribute will be queued for execution without a dependcy on an viewState.addResult() value being set.</p><p>Thanks for the response guys! =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651119">11</a> by Brendan
		posted on 3/28/2006 at 3:46 PM
		</div>
		<div class="comment_text"><p>Just wondering what the pros and cons are for using the redirect method or the 2 authenticated and nonAuthenticated results to go to logon and showGalleries</p><p>having the 2 results does seem like extra work, but is the redirect generally considered "better"?</p><p>great series of posts btw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651120">12</a> by Tom Chiverton
		posted on 3/28/2006 at 5:24 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.model-glue.com%2F%3A05mh_osMKMXOXRiPcQ68mGfa1h4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.model-glue.com/">http://www.model-glue.com/</a> says<br>"Notice: This domain name expired on 03/23/06 and is pending renewal or deletion"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651125">13</a> by Raymond Camden
		posted on 3/28/2006 at 5:30 PM
		</div>
		<div class="comment_text"><p>Thanks Tom, I pinged Joe. I'm sure he will fix it soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651127">14</a> by Raymond Camden
		posted on 3/28/2006 at 7:41 PM
		</div>
		<div class="comment_text"><p>Brendan, I'd probably say to go the redirect route. Doing it the other way I think adds a bit too much complexity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651124">15</a> by Sean Corfield
		posted on 3/28/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>Most importantly, the redirect changes the URL in the browser, the non-redirect version does not. I actually prefer that for login pages.</p><p>But don't forget: for form posts that cause data *modification* you need to do a redirect after the update!.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651122">16</a> by Trond Ulseth
		posted on 4/18/2006 at 1:11 PM
		</div>
		<div class="comment_text"><p>Sean said: "Most importantly, the redirect changes the URL in the browser..."</p><p>In a event-handler named "betaling" (norwegian :) where I do &lt;result do="handlekurv" redirect="true" /&gt; , but the url still say <a href="http://disq.us/url?url=http%3A%2F%2Ffakedomain.no%2F%3Fevent%3Dbetaling%26item%3Dmerkelapp%3A3J7Mji_Qd0PqgdZQFbU1LGVP9Cs&amp;cuid=3321886" rel="nofollow noopener" title="http://fakedomain.no/?event=betaling&amp;item=merkelapp">http://fakedomain.no/?event...</a>....</p><p>Am I missing something here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651123">17</a> by Raymond Camden
		posted on 4/18/2006 at 2:27 PM
		</div>
		<div class="comment_text"><p>I believe this was due to a bug in MG involving non-named results. I'm pretty sure this was fixed in the latest release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651126">18</a> by Trond Ulseth
		posted on 4/19/2006 at 4:01 PM
		</div>
		<div class="comment_text"><p>Thanks a bunch Ray. I dropped the 1.1 code over to the server and  the url change on redirects works perfectly :D</p></div>
	</div>
</div>
		