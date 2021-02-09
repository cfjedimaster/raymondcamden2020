
<div class="comment" id="c_1713655874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655874">1</a> by Andrew Scott
		posted on 8/4/2006 at 4:18 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>The only thing I can think of is cfx_ or &lt;imported:tagname /&gt; the first is old news, the second well I am assuming this is not it but if it is it exist to incoporate taglibs into ones code, or even if you have it jsptaglibs.</p><p>But if this is not it, you have me very curious indeed:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655866">2</a> by Justice
		posted on 8/4/2006 at 4:31 PM
		</div>
		<div class="comment_text"><p>Well I will take a stab at it.</p><p>You can do anything you do with tags inside of &lt;cfscript&gt;, so it would just be foo.  I'm not sure why, but many claim that cfscript is more readable and for sure it looks like less typing than tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655857">3</a> by Tom Chiverton
		posted on 8/4/2006 at 4:47 PM
		</div>
		<div class="comment_text"><p>Justice: you can't call the cfthrow tag, for instance, in cfscript unless you define a suitable function.</p><p>Maybe Ray means calling via cfmodule ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655865">4</a> by djuggler
		posted on 8/4/2006 at 4:48 PM
		</div>
		<div class="comment_text"><p>Are you looking for &lt;cfmodule&gt;? The primary reason I use cfmodule is to specify the directory that contains my custom tag code. Other reasons would be to group attributes into a structure before calling the tag making more readable, better documented code. If I define my structure in a cfscript block I can put a comment to the right of each attribute. I can't do that if I'm passing the attribute in at the &lt;cfmodule&gt; or &lt;cf_tag&gt; line.</p><p>Or are you looking for something more esteric like &lt;dbquery&gt; :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655884">5</a> by Ben Nadel
		posted on 8/4/2006 at 4:50 PM
		</div>
		<div class="comment_text"><p>I am gonna have to go with the imported tag library style as Andrew stated above &lt;prefix:tag /&gt;. JSP tab libraries are one reason, but the other reason is that you can specify a relative path via the TAGLIB attribute. This allows custom tag libraries to be stored in different directories within a single application without having to use mapped paths. And, controversial as it may seem, I looked at mapped paths as the poor-man's solution to a problem (just my personal opinion, you don't have to agree with it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655869">6</a> by Justice
		posted on 8/4/2006 at 4:55 PM
		</div>
		<div class="comment_text"><p>I would agree with you guys about &lt;module&gt;, but I think Ray was looking for a way to call existing tags, not custom created tags (there are like 10 different ways to call custom tags)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655875">7</a> by Raymond Camden
		posted on 8/4/2006 at 5:09 PM
		</div>
		<div class="comment_text"><p>Well, the CFIMPORT and CFX things are right, but not what I meant. I apologize for forgetting that. Keep digging guys - there is one more way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655870">8</a> by Ben Nadel
		posted on 8/4/2006 at 5:33 PM
		</div>
		<div class="comment_text"><p>While its not a *tag* format, you can mimic some tag functionality via the coldfusion ServiceFactory (ex. CFQuery can be done without the CFQuery tag this way).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655872">9</a> by brian joseph
		posted on 8/4/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>they can look like &lt;foo&gt; or even &lt;a&gt; or &lt;table&gt; if you use the &lt;cfimport&gt; tag and don't put a prefix on it. such as</p><p>  &lt;cfimport taglib="/taglib/" /&gt;</p><p>which is sneaky way to make your coworkers' html tags behave funny.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655867">10</a> by Becky Zimmerman
		posted on 8/4/2006 at 5:43 PM
		</div>
		<div class="comment_text"><p>I believe cftags can be used within cfscript if you use UDF's such as the CFMLLib.  That way a cfexecute you can you execute inside the cfscript.  Is this what you were thinking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655873">11</a> by Raymond Camden
		posted on 8/4/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>Nope.</p><p>I'll give a hint. This is "Old School" stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655868">12</a> by Az
		posted on 8/4/2006 at 5:50 PM
		</div>
		<div class="comment_text"><p>Well if you had asked this question before ColdFusion MX came out I would have thought you meant the old tag format like &lt;dbfoo&gt; that was left over as a legacy from the early versions before the language was called ColdFusion Markup Language and was instead just Database Markup Language (if I remember correctly).  This syntax appears to have been removed in the post-MX versions, so I doubt that is what you're looking for today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655871">13</a> by Raymond Camden
		posted on 8/4/2006 at 5:56 PM
		</div>
		<div class="comment_text"><p>Az: Not quite that old, and what I'm talking about still works today, although I don't think anyone uses it.</p><p>If I don't get an answer by 10, I'll give another hint.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655878">14</a> by Ben Nadel
		posted on 8/4/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>It's 10 my time :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655876">15</a> by brian joseph
		posted on 8/4/2006 at 6:04 PM
		</div>
		<div class="comment_text"><p>you wouldn't be talking abou the &lt;cfexecute&gt; tag would you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655880">16</a> by Raymond Camden
		posted on 8/4/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>Brian no, that is a "normal" cf... tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655879">17</a> by brian joseph
		posted on 8/4/2006 at 6:07 PM
		</div>
		<div class="comment_text"><p>yeah, i know. but you can "use" it like a custom tag if your off your rocker. It's past 10 min btw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655881">18</a> by Chris Stoner
		posted on 8/4/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>You aren't talking about the cfa from spectra are you?  I originially ruled it out because cfx wasn't correct, but then cfx's are not cfml where cfa's were.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655883">19</a> by Raymond Camden
		posted on 8/4/2006 at 6:22 PM
		</div>
		<div class="comment_text"><p>Chris wins! It was built for Spectra and let you do:</p><p>&lt;cfa_foo&gt;</p><p>One differnece between cfa_foo and cf_foo is that when doing cf_foo, CF looks for foo.cfm. But when you do cfa_foo, CF looks for cfa_foo.cfm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655861">20</a> by Justice
		posted on 8/4/2006 at 6:24 PM
		</div>
		<div class="comment_text"><p>hahah, I was googling for cfa's and I found this comment at the bottom of one of the pages:</p><p>"Output Within Handlers<br>In Allaire Spectra 1.0, &lt;cfoutput&gt; must be used within handlers to display anything. Forgetting to use &lt;cfoutput&gt; is easy, so don't forget it!</p><p>In Allaire Spectra 1.0.1, this is not the case. The wonderful Raymond Camden contributed a modification to the source code that eliminates this need. Watch for the soon-to-be-famous term "RAY MOD"."</p><p>You were famous long ago Ray! If you wanna check it out, here you go: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fserver_archive%2Farticles%2Fspectra_handlers.html%3AiMltJAXfuutTuGLkUPA-WzCT88o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/server_archive/articles/spectra_handlers.html">http://www.adobe.com/devnet...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655864">21</a> by Raymond Camden
		posted on 8/4/2006 at 6:31 PM
		</div>
		<div class="comment_text"><p>Long ago? What am I now, chopped liver? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655862">22</a> by Nathan Dintenfass
		posted on 8/4/2006 at 7:06 PM
		</div>
		<div class="comment_text"><p>Ah, those were the days....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655863">23</a> by Camilo Trevino
		posted on 8/4/2006 at 7:58 PM
		</div>
		<div class="comment_text"><p>Hay this was so fun, lets do this again ;-)</p></div>
	</div>
</div>
		