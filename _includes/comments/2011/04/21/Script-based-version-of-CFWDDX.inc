
<div class="comment" id="c_1713731809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731809">1</a> by todd sharp
		posted on 4/21/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>What about something even simpler Ray?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F8YZ31sAf%3A7dq6kH286iFcWf8eFvsd2QEJsfA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/8YZ31sAf">http://pastebin.com/8YZ31sAf</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731813">2</a> by Jon Hartmann
		posted on 4/21/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>I realize this is a 5-minute implementation, but haven't you limited the scope of the cfwddx tag with this implementation? I'd just make single function that calls cfwddx with attributecollection="#arguments#" and be done with it. Maybe define the arguments, all with required="false" so people can pass them in my order as well as name... Thats pretty much how I implemented a UDF to get spreadsheet data (<a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Fcoldfusion-spreadsheets-easy%29%3AU90_2knhd1ayJL5t2JidgvWS1z0&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/coldfusion-spreadsheets-easy)">http://tinyurl.com/coldfusi...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731810">3</a> by Jon Hartmann
		posted on 4/21/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>Todd beat me to the punch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731812">4</a> by Raymond Camden
		posted on 4/21/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>I think those are fine - but - you can do it even simpler with mine if you are just serializing.</p><p>foo = wddx.towddx(x)</p><p>T me, that's simplest, versus</p><p>foo = wddx.towddx(input=x)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731815">5</a> by Raymond Camden
		posted on 4/21/2011 at 10:01 PM
		</div>
		<div class="comment_text"><p>I do think perhaps the methods could be renamed to encode/decode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731816">6</a> by Sean Coyne
		posted on 4/21/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>If you added this CFC to the CustomTags/com/adobe/coldfusion folder would ColdFusion treat it as it does the other new "component based" script equivalents? That way we can future proof a bit when Adobe uses this in CF X.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731808">7</a> by Raymond Camden
		posted on 4/21/2011 at 10:21 PM
		</div>
		<div class="comment_text"><p>CF doesn't treat _any_ of those guys special. If you open them up (they are unecncrypted) you will see they are just vanilla code. So sure - if you copied mine there you could do:</p><p>cfset foo = new com.adobe.coldfusion.wddx()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731811">8</a> by Sean Coyne
		posted on 4/21/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>I was thinking more along the lines of &lt;cfset test = new wddx() /&gt; (without the dot path).  Which does work. (Tested on CF 9.0.1).</p><p>I guess I was referring to the specialness of the customtags path rather than the actual files inside them.</p><p>Isn't that how your feed.cfc came to be part of CF9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731814">9</a> by Raymond Camden
		posted on 4/21/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Ah, I keep forgetting you can leave the full path off. Personally, I recommend keeping the full path so you always know you are working on one of the files in that directory.</p></div>
	</div>
</div>
		