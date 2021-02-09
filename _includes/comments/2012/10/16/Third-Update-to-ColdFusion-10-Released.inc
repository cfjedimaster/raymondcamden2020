
<div class="comment" id="c_1713743422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743422">1</a> by Jesse Carlton
		posted on 10/17/2012 at 5:47 PM
		</div>
		<div class="comment_text"><p>There is a pretty serious bug with this update.  On every restart of the service it looses ALL scheduled tasks.  I tested it on Windows 2008 R2 x64.  It throws an error:Enable Cluster setup (ColdFusion administrator &gt; Debugging &amp; Logging &gt; Scheduler Tasks).  I didn't use cluster in the tasks.  I'll install mysql and setup a database to allow enabling cluster setup and see if that fixes anything.<br>See adobe bugbase #3348026.</p><p>From exception.log it looks like there is some documentService error as well: Platform, Locale, and Platform Name must not be null</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743421">2</a> by Raymond Camden
		posted on 10/17/2012 at 5:54 PM
		</div>
		<div class="comment_text"><p>Yep, we know, and a fix is coming very quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743423">3</a> by Jesse Carlton
		posted on 10/17/2012 at 6:09 PM
		</div>
		<div class="comment_text"><p>That's great!</p><p>Also for reference, setting up cluster setup in the sched tasks page got rid of the exception and stops the tasks from getting deleted.  It doesn't bring back the original tasks though.  might be a useful work around for some people.</p><p>It looks like the "Platform, Locale, and Platform Name must not be null" exception is unrelated.  It's in my log from the first install startup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743424">4</a> by Raymond Camden
		posted on 10/17/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>I'll ping Rakshith about this. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743425">5</a> by Jeremy Prevost
		posted on 10/17/2012 at 7:05 PM
		</div>
		<div class="comment_text"><p>Ray, I know it isn't your call, but you need to bug them to pull the update entirely immediately until they fix it.</p><p>Having more people continue to experience all the bugs with this update (not working at all for some, scheduled tasks deleted for seemingly everyone) is not cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743427">6</a> by Jeremy Prevost
		posted on 10/17/2012 at 7:05 PM
		</div>
		<div class="comment_text"><p>Also, I didn't mean "need". I meant "please" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743429">7</a> by Raymond Camden
		posted on 10/17/2012 at 7:09 PM
		</div>
		<div class="comment_text"><p>Heh, you think I have that kind of power? Only in my imagination. ;)</p><p>Seriously though - they are working on it. It should be corrected very soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743432">8</a> by Aaron Neff
		posted on 10/17/2012 at 11:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've filed #3348487 (Updaters should always create a .car file).</p><p>If Updaters always created a .car file, then users of Update 3 would've been more easily able to restore back their scheduled tasks.</p><p>I understand users can create this .car file manually (and via special workaround in Standard Edition) but I feel this should be done automatically.</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743428">9</a> by Jesse Carlton
		posted on 11/2/2012 at 7:16 PM
		</div>
		<div class="comment_text"><p>the new update 4 is out today</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743430">10</a> by Raymond Camden
		posted on 11/2/2012 at 7:19 PM
		</div>
		<div class="comment_text"><p>Yep, thanks for posting a comment though - will remind everyone here. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743431">11</a> by Jesse Carlton
		posted on 12/6/2013 at 12:33 AM
		</div>
		<div class="comment_text"><p>Not related to this issue, but this page comes up when you search for "Platform, Locale, and Platform Name must not be null" :<br>That message is caused by coldfusion's internal font management and PDF utilities.  it will break things like cfpdfform due to fonts that do not have the expected metadata.<br>This cf code will detect any bad fonts that are installed and list them for you:</p><p>&lt;cfset fontobj = createobject("java","com.adobe.fontengine.fontmanagement.FontLoader")&gt;<br>&lt;cfdirectory action="list" directory="c:\windows\fonts" name="fontdir"&gt;</p><p>&lt;table border="1" style="border-collapse:collapse"&gt;<br>  &lt;tr&gt;<br>    &lt;th&gt;Font Name:&lt;/th&gt;<br>    &lt;th&gt;Error&lt;/th&gt;<br>  &lt;/tr&gt;<br>  &lt;cfloop query="fontdir"&gt;<br>  &lt;cftry&gt;<br>    &lt;cfset loaded = fontobj.load(createobject("java","java.net.URL").init("file:///C|/windows/fonts/#<a href="http://disq.us/url?url=http%3A%2F%2Ffontdir.name%3A_78gkjINs28Xlo5pgaDvWZsry2I&amp;cuid=3321886" rel="nofollow noopener" title="fontdir.name">fontdir.name</a>#"))&gt;<br>    &lt;cfif arraylen(loaded) gt 0&gt;<br>      &lt;cfset dummy="#loaded[1].getPlatformFontDescription()[1].toString()#" &gt;<br>    &lt;/cfif&gt;<br>    &lt;cfcatch&gt;<br>      &lt;cfif findnocase("platform",cfcatch.message)&gt;<br>        &lt;tr&gt;<br>          &lt;td&gt;&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Ffontdir.name%3A_78gkjINs28Xlo5pgaDvWZsry2I&amp;cuid=3321886" rel="nofollow noopener" title="fontdir.name">fontdir.name</a>#&lt;/cfoutput&gt;&lt;/td&gt;<br>          &lt;td&gt;&lt;cfoutput&gt;#cfcatch.message#&lt;/cfoutput&gt;&lt;/td&gt;<br>        &lt;/tr&gt;<br>      &lt;/cfif&gt;<br>    &lt;/cfcatch&gt;<br>  &lt;/cftry&gt;<br>  &lt;/cfloop&gt;<br>&lt;/table&gt;</p><p>delete the fonts and any calls that were failing should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743433">12</a> by Raymond Camden
		posted on 12/6/2013 at 1:57 AM
		</div>
		<div class="comment_text"><p>Thanks Jesse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713005754">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeffregan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713005754">13</a> by DigitheadRex
		posted on 11/26/2014 at 1:57 AM
		</div>
		<div class="comment_text"><p>I'm getting the exact same exception from ColdFusion11 on Yosemite 10.10.1 with Java 1.8.0_25. Can you advise?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713039993">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713039993">14</a> by Raymond Camden
		posted on 11/26/2014 at 2:30 AM
		</div>
		<div class="comment_text"><p>Eh? Did you post this on the wrong post?</p></div>
	</div>
</div>
		