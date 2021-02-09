
<div class="comment" id="c_1713664893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664893">1</a> by Brian Rinaldi
		posted on 5/8/2007 at 6:53 PM
		</div>
		<div class="comment_text"><p>I generally agree with you here. I used to use it a lot and I now don't use it at all. Too many unsupported tags forced me to hack my to making scripts work or keep opening and closing script blocks.</p><p>I would say that at this point I am perfectly comfortable with the tag based syntax. There is less noise in cfscript but other than that it offers no real benefit. So, despite the updates to cfscript in 8, I probably will stick with the tag syntax personally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664885">2</a> by TJ Downes
		posted on 5/8/2007 at 6:53 PM
		</div>
		<div class="comment_text"><p>I find cfscript very useful when writing large chunks of set and if statements. It seems faster, you're not encumbered by typing a large number of characters that aren't needed (tag names primarily, such as &lt;cfset&gt; and using if() rather than &lt;cfif&gt;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664882">3</a> by Tom Mollerus
		posted on 5/8/2007 at 7:15 PM
		</div>
		<div class="comment_text"><p>Given that conditional loops are supported in CF7, there are even fewer reasons to use cfscript. That was one of the few flow-control features that script had which CFML didn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664877">4</a> by Stuart Moffatt
		posted on 5/8/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>Brad, one reason why you may see a lot of UDFs written in cfscript out there on the web is that when UDFs were first introduced in CF5, they could only be written using cfscript. It was only from CF6 onwards, that you could (and should, for the reasons Ray mentions) use tag-based syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664880">5</a> by tony petruzzi
		posted on 5/8/2007 at 7:38 PM
		</div>
		<div class="comment_text"><p>Actually line for line, the reason is because cfscript is faster (performance wise) then cfset.</p><p>Here is the post on it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nomachetejuggling.com%2F2006%2F12%2F07%2Fcoldfusions-compiler%2F%3A_vsy_aFreZ-lxnAfiTlkVmp9Kms&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nomachetejuggling.com/2006/12/07/coldfusions-compiler/">http://www.nomachetejugglin...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664883">6</a> by Michael Dinowitz
		posted on 5/8/2007 at 8:56 PM
		</div>
		<div class="comment_text"><p>There is an tutorial on CFSCRIPT here on House of Fusion<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Ftutorials%2Fcfscript%3AeSLgtQCKETeHvMXiBfdg5GWTnT4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/tutorials/cfscript">http://www.houseoffusion.co...</a></p><p>As for speed, the gap between CFSCRIPT and CFSET/CFIF/etc. has closed with the latest versions of ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664881">7</a> by Sam
		posted on 5/8/2007 at 9:47 PM
		</div>
		<div class="comment_text"><p>I prefer it because of so much less clutter, but I'm stuck in old habits and still most often use tags now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664886">8</a> by Peter Bell
		posted on 5/8/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>From previous threads on this, I'd say the majority of "experts" in the CF world seem to prefer tag based syntax. The reasoning varies from "it's easier to keep straight tag based CF from Javascript and AS" to "so many tags aren't supported in CFScript, it's easier just to use CFML across the board" (which is - I believe the most common response and used to be my position.)</p><p>That said, I find now that I use CF Script almost exclusively. Almost all of the tags that CF Script is missing (cffile, cfquery, etc.) I tend to wrap in methods so that I have a single touch point for modifying how queries and the file system operate (i.e. I'm not doing this just to be able to use CF Script - I'd do this even if I coded entirely in CFML). There are some tags I miss such as cfdump/cfabort, but a quick dump() method added to my base class (hey, it's my framework - so if I want to throw in a couple of base methods, so be it!) and I can dump(whatever); anywhere I want - even quicker than the cfdump/cfabort, and I find the lower amount of noise (which is in the end of the day the main benefit of CF Script now that I believe it usually gets compiled down to the same byte code with possibly a couple of exceptions) is a good reason to use it.</p><p>There is really no good reason to use a tag based syntax for a general purpose programming language (although if it floats your boat don't let me stop you :-&gt;). A tag based syntax works really well for a templating language for generating dynamic HTML (which is what CFML started out as), but for methods in your model or controller, I've never seen the point of the extra noise.</p><p>That said, there is a lot of preference involved in this. If you know CFML and don't find the extra few characters annoying, I'd stick with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664892">9</a> by Cutter
		posted on 5/8/2007 at 10:38 PM
		</div>
		<div class="comment_text"><p>Yes, I use CFScript. A lot. No, I haven't gone so far as to write wrapper functions for tags not supported by CFScript, but I use it heavily for business logic processing (if this set this) and looping constructs. There was a fairly recent blurb on the CFWeekly about a shop that had a page that used the cfloop tag, and the same page with the loop in script. Upon decompiling the actual java class files it was discovered that they were different (BTW, the script was faster). Somebody actually had benchmarks posted at one time (Dave Shuck maybe?) that seemed to suggest script was faster as well.</p><p>I tend to use it for economy of code, less lines of processing, and typically only code blocks that don't have output. Example: we have a home rolled trouble ticket system for submitting client issues. We have several scheduled processes that do various tasks, like auto-escalating 'high' priority tickets to 'emergency' status after 48 hours. This typically involves a few gateway objects running different queries, usually within a loop. No output, no user interaction, no fuss, no muss, and runs fantastically as a 'scripted' application.</p><p>I think that some of the performance gains we might see now, with CFScript, will probably be a thing of the past with Scorpio. From the reports of the UG Tour (Nashville tomorrow night!) things appear to be much faster, and I imagine that the Adobe engineers have re-engineered the base java classes of most tags (to utilize the new features of Java 1.5, and probably common code base between tags and their script counterparts). That being said, I'll probably still use CFScript a lot, and see it as a natural transition for a JavaScript or ActionScript programmer moving into ColdFusion (and good experience for a CF programmer writing more JS and AS).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664890">10</a> by JAlpino
		posted on 5/9/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>I think using &lt;cfscript&gt; over CFML is fine as long as the developer is consistent in their usage of it. I've reviewed too much code where the developer flip-floped back and forth between the two (most of the time for no good reason), which made readability less than favorable.</p><p>Personally I favor CFML for the simple fact that it has access to all of language features, like locking, which I'm not sure can elegantly be accomplished with a wrapper under &lt;cfscript&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664891">11</a> by Tony G
		posted on 5/9/2007 at 2:54 AM
		</div>
		<div class="comment_text"><p>I started out as a designer/HTML guy and one of the things that drew me to CF was the tag-based syntax, which I find much easier to understand than the script syntax.<br>So for people like me who are still trying to learn new CF stuff from the "experts", it IS frustrating to try to decipher code examples that have a lot of cfscript. For example, I've learned a lot CF "theory" from reading Peter Bell's articles/blogs, but it's so much work for me to try to figure out some of his code.<br>The way I look at it, why should I have to learn a whole new way of coding? If I wanted to code in "script" syntax, I would've taken up PHP! ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664888">12</a> by Peter Bell
		posted on 5/9/2007 at 3:20 AM
		</div>
		<div class="comment_text"><p>Hi Tony,</p><p>to be fair, the way I code, even if it was in CFML it might still not be that obvious :-&lt; If there's anything you have a real problem with, comment on the article and I'll do what I can to give a sense of what it'd be doing in tags!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664898">13</a> by TonyG
		posted on 5/9/2007 at 4:49 AM
		</div>
		<div class="comment_text"><p>Thanks, Peter. Reading my post again it looks like I was picking on you, but I definitely didn't mean to (you're still one of my favorite "experts"). Actually I was agreeing with your earlier point that it's really just a matter of preference. Code that is "cleaner" and "less cluttered" to some might not seem so to others.<br>Next time, I'll make sure to ask you if I get stumped by any of your code again and maybe I'll (as Ray puts it) learn to stop worrying and pick up a little cfscript!</p></div>
	</div>
</div>
		