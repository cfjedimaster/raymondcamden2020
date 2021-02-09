
<div class="comment" id="c_1713712789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712789">1</a> by jyoseph
		posted on 2/12/2009 at 2:05 AM
		</div>
		<div class="comment_text"><p>I think you pretty much nailed this one.</p><p>I started off quite like the example you gave, 0 js experience and was very happy w/ the built in cfdiv/cflayout but as you mentioned, they fall short on customization from a UI standpoint. That's where I started looking for alternatives.</p><p>Now that I've got my bearings I'm strictly using jQuery because, well, the sky is the limit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712787">2</a> by James Allen
		posted on 2/12/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>When I started working on a big .com startup in November 2007 I chose to move to CF8, ModelGlue and Transfer.. A steep learning curve to say the least although one which has proven to be very rewarding.</p><p>Along with that I also chose to go the CFAjax route utilising the inbuilt functions (this is with the first release of CF8).<br>However, while they were useful I soon found that they were *massively* bloated. I think at one point the JS includes were adding 700k to the download size.<br>I also found a nasty memory leak in CFWINDOW which led me to have to switch to JQuery.</p><p>It was the best move I could have made! Not only was the download size slashed (initially went from 700k to about 130k) but everything suddenly became a lot simpler yet massively more powerful.</p><p>I kept one facet of CF8 Ajax and that was the brilliant CFAJAXPROXY which forms the core of all my sites operations. The rest I have built with JQuery and a number of useful plugins.<br>It really is an essential toolkit and one that I will never be without on any future website projects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712786">3</a> by Kumar
		posted on 2/12/2009 at 2:15 AM
		</div>
		<div class="comment_text"><p>Starting as someone with close to 0 JS experience, I started with CF8 Ajax features and then moved onto jQuery. The main thing to be careful with jQuery is testing your code on IE.<br>The main reason I had to look at jQuery is that CFAjax Grid was a bit on the slower side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712792">4</a> by Tim Garver
		posted on 2/12/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>All very good points.<br>But you hit the nail on the head with manipulation of the DOM for the jQuery points.</p><p>Form validation is a good one, its possible to overwrite the cfform.js file on the server so it could use jQuery :) so those could be combined.<br>On the other hand, i never use that and end up using a <br>(Pre CF8) ,CFC by Rob Gonda called ajax.cfc it comes with a js model you include on any page and makes for light js coding for ajax to cfc communication. I use this for forms submits as well as forms validation, the amount of js code that i have to write with the amount that gets written for me and i still have to write with CFAjax is much less.</p><p>I end up using jQuery to handle all the events and fire off the calls to ajax.cfc</p><p>anyway my $0.02 worth</p><p>Good discussion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712788">5</a> by Ron West
		posted on 2/12/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think one of the major distinctions that you could make here is the for people who want to do more than the simple out of the box Ajax interaction that CFAjax offers (for those that like and understand JS) there really is no comparison - jQuery.  CFAjax for me is designed to add functionality to a web site for those don't know JS.</p><p>And binding actions to forms with jQuery is as simple as this:</p><p>$.get( urlToCFC, <br>       {method: "myMethod", arg1:"value", arg2:"value"}, <br>       function(msg){ <br>          $$.html(msg);<br>      });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712793">6</a> by tanguy rademakers
		posted on 2/12/2009 at 3:18 AM
		</div>
		<div class="comment_text"><p>i think the built-in tools will always allow you to go from zero to something incredibly fast, at the cost of limiting your top speed so to speak. They have a much much gentler learning curve (you can usually copy and paste your way to something that at least looks pretty good), but the magic tags have limits, and they are hard limits. This isn't a bad thing - cfwindow and friends can give you a quick taste of the "new hotness" in web ui development, and, if you find you want/need more, there are loads of great js frameworks to choose from.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712791">7</a> by Jeff Self
		posted on 2/12/2009 at 3:31 AM
		</div>
		<div class="comment_text"><p>Another thing to mention is which is better from a skills point of view.  CFAjax is good for ColdFusion.  Period.  Useless in Django, Ruby on Rails, PHP, .Net, etc.  jQuery works across the board.  I, for one, would like to have a skillset that doesn't limit me.</p><p>Lets be honest.  You've got to know more than one technology anymore.  We're now looking into working with ESRI ArcGIS Server 9.3.  It allows you to get its data with Javascript API's or Flex API's.  What javascript framework do they use?  Dojo.  So now, I've got to learn this one as well.  Its really pretty overwhelming.  The amount of stuff we have to learn on an ongoing basis is staggering.  Too bad management doesn't seem to realize this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712794">8</a> by Henry Ho
		posted on 2/12/2009 at 3:42 AM
		</div>
		<div class="comment_text"><p>Use CF ajax tags first, get it working and then substitute with jQuery UI or something else when really needed. (like.. when the included JS are really too slow for the performance of your app)</p><p>Take a look at <a href="http://disq.us/url?url=http%3A%2F%2Fcfjqajax.riaforge.org%2F%3A2pecdR1tzLOsjlUjiO6_zZYxxQQ&amp;cuid=3321886" rel="nofollow noopener" title="http://cfjqajax.riaforge.org/">http://cfjqajax.riaforge.org/</a> if you haven't already.  CF8-style ajax tag that uses jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712796">9</a> by Abram
		posted on 2/12/2009 at 5:48 AM
		</div>
		<div class="comment_text"><p>Just to spin this topic a little, what about Ext?  I started out using prototype way back (pre CF8. heck, I've still never cfwindowed....) and have since moved to Ext, which has tons of very slick widgets if that is your pleasure as well as a framework that can do just about anything with.</p><p>It can be on the heavy side if you use a lot of the widgets, but you can reduce the js by just including the parts of the library you actually use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712795">10</a> by Scott P
		posted on 2/12/2009 at 5:55 AM
		</div>
		<div class="comment_text"><p>jQuery - hands down, no contest.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.gruppo4.com%2F%7Etobia%2Fcross-slide.shtml%3AFUQjXiDTjbwtbuCFFQ--PU-iHIY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gruppo4.com/~tobia/cross-slide.shtml">http://www.gruppo4.com/~tob...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712803">11</a> by Raymond Camden
		posted on 2/12/2009 at 6:59 AM
		</div>
		<div class="comment_text"><p>@ScottP: That plugin is slicker than Slick Rick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712799">12</a> by radekg
		posted on 2/12/2009 at 7:22 AM
		</div>
		<div class="comment_text"><p>jquery is the winner. javascript is really easy to learn and jquery documentation is really useful.<br>i really don't see the point paying for cf ajax stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712790">13</a> by Raymond Camden
		posted on 2/12/2009 at 7:26 AM
		</div>
		<div class="comment_text"><p>@radekg: Eh? It's kind of hard to do database queries with jQuery. ;) Seriously though, this was a blog article on using ajax with CF via the built in Ajax features or along with jQuery. I'm not sure how your comment applies here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712797">14</a> by Mike Fleming
		posted on 2/12/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>@ Jeff Self - Your comment was exactly what I was thinking.  The CFAjax features are rather nice and easy to use, but can only be used with ColdFusion.  If you program in multiple languages why not learn something that you could use in everything you do?  Sure, you would have to write some of the data pieces that are speicifc to whatever language you are working in, but the core jQuery pieces would be the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712798">15</a> by Akira
		posted on 2/12/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>CFAjax is nice when you are first learning and don't know a lot about JavaScript. When you learn more, then it becomes less flexible to you.</p><p>What I don't like about Adobe's implementation of the tags is that they seem to load every ajax library under the sun onto the page. Also, they are using an older version of the YUI libraries and if you write a page using the newer YUI stuff, the CFAjax tags will break the YUI.</p><p>I prefer to use jQuery for the easy stuff and YUI for the heavy lifting now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712802">16</a> by Raymond Camden
		posted on 2/12/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>Akira - to be fair to Adobe, I don't think most users will be mixing CFAjax + custom YUI stuff.</p><p>In this comment, CFAjax refers to ui/binding aspects of CF, not the complete package - again - we need to be sure we 'pick on' the right things when we do nitpick CF (or jQuery for that matter). Nothing about CF's default YUI libraries prevents you from using the plumbing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712800">17</a> by Akira
		posted on 2/12/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>I used to use the libraries in CFIDE, but Yahoo keeps adding good stuff to the library so I downloaded the new one and started using it. But then I learned combining it with tags like &lt;cfmenu&gt; makes the vanilla YUI things break. :)</p><p>It's a problem of js tag order and js tag versions. That's all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712811">18</a> by David Hammond
		posted on 2/12/2009 at 7:44 PM
		</div>
		<div class="comment_text"><p>One thing that hasn't been mentioned is that jquery and other pure javascript libraries are updated much more often than ColdFusion.  If something doesn't work, it might work next week when the next release comes out.  Also, there is incredibly healthy competition right now among the various libraries and they're becoming more mature and powerful very quickly.</p><p>Off subject, I have used dojo a lot.  It has a very comprehensive feature set that makes sense if you're building an application that needs a consistent set of widgets.  jquery UI is promising but doesn't seem to be there yet.  I have not used jquery much yet, but do intend to use it for websites that just need some splash here and there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712810">19</a> by Raymond Camden
		posted on 2/12/2009 at 7:49 PM
		</div>
		<div class="comment_text"><p>@David: Well let's be fair here. It is a heck of a lot easier to update jQuery than it is ColdFusion (or .Net, or PHP for that matter). Not to disparage jQuery in any way whatsoever, but I really don't think that is a fair comparison. It &lt;i&gt;is&lt;/i&gt; true that for &lt;i&gt;purely&lt;/i&gt; Ajax considerations, you can get 'newer' libraries quicker by using jQuery, Ext, etc, out of the box. I don't think we should expect Adobe to release a hotfix, or a whole new version, every time YUI is updated.</p><p>Now - one could make the argument - why not make it easier to upgrade the libraries. That could possibly be done, but from what I know of the 'process' at Adobe, this would necessarily still be a complex operation due to all the testing/QA/etc that must be done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712809">20</a> by David Hammond
		posted on 2/12/2009 at 8:02 PM
		</div>
		<div class="comment_text"><p>@Rayond: I think you misinterpreted my comment a bit.  I was not trying to disparage ColdFusion (which I love) at all and it didn't even occur to me that Adobe should try to release a new update every time YUI is updated.  I was only stating one of the reasons I prefer to use a pure javascript library for ajax stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712812">21</a> by Raymond Camden
		posted on 2/12/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>@David - Gotcha there. Sorry, I'm still hurting from radekg's earlier snip. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712813">22</a> by 6dust
		posted on 2/13/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>I was initially impressed with how simple CF8 made AJAX widgets, and started following the underlying libraries after that.  Since then, I have become a heavy user of EXT.  The newer versions offer some incredible widgets that, at least for now, jQueryUI is nowhere near.  If I don't need widgets, then absolutely I will turn to jQuery.  The speed and chaining is just amazing.</p><p>The EXT includes can get fairly large, but since my web apps are entirely internal to a corporation, it's really a non-issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712814">23</a> by Patrick
		posted on 2/13/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>I prefer using own JavaScript instead of CF8 Ajax. Why? Try to validate a site, using CF8 AJAX, as XHTML Strict. You will fail!! When writing own stuff, you can wrap all JS with CDATA comments, so it becomes valid! Just my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712815">24</a> by Raymond Camden
		posted on 2/13/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>Ok, so this is a bit OT (but it's my blog, so I'm allowed, right?), but when was the last time the average user cared if a web site was XHTML Strict? If it displays right in the top browsers, does it really make sense to wrap your JS in cdata? I mean maybe I'm just being old school, but I find all this concern about strict html to a be a bit... well, silly. And impractical as well. You won't convince me that &lt;br/&gt; is that much better than &lt;br&gt;.</p><p>I -know- I'm going to get flamed for this. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712819">25</a> by Patrick
		posted on 2/14/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>Well Ray you're really old school ;)<br>In germany we care about web standards. All websites i created the last 3 years are valid xhtml strict! If you take care about standards, you will have much less trouble, fixing css for IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712816">26</a> by David McGuigan
		posted on 2/28/2009 at 4:40 AM
		</div>
		<div class="comment_text"><p>I feel the need to leave the comment that when I just Googled "ColdFusion 8", this blog entry was the 5th result. The 5th result.</p><p>That is mad nuts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712817">27</a> by Raymond Camden
		posted on 2/28/2009 at 5:46 AM
		</div>
		<div class="comment_text"><p>I've given up wondering about how and why pages get high rankings in Google results. For example, I know that having text link ads on the site reduces my Page Rank, but I've yet to see any drop in traffic since I've used them (and frankly, I need the ad money to help pay for the server).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712818">28</a> by James Allen
		posted on 2/28/2009 at 3:29 PM
		</div>
		<div class="comment_text"><p>To be honest I don't think you have anything to worry about rankings wise. Your site is very well established, contains constantly changing, quality content and is an authority in the Coldfusion world.</p><p>All these factors are *exactly* what Google loves and so not ranking you highly would make no sense. As long as you provide quality, relevant content Google will rank you well - at least that's how I see it. I'm not always sure PR is the most important thing to be honest.</p><p>I was amazed yesterday when I found my latest blog post (on a blog I rarely update) appeared 4th on the results for 'microsoft script debugger vista'. It took less that 24 hours for it to appear there. I know it's a specific search term but it still tickled me that I ranked that quickly on the first page. Google knows that my blog post is relevant and so gave it the ranking it deserves so that people can find it.. Spot on. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712824">29</a> by David McGuigan
		posted on 2/28/2009 at 5:11 PM
		</div>
		<div class="comment_text"><p>I wasn't being critical or even analytical.</p><p>Just noting how funny it was that this, of all of Ray's (excellent) blog posts, appeared 5th on a generic, broad search for "ColdFusion 8".</p><p>Mad. Nuts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712820">30</a> by Raymond Camden
		posted on 2/28/2009 at 6:57 PM
		</div>
		<div class="comment_text"><p>@JamesAllen: I've seen even quicker responses at times. I think I've seen my blog posts picked up &lt; 1 hour.. which is scary.</p><p>@David: To be honest, any talk of SEO might as well be Magic to my ears. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712822">31</a> by James Allen
		posted on 2/28/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>That's brilliant Ray! Although it's what I'd expect with a site like yours as you constantly post quality content and must have tons of inbound links from related sites.</p><p>The more 'active' Google consider your site the more the bot will visit to make sure it's as up-to-date as possible.</p><p>I truly believe that the majority of SEO is simply based on running a quality site with valuable content.. Google's algorithms have been refined so much over the years that I feel it just 'knows' what should be ranked..<br>The people who slave over SEO and do not get the results they want are usually running a pretty poor site in my experience..</p><p>You've got some real power here Ray to get the word out on anything you want pretty much.. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712825">32</a> by Raymond Camden
		posted on 2/28/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>My last OT post on the thread - I promise. ;)<br>@JA: Now I just need to turn my power to evil and my plan will be complete! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712823">33</a> by Kevin
		posted on 3/3/2009 at 9:50 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>One key (well maybe two) that you did not mention is that CF 8 AJAX components are not based on the latest iterations of YUI or EXTjs.  This is really critical and is one reason we stopped using the builting components.</p><p>For Example CFGRID AJAX is looks great, but can not be easily customized without attaching custom EXT code. For example I needed both an autosearch and pagination on the same grid. Can do that by default with CFGRID.</p><p>No if you use jqGrid for jQuery you can and for that matter do way more that CFGRID ever can (unless they upgrade to at least ver 2. of the components).</p><p>Also page size. the Sheer number of extra libraries that the CF AJAX components load that you don't need is unecessary.</p><p>Ok that may have been more than 2 points. I will say though cfajaxproxy with jQuery rocks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712827">34</a> by Guillermo Dewey
		posted on 8/19/2011 at 4:08 AM
		</div>
		<div class="comment_text"><p>has anybody replace the ext lib from the coldfusion server 9.0.1 to upgrade from 3.1 to 3.3 and see if CFAjax 8 things still work?</p><p>I am tempted to take advantage of the Sencha ExtStudio to take advantage of the allready loaded ext lib on the server for the coldfusion apps..</p></div>
	</div>
</div>
		