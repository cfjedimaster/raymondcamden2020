
<div class="comment" id="c_2032446239">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_87z5l2RMQ8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032446239">1</a> by Kevin Brown
		posted on 5/18/2015 at 8:16 PM
		</div>
		<div class="comment_text"><p>Hey i just wanted to thank you for posting this guide. It helped me out a lot but for the longest time my application was crashing when trying to load some ID3 tags. I discovered finally that i was able to use the file.slice method to get the last 300 bytes and this works but i have a feeling that i may be missing out on some tags. Do you know much about ID3 tag parsing? Is there any way that I might be able to read the file in chunks grabbing the tags from each for a full set?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032525641">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032525641">2</a> (In reply to <a href="#c_2032446239">#1</a>) by Raymond Camden
		posted on 5/18/2015 at 9:05 PM
		</div>
		<div class="comment_text"><p>I read the spec about ten years ago and used slice via Java to parse tags. All I can tell you is that it worked then, and if you read the spec carefully, you should be ok doing it. Any reason why you can't just use the ID3 library I used here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032531760">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_87z5l2RMQ8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032531760">3</a> (In reply to <a href="#c_2032525641">#2</a>) by Kevin Brown
		posted on 5/18/2015 at 9:09 PM
		</div>
		<div class="comment_text"><p>I am using the ID3 library but my application would always crash after calling loadtags on the third song in a list. It does not crash if i slice it. My guess was that it occurred as a result of a file being to big but i'm not convinced that is the case because it behaves the same way on any list of mp3 files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032551305">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032551305">4</a> (In reply to <a href="#c_2032531760">#3</a>) by Raymond Camden
		posted on 5/18/2015 at 9:22 PM
		</div>
		<div class="comment_text"><p>Are you reading them at the same time? Remember I had that issue with my own code until I made the reads singular. (Ie one at a time)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032581728">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_87z5l2RMQ8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032581728">5</a> (In reply to <a href="#c_2032551305">#4</a>) by Kevin Brown
		posted on 5/18/2015 at 9:42 PM
		</div>
		<div class="comment_text"><p>no I wrapped it such that they would get read serially.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastie.org%2F10195568%3A0Sx8_U3ykVgRg8nHtPyvdZ0034A&amp;cuid=3321886" rel="nofollow noopener" title="http://pastie.org/10195568">http://pastie.org/10195568</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2032584577">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032584577">6</a> (In reply to <a href="#c_2032581728">#5</a>) by Raymond Camden
		posted on 5/18/2015 at 9:44 PM
		</div>
		<div class="comment_text"><p>Ah well shoot - not sure what to suggest then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2241969785">
	<div>
		<img src="https://disqus.com/api/users/avatars/driekwartappel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2241969785">7</a> by driekwartappel
		posted on 9/8/2015 at 6:32 AM
		</div>
		<div class="comment_text"><p>This might be a little bit unrelated, but looks like you know what you are talking about!<br>I am trying to read the currently playing song using Cordova on a Android phone, similar to what they are doing here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F10510292%2Ftrack-info-of-currently-playing-music%3AJF6e_7grFRXggKOW814PxvjKvTc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/10510292/track-info-of-currently-playing-music">http://stackoverflow.com/qu...</a></p><p>Do you know if it is possible to read the currently playing song (default android player) with Cordova? Do you perhaps have a link to some reading material?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2243660238">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2243660238">8</a> (In reply to <a href="#c_2241969785">#7</a>) by Raymond Camden
		posted on 9/9/2015 at 2:33 AM
		</div>
		<div class="comment_text"><p>If you can get it with Java, then you can write a plugin for it for Cordova. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2245997936">
	<div>
		<img src="https://disqus.com/api/users/avatars/driekwartappel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2245997936">9</a> (In reply to <a href="#c_2243660238">#8</a>) by driekwartappel
		posted on 9/10/2015 at 11:34 AM
		</div>
		<div class="comment_text"><p>Awesome thats good news. Will have to learn exactly how cordova plugin works first. Will post the result here if I ever get it to work</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080344739">
	<div>
		<img src="https://disqus.com/api/users/avatars/hinatakagerou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080344739">10</a> by hinata kagerou
		posted on 1/3/2017 at 5:05 AM
		</div>
		<div class="comment_text"><p>why its take so long?<br>are there anothers method for fast get mp3 id3 tags for multiple mp3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080759857">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080759857">11</a> (In reply to <a href="#c_3080344739">#10</a>) by Raymond Camden
		posted on 1/3/2017 at 1:54 PM
		</div>
		<div class="comment_text"><p>It depends I guess. If you have a large number of MP3s it's going to take time to read them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083542247">
	<div>
		<img src="https://disqus.com/api/users/avatars/hinatakagerou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083542247">12</a> (In reply to <a href="#c_3080759857">#11</a>) by hinata kagerou
		posted on 1/5/2017 at 1:48 AM
		</div>
		<div class="comment_text"><p>3 mp3 with 9 sec</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083566165">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083566165">13</a> (In reply to <a href="#c_3083542247">#12</a>) by Raymond Camden
		posted on 1/5/2017 at 2:09 AM
		</div>
		<div class="comment_text"><p>Could it be an older device? Unfortunately there isn't much I can do here. You would need to ping the project owner to get their thoughts on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083578091">
	<div>
		<img src="https://disqus.com/api/users/avatars/hinatakagerou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083578091">14</a> (In reply to <a href="#c_3083566165">#13</a>) by hinata kagerou
		posted on 1/5/2017 at 2:21 AM
		</div>
		<div class="comment_text"><p>im test it on samsung note 3 yes it is work well but loading is really long when you have 100 or more mp3</p><p>you can test it : <br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2Fn45fvdv9mwp151n%2Fandroid-debug.apk%3Fdl%3D1%3AFOhWV6qF9RRKspoWQ3Cd1c2LJOM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/n45fvdv9mwp151n/android-debug.apk?dl=1">https://www.dropbox.com/s/n...</a></p><p>places the mp3 on /Music folder<br>on sdcard</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083600296">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083600296">15</a> (In reply to <a href="#c_3083578091">#14</a>) by Raymond Camden
		posted on 1/5/2017 at 2:42 AM
		</div>
		<div class="comment_text"><p>Oh a 100 MP3s I'd definitely think would be a bit slow. I'm not going to test though - as I said - to me this is expected. If you think it should be quicker, again, I'd reach out to the person behind the code and see if there are any optimizations that can be made. It is an open source project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083649672">
	<div>
		<img src="https://disqus.com/api/users/avatars/hinatakagerou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083649672">16</a> (In reply to <a href="#c_3083600296">#15</a>) by hinata kagerou
		posted on 1/5/2017 at 3:14 AM
		</div>
		<div class="comment_text"><p>thanks i will analyze the code too<br>i will tell you if i found some thing<br>you want to test my project?</p><p>im using this git too<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Farielfaur%2Fionic-audio%3A1CvPE5xumc1pUy2tLTU-BLg9UmQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/arielfaur/ionic-audio">https://github.com/arielfau...</a></p><p>this is the link : <br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2Fzbnwu82zr51vta3%2Fwww.zip%3Fdl%3D1%3AF-MiKxPPKufTklrg_XPxlHDkgdE&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/zbnwu82zr51vta3/www.zip?dl=1">https://www.dropbox.com/s/z...</a></p><p>the plugin im add in on ionic is : <br>syntax : <br>ionic plugin add plugin-name</p><p>cordova-plugin-media<br>cordova-plugin-file<br>cordova-plugin-spinner-dialog<br>cordova-plugin-device<br>cordova-plugin-console</p></div>
	</div>
</div>
		
<div class="comment" id="c_3084345709">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3084345709">17</a> (In reply to <a href="#c_3083649672">#16</a>) by Raymond Camden
		posted on 1/5/2017 at 3:23 PM
		</div>
		<div class="comment_text"><p>You found something else? To be clear, I don't just take folks projects and work on them normally unless it is a paid engagement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3088429842">
	<div>
		<img src="https://disqus.com/api/users/avatars/hinatakagerou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3088429842">18</a> (In reply to <a href="#c_3083542247">#12</a>) by hinata kagerou
		posted on 1/8/2017 at 1:46 AM
		</div>
		<div class="comment_text"><p>hi sir<br>i'm still analyze i will post if found something :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3515751977">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajatkhare619.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515751977">19</a> by Deadboy
		posted on 9/13/2017 at 5:08 PM
		</div>
		<div class="comment_text"><p>Thanks! Very useful tutorial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3515752795">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajatkhare619.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515752795">20</a> (In reply to <a href="#c_2032446239">#1</a>) by Deadboy
		posted on 9/13/2017 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi,<br>How did you use the slice method on the mp3 files?</p></div>
	</div>
</div>
		