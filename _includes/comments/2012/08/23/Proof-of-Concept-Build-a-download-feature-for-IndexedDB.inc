
<div class="comment" id="c_1713742743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742743">1</a> by Calvin Spealman
		posted on 1/23/2013 at 1:32 AM
		</div>
		<div class="comment_text"><p>I think this is a great idea. I'm very actively pursuing the idea of IndexedDB databases as individual files, at least in the sense of one thing per database. IndexedDB makes a great basis for structure.</p><p>Backups of your own data are paramount, and this is a key reason to support moving data into local storage, I think.</p><p>However, I want to make one caveat with the solution mentioned here, because any time you take IndexedDB data and push it through JSON, you can loose information or cause errors. IndexedDB can store anything valid by the HTML Structured Clone Algorithm, which is anything in JSON + Dates, Files, Blobs, RegExps, and undefined values. Any of these types will choke JSON.stringify(), sadly.</p><p>This is still a good technique, but you either need 1) to write your own serializer and parser or 2) use it on a database you only allow a subset of possible types into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742746">2</a> by Raymond Camden
		posted on 1/23/2013 at 1:37 AM
		</div>
		<div class="comment_text"><p>Great point. I haven't played much with binary data in IndexedDB yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742747">3</a> by Rob
		posted on 2/8/2013 at 6:37 AM
		</div>
		<div class="comment_text"><p>Just wondering if you could use a webWorker per objectStore to retrieve the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742748">4</a> by Raymond Camden
		posted on 2/8/2013 at 7:33 AM
		</div>
		<div class="comment_text"><p>It isn't yet supported, at least not in Firefox:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F14479431%2Fuse-indexeddb-inside-web-worker-scope%3AiLGot83BzWx10FYj9exNR4EekGM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/14479431/use-indexeddb-inside-web-worker-scope">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742751">5</a> by Mann
		posted on 7/10/2013 at 1:30 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Really this is a very very useful thing, but when i included the downloadable feature to my application, it is not downloading the JSON file, even if it is not responding to the download button.</p><p>Can you please help me for that problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742750">6</a> by Raymond Camden
		posted on 7/10/2013 at 3:08 PM
		</div>
		<div class="comment_text"><p>I'd need more details. What browser are you using? Can you add a console.log to the event handler and see if it even runs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742749">7</a> by Mann
		posted on 7/11/2013 at 8:39 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Like exporting IndexedDB data as a JSON file is possible as described by you above, is it possible to import data from a JSON file to the IndexedDB is possible, if possible, then can you give some code snipset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742752">8</a> by Raymond Camden
		posted on 7/11/2013 at 3:42 PM
		</div>
		<div class="comment_text"><p>It is possible. I don't have a code snippet, but it would be something like so:</p><p>1) Add a file field.<br>2) When the user hits a button, check the value of the file field and if they picked something, read it. (You can do that now in modern browsers.)<br>3) Once you confirm it was a JSON packet, you can then iterate and insert.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742754">9</a> by Mike Jones
		posted on 6/8/2014 at 6:49 PM
		</div>
		<div class="comment_text"><p>Hello Raymond</p><p>Thank you very much fro your example. I have been trying for two and half days to get a project working right where I needed Indexeddb to return some data before something else should happen.</p><p>I adapted your code to my situation and it worked perfectly.</p><p>Thanks and best wishes from York, UK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742753">10</a> by Raymond Camden
		posted on 6/8/2014 at 7:07 PM
		</div>
		<div class="comment_text"><p>Glad to know!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2385030889">
	<div>
		<img src="https://disqus.com/api/users/avatars/cregox.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385030889">11</a> by cregox
		posted on 11/30/2015 at 9:49 AM
		</div>
		<div class="comment_text"><p>&gt; "I was thinking that it might be interesting to build a way to export and save data from an IndexedDB datasource. Why bother when the data is local? I don’t know. Maybe as a way to save a ‘version’ to a USB stick. Maybe as a way to upload later to another machine. To be honest, I just wanted to build it and see what it took."<br>Awesome! ^_^</p><p>But do you happen to know of any way without using stringify?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fcodenewbie.slack.com%2Farchives%2Fgeneral%2Fp1448876552002960%3AoLQ5IN_jmzDBF-5gDYh1O2r__04&amp;cuid=3321886" rel="nofollow noopener" title="https://codenewbie.slack.com/archives/general/p1448876552002960">https://codenewbie.slack.co...</a></p><p>I'd love to find such mechanism for enabling sharing saved states on my Mariox ported Ai ANN neat algo, you can see on <a href="http://disq.us/url?url=http%3A%2F%2Fbasiux.org%3A92yENH9plrDttUg7o-WutPUjP34&amp;cuid=3321886" rel="nofollow noopener" title="basiux.org">basiux.org</a> or livecoding ( <a href="https://disq.us/url?url=https%3A%2F%2Fwww.livecoding.tv%2Fcregox%2F%3ApWzpDWKBgZQD0yDbyZ3Pqv3Wx7Y&amp;cuid=3321886" rel="nofollow noopener" title="https://www.livecoding.tv/cregox/">https://www.livecoding.tv/c...</a> ).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2385131903">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385131903">12</a> (In reply to <a href="#c_2385030889">#11</a>) by Raymond Camden
		posted on 11/30/2015 at 11:53 AM
		</div>
		<div class="comment_text"><p>I assume you also mean w/o building the string by hand, since you could do that too.</p><p>If so - then no - I don't. Sorry. :\</p><p>Obviously you could take the string and zip it and save a zip file instead, but you still need to get the data in a usable form first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2385549510">
	<div>
		<img src="https://disqus.com/api/users/avatars/cregox.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385549510">13</a> by cregox
		posted on 11/30/2015 at 5:13 PM
		</div>
		<div class="comment_text"><p>This is what I've tried using, but it's not quite fully working for me (yet): <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Frobnyman%2F1894032%23gistcomment-1633325%3AQUZhoE_TBpnQ71z6s80qU6jTFxw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/robnyman/1894032#gistcomment-1633325">https://gist.github.com/rob...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2385972832">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385972832">14</a> (In reply to <a href="#c_2385549510">#13</a>) by Raymond Camden
		posted on 11/30/2015 at 9:31 PM
		</div>
		<div class="comment_text"><p>How is it not working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2386139477">
	<div>
		<img src="https://disqus.com/api/users/avatars/cregox.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2386139477">15</a> (In reply to <a href="#c_2385972832">#14</a>) by cregox
		posted on 11/30/2015 at 11:21 PM
		</div>
		<div class="comment_text"><p>Same reason from previous comment. `Stringify` crashes on my object. Before it was giving a message that lead to believe it was due to object size, now it just completely kill the process. It's always coming back to serializing...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2386324153">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2386324153">16</a> (In reply to <a href="#c_2386139477">#15</a>) by Raymond Camden
		posted on 12/1/2015 at 1:59 AM
		</div>
		<div class="comment_text"><p>What does your Object look like? Could it be an infinite loop? Ie, User has Roles and Roles have Users and Users have Roles and etc etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2395757419">
	<div>
		<img src="https://disqus.com/api/users/avatars/cregox.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2395757419">17</a> (In reply to <a href="#c_2386324153">#16</a>) by cregox
		posted on 12/6/2015 at 5:13 AM
		</div>
		<div class="comment_text"><p>It's `pool.state` under <a href="http://disq.us/url?url=http%3A%2F%2Fbasiux.org%3A92yENH9plrDttUg7o-WutPUjP34&amp;cuid=3321886" rel="nofollow noopener" title="basiux.org">basiux.org</a> and if it has any circular reference it's within `.species` and it does make a lot of sense! I should have thought of that, but... Surprisingly, I couldn't find any such thing there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2396292872">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2396292872">18</a> (In reply to <a href="#c_2395757419">#17</a>) by Raymond Camden
		posted on 12/6/2015 at 3:58 PM
		</div>
		<div class="comment_text"><p>Cool - glad you found it!</p></div>
	</div>
</div>
		