
<div class="comment" id="c_1713721099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721099">1</a> by Kevin Penny
		posted on 1/11/2010 at 8:53 PM
		</div>
		<div class="comment_text"><p>Awesome Ray!  I was going to do this exact same thing!  I also wanted an easy way to convert tag to script - with every tag/language component (including the loops etc).  Video shows a great start - I'd love to contribute to this over time - keep it up</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721113">2</a> by Raymond Camden
		posted on 1/11/2010 at 8:55 PM
		</div>
		<div class="comment_text"><p>To add a bit more support, cfabort/cfinclude:</p><p>&lt;!--- aborts, first with no showerror ---&gt;<br>&lt;cfset buffer = rereplaceNoCase(buffer, "&lt;cfabort&gt;", "abort;", "all")&gt;</p><p>&lt;!--- aborts, now w/ showerror ---&gt;<br>&lt;cfset buffer = rereplaceNoCase(buffer, "&lt;cfabort[[:space:]]+showerror[[:space:]]*=[[:space:]]*(.*?)[[:space:]]*&gt;", "abort(showerror=\1);", "all")&gt;</p><p>&lt;!--- cfinclude ---&gt;<br>&lt;cfset buffer = rereplaceNoCase(buffer, "&lt;cfinclude[[:space:]]+template[[:space:]]*=[[:space:]]*""(.*?)""[[:space:]]*&gt;", "include template=""\1"";", "all")&gt;</p><p>Oh - those lines use "buffer" which come from my test script, not the extension. I'll add these in later today and update the zip if folks think it is useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721119">3</a> by Sam Farmer
		posted on 1/11/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>As Kevin said, Awesome!  This will prove to be very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721118">4</a> by Gary Funk
		posted on 1/11/2010 at 9:36 PM
		</div>
		<div class="comment_text"><p>@Ray: This is the greatest thing you have done this week.This is totally WOW!. If you can convert a full document, you can clean out your wishlist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721116">5</a> by Robert Gatti
		posted on 1/11/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>I know I'm going to be odd guy out but I fail to understand the reasoning behind transforming working code from one language to another. I'm trying to think from the point of someone else on my team sync'ing and all of a sudden seeing totally different looking code, not to mention that I should really go and test the cfc to make sure nothing broke (but I know I wouldn't be diligent at).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721115">6</a> by Raymond Camden
		posted on 1/11/2010 at 11:31 PM
		</div>
		<div class="comment_text"><p>If I had a working tag based CFC, I would not change it. This is code in older, non-MVC format, so it's a lot of business logic mixed in with views.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721121">7</a> by Akbarsait
		posted on 1/11/2010 at 11:32 PM
		</div>
		<div class="comment_text"><p>This is really awesome! And will be really helpful to head start on creating our CFB Extensions. I have added this to CFBuilder Tutorials page of my site here - <a href="http://disq.us/url?url=http%3A%2F%2Fur.ly%2F3UVG%3ANaQ99NqvFkNvfnmVtxq-7WfPMuU&amp;cuid=3321886" rel="nofollow noopener" title="http://ur.ly/3UVG">http://ur.ly/3UVG</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721120">8</a> by John C. Bland II
		posted on 1/12/2010 at 10:39 AM
		</div>
		<div class="comment_text"><p>Ray, I'm a fiend for xhtml compliant cf code (lol) and it doesn't work for that.</p><p>BEFORE:<br>&lt;cfset arguments.targetUrl = variables.issuesUrl &amp; arguments.targetUrl /&gt;<br>&lt;cfset arguments.targetUrl = rereplace(arguments.targetUrl, "{verb}", arguments.verb, "all") /&gt;<br>&lt;cfreturn arguments.targetUrl /&gt;</p><p>AFTER:<br>arguments.targetUrl = variables.issuesUrl &amp; arguments.targetUrl /;<br>arguments.targetUrl = rereplace(arguments.targetUrl, "{verb}", arguments.verb, "all") /;<br>&lt;cfreturn arguments.targetUrl /&gt;</p><p>Notice the /; at the end and no cfreturn converted?</p><p>Also, it'd be sweet if you added a second option to wrap in cfscript or in the default option force a wrap. Something there would be nice.</p><p>Great idea and work though. I was wondering if someone was going to do this the other day. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721117">9</a> by Peter Boughton
		posted on 1/12/2010 at 5:19 PM
		</div>
		<div class="comment_text"><p>John, whilst I am also very much in favour of self-closing tags like cfset (for the improved readability it provides), it is entirely incorrect to call it "xhtml compliant cf code", because it is complies with neither HTML nor XML standards.</p><p>However, as you have demonstrated, CFML does share many of the complexities of HTML (and indeed has many more besides), and - unless you're able to restrict yourself to a very strict subset - attempting to parse CFML solely with RegEx will lead to madness. There are just too many valid constructs that will trip you up.</p><p>Something as simple as this will trip it up:<br>&lt;cfset HtmlCode = '&lt;input type="text"/&gt;' /&gt;</p><p>(And I can provide plenty more real-world examples)</p><p>Which isn't to say this might not be useful - for anyone insane enough to actually want CFScript - but it's important to make clear that a converter like this is at best an 80-90% job, and is likely to need human attention afterwards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721124">10</a> by Raymond Camden
		posted on 1/12/2010 at 5:21 PM
		</div>
		<div class="comment_text"><p>Woah, "for anyone insane enough to actually want CFSCript" - I guess you aren't a fan then? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721122">11</a> by Peter Boughton
		posted on 1/12/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>Not a fan of brace-based languages, no.</p><p>Which isn't to say I'm entirely opposed to CFScript, but using it primarily is insane.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721125">12</a> by Raymond Camden
		posted on 1/12/2010 at 5:57 PM
		</div>
		<div class="comment_text"><p>We will have to agree to disagree. ;) I love it - and use it 100% of the time in my CFCs. In my views,  not as much of course. It doesn't make sense for HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721126">13</a> by Marko Simic
		posted on 1/12/2010 at 6:40 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Good luck with converter. Just thinking of it I foreseen dozens of problems. Afraid to  think what will pop up during development :) But, as such it's quite a challenge.</p><p>PS<br>cfscript ftw :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721104">14</a> by Kevin Penny
		posted on 1/12/2010 at 8:05 PM
		</div>
		<div class="comment_text"><p>@Ray - <br>Maybe something you've thought of before, but I've created and used other cfml parsing engines that attempt to either reformat or generate cfml etc - What I've found seems to work pretty well at times is to treat a tag as a valid xml node - the perfect example might be the cfloop tag - <br>For example - if you put an ending /&gt; at the end of a cfloop beginning block, you can surround the initial tag and simply parse it<br>i.e.<br>&lt;cfloop from="1" to="#arraylen(x)#" index="i"&gt;<br>becomes<br>&lt;cfloop from="1" to="#arraylen(x)#" index="i"/&gt;<br>then surrounding becomes:<br>&lt;tag&gt;<br>&lt;cfloop from="1" to="#arraylen(x)#" index="i"/&gt;<br>&lt;/tag&gt;<br>And voila, you have an easy way to parse 'most' cfloops in this fashion, ad can be as dynamic as you want.</p><p>Just some gas for the engine -</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721102">15</a> by Raymond Camden
		posted on 1/13/2010 at 3:24 AM
		</div>
		<div class="comment_text"><p>I've updated the download to look for / at the end of cfset. It also looks for cfabort and cfinclude.</p></div>
	</div>
</div>
		