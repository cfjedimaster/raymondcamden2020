
<div class="comment" id="c_1713661110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661110">1</a> by Mike Nimer
		posted on 1/6/2007 at 9:39 AM
		</div>
		<div class="comment_text"><p>And the string "invalidTag" is defined in the neo-security.xml as well as the regex pattern used to check for scripting hacks.</p><p>&lt;code&gt;<br>&lt;var name="CrossSiteScriptPatterns"&gt;<br>				&lt;struct type="coldfusion.server.ConfigMap"&gt;<br>					&lt;var name="&amp;lt;\s*(object|embed|script|applet|meta)"&gt;<br>							&lt;string&gt;&amp;lt;InvalidTag&lt;/string&gt;<br>					&lt;/var&gt;<br>				&lt;/struct&gt;<br>			&lt;/var&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661108">2</a> by DK
		posted on 1/6/2007 at 6:37 PM
		</div>
		<div class="comment_text"><p>theres currently a secunia vulnerability listed for the cross site scripting feature as well. It was entered on 12 Dec 06 and is said to allow you to get around the feature.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsecunia.com%2Fadvisories%2F23281%2F%3A1I8oZV_d8U153Ckn9Dg7U96rnnc&amp;cuid=3321886" rel="nofollow noopener" title="http://secunia.com/advisories/23281/">http://secunia.com/advisori...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661113">3</a> by Stefan
		posted on 1/7/2007 at 4:53 AM
		</div>
		<div class="comment_text"><p>Might this be what the latest hotfix (2006-11-30) fixes?<br>"64586  	Hot fix to resolve a possible cross-site scripting (XSS) vulnerability in ColdFusion's handling of forms."<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3Dkb400074%3AFw9ySi1iXjMdUJAzSDDRWrl1MB4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/knowledgebase/index.cfm?id=kb400074">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661118">4</a> by Ryan Everhart
		posted on 1/8/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for the post, I've been having this issue on my codeShare site (<a href="http://disq.us/url?url=http%3A%2F%2Fcodeshare.everfro.com%3Aw0g340sdRkrzX67bJ2BLPoTBhBc&amp;cuid=3321886" rel="nofollow noopener" title="http://codeshare.everfro.com">http://codeshare.everfro.com</a>, shameless plug).  When users submit code with JS in it the script tag gets replaced with InvalidTag. Hopefully this will help me with my issue.</p><p>Ryan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661116">5</a> by Hari
		posted on 5/21/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>Thanks for the post, it helped me to resolve the &lt;InvalidTag issue that I faced.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661117">6</a> by Brandon
		posted on 6/3/2008 at 10:47 PM
		</div>
		<div class="comment_text"><p>Is there any way to get around this?  I am working on a site that is on a shared server, and they have enabled it in the cf administrator (and won't allow it to be overridden in Application.cfc).  The client needs to be able to embed flash and object files, as well as edit meta tags, but those are all rendered "invalid".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661119">7</a> by Raymond Camden
		posted on 6/4/2008 at 12:33 AM
		</div>
		<div class="comment_text"><p>What do they mean they won't allow you? They will kick you off the server? Nothing in CF prevents you from turning it off in App.cfc.</p><p>Unfortunately I think you are out of luck. I'd change hosts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661120">8</a> by ColdFusion developer
		posted on 6/7/2008 at 2:22 PM
		</div>
		<div class="comment_text"><p>Hi guys - I have a workaround for the problem you're mentioning.</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.beetrootstreet.com%2Fblog%2Findex.cfm%2F2008%2F6%2F7%2FInvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection%3Arqb5jmcN1CjCKiVBU905IaYDrHE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.beetrootstreet.com/blog/index.cfm/2008/6/7/InvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection">http://www.beetrootstreet.c...</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.beetrootstreet.com%2Fblog%2Findex.cfm%2F2008%2F6%2F7%2FInvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection%3C%2Fa%3E%3AKaaYhNfPKjCQ0ssmrdohCzPekJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.beetrootstreet.com/blog/index.cfm/2008/6/7/InvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection</a>">http://www.beetrootstreet.c...</a></p><p>It basically uses onRequestEnd.cfm to re-write the SCRIPT tags. It can also be adapted to work in an Application.cfc environment.</p><p>Hope it helps.</p><p>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661122">9</a> by ColdFusion developer
		posted on 6/7/2008 at 2:22 PM
		</div>
		<div class="comment_text"><p>Seems the URL didn't insert properly. Try again..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.beetrootstreet.com%2Fblog%2Findex.cfm%2F2008%2F6%2F7%2FInvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection%3Arqb5jmcN1CjCKiVBU905IaYDrHE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.beetrootstreet.com/blog/index.cfm/2008/6/7/InvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection">http://www.beetrootstreet.c...</a></p><p>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661123">10</a> by Russ
		posted on 9/28/2009 at 5:58 PM
		</div>
		<div class="comment_text"><p>for some reason disabling it in the application.cfm doesn't work, you have to disable it in the cfadmin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661125">11</a> by Raymond Camden
		posted on 9/28/2009 at 6:01 PM
		</div>
		<div class="comment_text"><p>I believe you are wrong Russ. The CFAPP can always overrule the CF Admin. I'd check again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661132">12</a> by Russ
		posted on 9/28/2009 at 6:35 PM
		</div>
		<div class="comment_text"><p>My blogcfc has and always has had scriptrotect="none" in the cfapplication, it makes no difference, only disabling script protection in the cfadmin solves the problem. I will humor your telling me to check again and post the code here for you.</p><p>&lt;cfapplication name="#prefix#_blog_#blogname#" sessionManagement="true" loginStorage="session" scriptprotect="none"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661135">13</a> by Raymond Camden
		posted on 9/28/2009 at 6:38 PM
		</div>
		<div class="comment_text"><p>Is caching turned on in the CF Admin? I mean trusted cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661136">14</a> by TimD
		posted on 2/12/2010 at 5:54 AM
		</div>
		<div class="comment_text"><p>Thank you Thank you. I was stumped where this was coming from.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661139">15</a> by ThutMose
		posted on 3/4/2010 at 12:27 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I've run into the same issue that Russ did. Going to do some further testing, but with global script protect on the override in the cfapplication doesn't seem to get picked up or its not allowed. A little odd. I believe blogCFC comes out of the box that way. I've cleared the template cache just to be sure but the issue persists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661140">16</a> by Raymond Camden
		posted on 3/4/2010 at 12:29 AM
		</div>
		<div class="comment_text"><p>That seems odd. I've never seen the template get overridden by the server setting before. Please let me know what you find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661133">17</a> by Frank Gerritse
		posted on 5/3/2010 at 5:39 PM
		</div>
		<div class="comment_text"><p>Hi Raymond.</p><p>I have the same problem with this page <a href="http://disq.us/url?url=http%3A%2F%2Fwww.4sixsix.nl%2Fpage.cfm%2FFilmpjes%3ASYArZABnAIXBf-AuYFUujvNcwC8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.4sixsix.nl/page.cfm/Filmpjes">http://www.4sixsix.nl/page....</a><br>See the source of this page. I have put scriptprotect="false" in the application file but nothing happen. <br>I have e-mail the support desk of <a href="http://disq.us/url?url=http%3A%2F%2Fhostek.com%3ATIO_Pb2GQchMLhiMk1Fyw6JENuo&amp;cuid=3321886" rel="nofollow noopener" title="hostek.com">hostek.com</a> to see if there is something changed on the server.<br>This happend after an update of this page last week. Before that the youtube movies are show correct on the page ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661137">18</a> by Raymond Camden
		posted on 5/5/2010 at 12:43 AM
		</div>
		<div class="comment_text"><p>Sorry for the delay. Not sure what to tell you. Can you show me the code (ie, where you put in script protect). Also check to ensure your host doesn't have trusted cache turned on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661138">19</a> by anonymous
		posted on 7/7/2010 at 4:42 AM
		</div>
		<div class="comment_text"><p>Maybe help some folks who have been having trouble...</p><p>Depending on your version, the string "False" may NOT equivalent to the boolean operator False. The string "No", however, IS equivalent.</p><p>Trying writing:<br>scriptProtect = false</p><p>OR:<br>scriptProtect = "No"</p><p>Do not write:<br>scriptProtect = "false"</p><p>That might solve some of the problems for some of the people out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661134">20</a> by Bill
		posted on 2/8/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>I'd like to have the script protection on, but it messes up the HTML Editor in the CMS for my site. Any recommendations?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661142">21</a> by Raymond Camden
		posted on 2/8/2011 at 5:59 PM
		</div>
		<div class="comment_text"><p>Since you can only turn it off and on at the Application or server level,  you are out of luck. You would need to do the protection manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661143">22</a> by Bill
		posted on 2/8/2011 at 6:19 PM
		</div>
		<div class="comment_text"><p>Ah - I thought so. I don't suppose you have a handy 'how-to' posted somewhere do you? :-) Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661144">23</a> by Raymond Camden
		posted on 2/8/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>Perhaps: <a href="http://disq.us/url?url=http%3A%2F%2Fportcullis.riaforge.org%2F%3Ao016OVU9QgO4-N85M_FszWYyf8Q&amp;cuid=3321886" rel="nofollow noopener" title="http://portcullis.riaforge.org/">http://portcullis.riaforge....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1953268752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1953268752">24</a> by Brian Polackoff
		posted on 4/8/2015 at 6:40 PM
		</div>
		<div class="comment_text"><p>Raymond, Thanks as always for your posts!  Years later they are still helping folks out there like me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1953285440">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1953285440">25</a> (In reply to <a href="#c_1953268752">#24</a>) by Raymond Camden
		posted on 4/8/2015 at 6:48 PM
		</div>
		<div class="comment_text"><p>Glad to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4094265326">
	<div>
		<img src="https://disqus.com/api/users/avatars/carehart.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4094265326">26</a> (In reply to <a href="#c_1713661120">#8</a>) by Charlie Arehart
		posted on 9/13/2018 at 11:08 PM
		</div>
		<div class="comment_text"><p>In case anyone else may come across this in the future, the URL that was attempted to be shared above got botched. And then the beetrootstreet blog is no longer is working (as I checked it), but I found the post with his interesting solution here via the good ol' "internet wayback machine" (<a href="http://disq.us/url?url=http%3A%2F%2Farchive.org%3AqNv0_GhIOAcCKU-oy7OBeEuLA8g&amp;cuid=3321886" rel="nofollow noopener" title="archive.org">archive.org</a>), here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fweb.archive.org%2Fweb%2F20090223105908%2Fhttp%3A%2F%2Fwww.beetrootstreet.com%3A80%2Fblog%2Findex.cfm%2F2008%2F6%2F7%2FInvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection%3ApoZcQU3tHrySHVHmqRgmE75jZ5s&amp;cuid=3321886" rel="nofollow noopener" title="http://web.archive.org/web/20090223105908/http://www.beetrootstreet.com:80/blog/index.cfm/2008/6/7/InvalidTag-encountered-in-web-pages-using-ColdFusion-due-to-cross-site-scripting-protection">http://web.archive.org/web/...</a></p><p>I haven't tried the code, but I can confirm that like others above (even on CF2018), I could not seem to get the scriptprotect="none" (in application.cfm or cfc) to override the global Admin scriptprotect setting. Would love to find that better solution (or for Adobe to fix this). But until then perhaps the code in the blog post above may help someone (I just turned off the global scriptprotect, as I have FuseGuard and other WAFs protecting me).</p></div>
	</div>
</div>
		
<div class="comment" id="c_4095160453">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4095160453">27</a> (In reply to <a href="#c_4094265326">#26</a>) by Raymond Camden
		posted on 9/14/2018 at 1:48 PM
		</div>
		<div class="comment_text"><p>Thanks for the update Charlie.</p></div>
	</div>
</div>
		