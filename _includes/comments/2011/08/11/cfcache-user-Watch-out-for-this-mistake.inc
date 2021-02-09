
<div class="comment" id="c_1713734610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734610">1</a> by Justin Carter
		posted on 8/11/2011 at 4:48 PM
		</div>
		<div class="comment_text"><p>Another great reason for CFML developers to stop putting trailing slashes everywhere for no reason, please! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734612">2</a> by Scott Stroz
		posted on 8/11/2011 at 4:58 PM
		</div>
		<div class="comment_text"><p>Justin,</p><p>I disagree. We should just be putting the trailing slash in the correct places.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734603">3</a> by Justin Carter
		posted on 8/11/2011 at 5:05 PM
		</div>
		<div class="comment_text"><p>I agree, the correct places are the places where they serve a purpose. This example was not one of those places ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734616">4</a> by Scott Stroz
		posted on 8/11/2011 at 5:13 PM
		</div>
		<div class="comment_text"><p>And what would you define as 'serving a purpose'?</p><p>I frequently use:</p><p>&lt;cfset var myVar = "value" /&gt;</p><p>I think it makes it more readable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734605">5</a> by Jeff Coughlin
		posted on 8/11/2011 at 5:21 PM
		</div>
		<div class="comment_text"><p>I agree with Scott.  It tells me that the tag has ended and I don't need to go looking around for an ending tag.  cfset may not be the best example (although I self-close them all the time as well), but what about calling a custom tag?  Personally I want to know if I'm expecting to find an ending tag somewhere in the code.  By self-closing it, the developer has explained to me his purpose.</p><p>With that said, I consider this use of cfcache with a self-closing tag a bug in ColdFusion because it is not the way other tags in CF work.  Maybe Ray disagrees, but I say "bug".  Look at it this way, if Adobe were to fx this bug, would it break anyone's code?  I mean, are people "really" caching a blank spot of nothing?  I think not :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734613">6</a> by Raymond Camden
		posted on 8/11/2011 at 5:29 PM
		</div>
		<div class="comment_text"><p>How is it different Jeff? &lt;a /&gt; == &lt;a&gt;&lt;/a&gt; IS exactly how other tags work. Can you show me an example of where it is not? Also, how would you fix this? Would you say something like, "No insides, treat like top level cache tag" - ok, but what if I cache content and in my business logic, there are times when nothing is output?</p><p>This is not a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734617">7</a> by Jeff Coughlin
		posted on 8/11/2011 at 5:37 PM
		</div>
		<div class="comment_text"><p>&lt;cfcache/&gt; != &lt;cfcache&gt;</p><p>where &lt;a/&gt; == &lt;a&gt;&lt;a/&gt;.</p><p>So, by your logic, doing &lt;cfcache timespan="#createTimeSpan(0,0,10,0)#" usequerystring="true"&gt; should only cache a block of nothing at the top of the page.</p><p>Do you see the confusion here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734608">8</a> by Jeff Coughlin
		posted on 8/11/2011 at 5:40 PM
		</div>
		<div class="comment_text"><p>I guess its a fine line (bug, not a bug?).  But it sure is confusing.  Personally I don't think they should have changed it.  There is no purpose what-so-ever to want to cache a block of nothing.  So why change it?  I say leave it the way it was in CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734604">9</a> by Raymond Camden
		posted on 8/11/2011 at 5:48 PM
		</div>
		<div class="comment_text"><p>&lt;cfcache/&gt; != &lt;cfcache&gt;</p><p>That's not what I said Jeff, not even close. I said</p><p>&lt;cfcache/&gt; = &lt;cfcache&gt;&lt;/cfcache&gt;</p><p>That's different.</p><p>"So, by your logic, doing &lt;cfcache timespan="#createTimeSpan(0,0,10,0)#" usequerystring="true"&gt; should only cache a block of nothing at the top of the page.</p><p>Do you see the confusion here?"</p><p>No, it should act as it has for 10 years. Cache the entire page. It is no different than any other custom tag where thisTag.hasEndTag == false.</p><p>"So why change it?"</p><p>They didn't change it. Basically, they made the tag _aware_ of it's insides. It's a developer mistake then to include nothing on the inside, and as I described, there may be cases where you DO cache nothing. For example, imagine if the slow process, 10% of the time, returns nothing. In that case, you still want the cache benefit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734611">10</a> by David Ostrander
		posted on 8/11/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>I know that using self closing tags are a matter of preference, but the truth is ColdFusion isn't XML compliant. Tags like CFRETURN and CFELSE  simply break if you try to apply XML rules to them.</p><p>I've found that if you don't use the self-closing syntax at all you have to do less debugging later, as Daria and Ray are demonstrating above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734607">11</a> by Scott Stroz
		posted on 8/11/2011 at 6:43 PM
		</div>
		<div class="comment_text"><p>I understand that CF is nto XMl compliant, but that does not mean that we can't use it as such. I find tags that are self closed are easier to read... especially custom tags where you may not be sure if a tag is 'auto closed', like &lt;cfset&gt;.</p><p>Not sure what is supposed 'break' by adding trailing slash to &lt;cfretrun&gt;. This code works perfectly fine:</p><p>&lt;cffunction name="getStuff"&gt;<br>	&lt;cfreturn "stuff" /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfdump var="#getStuff()#"&gt;</p><p>&lt;cfelse&gt; is a unique beast as there is no normal closing tag for it anyway (well, except for &lt;/cfif&gt;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734606">12</a> by David Ostrander
		posted on 8/11/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>You know what Scott,</p><p>You're right. Cfreturn does work on both my production  CF9 and CF8 servers. However, I just tested on an older version of Railo that I use at home and it throws an error.</p><p>&lt;shrug&gt; or &lt;shrug /&gt; I if you prefer :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734609">13</a> by Scott Stroz
		posted on 8/11/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>I prefer &lt;shrug /&gt;, because if you have &lt;shrug&gt; with no &lt;/shrug&gt;, I will never know when you are done shrugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734614">14</a> by Mark Gregory
		posted on 8/12/2011 at 1:33 AM
		</div>
		<div class="comment_text"><p>I come in on the side of no trailing slashes. CFML is not XML nor is it XHTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734621">15</a> by Justin Carter
		posted on 8/12/2011 at 4:46 AM
		</div>
		<div class="comment_text"><p>Trailing tags serve a purpose where they add meaningful context or add some intended behaviour. The use of a trailing slash is really like saying "Instead of providing a tag body and a closing tag for this tag, I'm just going to use the shorthand form and close the tag now with no body".</p><p>So Ray is spot on with his example. This:</p><p>&lt;cfcache timespan="#createTimeSpan(0,0,10,0)#" usequerystring="true" /&gt;</p><p>.. is effectively this (which means you are trying to cache the empty tag body, i.e. not a bug):</p><p>&lt;cfcache timespan="#createTimeSpan(0,0,10,0)#" usequerystring="true"&gt;&lt;/cfcache&gt;</p><p>The most common use of trailing slashes in CFML is with custom tags and probably a very limited number of built-in tags (as above).</p><p>Where trailing slashes serve no purpose is where closing tags don't exist, hence where it makes little sense to use them. So this:</p><p>&lt;cfset blah = "blah" /&gt;</p><p>... is effectively this:</p><p>&lt;cfset blah = "blah"&gt;&lt;/cfset&gt;</p><p>A closing &lt;/cfset&gt; tag doesn't really exist, and in CF9 it's not handled well at all, so if you tried to use it (not that anyone would expect it to work) you'll get an error like this:</p><p>"Context validation error for tag cfset. The end tag &lt;/cfset&gt; encountered on line 1 at column 24 requires a matching start tag."</p><p>We are just lucky (or unlucky, hehe) that &lt;cfset /&gt; and other tags don't throw a similar error.</p><p>I also think it's a fallacy that a trailing slash makes code more readable, or even should be used in an attempt to made code more readable, since that's clearly not the purpose of it. It's also much more readable to use indentation to identify nested code than it is to scan the end of each line for a trailing slash or no trailing slash.</p><p>IMO it's just a misunderstanding about what a trailing slash actually does, which can then lead to cases such as this. I'd much prefer that developers know when and why to use it.</p><p>(Sorry, that probably turned out more like a blog post than a comment...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734624">16</a> by Scott Stroz
		posted on 8/12/2011 at 6:40 AM
		</div>
		<div class="comment_text"><p>Just because you do not agree with some thing does not make it a 'fallacy'. I stated that I find it to be more readable. By calling that a 'fallacy' you are effectively calling me a liar.</p><p>I am fully aware of what a trailing slash does, as I am sure Daria does. The fact that she used one in the wrong place should not lead you to presume otherwise. I know this may surprise you, but people do, from time to time, make mistakes.</p><p>I will say it again, so that you can truly understand it is not a fallacy: I use trailing slashes on CF tags that do not require them because I personally find them easier to read. I also think that using a trailing slash in places where you might not need one - such as &lt;cfset blah="blah" /&gt; - makes it easier for people who may be seeing ColdFusion code for the first time to understand exactly what is going on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734622">17</a> by Kerr
		posted on 8/12/2011 at 8:39 AM
		</div>
		<div class="comment_text"><p>I don't use trailing slashes in tags that don't require them as part of the CFML syntax rules.  I've never run across any bugs or pitfalls by following this practice.  To each their own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734628">18</a> by Dinesh
		posted on 8/12/2011 at 3:24 PM
		</div>
		<div class="comment_text"><p>Why don't we let the coldfusion remain the way it was. Its not xml, its not OOP's, by try to make it that way why not to just use java or xml or any other language for that matter. When we talk about code readability (&lt;cfset x=20 /&gt; or &lt;cfset x=20&gt;) are both readable to a cfml developer. CFML has it this way some tag have end tags some have not. Someone reading a code line oughta be a cfml programmer. Anybody else trying to figure that out has no business doing so. And if those "anybody" start doing it s/he is snatching my bread. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734631">19</a> by Scott Stroz
		posted on 8/12/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>@Kerr - I do use trailing slashes in tags that do not require them as part of CFML. I've never run into any bugs or pitfalls by following this practice.</p><p>@Dinesh - Yes, both &lt;cfset blah = " blah &gt; and &lt;cfset blah = "blah" /&gt; are readable to CF developers, but what about someone who is just learning CF? Or someone who uses another language and is asked to support a CF app. The people might not be a 'cfml developer' but will need to look at code. BTW - if you think only CFML developers should look at CF code, how will we get new CF developers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734633">20</a> by Justin Carter
		posted on 8/13/2011 at 4:36 AM
		</div>
		<div class="comment_text"><p>Liar is a strong word, sorry if you took it that way Scott because it's not at all what I meant. I was trying to say that the act of using a trailing slash to improve readability is a fallacy because that it not the purpose of it. If you find it more readable then that's cool, I'm not saying you'd lie about that.</p><p>My other points about readability are secondary; the way you scan code with your eyes (left edge not right edge), proper indentation, syntax highlighting, etc are probably far bigger indicators of where something starts and finishes. The trailing slash is almost never required in built-in CFML tags (again, custom tags are the big users of it) and therefore we hardly ever need to look for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734636">21</a> by Scott Stroz
		posted on 8/13/2011 at 4:53 AM
		</div>
		<div class="comment_text"><p>Maybe you need to look up the word fallacy. I am telling you I believe adding a trailing slash when it is not required is easier to read and easier for non-cf developers to understand. You are calling that a fallacy. Basically, you are telling me its a mistaken belief.</p><p>Other things people look for when reading tag based code is the closing tags. If you take someone who has never seen ColdFusion code before it may be easier for them to understand what is going on with:</p><p>&lt;cfinput type="checkbox" name="moo" value="blarg" /&gt;</p><p>As opposed to:</p><p>&lt;cfinput type="checkbox" name="moo" value="blarg" &gt;</p><p>If you are not used to reading/using CF, but are used to other tag based languages, you may spend time looking for the &lt;/cfinput&gt;, which, based on the way you imply you code, will not be there.</p><p>Adding trailing slashes when not required to do so does not cause issues and, in my opinion, is easier to read - even if you think its a 'fallacy'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734635">22</a> by Justin Carter
		posted on 8/13/2011 at 6:52 AM
		</div>
		<div class="comment_text"><p>Maybe 3rd time lucky... I mean the act of adding a trailing slash to improve readability is a false notion because that is not the intended purpose of a trailing slash. I'm purely speaking about the purpose.</p><p>I didn't say it's impossible for you to find it more readable after the fact, and I didn't call you a liar - if you think I did then I apologize.</p><p>However, using trailing slashes where they are not required (or not intended to be used) clearly caused an issue here with cfcache (as they would with some custom tags). They also cause issues in HTML 4.01 where no trailing slash or explicit closing tags are required. In those cases it's not a matter of personal preference because things literally won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734637">23</a> by Raymond Camden
		posted on 8/13/2011 at 6:56 AM
		</div>
		<div class="comment_text"><p>I love it that the blog posts I assume will get no comments end up getting a crap load. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734640">24</a> by Justin Carter
		posted on 8/13/2011 at 6:58 AM
		</div>
		<div class="comment_text"><p>(Mistaken belief about readability no, mistaken belief about the purpose of a trailing slash - perhaps!)</p><p>Yes Ray :) Damn my tongue in cheek comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734641">25</a> by Scott Stroz
		posted on 8/13/2011 at 7:03 AM
		</div>
		<div class="comment_text"><p>If adding a trailing slash improves readability, even for one person, how is it 'false'? I add the slash mostly for readability, so, I would argue that in the case of &lt;cfset blah = "blah" /&gt;, if it makes i easier to read and understand the code, then it has served its intended purpose.</p><p>I would also argue that if adding a trailing slash (or closing tag, even) on a custom tag caused issues, then the custom tag was poorly written.</p><p>Lastly, adding a trailing slash when it is not required will not cause any issues with HTML 4.01....at all.  I use trailing slashes in CF tags all the time, and have done so for years, and have never had a time where it caused issues with CF processing the code, or any rendering issues with HTML 4.01.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734638">26</a> by Justin Carter
		posted on 8/13/2011 at 7:12 AM
		</div>
		<div class="comment_text"><p>Ever seen a self closing script tag work in IE? Ever had a HTML 4.01 document pass validation without warnings when littered with &lt;img /&gt; and &lt;a /&gt; tags?...</p><p>I'm not making this stuff up, it can actually have consequences... as already demonstrated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734639">27</a> by Scott Stroz
		posted on 8/13/2011 at 7:13 AM
		</div>
		<div class="comment_text"><p>The purpose of the trailing slash in my CF code is to show that the tag in question is now 'closed'. You and I both know its not necessary, but a new developer or one not familiar with CF might not know that &lt;cfset&gt; or &lt;cfinput&gt; don't need a trailing slash and look for the 'closing' tag. I had to explain this issue to someone quite a while ago, and that is part of the reason why I started adding trailing slashes.</p><p>Adding trailing slashes DOES NOT mess with the way CF processes the code (except poorly written custom tags), WILL NOT mess with the rendering of any HTML and WILL LIKELY help others read/understand the code, so I am not sure what the fuss is about.</p><p>Adding proper spacing serves nu purpose other than for readability, and I have seen cases where extra spaces from indenting code DID cause issues with HTML rendering, so one could argue that indenting code is also a bad practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734644">28</a> by Scott Stroz
		posted on 8/13/2011 at 7:15 AM
		</div>
		<div class="comment_text"><p>Justin,  Last time I checked &lt;img&gt; and &lt;a&gt; are NOT CF code. I was not referring to HTML tags, I was referring to CF tags. You do understand the difference, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734645">29</a> by Justin Carter
		posted on 8/13/2011 at 7:21 AM
		</div>
		<div class="comment_text"><p>"Lastly, adding a trailing slash when it is not required will not cause any issues with HTML 4.01....at all."</p><p>Sorry, I thought you meant HTML 4.01 tags, my bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734646">30</a> by Scott Stroz
		posted on 8/13/2011 at 7:29 AM
		</div>
		<div class="comment_text"><p>It should be noted that this code:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F1sKGfqvu%3AK8jqz-gSRDUhS3MTCrA-0yKrIyk&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/1sKGfqvu">http://pastebin.com/1sKGfqvu</a></p><p>Note the trailing slash does validate for HTML 4.01 Strict - though, admittedly, there are warnings against it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734647">31</a> by Justin Carter
		posted on 8/13/2011 at 7:44 AM
		</div>
		<div class="comment_text"><p>Of course there are warnings, the spec says that it's an empty element - aka the closing tag must be omitted ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734649">32</a> by Scott Stroz
		posted on 8/13/2011 at 6:01 PM
		</div>
		<div class="comment_text"><p>I have been wondering why I have not seen those warnings before when validating HTML - because I use &lt;img src="blah" ... /&gt; all the time. It hit me this AM. I typically use XHTML strict doctype. I cannot say I exclusively use it, but I cannot recall the last time I did not.</p></div>
	</div>
</div>
		