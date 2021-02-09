
<div class="comment" id="c_1713730320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730320">1</a> by Raymond Camden
		posted on 3/11/2011 at 11:00 AM
		</div>
		<div class="comment_text"><p>Ok - so I'm hitting the sack now. I seem to have gotten things to work by manually renaming my manifest file. It's like Firefox decided it was smarter than I was and load my manifest even when I bypassed it.</p><p>I must be doing something wrong. I mean, at some point, Firefox must let me refetch an HTML page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730334">2</a> by Cyril Hanquez
		posted on 3/11/2011 at 1:42 PM
		</div>
		<div class="comment_text"><p>Can you check the HTTP headers and see if there's no Cache-Control headers?</p><p>And instead of adding ?x=1 why not include in your manifest file a comment with a version number like # v. 0.1 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730335">3</a> by Cyril Hanquez
		posted on 3/11/2011 at 1:48 PM
		</div>
		<div class="comment_text"><p>Oh and it seems that FireFox 3.6 is buggy and the only workaropund is to tell your webserver to tell the browser not to cache the file. With Apache, add</p><p>&lt;IfModule mod_expires.c&gt;<br>   ExpiresActive on<br>   ExpiresByType text/cache-manifest "access plus 0 seconds"<br>&lt;/IfModule&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730333">4</a> by Raymond Camden
		posted on 3/11/2011 at 4:53 PM
		</div>
		<div class="comment_text"><p>I have been trying version headers but it's not working. I also tried an expiresactive - but a bit different then that. Will try that one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730340">5</a> by Raymond Camden
		posted on 3/11/2011 at 4:55 PM
		</div>
		<div class="comment_text"><p>Nope, no go. I modified find.html, modified my manifest, reloaded Firefox, and FF didn't see the manifest as being new.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730341">6</a> by Raymond Camden
		posted on 3/11/2011 at 5:14 PM
		</div>
		<div class="comment_text"><p>This seems to be helping:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1715568%2Fhow-to-properly-invalidate-an-html5-cache-manifest-for-online-offline-web-apps%3Ad81ZORF3iCSNQyW3254WqGNCJXU&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1715568/how-to-properly-invalidate-an-html5-cache-manifest-for-online-offline-web-apps">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730342">7</a> by Cyril Hanquez
		posted on 3/11/2011 at 5:18 PM
		</div>
		<div class="comment_text"><p>Do you mean that you had an error in your cache manifest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730339">8</a> by Raymond Camden
		posted on 3/11/2011 at 5:29 PM
		</div>
		<div class="comment_text"><p>No, but I could see when FF loaded new crap at least.</p><p>So now my problem is this. From what I thought I knew, if a request was NOT listed in the manifest, it should work online, but not offline.</p><p>I'm not seeing this. I have to use NETWORK: to add the stuff I want. But - * is not working. In Chrome this is especially evident. I load up a Google Map and it never loads. NETWORL: * doesn't do squat. This _kinda_ works:</p><p>NETWORK:<br><a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%2Fmaps%2Fapi%2Fstaticmap%3Fcenter%3D31-35%2BGrassmarket%2BEdinburgh%2BEH1%2B2HS%2BScotland%26zoom%3D15%26size%3D200x200%26maptype%3Droadmap%26sensor%3Dfalse%3Awfdlny92NGuZtKMh2ecfoPD8QAM&amp;cuid=3321886" rel="nofollow noopener" title="http://maps.google.com/maps/api/staticmap?center=31-35+Grassmarket+Edinburgh+EH1+2HS+Scotland&amp;zoom=15&amp;size=200x200&amp;maptype=roadmap&amp;sensor=false">http://maps.google.com/maps...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%2Fmaps%2Fapi%2Fjs%3Fsensor%3Dfalse%3ABuNpFnVXkogwEgxvob9utuH8dzs&amp;cuid=3321886" rel="nofollow noopener" title="http://maps.google.com/maps/api/js?sensor=false">http://maps.google.com/maps...</a></p><p>But the issue is that Google Maps loads another JS file (one not explictely loaded in my code) and that isn't loaded since it isn't in network.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730343">9</a> by Maertsch
		posted on 3/11/2011 at 6:28 PM
		</div>
		<div class="comment_text"><p>I'm also having big troubles with the manifest file. if content has changed, and navigator is online, the old files are loaded form cache. meanwhile in the background the cachemanifest is also updated (if something has changed in the file like a version number). On the next request the new files are showing up.</p><p>this means, just the second request shows the correct files. <br>i workaround it like this: check if cachemanifest is updateready, then swapcache and reload the site. <br>Its not great but works.</p><p>if you have NETWORK: * at the end of the file it should load the files if the navigator is online, the app will not load if its offline and these files (maps) are requestet.</p><p>i always cache the maps files, because they never change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730344">10</a> by Maertsch
		posted on 3/11/2011 at 6:37 PM
		</div>
		<div class="comment_text"><p>This comment should also be noticed:</p><p>Oh, and interesting thing in Firefox (possibly other browsers) - changing a commented out line in the manifest (an approach Apple's developer documentation recommends) DOESN'T cause it to trigger an cache update. You must to add or remove a line with an active instruction (e.g. actually add or remove an entry for a file from the cache manifest) before it will recognise the manifest has updated. – Iain Collins Jun 14 '10 at 10:40</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730319">11</a> by Raymond Camden
		posted on 3/11/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>@Maertsch: I seem to be having some luck with a combo of</p><p>javascript:applicationCache.update()</p><p>in a tab as well as changing a comment line in the manifest</p><p>AS WELL as</p><p>reloading twice.</p><p>Royal. Pain.</p><p>And still - FF seems.... "off". I've got a question open on StackOverflow and will continue to report.</p><p>In Chrome, things now seem perfect, unfortunately, chrome does not have a simple way to mimic offline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730317">12</a> by Ryan McIlmoyl
		posted on 3/11/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>From the Mozilla developer site in regards to manually clearing the application cache...</p><p>The offline cache is not cleared via Tools -&gt; Clear Recent History (bug 538595)<br>The offline cache is not cleared via Tools -&gt; Options -&gt; Advanced -&gt; Network -&gt; Offline data -&gt; Clear Now (bug 538588).<br>The offline cache can be cleared for each site separately using the "Remove..." button in Tools -&gt; Options -&gt; Advanced -&gt; Network -&gt; Offline data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730318">13</a> by Raymond Camden
		posted on 3/11/2011 at 8:21 PM
		</div>
		<div class="comment_text"><p>Yeah, but that worked one time for me. I saw localhost in the list. I removed it. Later testing showed that it never came back. I still used "Clear Now", but my website never showed up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730321">14</a> by Raymond Camden
		posted on 3/11/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>Btw - as a side note - while FF is being bitchy - I did a quick test of my demo on my Android phone... and it worked! So along with being frustrated, I'm super excited too. Any iPhone user here want to give it a quick test for me ? If so- hit my contact form instead of using a comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730323">15</a> by David Vaccaro
		posted on 3/11/2011 at 8:29 PM
		</div>
		<div class="comment_text"><p>I'm sure you saw this but just in case:<br>So here’s one thing you should absolutely do: reconfigure your web server so that your cache manifest file is not cacheable by HTTP semantics. If you’re running an Apache-based web server, these two lines in your .htaccess file will do the trick:</p><p>ExpiresActive On<br>ExpiresDefault "access"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730322">16</a> by Raymond Camden
		posted on 3/11/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>So I take it back. I hate HTML5. It worked - then I broke it. Firefox reports an error -b ut refuses to say WHAT is wrong.</p><p>Ugh.</p><p>David - whats the IIS version for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730324">17</a> by Raymond Camden
		posted on 3/11/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>Nice - Chrome told me the actual error. IIS didn't have the mime type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730325">18</a> by Raymond Camden
		posted on 3/11/2011 at 9:11 PM
		</div>
		<div class="comment_text"><p>Ugh. I don't know what to even think now. Chrome says the manifest is good. In my testing on my Android it worked once. Then the second time it gave me a warning. I could bypass the warning, but then my code which checks for offline/online was ignored. If folks want to see what I'm doing, be my guest, but at thispoint I'm considering giving up.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fdrivingdemo%3AdwgGD8zIgGMxV8pF6f7LkRK2SGM&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com/demos/drivingdemo">www.coldfusionjedi.com/demo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730327">19</a> by David Vaccaro
		posted on 3/11/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>I noticed that when hitting your demo I got a warning on a PC running safari but no warning on the mac running safari.</p><p>Ray, I'm not sure but I think IIS would read the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730329">20</a> by David Vaccaro
		posted on 3/11/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>OOPS!<br>in web.config of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730326">21</a> by Lola LB
		posted on 3/12/2011 at 3:57 PM
		</div>
		<div class="comment_text"><p>Ray . . . that's a bad link - two compounded URLs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730328">22</a> by Raymond Camden
		posted on 3/12/2011 at 6:48 PM
		</div>
		<div class="comment_text"><p>BlogCFC got confused. Just copy the URL by hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730330">23</a> by Mick
		posted on 3/14/2011 at 6:08 PM
		</div>
		<div class="comment_text"><p>Useful post! I've exactly the same problem. Firefox doesn't update the cached manifest file... <br>I think this tips could resolve my problem ;-)<br>Thank you!</p></div>
	</div>
</div>
		