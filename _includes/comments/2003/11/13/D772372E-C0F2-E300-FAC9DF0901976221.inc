
<div class="comment" id="c_1713615115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615115">1</a> by Rob Brooks-Bilson
		posted on 11/14/2003 at 3:23 AM
		</div>
		<div class="comment_text"><p>Now I know you aren't reading my articles! ;-) I wrote about this in my CFC Tips article (number 7) on <a href="http://disq.us/url?url=http%3A%2F%2Foreilly.com%3A9KII0OPSYjLzZzyrdhTcJspyiHA&amp;cuid=3321886" rel="nofollow noopener" title="oreilly.com">oreilly.com</a> back in September:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.oreillynet.com%2Fpub%2Fa%2Fjavascript%2F2003%2F09%2F24%2Fcoldfusion_tips.html%3Fpage%3D2%3AvKr784Ye4uBy0An_mPG2-4bwess&amp;cuid=3321886" rel="nofollow noopener" title="http://www.oreillynet.com/pub/a/javascript/2003/09/24/coldfusion_tips.html?page=2">http://www.oreillynet.com/p...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615107">2</a> by Matt Liotta
		posted on 11/14/2003 at 4:49 AM
		</div>
		<div class="comment_text"><p>Actually, it isn't supposed to default to anything. See the documentation, they specifically made the output attribute have three states.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615110">3</a> by Raymond Camden
		posted on 11/14/2003 at 5:37 AM
		</div>
		<div class="comment_text"><p>It's what I get for skimming, not reading, but at least I know I wasn't alone in missing it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615108">4</a> by seancorfield
		posted on 11/14/2003 at 9:46 AM
		</div>
		<div class="comment_text"><p>The docs say:</p><p>output - Optional - Function is processed as standard CFML<br>This attribute is used only for a component.<br>º yes: the function is processed as if it were within a cfoutput tag<br>º no: the function is processed as if it were within a cfsilent tag</p><p>The docs correctly state the behavior of both output="yes" and output="no" but they do not say what the default is or what the behavior is when you omit output= - unhelpful tho' that is, the ISO standards word for this is "undefined behavior" which means all bets are off... :)</p><p>I'll take the issue up with the CF product team (and the docs team).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615106">5</a> by Matt Liotta
		posted on 11/14/2003 at 9:56 AM
		</div>
		<div class="comment_text"><p>Sean, you must be reading the wrong documentation.</p><p>From livedocs for CFMX 6.1...</p><p>Specifies under which conditions the function can generate HTML output.</p><p>yes: The entire function body is processed as if it were within a cfoutput tag. Variables names surrounded by number signs (#) are automatically replaced with their values.</p><p>no: The function is processed as if it were within a cfsilent tag</p><p>If you do not specify this attribute, the function body is processed as standard CFML. Any variables must be in cfoutput tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615109">6</a> by seancorfield
		posted on 11/14/2003 at 10:14 AM
		</div>
		<div class="comment_text"><p>Matt, try not to be such a smartass all the time... :)</p><p>Here's the docs I was quoting:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F6%2FCFML_Reference%2FTags-pt145.htm%3AWnutsSxNwkuXLNjzRMR_HSAyOcU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/6/CFML_Reference/Tags-pt145.htm">http://livedocs.macromedia....</a></p><p>Sounds like you found a page that explicitly specifies three behaviors? Let us know what it is and I'll pass that on to the product and docs teams along with my previous message. Thanx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615113">7</a> by seancorfield
		posted on 11/14/2003 at 10:17 AM
		</div>
		<div class="comment_text"><p>Looks like this is the page you're quoting?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F6.1%2Fhtmldocs%2Ftags-p43.htm%3AYFTu1UAkVBaJMaOUiSOBkintBJw&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/6.1/htmldocs/tags-p43.htm">http://livedocs.macromedia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615111">8</a> by Matt Liotta
		posted on 11/14/2003 at 10:47 AM
		</div>
		<div class="comment_text"><p>Correct, but I thought it was clear that I was quoting from the CFMX 6.1 documentation on livedocs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615116">9</a> by seancorfield
		posted on 11/14/2003 at 6:49 PM
		</div>
		<div class="comment_text"><p>Now we have the URLs for both references, it is clear - it wasn't before. We both should have quoted our references first time around (I did at least quote verbatim!).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615120">10</a> by Matt Liotta
		posted on 11/14/2003 at 7:03 PM
		</div>
		<div class="comment_text"><p>I simply surfed over to livedocs for CFMX 6.1 and copied and pasted what the documentation said for the output attribute. I further indicated that it was from livedocs for CFMX 6.1. Granted I didn't include the URL, but there is only one URL that has the documentation for cffunction for CFMX 6.1 on livedocs, so I thought it was pretty obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615117">11</a> by David K
		posted on 11/14/2003 at 7:51 PM
		</div>
		<div class="comment_text"><p>Thanks guys. Very informative AND entertaining to boot! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615118">12</a> by seancorfield
		posted on 11/14/2003 at 9:04 PM
		</div>
		<div class="comment_text"><p>Matt, you say "there is only one URL that has the documentation for cffunction" but I've already quoted *two* URLs with documentation for the output= attribute :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615119">13</a> by Matt Liotta
		posted on 11/14/2003 at 11:25 PM
		</div>
		<div class="comment_text"><p>Come on Sean! I stated, "Granted I didn't include the URL, but there is only one URL that has the documentation for cffunction for CFMX 6.1 on livedocs, so I thought it was pretty obvious."</p><p>The two URLs you quoted were for CFMX and CFMX 6.1 respectively. Please read my comments more carefully as I specify CFMX 6.1 on purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615114">14</a> by seancorfield
		posted on 11/14/2003 at 11:50 PM
		</div>
		<div class="comment_text"><p>Yup, hadn't noticed they were from different versions since I'd located them just by searching for "livedocs cffunction". Interesting that the 6.0 docs didn't mention the behavior of omitting the attribute but the 6.1 docs do mention it.</p><p>As you pointed out on the CFCDEV list, a lot of people don't know about this subtle behavior and even reading the docs it's easy to miss since that's effectively just a one-line change between versions...</p><p>I wonder if the behavior did actually change between 6.0 and 6.1 or whether it was just a doc change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615122">15</a> by Chris Wigginton
		posted on 11/21/2003 at 7:49 PM
		</div>
		<div class="comment_text"><p>same behavior in 6.0, I fixed this with</p><p>&lt;cfcomponent&gt;<br>&lt;cfsetting enablecfoutputonly="yes"&gt;</p><p>&lt;!--- functions here ---&gt;</p><p>&lt;cfsetting enablecfoutputonly="no"&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		