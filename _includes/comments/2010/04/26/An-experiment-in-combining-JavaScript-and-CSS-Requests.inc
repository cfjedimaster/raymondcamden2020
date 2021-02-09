
<div class="comment" id="c_1713723763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723763">1</a> by Joshua Curtiss
		posted on 4/26/2010 at 10:09 PM
		</div>
		<div class="comment_text"><p>Cool! And it's just steps away from some document parsing with OnRequest() in Application.cfc to convert an existing app without having to even change the code! I don't know if it'd be worth it performance-wise, but that'd be cool... :-D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723760">2</a> by Raymond Camden
		posted on 4/26/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>Dude, I'm not normally a onRequest fan, but that's a cool freaking idea. You mind if I roll with it for another blog post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723765">3</a> by Drew Wells
		posted on 4/26/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>I have always been opposed to this method. IIS/Apache is way faster at delivering content than ColdFusion.  I do like your file caching mechanism, I just don't think it can compete with what already exists in Apache or IIS.</p><p>The other downside, I can't offload my static resources to a CDN.  I don't see any websites using their Application engine to create combined resources.  What I do see is rake/make files for combining/minifying resources, and then calling that combined file from the HTML page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723766">4</a> by Drew Wells
		posted on 4/26/2010 at 10:37 PM
		</div>
		<div class="comment_text"><p>Side note, when I added my website to the website field.  My comments were always flagged as spam.  Weird?  http://drew <a href="http://disq.us/url?url=http%3A%2F%2Fwells.net%2Fblog%3AAMV8cWQl54z5WmmzKEQ7vLiKi9w&amp;cuid=3321886" rel="nofollow noopener" title="wells.net/blog">wells.net/blog</a> spam site?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723769">5</a> by Raymond Camden
		posted on 4/26/2010 at 10:47 PM
		</div>
		<div class="comment_text"><p>@Drew: Good point there - does Apache offer a way to combine N JS files into one? I've not seen that. I do know it offers gzip compression but I have not heard of it having a way to handle getting N files into one HTTP request.</p><p>@Drew 2: Obviously your comment was flagged as spam since you disagreed with me. ;) Seriously though - no idea. I use cfFormprotect for my spam protection. Sorry it blocked your host!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723771">6</a> by Raymond Camden
		posted on 4/26/2010 at 10:48 PM
		</div>
		<div class="comment_text"><p>Hey Drew - get this. Even my emails from you for the comments were marked as spam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723781">7</a> by Jeff Self
		posted on 4/27/2010 at 12:22 AM
		</div>
		<div class="comment_text"><p>There is an Apache module called mod_concat which combines multiple files for a single request.  Haven't used it yet myself, but it looks promising. <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fmodconcat%2F%3AW-fOSlxPZoGPEsHNv34q2hZC9F4&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/modconcat/">http://code.google.com/p/mo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723775">8</a> by Raymond Camden
		posted on 4/27/2010 at 12:28 AM
		</div>
		<div class="comment_text"><p>Interesting. I wonder though if it is still doing file io for each request. I'd think that would make it slower than a solution that returns from RAM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723776">9</a> by Jura Khrapunov
		posted on 4/27/2010 at 12:50 AM
		</div>
		<div class="comment_text"><p>I'm using similar approach for quite a while, there are a couple of things though you might want to watch out when combining CSS files:<br>- relative urls in css rules, most probably result path won't be the same as for original css files, hence all nice "background: url(images/sprite.png)" rules could end up broken. Fix: all those rules have to be parsed and relative paths replaced with the absolute - extracted from the original url<br>- beware of "@import" rules - according to the w3c standard they are allowed at the top of the css file only, therefore if you are combining multiple files you have to catch all @import-s and move them to the top of the result file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723779">10</a> by Raymond Camden
		posted on 4/27/2010 at 12:53 AM
		</div>
		<div class="comment_text"><p>Ah good catch there Jura!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723777">11</a> by Joshua Curtiss
		posted on 4/27/2010 at 3:09 AM
		</div>
		<div class="comment_text"><p>@Ray - Sent ya an email, but just wanted to respond in the blog comments -- Go for it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723778">12</a> by Drew Wells
		posted on 4/27/2010 at 3:43 AM
		</div>
		<div class="comment_text"><p>&lt;--- Spammer!<br>I was thinking more combining them as part of your deployment.  For instance, the new High Performance JS book describes some ANT scripts for combining your requests which is simple enough.  I'm still trying to wrap my head around how you manage calls to these files in your HTML.  Apache wouldn't know anything about this besides referring to the files you create with your ANT scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723780">13</a> by James Moberg
		posted on 4/27/2010 at 6:22 AM
		</div>
		<div class="comment_text"><p>The js libraries that I use are either in virtual directories or hosted on third-party websites.</p><p>Here are some non-server options:<br><a href="http://disq.us/url?url=http%3A%2F%2Flabjs.com%2F%3Ako28-xnDcggrmdEwu7OGH9HLo9o&amp;cuid=3321886" rel="nofollow noopener" title="http://labjs.com/">http://labjs.com/</a>  (I'm using this one currently.)<br><a href="http://disq.us/url?url=http%3A%2F%2Frequirejs.org%2F%3APeL07zuO5VS3Z4CbQFlHiaNUy4E&amp;cuid=3321886" rel="nofollow noopener" title="http://requirejs.org/">http://requirejs.org/</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fjavascript-dominoes%2Fwiki%2FHandsOn%3A_58cSuvhaJ8wS9w-nrtQohHuhUs&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/javascript-dominoes/wiki/HandsOn">http://code.google.com/p/ja...</a></p><p>Another option would be to move all your js to the bottom of the webpage (this is what Facebook is doing.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723782">14</a> by Sebastiaan
		posted on 4/27/2010 at 12:10 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Couldn't you just use one of the minify toolkits out there to compress and "minify" your CSS and JS?</p><p>YUI Compressor and similar tools reduce bandwidth AND can combine files into one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723784">15</a> by Sebastiaan
		posted on 4/27/2010 at 12:11 PM
		</div>
		<div class="comment_text"><p>This is what I mean: <a href="http://disq.us/url?url=http%3A%2F%2Fscriptalizer.com%2F%3AbpPf7Sj1jl4RotgrT0YWV3B6Y7Y&amp;cuid=3321886" rel="nofollow noopener" title="http://scriptalizer.com/">http://scriptalizer.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723787">16</a> by Joe Roberts
		posted on 4/27/2010 at 1:53 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Great post, and thanks for the shout out to Combine.cfc!</p><p>I really like the way you cache the js/css to memory. Combine caches to file, but I'm going to consider adding some in-memory cache, maybe an LRU cache to stop the memory usage from getting out of control!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723786">17</a> by Raymond Camden
		posted on 4/27/2010 at 3:11 PM
		</div>
		<div class="comment_text"><p>@Sebastian: I'm sure it wouldn't take much more - but I just wasn't interested in taking it that far. Joe's work already does.</p><p>Well it does the compression, not sure if it does the minification. This was brought up in Farrell's presentation. The bonus you get from minification doesn't really add a lot and when you consider how it can lead to issues with debugging, it wasn't recommended. (That's what I remember, but I could be wrong.)</p><p>@Joe: Glad you liked it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723785">18</a> by Dan Fredericks
		posted on 4/27/2010 at 3:44 PM
		</div>
		<div class="comment_text"><p>what about forms that use built in js files, such as cflayout or cfmenu, this example or the <a href="http://disq.us/url?url=http%3A%2F%2FRiaForge.org%3AW9Q4J75EhVp2p_r5HSGonWyR6EA&amp;cuid=3321886" rel="nofollow noopener" title="RiaForge.org">RiaForge.org</a> code will not work with those files, this I will still get a lower grade with yslow, correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723794">19</a> by Raymond Camden
		posted on 4/27/2010 at 3:51 PM
		</div>
		<div class="comment_text"><p>Correct. If you have no control over the JS being used, then there ya go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723788">20</a> by Adam Tuttle
		posted on 5/17/2010 at 9:23 PM
		</div>
		<div class="comment_text"><p>I wrote a couple of custom tags that make using the "Combine" project that you mention in your post really simple. Full source and examples on my blog: <a href="http://disq.us/url?url=http%3A%2F%2Ffusiongrokker.com%2Fpost%2Fsquish-it%3AnbAgA19HcUr2RtPO2a3qQZDuipA&amp;cuid=3321886" rel="nofollow noopener" title="http://fusiongrokker.com/post/squish-it">http://fusiongrokker.com/po...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723790">21</a> by Brad
		posted on 10/7/2010 at 5:02 AM
		</div>
		<div class="comment_text"><p>A while back, we created a ColdFusion based framework/cms based upon what we liked in other such frameworks. In modules, you can call add_js with a variable of where the module lives, since we store our modules (above) the webroot, meaning you can not access them using the browser.</p><p>Our function does this exact thing, except it also writes a copy to disk. Storing everything in RAM was impossible because of each user role / permission combo *might* require drastically different files.</p><p>The file is then served from the file system, with IIS and some settings for file system cache. All in all, it can be an extremely efficient solution when combined with other performance tuning.</p><p>(we do this with CSS too)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723792">22</a> by Raymond Camden
		posted on 10/7/2010 at 5:03 AM
		</div>
		<div class="comment_text"><p>Is your product OS? Commercial? Available at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723789">23</a> by Paul Baylis
		posted on 7/22/2011 at 3:16 AM
		</div>
		<div class="comment_text"><p>&lt;CFAjaximport&gt; loads a bunch of scripts at the top of the document, e.g.:</p><p>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/package/cfajax.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/yui/yahoo-dom-event/yahoo-dom-event.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/yui/animation/animation-min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/adapter/yui/ext-yui-adapter.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/ext-core.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/resizable.js"&gt;&lt;/script&gt;</p><p>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/dragdrop/dragdrop.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/util.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/build/state/State-min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/widget-core.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/dialog/dialogs.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/package/cfwindow.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/cfform.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/masks.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/cfformhistory.js"&gt;&lt;/script&gt;</p><p>Is there any way, we can get these to load at the bottom of the document, or do they NEED to be at the top?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723799">24</a> by Raymond Camden
		posted on 7/24/2011 at 4:13 AM
		</div>
		<div class="comment_text"><p>You can't (afaik). Keep in mind - most of the Ajax stuff (front end stuff) in CF is for folks _not_ familiar with Ajax. If you are experienced enough to know you prefer this differently, then you are probably not the target audience for those tags. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723791">25</a> by Paul
		posted on 7/24/2011 at 10:32 AM
		</div>
		<div class="comment_text"><p>What are you trying to say, punk? ;-). Thanks to your very informative post here <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F11%2F29%2FColdFusion-8-and-AjaxBased-Login%3A071v9mbNgaUccFhW1ENlRn27TJM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/11/29/ColdFusion-8-and-AjaxBased-Login">http://www.coldfusionjedi.c...</a>, I now use cfwindow in my app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723798">26</a> by Raymond Camden
		posted on 7/24/2011 at 4:39 PM
		</div>
		<div class="comment_text"><p>Heh, well, to be honest, I hear complaints from time to time about the CF/Front End Ajax stuff. Complaints about the size mainly. Questions about doing some particular customization. Etc. My typical reaction is - well - what I typed above. :) Things like cfwindow make it -very- easy for folks, but certainly could be done with other code, like jQuery UI for example. Just something I try to get people to remember.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723795">27</a> by Jason
		posted on 1/14/2013 at 4:05 PM
		</div>
		<div class="comment_text"><p>Hi, I have been looking into a way of combining css and java calls and have had  a look at the combine.cfc project. However i have inherited a 64 bit CF server and am not sure combine will run on a 64bit version? I was trying to utilise your script, but it does not appear to load the css or jquery. I have changed the root folder to "/css/" which is the correct root, but no styles can be seen on the page. multiload.cfm is in the root, along with index.cfm which uses it, css folder is next level up? Any ideas, I can give a testing url if needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723796">28</a> by Joe Roberts
		posted on 1/14/2013 at 4:18 PM
		</div>
		<div class="comment_text"><p>Hi @jason. Combine will run fine on a 64bit server. This sounds like a paths problem. To be perfectly honest, I've pretty much retired the project as a) I think it's better practice to combine assets at build time (using something like Sprockets, Gruntjs, etc) b) I don't write any CFML any more, so I'm way out of touch.</p><p>So, I don't think I can be of much help, but I do suggest fiddling with the paths (and maybe try a mapping - But I can't remember if this is an appropriate solution!. Also, you could try out the example in the repo to see if that works as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723800">29</a> by Jason
		posted on 1/16/2013 at 3:02 PM
		</div>
		<div class="comment_text"><p>Hi @Joe</p><p>Thanks for your reply, I must have been having a bad day when I initially tried combine on a 64bit server. I could not get it to work whatsoever! Whet back and tried it yesterday and all works fine?? But I will defiantly look into combing assets at build time. Thanks.</p></div>
	</div>
</div>
		