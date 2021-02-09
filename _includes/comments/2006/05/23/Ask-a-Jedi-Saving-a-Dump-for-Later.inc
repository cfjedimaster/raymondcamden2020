
<div class="comment" id="c_1713653352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653352">1</a> by tof
		posted on 5/24/2006 at 4:47 AM
		</div>
		<div class="comment_text"><p>i've written a small custom tag, because i had some time on my hands. Sorry, I'm using cf5 here, so you'll have to plug it in your utility cfcs yourselves ;-)</p><p>&lt;cfparam name="attributes.OutPutPath" type="string" default="D:\"&gt;					&lt;!--- Physical path to the saved file ---&gt;<br>&lt;cfparam name="attributes.OutPutFile" type="string" default="MyBigDump.htm"&gt;		&lt;!--- Name of the file to save ---&gt;<br>&lt;cfparam name="attributes.MyVar" default=""&gt;										&lt;!--- variable to be dumped ---&gt;<br>&lt;cfparam name="attributes.MyDumpName" type="string" default=""&gt;						&lt;!--- name of the cfdump element (&gt;cf5) ---&gt;<br>&lt;cfparam name="attributes.MyDumpExpand" type="boolean" default="1"&gt;					&lt;!--- whether or no you want the structure to be expanded my default (&gt;cf5) ---&gt;<br>&lt;cfparam name="attributes.Append" type="boolean" default="1"&gt;						&lt;!--- whether you want to append to current file or start from scratch ---&gt;</p><p>&lt;cfsavecontent variable="variables.TempVar"&gt;<br>	&lt;cfdump var="#attributes.Myvar#" label="#attributes.MyDumpName#" expand="#attributes.MyDumpExpand#"&gt;<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfif attributes.Append&gt;<br>	&lt;cfset variables.ThisWriteAction = "append"&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset variables.ThisWriteAction = "write"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cffile action="#variables.ThisWriteAction#" file="#attributes.OutPutPath##attributes.OutPutFile#" output="#variables.TempVar#"&gt;</p><p>Tof</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653360">2</a> by tof
		posted on 5/24/2006 at 4:51 AM
		</div>
		<div class="comment_text"><p>and of course, to use it:</p><p>&lt;cfset foo = "bar"&gt;<br>&lt;cf_savedump MyVar="#foo#"&gt;</p><p>Since everything is defaulted, you only need to pass the variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653358">3</a> by rich
		posted on 5/24/2006 at 6:02 AM
		</div>
		<div class="comment_text"><p>Don't forget to cfflush when done.</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653364">4</a> by Tony Petruzzi
		posted on 5/24/2006 at 6:42 AM
		</div>
		<div class="comment_text"><p>This is probably one of the most useful little secrets with CF.</p><p>I use it extensivly when working with Paypal since when using IPN, it is hard to know what was past to you and what errors have occurred. By saving the dumps of the form and url structures to an html file, it makes it easy to know if your getting the right information from Paypal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653363">5</a> by Scott Stroz
		posted on 5/24/2006 at 7:04 AM
		</div>
		<div class="comment_text"><p>&lt;cfdump&gt;, &lt;cflog&gt; (who thought of these names?) and &lt;cfsavecontent&gt; are incredible time savers when it comes to troubleshooting/debugging and application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653362">6</a> by todd
		posted on 5/24/2006 at 4:45 PM
		</div>
		<div class="comment_text"><p>I used this method to learn how flash remoting passes structures to a cfc.</p><p>For example, take a cfgrid and pass it's contents to a cfc and save the dump - you'll see that the grid is passed as an array of structures.</p><p>CFDUMP is great.  But like Ray said - they're LOADED with HTML - don't try to email a large dump, it will be a mess!  I've had a huge dump lock up my Outlook several times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653365">7</a> by Scott Stroz
		posted on 5/24/2006 at 4:48 PM
		</div>
		<div class="comment_text"><p>'don't try to email a large dump, it will be a mess!  I've had a huge dump lock up my Outlook several times.'</p><p>Quite possibly the dirtiest thing ever uttered on Ray's blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653370">8</a> by Dan G. Switzer, II
		posted on 5/24/2006 at 6:56 PM
		</div>
		<div class="comment_text"><p>Actually, I'd suggest the best way to "view a dump later" would be to actually use CFWDDX to save the data as XML and then use CFDUMP against the WDDX packet.</p><p>Doing this not only allows you to quickly recreate the actual data instance (incase you wanted to re-create a problem) you can very easily use CFDUMP to dump the WDDX to screen for readibility (if you don't want it known that it was converted to WDDX, just serialize to a local variable before calling CFDUMP.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653367">9</a> by Dan G. Switzer, II
		posted on 5/24/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>For people who have problems e-mailing themselves a CFDUMP using Outlook, trying including the CFDUMP as an external file. That way Outlook doesn't have to parse the HTML.</p><p>I use Thunderbird and it renders CFDUMP very efficiently. I can view e-mails that will hang Outlook users. The solution we used was to send the CFDUMP outputs as an attachment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653368">10</a> by Larry C. Lyons
		posted on 5/25/2006 at 8:47 PM
		</div>
		<div class="comment_text"><p>Surely Ray you could have come up with a better title for this one. I nearly killed the monitor by spraying coffee all over it I was laughing so hard.</p><p>larry<br>(off in the wilds of BC)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653351">11</a> by Larry C. Lyons
		posted on 5/25/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>Actually I use a combination of &lt;cfsavecontent&gt;, and &lt;cfdump&gt; in combination with &lt;cfmail&gt; and &lt;cflog&gt; in my debugging. Its saved me a lot of time and effort in figuring out various problems.</p><p>regards,</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653353">12</a> by Tom Jordahl
		posted on 5/25/2006 at 10:37 PM
		</div>
		<div class="comment_text"><p>I have been using cfsavecontent in just the way Ray talks about a zillion times while working on the Mystic Flex 2.0 integration with CFCs.  What a pain!  :-)</p><p>Luckly we have given cfdump some love already in the scorpio tree and I think we have solved several of the problems (dump to a file, HTML/css dependancies, etc) that people are talking about here.</p><p>We were very tempted to put this in Mystic (just for our own use!) but since we are giving it away for free, its bug fixes only per Adobe (and Macromedia for that matter) policy.  [Yes, I know that the Flex 2.0 stuff is new, but you have to have *Flex* for that]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653354">13</a> by Raymond Camden
		posted on 5/25/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>Nice to hear about the enhancements Tom. I hope you guys advertise it a bit. It seems like some of the small, cool stuff gets forgotten. (Of course, they aren't as cool.)</p><p>For example - how many people on this thread know about the TOP attribute of cfdump?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653355">14</a> by Raymond Camden
		posted on 5/25/2006 at 10:40 PM
		</div>
		<div class="comment_text"><p>Heh, ignore the cool, not as cool text. I got caught by my own spam checker and the rewrite didn't quite come out well. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653356">15</a> by Christopher
		posted on 5/26/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>Ray - thanks for the heads up on the parameters that can be passed to CFDUMP, I'd never read the livedoc on it since I just assumed that I was passing just the var over.</p><p>Also, as a first time "Ask a Jedi" blog commentor, thanks for the blog, it's the first I subscribed to ever (using Thunderbird) and your posts are awesome (and this one quite amusing).</p></div>
	</div>
</div>
		