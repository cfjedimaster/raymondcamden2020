
<div class="comment" id="c_1713718260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718260">1</a> by Saravanamuthu
		posted on 9/11/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>I hope, I finished it.<br>&lt;cfscript&gt;<br>function twitSafe(ipStr){<br>	return ListToArray(REReplaceNoCase(ipStr, '(.{140})','\1,','ALL'));<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cfdump var="#twitSafe('Its been a few weeks since my last Friday Puzzler but during a meeting yesterday an idea came up that I thought was too good to pass up. To sweeten the pot a bit Im going to give the winner a $20 Amazon gift certificate to the winner. Your post must be by noon CST. The winner will be chosen by me and will most likely be 100% arbitrary and unfair. Whiners automatically get to use PHP for the rest of their lives.')#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718243">2</a> by Raymond Camden
		posted on 9/11/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>Nope, it trims the lines. I need it _add_. So if line 3 was too long, it should rewrite line 3 to be short enough, and add a NEW line after it (and before the old line 4) with the remainder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718256">3</a> by Dan G. Switzer, II
		posted on 9/11/2009 at 6:29 PM
		</div>
		<div class="comment_text"><p>function twitSafe(s){<br>  return wrap(s, 140);<br>}</p><p>hehe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718248">4</a> by Raymond Camden
		posted on 9/11/2009 at 6:34 PM
		</div>
		<div class="comment_text"><p>Doh. Now that is too easy. ;) I love it when I forget about some of the built in stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718251">5</a> by Dan G. Switzer, II
		posted on 9/11/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>There are *so* many built-in functions anymore, I find it's good to occassionally just review the list every quarter or so. It's easy to forget that some of the corner case functions are already built-in. I can't recall how many times I've started to build something to only realize: "Oh, there's already a function/tag for that!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718253">6</a> by Raymond Camden
		posted on 9/11/2009 at 6:38 PM
		</div>
		<div class="comment_text"><p>Would you be opposed to a twist to the contest to keep it interesting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718257">7</a> by Saravanamuthu
		posted on 9/11/2009 at 6:50 PM
		</div>
		<div class="comment_text"><p>Holy C...This is too easy, :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718261">8</a> by sam Farmer
		posted on 9/11/2009 at 7:01 PM
		</div>
		<div class="comment_text"><p>@Dan: I agree completely about re-reading the docs every quarter or so to keep fresh which functions and tags CF has.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718262">9</a> by CDLavie
		posted on 9/11/2009 at 7:02 PM
		</div>
		<div class="comment_text"><p>I tried to avoid using built-in functions that did this--but there's probably still a MUCH easier way.  Regardless, here's my submission.</p><p>&lt;cffunction name="TwitterString" returntype="string"&gt;<br>	&lt;cfargument name="v_strTweet"  type="string"&gt;</p><p>	&lt;!--- In case Twitter ever changes the maximum length. ---&gt;<br>	&lt;cfset v_intMaxLength = 140&gt;</p><p>	&lt;cfset strReturn = ""&gt;<br>	&lt;cfset intLength = Trim(Len(v_strTweet))&gt;</p><p>	&lt;cfif intLength LTE v_intMaxLength&gt;</p><p>		&lt;cfset strReturn = v_strTweet&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset intCurrentLength = Len(v_strTweet)&gt;</p><p>		&lt;cfloop condition="intCurrentLength GT v_intMaxLength"&gt; &lt;!--- 55 ---&gt;<br>			&lt;cfset strReturn = strReturn &amp; Left(v_strTweet, v_intMaxLength) &amp; "&lt;br /&gt;"&gt;  &lt;!--- 75 ---&gt;<br>			&lt;cfset v_strTweet = Mid(v_strTweet, (v_intMaxLength + 1), (Len(v_strTweet) - v_intMaxLength))&gt;  &lt;!--- 94 ---&gt;<br>			&lt;cfset intCurrentLength = Len(v_strTweet)&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfset strReturn = strReturn &amp; v_strTweet&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn strReturn&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718250">10</a> by Matthew Abbott
		posted on 9/11/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Here is the function I wrote.  I had it inserting a new line and return but changed it to a &lt;br/&gt; so you can at least see it in the browser.</p><p>&lt;cffunction name="TwitterSafe" output="false"&gt;<br>	&lt;cfargument name="str" required="true" type="string"&gt;<br>	&lt;cfargument name="maxlength" required="false" type="Numeric" default="140"&gt;<br>	&lt;cfset var newString = ""&gt;<br>	&lt;cfset var strLen = len(ARGUMENTS.str)&gt;<br>	&lt;cfset var splitNum = strLen/ARGUMENTS.maxlength&gt;<br>	&lt;cfset var startPos = 0&gt;<br>	&lt;cfset var substr = ""&gt;<br>	&lt;!---&lt;cfset var lb = Chr(13) &amp; Chr(10)&gt;---&gt;<br>	&lt;cfset var lb = "&lt;br/&gt;"&gt;</p><p>	&lt;cfif strLen mod ARGUMENTS.maxlength gt 0&gt;<br>		&lt;cfset splitNum++&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfloop from="1" to="#splitNum#" index="i"&gt;<br>		&lt;cfset startPos = (i-1) * ARGUMENTS.maxlength&gt;<br>		&lt;cfset substr = mid(str,startPos+1,ARGUMENTS.maxlength)&gt;<br>		&lt;cfset newString = newstring &amp; substr &amp; lb&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn newString&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718254">11</a> by Raymond Camden
		posted on 9/11/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>I'm going to delete your comment Richard so you can report without the BR tags in it. My blog should auto handle that if you have a line break in the comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718249">12</a> by Richard Braxton
		posted on 9/11/2009 at 8:08 PM
		</div>
		<div class="comment_text"><p>Sorry about the last post, here is a cleaner version...</p><p>&lt;cfscript&gt;<br>function twim(strIn){<br>  // remove and consolodate line breaks<br>  instr=REReplaceNoCase(strIn,'\s*(\t|\r|\n|\f)\s*',chr(10),'ALL');<br>  i = 1;<br>  a = ArrayNew(i);<br>  do {<br>    // if there is a break in the first 141 then break<br>    // 141 handles the exception of the 141st<br>    n = refind('\n',instr);<br>    if(n GT 0 AND n LTE 141) {<br>      a[i] = left(instr,n-1);<br>      instr=mid(instr,n+1,len(instr));<br>    } else {<br>      // insert word wrap here<br>      a[i] = left(instr,140);<br>      instr=mid(instr,141,len(instr));<br>    }<br>    i=i+1;<br>  }<br>  while (len(instr));<br>  return a;<br>}<br>&lt;/cfscript&gt;<br>&lt;cfdump var="#twim('Its been a few weeks since my last Friday Puzzler but during a <br>meeting yesterday an idea came up that I thought was too good to pass up. To sweeten the pot a bit Im going to give the winner a $20 Amazon ' &amp; Chr(13) &amp; Chr(10) &amp; 'gift certificate to the winner. Your post must be by noon CST. The winner will be chosen by me and will most likely be 100% arbitrary and unfair. Whiners automatically get to use PHP for the rest of their lives.')#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718263">13</a> by Raymond Camden
		posted on 9/11/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>Nicer. :)</p><p>Going to pick a winner in 51 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718264">14</a> by James Edmunds
		posted on 9/11/2009 at 8:37 PM
		</div>
		<div class="comment_text"><p>Isn't noon CST the same as 1 pm CDT? Do we get that extra hour? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718255">15</a> by Raymond Camden
		posted on 9/11/2009 at 8:38 PM
		</div>
		<div class="comment_text"><p>Um... have I said how much I hate timezones? ;)</p><p>You get till 12 CST... but to be honest, till I get back upstairs from making my peanut butter and jelly sandwich.</p><p>And to others - James bought me lunch a few days ago, so if he enters, he wins. I did say the contest was unfair, right? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718270">16</a> by James Edmunds
		posted on 9/11/2009 at 8:43 PM
		</div>
		<div class="comment_text"><p>I will respectfully decline and leave the contest that wee bit more fair ... mostly because I can't top Richard Braxton's name for the function!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718267">17</a> by Barney
		posted on 9/11/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>The wrap-based solution doesn't meet the spec.  Wrap (and the CFMAILPART attribute) both wrap every N characters, not at the Nth character of each line.  E.g., assuming N == 72, wrapping two lines of 50 characters each will result in three lines of length 50, 12, and 50 respectively.  So you'd need to loop over the lines individually to make it behave correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718269">18</a> by Raymond Camden
		posted on 9/11/2009 at 8:59 PM
		</div>
		<div class="comment_text"><p>Barney, unless I'm misreading you, I do not believe you are right. I did this test:</p><p>&lt;cfsavecontent variable="s"&gt;<br>aaa<br>bbb<br>ccc<br>ddd<br>eee<br>fff<br>This is the test I'll be doing to see if the UDFs pass my test.<br>AAThis is the test I'll be doing to see if the UDFs pass my test. This is the test I'll be doing to see if the UDFs pass my test. This is a really darn long sentence.<br>FOo<br>Moo<br>&lt;/cfsavecontent&gt;<br>&lt;cfoutput&gt;<br>&lt;pre&gt;<br>#wrap(s,10)#<br>&lt;/pre&gt;<br>&lt;/cfoutput&gt;</p><p>Your comment seems to suggest that - "10 chars in" - it should auto add a line break in those first few lines. I am not seeing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718271">19</a> by Barney
		posted on 9/11/2009 at 9:07 PM
		</div>
		<div class="comment_text"><p>It's not going to add a line break in the middle of the word.  Here's a real-world example.  You'll notice that the first line of the second paragraph is wrapped at just the right spot to fill out the 72 character limit of the last line of the first paragraph.</p><p>&lt;cfsavecontent variable="s"&gt;<br>Yes, I think that would be a very valuable service, since NeatMentorApp represents our primary transit vehicle to customers.</p><p>How can I help with this request?<br>&lt;/cfsavecontent&gt;<br>&lt;cfoutput&gt;<br>&lt;pre&gt;<br>#wrap(trim(s),72)#<br>&lt;/pre&gt;<br>&lt;/cfoutput&gt;</p><p>I should mention two things: 1) your example wasn't symptomatic, and 2) I'm on CF8, so CF9 might have addressed the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718275">20</a> by Raymond Camden
		posted on 9/11/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>Ah - I forgot that wrap is smart enough to not break a word. That being said, then you are right, Dan failed with the wrap function. Sorry about that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718280">21</a> by JAlpino
		posted on 9/11/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>Although I know that my submission is the equivalent of shooting an air ball after the buzzer, I figured that I would post it anyway. Fully compressed it comes to 285 chars but it respects urls that would otherwise be broken up across multiple lines (and that are less than 140 chars long).</p><p>&lt;cfscript&gt;<br>function m(x){f=140;t=listToArray(x," ");r=[""];i=1;for(j=1;j&lt;=arraylen(t);j++){v=t[j];a=r[i];if(len(a)+len(v)&lt;f){r[i]&amp;=v&amp;" ";}else{if(!refindnocase("https?:\/\/(.)*\s?",v)){r[i]&amp;=v;g=len(a)-f;r[i]=left(r[i],f);if(g!=0){v=right(v,g);}}r[++i]=v&amp;" ";}}return arrayToList(r,chr(10));}<br>&lt;/cfscript&gt;</p><p>&lt;cfoutput&gt;&lt;pre&gt;#m("Its been a few weeks since my last Friday Puzzler but during a meeting yesterday an idea came up that I thought was too good to pass up. To sweeten the pot a bit Im going to give the winner a $20 Amazon ' &amp; Chr(13) &amp; Chr(10) &amp; 'gift certificate to the winner. Your post <a href="http://disq.us/url?url=http%3A%2F%2Fsomesuperwebsite.com%3AcWJwfCkVMdEI_ZlwIQifoNrXajg&amp;cuid=3321886" rel="nofollow noopener" title="http://somesuperwebsite.com">http://somesuperwebsite.com</a> must be by noon CST. The winner will be chosen by me and will most likely be 100% arbitrary and unfair. Whiners automatically get to use PHP for the rest of their lives")#&lt;/pre&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718277">22</a> by Raymond Camden
		posted on 9/11/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>Interesting - so far - the UDFs seem to all have the same issue as what Barney pointed out with wrap. None of them seem to respect a line by line parse.</p><p>Will check JAlpino's UDF next.</p><p>Richard, your UDF failed for me when I supplied it with data like so:</p><p>&lt;cfsavecontent variable="s"&gt;<br>this is another test of the local braodcasting system. i know i have a typos in here but hopefully people won't mind so umuch I hope the udf works ok as well.<br>this is line two.<br>&lt;/cfsavecontent&gt;</p><p>Gave me:</p><p>The 2 parameter of the Left function, which is now 0, must be a positive integer</p><p>on this line:</p><p>a[i] = left(instr,n-1);</p><p>Also - as a general comment to everyone - TSK TSK for failing to var scope. Matthew Abbot did ok - but he forgot to var scope the loop iterator. :)</p><p>That being said - I do think Richard's entry should win based on name alone. I _love_ it. Richard, please email me via my contact form and use the email address you want the certificate sent too.</p><p>Even though we don't have an answer yet that I'm happy with - I want to at least hand out the reward before people head out for the weekend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718278">23</a> by Jeff
		posted on 9/11/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;function theLineToTwitter(s){if(Len(s) gt 140){s=Left(s,140)&amp;chr(10)&amp;theLineToTwitter(RemoveChars(s,1,140));}return s;}&lt;/cfscript&gt;</p><p>Here is 140 characters that will handle an arbitrary ONE line string. I gave up when I realized I couldn't make 140 characters solve the entire problem ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718279">24</a> by Matthew Abbott
		posted on 9/11/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>Yeah I noticed I didnt var scope the i after i posted it, but it was too late by then.</p><p>Thanks Ray.  This at least made my friday go by a little quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718283">25</a> by Raymond Camden
		posted on 9/11/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Jeff - Your UDF didn't need to be 140 long - it just needed to have each _line_ be 140 long (or less.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718287">26</a> by JAlpino
		posted on 9/11/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>I left out var scope to keep my udf as small (and functional) as possible, I didn't read (doh!) that only each line of the udf had to be less than 140.</p><p>Plus, my udf breaks on the same sample text that Richard's does.</p><p>jalpino udf == fail</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718282">27</a> by Dan G. Switzer, II
		posted on 9/11/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Actually, mine did not fail by the rules. You stated "The UDF will parse each line for length and ensure it is ***less than or equal to 140 characters*** long." You didn't say it should crop at exactly 140 characters. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718285">28</a> by Jeff
		posted on 9/11/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I know. But I wanted it to be 140 :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718289">29</a> by Jeff
		posted on 9/11/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>@ Dan</p><p>"... Any line longer than 140 characters should be truncated ..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718290">30</a> by Adam Presley
		posted on 9/11/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>Yes, I know a winner was already picked, and mine suffers from the "wrap at word" syndrome, but only because I like it! :p Anyway, here ya go.</p><p>&lt;cffunction name="twitTrim" returntype="any" access="public" output="true"&gt;<br>	&lt;cfargument name="value" type="string" required="true" /&gt;<br>	&lt;cfargument name="maxLength" type="any" required="false" default="140" /&gt;</p><p>	&lt;cfscript&gt;</p><p>		var s1 = arguments.value.trim().split("\r\n|\r|\n");<br>		var s2 = []; var temp = "";<br>		var i = 0; var o = 0;<br>		var r = [];</p><p>		while (++o &lt;= arrayLen(s1))<br>		{<br>			s2 = s1[o].trim().split("\s");<br>			i = 0; temp = "";</p><p>			while (++i &lt;= arrayLen(s2))<br>			{<br>				if (i == arrayLen(s2))<br>					r.add(temp &amp; " #s2[i]#");<br>				else if ((len(temp) + len(s2[i])) &lt; arguments.maxLength)<br>					temp &amp;= " #s2[i]#";<br>				else<br>				{<br>					r.add(temp);<br>					temp = s2[i];<br>				}<br>			}<br>		}</p><p>		return r;</p><p>	&lt;/cfscript&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718284">31</a> by Richard Braxton
		posted on 9/11/2009 at 11:12 PM
		</div>
		<div class="comment_text"><p>Let's see if this one works any better.  It is designed to eliminate extra lines but to keep breaks as submitted.</p><p>&lt;cfscript&gt;<br>function twim(strIn){<br>	// remove and consolodate line breaks<br>	// and remove starting/ending whitespace<br>	variables.instr=trim(REReplaceNoCase(strIn,'\s*(\t|\r|\n|\f)\s*',chr(10),'ALL'));<br>	variables.i = 1;<br>	variables.a = ArrayNew(i);<br>do {<br>  	// if there is a break in the first 141 then break<br>	// 141 handles the exception of the 141st<br>	variables.n = refind('\n',instr);<br>	if(n GT 0 AND n LTE 141) {<br>		a[i] = left(instr,n-1);<br>		instr=mid(instr,n+1,len(instr));<br>	} else {<br>		// with word wrap<br>		//if the 141st character is a space<br>		if (mid(instr,141,1) eq ' ') {<br>			a[i] = trim(left(instr,140));<br>			instr=trim(mid(instr,141,len(instr)));<br>		} else {<br>			a[i] = trim(left(instr,140-refind(' ',reverse(left(instr,140)))));<br>			instr=trim(mid(instr,len(a[i])+1,len(instr)));			<br>		}<br>	}<br>	i=i+1;<br>}<br>while (len(instr));<br>   return a;<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718288">32</a> by Richard Braxton
		posted on 9/11/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>Thanks FTW!!  Let me know if this code needs help or if you are expecting another form of output...</p></div>
	</div>
</div>
		