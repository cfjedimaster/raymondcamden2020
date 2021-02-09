
<div class="comment" id="c_1713731536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731536">1</a> by Sam Farmer
		posted on 4/7/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>Cool approaches. One thing I have done is create a tag.cfc like so:</p><p>tag.cfc:<br>&lt;cfcomponent&gt;<br>&lt;cffunction name="cookie"&gt;<br>  &lt;cfcookie attributeCollection="#arguments#"&gt;<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>Then in the script do:<br>tag=new tag();<br>tag.cookie( name="cf", value="cool", httpOnly="true" );</p><p>You can drop tag.cfc in the directory as you mention or define a folder in your app via custom tag mapping and put it in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731534">2</a> by Raymond Camden
		posted on 4/7/2011 at 5:12 PM
		</div>
		<div class="comment_text"><p>Cookie is another good example. Thanks Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731529">3</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 4/7/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>Great stuff Ray. I didn't realize you had helped to write the port for cffeed. Very cool.</p><p>Some time back I wrote a post about Extending the Server (<a href="http://disq.us/url?url=http%3A%2F%2Fblog.cutterscrossing.com%2Findex.cfm%2F2009%2F10%2F8%2FCan-We-Extend-the-ColdFusion-Server%29%3ArMUIPsU-TArBel4Z0zSTvPS6pGg&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.cutterscrossing.com/index.cfm/2009/10/8/Can-We-Extend-the-ColdFusion-Server)">http://blog.cutterscrossing...</a> that covered the basics of creating component objects for use across the entire server. I've lacked time, this past year, but think it would be great, as a community, to begin to fill in the gaps. Maybe Adobe could then use those projects as the basis for final implementation? Not sure of the best way to handle some of the smaller items, like cfsetting, but more complex tags, like cfsavecontent, might be really good candidates. I guess it's a matter of defining a standard convention, so that stuff isn't overly fragmented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731528">4</a> by Raymond Camden
		posted on 4/7/2011 at 5:37 PM
		</div>
		<div class="comment_text"><p>Dude - did you know savecontent is supported in script?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731538">5</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 4/7/2011 at 8:09 PM
		</div>
		<div class="comment_text"><p>No, I didn't. I'll have to go check the docs on that. Was that added in 9.01?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731531">6</a> by Sam Farmer
		posted on 4/7/2011 at 8:13 PM
		</div>
		<div class="comment_text"><p>Added in 9 (but hidden deep in the docs).</p><p>Syntax:<br>savecontent variable="local.content" {<br>		writeOutput(string);<br>		writeDump(arguments);<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731544">7</a> by Raymond Camden
		posted on 4/7/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>It's not hidden - it's in one of the links above. However, the _syntax_ is hidden, like most of the stuff.</p><p>What we need is a blog post with all these new keywords and simple examples.</p><p>Agreed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731533">8</a> by Adam Cameron
		posted on 4/8/2011 at 12:15 AM
		</div>
		<div class="comment_text"><p>Well, what we *need* is for Adobe to write the docs coherently.</p><p>That would be better than a blog post.  No dis' meant, Ray ;-)</p><p>But a blog post would be more like to happen.</p><p>Actually, if you were inclined to write something on this, a better approach would be to annotate livedocs rather than write something entirely separate &amp; disconnected, wouldn't it?</p><p>Do livedocs annotations get indexed by Google (etc)?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731545">9</a> by Raymond Camden
		posted on 4/8/2011 at 12:17 AM
		</div>
		<div class="comment_text"><p>@Adam: I'm offended. You are not allowed to comment until you buy me another beer. ;)</p><p>Um - I'm petty sure livedocs do get aggregated as they come up in my search. Do the _comments_? I don't know.</p><p>I agree in general - but I'm not sure this would be appropriate for comments. May be a bit much for the context. Meh.</p><p>I need to excuse to blog - and frankly - I forget myself. I use CFB Snippets for some things (like query in CFC form), so this could be useful to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731539">10</a> by Andy K
		posted on 4/8/2011 at 12:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray - FYI I tried to read this on my Droid X and I could not seem to get past this page:</p><p>/<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fmobile%2Findex.cfm%3A_Hx3L2HrXp3qPPmsceim_S4wlbg&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com/mobile/index.cfm">www.coldfusionjedi.com/mobi...</a></p><p>Great stuff (as always!)<br>Andy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731535">11</a> by Raymond Camden
		posted on 4/8/2011 at 12:25 AM
		</div>
		<div class="comment_text"><p>Ping me via email please. The mobile version was updated yesterday - still has kinks to work out. If you can, tell me what you had clicked first, where you ended up, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731543">12</a> by Raymond Camden
		posted on 4/8/2011 at 2:05 AM
		</div>
		<div class="comment_text"><p>Looks like Ben's already got a good one pager on the new keywords:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1663-Learning-ColdFusion-9-CFScript-Updates-For-Tag-Operators.htm%3AcpBfL50xja3dTjZHRtORQ8UjpDc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1663-Learning-ColdFusion-9-CFScript-Updates-For-Tag-Operators.htm">http://www.bennadel.com/blo...</a></p><p>Damn - and after I had written a little demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731530">13</a> by Sam Farmer
		posted on 4/8/2011 at 4:01 AM
		</div>
		<div class="comment_text"><p>You should still post your entry Ray.</p><p>Just because one person has posted something doesn't mean others can't! Plus I don't have to scroll as much on your entries! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731541">14</a> by Daria
		posted on 4/8/2011 at 7:32 AM
		</div>
		<div class="comment_text"><p>how would you handle the group attribute of cfquery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731537">15</a> by JP
		posted on 4/8/2011 at 9:16 AM
		</div>
		<div class="comment_text"><p>I would love to see cfmodule implemented in script. Yes, I've still got a bunch of custom tags I use!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731540">16</a> by Raymond Camden
		posted on 4/8/2011 at 3:18 PM
		</div>
		<div class="comment_text"><p>@Sam: Heh, I don't think I'd have anything better than his - but - I may share my CFB snippets. I made some as I had issues with remembering the syntax. To be honest, it is weird to me that same of these things work like this</p><p>include "foo.cfm"</p><p>and some work like so</p><p>throw(.....)</p><p>@Daria: You mean cfoutput don't you? If so - I don't believe you can handle that at all now. You would need to do it manually.</p><p>@JP: In theory - you could build a UDF to replicate that. Need an example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731542">17</a> by Adam Cameron
		posted on 4/8/2011 at 3:31 PM
		</div>
		<div class="comment_text"><p>Mate, just keep a tally of how many beers you figure I owe you, and I'll see ya right next time you're across here (which is more likely than me being over there).</p><p>Livedocs itself is indeed indexed by Google.  Fortunately.  Because Google does a much better job than Adobe's search engine (not that that is so different from most site's search engines, so no indictment of Adobe meant there).</p><p>However the annotations are *not* indexed, unfortunately.  I guess this is because - for reasons best known to themselves -  Adobe load those as separate requests, rather than just do it as the main request.  Sigh.</p><p>I think there should be a separate section in the docs that covers the non-tag-implementations of all functionality as thoroughly as the existing reference covers the tags and the functions.  And each should be cross-referenced to the other.</p><p>But anyway.</p><p>I too was bemused why sometimes various - seemingly equivalent - operations take parentheses, and others just quotes.  It's the sort of non-uniformity CFML really doesn't need.</p><p>Cheers for the heads-up from Sam re savecontent.  I didn't know that.  I think it's good it's there for completeness sake, but it's not very elegant compared to the tag analogue, is it?</p><p>Grouped query looping using a for() would be bloody handy, I agree.  It doesn't specifically mention gropupings, but there's an issue in the bug tracker for getting query-looping added to script.  It might be worth voting / commenting on.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731546">18</a> by Raymond Camden
		posted on 4/8/2011 at 4:03 PM
		</div>
		<div class="comment_text"><p>@Adam: re: savecontent<br>I agree - it isn't elegant - but you don't normally do a lot of outputs in script anyway. I _have_ used this in Adobe Groups though. A lot of the CMS is CFC driven, of course, and many of my CFCs need to generate output. Since my CFCs were script based and I didn't want a bunch of string ops, I did something like this:</p><p>function renderPoo() {<br>  var result="";<br>  savecontent variable="result" {<br>    include template="poo.cfm";<br>  }<br>  return result;<br>}</p><p>So the savecontent keywords works great for me here. Certainly a rare use case for me, but I'm happy it's there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731550">19</a> by Aaron DeRenard
		posted on 4/8/2011 at 7:11 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>I'm dying over here...</p><p>I mean, renderPoo()?  Really?</p><p>... ow, I feel like I'm laughing up some six pack abs ...</p><p>Sorry for the comment that adds nothing to the topic.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731554">20</a> by Raymond Camden
		posted on 4/8/2011 at 7:12 PM
		</div>
		<div class="comment_text"><p>I turned 38 today. Unfortunately my maturity is still hovering around 12. On a good day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731552">21</a> by Adam Cameron
		posted on 4/8/2011 at 7:14 PM
		</div>
		<div class="comment_text"><p>Happy birthday matey.</p><p>Add another beer to the list.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731551">22</a> by Raymond Camden
		posted on 4/8/2011 at 7:21 PM
		</div>
		<div class="comment_text"><p>Thank you sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731553">23</a> by Julian Halliwell
		posted on 4/9/2011 at 1:43 PM
		</div>
		<div class="comment_text"><p>Many (belated) Happy Returns, Raymond (only 38?)</p><p>Totally agree with Sam, you shouldn't worry about duplicating topics: if an issue's important to me, then the more perspectives I can get on it the better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731556">24</a> by Raymond Camden
		posted on 4/9/2011 at 4:51 PM
		</div>
		<div class="comment_text"><p>I'll post it up Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731557">25</a> by Raymond Camden
		posted on 4/25/2011 at 5:49 PM
		</div>
		<div class="comment_text"><p>I did post it on Monday. Just not the Monday I thought:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F4%2F25%2FExamples-of-ColdFusion-9-Script-Support%3A3ECqUTFLjyNV_Vqpn1shCIirVjQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/4/25/Examples-of-ColdFusion-9-Script-Support">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		