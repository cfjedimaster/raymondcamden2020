
<div class="comment" id="c_1713621261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621261">1</a> by Sean Corfield
		posted on 10/9/2005 at 8:13 AM
		</div>
		<div class="comment_text"><p>Not quite sure what you mean about the URL scope dump?</p><p>With that URL the value of X should be 1 and after the page has loaded the browser should try to position the page to the anchor named top.</p><p>Every browser I tried correctly shows X = 1 and tries to jump to the anchor top.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621260">2</a> by Az
		posted on 10/9/2005 at 9:02 AM
		</div>
		<div class="comment_text"><p>Ray, I see the behavior you described (x = 1#top instead of x = 1) using IE6 on Windows XP (all the latest updates).  Opera and Firefox pass the correct value and anchor.  I wonder how the submission of the HTTP request differs between IE and the other browsers...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621265">3</a> by Jeff Coughlin
		posted on 10/9/2005 at 9:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I got the same results as you (using WinXP).  With Firefox (v1.07) I received "x=1" and with IE6 I received "x=1#top".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621262">4</a> by Az
		posted on 10/9/2005 at 9:15 AM
		</div>
		<div class="comment_text"><p>I just did a quick test on my local IIS6 test server and I get the same results using a test page similar to the one you have on your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621271">5</a> by Az
		posted on 10/9/2005 at 9:29 AM
		</div>
		<div class="comment_text"><p>Another quick update.  This does seem to be caused by &amp;lt;cflocation&amp;gt;.  If you hit the page directly with IE6 using the URL: <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Ftest2.cfm%3Fx%3D1%23top%3AkMhOw6q1hiKLnjJJP_7XZUZyYZ8&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/test2.cfm?x=1#top">http://ray.camdenfamily.com...</a> then everything works as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621270">6</a> by O?uz Demirkap?
		posted on 10/9/2005 at 1:53 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I would also suggest to check CF version.</p><p>Base CF 7.0 (the first version of 7) has also some problems with CFLOCATION. I had same problem on my server but after upcoming updates problem has gone.</p><p>Just an idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621272">7</a> by Raymond Camden
		posted on 10/9/2005 at 3:37 PM
		</div>
		<div class="comment_text"><p>Sean, I just meant: cfdump var="#url#". So, odd that it didn't bug for you, and it did for everyone else.</p><p>Oguz: I'd blame CF, but the one google hit I got mentioned .Net. Anyone care to try this same experiment in .net?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621269">8</a> by Raymond Camden
		posted on 10/9/2005 at 3:56 PM
		</div>
		<div class="comment_text"><p>Also - anyone want to try this w/ PHP? My only IIS6 box is this one, so I don't want to put PHP on it just for a test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621266">9</a> by Matt
		posted on 10/9/2005 at 4:11 PM
		</div>
		<div class="comment_text"><p>Have you tried disabling HTTP keep-alive in IIS? I experienced something somewhat similar in IIS5 a while back and that was the most effective workaround I found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621268">10</a> by Gus
		posted on 10/9/2005 at 5:46 PM
		</div>
		<div class="comment_text"><p>This sounds alot more like a browser issue than an IIS issue.  The web server should be doing the same thing regardless of browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621263">11</a> by Sean Corfield
		posted on 10/10/2005 at 1:21 AM
		</div>
		<div class="comment_text"><p>Ray, I meant it was unlikely to be IIS since then you'd see it with more browsers. Since you're only seeing it for Win/IE6 (and not Mac/IE), then it looks like a *browser* issue - mishandling a 302 location header - not a server error.</p><p>I notice that the actual response is: location: test2.cfm?x=1#top</p><p>You might try using a full URL (with <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Ftest2.cfm%3Fx%3D1%23top%3AkMhOw6q1hiKLnjJJP_7XZUZyYZ8&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/test2.cfm?x=1#top">http://ray.camdenfamily.com...</a> instead).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621273">12</a> by Raymond Camden
		posted on 10/10/2005 at 4:28 AM
		</div>
		<div class="comment_text"><p>Sorry for misreading you. I think what I may do is a hack, simply add a dummy url var before the anchor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621267">13</a> by Sean Corfield
		posted on 10/10/2005 at 4:44 AM
		</div>
		<div class="comment_text"><p>Did you try using the full URL instead of just the filename? I'm curious to know whether that makes a difference to IE6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621279">14</a> by Julian
		posted on 10/10/2005 at 10:59 AM
		</div>
		<div class="comment_text"><p>As Sean says IE must be the culprit, not cflocation. We've seen the same thing with ISAPI_rewrite redirections. The simplest solution is to add an ampersand before the anchor pound sign in the url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621285">15</a> by Raymond Camden
		posted on 10/10/2005 at 3:16 PM
		</div>
		<div class="comment_text"><p>Sean, the full URL didn't help.</p><p>Julian: I'm not so sure it is just IE as since tests locally w/ Apache don't show the same result. I'm going to try a &amp;, and if it doesn't help, I'm going to add &amp;dummy=1. (Not on the test, but in Galleon where I first found this bug.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621286">16</a> by Julian
		posted on 10/10/2005 at 3:25 PM
		</div>
		<div class="comment_text"><p>Sorry Ray, I should have been more precise: it's the IIS/IE combination that seems to be at fault, rather than IIS/CFLOCATION.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621282">17</a> by Raymond Camden
		posted on 10/10/2005 at 4:07 PM
		</div>
		<div class="comment_text"><p>Just an FYI, but &amp;#anchor seemed to work ok. I'll be releasing an updated Galleon sometime today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621278">18</a> by Robert Froehling
		posted on 10/10/2005 at 5:41 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've notice this same thing happening every now and again on my dev box.  It started after I installed the JRun4 Updater 6.  I'm running CFMX 6.1 via JRun4 with IIS6 on Windows 2003.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621277">19</a> by Aaron West
		posted on 10/29/2005 at 1:30 AM
		</div>
		<div class="comment_text"><p>FYI -<br>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3D5c9389c8%26pss%3Drss_coldfusion_5c9389c8%3AREn-ZfzebnzkNTBY9wXO0dt4kJg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=5c9389c8&amp;pss=rss_coldfusion_5c9389c8">http://www.macromedia.com/c...</a>" target="_blank"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3D5c9389c8%26pss%3Drss_coldfusion_5c9389c8%3C%2Fa%3E%3Acwtnco7QIiL97Js4PZ8dQiJb2AA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=5c9389c8&amp;pss=rss_coldfusion_5c9389c8</a>">http://www.macromedia.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621284">20</a> by Rob Wood
		posted on 8/11/2006 at 2:47 AM
		</div>
		<div class="comment_text"><p>I found this thread this morning. Your &amp;#anchorName hack worked just fine. Thank you very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621281">21</a> by Gordon Cantor
		posted on 2/28/2008 at 8:19 PM
		</div>
		<div class="comment_text"><p>Thanks very much for the tip.  Worked with &amp;##anchorName</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621280">22</a> by Kay
		posted on 11/19/2008 at 3:58 PM
		</div>
		<div class="comment_text"><p>I have encountered this problem. Here are my solutions:</p><p>Linking to Named Anchors in CF to ANOTHER page</p><p>Coldfusion will throw an error if you link to a named anchor on another page using #, unless you use the following code:</p><p>&lt;cflocation url = "index.cfm?ID=7j&amp;##6" addToken = "No"&gt;</p><p>The critical part is &amp;##6 at the end of this example URL. This needs to be added to the END of the string, otherwise it is ignored.</p><p>Linking to Named Anchors in CF to the SAME page</p><p>If you link to a named anchor on the SAME page using #, Coldfusion will NOT pass the named anchor on the URL. See below:</p><p>&lt;cflocation url = "index.cfm?ID=7j&amp;##6" addToken = "No"&gt; <br>&lt;/cfif&gt;</p><p>THIS WILL NOT WORK....</p><p>You MUST insert the named anchor in the form action path. E.g.</p><p>&lt;form action="index.cfm?id=3c&amp;#A" method="post" name="form" id="form" enctype="multipart/form-data"&gt;</p><p>Of interest, the original method WILL work in Firefox. I hova found it is only IE, that does not like posting back to the same page.</p><p>Hope this helps....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621283">23</a> by Toni Nemec
		posted on 10/25/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>I am trying to link from one cfm (CheckIn_Update.cfm) back to a specific named anchor in another cfm (CheckIn.cfm - anchor name 'Test') as you discussed in this post.  In a cfm (CheckIn.cfm), I send information to a 2nd cfm using &lt;a href="CheckIn_Update.cfm?RecordID=#OCT251700.RecordID#&amp;Target=Test"&gt; Where 'Test' is the name of an anchor. In the 2nd cfm (CheckIn_Update.cfm), I allow the user to update a form &amp; then return to the original cfm to a specific anchor named 'Test" using &lt;cflocation url="...../CheckIn.cfm##Test"&gt; which works corrently.  What I now need to do is to make the anchor name (Test) in the 2nd cfm a variable once it reaches the CheckIn_Update.cfm since the anchor name will change with each use depending on the choice selected on the 1st cfm (CheckIn.cfm).  I am sending the anchor name through the variable 'Target' to the 2nd cfm and I have declared the anchor &lt;cfparam name="URL.Target" default=""&gt; in the 2nd cfm and created a variable for the changing anchor called 'Target2' &lt;cfset Target2 = #URL.Target#&gt;.  How do I put the variable name in the cflocation statement where I call the anchor - &lt;cflocation url="...../CheckIn.cfm##Test"&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621376">24</a> by Raymond Camden
		posted on 10/26/2011 at 12:55 AM
		</div>
		<div class="comment_text"><p>Are you asking how to replace</p><p>#test</p><p>with some dynamic value?</p><p>If so, and if your value was in the variable 'mark', then you could do this</p><p>&lt;cflocation url="foo.cfm###mark#"&gt;</p><p>The # hashmark is doubled to escape it and then #mark# is used since it is the variable.</p></div>
	</div>
</div>
		