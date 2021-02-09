
<div class="comment" id="c_1713728098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728098">1</a> by Todd Rafferty
		posted on 12/3/2010 at 6:08 PM
		</div>
		<div class="comment_text"><p>Using FF3.6 / WinXP at work, it's jumping to the appropriate paragraph, but that's it. No highlights, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728100">2</a> by Raymond Camden
		posted on 12/3/2010 at 6:11 PM
		</div>
		<div class="comment_text"><p>So all 3 work, but the 3rd one doesn't highlight? If so - could you do a quick test of just addClass? That's a fairly simple jQuery call. I'd be surprised if it didn't work right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728099">3</a> by Todd Rafferty
		posted on 12/3/2010 at 6:17 PM
		</div>
		<div class="comment_text"><p>What I meant to say is none of your demos are highlighting anything. There's no scrolling, but it does jump to the appropriate paragraph (because that's already built into the browser, if you specify a #id and it's the same name as an id on the page, the browser will already jump to that section). Let me see if I can debug what's going on. :|</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728101">4</a> by Todd Rafferty
		posted on 12/3/2010 at 6:23 PM
		</div>
		<div class="comment_text"><p>The highlighting is working now, whatever you fixed. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728103">5</a> by Todd Rafferty
		posted on 12/3/2010 at 6:24 PM
		</div>
		<div class="comment_text"><p>Alright, if I leave firebug open, your code works. If I close firebug, your code doesn't work. I guess all the console.logs() are screwing things up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728102">6</a> by Zephirnl
		posted on 12/3/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>For me same, nothing happens in FF unless I activate Firebug. Chrome works flawlessly (winXP).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728111">7</a> by Rodney Rehm
		posted on 12/3/2010 at 6:56 PM
		</div>
		<div class="comment_text"><p>Before Firefox 4 there was no native console. You only got that via Firebug. In general haveing console calls in production or publication code is a bad idea.</p><p>What happens if the document has an element with id="p1"? An easy check if the given hash is already known to the document could be: $(':target').length</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728105">8</a> by xibris
		posted on 12/3/2010 at 6:58 PM
		</div>
		<div class="comment_text"><p>does not work in firefox</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728107">9</a> by Ahmed Almonajed
		posted on 12/3/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>The demos doesn't work totally and when i tried to trace your demos code, the following error message appeared "console is undefined".<br>I don't know if this is the main problem that prevents the code to be executed.</p><p>Thanks for your important and helpful posts, I'm using them as my tutorials :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728110">10</a> by David Young
		posted on 12/3/2010 at 7:12 PM
		</div>
		<div class="comment_text"><p>jQuery(function($){<br>			var a=location.hash.length&gt;0?location.hash.replace(/\#/g,''):null,index=0,$p=$('p'),y=0;<br>			if(a!==null){<br>				index=((a.replace(/\D/g,''))-1);<br>				y=$p.eq(index).addClass('highlight').offset().top;<br>				$('html, body').animate({"scrollTop":y}, 250);<br>			}		<br>		})</p><p>it's probably better to use the .eq() method rather than the nth-child selector, since the nth-child selector will return ALL paragraphs that are the nth-child of their parent.  In addition, I did not do all the checking you had for highlight vs. scrollto...I just simply set it to scroll the window to the paragraph and highlight it by adding the class.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728109">11</a> by Sid Wing
		posted on 12/3/2010 at 7:41 PM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>Yes - I concur with Ahmed - I get the "console undefined" issue - running IE8 on XP</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728106">12</a> by Raymond Camden
		posted on 12/3/2010 at 7:42 PM
		</div>
		<div class="comment_text"><p>Guys - sorry - I thought all web developers used a 'good' browser with console support. ;) I've removed the console messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728112">13</a> by Raymond Camden
		posted on 12/3/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>@rodney - hashes don't work with IDs, they only work with &lt;a name=""&gt;&lt;/a&gt; pairs, so an existing ID of p1 wouldn't matter (afaik).</p><p>@David Young: My thought was that there would normally be a greater div around article content. Like &lt;div id="article"&gt; and that you would simply add that to your main selector. I had thought about doing the animation - but I wanted it more immediate. Personal preference I guess. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728115">14</a> by Todd Rafferty
		posted on 12/3/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ray, hashes do work with ids. You can anchor directly to an id on the page. Case in point, I have an id called 'footer' on my about page ( <a href="http://disq.us/url?url=http%3A%2F%2Fweb-rat.com%2Fabout%2F%23footer%3AAdYG_q7g3WDLivA7xF7L1zOXGvg&amp;cuid=3321886" rel="nofollow noopener" title="http://web-rat.com/about/#footer">http://web-rat.com/about/#f...</a> ). The browser will attempt to scroll down to footer.</p><p>If it doesn't work, don't maximize the browser to the fullest, shrink it a little bit and make sure the scrollbar is active and try it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728114">15</a> by David Young
		posted on 12/3/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>@Raymond</p><p>I agree there would likely be a containing parent element, but in cases where something like this might be implemented on a complex CMS where there are multiple people making edits, you would never want to take anything for granted.  Even though there might be a containing div that you use as your base, nth-child will still return all p elements that are the nth-child of their container, so if your containing div #article, then had subsequent elements containing p's (such as generic divs, blockquote elements, etc), nth-child would still return all of those.  You would have to assume that your containing element would be scoped only to it's immediate children #article &gt; p:nth-child.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728117">16</a> by Todd Rafferty
		posted on 12/3/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p>Another example, I can link directly to a id on your own site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F12%2F3%2FUsing-jQuery-to-mimic-the-NYTs-new-paragraph-linking%23tbContent%3A_JKYPPHo9p-bdd4rtEUP3f0eEJU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/12/3/Using-jQuery-to-mimic-the-NYTs-new-paragraph-linking#tbContent">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728116">17</a> by Raymond Camden
		posted on 12/3/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>@Todd: Very cool - I didn't know that. Has it _always_ worked or only more recently?</p><p>@David: My thinking was that in the CMS, your output would be something like this (this is ColdFusion,but would apply anywhere): &lt;cfoutput&gt;&lt;div id="article"&gt;#fromdb#&lt;/div&gt;&lt;/cfoutput&gt; So in other words, only the text of the article is in the main div. No other layout, etc.</p><p>But yeah - I get your point. Now I'm just being difficult. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728119">18</a> by Todd Rafferty
		posted on 12/3/2010 at 7:59 PM
		</div>
		<div class="comment_text"><p>@Ray: Honestly, I don't know. I do know that it's not a new addition, but I don't know when about this came to be a feature. I do know that majority of all the modern browsers support it. I stopped using &lt;a name=""&gt; ages ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728120">19</a> by Elliott Sprehn
		posted on 12/3/2010 at 8:22 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Using the hash to link to an id has worked for years and years. Neither XHTML or HTML5 have the name attribute on the anchor element. Almost all modern websites use Id, even your blog does for the direct comment linking. ;)</p><p>HTML4 specified that id should work this way (in 1999):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fhtml4%2Fstruct%2Flinks.html%23h-12.2.3%3A6Jkozot6HQ-kQ-lFc2azzLo5n-Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/html4/struct/links.html#h-12.2.3">http://www.w3.org/TR/html4/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728121">20</a> by Raymond Camden
		posted on 12/3/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Thanks @Todd, @Elliott. Every time I build a simple FAQ I end up using &lt;a name&gt; tags. No more!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728132">21</a> by Joe Lillibridge
		posted on 12/3/2010 at 11:19 PM
		</div>
		<div class="comment_text"><p>I threw together a script that highlights paragraphs or sentences and jumps to a specified paragraph.  Parts of it are ugly, but it works.  It's at <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F727261%3AB4zmWz_PjJSfwgy5JmKJfHdZ3hY&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/727261">https://gist.github.com/727261</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728125">22</a> by John Clegg
		posted on 12/3/2010 at 11:44 PM
		</div>
		<div class="comment_text"><p>Nice work! How about the following to highlight sentences?</p><p>// add span tags around all sentances in all paragraphs ( . ! &lt;end of line&gt; are the delimiters )<br>	$("p").each(function() {<br>    	var s = $(this).html();<br>    	s = s.replace(/(.*?)(\.|!|$)/gm,"&lt;span&gt;$1$2&lt;/span&gt;") ;<br>		$(this).html(s);<br>  	});<br>  	// highlight para2, sentence3<br>  	$("span:nth-child(3)",$("p").eq(2-1)).addClass("highlight") ;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728129">23</a> by Drew Wells
		posted on 12/3/2010 at 11:45 PM
		</div>
		<div class="comment_text"><p>This is very cool.  I went a couple steps further and made it scroll to individual sentences and highlight them like NYT.  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdrewwells%2Fsentence-highlighting%3AIAujskxHx94UUXCIeYxW4d_qK8E&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/drewwells/sentence-highlighting">https://github.com/drewwell...</a></p><p>I used kir's idea for finding out the position of a sentence in a paragraph: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fkir%2Fjs_cursor_position%3APQW4XoNiFomiL0-BlEdeQ_arKYs&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/kir/js_cursor_position">https://github.com/kir/js_c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728128">24</a> by Drew Wells
		posted on 12/3/2010 at 11:46 PM
		</div>
		<div class="comment_text"><p>Hope you don't mind, I'll probably blog about this (not that mine gets any traffic).  I found a really cool feature of regexp.replace via the Mozilla docs <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen%2FJavaScript%2FReference%2FGlobal_Objects%2FString%2Freplace%23Specifying_a_function_as_a_parameter%3AIQsBP_F067gbP02JYPfTkOZGIXU&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en/JavaScript/Reference/Global_Objects/String/replace#Specifying_a_function_as_a_parameter">https://developer.mozilla.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728126">25</a> by Raymond Camden
		posted on 12/3/2010 at 11:50 PM
		</div>
		<div class="comment_text"><p>Well shoot, now I don' thave to write the sentence part. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728127">26</a> by Ian Parr
		posted on 12/5/2010 at 5:59 PM
		</div>
		<div class="comment_text"><p>I tried the NYT one and it didn't work. Yours did. So nice work. A good simple idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728130">27</a> by Bryan Rice
		posted on 12/5/2010 at 9:54 PM
		</div>
		<div class="comment_text"><p>This is really cool. How would you go about getting the value of "document.location.hash" in ColdFusion (if you wanted to do something similar on the server side using CFML before returning the .cfm page)? I can't seem to find this value anywhere (URL, CGI, etc.).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728131">28</a> by Raymond Camden
		posted on 12/5/2010 at 11:04 PM
		</div>
		<div class="comment_text"><p>Unfortunately the hash value is not available. It is only available client side. You could - of course - do a 2 step process. Step one is request foo.cfm#moo and return HTML that includes JS to get the hash. You then do an Ajax request to pass the hash to CF. I can't imagine what you would use it for server side though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728133">29</a> by Bryan Rice
		posted on 12/6/2010 at 12:11 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply! That's odd to me. I wonder why we don't have access to it.  One case where you might want to know this during the request on the CF server side is if you wanted to perform the same kind of functionality for browsers that can't support javascript and where you just return html styled with the highlights in place.</p><p>In other cases, you might have *long* list of items that have named anchors and you might want to know as you are rendering the .cfm page during the request if the incoming link contained an anchor so you could highlight the section the users is trying to see (and not just have the browser scroll to it-without javascript).</p><p>Anyway, nice work on this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728135">30</a> by Phillip Senn
		posted on 12/30/2010 at 5:41 AM
		</div>
		<div class="comment_text"><p>I wonder if Adobe could come up with a way to enforce access="public" or access="package" for AJAX requests.<br>I know that AJAX is stateless, but still...</p><p>Maybe they could come up with a standard that says "if access=package, then there's an extra parameter that has to match a _something_ found in the same folder", like a checksum of the calling routine or _something_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728138">31</a> by Raymond Camden
		posted on 12/30/2010 at 5:50 AM
		</div>
		<div class="comment_text"><p>@PSenn: I don't understand your request. What do you mean by 'enforce access=public'? You want access=remote for your remote (ajax/flash remoting) methods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728137">32</a> by Phillip Senn
		posted on 12/30/2010 at 9:29 PM
		</div>
		<div class="comment_text"><p>That's just it - I want access=package for my ajax methods.<br>For security purposes of course.<br>I suppose I can roll my own and require one of the parameters to contain a password of sorts.<br>Something that only the calling function knows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728136">33</a> by Raymond Camden
		posted on 12/30/2010 at 9:35 PM
		</div>
		<div class="comment_text"><p>I must not get what you mean. If you call method FOO on a CFC via Ajax, then FOO an call a package-access level method in another CFC in the same folder. The _initial_ method must be REMOTE. That's a good thing. But after that normal access rules apply.</p></div>
	</div>
</div>
		