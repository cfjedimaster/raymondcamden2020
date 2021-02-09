
<div class="comment" id="c_1713663434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663434">1</a> by Jeff Hubbach
		posted on 3/23/2007 at 6:03 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I was actually looking at this the other day. I must have checked it out from Subversion after you made this fix. With the fix in place, it's no longer necessary to do the first &lt;cfif&gt; check:<br>&lt;cfif len(arguments.string) lt arguments.size&gt;<br>      &lt;cfset result[1] = arguments.string&gt;<br>      &lt;cfreturn result&gt;<br>   &lt;/cfif&gt;</p><p>as the code you added after the loop handles the case when the string length is shorter than arguments.size:<br>&lt;cfif len(arguments.string)&gt;<br>      &lt;cfset arrayAppend(result,arguments.string)&gt;<br>   &lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663447">2</a> by Raymond Camden
		posted on 3/23/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>Oh I know it isn't necessary per se... but I like it there as it lets the function exit 0.0001 ms quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663448">3</a> by Rob Wilkerson
		posted on 3/23/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>Now would that be considered premature optimization?  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663449">4</a> by Dan G. Switzer, II
		posted on 3/23/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Maybe I need to look the code over again, but it also looks like you've got a bug if the string is *exactly* the number of characters you've specified as the size.</p><p>-Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663451">5</a> by Dan G. Switzer, II
		posted on 3/23/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>Oops... I guess that's what the cfif len() line is doing. I just looked at the 2 conditional statements. (I'd probably still make that first if a LTE instead of just LT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663452">6</a> by Christopher Wigginton
		posted on 3/24/2007 at 12:20 AM
		</div>
		<div class="comment_text"><p>If Jrun is your base then....</p><p>&lt;cfset myTypeUtil = CreateObject("java","jrunx.iiop.security.TypeUtil")&gt;<br>&lt;cfset stArray = myTypeUtil.wordWrap(superString,20)&gt;</p></div>
	</div>
</div>
		