
<div class="comment" id="c_1713670164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670164">1</a> by Rob Wilkerson
		posted on 8/13/2007 at 11:06 PM
		</div>
		<div class="comment_text"><p>I've never cared much for the XMLFormat() path and have instead chosen to use a less...engineered, maybe?...CDATA block.  If that can be used, it's a bit of a cleaner solution, in my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670179">2</a> by u
		posted on 8/13/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>That would work for xmlFormat - but not cffeed as I assume the &lt; would be escaped automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670175">3</a> by Rob Wilkerson
		posted on 8/13/2007 at 11:50 PM
		</div>
		<div class="comment_text"><p>Good point.  I assumed you had considered the possibility, but thought I'd throw it out there since you didn't mention it specifically.  As I recall, it doesn't work for CFXML and the mechanics of that are probably fairly similar to those of CFFEED.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670177">4</a> by Ben Garrett
		posted on 8/14/2007 at 5:51 AM
		</div>
		<div class="comment_text"><p>It's not just a few characters about around 25 that are not part of the ISO-8859-1 standard but are often found in documents and on web sites.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FWindows-1252%3ACQIF-nO-CfWHMqCiAXFTpgO68tM&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Windows-1252">http://en.wikipedia.org/wik...</a></p><p>This was my fix for the problem.</p><p>&lt;cffunction name="UnicodeWin1252" hint="Converts MS-Windows superset characters (Windows-1252) into their XML friendly unicode counterparts" returntype="string"&gt;<br>	&lt;cfargument name="value" type="string" required="yes"&gt;<br>	&lt;cfscript&gt;<br>		var string = value;<br>		string = replaceNoCase(string,chr(8218),'&amp;##8218;','all');	// ‚ <br>		string = replaceNoCase(string,chr(402),'&amp;##402;','all');		// ƒ <br>		string = replaceNoCase(string,chr(8222),'&amp;##8222;','all');	// „ <br>		string = replaceNoCase(string,chr(8230),'&amp;##8230;','all');	// … <br>		string = replaceNoCase(string,chr(8224),'&amp;##8224;','all');	// † <br>		string = replaceNoCase(string,chr(8225),'&amp;##8225;','all');	// ‡ <br>		string = replaceNoCase(string,chr(710),'&amp;##710;','all');		// ˆ <br>		string = replaceNoCase(string,chr(8240),'&amp;##8240;','all');	// ‰ <br>		string = replaceNoCase(string,chr(352),'&amp;##352;','all');		// Š <br>		string = replaceNoCase(string,chr(8249),'&amp;##8249;','all');	// ‹ <br>		string = replaceNoCase(string,chr(338),'&amp;##338;','all');		// Œ <br>		string = replaceNoCase(string,chr(8216),'&amp;##8216;','all');	// ‘ <br>		string = replaceNoCase(string,chr(8217),'&amp;##8217;','all');	// ’ <br>		string = replaceNoCase(string,chr(8220),'&amp;##8220;','all');	// “ <br>		string = replaceNoCase(string,chr(8221),'&amp;##8221;','all');	// ” <br>		string = replaceNoCase(string,chr(8226),'&amp;##8226;','all');	// • <br>		string = replaceNoCase(string,chr(8211),'&amp;##8211;','all');	// – <br>		string = replaceNoCase(string,chr(8212),'&amp;##8212;','all');	// — <br>		string = replaceNoCase(string,chr(732),'&amp;##732;','all');		// ˜ <br>		string = replaceNoCase(string,chr(8482),'&amp;##8482;','all');	// ™ <br>		string = replaceNoCase(string,chr(353),'&amp;##353;','all');		// š <br>		string = replaceNoCase(string,chr(8250),'&amp;##8250;','all');	// › <br>		string = replaceNoCase(string,chr(339),'&amp;##339;','all');		// œ <br>		string = replaceNoCase(string,chr(376),'&amp;##376;','all');		// Ÿ <br>		string = replaceNoCase(string,chr(376),'&amp;##376;','all');		// Ÿ <br>		string = replaceNoCase(string,chr(8364),'&amp;##8364','all');		// € <br>	&lt;/cfscript&gt;<br>	&lt;cfreturn string&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670176">5</a> by Raymond Camden
		posted on 8/14/2007 at 5:59 AM
		</div>
		<div class="comment_text"><p>Do you mind if I include this in toXML.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670180">6</a> by Ben Garrett
		posted on 8/14/2007 at 6:17 AM
		</div>
		<div class="comment_text"><p>Sure go for it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670182">7</a> by Raymond Camden
		posted on 8/15/2007 at 12:44 AM
		</div>
		<div class="comment_text"><p>Thanks Ben. Updated:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fprojects%2Ftoxml%2F%3AnTlIkusSDMTSOUiVDV_TNh98bOk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/projects/toxml/">http://www.coldfusionjedi.c...</a></p><p>This will probably roll into Paragator as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670183">8</a> by Ben Garrett
		posted on 8/16/2007 at 1:33 PM
		</div>
		<div class="comment_text"><p>The file download for toxml seems to be the one released on 30/Apr even though the page says 14th Aug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670178">9</a> by Raymond Camden
		posted on 8/16/2007 at 2:33 PM
		</div>
		<div class="comment_text"><p>Sorry about that - try now please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670181">10</a> by Ben Garrett
		posted on 8/16/2007 at 3:48 PM
		</div>
		<div class="comment_text"><p>Thanks, works great now</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670166">11</a> by Michael Williams
		posted on 9/1/2007 at 6:52 AM
		</div>
		<div class="comment_text"><p>Doesn't the CFLIB tag XMLFormat2() handle high ascii?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670162">12</a> by Raymond Camden
		posted on 9/7/2007 at 1:23 AM
		</div>
		<div class="comment_text"><p>It covers some - but not all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670165">13</a> by Jason
		posted on 9/19/2007 at 5:43 PM
		</div>
		<div class="comment_text"><p>Thanks guys. I've been banging my head on this problem for hours now!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670163">14</a> by Joel
		posted on 12/11/2007 at 9:43 PM
		</div>
		<div class="comment_text"><p>This sound great... I'm sort of new to CF -- where/how would I implement this so that it make the corrections.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670168">15</a> by Raymond Camden
		posted on 12/11/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>Joel - my blog entry ends with an example of how I change the data before I pass to cffeed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670169">16</a> by Grumpy CFer
		posted on 7/11/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>Old post, but a top result in Google so adding to the conversation...</p><p>I solved this with CDATA blocks inserted after creating the feed.  So after the cffeed I've run these two REReplace fucntions.</p><p>	&lt;cfset FeedXML = REReplace(Variables.FeedXML, "(?m)^(\s*&lt;title&gt;)(.*?)(&lt;/title&gt;\s*)$", "\1&lt;![CDATA[\2]]&gt;\3", "all")&gt;<br>	&lt;cfset FeedXML = REReplace(Variables.FeedXML, "(?m)^(\s*&lt;description&gt;)(.*?)(&lt;/description&gt;\s*)$", "\1&lt;![CDATA[\2]]&gt;\3", "all")&gt;</p><p>If you want to write the feed to disk then you'll need to put it into a variables, run the above and then cffile it to disk.</p></div>
	</div>
</div>
		