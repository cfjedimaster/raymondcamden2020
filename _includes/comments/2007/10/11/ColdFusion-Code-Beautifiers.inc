
<div class="comment" id="c_1713673019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673019">1</a> by Ben Nadel
		posted on 10/11/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>Homesite+ has Code Sweeper (which I am sure was in all the other versions), but it does NOT beautify the code. I makes it crazy! Don't use it. Even with a lot of configuration, it messes a lot with your tag formatting.</p><p>The main problem is that formatting is so subjective. For instance, I do this:</p><p>&lt;cfsomething<br>attribute="value"<br>attribute="value"<br>/&gt;</p><p>(sub lines would be tabbed in), but other would say that "beautiful" code would have the whole tag on one line. So, how do you standardize this? It's an impossible task unless the configuration of the "beautifier" was quite robust.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673020">2</a> by Raymond Camden
		posted on 10/11/2007 at 5:30 PM
		</div>
		<div class="comment_text"><p>Well true - I think we can agree that... well no one agrees on what is beautiful code. ;) But outside of that - I'm still curious as to what tools are out there.</p><p>Well, my code is perfect - the reader was curious.</p><p>Hmm.... is that thunder?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673021">3</a> by Mike Henke
		posted on 10/11/2007 at 5:37 PM
		</div>
		<div class="comment_text"><p>I have tried HTML Tidy.  It has a Eclipse plugin. You can add new-inline-tags, new-blocklevel-tags, and new-blocklevel-tags so it recognizes ColdFusion.</p><p>Here are some links.<br><a href="http://disq.us/url?url=http%3A%2F%2Ftidy.sourceforge.net%2F%3APBDbiDr7-wli55S5RZ0RRrOcUZA&amp;cuid=3321886" rel="nofollow noopener" title="http://tidy.sourceforge.net/">http://tidy.sourceforge.net/</a> <br><a href="http://disq.us/url?url=http%3A%2F%2Feclipsetidy.sourceforge.net%2F%3A931mUWMvbwj59cvatbxuByao04k&amp;cuid=3321886" rel="nofollow noopener" title="http://eclipsetidy.sourceforge.net/">http://eclipsetidy.sourcefo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjtidy.sourceforge.net%2F%3A_gob8tNX3WQIhwOa-JG6OD7tFR4&amp;cuid=3321886" rel="nofollow noopener" title="http://jtidy.sourceforge.net/">http://jtidy.sourceforge.net/</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FPeople%2FRaggett%2Ftidy%2F%3AGtheqZE60vkugWlF1UyPGAdsyvA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/People/Raggett/tidy/">http://www.w3.org/People/Ra...</a> - sample config file with some cf tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673024">4</a> by James Edmunds
		posted on 10/11/2007 at 5:47 PM
		</div>
		<div class="comment_text"><p>I perhaps expose myself to ridicule and shame by even mentioning this in Eclipse-ocratic developer hangout ;), but Dreamweaver has an Apply Source Formatting command which makes for quite nicely formatted, well-organized and readable ColdFusion code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673026">5</a> by Chad
		posted on 10/11/2007 at 5:57 PM
		</div>
		<div class="comment_text"><p>I am a Dreamweaver guy and i was just using the Source Formatting yesterday to fix some really nasty code i inherited.</p><p>It works well.  It uses space a lot more then i do.  I tend to only use tab's to step code, but it works well and i bet i could make it use tabs if i dug into the preferences.</p><p>I tried switching to Eclipse twice and each time i somehow come back to Dreamweaver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673027">6</a> by Phillip Senn
		posted on 10/11/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>I 2nd the Dreamweaver acknowlegement.<br>The only real problem that I have with it is that it doesn't outdent the &lt;cfelse&gt; and &lt;cfelseif&gt;.</p><p>I've never found an editor that puts your variable names in the proper case depending on how you declared them, the way VB does it based on your DIM stmt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673025">7</a> by Ben Nadel
		posted on 10/11/2007 at 6:06 PM
		</div>
		<div class="comment_text"><p>I think Chad raises a good point. There's really two scenarios in which you need to beautify code:</p><p>1. Make sure that YOU, yourself are following your own standards.</p><p>2. Clean nasty code that you inherited.</p><p>I think performing #1 is inherently hard because it has to be an exact style. However, performing #2 can be much easier as it maybe only needs to get you to a point where you can do #1 manually with little effort. In that case, even the Code Sweeper that comes with Homesite+ /ColdFusion Studio can do a good enough job on #2.</p><p>Take for example commenting: I don't like comments that are too long. If a comment line goes past like 80 characters (eyeballing it), I must wrap that comment to another line (and subsequent lines if need be). I doubt there is a beautifier that would handle that rule, however, you could use a program to make all comments ONE line easily, then you could quickly go through and break them up as is needed manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673023">8</a> by David
		posted on 10/11/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>My code isn't that bad, really. :|</p><p>I've used CF for 7 years. However, I'm a Flex Developer. I completed the CF portion of my current project over the past 13 months.</p><p>I've been relatively happy with the formatting on my own project, but I found that there were formats I was happier with later on in my project, and the inconsistency made the code harder to understand as the project grew.</p><p>As a Flex Developer, I use Oxygen for Eclipse to format my MXML. Oxygen sorts my attributes, breaks long lines, strips white space, but will preserve line breaks. The consistency within each Flex project is wonderful, as far as the tag-based code is concerned. The indentation and hierarchy of Oxygen explains the hierarchy of my code and makes it easy to identify where each attribute exists or would exist.</p><p>I love automation. :)</p><p>I'll check out the suggestions above. I use CFEclipse and would prefer to stay in the Eclipse environment.</p><p>DB</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673028">9</a> by Lola LB
		posted on 10/11/2007 at 6:47 PM
		</div>
		<div class="comment_text"><p>Years ago, a former boss created a little VB program that would spit out pre-formatted templates, as well asthe ability to beautifying existing code.  Sadly, I no longer have access to it.</p><p>And yes, I'd prefer to stay within the Eclipse environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673029">10</a> by John Farrar
		posted on 10/11/2007 at 6:58 PM
		</div>
		<div class="comment_text"><p>I would like to see a tool that makes the code we send to the browser look nicer. It would be great if it set code in classes so it was even more portable. Anyone seen anything like that? I have seen one tool that provides it for about everything but CF. We need a regex guru to build the CF version if that is the way we go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673030">11</a> by Mark W. Breneman
		posted on 10/11/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>I have been searching for a good CF code formatter for a while, as my CF code is Uuuuggggly. Well Ok, its not that bad. But, I can tell who wrote it, our college intern or me. (in his programming classes he gets marked down for each extra space or missing space with his code formatting)</p><p>I too would vote for Dreamweavers format code feature as the best CF code formatter. I have even been known to open a file in DW just to use the format code feature, save file, close DW and then go back to CFeclipse.</p><p>I would love to see Mark Drew, or another member of the CFeclipse team, and the Adobe guys get together and build a plug-in (like the RDS thing) for CF code formatting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673032">12</a> by Joel Cox
		posted on 10/11/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>I use DW's formatter also. I'm obsessive about formatted code, it's probably the one reason I still use DW instead of CFEclipse.</p><p>I manually edited cfcomponent.vtm and cffunction.vtm like so:</p><p>Second line of cffunction.vtm:<br>tagformat indentcontents="yes" formatcontents="yes" nlbeforetag="2" nlbeforecontents="1" nlaftercontents="1" nlaftertag="2"/</p><p>Second line of cfcomponent.vtm:<br>tagformat nlbeforetag="1" nlaftertag="2" indentcontents="yes"/</p><p>(I left out the opening and closing angle brackets to avoid issues with posting this)</p><p>This formats the cfcs with empty lines between each cffunction for readability.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673036">13</a> by Jamie Jackson
		posted on 10/11/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>@John Farrar: You could check out Apache::Tidy, or some such Web server plugin. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.perlmonks.org%2F%3Fnode_id%3D308488%3AxQ8qCixBi9qEfdZKw4sSzTWxeZg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.perlmonks.org/?node_id=308488">http://www.perlmonks.org/?n...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673034">14</a> by David Buhler
		posted on 11/30/2007 at 2:54 AM
		</div>
		<div class="comment_text"><p>I wanted to add a link to some code Ben wrote. It looks like it could be used as a starting point for a CF Formatter, in the event any RegEx fanatic needs a building-block/starting-point.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A604.view%3AIsVf268A8gUzrYyZHb4h4AukA50&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:604.view">http://www.bennadel.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673031">15</a> by david buhler
		posted on 12/6/2007 at 5:17 AM
		</div>
		<div class="comment_text"><p>Joel Cox rocks!!!</p><p>By modifying the VTM files, I have endless control over the formatting of my CF in DW.</p><p>I couldn't be happier (until my DW trial expires ;) )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673035">16</a> by Phillip Senn
		posted on 12/6/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>VTM files, eh?<br>Have you found a way to outdent the &lt;cfelse&gt; and &lt;cfelseif&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673037">17</a> by David Buhler
		posted on 12/8/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>Using Eclipse (extraordinarily faster than DW) and the built in Find and Replace, I've been able to replace all double spaces with a single space. The Find and Replace can be done (as you all know) for an entire directory.</p><p>I've been able to bastardize the Dreamweaver VTM files to give a decent degree of formatting.</p><p>But, as Phillip points out, DW has limitations that make the code hard to read. CF is verbose, but the verbosity doesn't matter to me when the indentation, tabbing, and order of attributes is consistent.</p><p>For example<br>-I prefer all of my cfargument attributes to be in the same order.<br>- I prefer all of my cfargument attributes to have 3 tabs between attributes.<br>-I prefer extreme cuddling so I know the execution-order of</p><p>Dreamweaver has the following major issues, though:</p><p>-DW can't effectively indent the closing CFQuery tag.<br>-DW can't format my SQL (whose formatting was lost because of a web-based repository we had to use)<br>-DW can't effectively indent contents within a CFElse of CFElseif tag.<br>-DW can't handle formatting CFInvoke tags that are formatted with carriage returns.</p><p>I paid the $400 for DW. And in the end, I found that I had so many "internal errors", and such terrible lag issues, that it wasn't possible to use it effectively for formatting on a large scale.</p><p>Current assumptions:<br>The best way to clean up a project is to use the Eclipse RegEx option, which is part of the Find and Replace tool.</p><p>A cautionary tale:<br>Eclipse runs RegEx 100x faster than Dreamweaver. The caveat: CFEclipse has terrible 'back-tracking' with control-Z. My current version of CFEclipse creates its own formatting after about 4-5 backtracks, and I think I'm on 1.3.</p><p>If you want the quick and dirty formatting using DW, the vtm file path is below. The trick is to change the metrics from 1 to 2 for the following attributes:</p><p>nlbeforetag<br>nlbeforecontents<br>nlaftercontents<br>nlaftertag</p><p>Each time you make a change to a .VTM file, you'll need to restart Dreamweaver and run the "Apply Source Formatting" option again.</p><p>@ Location of the .vtm files:<br>C:\Program Files\Adobe\Adobe Dreamweaver CS3\configuration\TagLibraries\CFML</p><p>But what is the real solution?<br>In the long run, the only viable solution is a community project to create a RegEx library for formatting and changing CFML, or a utility that takes CFML and formats it with RegEx.</p><p>If your project's formatting is a total loss, like mine was, your best bet is to replace excessive tabs and spaces with RegEx in Eclipse.</p><p>ex:<br>// replaces excessive tabs with a single tab<br>Find: \t{2,}<br>Replace:\t</p><p>Then, use DW on a case-by-case basis to format the CFML and SQL.</p><p>@Phillip,<br>My RegEx skills are non-existent and DW can't format the contents of the cfelse of cfelseif, even if I add a formatcontents="yes" and identcontents="yes" to the VTM file.</p><p>Ultimately, we need a regex that adds a tab to the contents between cfelse/cfelseif and the closing 'cfif'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673039">18</a> by Bob Goff
		posted on 5/31/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>I have tried everything folks have listed but the easiest one to use with the best results is the HTML Formatter at:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.logichammer.com%2Fhtml-formatter%2F%3A6m9Fe7eFA5IwhGJupHs4ntFh33o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.logichammer.com/html-formatter/">http://www.logichammer.com/...</a></p><p>You can just drag and drop files or folders on it and it just magically formats everything.  Alternatively, you can call it programmatically from your favorite programming language or use windows "Send To" context menu to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673040">19</a> by Mark W. Breneman
		posted on 5/31/2008 at 2:05 AM
		</div>
		<div class="comment_text"><p>I just contacted Matt Pressnall of logichammer / html-formatter. html-formatter is a windows only app, but now after a few people have asked him about building an eclipse plug-in he is going to look into it. Matt will probably hate me for this, but I would encourage anyone reading this to send Matt an email requesting an eclipse plugin version of html-formatter. I really want a good CF code formatter for eclipse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673041">20</a> by Mark W. Breneman
		posted on 5/31/2008 at 2:07 AM
		</div>
		<div class="comment_text"><p>Opps, I hit post too fast...<br>You can contact Matt at logichammer / html-formatter at <br>support@logichammer.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673042">21</a> by Matt Pressnall
		posted on 10/31/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>Hey there --</p><p>Released a new version of the HTML Formatter which is very eclipse friendly!  Check it out at <a href="http://disq.us/url?url=http%3A%2F%2Flogichammer.com%3AFd-p8RWm7K3KaqMQ2Tnr2TQMo2s&amp;cuid=3321886" rel="nofollow noopener" title="logichammer.com">logichammer.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673045">22</a> by Vikas Patel
		posted on 11/12/2012 at 11:04 AM
		</div>
		<div class="comment_text"><p>I am hoping that if we can format code by attribute order. just like android: <a href="http://disq.us/url?url=http%3A%2F%2Ftools.android.com%2Frecent%2Fxmlformatter%3Ady8rdp-jmY_0E1kp6PzzwpbBkMU&amp;cuid=3321886" rel="nofollow noopener" title="http://tools.android.com/recent/xmlformatter">http://tools.android.com/re...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673044">23</a> by Vikas Patel
		posted on 1/12/2013 at 3:30 PM
		</div>
		<div class="comment_text"><p>I just use my custom code formatter for replacing spaces with tab: <a href="http://disq.us/url?url=http%3A%2F%2Fvikaskanani.wordpress.com%2F2013%2F01%2F03%2Fmanaging-coldfusion-code-formatting%2F%3Apo_iNgelhYbmo7bDm1b1xO973sw&amp;cuid=3321886" rel="nofollow noopener" title="http://vikaskanani.wordpress.com/2013/01/03/managing-coldfusion-code-formatting/">http://vikaskanani.wordpres...</a></p></div>
	</div>
</div>
		