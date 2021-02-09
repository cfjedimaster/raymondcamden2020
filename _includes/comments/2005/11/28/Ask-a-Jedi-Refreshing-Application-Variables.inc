
<div class="comment" id="c_1713622993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622993">1</a> by Brian Rinaldi
		posted on 11/28/2005 at 8:58 PM
		</div>
		<div class="comment_text"><p>Excuse my ignorance on the topic, but what is the benefit of using StructKeyExists instead of isDefined? Faster or just better form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622994">2</a> by Brian Kotek
		posted on 11/28/2005 at 10:33 PM
		</div>
		<div class="comment_text"><p>isDefined() can lead to unexpected results becuase it will look through a number of scopes trying to find the specified variable. So isDefined() may return true when you expect it to return false, and vice-versa, when a variable with the same name exists in another scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622995">3</a> by Justice
		posted on 11/28/2005 at 10:51 PM
		</div>
		<div class="comment_text"><p>Yea, ever since I got grief about using isDefined in my guess a number game, all my code is strictly structKeyExists now! =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622996">4</a> by Fernando Lopez
		posted on 11/29/2005 at 12:00 AM
		</div>
		<div class="comment_text"><p>what's the difference of using the StructKeyExists and a line like this?</p><p>&lt;cfif IsDefined("url.refreshmebabyonemoretime")&gt;</p><p>I could understand that having something similar to</p><p>&lt;cfif IsDefined("refreshmebabyonemoretime")&gt;<br> would potentially give you unexpected results.<br>but the first option works for me.<br>any pros or cons?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622998">5</a> by Seth Petry-Johnson
		posted on 11/29/2005 at 12:15 AM
		</div>
		<div class="comment_text"><p>&gt; isDefined() can lead to unexpected results becuase it <br>&gt; will look through a number of scopes trying to find the <br>&gt; specified variable. So isDefined() may return true when <br>&gt; you expect it to return false, and vice-versa, when a <br>&gt; variable with the same name exists in another scope.</p><p>That make sense if you don't specify a scope, but why is IsDefined("url.SomeVar") different from StructKeyExists(url, "SomeVar")?  Is there a performance benefit of one versus the other?</p><p>IMHO IsDefined("url.SomeVar") is preferable because it doesn't couple the logic to a specific CF storage mechanism.  In other words, if the folks at Macromedia lose their minds and decide that CF 8 will no longer use a struct to model the URL scope, code using IsDefined will continue to work.  (Yes, I know this example is reaching, but for me its enough to stick with IsDefined() unless someone can show me a compelling reason otherwise)</p><p>Just wondering,<br>Seth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623010">6</a> by Steve Bryant
		posted on 11/29/2005 at 1:02 AM
		</div>
		<div class="comment_text"><p>The other benefit is performance. StructKeyExists() performs faster (at least in CFMX) than does isDefined(). I don't think performance gains of this kind are worth much extra effort, but then using StructKeyExists() doesn't take much extra effort.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623000">7</a> by tony of the weeg clan
		posted on 11/29/2005 at 1:40 AM
		</div>
		<div class="comment_text"><p>if it performs better in that it views a null value as not defined, then im sold. until then its</p><p>isDefined("") and len()</p><p>for me.</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623001">8</a> by Justice
		posted on 11/29/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>I would just use structKeyExists(url, "blah") AND url.blah neq '' for that, does the same thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623005">9</a> by Rob Gonda
		posted on 11/29/2005 at 10:15 AM
		</div>
		<div class="comment_text"><p>StructKeyExists will find elements that isDefined will not. A specific example is an array of structures.</p><p>e.g.<br>StructKeyExists(sessionOnlineArray[i], 'init') inside a loop will return true or false, but isDefined will break and throw a CF error.</p><p>So altough I mostly use isDefined, StructKeyExists has more versatility; furthermore, if it has performance advantages, there should be no questions about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623002">10</a> by tony of the weeg clan
		posted on 11/29/2005 at 10:26 AM
		</div>
		<div class="comment_text"><p>guess its time to explore it.<br>talk about paradigm shift. damn, i think i dream about isDefined() and len() in my cfif statements :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622999">11</a> by Peter Boughton
		posted on 11/29/2005 at 2:48 PM
		</div>
		<div class="comment_text"><p>Are people saying that url.blah neq '' is better than len(url.blah), or am I reading things wrongly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623004">12</a> by Steve Bryant
		posted on 11/29/2005 at 4:57 PM
		</div>
		<div class="comment_text"><p>One person said that. I prefer Len().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623006">13</a> by Rob Gonda
		posted on 11/29/2005 at 7:28 PM
		</div>
		<div class="comment_text"><p>Len() is faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623012">14</a> by Peter Boughton
		posted on 11/29/2005 at 8:02 PM
		</div>
		<div class="comment_text"><p>I could have sworn there was more than one person earlier.<br>Oh well.</p><p>Anyhow, just to see if there was a significant performance difference I did a quick test - looped through each ten thousand times. The mean average result of the first five runs was 269ms and 281.2ms (for Len and EQ '' respectively), and the all fifteen runs it was 117.7ms for Len() and 125ms for EQ '', with both having a median of 47ms.</p><p>So, using Len() is prettier and might save a whole ten milliseconds! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623007">15</a> by Andrew
		posted on 12/23/2005 at 5:06 AM
		</div>
		<div class="comment_text"><p>I am kind of a newbie when it comes to differently scoped variables in ColdFusion.  I am quickly getting up to speed.  I have seen this construct utilized in many examples, but none have shown how to load said variable into the structKey.  How is that done?  I've tried loading the variable in the pages address as part of a query string with no luck.  I am sure there is something very basic that I am missing here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623008">16</a> by Raymond Camden
		posted on 12/23/2005 at 8:12 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you mean Andrew. "load said variable into structKey"? Do you mean set a variable in a struct? If so it is rather simple, cfset foo.moo = "value", or cfset foo["moo"] = "value". You should be able to read up on structs in the cf docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623011">17</a> by Andrew
		posted on 12/23/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>I was referring to the URL struct specifically.  I do understand how to access a struct programatically, but specifically the URL struct is most often used in the context of your example.  Ben Forta uses a similar example in his chapter on Advanced ColdFusion Components in CFMX7 Application Development.  I started thinking about the problem some more and realized how the URL struct works - each parameter of the query string makes up the entire URL struct.  With that in mind I tested with a link formed somewhat like this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.foo.org%2Ftest.cfm%3Frefreshmebabyonemoretime%3Dtrue%3A6vrO_pALQIZnOU1dYz-KQAx4pt0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.foo.org/test.cfm?refreshmebabyonemoretime=true">http://www.foo.org/test.cfm...</a>.  Worked like a charm.  Thanks for the good article and giving me a place to use as a sounding board.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623003">18</a> by Raymond Camden
		posted on 12/23/2005 at 10:45 PM
		</div>
		<div class="comment_text"><p>Ah - yes - that's just a feature built into CF. It will auto-break the query string apart into a struct. I remember the old days of parsing query strings in PerlCGI. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623013">19</a> by Dave Shuck
		posted on 1/3/2006 at 1:40 AM
		</div>
		<div class="comment_text"><p>Have you ever seen this method fail to restart the application?  I have tried Ray's method above and tried another thread-safe version I say Barney suggest to someone on a list somewhere (don't recall at the moment), and I can't seem to make it work.  Just for testing I outputted text before and after the call to onApplicationStart() which is being displayed.  I even outputted some text inside the onApplicationStart method, which also displayed, but when I dump the application scope afterwards, I still have data that from before the refresh.  Any ideas?</p><p>~Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623009">20</a> by Raymond Camden
		posted on 1/3/2006 at 7:22 AM
		</div>
		<div class="comment_text"><p>What do you mean it doesn't work? If you add a cflog statement to onApplicationStart, do you see a log event if you call it with my method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623017">21</a> by Dave Shuck
		posted on 1/3/2006 at 7:43 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is my onApplicationStart:<br>&lt;cffunction name="OnApplicationStart"&gt;<br>	&lt;cflog file="inetap-mii" text="The application was started at #now()#." type="information" /&gt;<br>&lt;/cffunction&gt;</p><p>When I use the method you list, I can clearly see it make an entry into inetap-mii.log.  However...</p><p>Before I ran this, created a structure in the application scope.  After running the reload and seeing the log entry made, I can &lt;cfdump var=#application# /&gt; and still see the structure that I had previously added to the application scope (and I confirmed this wasn't client side caching).  My understanding is that the Application scope would be fresh at this point as if I was running the application for the first time.  Am I just misunderstanding what onApplicationStart can do for me?  Thanks.</p><p>~Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623015">22</a> by Raymond Camden
		posted on 1/3/2006 at 7:53 AM
		</div>
		<div class="comment_text"><p>If should refresh - however - why not just restart CF? If you are making changes to the application .cfc file, it may be best.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623016">23</a> by Dave Shuck
		posted on 1/3/2006 at 7:56 AM
		</div>
		<div class="comment_text"><p>Well at this point it has just become a matter of principle! :)  Restarting works. I was just trying to figure out why this wasn't doing the trick.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623018">24</a> by Raymond Camden
		posted on 1/3/2006 at 8:02 AM
		</div>
		<div class="comment_text"><p>Heh, I hear ya. I just tend to go to a restart if CF is being "wierd." And it sounds like it may be for you.</p></div>
	</div>
</div>
		