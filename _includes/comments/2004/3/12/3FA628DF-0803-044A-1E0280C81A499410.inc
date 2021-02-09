
<div class="comment" id="c_1713615471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615471">1</a> by BertD
		posted on 3/12/2004 at 9:06 PM
		</div>
		<div class="comment_text"><p>maybe you should tell Mr Forta - I hit this bug when using FeedDemon to view his blog<br>:)<br>Cheers<br>Bert</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615476">2</a> by Sami Hoda
		posted on 9/27/2005 at 12:13 AM
		</div>
		<div class="comment_text"><p>I am getting this error on a installation of CF7. Anyone know if it survived to CF7?</p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615479">3</a> by Eric
		posted on 5/19/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>I'm getting this error in CF7. Does anyone know if the fix is still applicable to ie7? Or is it something different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615478">4</a> by Erik C
		posted on 8/27/2008 at 11:47 PM
		</div>
		<div class="comment_text"><p>I still get this error on CF 8.01.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615475">5</a> by dan
		posted on 10/2/2008 at 12:14 AM
		</div>
		<div class="comment_text"><p>Try: <br><a href="http://disq.us/url?url=http%3A%2F%2Ftech.groups.yahoo.com%2Fgroup%2Fjava_coldfusion_hacks%2Fmessage%2F372%3AjbrDDJkinZMtZpOCiNJc8IwRpYg&amp;cuid=3321886" rel="nofollow noopener" title="http://tech.groups.yahoo.com/group/java_coldfusion_hacks/message/372">http://tech.groups.yahoo.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615482">6</a> by Tim
		posted on 10/20/2008 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Dan -- what does that post say -- Id rather not join yet another group to see the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615480">7</a> by Scott Fitchet
		posted on 9/22/2009 at 6:05 PM
		</div>
		<div class="comment_text"><p>Saw this error for the first time today (version 7 service). I was able to get past the error by temporarily changing my sessiontimeout to 0. After the next request I then switched back to the default timeout setting with no problems (yet).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615474">8</a> by ColdFusion development
		posted on 1/4/2010 at 3:10 PM
		</div>
		<div class="comment_text"><p>Scott, you can simply clear your cookies and that will have the same effect as you'll be given a new CFID etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615473">9</a> by ColdFusion development
		posted on 1/4/2010 at 3:17 PM
		</div>
		<div class="comment_text"><p>Just added this to the OnError section of my application.cfc and it will clear cookies automatically.</p><p>&lt;cfif isDefined("except.message")&gt;<br>					&lt;cfif except.message is "Session is invalid"&gt;<br>						&lt;cfcontent reset="yes"&gt;<br>						&lt;cfset tx = structclear(cookie)&gt;						<br>						&lt;h3&gt;Your session has timed out &lt;cfoutput&gt;#now()#&lt;/cfoutput&gt;. &lt;a href="/"&gt;Click here or wait 1 second&lt;/a&gt;&lt;/h3&gt;<br>						&lt;script type="text/javascript"&gt;<br>						window.setTimeout(redir, 2000);<br>						function redir()<br>						{<br>							window.location = '/?cb=&lt;cfoutput&gt;#getTickCount()#&lt;/cfoutput&gt;';<br>						}<br>						&lt;/script&gt;<br>						&lt;cfabort&gt;<br>					&lt;/cfif&gt;<br>				&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615472">10</a> by thangapandyan
		posted on 6/17/2010 at 11:19 AM
		</div>
		<div class="comment_text"><p>I have an error "session is invalid "while running the website , <br>i haven't use any application.cfc file in my application ,but i using application.cfm file many places in my application.can u suggest me,where i can place the following code to avoid <br>session error in application,</p><p>&lt;cfif isDefined("except.message")&gt;<br>               &lt;cfif except.message is "Session is invalid"&gt;<br>                  &lt;cfcontent reset="yes"&gt;<br>                  &lt;cfset tx = structclear(cookie)&gt;                  <br>                  &lt;h3&gt;Your session has timed out &lt;cfoutput&gt;#now()#&lt;/cfoutput&gt;. &lt;a href="/"&gt;Click here or wait 1 second&lt;/a&gt;&lt;/h3&gt;<br>                  &lt;script type="text/javascript"&gt;<br>                  window.setTimeout(redir, 2000);<br>                  function redir()<br>                  {<br>                     window.location = '/?cb=&lt;cfoutput&gt;#getTickCount()#&lt;/cfoutput&gt;';<br>                  }<br>                  &lt;/script&gt;<br>                  &lt;cfabort&gt;<br>               &lt;/cfif&gt;<br>            &lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615477">11</a> by thangapandyan
		posted on 6/17/2010 at 11:21 AM
		</div>
		<div class="comment_text"><p>I have an error "session is invalid "while running the website , <br>i haven't use any application.cfc file in my application ,but i using application.cfm file many places in my application.can u suggest me,where i can place the following code to avoid <br>session error in application,</p><p>&lt;cfif isDefined("except.message")&gt;<br>               &lt;cfif except.message is "Session is invalid"&gt;<br>                  &lt;cfcontent reset="yes"&gt;<br>                  &lt;cfset tx = structclear(cookie)&gt;                  <br>                  &lt;h3&gt;Your session has timed out &lt;cfoutput&gt;#now()#&lt;/cfoutput&gt;. &lt;a href="/"&gt;Click here or wait 1 second&lt;/a&gt;&lt;/h3&gt;<br>                  &lt;script type="text/javascript"&gt;<br>                  window.setTimeout(redir, 2000);<br>                  function redir()<br>                  {<br>                     window.location = '/?cb=&lt;cfoutput&gt;#getTickCount()#&lt;/cfoutput&gt;';<br>                  }<br>                  &lt;/script&gt;<br>                  &lt;cfabort&gt;<br>               &lt;/cfif&gt;<br>            &lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615481">12</a> by Seun Ojo
		posted on 6/21/2010 at 2:21 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Nice one on for your suggestion; the following worked for me:</p><p>		&lt;cfif isDefined("exception.message")&gt;<br>		   &lt;cfif exception.message is "Session is invalid"&gt;<br>              &lt;cfcontent reset="yes"&gt;<br>				  &lt;cfset tx = structclear(cookie)&gt;                  <br>                  &lt;script type="text/javascript"&gt;<br>                      window.setTimeout(redir, 100);<br>                      function redir()<br>                      {<br>                         window.location = '/app_root_folder?reset=&lt;cfoutput&gt;#getTickCount()#&lt;/cfoutput&gt;';<br>                      }<br>                  &lt;/script&gt;<br>              	  &lt;cfabort&gt;   <br>           &lt;/cfif&gt;<br>        &lt;/cfif&gt;</p><p>Also, note the use of "exception" as against the "except" in the earlier post.</p><p>Thanks everyone.</p></div>
	</div>
</div>
		