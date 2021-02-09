
<div class="comment" id="c_1713731099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731099">1</a> by SuperAlly
		posted on 3/28/2011 at 9:28 PM
		</div>
		<div class="comment_text"><p>I was literally writing code to do this when I got the email notification about a new entry on your blog :)<br>Good thing I always stop what I'm doing to see what you have to say, huh?</p><p>Cheers Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731101">2</a> by Raymond Camden
		posted on 3/28/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>I always ask, before I post, "What does SuperAlly need?"</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731100">3</a> by Ed
		posted on 3/28/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>It is a good possibility that this year I am going to have to do some work to allow mobile access to one or more of our portal apps.  I have not done a lot of research into it yet, but I have seen some mention of being able to specify CSS file(s) specifically for mobile (rel="mobile" if I remember correctly).  Assuming that page content will be the same whether on mobile or desktop/laptop computer, and the content just needs to be formatted to fit better on a mobile screen, wouldn't this be a better way to go?  Disclaimer...  I do not have a mobile device yet so no practical experience on them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731097">4</a> by Raymond Camden
		posted on 3/28/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>As always - take this with a grain of salt. My opinion is that CSS can only take you so far in terms of supporting both desktop/mobile with the same content. I'm not sure if that type of solution would work well. To be clear, I don't mean CSS can't provide a good mobile experience - it does with jQuery Mobile for example, I'd just worry about trying to support both types of clients from the same base HTML.</p><p>That's my rough feeling. It's back up by little to no experience and I'm VERY willing to be corrected sharply on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731102">5</a> by Fernando Lopez
		posted on 3/28/2011 at 10:12 PM
		</div>
		<div class="comment_text"><p>I'm currently working on mobilizing a small directory app and I made the mistake you mentioned. I detect the mobile device and then redirect to a Mobile view. nowhere in the page I provided a way to see the app as a regular web page.</p><p>Thanks for the post, saved me from sending this code to prod without the proper way out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731104">6</a> by Tim Garver
		posted on 3/28/2011 at 10:13 PM
		</div>
		<div class="comment_text"><p>Good article, i just did one of these about a month ago. Then on the  mobile side i use the viewport meta tag<br>[code] &lt;meta name="viewport" content="width=device-width; initial-scale=1.0; maximum-scale=1.0; minimum-scale=1.0; user-scalable=0;" /&gt; [/code]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731103">7</a> by Gary Funk
		posted on 3/29/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>Ray, during the past few months, I saw a demo, by an Adobe person, that showed the layout change, when the width of the page was changed. This was done in CSS and was written to demo what the screen would look like on different size devices.  What I can't rememer is who did the demo and if it was at a UG or online. I may have seen this online from a MAX session.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731105">8</a> by Raymond Camden
		posted on 3/29/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>Thats.... shoot... CSS.... ok I'm not remember the term. Time to google.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731107">9</a> by Raymond Camden
		posted on 3/29/2011 at 12:28 AM
		</div>
		<div class="comment_text"><p>Bam, "Media Queries"</p><p>Here is just one example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bushidodesigns.net%2Fblog%2Fmobile-device-detection-css-without-user-agent%2F%3A1pP-AVlD8zm9vzlVus20encizss&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bushidodesigns.net/blog/mobile-device-detection-css-without-user-agent/">http://www.bushidodesigns.n...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731106">10</a> by Raymond Camden
		posted on 3/29/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>So that would be a good way to say, "use this form factor for this size", but again, my concern is being able to make it work fine with one set of HTML. I don't think you can always take existing content and rework it to be ok on mobile.</p><p>Does that distinction/concern make sense? I'm not saying it is a valid concern. I'm not saying we must always build some new site for mobile. I'm just saying... um - maybe most of the time?</p><p>I'm new here too - so be gentle. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731108">11</a> by SuperAlly
		posted on 3/29/2011 at 12:35 AM
		</div>
		<div class="comment_text"><p>I remembered seeing it a little while back.  If I remember right, the HTML5 video talks about specific CSS for phone/tablet/desktop.<br>It's specifically about Dreamweaver and how you can preview all 3 at the same time, but the concept I'm sure works fine without Dreamweaver.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fproducts%2Fdreamweaver%2Fwhatsnew%2F%3Fpromoid%3DFDTEC%3AsZZdLBp57CK9pZDMf6s-wK6QdhE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/products/dreamweaver/whatsnew/?promoid=FDTEC">http://www.adobe.com/produc...</a></p><p>Hope it helps!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731110">12</a> by SuperAlly
		posted on 3/29/2011 at 12:38 AM
		</div>
		<div class="comment_text"><p>Sorry, should have said "remembered seeing this", I in no way claim that this is IT :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731111">13</a> by Robert Henson
		posted on 3/29/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>Fantastic. Just did a Google search on "mobile redirect coldfusion" and find you've done a blog post on it in the last 24 hours. I should really just check your website first before resorting to Google - so much useful stuff on here.</p><p>Thanks!<br>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731109">14</a> by Raymond Camden
		posted on 3/29/2011 at 5:48 PM
		</div>
		<div class="comment_text"><p>Much appreciated Rob. This is what I live for. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731115">15</a> by TNT
		posted on 3/29/2011 at 11:23 PM
		</div>
		<div class="comment_text"><p>With respect, your own mobile functionality presents problems. Navigate to your blog from a search engine link for example when browsing on an Android... stuck! No backing out. My point is that as the mobile space evolves, everyones techniques will improve, both yours and Gawker's included.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731113">16</a> by Raymond Camden
		posted on 3/29/2011 at 11:27 PM
		</div>
		<div class="comment_text"><p>I fully acknowledge my own mobile version needs work. :) Although every entry on the mobile site here should have a link at the bottom. You don't see that?</p><p>Ah just tested and confirmed. Although hitting the Back button in the UI on top takes you to the mobile home page with the link.</p><p>Yep - looks like it's by design - just the home page has the link. Well, I still consider that "a way out", but yeah, it should be -everywhere- in the UI.</p><p>BlogCFC is moving to jQM for the mobile version. I'll ensure it's everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731114">17</a> by Jaana Gilbert
		posted on 3/30/2011 at 11:20 PM
		</div>
		<div class="comment_text"><p>Thanks for validating my approach :)</p><p>Last year I built a mobile version of a portal site that is used by 600+ different domains. I'm using a cookie approach because we're not using sessions on the site (will switch to sticky sessions on the load balanced servers later this year).</p><p>I've kept an eye on the stats on how many visitor actually clicks on the *main site* link and nearly 50% of visitors do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731119">18</a> by Raymond Camden
		posted on 3/30/2011 at 11:21 PM
		</div>
		<div class="comment_text"><p>That's a fascinating stat Jaana. Thanks for sharing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731117">19</a> by Kevin Marino
		posted on 3/30/2011 at 11:42 PM
		</div>
		<div class="comment_text"><p>Jaana and Raymond,</p><p>Wonder if that stat holds up across different business needs and markets?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731118">20</a> by Jaana Gilbert
		posted on 3/30/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>Good question Kevin :)</p><p>I was really surprised that the % wasn't bigger. <br>Business sector is tennis and people who belong to tennis clubs, country clubs etc usually have available funds and tend to follow the trends in both clothing and gadgets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731116">21</a> by Kevin Marino
		posted on 3/30/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>Jaana,</p><p>With that said. I wonder  how this would play out for a pure B2B setup. I am working on a small project for a B2B that focuses on retail store fittings. Right now doing the main site, but talk of mobile in future.  So unlike a B2C where browsing may be more the norm, this is targeted searching and is often buttressed by conversations with the supplier (at least initially) so I would expect in my situation to see that percentage steadily decline on repeated trips, assuming mobile platform designed correctly.</p><p>So will definitely have to keep this in mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731121">22</a> by Jaana Gilbert
		posted on 3/31/2011 at 12:09 AM
		</div>
		<div class="comment_text"><p>I agree, if you can provide the same functionality via the mobile site as the B2B site, that should make the % very low.</p><p>In our case the mobile version is mainly used for providing only a few applications from the whole site; hours of operation, maps, driving directions, event calendar, sending a txt message, other contact info and available demo rackets.</p><p>In the next stage we'll have tennis court scheduler and mobile payments integrated. That should make the % decline as well because those are some of the most used parts of the site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731120">23</a> by Raymond Camden
		posted on 3/31/2011 at 12:15 AM
		</div>
		<div class="comment_text"><p>I wonder how many people though will _always_ assume a mobile version &lt; desktop version? Like even if you built everything, and it worked awesome, how many people are just going to assume its a pale shadow of the real thing and take the way out?</p><p>I _hate_ to question user's actions, but perhaps this would be a use case for a "Are you sure" type prompt when clicking. (I cannot believe I said that.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731123">24</a> by Jaana Gilbert
		posted on 3/31/2011 at 12:17 AM
		</div>
		<div class="comment_text"><p>I'm one to admit that I always assume the mobile version to have limited functionality compared to the main site :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731122">25</a> by Matthew Reinbold
		posted on 3/31/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>A better solution would be not to detect and support particular devices but optimize the user experience to the user's request (screen size, dpi, orientation, etc).</p><p>For a little under a year "Responsive Web Design" has become a hot topic among designers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731124">26</a> by Raymond Camden
		posted on 3/31/2011 at 12:28 AM
		</div>
		<div class="comment_text"><p>There is only so much screen size can tell you. It does not tell you, for example, that touch events would be supported, or that hover automatically would not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731125">27</a> by Matthew Reinbold
		posted on 3/31/2011 at 1:04 AM
		</div>
		<div class="comment_text"><p>Hover as a means of conveying additional information is a crutch for bad design and totally impractical for devices that feature direct manipulations (how do you hover a tooltip when using your thumb?).</p><p>Responsive web design isn't about doing decision trees and programming to specific screen sizes; that wouldn't be much better than device sniffing. Instead, its about creating a single fluid experience supporting any screen consumption.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.alistapart.com%2Farticles%2Fresponsive-web-design%2F%3A4tt8KjcLA9V-b08P2OEoLZk252M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alistapart.com/articles/responsive-web-design/">http://www.alistapart.com/a...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731130">28</a> by Raymond Camden
		posted on 3/31/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>I'm not arguing against the desired result - I'm arguing that it can be achieved by just checking simple things like current screen size.</p><p>Then again - maybe I'm not getting the whole picture. Reading the article now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731129">29</a> by Raymond Camden
		posted on 3/31/2011 at 1:27 AM
		</div>
		<div class="comment_text"><p>Very interesting article. And I grok the intent. Just wondering how well it would work with an existing site. I think a 'second version approach' may be more practical in that case.</p><p>I've got to say- every time I see media queries mentioned the focus is on "do this at size x", and it was nice to see an article talk about the _other_ things they can do - like check resolution and orientation.</p><p>Thanks Matthew.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731128">30</a> by Matthew Reinbold
		posted on 3/31/2011 at 7:43 PM
		</div>
		<div class="comment_text"><p>For anyone else interested in the technique there's a great site to help quickly grok what happens on different devices when using that technique:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmediaqueri.es%2Fpopular%2F%3AvkoR1Gdsaw-w1mplNWarTjaVCWA&amp;cuid=3321886" rel="nofollow noopener" title="http://mediaqueri.es/popular/">http://mediaqueri.es/popular/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731127">31</a> by Paco
		posted on 6/23/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>Hi Raymond what if I wanted to check if a mobile supports JQuery Mobile??</p><p>I know how to do this using JQuery:</p><p>if($.mobile.gradeA()){</p><p>}</p><p>How can I do this using Coldfusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731126">32</a> by Raymond Camden
		posted on 6/23/2011 at 1:58 AM
		</div>
		<div class="comment_text"><p>You can't. It's a JS function. You could use JS to do a XHR request to CF and store a session variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731131">33</a> by Paco
		posted on 6/23/2011 at 2:11 AM
		</div>
		<div class="comment_text"><p>Yes been searching on Google but so far no luck even with PHP. Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731132">34</a> by Raymond Camden
		posted on 6/23/2011 at 2:28 AM
		</div>
		<div class="comment_text"><p>Well - no surprise. It's client side code. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731133">35</a> by Peter Kleid
		posted on 7/2/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Ray, until I saw that YOU recommended <a href="http://disq.us/url?url=http%3A%2F%2Fdetectmobilebrowser.com%3AMAEhwKTES2ZVNHI_bQ7zeaceRSg&amp;cuid=3321886" rel="nofollow noopener" title="detectmobilebrowser.com">detectmobilebrowser.com</a>, I wasn't sure if I should put much faith in it.  My moto: "when in Rome or writing CF apps, do as Camden does."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731226">36</a> by Raymond Camden
		posted on 7/2/2011 at 7:48 PM
		</div>
		<div class="comment_text"><p>Heh, I can't take credit for that find. I believe it was Dave Ferguson who added it to BlogCFC first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731245">37</a> by Yvonne
		posted on 9/23/2011 at 7:07 PM
		</div>
		<div class="comment_text"><p>Thanks for this - I have made a mobile version of my site and wanted to do an automatic redirect, so this is exactly what I was looking for.</p><p>Just one tiny thing (from a usability and accessibility point of view): the label of the link to exit the mobile version should be "exit mobile version" and not "click here".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731244">38</a> by Raymond Camden
		posted on 9/23/2011 at 7:11 PM
		</div>
		<div class="comment_text"><p>"click here" - I was channeling my 1998 Web self.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731246">39</a> by Tom Jenkins
		posted on 2/27/2012 at 5:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I'm using the reg ex on the USER_AGENT in exactly the same format as above. Quick question though; what does the second half actually check for? As I have been experiencing massive problems with XmlParse on the same site as that reg ex  ... as for some reason it gets caught in the &lt;cfif&gt; block. As soon as I remove the second half of the &lt;cfif&gt; it works fine?</p><p>Most odd :(</p><p>Look forward to you reply</p><p>Kind regards</p><p>Tom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731242">40</a> by Raymond Camden
		posted on 2/27/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Eh? I have no idea what you are talking about. xmlparse? Are you parsing the result of hitting one of the pages on your site? Are you using the feature where xmlParse can open a URL? If so- I assume you are hitting a CFM that spits out XML. Your "mobile friendly" checker should NOT check for requests to pages like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731243">41</a> by Tom Jenkins
		posted on 2/27/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Ok, my bad for not explaining fully, sorry for that. I will try again and hopefully explain myself a little better.</p><p>So, I have your reFindNoCase() mobile check string in my application.cfc, within the onRequestStart function. Within this &lt;cfif&gt; check I have a &lt;cflocation&gt; to the mobile site. Easy so far and works perfectly.</p><p>Now, elsewhere in my application I have a dynamically generated XML sheet, xml.cfm, that returns a valid XML. You can check this here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.lakeside.uk.com%2F_addons%2Flookbook%2Fxml%2F%3AZ3Dry4Xe36BfPr4DdM99iqStJ3M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.lakeside.uk.com/_addons/lookbook/xml/">http://www.lakeside.uk.com/...</a></p><p>However, when I use XMLParse on this working URL, for some reason it gets caught in the initial USER_AGENT "mobile check" within the application.cfc and breaks. This, to a point, makes sense; because the XML that is returned is technically a .CFM page, the onRequestStart will be triggered. What is stumping me is why the USER_AGENT of the XmlParse() function is getting caught in the &lt;cfif&gt;? If I remove the second part of your reFindNoCase() (after the OR) then the returned value of the XmlParse() works in the exact way it should i.e. skipping the mobile site and returning the XML.</p><p>Hopefully that makes a little more sense, sorry for the initial post I was getting a little confused myself and forgot to give enough details.</p><p>Kind regards</p><p>Tom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731247">42</a> by Raymond Camden
		posted on 2/27/2012 at 9:09 PM
		</div>
		<div class="comment_text"><p>Ah yes. So - I'm guessing that the UA sent by ColdFusion (remember, it's CF making a network request to load your XML) is confusig the regex. That means it is a bug for the <a href="http://disq.us/url?url=http%3A%2F%2Fdetectmobilebrowser.com%3AMAEhwKTES2ZVNHI_bQ7zeaceRSg&amp;cuid=3321886" rel="nofollow noopener" title="detectmobilebrowser.com">detectmobilebrowser.com</a> guys. You could work on fixing it, but I'd probably just avoid the issue and say, "if the request is for X, don't check the UA" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731248">43</a> by Raymond Camden
		posted on 2/27/2012 at 9:11 PM
		</div>
		<div class="comment_text"><p>I just did a quick test. The UA ColdFusion is sending is: Java/1.6.0_29.</p><p>It's my JRE version, so the actual # may vary for you.</p></div>
	</div>
</div>
		