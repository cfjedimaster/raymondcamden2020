
<div class="comment" id="c_1713733674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733674">1</a> by Brian Swartzfager
		posted on 6/21/2011 at 4:01 PM
		</div>
		<div class="comment_text"><p>Nice write-up, Ray:  thorough yet easy enough for my team members (who are new to CFCs) to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733673">2</a> by Stephen Duncan Jr
		posted on 6/21/2011 at 5:02 PM
		</div>
		<div class="comment_text"><p>I think you should also go over how argument passing works, and, of course, the argumentCollection trick for complex argument types: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F11%2F1%2FUsing-argumentCollection-with-AJAX-calls-to-ColdFusion-Components%3AXFzLQmaqtUUIntEAkoy50kqZqYc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/11/1/Using-argumentCollection-with-AJAX-calls-to-ColdFusion-Components">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733676">3</a> by Jaana Gilbert
		posted on 6/21/2011 at 5:03 PM
		</div>
		<div class="comment_text"><p>Thank you :) As always, Ray is my go-to-guy :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733677">4</a> by Raymond Camden
		posted on 6/21/2011 at 5:07 PM
		</div>
		<div class="comment_text"><p>@Stephen: I mainly wanted to focus in on the high level. That's a good additional tip though.</p><p>@Brian: You know my "ColdFusion Sample" series? I had considered doing one on CFCs. Basically taking a 2 page app (list of press releases and display of press release) with inline queries and convert it to using a CFC. I mainly wanted my "CF Sample" series to be _short_ guides, but I think I may make an exception for it.</p><p>@Jaana: Thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733675">5</a> by Michael
		posted on 6/21/2011 at 5:26 PM
		</div>
		<div class="comment_text"><p>@Ray - even in the "form mode" I have always just put the method name in the action attribute of the form tag (as opposed to a hidden form element) just like you have in your URL based example.</p><p>Either way works, but I wanted to ask if there was a benefit to doing it the way you suggested that I had never contemplated?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733678">6</a> by Raymond Camden
		posted on 6/21/2011 at 5:29 PM
		</div>
		<div class="comment_text"><p>Nope, no benefit, and I too would do the same as you. In fact, when I call CFCs via jQuery, I almost always do post, but i include the "special" things in the url. So my url will be</p><p>some.cfc?method=themethod&amp;returnformat=json</p><p>And the object parameter includes the arguments.</p><p>Now technically, together, both become one set of Arguments. But visually I like the separation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733681">7</a> by Doug
		posted on 6/21/2011 at 8:02 PM
		</div>
		<div class="comment_text"><p>Typo jumped out at me:</p><p>&lt;blockquote&gt;Any comments or corrections would &lt;b&gt;b&lt;/b&gt;e greatly appreciated.&lt;/blockquote&gt;</p><p>Otherwise, this is great sutff.  Thnax ray!1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733683">8</a> by Doug
		posted on 6/21/2011 at 8:02 PM
		</div>
		<div class="comment_text"><p>what?! No HTML??  FML</p><p>(I think I already knew that, actually.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733682">9</a> by Raymond Camden
		posted on 6/21/2011 at 8:04 PM
		</div>
		<div class="comment_text"><p>Fixed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733685">10</a> by Jason Brookins
		posted on 6/21/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>I should know this, but you teased with this question:  "isn't addressing outside scopes in a CFC bad?"</p><p>If I have some application-scope objects (like UDF or object factory) and/or request scope values for an application, how is the best way for these CFCs or simple values be used by a CFC if addressing the outside scope is a no-no?</p><p>I'm in the middle of refactoring an older application and want to make sure I don't do anything silly along the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733689">11</a> by Raymond Camden
		posted on 6/21/2011 at 8:36 PM
		</div>
		<div class="comment_text"><p>Before I say anything, remember that "The Best Way" is _always_ subjective. My answers are always right, but for everyone else, it's subjective. (Ahem.)</p><p>So you touch on a few things here I'll try to address.</p><p>1) What about a UDF library?</p><p>I typically turn this into a CFC, normally named "utils" or something generic. I then "inject" the CFC into the CFC needing it. So my onApplicationStart may look like this (pseudo-code)</p><p>application.utils = createObject("..","utils");<br>application.blogService = createObject("..","blog");<br>application.blogService.setUtils(application.utils);</p><p>Within blogService is a simple method, setUtitls, that takes the passed in arg and sets it to the Variables scopes. Then other methods in blog.cfc can do variables.utils.whatever() Tools like ColdSpring make this a bit easier, but the principal is the same. Your blog.cfc has no idea utils _also_ exists in the app scope. It has it's own reference to it.</p><p>Um - I thought I had more to say. I don't. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733684">12</a> by Jason Brookins
		posted on 6/21/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>@Ray:  As usual, thanks for the help.  After I'm done patching some file upload security holes, I'll go update my CFCs to handle the "injection".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733686">13</a> by Eric Belair
		posted on 6/22/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>@Ray, I'm a bit confused by your statement "Once you createObject the web service, you can treat it like a simple library.". Maybe I'm misunderstanding what you're trying to say, but when you call CreateObject("component", "myCFC"), isn't this simply creating a ColdFusion component object - basically, a variable that can be used in server-side logic? How can this be used as a WebService?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733687">14</a> by Aaron Neff
		posted on 6/22/2011 at 3:46 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Excellent post. I just wanted to add something which is sorta related to a couple of the 'extra reading' bullet points:</p><p>It is bug #84664, which addresses an issue I ran into w/ 9.0.1's outside-web-root + onCFCRequest. I'd moved a CFC above wwwroot, then changed all access="remote" to access="public|private", then added onMissingMethod() to the CFC to map the calling of those methods. In Application.cfc, I added onCFCRequest() to intercept the requests and call the previously-remote-but-now-public|private methods via that onMissingMethod. (of course, one would want to add logic to secure access to these methods.. since what I've done essentially creates a remote bridge to public|private functions).</p><p>Well, the bug is this: If cfgrid uses "cfc:" format to bind to a non-remote function (handled within onCFCRequest), then CF throws a CFCFunctionNotRemoteException (b/c the function is non-remote).</p><p>Temp workaround is to use "url:" format.</p><p>I hope CF10 makes onCFCRequest more useful, and web service friendly (I have your #79250 in mind, which is marked as closed.. so, hopefully they've added Adam's &lt;cfNowGoDoExactlyWhatYouWouldHaveDoneHadINotInterceptedYouAndComeBackToMeWithTheResult /&gt; =D</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733688">15</a> by Eric Belair
		posted on 6/22/2011 at 7:16 AM
		</div>
		<div class="comment_text"><p>What I mean is... CreateObject() creates an "instance" of an Object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733691">16</a> by Raymond Camden
		posted on 6/22/2011 at 5:34 PM
		</div>
		<div class="comment_text"><p>@Eric: What I meant was - if you are using a remote web service. If the CFC is local, you should NEVER use it as a web service. So for example</p><p>&lt;cfset myws = createObject('webservice','http://some remoteurl/foo.aspx')&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733690">17</a> by Eric Belair
		posted on 6/22/2011 at 5:49 PM
		</div>
		<div class="comment_text"><p>@Ray, Thank you for clarifying. I've never had the need to create a WebService Object in this way. Maybe it's a topic for a separate post, but, is there a way to use a CFC instance for AJAX calls? Basically, I have a CFC Object which I use for CRUD, as well as validation. Right now, the validation method can only be used server-side since it is totally dynamic based on other properties of the CFC. So, when I call the validation method using jQuery/AJAX ("/ext/cfc/myCFC.cfc?method=validate&amp;returnformat=JSON") I can't initiate the other methods to set those properties necessary to runt he validation method. Does that make sense??? Any thoughts/suggestions? Thanks as always for very informative blog posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733692">18</a> by Raymond Camden
		posted on 6/22/2011 at 5:51 PM
		</div>
		<div class="comment_text"><p>You would need to have another CFC that works with an instance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733693">19</a> by SuperAlly
		posted on 6/23/2011 at 6:45 AM
		</div>
		<div class="comment_text"><p>Nice post Ray, thanks.  Explains some things I wasn't clear on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002425885">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JmX4qM4De0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002425885">20</a> by Bob
		posted on 5/4/2015 at 2:49 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this with the community, it is very informative. I have a small problem, now if I call the coldfusion component using the url, i get the whole content... meaning I get back the &lt;cfcomponent&gt; &lt;cffunction&gt; and blah, blah, blah...Any thoughts what I might be doing wrong? I do not get any errors... But If I use &lt;cfinvoke&gt; to call the component, it works just fine... Any thoughts will be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002493888">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002493888">21</a> (In reply to <a href="#c_2002425885">#20</a>) by Raymond Camden
		posted on 5/4/2015 at 3:30 PM
		</div>
		<div class="comment_text"><p>When you say you get the 'whole content', do you mean the source code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002498320">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JmX4qM4De0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002498320">22</a> (In reply to <a href="#c_2002493888">#21</a>) by Bob
		posted on 5/4/2015 at 3:32 PM
		</div>
		<div class="comment_text"><p>Yes, that is exactly what I am getting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002500420">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002500420">23</a> (In reply to <a href="#c_2002498320">#22</a>) by Raymond Camden
		posted on 5/4/2015 at 3:34 PM
		</div>
		<div class="comment_text"><p>So when you hit <a href="http://disq.us/url?url=http%3A%2F%2Fyourserver.com%2Fyourcfc.cfc%3Fmethod%3DX%3AoKeEqPoHw4SdcRR553bUSxFXG5s&amp;cuid=3321886" rel="nofollow noopener" title="yourserver.com/yourcfc.cfc?method=X">yourserver.com/yourcfc.cfc?...</a> from your browser, you see code. But running <a href="http://disq.us/url?url=http%3A%2F%2Fyourserver.com%2Ffoo.cfm%3AyhgzBC_lyk77c8I_Kg2KdtTSj98&amp;cuid=3321886" rel="nofollow noopener" title="yourserver.com/foo.cfm">yourserver.com/foo.cfm</a> that uses cfinvoke to call it, that works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002516056">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JmX4qM4De0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002516056">24</a> (In reply to <a href="#c_2002500420">#23</a>) by Bob
		posted on 5/4/2015 at 3:43 PM
		</div>
		<div class="comment_text"><p>Yes, it works. This is my complete scenario. I have two servers. The QA and Dev. The dev is a Windows server 2008 R2 server and is running Coldfusion 9. The QA is a Unix SunOS server running Coldfusion 9 as well. Now, when I did all my work in Dev, it works great. Calling <a href="http://disq.us/url?url=http%3A%2F%2FmyDEVserver.com%2Fmycfc.cfc%3Fmethod%3Dhello%3A7_CVDlcfNh-7Ihc-90gUBGMqe_Y&amp;cuid=3321886" rel="nofollow noopener" title="myDEVserver.com/mycfc.cfc?method=hello">myDEVserver.com/mycfc.cfc?m...</a> returned the correct output and running <a href="http://disq.us/url?url=http%3A%2F%2FmyDEVserver.com%2Ffoo.cfm%3AOAma99vl8i_IIk2Aw2QqpmbRLyU&amp;cuid=3321886" rel="nofollow noopener" title="myDEVserver.com/foo.cfm">myDEVserver.com/foo.cfm</a> that uses cfinvoke also works. But  when I moved the same two files to QA, all got messed up. Calling the <a href="http://disq.us/url?url=http%3A%2F%2FmyQAserver.com%2Fmycfc.cfc%3Fmethod%3Dhello%3AJCnMpw1TK30X2OTfSYV2BN6RC8E&amp;cuid=3321886" rel="nofollow noopener" title="myQAserver.com/mycfc.cfc?method=hello">myQAserver.com/mycfc.cfc?me...</a> displays the source code instead of returning the correct output and Running <a href="http://disq.us/url?url=http%3A%2F%2FmyQAserver.com%2Ffoo.cfm%3AsHCVF2qHwq4u4nXzhpYgbEHvQzE&amp;cuid=3321886" rel="nofollow noopener" title="myQAserver.com/foo.cfm">myQAserver.com/foo.cfm</a>, which uses cfinvoke, works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002528168">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002528168">25</a> (In reply to <a href="#c_2002516056">#24</a>) by Raymond Camden
		posted on 5/4/2015 at 3:51 PM
		</div>
		<div class="comment_text"><p>All I can think of is that the web connector is screwed up somehow. But *normally* that would mean foo.cfm is broken too. I'd try disconnecting the web connector and reconnecting it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002533137">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JmX4qM4De0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002533137">26</a> (In reply to <a href="#c_2002528168">#25</a>) by Bob
		posted on 5/4/2015 at 3:54 PM
		</div>
		<div class="comment_text"><p>It might be a stupid question but, how to I do disconnect a web connector and then reconnect it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002541818">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002541818">27</a> (In reply to <a href="#c_2002533137">#26</a>) by Raymond Camden
		posted on 5/4/2015 at 3:58 PM
		</div>
		<div class="comment_text"><p>Look in cfinstall\cfusion\bin\connectors</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002545180">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JmX4qM4De0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002545180">28</a> (In reply to <a href="#c_2002541818">#27</a>) by Bob
		posted on 5/4/2015 at 4:00 PM
		</div>
		<div class="comment_text"><p>Alright, I will contact the server admin guy. Thanks for all the help.</p></div>
	</div>
</div>
		