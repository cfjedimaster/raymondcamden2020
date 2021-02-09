
<div class="comment" id="c_1713679591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679591">1</a> by Asa
		posted on 4/10/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. The research I've done talks about how this is a problem with FireFox and Safari. Apparently IE works fine. The solution everyone suggests is to pass the session ID to the flash file and then append it to the URL. All the examples are using PHP though. So if my post URL is upload.cfm?cfid=1234 then how do I make CF use that session?</p><p>Here are some more blogs talking about the issue<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.visible-form.com%2Fblog%2Fflash-file-upload-and-session-cookies%2F%3AdA0R41BPylSdGaVH3GWxHOAoB_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.visible-form.com/blog/flash-file-upload-and-session-cookies/">http://www.visible-form.com...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Frobrosenbaum.com%2Fflash%2Fusing-flash-upload-with-php-symfony%2F%3A0uGeCl18AIvvWSiqs7wFlEus-Rs&amp;cuid=3321886" rel="nofollow noopener" title="http://robrosenbaum.com/flash/using-flash-upload-with-php-symfony/">http://robrosenbaum.com/fla...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679596">2</a> by Raul Riera
		posted on 4/10/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>I discussed about this here before, it works in IE, but Safari or Firefox wont store the session on the request, my work around was to disable security for that specific .cfm upload file (havent seen another solution yet)</p><p>My file was site was protected via CFLOGIN, so I did this on the onRequestStart</p><p>            &lt;!--- Upload with Safari or Firefox? BUG ---&gt;<br>            &lt;cfif CGI.SCRIPT_NAME CONTAINS "admin/galerias/fotos/upload.cfm"&gt;</p><p>Then I skip the validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679601">3</a> by Raymond Camden
		posted on 4/11/2008 at 12:00 AM
		</div>
		<div class="comment_text"><p>@Asa: CF supports receiving session info via the url. If you make a link like so:</p><p>a href="foo.cfm?#session.urltoken#"</p><p>This will append everything CF needs. So if you pass the value to Flash, and Flash does a post to</p><p>foo.cfm?INSERT THE VAR HERE IN ACTION SCRIPT</p><p>Then it should work just fine. You don't have to make CF work with it - it should "just work".</p><p>@Raul: Wow, I got to say though - I think thats a bad idea. It would let anyone upload files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679600">4</a> by Raul Riera
		posted on 4/11/2008 at 12:05 AM
		</div>
		<div class="comment_text"><p>I dont know how the security system works so I think I am wrong with this, but wont it be the same for the user to know the upload.cfm address with or without the session id? (in order to upload something with unrestricted access?)</p><p>Everyone can easily hit view source and see the var passed in to the swf via flashVars</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679599">5</a> by David Buhler
		posted on 4/11/2008 at 12:07 AM
		</div>
		<div class="comment_text"><p>You can call a CFC from within CFFile to retrieve session information, if I recall correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679603">6</a> by asa
		posted on 4/11/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>Passing #session.urltoken# to the flash file and then appending it to the upload URL works great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679598">7</a> by Todd Rafferty
		posted on 4/11/2008 at 11:54 PM
		</div>
		<div class="comment_text"><p>@David: Huh? :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679606">8</a> by Raul Riera
		posted on 4/14/2008 at 2:31 AM
		</div>
		<div class="comment_text"><p>Asa,</p><p>Im curious how you got that to work, its not working for me doing. Did you added the token to the upload method of actionscript or did you sent the token through the data property in the URLRequest class?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679594">9</a> by David Buhler
		posted on 4/14/2008 at 9:21 PM
		</div>
		<div class="comment_text"><p>@The WebRat</p><p>I swear that's how I think i did it! I think. ;)</p><p>**all my advice comes without warranty and is given with only vague recollections of what once worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679604">10</a> by David Buhler
		posted on 4/15/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>If the upload directory has its own Application.cfc...</p><p>Would it be possible to use the onRequestEnd method in the application CFC, to add a user's Session ID to the database table?</p><p>I envision doing a look-up of the last ID in the DB onRequestEnd.</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679597">11</a> by Asa
		posted on 4/15/2008 at 10:03 PM
		</div>
		<div class="comment_text"><p>@ Raul</p><p>I passed the upload path to the SWF as a variable:</p><p>file.swf?path=#URLEncodedFormat('UploadImage.cfm?#session.urltoken#')#</p><p>you need the URLEncodedFormat around it because session.urltoken is actually 2 url variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679602">12</a> by Saul
		posted on 3/1/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>I've been looking for several days at examples of using a flash file uploader. I was after single or multiple file uploads, a progress bar and the ability to add "vanilla" form fields. The most promising I found was the YUI uploader from those nice people at Yahoo <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.yahoo.com%2Fyui%2Fexamples%2Fuploader%2Fuploader-advanced-postvars.html%3AbG_6NmYjvhNBA0Px9Sm4-jPBdJ8&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.yahoo.com/yui/examples/uploader/uploader-advanced-postvars.html">http://developer.yahoo.com/...</a></p><p>I got it working fine submitting to a simple CF page</p><p>&lt;cfif structkeyexists(form,"Filedata")&gt;<br>	&lt;cffile action="UPLOAD" filefield="Filedata" destination="#expandpath(".")#" nameconflict="OVERWRITE"&gt;  <br>&lt;/cfif&gt;</p><p>&lt;cfif structkeyexists(form,"var1") and structkeyexists(form,"var2")&gt;<br>&lt;cffile action = "append"   file = "#expandpath(".")#\log.txt" output = "var1 = #var1# var2 = #var2#"&gt;<br>&lt;/cfif&gt;</p><p>I'm a complete novice with Javascript, PHP, flash in fact anything other than CF, so there's a bit I don't understand (well several ... but this one in particular!)</p><p>On the example in the YUI documentation they say they are using this PHP scrip to handle server side</p><p>1	&lt;?php <br>2	  foreach ($_FILES as $fieldName =&gt; $file) { <br>3	  move_uploaded_file($file['tmp_name'], "./" . $file['name']); <br>4	  echo (" "); <br>5	} ?&gt;</p><p>The echo bit seems to "bounce back" the post data which is then picked up by the onuploadresponse(event). In CF how would I pass back some response to the calling page to fire this event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679605">13</a> by Raymond Camden
		posted on 3/2/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>ANything you would output in the CF page would be sent back. If you did</p><p>Hi</p><p>by itself, then that would return. In CF you don't have to echo anything, any non-code will just output (unless you have cfsetting enablecfoutputonly turned on, or cfsilent). So you don't have to do anything special here in that regard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679607">14</a> by Dan Rutledge
		posted on 8/1/2014 at 12:57 AM
		</div>
		<div class="comment_text"><p>I know this is an old post, but I recently discovered another issue with flash forms. If you are using a load balancer that utilizes a cookie for sticky sessions, you can't stick to the same server because the flash form doesn't send the cookie in the header. No way around this issue as far as I can see.</p></div>
	</div>
</div>
		