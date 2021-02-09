
<div class="comment" id="c_1714084331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084331">1</a> by Max Moore
		posted on 11/8/2014 at 4:10 AM
		</div>
		<div class="comment_text"><p>I've had the same issues with images in JQM popups before. JQM treats the image height and width as 0 until it is loaded. So it is placing the popup on open, then loading the image, then resizing the popup. You can call the reposition method, but it is kind of jumpy. I prefer to work around it with something like this:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fmaxmoore14%2F23b6721b41c58c10737e%3AShqLMFXUEKqgjMsFq05ns3ooKvs&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/maxmoore14/23b6721b41c58c10737e">https://gist.github.com/max...</a></p><p>Off topic for your blog post, but just thought you'd be curious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084333">2</a> by Simon
		posted on 11/8/2014 at 2:41 PM
		</div>
		<div class="comment_text"><p>Thank you for the demo Ray !!! I've just chosen Jqm to start my journey into mobile app development after trying onsen and ionic and realising learning angular from scratch may postpone my app development for too long and it's pretty tough finding up to date cordova and jqm examples</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084329">3</a> by Raymond Camden
		posted on 11/8/2014 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Max: Thanks for sharing that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084336">4</a> by Raymond Camden
		posted on 11/8/2014 at 8:08 PM
		</div>
		<div class="comment_text"><p>Nice, I didn't know about groupBy (I'm still learning Angular).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084335">5</a> by Piet Crombach
		posted on 11/10/2014 at 2:24 PM
		</div>
		<div class="comment_text"><p>Very nice tutorial.<br>I hope you publish an article like this with use of ngCordova and Ionic. I can't solve the issues many people have with ngCordivaFile functions. ngCordova returns on all functions except up- and download an error code 5. I see this a lot on some forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084337">6</a> by Raymond Camden
		posted on 11/10/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>If you skip ngCordova and just use the file system as is, does it work? If so, it is a bug w/ the ngCordova library and should be reported as such - right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084341">7</a> by Piet Crombach
		posted on 11/10/2014 at 8:05 PM
		</div>
		<div class="comment_text"><p>Hi, thanks for your quick reply.<br>In the meantime a investigated a bit more on this item. It seems ngCordova is working. Also, to my surprise, it works in the browser as well.<br>There is one thing: it works if I start path with ‘/‘. The URL you can get with getURL from a dir- or a fileEntry points to directory: filesystem:http://localhost/persistent/</p><p>What I did not find out is how do I read files from other paths.</p><p>I downloaded some file with ngCordova and as a local path I used: cordova.file.externalDataDirectory. This is pointing to directory: file://storage/emulated/0/Android/data/com.ionicframework.trinl834518/files</p><p>How do I read files from directory where my downloaded files are stores??</p><p>thank you in advance</p><p>Kind regards,</p><p>Piet from the Netherlands</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084340">8</a> by Raymond Camden
		posted on 11/11/2014 at 3:59 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I understand. Reading is the same no matter where it is. You would use FileEntry objects to do reads. Did you see my post on this?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F7%2F15%2FCordova-Sample-Reading-a-text-file%3AKdjjqAHni05pFsvkQiVHYwqZILw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/7/15/Cordova-Sample-Reading-a-text-file">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084339">9</a> by Piet Crombach
		posted on 11/12/2014 at 2:43 AM
		</div>
		<div class="comment_text"><p>Yes. I did read that post. I tried it this way in my app. Result is error 5.<br>Error code 5 means encoding_err. I don't have clue what it does mean. Where to look or how to debug this. I can create a file in the root directory. Check it. I can get a path with toURL(). But trying to write or te read (empty) this file return errorcode 5.</p><p>What I actually want is reading files a download to cordiva.file.externalDataDirectory + 'fileName'.<br>Using this as a filePath fir read returns error code 5.</p><p>Where do I have to,look for the reason of errorcode 5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084342">10</a> by Raymond Camden
		posted on 11/12/2014 at 3:59 AM
		</div>
		<div class="comment_text"><p>Did you check the docs? I recently did some updates there to include the error codes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084326">11</a> by Piet Crombach
		posted on 11/13/2014 at 2:37 AM
		</div>
		<div class="comment_text"><p>Error code 5: encoding_error.</p><p>But what does this mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084330">12</a> by Raymond Camden
		posted on 11/13/2014 at 3:05 AM
		</div>
		<div class="comment_text"><p>Come on, isn't it obvious? ;)</p><p>Sorry - no - I don't know what it could be for you. I could look at your code, but it would need to be a paid engagement. Or you can post to Stackoverflow. Not saying "go away" per se, but this seems to be OT now for the blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084338">13</a> by cub
		posted on 11/14/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>For Windows platforms (Windows Phone 8.1 or Windows 8.1) there is no alias like "cordova.file.dataDirectory". On Windows Phone I set "cordova.file.dataDirectory" to "///" but for Windows 8.1 desktop I don't find the path like an "%appdata%/com.company.helloworld/".</p><p>Any ideas or tips are welcome :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084343">14</a> by Raymond Camden
		posted on 11/14/2014 at 8:36 PM
		</div>
		<div class="comment_text"><p>So it doesn't help you, but it is documented that it isn't supported. :\ These aliases are simply helpers - the lack of them doesn't mean you can't use the File System on Windows Phone, you just have to figure out the location yourself. WinPhone should have a similar concept, right? A place for the app to store stuff. You would just need to google to see what that standard location is and use that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1806255538">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1A49ADRT5a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1806255538">15</a> by disqus_1A49ADRT5a
		posted on 1/21/2015 at 1:58 PM
		</div>
		<div class="comment_text"><p>The box containing the above source code is not wide enough to contain the lines of the source code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1806351960">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1806351960">16</a> (In reply to <a href="#c_1806255538">#15</a>) by Raymond Camden
		posted on 1/21/2015 at 2:12 PM
		</div>
		<div class="comment_text"><p>There should be a scroll bar. You can select it all and paste it into your editor as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1824457703">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_UzgOcMBgrL.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1824457703">17</a> (In reply to <a href="#c_1806351960">#16</a>) by Mike_B
		posted on 1/29/2015 at 9:36 PM
		</div>
		<div class="comment_text"><p>Hi Ray, this is amazingly helpful - thanks again for the  JSON tip - it worked a treat. I am attempting to adapt this for some video files and merge with jplayer for a small gallery of videos offline. I can get the video files downloaded - I just need the url to them for phonegap and cannot get any 'find filesystem filepath' coding examples that actually work for some reason? Any advice would be great. I am looking into using the variable url you set in the original script but am hitting a brickwall syntax/formatting wise. I am plowing into documentation though! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1824475526">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1824475526">18</a> (In reply to <a href="#c_1824457703">#17</a>) by Raymond Camden
		posted on 1/29/2015 at 9:46 PM
		</div>
		<div class="comment_text"><p>If you get a FileEntry object for the resources on your device, I believe you can do .toURL() on them to get a URL you can pass to your player.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1842249602">
	<div>
		<img src="https://disqus.com/api/users/avatars/knoxlaguna.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1842249602">19</a> by Knox
		posted on 2/8/2015 at 6:08 PM
		</div>
		<div class="comment_text"><p>Ray, can you post the contents of your json file that lists the image urls?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1842254290">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1842254290">20</a> by Raymond Camden
		posted on 2/8/2015 at 6:11 PM
		</div>
		<div class="comment_text"><p>I've had a few folks ask about the assets.json file. If you don't know what an array looks like in JSON, it looks like so:  ["foo","goo","zoo"]. Brackets with each item separated by a comma. In my example, each item was a URL pointing to an image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1842255001">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1842255001">21</a> (In reply to <a href="#c_1842249602">#19</a>) by Raymond Camden
		posted on 2/8/2015 at 6:11 PM
		</div>
		<div class="comment_text"><p>I don't have it available but I just posted a comment with an example.</p></div>
	</div>
</div>
		