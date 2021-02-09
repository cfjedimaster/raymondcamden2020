
<div class="comment" id="c_1713671327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671327">1</a> by TJ Downes
		posted on 9/3/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I've seen you use this for years in many of your applications. While I understand it helps modulize I never understood the advantage over using includes. It always seemed to me to be a larger amount of overhead with no real benefit. Maybe you could explain why you would use this over simple includes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671326">2</a> by Raymond Camden
		posted on 9/3/2007 at 7:08 PM
		</div>
		<div class="comment_text"><p>"larger overhead" is up to opinion. Certainly a CT takes more processing than an include, but I don't think it is something to be concerned about. CTs got a bad rep in the 4.x days because they were overused but I think their overhead is nothing to be terribly concerned about.</p><p>That being said - using  CT as opposed to header or footer file feels better to me. I like how I have the template in one file. This makes it easier to debug layout issues too as I don't have to switch between two files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671328">3</a> by Max
		posted on 9/3/2007 at 8:24 PM
		</div>
		<div class="comment_text"><p>@TJ - I actually use this method quite a bit with includes in the custom tag (when I have multiple layout CTs and want to reuse display components). Granted, I haven't done extensive performance testing but its never caused any issues for me.</p><p>I'm sure it all comes down to personal preference tho...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671331">4</a> by Baz
		posted on 9/3/2007 at 9:08 PM
		</div>
		<div class="comment_text"><p>A very powerful and awesome characteristic of custom tags is the ability to nest other custom tags within them. For example, I have a custom tag that creates a formatted container with a title area, content area, and so on:</p><p>&lt;ui:Container Title="PodTitle"&gt;<br>   This is content in the pod<br>&lt;/ui:Container&gt;</p><p>Sometimes, I display search results in the container and I need to have some sort of pagination. So I built a sub-tag to my container tag:</p><p>&lt;ui:Container Title="PodTitle"&gt;<br>   &lt;ui:Pagination StartRow="21" MaxRows="20"&gt;<br>   This is content in the pod<br>&lt;/ui:Container&gt;</p><p>In this code snippet, the 'container' tag reads the 'pagination' tag, and creates a perfectly and consistently formatted pagination element within it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671330">5</a> by Joe Zack
		posted on 9/3/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>I prefer using custom tags over includes for layout. On the off chance you needing to pass any sort of information I think it's much cleaner and more readable to pass variables in as attributes of a custom tag than it is to set variables before your include.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671329">6</a> by Todd Rafferty
		posted on 9/4/2007 at 12:01 AM
		</div>
		<div class="comment_text"><p>And with Application.cfc being able to define this.mappings['/blah'] and this.customTagPaths - this only gets easier now.  I use something similiar to this at work myself.  It lets me worry about building applications than worrying about what the rest of the site is going to look like.  I can plop down a valid xhtml website and worry about the overall site design later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671347">7</a> by Johan
		posted on 9/4/2007 at 12:55 AM
		</div>
		<div class="comment_text"><p>An advantage of custom tags over includes is that they run in their own memory space so your are ensured that you will not have variable name conflicts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671350">8</a> by Dan Russell
		posted on 9/4/2007 at 6:25 AM
		</div>
		<div class="comment_text"><p>They use this method at my shop.  I came from a PHP environment where we used includes to do the same work, and I can't say that I like the custom tag method.  It's cumbersome and it required a hell of a workaround when I wanted to use a custom CF error page.  Pages should work like this (in my opinion):</p><p>&lt;do any page action/&gt;<br>&lt;set page specific vars/&gt;<br>&lt;header include/&gt;<br>&lt;content/&gt;<br>&lt;footer include/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671353">9</a> by Nathan D
		posted on 9/4/2007 at 8:29 AM
		</div>
		<div class="comment_text"><p>I have used something like this as well for many years, though I have one twist -- rather than just outputting the "header", then the body, then the "footer" I use the thisTag.generatedContent variable to gather what is between the tags, then output that when the end tag executes.  This allows great flexibility to do things like have a global "error message" mechanism that can be called anywhere on any page but always show up at the "top" of a user's page or things like impacting the navigation of the page based on something that happens inside the page content.  It has also come in handy when doing things like putting in gzip on a page-by-page basis inside my CFML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671351">10</a> by Tjarko
		posted on 9/4/2007 at 10:57 AM
		</div>
		<div class="comment_text"><p>Why not put the tag start and end between the first and last &lt;head&gt; section. I always do this to put extra javascript or style information in there if I need it only on a particular page.</p><p>&lt;cf_header&gt;<br>&lt;/cf_header&gt;</p><p>:executionmode start:<br>&lt;html&gt;<br>  &lt;head&gt;<br>    :executionmode end:<br>    put extra head information here   <br>  &lt;/head&gt;<br>&lt;body&gt;</p><p>I do not trust the cfheader tag for this because I had major issues with this tag using proxy servers and firewalls years ago :-) maybe it's better these days but I stick with this method because it works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671349">11</a> by Michael White
		posted on 9/4/2007 at 6:27 PM
		</div>
		<div class="comment_text"><p>I was wondering if CF8 cfdiv will have any effect on the way you do your layout...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671356">12</a> by Raymond Camden
		posted on 9/4/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>Michael, that question could have a lot of answers - but basically no, it won't. I will use cf_ instead of cfmodule though for sites I know are launching on cf8 sites.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671355">13</a> by Tom Mollerus
		posted on 9/4/2007 at 10:33 PM
		</div>
		<div class="comment_text"><p>I use this method for page layout as well, since it looks neater than a bunch of cfsets and includes.  However, my custom tag itself contains almost no HTML-- those are called in via includes. It's easier and less disruptive to update smaller files that are included rather than to embed all of your layout code in the custom tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671357">14</a> by Scott Fitchet
		posted on 10/4/2007 at 7:37 PM
		</div>
		<div class="comment_text"><p>CTs are also easier to call than includes and also very easy to remove from your web root directory (it's hard to enjoy doing ../../../../.. this). The fact that they they have scope and "stackability" is very important. I also think it makes server scripts look more elegant. Learning how to use the "generatedContent" variable is also important.</p><p>I can see how this sort of speak might make some programmers cringe ... but the productivity, elegance, and learning curves are hard to ignore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671358">15</a> by Scott Fitchet
		posted on 10/4/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>Oops ... sorry I didn't realize that was an old post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2652615063">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2652615063">16</a> (In reply to <a href="#c_1713671327">#1</a>) by Charles Robertson
		posted on 5/1/2016 at 6:57 PM
		</div>
		<div class="comment_text"><p>Sandboxing variables is the advantage over cfinclude. Sandboxing also occurs in cfmodule...but I use cfinclude aswell!</p></div>
	</div>
</div>
		