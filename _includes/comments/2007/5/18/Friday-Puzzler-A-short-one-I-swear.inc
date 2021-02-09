
<div class="comment" id="c_1713665385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665385">1</a> by Dave Ferguson
		posted on 5/18/2007 at 5:38 PM
		</div>
		<div class="comment_text"><p>Here ya go..</p><p>&lt;CFSET str = "Berry told me he had lost his<br>umbrella last night when<br>sailing with his friends.</p><p>He really is kind of stupid.<br>Really. I mean, how dumb<br>of a person do you have to be to<br>collapse on a moving bock and hurt your<br>knees while<br>sailing?"&gt;</p><p>&lt;CFLOOP INDEX="i" LIST="#str#" DELIMITERS="#chr(10)#"&gt;<br>	&lt;CFOUTPUT&gt;#left(i, 1)#&lt;/CFOUTPUT&gt;<br>&lt;/CFLOOP&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665386">2</a> by DK
		posted on 5/18/2007 at 6:05 PM
		</div>
		<div class="comment_text"><p>yar #chr(13)#. quit discriminating on OS's dave :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665384">3</a> by todd sharp
		posted on 5/18/2007 at 6:36 PM
		</div>
		<div class="comment_text"><p>&lt;cfset decodedMsg = ""&gt;</p><p>&lt;cfsavecontent variable="msg"&gt;<br>Right now there<br>are millions of<br>young<br>Immigrants<br>starving in<br>America.<br>Can't we <br>own this problem and<br>make a <br>massive effort to<br>improve conditions in the greatest country on<br>earth?<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfset msgArr = listToArray(msg,chr(13))&gt;</p><p>&lt;cfloop from="1" to="#arrayLen(msgArr)#" index="arrPos"&gt;<br>	&lt;cfif len(msgArr[arrPos])&gt;<br>		&lt;cfset decodedMsg = insert(left(trim(msgArr[arrPos]),1),decodedMsg,len(decodedMsg))&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfoutput&gt;#decodedMsg#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665379">4</a> by Ben Nadel
		posted on 5/18/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>Here's mine... not the way I would do it, but the other simpler answers were already taken :)</p><p>&lt;cfsavecontent variable="strText"&gt;<br>Berry told me he had lost his<br>umbrella last night when<br>sailing with his friends.</p><p>He really is kind of stupid.<br>Really. I mean, how dumb<br>of a person do you have to be to<br>collapse on a moving bock and hurt your<br>knees while<br>sailing?<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfset strMessage = strText.Trim().ReplaceAll(<br>	"(?m)(^.?).*?$(?:\r?\n)?",<br>	"$1"<br>	) /&gt;</p><p>Outputs:</p><p>"BusHRocks"</p><p>There is no space between the two words because in my text there was no space character (only multiple line breaks). This solution works by replacing each line with the first character of that line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665389">5</a> by Sam
		posted on 5/18/2007 at 8:31 PM
		</div>
		<div class="comment_text"><p>"my (poor) Republican readers"</p><p>Dogs and cats<br>only like to <br>nibble each other's food and<br>then cuddle after 9:00 PM.  <br>You knew that, didn't you?  They also like to sit<br>on the bed and sleep with their masters; sometimes<br>underneath it.  <br>My dogs and cats <br>eat just like goats -<br>anything!  I'm<br>not complaining though.  <br>Rover <br>is the best.  So is our cat, Mimmi.  She<br>can <br>hiss like a Sneaky Snake!  Can you<br>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665387">6</a> by Chris Phillips
		posted on 5/18/2007 at 9:27 PM
		</div>
		<div class="comment_text"><p>You said, simple. So, I decided to make it a little more complicated.</p><p>Ben, yours is nice!</p><p>&lt;cfsavecontent variable="txt"&gt;<br>Berry told me he had lost his<br>umbrella last night when<br>sailing with his friends.</p><p>He really is kind of stupid.<br>Really. I mean, how dumb<br>of a person do you have to be to<br>collapse on a moving bock and hurt your<br>knees while<br>sailing?<br>&lt;/cfsavecontent&gt;<br>&lt;cfset regex = "[\r\n]([a-zA-Z0-9\.])(.+)" /&gt;<br>&lt;cfset match = refind(regex,txt,1) /&gt;<br>&lt;cfset hiddenMessage = '' /&gt;<br>&lt;cfloop condition="#match#"&gt;<br>	&lt;cfset hiddenMessage = hiddenMessage &amp; mid(txt,match+1,1) /&gt;<br>	&lt;cfset match = refind(regex,txt,match+2) /&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset writeOutput(hiddenMessage) /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665388">7</a> by Ben Nadel
		posted on 5/18/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>@Chris,</p><p>Thanks :)</p><p>Also, I just had a thought... CF8 is gonna have the REMatch() function. Here is what it work with that (I assume):</p><p>#ArrayToList(<br>REMatch( "(?m)^.?", strText ),<br>""<br>)#</p><p>Am I crazy?? Or is CF8 gonna dominate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665392">8</a> by Jeremy French
		posted on 5/18/2007 at 11:48 PM
		</div>
		<div class="comment_text"><p>Heheh, scorpio's gonna rock!</p><p>&lt;cfset decryptedMessage = ""&gt;<br>&lt;cfloop file="#fileName#" index="line"&gt; <br>   &lt;cfset decryptedMessage += left(line, 1)&gt;<br>&lt;/cfloop&gt;</p><p>Yeah, I know, += won't actually work for concatenation.  That brings up another point, though.  Are we gonna get a &amp;= operator?</p></div>
	</div>
</div>
		