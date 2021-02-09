
<div class="comment" id="c_1713654937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654937">1</a> by James Edmunds
		posted on 7/12/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Hmmm. This causes me to make this leap of speculation, to wonder when we will see Jedi, the CF Framework designed by Ray Camden!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654948">2</a> by Douglas Knudsen
		posted on 7/12/2006 at 6:32 PM
		</div>
		<div class="comment_text"><p>Also note, it's typically noted as a best practise to not put any display layer code in application.cfm or application.cfc.  Consider your app eventually extending services to Flex, Flash, or Ajax clients.  Then this could make a terrible mess of that well crafted XML response, eh?</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654951">3</a> by Raymond Camden
		posted on 7/12/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>James: Probably never. :) I'm very happy with Model-Glue.</p><p>Douglas: Absolutely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654947">4</a> by William Tomlinson
		posted on 7/13/2006 at 2:06 PM
		</div>
		<div class="comment_text"><p>A layout.cfc works nicely for this too.</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654945">5</a> by Toku
		posted on 7/14/2006 at 2:11 AM
		</div>
		<div class="comment_text"><p>Will ..</p><p>Can you elaborate on this layout.cfc.. ?</p><p>Toku</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654952">6</a> by Will
		posted on 7/14/2006 at 3:44 AM
		</div>
		<div class="comment_text"><p>I might have a layout.cfc with showHeader(), showLeftMenu(), showFooter(), etc.</p><p>You pass in title, keywords, etc. as arguments.</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654955">7</a> by Douglas Reynolds
		posted on 7/14/2006 at 5:50 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for posting this for discussion.<br>A Couple of guys wrote this book named WACK that I picked that up in (-;<br>Douglas, I was unaware that presentation should be left out of application.cfc/.cfm.  I try to keep presentation and logic separated as much as possible and thought this was a step in the right direction.<br>Will, I like your component approach, showHeader() might take template name as an argument which would set the condition whether to use headerA or headerB (unsure as to how the template name will be accessed in the .cfc).  As Ray mentioned above CF passes the template name to onRequestStart, how do we control where the template name gets passed? - Thanks Ray, this was a key question that I was realizing today related to accessing a particular template.<br>Ray, your custom tag approach is confusing to me because I am not familiar with what you would be doing in layout.cfm.  Would layout.cfm be working similar to Will's layout.cfc approach?<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654960">8</a> by Raymond Camden
		posted on 7/14/2006 at 2:57 PM
		</div>
		<div class="comment_text"><p>Doug, I'd just use the custom tag like so:</p><p>&lt;cf_layout title="Foo"&gt;<br>Content<br>&lt;/cf_layout&gt;</p><p>Custom tags can be run in both "start" and "end" modes, so it is possible to build wrappers like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654958">9</a> by Douglas Reynolds
		posted on 8/31/2006 at 7:34 AM
		</div>
		<div class="comment_text"><p>Ray, thought I would crack this one open again as I did not fully understand.  The first question which arised was &lt;cfmodule&gt;?  Found this useful for beginning to understand:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.netbenefit.com%2FTags%2Flr2_062.htm%3AuuoPSd69Hruxi7bRWIoyTtwJi18&amp;cuid=3321886" rel="nofollow noopener" title="http://www.netbenefit.com/Tags/lr2_062.htm">http://www.netbenefit.com/T...</a><br>In your code above:<br>&lt;code&gt;<br>&lt;cfmodule template="/mysite/tags/layout.cfm" title="About Me"&gt;<br>stuff<br>&lt;/cfmodule&gt;<br>&lt;/code&gt;<br>I am understanding that cfmodule is referencing the template layout.cfm which contains the custom tag(s).<br>Related to your post above using &lt;cf_layout title="Foo"&gt; I interpret &lt;cf_layout&gt; as the custom tag "wrapper" titled "Foo" which might be contained within layout.cfm.<br>Do I have that straight?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654959">10</a> by Raymond Camden
		posted on 8/31/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Doug, you are mostly right - but the file itself (layout.cfm) _is_ the custom tag. THere are multiple tags in it. So my code, and your code, runs the same file twice. ColdFusion knows if it is in 'startmode' or 'endmode', and that variable is present in the ThisTag scope.</p><p>I promise a Custom Tag presentation soon. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654961">11</a> by Douglas Reynolds
		posted on 8/31/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>It appears that custom tags work similarly as that of CFCs.  ThisTag scope is defined in app.cfc - Correct?<br>How do we call individual functions out of the custom tag?<br>Is the increased overhead of custom tags resulting from the file being run twice or is that just a result of the context of the tag we are discussing for header() footer()?<br>Once I get the theory side correct I will work on the content and try to write a simple header() and post back.<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654962">12</a> by Raymond Camden
		posted on 8/31/2006 at 6:41 PM
		</div>
		<div class="comment_text"><p>Nope. Tags are very different. You are confusing the This scope in CFCs with the ThisTag scope in custom tags.</p><p>Custom tags do not have functions like CFCs. Custom tags are executed, in ways, a lot like a simple cfinclude.</p><p>The overhead is in creating the blackboxing for tags. To be honest, I don't think it is something to normally worry about<br>. <br>Ok - that settles it. A custom tag presentation will be on the books.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654963">13</a> by Douglas Reynolds
		posted on 8/31/2006 at 7:44 PM
		</div>
		<div class="comment_text"><p>I have an idea, why don't I go and read some more about custom tags so I can get a clue.  Thanks for your patience.<br>Looking forward to your CT presentation (-;.<br>I will post back after some research.<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654964">14</a> by Douglas Reynolds
		posted on 9/1/2006 at 4:59 AM
		</div>
		<div class="comment_text"><p>Here is a good article - Wonder who that author is?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fserver_archive%2Farticles%2Fcf_adv_custom_tag_syntax.html%3AcN-cp8ikcjb0ysn4G3htPXuq6uQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/server_archive/articles/cf_adv_custom_tag_syntax.html">http://www.adobe.com/devnet...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654965">15</a> by Douglas Reynolds
		posted on 9/1/2006 at 5:37 AM
		</div>
		<div class="comment_text"><p>Ray,<br>How does the following relationship work?</p><p>header.cfm (Tag page)<br>&lt;cf_header&gt; (calling tag)<br>Obviously "header" is the identifier.  I recall some discussion here in other posts about &lt;cf_foo&gt;, I think in comparison to &lt;_foo&gt; (something like that anyway).<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654966">16</a> by Douglas Reynolds
		posted on 9/1/2006 at 6:46 AM
		</div>
		<div class="comment_text"><p>Aha, I see what you mean, the opening tag can contain a custom tag call as well as the closing tag can contain a closing tag call. When CF reads the file the second time the closing tag is called (this epiphony realized by &lt;cfimport&gt;.<br>By defining ThisTag scope with "start/end" attributes we can control when a tag is called and use &lt;cfmodule&gt;.</p><p>layout.cfm (Custom Tag for header/footer)</p><p>&lt;!--- Custom tag layout.cfm ---&gt;</p><p>&lt;cfif ThisTag.ExecutionMode="start"&gt;&lt;cfoutput&gt;THIS IS MY HEADER&lt;/cfoutput&gt;&lt;/cfif&gt;</p><p>&lt;cfif ThisTag.ExecutionMode="end"&gt;&lt;cfoutput&gt;THIS IS MY FOOTER&gt;&lt;/cfoutput&gt;&lt;/cfif&gt;</p><p>&lt;!--- Tag Call ---&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;MyPage&lt;/title&gt;<br>&lt;/head<br>&lt;body&gt;<br>&lt;cf_layout&gt;&lt;!--- Tag Start Mode Header ---&gt;<br>&lt;h1&gt;MY Page&lt;/h1&gt;<br>&lt;/cf_layout&gt;&lt;!--- Tag End Mode Footer ---&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Do I have the basics?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654968">17</a> by Raymond Camden
		posted on 9/1/2006 at 6:48 AM
		</div>
		<div class="comment_text"><p>Pretty much yes. Your terminology is a bit off - but you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654969">18</a> by Raymond Camden
		posted on 9/1/2006 at 6:51 AM
		</div>
		<div class="comment_text"><p>Doug: Would you believe I had completely forgotten about this article?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654972">19</a> by Douglas Reynolds
		posted on 9/1/2006 at 6:56 AM
		</div>
		<div class="comment_text"><p>Cool - Please correct me.<br>I can imagine that, that was back in 98, that has been a bit.<br>Thanks, this was a good study.<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654970">20</a> by Raymond Camden
		posted on 9/1/2006 at 6:59 AM
		</div>
		<div class="comment_text"><p>Well, to be anal, the opening tag doesnt contain a custom tag call - it IS the custom tag call. The ThisTag scope doesn't control the tag being called, it just gives info about HOW the tag is being used.</p><p>But now I'm just being picky.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654973">21</a> by Douglas Reynolds
		posted on 9/1/2006 at 7:02 AM
		</div>
		<div class="comment_text"><p>NP, helps me to understand greater detail.<br>Opening tag IS and Closing Tag IS (are) the call.<br>Threw me off with "how" in this context I was understanding "when".<br>How else can we use ThisTag? (short version)<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654971">22</a> by Douglas Reynolds
		posted on 9/1/2006 at 7:04 AM
		</div>
		<div class="comment_text"><p>Maybe too general of a question cause just defining scope.  Can be used however see fit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654974">23</a> by Raymond Camden
		posted on 9/1/2006 at 5:47 PM
		</div>
		<div class="comment_text"><p>The ThisTag has a few other values. ThisTag.HasEndTag - can be used to force people to use your tag as a wrapper. ThisTag.GeneratedContent - only makes sense in the closing tag - let's you get the crap on the inside. I already mentioned executionMode. Lastly, assocAttribs, which lets you examine data from "child" tags. (Don't let that throw you.)</p><p>I'm going to post a survey (well, just a question) to my blog for the September Jedi UG - to see if folks would rather a security meeting or a custom tags meeting - but even if tags lose, I'll do it the next month. (But it may be November since October has MAX.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654975">24</a> by Douglas
		posted on 9/2/2006 at 1:40 AM
		</div>
		<div class="comment_text"><p>assocAttribs - relative to nested ("child") tags?  I began reading on those last night after our discussion.  I will read up on the ThisTag values this eve.<br>Can't thank you enough!<br>I like the Samsung choice I wish I could do it.  Avatar - The last Airbender... Absolutely the best series going.  Also like Oban Star Racers (didn't see that one on your list).  My son and I watch those all the time.<br>I will send something your way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654978">25</a> by Douglas Reynolds
		posted on 9/2/2006 at 4:40 AM
		</div>
		<div class="comment_text"><p>Here is a correction to my syntax:</p><p>&lt;!--- Custom tag layout.cfm ---&gt;</p><p>&lt;cfif ThisTag.ExecutionMode IS "start"&gt;&lt;cfoutput&gt;THIS IS MY HEADER&lt;/cfoutput&gt;&lt;/cfif&gt;</p><p>&lt;cfif ThisTag.ExecutionMode IS "end"&gt;&lt;cfoutput&gt;THIS IS MY FOOTER&lt;/cfoutput&gt;&lt;/cfif&gt;</p><p>Forgot about the =.  Noticed in Livedocs that they were using a single quote around start/end.  Seems to not make a difference though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654979">26</a> by Raymond Camden
		posted on 9/5/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>Douglas: child tags are pretty rarely used. I use it in my "datatable" tag, which is a simple tag set I built to let me quickly show tables of data. If you download any of my apps you will see an example of this.</p><p>As for your custom tag example, I'd write it a bit different. Forgive the lack of less than/greater than signs, too lazy to ecape</p><p>cfif thistag.executionmode is "start"</p><p>content</p><p>cfelse</p><p>content</p><p>/cfif</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654977">27</a> by Douglas Reynolds
		posted on 9/6/2006 at 3:45 AM
		</div>
		<div class="comment_text"><p>I will look through BlogCFC to see if I can find an instance of your "datatable" tag to review.</p><p>As for my custom tag, if adapted to your cfelse example I understand:</p><p>&lt;cfif thistag.executionmode is "start"&gt;</p><p>     &lt;cfoutput&gt;THIS IS MY Header&lt;/cfoutput&gt;</p><p>cfelse</p><p>     &lt;cfoutput&gt;THIS IS MY FOOTER&lt;/cfoutput&gt;</p><p>/cfif</p><p>By using the cfelse I interpret this as implying end mode.<br>Hope I see that correctly.<br>Thanks,<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654976">28</a> by Raymond Camden
		posted on 9/6/2006 at 3:26 PM
		</div>
		<div class="comment_text"><p>Yep, you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654980">29</a> by Douglas Reynolds
		posted on 9/7/2006 at 7:11 AM
		</div>
		<div class="comment_text"><p>Would it be bad practice to do a &lt;cfinclude&gt; inside of the tag?<br>What I was thinking is making this tag a snippet where I only need to add the header/footer.cfm templates as an include.  That way for different sites I could just insert the snip and include the site-specific templates.</p><p>This tag thought process is quickly leading me toward a UDF study.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654981">30</a> by Raymond Camden
		posted on 9/7/2006 at 6:32 PM
		</div>
		<div class="comment_text"><p>I wouldn't do it. I mean, if you have different sites, why not just use different custom tags? You can have a layout.cfm for site A, and another one for site B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654983">31</a> by Douglas Reynolds
		posted on 9/8/2006 at 3:57 AM
		</div>
		<div class="comment_text"><p>Ya, it is very little extra coding and I can still create the generic snippet and tailor it for each site.  I have been studying your "datatable" tag, it is complex to me at this point but as I iterate through it some things are beginning to come clear.  Have you ever written any articles about this tag in particular?  I was searching your blog but did not find anything.<br>D.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654985">32</a> by Raymond Camden
		posted on 9/8/2006 at 5:35 PM
		</div>
		<div class="comment_text"><p>No, I haven't. When I do my custom tag preso in a few months I'll cover it. Although as a warning, I may slack a bit during the holidays.</p></div>
	</div>
</div>
		