
<div class="comment" id="c_1713669467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669467">1</a> by nick
		posted on 8/2/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>If "Paris Point" becomes part of the daily lexicon, you can officially coin it. Nice code work too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669475">2</a> by Ben Nadel
		posted on 8/2/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>REMatch() makes me happy :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669469">3</a> by Quan Tran
		posted on 8/2/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>Probably not faster, but you could create a query with a single column and use qoq to get the count with a group by.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669479">4</a> by Gareth
		posted on 8/2/2007 at 9:54 PM
		</div>
		<div class="comment_text"><p>Couldn't you do something like<br>#ListLen(string, " #Chr(13)##Chr(10)#")#</p><p>(it seems to work with the string variable you posted)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669472">5</a> by Raymond Camden
		posted on 8/2/2007 at 9:58 PM
		</div>
		<div class="comment_text"><p>Gareth, that counts the words. We need a count of the number of each word. Ie, the string has The ten times. Etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669471">6</a> by Gareth
		posted on 8/2/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>Whoops, unique instances...</p><p>Let me try that again :)</p><p>&lt;cfset new_string = ListSort(REReplaceNoCase(LCase(string), "[^a-z ]", "", "ALL"), "Text", "Asc", " #Chr(13)##Chr(10)#")&gt;</p><p>&lt;cfscript&gt;<br>// had to use this as CF does not allow lookbehind in regular expressions, but JAVA does<br>obj = createobject("java","java.util.regex.Pattern"); // create pattern searching object<br>x = obj.compile("(?&lt;=[ ]|^)([^ ]*)([ ]\1)+(?=[ ]|$)"); // compile the regular expression for use<br>new_string = x.matcher(new_string).replaceAll("$1"); // remove all duplicates<br>&lt;/cfscript&gt;</p><p>#ListLen(new_string, " ")#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669477">7</a> by Gareth
		posted on 8/2/2007 at 10:05 PM
		</div>
		<div class="comment_text"><p>OK, I'm going to stop now :)<br>I got a total of the unique words, but not a count of the number of duplicate words (that's what I get for trying to do write code for one thing while checking out the blogs in another tab :) )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669474">8</a> by todd sharp
		posted on 8/2/2007 at 10:49 PM
		</div>
		<div class="comment_text"><p>Issue:  the word "Let's" gets broken into "Let" and "s" because of your RE.  Solution?  Still working on it... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669470">9</a> by Ben Nadel
		posted on 8/2/2007 at 10:56 PM
		</div>
		<div class="comment_text"><p>@Todd,</p><p>I ran into that same problem during one of Ray's Friday Puzzlers... trust me - don't try to figure it out, your brain will only end up hurting. Here's why, these are all single "words":</p><p>hatin'<br>let's<br>sweet-ass<br>cf.objective()<br>O'connell</p><p>... if you can write an algorithm to use all those "non-word" characters as parts of words, well then, you are the man!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669480">10</a> by Raymond Camden
		posted on 8/2/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>Although, one could argue that sweet-ass wouldn't be so bad as two words. hatin' is slang, and would become hatin, which is ok.</p><p>I think if you could just make get single quotes to work, you would get most "real" words.</p><p>I wonder - maybe switch from [[:word:]] to</p><p>(any non alpha except single quote)(alpha,1 or more)(optional ' if followed by alpha)(any non alpha except single quote)</p><p>Then again - another solution? Remove '. You end up with words like "lets", which could be confused with "Ray lets Paris call him", but it would be better than let and s as words.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669482">11</a> by noname
		posted on 8/2/2007 at 11:26 PM
		</div>
		<div class="comment_text"><p>But, isn't the next word signified by a space?  So everything between a space, is a word?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669483">12</a> by Ben Nadel
		posted on 8/2/2007 at 11:27 PM
		</div>
		<div class="comment_text"><p>Yeah, stripping out the single quotes is probably the easiest thing to do. Least amount of damage for the best results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669484">13</a> by Ron Alexander
		posted on 8/3/2007 at 12:23 AM
		</div>
		<div class="comment_text"><p>So why not just change from "[[:word:]]" to "[a-zA-Z0-9]+'[a-zA-Z0-9]+|[a-zA-Z0-9]+"</p><p>That seems to do the trick for let's lets. But it still doesn't make the counting any more elegant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669485">14</a> by Raymond Camden
		posted on 8/3/2007 at 12:27 AM
		</div>
		<div class="comment_text"><p>Thats pretty cool there Ron.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669489">15</a> by Jonathon
		posted on 8/3/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>There's a CF IRC channel floating around somewhere?  Anyone feel like sharing the info? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669490">16</a> by Raymond Camden
		posted on 8/3/2007 at 12:50 AM
		</div>
		<div class="comment_text"><p>The one I use is #coldfusion on Dalnet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669492">17</a> by Ron Alexander
		posted on 8/3/2007 at 12:59 AM
		</div>
		<div class="comment_text"><p>This is better:</p><p>(?:[a-zA-Z0-9\(\)])+(?:\'|-|\.)?(?:[a-zA-Z0-9\(\)])+</p><p>It matches method chains like myarray.dedup().sort()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669497">18</a> by Ron Alexander
		posted on 8/3/2007 at 1:02 AM
		</div>
		<div class="comment_text"><p>And just to match Ben's "hatin'" example:<br>"(?:[a-zA-Z0-9\(\)])+(?:\'|-|\.)?(?:[a-zA-Z0-9\(\)\-\'])+"</p><p>Don't forget (like I did) to throw in the \'\- into the last non-capturing group.</p><p>Ben does that meet your needs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669495">19</a> by Dustin
		posted on 8/3/2007 at 1:07 AM
		</div>
		<div class="comment_text"><p>This is probably how I would do it:</p><p>&lt;cfset string = reReplace(string,'(\.|"(?=\w))','','all') /&gt;<br>&lt;cfset wordAry = listToArray(string,'#chr(10)##chr(13)##chr(32)#') /&gt;<br>&lt;cfset wordQry = queryNew('word','VarChar') /&gt;<br>&lt;cfloop from="1" to="#arrayLen(wordAry)#" index="i"&gt;<br>	&lt;cfset queryAddRow(wordQry) /&gt;<br>	&lt;cfset querySetCell(wordQry,'word',reReplace(wordAry[i],'[",]$','')) /&gt;<br>&lt;/cfloop&gt;<br>&lt;cfquery dbtype="query" name="uniqueWords"&gt;<br>	SELECT word, count(*) as wordCount FROM wordQry group by word order by wordCount desc<br>&lt;/cfquery&gt;<br>&lt;cfdump var="#uniqueWords#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669491">20</a> by db
		posted on 8/3/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>this seems to work for me:<br>&lt;cfset words = arrayToList(string.split('\s'))&gt;<br>&lt;cfset wordCount = structNew()&gt;<br>&lt;cfloop index="word" list="#words#"&gt;<br>   &lt;cfset wordCount[word] = ListValueCountNoCase(words, word)&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669499">21</a> by db
		posted on 8/3/2007 at 7:28 PM
		</div>
		<div class="comment_text"><p>no, that's not right - its including punctuation as part of the word. so i tried with the "hatin'" list and got this working:<br>&lt;cfset words = arrayToList(string.split("\.?[[^()]\s&amp;&amp;([""()][\s])]"))&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669496">22</a> by Johnny
		posted on 8/4/2007 at 11:31 PM
		</div>
		<div class="comment_text"><p>Wouldn't this work?</p><p>&lt;cfset wordcount = structNew()/&gt;<br>&lt;cfloop list="#string#" delimiters=' ,"' index="word"&gt;<br>	&lt;cfset word = replaceList(word,"',.","")/&gt;<br>	&lt;cfif structKeyExists(wordCount, word)&gt;<br>      &lt;cfset wordCount[word] = wordCount[word] + 1/&gt;<br>   &lt;cfelse&gt;<br>      &lt;cfset wordCount[word] = 1/&gt;<br>   &lt;/cfif&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669498">23</a> by Mike Cohen
		posted on 8/25/2008 at 8:06 PM
		</div>
		<div class="comment_text"><p>Why not just do:</p><p>&lt;cfset myString = "blah blah blah bldfadsff fd "&gt;<br>&lt;cfset mCounter = stringToArray(myString,"a")&gt;<br>&lt;cfset numberOfAs = arraylen(mcounter)&gt;</p><p>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669502">24</a> by todd sharp
		posted on 8/25/2008 at 8:25 PM
		</div>
		<div class="comment_text"><p>Unless I'm missing something in an earlier comment, there is no strintToArray() function in ColdFusion...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669500">25</a> by todd sharp
		posted on 8/25/2008 at 8:26 PM
		</div>
		<div class="comment_text"><p>Make that stringToArray()...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669503">26</a> by D. Davis
		posted on 2/24/2009 at 3:54 AM
		</div>
		<div class="comment_text"><p>Nice article, and thanks guys for the different ways of doing this.</p><p>Wanted to note: the sort on this ("textnocase") needs to be "numeric","desc" otherwise you're not getting your top numbers right (ie, textnocase sort would look like 4,3,20,17).</p><p>Great code on this as a first step to making a word cloud, looping it on DB-pulled text fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669501">27</a> by Raymond Camden
		posted on 2/26/2009 at 3:10 AM
		</div>
		<div class="comment_text"><p>Oops. Thanks D. Fixed in the code above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669504">28</a> by Bryan
		posted on 4/21/2010 at 8:49 PM
		</div>
		<div class="comment_text"><p>Doesn't seem to be returning carriage returns for me.  Any fixes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669505">29</a> by Raymond Camden
		posted on 4/21/2010 at 10:25 PM
		</div>
		<div class="comment_text"><p>What do you mean? Why would it return carriage returns? It returns the number of words.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669506">30</a> by Mark Brodsky
		posted on 6/23/2011 at 9:03 PM
		</div>
		<div class="comment_text"><p>How about ListValueCount(list, value [, delimiters ])</p><p>I was trying to find out how many HRs I had in a text string in a DB column (which would show how many entries I recorded for the view history of a certain page), and this seemed to do the trick, like this:</p><p>&lt;pre&gt;&lt;cfset histcount = ListValueCount(list.history, "hr", "&lt;,&gt;")&gt;&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669507">31</a> by Raymond Camden
		posted on 6/25/2011 at 1:53 AM
		</div>
		<div class="comment_text"><p>What value would you use though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669508">32</a> by Lina Haddad
		posted on 10/25/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>i solved it like this ,(using getToken) i am assuming that we should have space at least between 2 words,,Does any body see any issue with that?<br>&lt;cfsavecontent variable="string"&gt;<br>This is a paragraph with some text in it. Certain words will be repeated, and other words<br>will not be repeated. The question is though, how much can I write before I begin to sound<br>like a complete and utter idiot. Let's call that the "Paris Point". At the Paris Point, any<br>further words sound like gibberish and are completely worthless. <br>&lt;/cfsavecontent&gt;<br>&lt;cfset word="let's" /&gt;<br>&lt;cfset i=1 /&gt;<br>&lt;cfset countOfword=0 /&gt;<br>&lt;cfloop condition="#getToken(string,i,' ')# neq ''"&gt;<br>	&lt;cfif #getToken(string,i,' ')# eq #word#&gt;&lt;cfset countOfword=countOfword+1 /&gt;&lt;/cfif&gt;<br>	&lt;cfset i=i+1 /&gt;<br>&lt;/cfloop&gt;<br>&lt;cfoutput&gt;#countOfword#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669509">33</a> by Ken Gladden
		posted on 10/27/2011 at 12:42 PM
		</div>
		<div class="comment_text"><p>Back to the point about how to include "-" and O'Conner use [:print:] instead of [:word:]. Works wonders for me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669510">34</a> by chris ellem
		posted on 11/11/2013 at 10:31 AM
		</div>
		<div class="comment_text"><p>don't you love these post when you need an answer in a hurry..thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669512">35</a> by Raymond Camden
		posted on 11/11/2013 at 4:15 PM
		</div>
		<div class="comment_text"><p>I love it when stuff works 6 years later. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3630781294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3630781294">36</a> by Awais
		posted on 11/24/2017 at 7:36 AM
		</div>
		<div class="comment_text"><p>Hi guys,</p><p>I tried the [:word:] solution, but it is counting 'blue-eyed' as 2 words rather than 1. <br>And 'doesn’t' is taken as 2 words. Is their any way to tell CF to let - and ' go by?</p><p>Any help would be more than appreciated :)</p><p>Regards,<br>Awais</p></div>
	</div>
</div>
		
<div class="comment" id="c_3631076824">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3631076824">37</a> (In reply to <a href="#c_3630781294">#36</a>) by Raymond Camden
		posted on 11/24/2017 at 2:19 PM
		</div>
		<div class="comment_text"><p>Would this help? First Google result for "regular expression word hyphen" <a href="https://disq.us/url?url=https%3A%2F%2Fstackoverflow.com%2Fquestions%2F31910955%2Fregex-to-match-words-with-hyphens-and-or-apostrophes%3AvBc_9FN7RqjzPi55WYGN8XIn6tc&amp;cuid=3321886" rel="nofollow noopener" title="https://stackoverflow.com/questions/31910955/regex-to-match-words-with-hyphens-and-or-apostrophes">https://stackoverflow.com/q...</a></p></div>
	</div>
</div>
		