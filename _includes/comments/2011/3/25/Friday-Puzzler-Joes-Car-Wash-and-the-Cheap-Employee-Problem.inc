
<div class="comment" id="c_1713730984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730984">1</a> by todd sharp
		posted on 3/25/2011 at 6:25 PM
		</div>
		<div class="comment_text"><p>Fun puzzle Ray!</p><p>Here's my crack at it:  <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FVfyib49T%3AfkD3H-tWSQ93JaNt-JdDcsYE_gU&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Vfyib49T">http://pastebin.com/Vfyib49T</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731000">2</a> by todd sharp
		posted on 3/25/2011 at 6:29 PM
		</div>
		<div class="comment_text"><p>Actually - I made one minor mod to ucase() the letters since those signs typically only use upper case.  Here's the modded version:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FXJjR1Htm%3AETshf6tx6EBU5ewh-IO2psghrxw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/XJjR1Htm">http://pastebin.com/XJjR1Htm</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730997">3</a> by Robert Gatti
		posted on 3/25/2011 at 6:34 PM
		</div>
		<div class="comment_text"><p>Fitting the words into each line was a little tricky but here's my code.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F8QQXby0H%3A4pfjmQQBI1Y63aiizHAh72PqDHc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/8QQXby0H">http://pastebin.com/8QQXby0H</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730995">4</a> by Raymond Camden
		posted on 3/25/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>@Robert: Sorry Robert, tag based solutions automatically lose and do not get to go home early on Fridays.</p><p>*joking*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730998">5</a> by Danny
		posted on 3/25/2011 at 6:47 PM
		</div>
		<div class="comment_text"><p>This one was fun.  Maybe I went overboard on the options, but I like options.</p><p>&lt;cffunction name="getSignInfo" returntype="Struct"&gt;<br>	&lt;cfargument name="message" type="string" required="true"&gt;<br>	&lt;cfargument name="width" type="numeric" required="true"&gt;<br>	&lt;cfargument name="includeSpaces" type="boolean" required="false" default="false"/&gt;<br>	&lt;cfargument name="fixWidthIssues" type="boolean" required="false" default="true"&gt;</p><p>	&lt;cfset var signDetails = {}/&gt;<br>	&lt;cfset var adjustedMessage = trim(arguments.message)/&gt;<br>	&lt;cfset var charArr = listtoARray(adjustedMessage,'')/&gt;<br>	&lt;cfset var wordArr = listtoARray(adjustedMessage,' ')/&gt;<br>	&lt;cfset var i = ""/&gt;<br>	&lt;cfset var wordLength = ""/&gt;<br>	&lt;cfset var currentRow = 1/&gt;<br>	&lt;cfset var slotsFilled = 0/&gt;</p><p>	&lt;!--- <br>		Examine each word in the message.<br>		If a word is too long for the width of the sign, we'll add spaces to adjust the message (Basically creating a "word wrap" feature)<br>		Optionally, we can throw an error when this happens.<br>	 ---&gt;	<br>	&lt;cfloop from="1" to="#arraylen(wordArr)#" index="i"&gt;<br>		&lt;cfset wordLength = len(wordarr[i])/&gt;<br>		&lt;cfif wordLength gt arguments.width&gt;<br>			&lt;cfif arguments.fixWidthIssues&gt;	<br>				&lt;cfset wordArr[i] = left(wordArr[i],arguments.width) &amp; " " &amp; mid(wordArr[i],arguments.width,wordLength)/&gt;<br>			&lt;cfelse&gt;<br>				&lt;cfthrow message="Oh noes! One of your words is too long for the sign!"/&gt;				<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset adjustedMessage = arrayToList(wordArr," ")/&gt;</p><p>	&lt;!--- Loop and count each letter.  We can also return the number of spaces if desired ---&gt;<br>	&lt;cfset signDetails.letterData = {}/&gt;<br>	&lt;cfloop array="#charArr#" index="i"&gt;<br>		&lt;cfif i eq " " &amp;&amp; !arguments.includeSpaces&gt;<br>			&lt;cfcontinue/&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif !structkeyexists(signDetails.letterData,i)&gt;<br>			&lt;cfset signDetails.letterData[i] = 0/&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset signDetails.letterData[i] += 1/&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset signDetails.rowData = {}/&gt;</p><p>	&lt;cfset signDetails.rowData["row1"] = ""/&gt;<br>	&lt;!--- Let's fill those rows ---&gt;	<br>	&lt;cfloop list="#adjustedMessage#" index="i" delimiters=" "&gt;		<br>		&lt;cfif (wordlength + slotsFilled) gt arguments.width&gt; &lt;!--- No more room, next row please. ---&gt;<br>			&lt;cfset currentRow++/&gt;<br>			&lt;cfset signDetails.rowData["row" &amp; currentRow] = ""/&gt;<br>			&lt;cfset slotsFilled = 0/&gt;<br>		&lt;/cfif&gt;</p><p>		&lt;cfset signDetails.rowData["row" &amp; currentRow] &amp;= i/&gt;<br>		&lt;cfset slotsFilled += wordLength/&gt;<br>		&lt;cfif slotsFilled lt arguments.width&gt;<br>			&lt;cfset signDetails.rowData["row" &amp; currentRow] &amp;= " "/&gt; &lt;!--- Add spaces between wods on the same row ---&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn signDetails/&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731002">6</a> by Danny
		posted on 3/25/2011 at 6:50 PM
		</div>
		<div class="comment_text"><p>Probably should have followed your initial recommendation:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FB2e60KxP%3AllEfCy71yJEhmsg67eXIPztvP34&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/B2e60KxP">http://pastebin.com/B2e60KxP</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731003">7</a> by Joe Bodell
		posted on 3/25/2011 at 6:51 PM
		</div>
		<div class="comment_text"><p>Probably a bit more verbose than some of the slickness others can provide, but here's my take.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731009">8</a> by Joe Bodell
		posted on 3/25/2011 at 6:52 PM
		</div>
		<div class="comment_text"><p>Or I could actually add the url to PasteBin......d'oh!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FhfPVdGJ0%3AmKWJFiHydlVOxRqqSPGkx-QMCbk&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/hfPVdGJ0">http://pastebin.com/hfPVdGJ0</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731005">9</a> by Jeremy Battle
		posted on 3/25/2011 at 6:55 PM
		</div>
		<div class="comment_text"><p>Thank you for derailing my morning with a puzzle :) <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FUVuqHPB3%3AMcqUEFITHm3sW72Lc3PDhk8Iyec&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/UVuqHPB3">http://pastebin.com/UVuqHPB3</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731006">10</a> by Robert Gatti
		posted on 3/25/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>@Ray: Just for you ... the scripted version <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FJxc7xWWV%3AC4G2ZKu8Wt3-ldHC1WRR2Sss5Zs&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Jxc7xWWV">http://pastebin.com/Jxc7xWWV</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731007">11</a> by Michael Mongeau
		posted on 3/25/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>Here's my attempt, also assuming uppercase letters only:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FMmmdA2K3%3AMUHHR_nFLFjgzBEZmCNE1N-EqrA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/MmmdA2K3">http://pastebin.com/MmmdA2K3</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731001">12</a> by Dave Ferguson
		posted on 3/25/2011 at 7:31 PM
		</div>
		<div class="comment_text"><p>Here is my swing at it..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FpE541YL5%3AjBwIgg0_uLsymrOHdxQw-R8UVuo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/pE541YL5">http://pastebin.com/pE541YL5</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731014">13</a> by todd sharp
		posted on 3/25/2011 at 7:40 PM
		</div>
		<div class="comment_text"><p>@Dave Ferguson:</p><p>You lose 5000 points for using the local scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731010">14</a> by Raymond Camden
		posted on 3/25/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Todd, no worries. Dave killed me quite a few times in COD sessions. There is no chance in hell he will win this contest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731008">15</a> by Raymond Camden
		posted on 3/25/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Oops, that was supposed to be a DM. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731011">16</a> by Dave Ferguson
		posted on 3/25/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>@todd</p><p>I am used to loosing lots of points for no reason so at least this time there is a reason.</p><p>However, Don't be a hater it still works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731018">17</a> by todd sharp
		posted on 3/25/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>Amen Dave.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730986">18</a> by Roy Hansen
		posted on 3/25/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>I really like Dave's solution and loaded it up. I wonder if it's missing something though (or perhaps it's just me). The results return 7 rows, but wouldn't it be 6?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730985">19</a> by Edward - Florida SEO
		posted on 3/25/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>@Robert</p><p>Showoff</p><p>:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730987">20</a> by Phillip Senn
		posted on 3/25/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>I personally give Dave Fergusonofcourse +5000 points for explicitly using local.  Heck, I've even gone so far as to create a local scope in all my JavaScript functions, and a Variables scope as well!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730989">21</a> by AXL
		posted on 3/25/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>Here is mine.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F4PnGCWCa%3AXuCCjYjrc0llNsSaDer6qLabTJ8&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/4PnGCWCa">http://pastebin.com/4PnGCWCa</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730991">22</a> by Drew Wells
		posted on 3/25/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>Does it have to be written in ColdFusion?  I didn't see that in the question, but it seems all the solutions are in ColdFusion.  Do you have a preference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730994">23</a> by Raymond Camden
		posted on 3/25/2011 at 10:18 PM
		</div>
		<div class="comment_text"><p>Yep, sorry Drew. May I ask - what language did you want to use?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730993">24</a> by Drew Wells
		posted on 3/25/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>JavaScript, standing up a ColdFusion is bit more time than I have to do this :p</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731019">25</a> by Raymond Camden
		posted on 3/25/2011 at 10:20 PM
		</div>
		<div class="comment_text"><p>Ah ok. I'll consider JavaScript ones in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731013">26</a> by Ed Bartram
		posted on 3/25/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Here's my solution, complete with unabashed flattery: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FA3uV7tLX%3A6N19CpGt3aNytctrNtHLFcTL3jM&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/A3uV7tLX">http://pastebin.com/A3uV7tLX</a><br>You can test it out at: <a href="http://disq.us/url?url=http%3A%2F%2Fedbartram.com%2FFridayPuzzler%2FJoesCarWash.cfm%3AhtFshjcXIZwdIJ07CMRxmOb0Hy4&amp;cuid=3321886" rel="nofollow noopener" title="http://edbartram.com/FridayPuzzler/JoesCarWash.cfm">http://edbartram.com/Friday...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731016">27</a> by Drew Wells
		posted on 3/25/2011 at 11:09 PM
		</div>
		<div class="comment_text"><p>Well you peeked my interest so I did it JavaScript anyways, please DON'T consider for the drawing for ColdFusion builder though.<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FsFXLq%2F3%2F%3AD0bhmumFicTuEm8V836USPBDQHM&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/sFXLq/3/">http://jsfiddle.net/sFXLq/3/</a></p><p>It comes with a test string so you can just click run.  I think a little more undistracted time, I could get this running in a lot less LOC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731025">28</a> by Drew Wells
		posted on 3/25/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>Oh no can't edit comment!<br>Wasn't returning anything, fixed <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FsFXLq%2F5%2F%3A9a-CYXZd3vGyUXVKQ_Kr-CAg3aw&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/sFXLq/5/">http://jsfiddle.net/sFXLq/5/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731023">29</a> by Topper
		posted on 3/25/2011 at 11:41 PM
		</div>
		<div class="comment_text"><p>One problem that most of the submission all share is that they were all done in cold fusion. I would think that for a business solution you would want to use something more robust like C# or Java? Right?? Like what would happen for example if Joe's Car Wash had to swap out his servers or hosting providers in 5 years if cold fusion gets canned, know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731022">30</a> by todd sharp
		posted on 3/25/2011 at 11:45 PM
		</div>
		<div class="comment_text"><p>@Topper</p><p>CF is Java.  Your argument is invalid.</p><p>Go away.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731024">31</a> by Raymond Camden
		posted on 3/25/2011 at 11:46 PM
		</div>
		<div class="comment_text"><p>Wow, Topper. That's not very accurate, and not really on topic either. If you would like to debate the merits of ColdFusion, we can do so on another entry. You mention "in 5 years" - you do know Adobe is already working on ColdFusion 10 _and_ has the plans for 11, right? Certainly they might change their mind. But even if they did, it wouldn't magically make your ColdFusion code stop working. Also, there are alternative providers like Railo out there.</p><p>So... in my opinion - this is a non issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731026">32</a> by patton
		posted on 3/25/2011 at 11:57 PM
		</div>
		<div class="comment_text"><p>wait, shoudl we be concerned about cf going away??? do we need to look at different hosting choices?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731027">33</a> by Cornfed Pig
		posted on 3/26/2011 at 12:01 AM
		</div>
		<div class="comment_text"><p>I know I'm concerned when I look at job trends and see cf flatlining at the bottom! Buy into Groovy now (or Ruby)!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731029">34</a> by Topper
		posted on 3/26/2011 at 12:02 AM
		</div>
		<div class="comment_text"><p>hey sorry wasn't trying to ruffle feathers. Yea cold fusion code wont stop working when adobe cans the product this is true. All i was saying was that i figured a more robust language that is better accepted by businesses and more widely used in general would make for better solutions to your puzzle. the puzzle itself is a great idea and I liked the contest a lot, so cheers! but yea for sure a good idea to learn something other than cold fusion. Best of luck! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731030">35</a> by Topper
		posted on 3/26/2011 at 12:04 AM
		</div>
		<div class="comment_text"><p>wow actually to cornfed I will say you are dead wrong about groovy and ruby. For longevity in your career, forget groovy and ruby and go with Java or C#.  apparently from what Todd says above cold fusion code is the same as Java??? but native Java and C# without a doubt. forget the others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731031">36</a> by Raymond Camden
		posted on 3/26/2011 at 12:06 AM
		</div>
		<div class="comment_text"><p>Ugh. Guys - can we please get on topic? Obviously I'm biased towards CF. Obviously some people are not. That's perfectly ok. But this blog entry is just a simple, fun, coding contest in ColdFusion. If the language isn't your thing, that's cool, but can we save that for later?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731032">37</a> by Topper
		posted on 3/26/2011 at 12:11 AM
		</div>
		<div class="comment_text"><p>do you mean back on topic about "cold fusion canned in 5 years" thing or about the results all being in cold fusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731033">38</a> by Raymond Camden
		posted on 3/26/2011 at 12:18 AM
		</div>
		<div class="comment_text"><p>Topper, honestly, do I have to answer that? I'm trying to take your comments at face value, and assume you aren't trying to troll here, but I'm having a hard time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731034">39</a> by Connor Middleton
		posted on 3/26/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>Here is my late entry: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FkWVv902e%3APQddWcxgGs9lpx5TxQSSk_Rvzps&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/kWVv902e">http://pastebin.com/kWVv902e</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731036">40</a> by MikeG
		posted on 3/26/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>Quick and dirty, probably needs a run thru the car wash..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FNvPjRYi9%3A43IR7X_wihkOwP1cb2Iax2naf1k&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/NvPjRYi9">http://pastebin.com/NvPjRYi9</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731037">41</a> by MikeG
		posted on 3/26/2011 at 2:04 AM
		</div>
		<div class="comment_text"><p>you kow what, I already won - even if I don't.  I realized today that in CF 9 (maybe earlier?) you can have a . or a ; or a , or a ? or a - or a ! as a structure key name.  Whodathunkit?</p><p>M</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731043">42</a> by Raymond Camden
		posted on 3/26/2011 at 2:05 AM
		</div>
		<div class="comment_text"><p>Doing a quick review and here are some random comments:</p><p>1) Jeremy Battle - you used this.* to call methods in your CFC. Avoid that. It acts like an outside call in terms of security and will fail if the method is private. Instead of <a href="http://disq.us/url?url=http%3A%2F%2Fthis.foo%3Adum70ciAYelEFLGVBzvYrh_qr9Y&amp;cuid=3321886" rel="nofollow noopener" title="this.foo">this.foo</a>(), just do foo().</p><p>You also missed var scoping X in your loop iterator. Watch out for that. ;)</p><p>Also, you init your arrays like this: var tempArray = [""]; Which is interesting - but incorrect. This creates a new array with one item, an empty string. You probably (I assume?) wanted an empty array to start off with: var tempArray=[];</p><p>2) All - those who used tag based CFCs, don't forget your output=false.</p><p>3) AXL - I like how you didn't do it all in one UDF - but don't like the use of script. If your going to write it mostly in script, go 100%. But that's just my opinion. :)</p><p>4) Ed - this is awesome: &lt;cfset structSign.unabashedFlattery = "Ray is awesome!"&gt;</p><p>5) Drew - thank you for using jsfiddle. I've been hearing about it but haven't seen an example. It's awesome and now I'm going to try it myself. :)</p><p>6) Connor - nice nick name on the pastebin. ;) Lack of var scoping though. Ditto MikeG on the cool pastebin nick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731042">43</a> by Raymond Camden
		posted on 3/26/2011 at 2:08 AM
		</div>
		<div class="comment_text"><p>Ok - so I picked a winner. As I warned folks - it was very arbitrary and purely for fun. I appreciate everyone who tried. I know it's scary to share your code publicly sometimes. I took all of your names and entered it into a hat (aka an array). I doubled Robert since he actually rewrote his tag based version into script. I repeated Ed cuz he built a form I could run online (others did forms for testing too, but Ed appealed to my laziness). I then did a random selection:</p><p>&lt;cfset entries = ["Todd Sharp","Robert Gatti","Robert Gatti","Danny","Joe Bodell","Jeremy Battle","Michael Mongeau","Dave Ferguson sucks at COD","AXL","Ed Bartram","Ed Bartram","Connor Middleton"]&gt;</p><p>&lt;cfset picked = randRange(1,arrayLen(entries))&gt;<br>&lt;cfoutput&gt;Winner(winning)=#entries[picked]#&lt;/cfoutput&gt;</p><p>And the winner was...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731041">44</a> by Dave Ferguson
		posted on 3/26/2011 at 2:12 AM
		</div>
		<div class="comment_text"><p>While I appreciate your fairness in judging the contest.  I would like to file a formal protest as to the nature of how I was included.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731040">45</a> by Raymond Camden
		posted on 3/26/2011 at 2:13 AM
		</div>
		<div class="comment_text"><p>Do you deny you don't suck at COD? I mean that's my only explanation as to how you kick my butt. I think you're so bad you "wrap around" the skill scale back to positive. ;)</p><p>Ok -sorry folks - leaving off the winner WAS intentional and I assumed people would notice and yell but I guess everyone is out. ;)</p><p>The winner is... Connor Middleton.</p><p>Connor - send me an email and I'll get you instructions on how to get your software.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731047">46</a> by Jeremy Battle
		posted on 3/26/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>@ray good catch on the function scope, and the var scoping of x was just an oversight, however, I did want my array initialized with one element that was empty. :) thanks for the contest I missed them!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731049">47</a> by MikeG
		posted on 3/26/2011 at 2:46 AM
		</div>
		<div class="comment_text"><p>Foul I say - Just foul...Whereis MikeG in the Entries Array &lt;grin&gt;  Dang, now I am gonna have to enter the next contest too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731052">48</a> by Connor Middleton
		posted on 3/26/2011 at 3:18 AM
		</div>
		<div class="comment_text"><p>Wow, thanks for the feedback Ray, and especially for running these Friday Puzzlers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731048">49</a> by Connor Middleton
		posted on 3/26/2011 at 3:32 AM
		</div>
		<div class="comment_text"><p>BTW, add in me in to youe COD battles, my gamertag is connor2k</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731051">50</a> by Alirio Boquin
		posted on 3/26/2011 at 3:47 AM
		</div>
		<div class="comment_text"><p>Raymond this reminds me of my course in Logic and Discrete mathematics carried in univerdad, was a good times!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731060">51</a> by CD
		posted on 3/26/2011 at 4:05 AM
		</div>
		<div class="comment_text"><p>I'm too late for the contest but I wanted to post my code anyway.  (Thanks, Ray--this was fun!)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FAJjxb1wq%3AQiuf45YuyyahmxcIuWKRUqM582U&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/AJjxb1wq">http://pastebin.com/AJjxb1wq</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731058">52</a> by Raymond Camden
		posted on 3/26/2011 at 4:33 AM
		</div>
		<div class="comment_text"><p>Doh! Sorry MikeG!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731057">53</a> by MikeG
		posted on 3/26/2011 at 4:46 AM
		</div>
		<div class="comment_text"><p>S'ok - now I know who to ask if I ever need a code review that I have to pass..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731059">54</a> by Ed Bartram
		posted on 3/26/2011 at 5:25 PM
		</div>
		<div class="comment_text"><p>Thanks for the fun Ray and I appreciate the second entry. Congrats Connor!</p></div>
	</div>
</div>
		