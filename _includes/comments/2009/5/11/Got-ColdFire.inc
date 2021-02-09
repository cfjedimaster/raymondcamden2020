
<div class="comment" id="c_1713715393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715393">1</a> by Tom McNeer
		posted on 5/11/2009 at 10:08 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Just a suggestion: a lot has been added to ColdFire since you originally wrote and blogged about it. Perhaps it would be worth another blog entry or two to catch folks up on it, even with a little instruction on how to make sure you see various scopes, query results, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715383">2</a> by Nathan Mische
		posted on 5/11/2009 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Tom - I'm hoping to have some time over the summer to set up a wiki on the ColdFire RIAForge project site and consolidate a lot of the info that is spread across Ray's blog, my blog, and the ColdFire site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715392">3</a> by Paul
		posted on 5/14/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>I see the ColdFire options in FireBug but I never get any output, plus the error "ColdFire is NULL" keeps popping up in FireBug. Any ideas?</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715401">4</a> by Raymond Camden
		posted on 5/14/2009 at 12:17 AM
		</div>
		<div class="comment_text"><p>Did you enable debugging in the CF Admin?<br>Did you ensure your IP is allowed to get debug info (or no IP restrictions exist)?<br>Did you select the coldfire.cfm file in the debug settings?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715396">5</a> by Nathan Mische
		posted on 5/14/2009 at 12:39 AM
		</div>
		<div class="comment_text"><p>@Paul - Also, what version of Firebug? The latest version of ColdFire works with Firebug 1.3.3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715397">6</a> by Chris Ulrich
		posted on 5/19/2009 at 5:55 PM
		</div>
		<div class="comment_text"><p>I'm using Firebug and ColdFire ... when I look in the console and expand the error lines, I'm getting raw HTML error messages - starting with</p><p>&lt;/TD&gt;&lt;/TD&gt;&lt;/TD&gt;&lt;/TH&gt;&lt;/TH&gt;&lt;/TH&gt;&lt;/TR&gt;&lt;/TR&gt;&lt;/TR&gt;&lt;/TABLE&gt;&lt;/TABLE&gt;&lt;/TABLE&gt;&lt;/A&gt;&lt;/ABBREV&gt;&lt;/ACRONYM&gt;&lt;/ADDRESS<br>&gt;&lt;/APPLET&gt;&lt;/AU&gt;&lt;/B&gt;&lt;/BANNER&gt;&lt;/BIG&gt;&lt;/BLINK&gt;&lt;/BLOCKQUOTE&gt;&lt;/BQ&gt;&lt;/CAPTION&gt;&lt;/CENTER&gt;&lt;/CITE&gt;&lt;/CODE&gt;&lt;/COMMENT<br>&gt;&lt;/DEL&gt;&lt;/DFN&gt;&lt;/DIR&gt;&lt;/DIV&gt;&lt;/DL&gt;&lt;/EM&gt;&lt;/FIG&gt;&lt;/FN&gt;&lt;/FONT&gt;&lt;/FORM&gt;&lt;/FRAME&gt;&lt;/FRAMESET&gt;&lt;/H1&gt;&lt;/H2&gt;&lt;/H3&gt;&lt;/H4&gt;&lt;<br>/H5&gt;&lt;/H6&gt;&lt;/HEAD&gt;&lt;/I&gt;&lt;/INS&gt;&lt;/KBD&gt;&lt;/LISTING&gt;&lt;/MAP&gt;&lt;/MARQUEE&gt;&lt;/MENU&gt;&lt;/MULTICOL&gt;&lt;/NOBR&gt;&lt;/NOFRAMES&gt;&lt;/NOSCRIPT<br>&gt;&lt;/NOTE&gt;&lt;/OL&gt;&lt;/P&gt;&lt;/PARAM&gt;&lt;/pre&gt;&lt;/Q&gt;&lt;/S&gt;&lt;/SAMP&gt;&lt;/SCRIPT&gt;&lt;/SELECT&gt;&lt;/SMALL&gt;&lt;/STRIKE&gt;&lt;/STRONG&gt;&lt;/SUB&gt;&lt;/SUP<br>&gt;&lt;/TABLE&gt;&lt;/TD&gt;&lt;/TEXTAREA&gt;&lt;/TH&gt;&lt;/TITLE&gt;&lt;/TR&gt;&lt;/TT&gt;&lt;/U&gt;&lt;/UL&gt;&lt;/VAR&gt;&lt;/WBR&gt;&lt;/XMP&gt;</p><p>... and the the rest is visible HTML and visible javascript, instead of rendering as clean output.  Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715399">7</a> by Raymond Camden
		posted on 5/19/2009 at 5:56 PM
		</div>
		<div class="comment_text"><p>Thats the classic.cfm output. In your CF Admin, did you select coldfire.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715400">8</a> by ery
		posted on 10/23/2014 at 1:27 PM
		</div>
		<div class="comment_text"><p>I just install coldfire it help me. Thank you. <br>But I need to ask is there any documentation, so I can follow through as a new user?<br>Because now, I can't see detail info of DB queries, traces, timer, variable in firebug - coldfusion. <br>what should be setting to display debug information in these headers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715398">9</a> by Raymond Camden
		posted on 10/24/2014 at 12:37 AM
		</div>
		<div class="comment_text"><p>The RIAForge project should have all thd documentation.</p></div>
	</div>
</div>
		