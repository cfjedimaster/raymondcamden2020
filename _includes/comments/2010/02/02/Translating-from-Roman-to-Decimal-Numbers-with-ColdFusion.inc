
<div class="comment" id="c_1713721706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721706">1</a> by Mark Drew
		posted on 2/2/2010 at 7:33 PM
		</div>
		<div class="comment_text"><p>In Railo you can do : <br>#NumberFormat(1999, "roman")#</p><p>Which gives you: <br>MCMXCIX</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721708">2</a> by Raymond Camden
		posted on 2/2/2010 at 7:34 PM
		</div>
		<div class="comment_text"><p>Nice... but we're trying to go the _other_ way. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721709">3</a> by Mark Drew
		posted on 2/2/2010 at 7:49 PM
		</div>
		<div class="comment_text"><p>DOH! Should have read it better!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721711">4</a> by John Farrar
		posted on 2/2/2010 at 8:43 PM
		</div>
		<div class="comment_text"><p>The very first ColdFusion code I wrote was for a distribitor of supplies to fraternities and sororities. The greek thing was of course very big with this client. The code we implemented to do this has been lost many years ago and it made me appreciate the value of unique things like this being shared with others. CFLib is still a value and asset to developers in the know. Many nice features are built into CF but if they built everything in we would have no value. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721716">5</a> by Leigh
		posted on 2/2/2010 at 11:11 PM
		</div>
		<div class="comment_text"><p>That is very cool!  cflib really does have a function for everything :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721715">6</a> by Gary Funk
		posted on 2/3/2010 at 6:25 AM
		</div>
		<div class="comment_text"><p>I see one tiny little problem. IIX comes up as 10 instead of 8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721712">7</a> by Raymond Camden
		posted on 2/3/2010 at 9:53 AM
		</div>
		<div class="comment_text"><p>Doh! I'll work on it tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721714">8</a> by Raymond Camden
		posted on 2/3/2010 at 7:47 PM
		</div>
		<div class="comment_text"><p>Wait a sec - I don't think IIX is valid. That should be VIII instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721713">9</a> by Gary Funk
		posted on 2/3/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>It can be either way. Two smaller numbers are allowed to the left. Sush as IIC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721718">10</a> by Raymond Camden
		posted on 2/3/2010 at 7:57 PM
		</div>
		<div class="comment_text"><p>I can see it with II, but not anything else. VVC should be XC.</p><p>We could write a rule that loops for IIN and simply replaces it with Val(N)-2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721721">11</a> by Raymond Camden
		posted on 2/3/2010 at 7:59 PM
		</div>
		<div class="comment_text"><p>As an FYI, I think you may be wrong. I went to two online converters, and both failed to grok IIX. They both had no problem with VIII.</p><p>Now I'm going to ask you to put up or shut up! ;) If you can find me proof that IIX (or IIC, etc) is valid, I'll support it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721719">12</a> by Gary Funk
		posted on 2/3/2010 at 8:15 PM
		</div>
		<div class="comment_text"><p>I will concide IIc is wrong for htis reason.</p><p>IIC is not even a valid Roman numeral (because you can't subtract 2 directly from 100; you would need to write it as XCIIX, for 10 less than 100, then 2 less than 10).</p><p>Also...</p><p>This form of notation closely follows Latin language usage, in which the number 18 is pronounced as duodeviginti, meaning two [deducted] from twenty (duo-de-viginti), and 19 is pronounced undeviginti, meaning one [deducted] from twenty (un-de-viginti).</p><p>So, if you can have 2 from 20, IIXX would be valid and come up wirth 18.</p><p>On a last note, it is clear that the rules are not really rules and have been changed over the last 2000 years. If IIX is not valid, at least, it shoud not retuen 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721722">13</a> by Andreas Schuldhaus
		posted on 2/3/2010 at 8:15 PM
		</div>
		<div class="comment_text"><p>IIX isn't a valid roman numeral. You can use a regular expression ^M{0,4}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$ to validate the input. The expr. matches roman numerals up to MMMMDCCCLXXXVIII which is the longest you can write without extended syntax.</p><p>Good post BTW. Thank you for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721720">14</a> by Gary Funk
		posted on 2/4/2010 at 2:12 AM
		</div>
		<div class="comment_text"><p>IIX is a valid number and there is documented use of it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FRoman_numerals%3AZ9BC7U4c0ODnOMC0kqqCMwAZzJQ&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Roman_numerals">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721723">15</a> by Gary Funk
		posted on 2/4/2010 at 2:16 AM
		</div>
		<div class="comment_text"><p>@Andreas: I am sorry, but just because some REGEX code does not validate IIX does not invalidate IIX. Please quote some old Roman text, any old Roman text that states IIX is invalid and I will concede the point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721726">16</a> by Raymond Camden
		posted on 2/4/2010 at 2:18 AM
		</div>
		<div class="comment_text"><p>I don't know - this section "IIII and IV" seems to imply that _sometimes_ it was used. Considering that - practically - we have no "Roman Numerals Ruling Party", we have to make some concessions for standards and what we will accept.</p><p>If you can come up with a mod to the UDF to make it support XXY where X &lt; Y, then I'll put it in. Otherwise, I can live with it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721724">17</a> by Jeff
		posted on 2/4/2010 at 3:14 AM
		</div>
		<div class="comment_text"><p>Those IIX could have been typos. We all make thme.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721725">18</a> by Gary Funk
		posted on 2/4/2010 at 3:48 AM
		</div>
		<div class="comment_text"><p>And I bet there was no stoneout to correct thoses erros that were 'written in stone.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721728">19</a> by Andreas Schuldhaus
		posted on 2/4/2010 at 6:52 PM
		</div>
		<div class="comment_text"><p>@Gary: Ok point taken. The regex once was created to match what *today* is considered to be a valid roman numeral, not the other way round. The wikipedia article also states that (usually) any symbol that appears more than once consecutively may not be followed by a symbol of larger value. That means, IIV would not be valid, although such numerals were rarely in the Middle Ages. Maybe some old Germans didn't know the rules well, and introduced some typos, only to see some future programmers pulling their hair out 800 years later ;-).</p><p>@Raymond +1 - seems as if all the converters out there use a similar approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721729">20</a> by Daniel Harvey
		posted on 2/4/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Here is one way it can be done to allow for allowing IIX or any XXY where X&lt;Y.  I have not tested this fully but I believe the concept will work.  This statement can just replace your if statement starting on line 23 going to line 30</p><p>			  if((pos + 2) &lt; len(input) ){<br>				nextchar2 = mid(input, pos+2, 1);<br>			  } else {//set nextchar2 to one will not allow anything to be smaller than it.<br>				nextchar2 = 'I'; <br>			  }<br>			  if(romans[char] == romans[nextchar] &amp;&amp; romans[nexchar] &lt; romans[nextchar2] ){<br>			  	thisSum = romans[nextchar2] - romans[nextchar] - romans[char];<br>				result +=thisSum<br>				pos+=2;<br>			  }else if(romans[char] &lt; romans[nextchar]) {<br>                  thisSum = romans[nextchar] - romans[char];<br>                  result += thisSum;<br>                  pos+=2;<br>              } else {<br>                  result += romans[char];<br>                  pos++;<br>              }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721730">21</a> by Daniel Harvey
		posted on 2/4/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>sorry it was better formatted when I posted it don't know what happened.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721731">22</a> by Daniel Harvey
		posted on 2/4/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>Lets try this again sorry for the quick posts but I found a typo.  should be pos+=3 here is the new code</p><p>			  if((pos + 2) &lt; len(input) ){<br>				nextchar2 = mid(input, pos+2, 1);<br>			  } else {//set nextchar2 to one will not allow anything to be smaller than it.<br>				nextchar2 = 'I'; <br>			  }<br>			  if(romans[char] == romans[nextchar] &amp;&amp; romans[nexchar] &lt; romans[nextchar2] ){<br>			  	thisSum = romans[nextchar2] - romans[nextchar] - romans[char];<br>				result +=thisSum<br>				pos+=3;<br>			  }else if(romans[char] &lt; romans[nextchar]) {<br>                  thisSum = romans[nextchar] - romans[char];<br>                  result += thisSum;<br>                  pos+=2;<br>              } else {<br>                  result += romans[char];<br>                  pos++;<br>              }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721733">23</a> by Gary Funk
		posted on 2/4/2010 at 9:44 PM
		</div>
		<div class="comment_text"><p>@Andreas: II really can't state with any authority what is or is not allowed. I know what I was taught in college, but then again it was a left-wing liberal school.</p><p>Either way, if IIX is not valid, it certainly should not return 10. It should return INVALID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721734">24</a> by Raymond Camden
		posted on 2/4/2010 at 9:46 PM
		</div>
		<div class="comment_text"><p>Little did I know my little post here would cause such controversy. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721735">25</a> by Andreas Schuldhaus
		posted on 2/4/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>@Gary I fully agree with you. It shouldn't return 10. Therefore I thought, the regex would be useful ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721736">26</a> by Gary Funk
		posted on 2/4/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>@Ray: Many of your posts cause controversy. We love you for that. It gets us to think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721738">27</a> by Ben Nadel
		posted on 2/5/2010 at 12:00 AM
		</div>
		<div class="comment_text"><p>I find this post fascinating, not so much for the roman numeral aspect, but because you are parsing out "tokens" from the string that might be more than one character in length / meaning. This might seem random, but this is a concept that has me very interested as I think it applies, in general, to parsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721741">28</a> by Raymond Camden
		posted on 2/5/2010 at 12:27 AM
		</div>
		<div class="comment_text"><p>Thanks Ben. My second language (not counting AppleSoft Basic) was Perl, so I've got a lot of love for string parsing. It can be incredibly fun - and frustrating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721745">29</a> by Ben Nadel
		posted on 2/5/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>Yeah, definitely frustrating. I think it's one of those things that is very easy conceptually; but then when you go to implement that concept, you realize it's a ridiculous amount of code.</p><p>This post makes me want to play with a very simple tokenizer. I don't know why, this is just really an interesting problem. Take the "comment" tag as an example. It is only meaningful in the following combination:</p><p>&lt;!---</p><p>This means the parser has to read in 5 characters to build it... but it can't (say its an HTML comment, not a CFML one), then suddenly, it has to take the 4 preceding characters and treat them as individual tokens.</p><p>Maybe this is only interesting to me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721746">30</a> by John Farrar
		posted on 2/5/2010 at 1:09 AM
		</div>
		<div class="comment_text"><p>Perhaps someone could create a "loose" standard converter and use the strict standard converter for the rest of us. Maybe someone could even write a isValidRomanNumber() that does strict testing before it gets put in. LOL ... this thread is pitiful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721744">31</a> by Gary Funk
		posted on 2/5/2010 at 4:46 AM
		</div>
		<div class="comment_text"><p>Okay, I put up. I modified Ray's code to work with any Roman Number.  Please don't laught too hard at the code. I know I am not the programmer Ray is.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jacfb.com%2Findex.cfm%2F2010%2F2%2F4%2FTranslating-from-Roman-to-Decimal-Numbers%3AF8JByvHBjW8Z7dEZ8fheDqJAc3Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jacfb.com/index.cfm/2010/2/4/Translating-from-Roman-to-Decimal-Numbers">http://www.jacfb.com/index....</a></p><p>Hmm, it keeps telling me my comment is spam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721742">32</a> by Raymond Camden
		posted on 2/5/2010 at 5:12 AM
		</div>
		<div class="comment_text"><p>Hey now - I hope I don't come off as a super programmer. I'm just a guy who likes to talk and write a lot. There are _plenty_ of programmers out there better than I. :)</p><p>That being said - your mod looks perfect! It works. But my ego forbids me from truly accepting that so I'm going to delete your comment and remove your BlogCFC from the Internet. Thanks for playing!</p><p>(No, instead, I'm going to update the CFLib version. Thanks!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721743">33</a> by Gary Funk
		posted on 2/5/2010 at 6:06 AM
		</div>
		<div class="comment_text"><p>Hmm, I don't think anyone mentioned 'super' but hey, you are a Jedi.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721740">34</a> by Charles
		posted on 2/25/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>This UDF works great in 9 but does not work in CF 6.1 (MX) - here is the error I get:</p><p>Invalid CFML construct found on line 33 at column 22.<br>ColdFusion was looking at the following text:</p><p>{</p><p>The CFML compiler was processing:</p><p>    * a script statement beginning with "var" on line 33, column 9.<br>    * a script statement beginning with "function" on line 32, column 1.<br>    * a cfscript tag beginning on line 22, column 2.</p><p>The error occurred in D:\Inetpub\serv\roman.cfm: line 33</p><p>31 :  */<br>32 : function romantodec(input) {<br>33 : 	var romans = {};<br>34 : 	var result = 0;<br>35 : 	var pos = 1;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721739">35</a> by Raymond Camden
		posted on 2/25/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>CF6 doesn't support struct literals {}, just change to structNew().</p></div>
	</div>
</div>
		