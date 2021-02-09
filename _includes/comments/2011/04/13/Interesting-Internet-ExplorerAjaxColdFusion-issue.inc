
<div class="comment" id="c_1713731634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731634">1</a> by todd sharp
		posted on 4/13/2011 at 10:59 PM
		</div>
		<div class="comment_text"><p>Don't forget you can also append _cf_nodebug=true to your individual Ajax URLs to disable it on a request basis.  I use that often by setting a baseURL in JS (foo.cfm?_cf_nodebug=true) that I use in all my Ajax requests - that way I can open the URL in another tab to view the response directly and also have access to the debug output in another browser tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731635">2</a> by Raymond Camden
		posted on 4/13/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>The issue is that I _never_ remember that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731636">3</a> by todd sharp
		posted on 4/13/2011 at 11:13 PM
		</div>
		<div class="comment_text"><p>The funny thing is that every time I use it I have to google for the exact syntax because I always forget exactly what it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731639">4</a> by Edward - Florida SEO
		posted on 4/13/2011 at 11:13 PM
		</div>
		<div class="comment_text"><p>Good looking out Todd ...</p><p>That's a subtle one to remember ...  ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731637">5</a> by Steve W
		posted on 4/13/2011 at 11:16 PM
		</div>
		<div class="comment_text"><p>What happens when you use the IE emulation functionality of IE9 (<a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fcc288325%28v%3Dvs.85%29.aspx%29%3F%3AdDlQZbOTF12WY0FRakM_w_S6OYA&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/cc288325(v=vs.85).aspx)?">http://msdn.microsoft.com/e...</a>  Just curious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731638">6</a> by Raymond Camden
		posted on 4/13/2011 at 11:18 PM
		</div>
		<div class="comment_text"><p>SteveW: Didn't seem to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731642">7</a> by David Hammond
		posted on 4/13/2011 at 11:29 PM
		</div>
		<div class="comment_text"><p>Note that you can use IETester to test in old versions of IE pretty well: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.my-debugbar.com%2Fwiki%2FIETester%2FHomePage%3AzPRRIr7g0YyZIwtzC4GguT5Ho_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.my-debugbar.com/wiki/IETester/HomePage">http://www.my-debugbar.com/...</a></p><p>As Steve points out, IE9 has modes to IE8 and IE7 too, but I'm not sure if that would catch everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731641">8</a> by Phillip Senn
		posted on 4/14/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond!</p><p>Now there are three statements that I'll be adding to the top of all my remote components:</p><p>&lt;cfsetting showdebugoutput="false"&gt;<br>&lt;cfcontent type="application/json"&gt;<br>&lt;cfparam name="url.returnformat" default="json"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731644">9</a> by William from Lagos
		posted on 4/14/2011 at 3:19 AM
		</div>
		<div class="comment_text"><p>Run multiple versions of IE at once without the need for a virtual machine <a href="http://disq.us/url?url=http%3A%2F%2Fwww.my-debugbar.com%2Fwiki%2FIETester%2FHomePage%3AzPRRIr7g0YyZIwtzC4GguT5Ho_U&amp;cuid=3321886" rel="nofollow noopener" title="www.my-debugbar.com/wiki/IETester/HomePage">www.my-debugbar.com/wiki/IE...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731643">10</a> by Mihai Baboi
		posted on 4/14/2011 at 11:46 AM
		</div>
		<div class="comment_text"><p>I have DebugBar installed and it's not very useful. It crashes all the time and doesn't always render as IE would. It's a good tool, but it would still be nice to be able to run multiple versions of IE at the same time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731647">11</a> by Jeremy Battle
		posted on 4/15/2011 at 3:59 AM
		</div>
		<div class="comment_text"><p>Not sure if this is helpful to anyone, but if you get the IE10 Platform Preview, and choose the debug option from the menu, you can change the document modes and browser modes (IE7-10) easily in the debug -&gt; developer tools. Lessens the need for having IE8 on a VM or 2nd machine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731646">12</a> by John
		posted on 10/27/2011 at 3:46 PM
		</div>
		<div class="comment_text"><p>I believe you spelled "sermon" wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731645">13</a> by Raymond Camden
		posted on 10/27/2011 at 4:57 PM
		</div>
		<div class="comment_text"><p>Fixed, thanks.</p></div>
	</div>
</div>
		