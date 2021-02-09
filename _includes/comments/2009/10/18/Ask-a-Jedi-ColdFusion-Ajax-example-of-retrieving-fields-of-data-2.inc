
<div class="comment" id="c_1713719054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719054">1</a> by Dave
		posted on 10/20/2009 at 6:37 PM
		</div>
		<div class="comment_text"><p>How would you add a "Clear" button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719057">2</a> by Raymond Camden
		posted on 10/20/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>I'm working on a part 3 for the original questioner, I'll try to get that in as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719053">3</a> by Matt
		posted on 4/27/2011 at 1:18 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, I recently applied the CF9 9.0.1 patch to our servers and now have an error when using the above solution. the error returns a WDDX packet parse errorat line 1 column 1. Content is not allowed in prolog. I have looked up this error and it seems to point to the way the data is being returned. Have you come across the same issue with using this example on CFP version 9.0.1. <br>Thanks<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719050">4</a> by Raymond Camden
		posted on 4/27/2011 at 3:28 PM
		</div>
		<div class="comment_text"><p>When you use Firebug, or Chrome Dev Tools, what does the Ajax response look like?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719051">5</a> by Matt
		posted on 4/27/2011 at 4:42 PM
		</div>
		<div class="comment_text"><p>Hi Ray, i'm using Firebug and i don't really see anything that resembles the Ajax response. The code just looks like the Standard CF error html. I have expnaded the Ajax error line in the console and looked on the response tab and see the standard CF error html output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719052">6</a> by Raymond Camden
		posted on 4/27/2011 at 5:35 PM
		</div>
		<div class="comment_text"><p>You don't see _any_ Ajax response? There is definitely one there. Is this online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719056">7</a> by Frijoles_Jr
		posted on 8/3/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I can shed a little bit of light on Matt's issue:  The difference between 9.00 and 9.01 that breaks the cfc invocation when using a local cfc with access="remote", is the substitution of quotes for curly braces.  I've made a cfc available online on a dev server to illustrate the difference - let me know if you need to see it in it's page context or it is otherwise unavailable, I've just dropped our usual directory security on the cfc.</p><p>Works (the 9.0 version):<br>http://128.83.148.234/bookshopdoor/captcha.cfc?method=createCaptcha&amp;returnFormat=json&amp;argumentCollection=%7B%7D&amp;_cf_nodebug=true&amp;_cf_nocache=true&amp;_cf_rc=0</p><p>Doesn't work:<br>http://128.83.148.234/bookshopdoor/captcha.cfc?method=createCaptcha&amp;returnFormat=json&amp;argumentCollection=%22%22&amp;_cf_nodebug=true&amp;_cf_nocache=true&amp;_cf_rc=1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719058">8</a> by Raymond Camden
		posted on 8/5/2011 at 2:43 PM
		</div>
		<div class="comment_text"><p>So are you running the same code as me then? The request is what's bad - as you said.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719048">9</a> by Frijoles_Jr
		posted on 8/5/2011 at 3:58 PM
		</div>
		<div class="comment_text"><p>I don't know what all you're running, but the dev server where the request is bad is running Standard Edition 9.0.1 in a Windows Server 2003/IIS6 environment, and the production server where the same code works is running Standard Edition 9.0.0 in a Windows Server 2008/IIS7 environment.  I've experienced the same issue with and without cfAjax on the page, and am not using any js libraries that don't come with CF out of the box.</p><p>The funny thing about this is the same function works in 9.0.1 when invoked on load, via &amp;lt;cfset foo=CreateObject("component","captcha").createCaptcha()&amp;gt;<br>but it fails in 9.0.1 when invoked via a JS function, like so:<br>&amp;lt;cfajaxproxy cfc="captcha" jclassname="cfimageCaptcha"&amp;gt;<br>&amp;lt;script language="Javascript"&amp;gt;<br>var refreshCaptcha = function() {<br>var jsCaptcha = new cfimageCaptcha();<br>jsCaptcha.setCallbackHandler(populateCaptcha);<br>jsCaptcha.createCaptcha();<br>}<br>&amp;lt;/script&amp;gt;</p><p>Spark any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719049">10</a> by Raymond Camden
		posted on 8/7/2011 at 6:14 PM
		</div>
		<div class="comment_text"><p>Not off hand - if you can share _all_ the code via pastebin, and if I can hit it remotely to test, I can try. Or - if you can make a small folder that demonstrates that issue and email me that folder so I can run it here, I can try that too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719055">11</a> by Richard Cook
		posted on 8/13/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>We just upgraded our dev server and getting the same issue.  Any updates on this?  Ray, if you need to get in, I can get you into our site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719088">12</a> by Raymond Camden
		posted on 8/13/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>This would normally be a paid engagement for me, but if you want to ping me via email I can take a quick look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719110">13</a> by Ted Johnson
		posted on 10/20/2011 at 2:16 AM
		</div>
		<div class="comment_text"><p>Anyone find a solution? Same problem... code was working perfectly with 9.0 and this error on 9.01. Just a simple AJAX call to a CFC. I guess I need to figure out how to downgrade to 9.0 if AJAX is broken with 9.01.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719103">14</a> by Raymond Camden
		posted on 10/20/2011 at 5:51 AM
		</div>
		<div class="comment_text"><p>What do you see with Firebug or Chrome Dev Tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719098">15</a> by Ted Johnson
		posted on 10/20/2011 at 8:26 AM
		</div>
		<div class="comment_text"><p>I ended up reverting to CF 9.0 which fixed the problem and AJAX is now working again. I will try and set up a simple AJAX test on a CF 9.01 server so I can reproduce the error. It was a very simple call to a CFC and like Frijoles said, the issue is CF 9.01 is using the wrong characters to escape quotes. Look at his examples... one is the way 9.0 escapes it, and the other is the way 9.01 does it. Those are generated by the coldfusion AJAX built it stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719100">16</a> by AH
		posted on 3/21/2012 at 9:36 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>We are having the same issue of CF 9.0.1 breaking the CF Ajax Tag.</p><p>Is there any solution for this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719104">17</a> by Ted Johnson
		posted on 3/21/2012 at 10:38 PM
		</div>
		<div class="comment_text"><p>No solution found by me yet. Either you have to revert to CF 9.0 or stop using CFAJAX. On one site, I started using the JQuery AJAX and that works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719096">18</a> by AH
		posted on 3/22/2012 at 4:47 PM
		</div>
		<div class="comment_text"><p>Thanks Ted for your response. Can you please show code sample of how to call JQuery and AJAX?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719108">19</a> by Matt
		posted on 3/22/2012 at 5:21 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FTutorials%3AGetting_Started_with_jQuery%3A8R-r3hA3hDfCaHpHrkf00q_T92o&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Tutorials:Getting_Started_with_jQuery">http://docs.jquery.com/Tuto...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719105">20</a> by Steve Hammonds
		posted on 9/13/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>We are having the same problem after upgrading to CF 9.0.1.  Clearing the user's temporary internet cache makes the problem go away.  I theorized that the user was loading all the Ajax JS generated by 9.0 from cache from a previous visit.  But, I am unable to resolve the problem by forcing refresh of the page by using no cache headers.  I also turned off Caching on the CFIDE folder in IIS and it still doesn't fix the problem.  Short of getting every user to empty their cache I can't find a workable solution.  It's been going on for several weeks now, maybe I am barking up the wrong tree.  I KNOW deleting temporary internet files works.  Just not sure why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719097">21</a> by Raymond Camden
		posted on 9/13/2012 at 10:05 PM
		</div>
		<div class="comment_text"><p>@Steve: The same problem as who? I don't believe the earlier commenters said anything cache related.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719095">22</a> by Steve
		posted on 9/13/2012 at 10:09 PM
		</div>
		<div class="comment_text"><p>Same problem as Matt, Ted, Ah.  Ajax calls not working after updating to 9.0.1.  We get the error "WDDX packet parse error at line 1 column 1. Content is not allowed in prolog" in the exception log.</p><p>No one else mentioned cache problems, but I have found that having the client delete their temporary internet files fixes the issue.  I just need a better solution that can be applied server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719102">23</a> by Raymond Camden
		posted on 9/13/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>WDDX parse seems to imply it isn't using returnformat=json. I believe I asked this with others but didn't get a response - but can you put your demo online so I can run a test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719118">24</a> by Steve
		posted on 9/13/2012 at 11:41 PM
		</div>
		<div class="comment_text"><p>I am behind a firewall here.  It is impossible to duplicate because I think the client must have previously visted the old page (CF 9.0 version) and cached the results.  I can't duplicate it myself, but I have clients still getting the error.  I'm going to have to find a client getting the error and debug on their machine.</p><p>I don't really expect you to try to solve this, I just hoped you were aware of a solution from the previous posts.  I am going to post this in case it helps someone else.</p><p>One thing I've noted.  The failed ajax calls are actually a cfajaxproxy invocation of a cfc method.  When you use CFAjaxproxy you get some javascript generated on the page:</p><p>ColdFusion.AjaxProxy.invoke(this, "incHitCount","6F6FA08F87A09D12A9C38D", {photoid:photoid});</p><p>The call that works (after deleting temp internet files) passes these parameters:<br>_cf_ajaxproxytoken	6F6FA08F87A09D12A9C38D<br>_cf_clientid	D91FD3EB7398C1AA0521AAB6E57A2BC8<br>_cf_nocache	true<br>_cf_nodebug	true<br>_cf_rc	5<br>argumentCollection	{"photoid":"20588"}<br>method	incHitCount<br>returnFormat	json</p><p>The failed call passes these url parameters:<br>_cf_clientid	1EB45B4DD5168A7956A672D132B3609A <br>_cf_nocache	true <br>_cf_nodebug	true <br>_cf_rc	0 <br>argumentCollection	"71CF9B238E96AB51A1D9C7" <br>method	incHitCount <br>returnFormat	json</p><p>So my theory is that the client has cached the javascript that was generated by CFAjaxproxy for CF9 and the arguments generated don't work for the new version because they are in a different order or have different parameters.</p><p>Based on this I thought adding the proper headers would force a reload of the page and fix the problem, but for some reason it didn't.  If I find the answer I'll post it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719099">25</a> by Ted Johnson
		posted on 9/13/2012 at 11:45 PM
		</div>
		<div class="comment_text"><p>I don't think the issue here is old JS being cached. Sadly, the only real solution to this problem is to not use CFAJAX. I've switched to the JQuery AJAX solution instead. Very frustrating that it simply doesn't work, especially since it worked fine with the previous version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719109">26</a> by Raymond Camden
		posted on 9/14/2012 at 12:17 AM
		</div>
		<div class="comment_text"><p>@Steve: Truly weird. You would think you could use IIS or Apache settings though to set a no-cache header for those directories. Would that work?</p><p>@Ted: I don't think it is fair to say it doesn't work. It does work. The issue is older JS files being cached in the user's machines. This will not be a universal problem at all, but only impact those with cached copies of the files. I believe checking with the web server to reset the cache is a possible solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719112">27</a> by Steve
		posted on 9/14/2012 at 12:33 AM
		</div>
		<div class="comment_text"><p>Either that or I am just wrong.  I'll take another look.  Maybe I screwed something up the first time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719094">28</a> by frijoles_jr
		posted on 9/15/2012 at 12:23 AM
		</div>
		<div class="comment_text"><p>I noticed the recent activity on this thread and thought I would give an update and solution that worked for me, for the benefit of Matt and Ted (Steve seems to be experiencing a different issue, since the the cache wasn't relevant to the issue I was experiencing.</p><p>After stepping through the issue I found that the root cause was an extra parameter in the script generated for the AjaxProxy invoke function:</p><p>var _cf_captcha=ColdFusion.AjaxProxy.init('/includes/captcha.cfc','cfimageCaptcha');<br>_cf_captcha.prototype.createCaptcha=function(id) { return ColdFusion.AjaxProxy.invoke(this, "createCaptcha","", {id:id});};</p><p>versus the 9.0 version which works,</p><p>var _cf_captcha=ColdFusion.AjaxProxy.init('/includes/captcha.cfc','cfimageCaptcha');<br>_cf_captcha.prototype.createCaptcha=function(id) { return ColdFusion.AjaxProxy.invoke(this, "createCaptcha", {id:id});};</p><p>This shifted the content of the _45e variable in cfajax.js over to _45f, resulting in an error.</p><p>So I did a bit of googling over extra arguments in the cfajaxproxy invoke, and turned up the following at Andy Scott's site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andyscott.id.au%2F2010%2F12%2F13%2FProblems-with-CFAjaxProxy-and-migrating-over-to-ColdFusion-9-what-you-need-to-know%3AAtrVsm5MM2ThlEeobrcmrkksoYM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andyscott.id.au/2010/12/13/Problems-with-CFAjaxProxy-and-migrating-over-to-ColdFusion-9-what-you-need-to-know">http://www.andyscott.id.au/...</a></p><p>His solution solved my issue , and if there are consequences, I haven't paid them yet, so consider it a good fix.  Your mileage may vary</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719106">29</a> by Steve
		posted on 9/15/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>I found Andy's blog entry as well.  That's what pointed me in the direction of cached versions of cfajax.js.</p><p>I think I can report that my problem has been resolved by telling IIS not to cache JS files in the /CFIDE/scripts/ajax/package folder.  Since I made that change this morning there have been no further errors logged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719113">30</a> by John
		posted on 10/11/2012 at 5:13 PM
		</div>
		<div class="comment_text"><p>I'm getting the same "WDDX packet parse error" on CF 9.0.1 but the cfajax works on CF 9.0. It appears that the argumemtCollection is getting encoded (viewed via firebug), but I haven't found a work around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719114">31</a> by Raymond Camden
		posted on 10/11/2012 at 6:28 PM
		</div>
		<div class="comment_text"><p>Best I can recommend is switching to a pure jQuery solution instead. You can also open a tech support request too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719101">32</a> by albert
		posted on 10/15/2012 at 4:21 PM
		</div>
		<div class="comment_text"><p>I'm using this function to take data from grid column,<br>but I have javascript error if grid column value is null</p><p>function showWorkloadForm(){<br>		var wldID = ColdFusion.getElementValue("workloadGrid","workloadGridForm","SCRN_NUM");<br>		//alert(wldID);<br>		var CTG = ColdFusion.getElementValue("workloadGrid","workloadGridForm","CTG");<br>		var TFI = ColdFusion.getElementValue("workloadGrid","workloadGridForm","TFI");<br>		/*var PPEND = ColdFusion.getElementValue("workloadGrid","workloadGridForm","PPEND");<br>		if(PPEND == null){<br>			alert("PPEND NULL");<br>		}<br>		alert(PPEND);*/<br>		var P1 = ColdFusion.getElementValue ("P1");<br>		var P2 = ColdFusion.getElementValue ("P2");<br>		var DT = ColdFusion.getElementValue ("DT");<br>		var PDT = ColdFusion.getElementValue ("PDT");<br>		var url = "workloadForm.cfm?wldID="+wldID+"&amp;P1="+P1+"&amp;P2="+P2+"&amp;DT="+DT+"&amp;PDT="+PDT;<br>		//alert(url);<br>		ColdFusion.navigate(url, "workloadWin");<br>		<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>("workloadWin");<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719111">33</a> by Raymond Camden
		posted on 10/16/2012 at 11:37 AM
		</div>
		<div class="comment_text"><p>You should be able to use JS to check if the value is null.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719116">34</a> by Dan
		posted on 10/25/2012 at 12:46 AM
		</div>
		<div class="comment_text"><p>This has been a particularly big problem for us.  As Steve pointed out, browser cache is against us here, at least in my case.  I was able to find a browser that exhibited the problems and directly correlate it to our debug reports  "WDDX packet parse error at line 1 column 1. Content is not allowed in prolog".  We were able to observe an improper argumentCollection as well as the wrong contents for cfajax.js.</p><p>The fact of the matter is, browsers are stubbornly ignoring modified resources and have been for several generations.  We've had to employ a cache prevention scheme to get clients to grab updated resource content.  Similar to <a href="http://disq.us/url?url=http%3A%2F%2Fdavidwalsh.name%2Fprevent-cache%3Am0_wvjd6zJSR6Iry6Umw_XiDDBU&amp;cuid=3321886" rel="nofollow noopener" title="http://davidwalsh.name/prevent-cache">http://davidwalsh.name/prev...</a>, but with a CF twist, since we can use the actual timestamp of the resource by calling GetFileInfo().  This helps the client by allowing them to maintain a cache unless we've actually modified something.</p><p>Back to the point Steve was making, cfajax.js was changed in 9.0.1 as well as in 10.  We recently updated our site from 9.x to 10.x and immediately started receiving the WDDX problem.  It took a fair amount of time to understand the cause.  After that, it took a fair amount of time to understand what it was doing to our visitors.  After that, it took a fair amount of time to figure out a solution that could help some of our visitors.  We utilize a lot of &lt;cfajaxproxy ... /&gt; and converting to jQuery wasn't an option.  Also, Adobe should be doing a better job with such things as this.  After all, who, these days, isn't aware of the heavy caching philosophies of the modern browser?</p><p>A solution that has helped, but has not solved the problem was to dynamically load a second copy of cfajax.js with a moc timestamp appended to it.  In order for this to work, I also have to destroy the Coldfusion object aka "delete Coldfusion" and then load cfajax,js, but that is not very safe.</p><p>@John<br> The argumentCollection isn't getting encoded, the call back to the CFC is passing a wrong argumentCollection altogether because the  callback method inside cfajax.js has changed.  Adobe didn't think about the consequences of reusing method names, esp. since they obfuscate their src, problems were undoubtedly going to arise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719115">35</a> by Steve
		posted on 10/25/2012 at 12:56 AM
		</div>
		<div class="comment_text"><p>Since reporting that my problem was resolved by having IIS pass no cache headers, I find that a few clients still have the problem.  Your idea of manually loading a cfajax.js with a timestamp and deleting the Coldfusion object sounds good.  Why is it not very 'safe'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719107">36</a> by Dan
		posted on 10/25/2012 at 8:52 PM
		</div>
		<div class="comment_text"><p>I couldn't get IIS to behave for me, or rather the "stuck" browser never really made the call home to that resource and therefore it never received the new response headers either.</p><p>The "not safe" thing I ran into was a race condition where in some cases during the time between deleting the Coldfusion object and re-fetching the cfajax.js, other components in the page were expecting to find the {CF} object and got sadly disappointed.  CF gets to include its resources first in line and then immediately begins to init() things by calling ColdFusion.AjaxProxy.init().</p><p>I still believe this is hackable to a reasonable solution somehow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719126">37</a> by Matt
		posted on 10/31/2012 at 12:00 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>May I ask which version you have ran your code on?<br>Just intrigued why you didnt see the same problem that I experienced.<br>Maybe there something different in your setup compared to mine.</p><p>Thanks</p><p>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719127">38</a> by Raymond Camden
		posted on 10/31/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>Now I'm running 10. At the time of this blog entry it would have been 9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719124">39</a> by avejidah
		posted on 12/18/2012 at 1:42 AM
		</div>
		<div class="comment_text"><p>Arrrrg, same stupid caching issue.  We use cfajaxproxy and our clients are getting the same WDDX error.</p><p>First thing I tried (prior to googleing and finding this page) was to clear my cache, which of course resolved the issue for me.  Now we have the issue that tons of our clients are getting this WDDX issue, and we cannot find a solution.  I added HTTP headers to prevent caching in IIS, but - although I do see the response headers - that is not working for our clients.  My understanding is that what Dan said is correct: "[...] browser never really made the call home to that resource and therefore it never received the new response headers either."</p><p>Can anyone think of any method of resolving this quickly?  We use jQuery for all of our ajax now, but we still have a very large site with a ton of legacy &lt;cfajaxproxy&gt; calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719129">40</a> by avejidah
		posted on 12/19/2012 at 12:48 AM
		</div>
		<div class="comment_text"><p>For any other poor soul experiencing this issue, we did the following to fix it:</p><p>1) Added no-cache headers to the /CFIDE/scripts/ directory in IIS (Cache-Control: no-cache, no-store; Pragma: no-cache; Expires: `old date here`).<br>2) Renamed the component which was being used in the cfajaxproxy call.<br>3) Made a copy of /CFIDE/scripts/ (we named it /CFIDE/scripts2/).  In CF Admin-&gt;Settings, changed ScriptSrc directory to /CFIDE/scripts2/.</p><p>Seems like the second one is what actually fixed the issue, but those were the steps we took.  Our helpdesk is no longer receiving a flood of emails, so we feel that the issue is now resolved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719125">41</a> by Raymond Camden
		posted on 12/19/2012 at 12:50 AM
		</div>
		<div class="comment_text"><p>Thanks for posting that Avejidah!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2122023771">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_5HurjM2KQS.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2122023771">42</a> by hprice
		posted on 7/7/2015 at 7:31 PM
		</div>
		<div class="comment_text"><p>I am now having this issue after upgrading to CF11 Update #5 on Win2008 R2 IIS 7.5.</p><p>I tried the 3 steps mentioned by @avejidah and also adding meta tags to no avail.</p><p>Has anyone had this problem when upgrading to CF11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2533551894">
	<div>
		<img src="https://disqus.com/api/users/avatars/deepinthecode.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2533551894">43</a> (In reply to <a href="#c_2122023771">#42</a>) by deepinthecode
		posted on 2/24/2016 at 10:43 PM
		</div>
		<div class="comment_text"><p>Yes! I am - were you able to solve this issue? And if so, what did you do? Thanks!</p></div>
	</div>
</div>
		