
<div class="comment" id="c_1713672376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672376">1</a> by Shane Zehnder
		posted on 9/26/2007 at 1:54 AM
		</div>
		<div class="comment_text"><p>I think it helps a lot, although it does open you up to a flood of e-mails.  It is a good learning experience to have your code reviewed by someone who quite literally "wrote the book."  It is one thing to say you shouldn't do this.  It comes in handy to see WHY you should (or should not) do something in a particular way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672380">2</a> by Terrence Ryan
		posted on 9/26/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>That type of commentary looks very familiar. Good to know I've been doing it right.</p><p>Are there any tools you use to make reviewing code a little easier?  I use Jupiter currently, but I'm always looking for something better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672378">3</a> by Raymond Camden
		posted on 9/26/2007 at 1:57 AM
		</div>
		<div class="comment_text"><p>I'm a bit ashamed to admit it - it never even occurred to me there may be tools to review code. I just use my editor. I have heard of stuff from CompuWare that does automatic reviews.</p><p>Do you have a URL for Jupiter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672379">4</a> by Geoff
		posted on 9/26/2007 at 2:12 AM
		</div>
		<div class="comment_text"><p>Ray - my apologies... you're going to hate me going on about &lt;cflocation&gt;, but this:</p><p>&lt;CFIF CGI.SERVER_NAME IS NOT "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="www.cnn.com">www.cnn.com</a>"&gt;<br>         &lt;CFLOCATION url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>#CGI.SCRIPT_NAME#" addtoken="no"&gt;<br>      &lt;/CFIF&gt;</p><p>Should be (if you're on CF8 - if not, you'll need to do some cfheader stuff):</p><p>&lt;CFIF CGI.SERVER_NAME IS NOT "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="www.cnn.com">www.cnn.com</a>"&gt;<br>         &lt;CFLOCATION url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>#CGI.SCRIPT_NAME#" addtoken="no" statuscode="301"&gt;<br>      &lt;/CFIF&gt;</p><p>I can guess what they're trying to do; that is to avoid duplicate urls:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcnn.com%2Fwhatever.cfm%3AxTaBREBTqsPzK6ttXzVe_6nq6HU&amp;cuid=3321886" rel="nofollow noopener" title="cnn.com/whatever.cfm">cnn.com/whatever.cfm</a><br>and<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%2Fwhatever.cfm%3AIDevgCWp_mnjqsaEGck32tAfsco&amp;cuid=3321886" rel="nofollow noopener" title="www.cnn.com/whatever.cfm">www.cnn.com/whatever.cfm</a></p><p>But you need a 301 redirect to achieve this - a 302 tells a search engine that *both* urls exist.</p><p>Sorry! I'll not mention cflocation again! I promise...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672381">5</a> by Terrence Ryan
		posted on 9/26/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>Here's a brief note I wrote about it back in March. (Shameless self promotion. )<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.numtopia.com%2Fterry%2Fblog%2Farchives%2F2007%2F03%2Fjupiter_rising.cfm%3AdD38uGuYtRukCWnIgblGZ9jF8cc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.numtopia.com/terry/blog/archives/2007/03/jupiter_rising.cfm">http://www.numtopia.com/ter...</a></p><p>But you can download it at <a href="http://disq.us/url?url=http%3A%2F%2Fcsdl.ics.hawaii.edu%2FTools%2FJupiter%2F%3ATASuqnERDLPSooI0V_OGGMPw4eY&amp;cuid=3321886" rel="nofollow noopener" title="http://csdl.ics.hawaii.edu/Tools/Jupiter/">http://csdl.ics.hawaii.edu/...</a></p><p>It might not be a good fit for you, but when you're doing a few reviews a week, it does a good job of saving you time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672387">6</a> by Raymond Camden
		posted on 9/26/2007 at 2:16 AM
		</div>
		<div class="comment_text"><p>@Geoff - no, not at all. I agree and that is a good point!</p><p>Thanks for the link Terrence.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672386">7</a> by Martin
		posted on 9/26/2007 at 3:10 AM
		</div>
		<div class="comment_text"><p>Just a thought on the cflocation bit. What is it doing in onApplicationStart? This will only run when the application is initialised. It's not going to achieve much in there is it? Or am I missing the point completely?</p><p>And Ray, yes I like the code review idea. I think as developers, we all secretely love the more "cody" posts ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672385">8</a> by Raymond Camden
		posted on 9/26/2007 at 5:56 AM
		</div>
		<div class="comment_text"><p>Martin - darn good catch! Boy I'm glad I blogged this now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672389">9</a> by Mike Rankin
		posted on 9/26/2007 at 6:28 AM
		</div>
		<div class="comment_text"><p>Ray, didn't you run a contest a while back for an automated code review application?  I seem to remember something called CodeCop that looked promising.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672392">10</a> by Raymond Camden
		posted on 9/26/2007 at 6:33 AM
		</div>
		<div class="comment_text"><p>Yep, I did. I got 3 entries I think - all of which were pretty darn interesting. I'm pretty sure one of them is up on RIAForge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672390">11</a> by johnb
		posted on 9/26/2007 at 11:46 AM
		</div>
		<div class="comment_text"><p>With that cflocation, it's pretty easy to write an ISAPI_Rewrite (IIS) or Mod_rewrite script to handle those types of redirects and keep it clear of CF. Typically I have an ISAPI_Rewrite to handle people hitting my sites without www. etc. I usually put all the domains as host headers on the individual site, .com, .co.uk etc etc and then use ISAPI_Rewrite httpd.ini local to the site which tests if the requested domain is the primary domain and if not then redirect it to the primary domain - this handles people hitting sites without the www. or hitting any of the alternative urls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672396">12</a> by David Herman
		posted on 9/26/2007 at 3:57 PM
		</div>
		<div class="comment_text"><p>In our org, our best tool for code review purely on a "what did this person do" matter is trac.  It provides awesome source diffs and in our case down to the ticket level so we can see exactly what was changed for a particular ticket(task), It makes looking at 50k lines of code a bit easier to swallow</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672394">13</a> by Vicente Nze
		posted on 9/27/2007 at 11:46 AM
		</div>
		<div class="comment_text"><p>Sorry if my question is stupid:<br>I would like to know where exactly you place the application.cfc in the web application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672395">14</a> by Raymond Camden
		posted on 9/27/2007 at 5:24 PM
		</div>
		<div class="comment_text"><p>Not stupid at all Vicente. When you request a CFM file, ColdFusion looks for a file named Application.cfc or Application.cfm in the same folder. If it doesn't find it, it looks in the parent folder, and so on, and so on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672393">15</a> by Shuns
		posted on 9/28/2007 at 7:32 AM
		</div>
		<div class="comment_text"><p>When you refer to this section:</p><p>&lt;cfif StructKeyExists( URL, "reset" )&gt;<br>&lt;cfset THIS.OnApplicationStart() /&gt;<br>&lt;/cfif&gt;</p><p>This is bad. Remove the This. When you are in a CFC and do</p><p>this.x()</p><p>IMO that is lame, if you are bothering to scope the function call then you will be aware of the function's scope?</p><p>IE: VARIABLES.x() for private, THIS.x() for remote/public/package</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672398">16</a> by Raymond Camden
		posted on 9/28/2007 at 3:05 PM
		</div>
		<div class="comment_text"><p>Shuns - I'm a bit confused. Are you saying that you SHOULD scope the function call and I'm wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672397">17</a> by Shuns
		posted on 10/2/2007 at 2:24 AM
		</div>
		<div class="comment_text"><p>Hey ray,</p><p>Nah I'm not saying that you should, I'm just saying that I dont think that it is bad if you scope functions. So you would scope private to the VARIABLES scope and the rest of the access types to the THIS scope. That is if you want to.</p><p>The point I was trying to make is that I didn't think that it  was bad to scope them as you had said.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672399">18</a> by Raymond Camden
		posted on 10/2/2007 at 4:18 PM
		</div>
		<div class="comment_text"><p>Shuns - I don't think I understand you. If you do <a href="http://disq.us/url?url=http%3A%2F%2Fthis.foo%3Adum70ciAYelEFLGVBzvYrh_qr9Y&amp;cuid=3321886" rel="nofollow noopener" title="this.foo">this.foo</a>(), you are essentially calling your method remotely. It's like using an area code to call your neighbor.</p></div>
	</div>
</div>
		