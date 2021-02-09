
<div class="comment" id="c_1713669115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669115">1</a> by Chris Jordan
		posted on 7/25/2007 at 8:34 PM
		</div>
		<div class="comment_text"><p>This is one of the features I'm looking forward to most in CF8. In one of my current apps I have the requirement of reading and writing to some very old fox pro tables. I'm using a Type 4 JDBC driver written by some guys in China, and every once in a while we have server lockups and other seemingly unexplainable issues. It's going to be very nice to have some of these tools at our disposal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669136">2</a> by DK
		posted on 7/26/2007 at 12:30 AM
		</div>
		<div class="comment_text"><p>I haven't had a chance to try it out yet but I've wondered so far.... if my server is unresponsive and having issues... how is it going to be able to run a CFC and email/SMS/IM me? Seems contradictory of the problem somewhat ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669141">3</a> by Raymond Camden
		posted on 7/26/2007 at 12:39 AM
		</div>
		<div class="comment_text"><p>I'll quote from the Alerts Config page:</p><p>If the number of threads specified by Hung Thread Count execute for longer than the time specified by Busy Thread Time, the server is considered to be unresponsive.</p><p>So I think the idea is that the server is up - just acting badly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669142">4</a> by Az
		posted on 7/26/2007 at 6:07 AM
		</div>
		<div class="comment_text"><p>They may also have reserved part of the underlying JVM or start a second JVM instance for server monitoring so that any of the code it runs, whether built-in or custom, is "out-of-band" in some manner and can run ColdFusion code even if the main threads of the ColdFusion server are having issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669140">5</a> by Joe Chahine
		posted on 4/13/2011 at 1:53 AM
		</div>
		<div class="comment_text"><p>three and a half years late but I can comment on this.<br>a) the screen does not tell you which directory to place your .cfc in.  After many trials it worked in \jrun4\bin</p><p>b) onAlertEnd() is working for me, i just do a CFDUMP of #arguments.theAlert# where theAlert is an argument that i defined and passed into the function. (the data type is a structure)</p><p>c) i'm having problems getting onAlertStart() event to trigger; this would be useful to me so I don't have to wait for the GC to finish before getting text'd</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669143">6</a> by Joe Chahine
		posted on 4/13/2011 at 1:57 AM
		</div>
		<div class="comment_text"><p>While I'm at it, I may as well post some code:</p><p>	&lt;cffunction name="onAlertEnd" access="public" returntype="string"&gt;<br>		&lt;cfargument name="structAlert" type="struct" required="yes"&gt;</p><p>		&lt;cfset vServerAlias = "DEVBOX")&gt;</p><p>		&lt;cfmail from="CFIDE [#vServerAlias#]"<br>			to="jchahine@bcbsm.com"<br>			subject="JVM GC is FINISHED on #UCASE(vServerAlias)#"<br>			type="html"<br>			&gt;<br>			&lt;p&gt;JVM garbage cleanup on #UCASE(vServerAlias)# is finished.&lt;p&gt;<br>			&lt;cfdump var="#ARGUMENTS.structAlert#"&gt;<br>		&lt;/cfmail&gt;</p><p>		&lt;cfset myResult="1"&gt;<br>		&lt;cfreturn myResult&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>I'm not showing the onAlertStart() because I didn't get it to kickoff yet.  Still troubleshooting that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669139">7</a> by Raymond Camden
		posted on 4/13/2011 at 2:00 AM
		</div>
		<div class="comment_text"><p>Interesting. To your a), I wonder if it's simply path based, so if you had a CF mapping called mystuff, and put your cfc there, if you could then do</p><p>mystuff.mycfcname</p><p>as your CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669117">8</a> by Joe Chahine
		posted on 4/13/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,<br>i got onAlertStart() to work... (it turns out i had a typo in my email address so I didn't get the alert)</p><p>I also configured a CF Mapping "BIN" to where the .cfc resides (in jrun4\bin), but when I referenced BIN.CFCNAME in the alert config screen, nothing happened.  No biggie though, as long as I share with my team where the .cfc resides we're good to go!</p></div>
	</div>
</div>
		