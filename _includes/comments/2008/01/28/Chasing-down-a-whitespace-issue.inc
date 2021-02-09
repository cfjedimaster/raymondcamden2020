
<div class="comment" id="c_1713676652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676652">1</a> by David McGuigan
		posted on 1/29/2008 at 8:12 AM
		</div>
		<div class="comment_text"><p>I'm half-kidding, but have you tried wrapping the entirety fo the content with a &lt;cfsavecontent /&gt; and then using a regular expression to replace all whitespace streaks with a single space? And then using the resulting variable to generate your file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676661">2</a> by Fernando Rato
		posted on 1/29/2008 at 3:26 PM
		</div>
		<div class="comment_text"><p>David's solution is simply the best one. I use that for years!<br>Make a custom tag with this:</p><p>&lt;cfif not thisTag.hasEndTag&gt;<br>&lt;cfabort showError="You must close the tag"&gt;<br>&lt;/cfif&gt;<br>&lt;cfif thisTag.executionMode is "End"&gt;<br>&lt;cfset thisTag.generatedContent = REReplace(thisTag.generatedContent, "[[:cntrl:]]{2,}",chr(0), "ALL")&gt;<br>&lt;/cfif&gt;</p><p>Then, just insert the code you want between the start and end tags for the custom tag:</p><p>if the file is named "whitespace.cfm" then:</p><p>&lt;cf_whitespace&gt;<br>...content...<br>&lt;/cf_whitespace&gt;</p><p>All of your content will have whitespace removed, including line breaks.<br>I use this for my CFM, CSS and JS output.</p><p>It's fast and efective and, as I stated before, I've been using it for years in production servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676666">3</a> by dc
		posted on 1/29/2008 at 6:00 PM
		</div>
		<div class="comment_text"><p>Rewrite to use java's StringBuffer and build the string up that way then output.  Will give more control of the whitespace.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676665">4</a> by Rick Mason
		posted on 1/29/2008 at 6:26 PM
		</div>
		<div class="comment_text"><p>Don't forget to wrap cfparams with cfsilent if you have a long list of them as they can also generate whitespace.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676663">5</a> by Jeff
		posted on 1/29/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>This is something I found a couple years ago that uses the pageContext buffer. It doesn't remove all whitespace but reduces the extra whitespace leaving the code still readable by viewing source.</p><p>&lt;cfscript&gt;<br>	pageContent = getPageContext().getOut().getString().trim();<br>	getPageContext().getOut().clearBuffer();<br>	pageContent = REreplace(pageContent, "&gt;\s+&lt;", "&gt;" &amp; chr(13) &amp; chr(10) &amp; "&lt;", "all");//strip whitespace between tags<br>	pageContent = REreplace(pageContent, "[\n\r\f]+", chr(13) &amp; chr(10), "all");//condense excessive new lines into one new line<br>	pageContent = REreplace(pageContent, "\t+", " ", "all");//condense excessive tabs into a single space<br>	writeoutput(pageContent.trim());<br>	getPageContext().getOut().flush();<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676676">6</a> by Luke
		posted on 10/15/2009 at 2:22 PM
		</div>
		<div class="comment_text"><p>Fernanado you nailed my problem - many thanks, this will come in useful all over the place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676660">7</a> by Curt S
		posted on 10/22/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>Thanks for this.  Very helpful.  One more thing, though.  I created the whitespace.cfm file but made it all one line.  It was creating its own whitespaces; once I pulled it all together, worked like a charm.</p></div>
	</div>
</div>
		