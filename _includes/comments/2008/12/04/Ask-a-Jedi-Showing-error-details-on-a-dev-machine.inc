
<div class="comment" id="c_1713710497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710497">1</a> by Daniel Short
		posted on 12/5/2008 at 1:55 AM
		</div>
		<div class="comment_text"><p>You can also use the built in error detail display if you'd like. Just set up a custom tag mapping to:</p><p>/install path/servers/server/cfusion-ear/cfusion-war/WEB-INF/exception</p><p>And then use this:</p><p>&lt;cf_detail error="#Arguments.Exception.RootCause#" /&gt;</p><p>I use this in my onerror to check to see if I'm in my dev environment, and if so I display the standard CF error. This is grossly simplified (since I have a lot of other checks in there), but in the end I get my standard CF error output.</p><p>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710494">2</a> by Chris Bestall
		posted on 12/5/2008 at 2:21 AM
		</div>
		<div class="comment_text"><p>We just grab the IP address and compare to to a local dev range:</p><p>&lt;cfset ip = createObject("java","java.net.InetAddress").getLocalHost()&gt;<br>&lt;cfif NOT findNoCase('192.168.1',ip.getHostAddress())&gt;...</p><p>-Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710495">3</a> by Scott P
		posted on 12/5/2008 at 5:59 AM
		</div>
		<div class="comment_text"><p>Same as the above comment, I wrap mine in a savecontent then either email it or if dev address then I display it.</p><p>&lt;cfset DevList="127.0.0.1,192.168.1.1"&gt;</p><p>&lt;cfif ListFindNoCase(allowed,cgi.remote_addr)&gt;<br>   &lt;cfoutput&gt;#mailbody#&lt;/cfoutput&gt;<br>&lt;cfelse&gt;<br>  &lt;cfmail to="gbush@relocator.com" from="everyone@change.gov" subject="Error" type="html"&gt;#mailbody#&lt;/cfmail&gt;<br>OTHER ERROR TEXT HERE<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710488">4</a> by kebab dylan
		posted on 12/5/2008 at 8:35 AM
		</div>
		<div class="comment_text"><p>I have been using a config file in the server root for each environment to control if cfcs get inited with each request and how to handle error debug dumps (screen in devl and email in all others).</p></div>
	</div>
</div>
		