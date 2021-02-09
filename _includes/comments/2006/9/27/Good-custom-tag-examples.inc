
<div class="comment" id="c_1713657792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657792">1</a> by TJ Downes
		posted on 9/27/2006 at 7:50 PM
		</div>
		<div class="comment_text"><p>I use custom tags a lot still. I find using CFCs as some do for display items to be just too complex and time consuming. Custom tags are also easily understood by HTML developers, so I can create an app and let the web developers plug it in accordingly.</p><p>Great post Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657804">2</a> by Raymond Camden
		posted on 9/27/2006 at 7:56 PM
		</div>
		<div class="comment_text"><p>I will happily take credit for a blog that just linked to someone else. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657807">3</a> by Dan G. Switzer, II
		posted on 9/27/2006 at 7:58 PM
		</div>
		<div class="comment_text"><p>Custom tags definitely still have a place in your programming arsenal. There are still things that can only be managed easily with custom tags (such as parsing a block of generated content.)</p><p>Custom tags are also a great way to handle the layout of visual elements in your site. They give you a great way to reuse layout elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657809">4</a> by Ben Nadel
		posted on 9/27/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for the link :)</p><p>I agree with you guys. I am a big fan of custom tags. I love love love abstracting out things like navigation:</p><p>&lt;page:navigation&gt;<br>&lt;page:navitem text="home" href="index.cfm" ison="true" /&gt;<br>&lt;page:navitem text="contact" href="contact.cfm" ison="false" /&gt;<br>&lt;page:navitem text="about" href="about.cfm" ison="false" /&gt;<br>&lt;/page:navigation&gt;</p><p>Doing stuff like that allows me to really sepparate the design of the navigation. This might seem smiple, but down the road, when I want to change the navigation layout it's really easy. Think about how hard it would be if the &lt;A&gt; tags where hard coded in each sections navigation??? Now, all I change is the way the parent tag renderes the nav items and viola!</p><p>Custom tags are sweeeeet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657812">5</a> by Mark Fuqua
		posted on 9/27/2006 at 8:50 PM
		</div>
		<div class="comment_text"><p>If you want to see some killer nesting of custom tags, check out the guts of PLUM.  It is an amazing example of custom tag usage and none of them are encoded, you can change them to your hearts content.</p><p>PLUM has got to be one of the most sophisticated and deep use of custom tags out there.  Even if you never use it, you can learn alot just by becomming familar with the code.</p><p>Check it out  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.productivityenhancement.com%3AjBm-xIQx6ij8WX1JUrBp7uHvqIY&amp;cuid=3321886" rel="nofollow noopener" title="www.productivityenhancement.com">www.productivityenhancement...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657813">6</a> by Seb Duggan
		posted on 9/29/2006 at 12:30 PM
		</div>
		<div class="comment_text"><p>I always use custom tags for my page templates: the start of the tag puts in all the page before the content, and the close tage adds all the end of the page.</p><p>Much neater than using a cfinclude to include the page head and fott...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657805">7</a> by Raymond Camden
		posted on 9/29/2006 at 3:01 PM
		</div>
		<div class="comment_text"><p>It makes me happy to see all of you still using CTs. It just _seemed_ to me that they weren't getting nearly as much attention as they used to be. If that is true - but people are still using them - them I'm happy to be wrong. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657814">8</a> by Ben Nadel
		posted on 9/29/2006 at 3:21 PM
		</div>
		<div class="comment_text"><p>All this talk about custom tags got my mind churning. I ran into a CFSetting problem the other day due to a crack-head programmer. Anyway, I wrote this custom tag, thought it was pretty cool. It supports nesting with itself. It basically allows you to turn on and off the EnableCFOutputONly attribute of the CFSetting tag no matter how deeply nested you are in cfsetting tags ... and it requires a close tag (for nesting) that applies the CFsetting proprerties temporarily only to the block of code within. Anyway, thought it was pretty nifty:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbennadel.com%2Findex.cfm%3Fdax%3Dblog%3A297.view%3Am4_XR4td_FKTaUT3s7kqBDHP4KE&amp;cuid=3321886" rel="nofollow noopener" title="http://bennadel.com/index.cfm?dax=blog:297.view">http://bennadel.com/index.c...</a></p><p>Also Seb, I use header / footer includes. But you are right. I have seen the custom tag so many times for the template. I like the look of it. I must start to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657808">9</a> by Seb Duggan
		posted on 9/29/2006 at 3:32 PM
		</div>
		<div class="comment_text"><p>It's also very handy for passing variables to the template - for instance the page title, or - in a site I've just built - whether to include the Google Maps JavaScript in the header or not...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657816">10</a> by Javier Julio
		posted on 9/29/2006 at 5:07 PM
		</div>
		<div class="comment_text"><p>A great post and thanks for sharing these examples! I use custom tags as well rather heavily. I currently use it as a template for my site. I love the encapsulation I get with it and personally I just love tags, they are so readable. I have other custom tags like one named "table" and "column" that create an XHTML data table. Also have one named "secure" to secure pages based on roles and whether a user is logged in. Another favorite of mine is the google style, page spaning pagination (nextn) custom tag I have. And of course all these tags output valid XHTML and use CSS. I'm always on the lookout for other developers tags. They just prove so useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657811">11</a> by Raymond Camden
		posted on 9/29/2006 at 5:10 PM
		</div>
		<div class="comment_text"><p>Javier, when I get around to publishing my data table tab, share yours as well. I'll try to get it down today, if not, it will be after my vacation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657810">12</a> by Javier Julio
		posted on 9/29/2006 at 5:17 PM
		</div>
		<div class="comment_text"><p>Awesome Ray! Your's was the inspiration for mine. I just don't have the sorting implemented in mine as I never had a use for it. The main reason actually for excluding a big feature like that is I'm more interested in using a great JavaScript table sorter instead. I will gladly share mine though with everyone. I currently share my more basic custom tags but I want to share my table and column one along with my paging one too.</p><p>One of the neat things I have about my table custom tag is that its also roles based. So I can determine what columns are shown and which ones are not based on a role. The reason I did this is so the file with my table and columns custom tag calls don't have to have those nasty cfif's determining if the user has a certain role. Don't rush yourself Ray, enjoy your vacation! You definitely need a break. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657815">13</a> by Raymond Camden
		posted on 9/29/2006 at 5:21 PM
		</div>
		<div class="comment_text"><p>You know - what we really need is a nicer way to share custom tags than the old devex. Like - maybe CFLib. ;) (For those who don't know what I'm joking about - I've been working on upgrading CFLib to support tags and CFCs for about two years. I just never get around to finishing it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657800">14</a> by Javier Julio
		posted on 9/29/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Well if it helps any you better get started son because if not I'm gonna have to beat you to the punch on that one. ;) I think its a great idea to have cflib support custom tags. I used cflib a lot when I was building my Validator CFC and also for helping out on <a href="http://disq.us/url?url=http%3A%2F%2Feasycfm.com%3AewGpkFBzkDc5Kw1zDh88NCuBb1Q&amp;cuid=3321886" rel="nofollow noopener" title="easycfm.com">easycfm.com</a>. If you get it to support custom tags I'll definitely be the first in line (of course after yourself) to offer mine!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657799">15</a> by Raymond Camden
		posted on 9/29/2006 at 5:42 PM
		</div>
		<div class="comment_text"><p>It isn't a question of IF, but WHEN. ;) I actually have a huge thing launching in a few weeks. Huge. I can't say what - but you will see. The code for CFLIB 2 is done actually, just not the back end admin. I'm toying with launching with an "ugly" admin just to get it out the door.</p><p>I'm also doing a new design since the current one is a bit old. The fine folks at Rasteroids are helping me out. They did the design at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.kidgamers.com%3ALtMrC-m2cWv58rin1JWWZe_hXDA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kidgamers.com">http://www.kidgamers.com</a>.</p></div>
	</div>
</div>
		