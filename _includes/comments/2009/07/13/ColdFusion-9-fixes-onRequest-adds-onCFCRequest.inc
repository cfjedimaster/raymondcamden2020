
<div class="comment" id="c_1713716922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716922">1</a> by Sean Coyne
		posted on 7/13/2009 at 3:59 PM
		</div>
		<div class="comment_text"><p>"Notice that onRequestStart didn't run at all. "</p><p>You mean onRequest didn't run at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716920">2</a> by Raymond Camden
		posted on 7/13/2009 at 5:12 PM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716921">3</a> by Andy Sandefer
		posted on 7/13/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>Does anyone know if CF9 fixes the nasty leading zeros issue that affects the cf ajax grids?<br>Where you have 009 stored in the db but the grid displays 9?<br>@Ray - I know that you've blogged on this in CF8 but I'm just curious as to whether or not this is going to be a non-issue going forward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716927">4</a> by Raymond Camden
		posted on 7/13/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>Looks like no. :(</p><p>&lt;cfset s = "009"&gt;<br>&lt;cfoutput&gt;#serializeJSON(s)#&lt;/cfoutput&gt;</p><p>Still returns 9.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716926">5</a> by Aaron
		posted on 7/15/2009 at 8:12 AM
		</div>
		<div class="comment_text"><p>does onCFCRequest work with webservices &amp; Ajax or does it break them?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716932">6</a> by Raymond Camden
		posted on 7/15/2009 at 8:16 AM
		</div>
		<div class="comment_text"><p>It should work just fine. I have not tested with web services though. You would be responsible for returning the proper XML response which would be a bit cumbersome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716936">7</a> by MikeKear
		posted on 10/17/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>I dont understand what's the attraction with script based cfcs.    What is different from the more conventional tag based cfcs apart from what you have to type at the keyboard?   <br>Is there any functional or speed difference?     Why are you so fixed on script based cfcs?</p><p>I notice a lot of the ajax examples use script based cfcs - is there a reason for that or is it just that it looks more like "real" programming and tag-based cfcs look more like "toy" programming?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716934">8</a> by Raymond Camden
		posted on 10/17/2011 at 5:26 PM
		</div>
		<div class="comment_text"><p>For many programmers in other languages, script is the _only_ way to write code. Therefore, script based CFCs are more familiar to them and easier to pick up.</p><p>For me, I've got a lot of experience with CF as a tag based language, and a lot of experience with Flex and JS. Flex too has a mix of tags and script, but your logic is all done in script.</p><p>For me, having used both, I prefer script. I can write logic _much_ quicker in script than in tags. (Note that I keep saying 'write logic' - so I'm not talking about front end views, but specifically business logic type code.)</p><p>At the end of the day, it has nothing to do with 'real' versus 'toy', but simply productivity. I'm more productive in script when writing logic. Therefore - I use it. I also believe it is inherently quicker for that situation - therefore I promote it. Just as much as I'd recommend tags for outputting dynamic HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716937">9</a> by The Fusionator
		posted on 8/28/2012 at 5:35 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I recently rolled out a mirrored application.  One server is on CF9 and the other is on CF8.  I ran into this problem on the CF8 box, but I ran into a different problem on the CF9 box after I rolled out the fix.</p><p>I'm noticing that the onRequest does not fire/error when calling a CFC in CF9, and CF8 needs this fix in order to work.  I'm finding, however, that CF9 still fires onRequestEnd if you use onRequest.  Is this intended?</p><p>-Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716940">10</a> by Raymond Camden
		posted on 8/28/2012 at 5:42 AM
		</div>
		<div class="comment_text"><p>I rarely use onRequestEnd so I have no idea. If you are seeing it run, then, I guess it is expected. Frankly, I've -never- seen onRequestEnd in the wild.</p><p>If you want it to not do something on a CFC call, just check the request url and if it ends in .cfc, don't do anything.</p></div>
	</div>
</div>
		