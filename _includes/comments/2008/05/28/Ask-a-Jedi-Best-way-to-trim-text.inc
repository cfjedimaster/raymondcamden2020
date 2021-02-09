
<div class="comment" id="c_1713681235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681235">1</a> by Chris H
		posted on 5/28/2008 at 6:11 PM
		</div>
		<div class="comment_text"><p>nice, detailed post, might come in handy soon. thanks ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681240">2</a> by David S
		posted on 5/28/2008 at 6:59 PM
		</div>
		<div class="comment_text"><p>Wow. I've had to do this many times but have never put that much thought into it.  Thanks for the great solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681239">3</a> by Luke
		posted on 5/28/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>could be better off trimming it at source to avoid unnecessary db traffic.</p><p>in mssql select the column with something like:</p><p>substring(yourTextyCol,1,100)</p><p>then stick your "..." after it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681237">4</a> by Raymond Camden
		posted on 5/28/2008 at 7:06 PM
		</div>
		<div class="comment_text"><p>@Luke - Well this suffers the same problem as Left() does. However, you do have a point - it may make sense to do the 'nice left' once and store the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681238">5</a> by sal
		posted on 5/28/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p>thanks yo!</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681241">6</a> by John Whish
		posted on 5/28/2008 at 8:43 PM
		</div>
		<div class="comment_text"><p>I never thought of using the Wrap tag to do this - that's neat. My custom function uses Find and Left:</p><p>plaintext = ReReplaceNoCase(htmltext, "&lt;[^&gt;]+&gt;"), " ", "all");<br>Return Left(plaintext , Find(" ", plaintext, 100)) &amp; "&amp;hellip;";</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681244">7</a> by Doug
		posted on 5/28/2008 at 10:55 PM
		</div>
		<div class="comment_text"><p>Another thing to keep in mind is HTML entities. You may wish to convert the entities to ASCII text to get a better character or word count. So if your user entered something like this:</p><p>Using characters like “é”, “ü”, “etc”. is ok.</p><p>...would be converted to this...</p><p>Using characters like “é”, “ü”, “etc”. is ok.</p><p>I ran into this problem awhile back and created a nice little JavaScript function to do this, but it could easily be done in ColdFusion as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681243">8</a> by Doug
		posted on 5/28/2008 at 10:56 PM
		</div>
		<div class="comment_text"><p>oops, that first line got converted. It should have been:</p><p>Using characters like &amp;ldquo;&amp;eacute;&amp;rdquo;, &amp;ldquo;&amp;uuml;&amp;rdquo;, &amp;ldquo;etc&amp;rdquo;. is ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681245">9</a> by Raymond Camden
		posted on 5/28/2008 at 11:01 PM
		</div>
		<div class="comment_text"><p>Excellent point Doug. It may even be worthwhile to just delete them. Now that may result in some odd misspellings - but it may be the simplest solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681246">10</a> by Chris H
		posted on 5/28/2008 at 11:29 PM
		</div>
		<div class="comment_text"><p>yeah, if you dont have to worry about HTML entities, special characters etc., you could do this in MySQL via<br>SELECT CONCAT( LEFT( TextToSelect, 500 ), '...' ) FROM Blah</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681248">11</a> by Joshua Curtiss
		posted on 5/28/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>Awesome post, with consideration of the HTML. Nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681247">12</a> by Mikkel Johansen
		posted on 5/29/2008 at 9:21 AM
		</div>
		<div class="comment_text"><p>What if the text contains HTML-tags like &lt;b&gt;, &lt;i&gt;, &lt;a&gt; etc.</p><p>I have had trouble wrapping text containing these kind of tags. The problem is when it cuts the text between a start tag and an end tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681249">13</a> by Raymond Camden
		posted on 5/29/2008 at 2:41 PM
		</div>
		<div class="comment_text"><p>@Mikkel: Um.... you did read the blog entry, right? I cover HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681251">14</a> by Mikkel Johansen
		posted on 5/29/2008 at 3:08 PM
		</div>
		<div class="comment_text"><p>@Ray: I did read the part where you replace any tag with "blank".</p><p>My "question" should have been: What if I want to keep the html-tags without breaking the start/end-tag when wrapping the text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681250">15</a> by Raymond Camden
		posted on 5/29/2008 at 3:15 PM
		</div>
		<div class="comment_text"><p>Ah - that gets significantly more complex perhaps. You could do this:</p><p>1) Remove html<br>2) Find FullLeft(N)<br>3) If fullLeft(n) ends at "the", go back to original content (with html), find "the", and end there.</p><p>That would let you keep the html and wrap at text not including html, but the N value would be &lt;N as you didn't count the html. Another issue is that it wouldn't stop you from ending with &lt;b&gt;the and having an unmatched tag.</p><p>You could write code to determine if your fullleft(n) result is inside HTML. This is done by looking for &lt;X&gt; &lt;/X&gt; around your result. If you find it, you either move to the end of &lt;/x&gt; or go to before &lt;x&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681252">16</a> by Doug
		posted on 5/29/2008 at 11:22 PM
		</div>
		<div class="comment_text"><p>@Mikkel: My "question" should have been: What if I want to keep the html-tags without breaking the start/end-tag when wrapping the text.</p><p>You would almost need to create some sort of HTML parser for that. Have you ever looked at the HTML source for a ColdFusion error message? If you notice, it adds a bunch of close tags (&lt;/b&gt;&lt;/p&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;...) before it adds the Error message source. It's not calculating those tags, it's just adding a bunch of them to be safe and they don't always work.</p><p>Most likely you could create a Regular Express to find all the &lt;BLOCK&gt; tags, and if any of them were still open, you could add their closing tags to the end. I think that would be crazy complicated and would have to ask if it's worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681253">17</a> by anthony
		posted on 6/3/2008 at 1:23 AM
		</div>
		<div class="comment_text"><p>I used this solution that Ben Nadel came up with to close truncated html.  It does a pretty good job.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F982-Ask-Ben-Closing-XHTML-Tags-In-A-Truncated-Message.htm%3AJcJKieUYUg7BUpyvW76wBONDEUw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/982-Ask-Ben-Closing-XHTML-Tags-In-A-Truncated-Message.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681254">18</a> by Duane Hardy
		posted on 6/11/2008 at 5:49 PM
		</div>
		<div class="comment_text"><p>Is it possible to trim all text around a tag.  For instance trim all the text in your example before or after "&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com">http://www.coldfusionjedi.com</a>"&gt;Constitution&lt;/a&gt;" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681255">19</a> by Raymond Camden
		posted on 6/11/2008 at 5:50 PM
		</div>
		<div class="comment_text"><p>In theory. You would write a regex to match</p><p>(1 or more spaces)(link including closing a tag)(1 or more spaces)</p><p>and replace with</p><p>(link)</p><p>Let me gtive it a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681256">20</a> by Raymond Camden
		posted on 6/11/2008 at 5:53 PM
		</div>
		<div class="comment_text"><p>Not heavily tested, but this seems to work. I assumed you meant replace two or more with one:</p><p>&lt;cfset text = rereplacenocase(text, "[[:space:]]+(&lt;a.*?&gt;.*?&lt;/a&gt;)[[:space:]]+"," \1 ")&gt;</p><p>If you really want NO space, period, just change the 3rd arg to be just \1, not (space)\1(space).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681257">21</a> by Duane Hardy
		posted on 6/11/2008 at 6:01 PM
		</div>
		<div class="comment_text"><p>What I am ultimately trying to do is add 'target="_blank"' to an a tag with an external href.  I was looking at trying to trim a string provided by a webservice down to just the &lt;a&gt; tag and using javascript for all external links.  Possibly I could do add 'target="blank"' with coldfusion?  Do you know any methods?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681258">22</a> by Raymond Camden
		posted on 6/11/2008 at 6:09 PM
		</div>
		<div class="comment_text"><p>Oh thats simpler. You can't do it (afaik) in one line, but just get all the links (use reMatch in cf8) and then replace any non-local link with the modified version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681259">23</a> by John Whish
		posted on 6/12/2008 at 12:21 AM
		</div>
		<div class="comment_text"><p>I know it's not ColdFusion, but you could use jQuery to do this for you quite easily (assuming all external links start with http):</p><p>$('a[@href^="http://"]').attr("target", "_blank");</p><p>Or if you want to get fancy:</p><p>$('a[@href^="http://"]').attr({target: "_blank", title: "Opens in a new window"});</p><p>Hope that's of interest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681260">24</a> by Raymond Camden
		posted on 6/12/2008 at 12:38 AM
		</div>
		<div class="comment_text"><p>@John: Very much of interest. To quote the great Paris: "That's hot."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681264">25</a> by John Whish
		posted on 6/12/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>It's nice to teach you something Raymond after all I've learnt from you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681267">26</a> by John Whish
		posted on 6/12/2008 at 12:54 AM
		</div>
		<div class="comment_text"><p>Just noticed my comment didn't come out right. There shouldn't be a semi-colon after the http. I'll try posting again in case it was my typo!</p><p>$('a[@href^="http://"]').attr({target: "_blank", title: "Opens in a new window"});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681269">27</a> by John Whish
		posted on 6/12/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>I've posted the code here, (with a bonus feature!) if anyone's interested <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aliaspooryorik.com%2Fblog%2Findex.cfm%2Fe%2Fposts.details%2Fpost%2F94%3Aa5XPcLZq7T5zSxSuXWuQA6Z6zcY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aliaspooryorik.com/blog/index.cfm/e/posts.details/post/94">http://www.aliaspooryorik.c...</a></p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681265">28</a> by Duane Hardy
		posted on 6/12/2008 at 5:50 PM
		</div>
		<div class="comment_text"><p>My front end is a flex application.  I thought if I did the modification on the backend before the links got called that it would save time and coding on the front end.</p><p>I assume I would have to have an ExternalInterface in the flex actionscript to communicate with the jQuery code?  It would be great if it would automatically detect and append the code.</p><p>I do have to append a user code to the end of each external link, so I am interested in how jQuery works.  I haven't started this part of the project yet, where is the best source for this resource?</p><p>Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681268">29</a> by Nick W
		posted on 8/25/2014 at 8:42 PM
		</div>
		<div class="comment_text"><p>Nice one Raymond. I often find myself on your website having googled 'coldfusion #whatever-i'm-stuck-on-at-the-time#' and generally i've got a head full of code so once ive got the solution i need i'm back to sublime text to implement it and crack on (without commenting) - but i just wanted to say 'thank you' as your posts have been really helpful over the years on quite a few occasions - thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681270">30</a> by Raymond Camden
		posted on 8/25/2014 at 8:43 PM
		</div>
		<div class="comment_text"><p>You are most welcome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2556888446">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NJvnj0AJWn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2556888446">31</a> by dilbert
		posted on 3/7/2016 at 11:21 PM
		</div>
		<div class="comment_text"><p>I know this one is "ancient", but I just stumbled upon it and found it to fit exactly what I needed.  Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2557571741">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2557571741">32</a> (In reply to <a href="#c_2556888446">#31</a>) by Raymond Camden
		posted on 3/8/2016 at 11:24 AM
		</div>
		<div class="comment_text"><p>You are welcome. I cleaned up the code samples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2557900846">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NJvnj0AJWn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2557900846">33</a> (In reply to <a href="#c_2557571741">#32</a>) by dilbert
		posted on 3/8/2016 at 2:25 PM
		</div>
		<div class="comment_text"><p>Thanks again, I just wanted to let you know that this "old" information is still helping people.</p><p>The link for the UDF above is broken, I found it at <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FFullLeft%3AnXcpqOmESuy6LVVIzPDcAIY1ISs&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/FullLeft">http://cflib.org/udf/FullLeft</a>.</p></div>
	</div>
</div>
		