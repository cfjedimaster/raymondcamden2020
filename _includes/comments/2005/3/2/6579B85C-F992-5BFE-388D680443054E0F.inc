
<div class="comment" id="c_1713617457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617457">1</a> by Rob Brooks-Bilson
		posted on 3/3/2005 at 5:22 AM
		</div>
		<div class="comment_text"><p>Aw crap!  This changes everything.  All bets are off.  My world is crashing in around me.  The horror, the horror!</p><p>Seriously, Ray.  Good info here.  Thx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617461">2</a> by John Farrar
		posted on 3/3/2005 at 5:29 AM
		</div>
		<div class="comment_text"><p>How about the scope safe issues... wouldn't you do something like this instead?</p><p>&amp;lt;cfscript&amp;gt;<br>function foo() {<br>   var local = structNew();<br>   var x = "apple";<br>   try {<br>   if(x+9) x = 1;<br>   } catch(ANY local.myerror) {<br>      writeOutput(local.myerror.message &amp;amp; "&amp;lt;p&amp;gt;");<br>   }<br>}<br>&amp;lt;/cfscript&amp;gt;</p><p>&amp;lt;cfoutput&amp;gt;<br>#foo()#<br>&amp;lt;/cfoutput&amp;gt;</p><p>Heh... life gets twisted. (I have also learned on "iteration" calls of functions... the "structNew()" can make execution much slower. So this solution is a spare use function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617463">3</a> by Sean Corfield
		posted on 3/3/2005 at 5:57 AM
		</div>
		<div class="comment_text"><p>You obviously didn't try that code John - catch requires a simple variable name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617455">4</a> by Jeff Coughlin
		posted on 3/3/2005 at 5:57 AM
		</div>
		<div class="comment_text"><p>Good catch Ray.  I'm curious though.  What happens if you use try/catch as cf tags (assuming you tried this in a cffunction tag)?</p><p>I'm running out the door at the moment, but maybe I'll try this tonight if someone else hasn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617465">5</a> by Arindam Biswas
		posted on 3/3/2005 at 7:51 PM
		</div>
		<div class="comment_text"><p>My, my. One learns something new all the time. Great catch that one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617449">6</a> by Raymond Camden
		posted on 3/3/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>John - you don't have to worry about it at all. Not var scoping the variable is ok in this case since it won't "leak" out at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617460">7</a> by Nathan Dintenfass
		posted on 3/4/2005 at 10:59 PM
		</div>
		<div class="comment_text"><p>Please tell me that this is, in fact, a bug and not something that is "intended behavior"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617453">8</a> by Raymond Camden
		posted on 3/5/2005 at 12:43 AM
		</div>
		<div class="comment_text"><p>I'm not a Java expert, but someone pointed out that he thought it was the same in Java. Ie, you don't have to pre-declare the variable in the catch block. So maybe that is the reasoning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617448">9</a> by Roland Collins
		posted on 3/5/2005 at 12:54 AM
		</div>
		<div class="comment_text"><p>Very interesting . . .</p><p>Even if you declare myerror as "java.lang.Exception", it still misbehaves.  Instead of the dereference error, you get a NullPointerException.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617451">10</a> by William
		posted on 3/23/2006 at 5:01 AM
		</div>
		<div class="comment_text"><p>I don’t understand why you are declaring “myerror” any way? It is being declared in catch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617458">11</a> by Raymond Camden
		posted on 3/23/2006 at 8:02 PM
		</div>
		<div class="comment_text"><p>William, the point is that any declared variable in a UDF needs to be var scoped. (Normally.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617452">12</a> by William Broadhead
		posted on 9/29/2011 at 6:46 AM
		</div>
		<div class="comment_text"><p>I realize this entry topic is getting long in the tooth, and this is probably well understood now. But... my understanding since CF7 is that whatever you put as your exception variable gets automatically scoped to be what we might now call 'local' to the catch block. And this is by design and is what many languages do including, and especially of note, Java: "A local variable may not be redeclared as an exception parameter of a catch... compile-time error occurs". And I supposed, even in CF7, if you put that inside a set of component tags, you would expect the same behaviour as in a plain old inline UDF... No?  Since CF sits on the Java, this would not un-expected behaviour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617464">13</a> by Raymond Camden
		posted on 9/29/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>As far as I know, this is indeed how CFLatest (CF9) works. If I remove the var, run the UDF, the variable isn't leaking out of the UDF. So.. don't var it and don't worry about it. (Again, as far as I know.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617462">14</a> by Henry
		posted on 11/3/2011 at 3:42 AM
		</div>
		<div class="comment_text"><p>Hmm... seems like cfcatch is still problematic (leaking).</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdaveshuck.com%2F2011%2F11%2F02%2Fcoldfusion-9-catch-is-not-thread-safe%2F%3AHBupmG2m25r_5A-5KKLa44PgBus&amp;cuid=3321886" rel="nofollow noopener" title="http://daveshuck.com/2011/11/02/coldfusion-9-catch-is-not-thread-safe/">http://daveshuck.com/2011/1...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617454">15</a> by Brian FitzGerald
		posted on 8/12/2014 at 1:51 AM
		</div>
		<div class="comment_text"><p>I realize this thread is ancient, but I just came across the same issue on CF10 and (in light of Henry's comment above) I'm wondering what the recommended workaround for this issue is? Has it been solved? I have been trying to find an answer on this for a while but perhaps my Google Fu is not as strong as it should be. Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617456">16</a> by Raymond Camden
		posted on 8/12/2014 at 2:10 AM
		</div>
		<div class="comment_text"><p>I am not sure this is a bug, at least not in CF10. The "e" variable in cfcatch is not leaking out into the variables scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617459">17</a> by Brian FitzGerald
		posted on 8/12/2014 at 8:45 PM
		</div>
		<div class="comment_text"><p>Thanks for the response Ray. Upon further testing I have confirmed that the cfcatch result is indeed local scoped within the method (CF10).</p><p>It still seems like odd behavior since it is inconsistent with other cfml tags (and/or cfscript functions) which generate variables (that CAN be var scoped manually) such as cfhttp, cfsavecontent, cfquery, etc.</p><p>Anyway, thanks again, at least it's not leaking!</p></div>
	</div>
</div>
		