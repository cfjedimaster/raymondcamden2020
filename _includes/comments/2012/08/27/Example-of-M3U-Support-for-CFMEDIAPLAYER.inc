
<div class="comment" id="c_1713742787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742787">1</a> by Misty
		posted on 8/30/2012 at 11:44 AM
		</div>
		<div class="comment_text"><p>Hi ray, thanks for this, I will check this.</p><p>well tiy will say i am bugging with questions but here is teh new issue i found with cfmediaplyer</p><p>trying to call cfmediaplayer inside a DIV with click of an event, but it is not loading</p><p>any ideas:<br>$().ready(function() {<br>   $("#media").load("video.cfm");<br>});</p><p>&lt;div id="media"&gt;&lt;/div&gt;</p><p>video.cfm file has following:</p><p>&lt;cfmediaplayer source="file.flv"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742786">2</a> by Raymond Camden
		posted on 8/30/2012 at 6:43 PM
		</div>
		<div class="comment_text"><p>Remember that if you use a CF Ajax UI item on content that is loaded like that (ie, via ajax), you have to use &lt;cfajaximport&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742793">3</a> by Misty
		posted on 8/31/2012 at 1:01 PM
		</div>
		<div class="comment_text"><p>That i am doing, an cfajaximport and in the firebug, i see the libraries loaded</p><p>cfajax, cfmediaplyer.js</p><p>but just it does not work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742789">4</a> by Raymond Camden
		posted on 8/31/2012 at 2:58 PM
		</div>
		<div class="comment_text"><p>I don't know then. I'd have to see it online to try to help more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742797">5</a> by Misty
		posted on 9/22/2012 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hi ray, back here long time,</p><p>you are using Coldfusion 10, I am using Coldfusion 9, what will be the alternative to this now:</p><p>lines = arrayFilter(lines, function(l) { return left(l,1) is not "##"; });</p><p>q = queryNew("title,url");</p><p>arrayEach(lines, function(l) {<br>queryAddRow(q, {title:"Video #q.recordCount+1#",url:l});<br>});</p><p>we can remove arrayfilter as i am adding comments</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742788">6</a> by Misty
		posted on 9/22/2012 at 5:14 PM
		</div>
		<div class="comment_text"><p>and this runs only when i click next video, what about continous, if the paylist has 4 videos, rather than clicking, it should run all 4 continously</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742795">7</a> by Misty
		posted on 9/23/2012 at 2:10 PM
		</div>
		<div class="comment_text"><p>Hi ray, I do not know but your Mediaplayer Example does not seems to work, it neither picks up full path, neither the files. If you wanna see, I can show you what is the problem with it</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742790">8</a> by Raymond Camden
		posted on 9/23/2012 at 5:36 PM
		</div>
		<div class="comment_text"><p>1) You would make a new array. Loop over old array and where the line doesn't begin with #, add it to the ne array.</p><p>2) Change array each to a simple for loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742792">9</a> by Raymond Camden
		posted on 9/23/2012 at 5:37 PM
		</div>
		<div class="comment_text"><p>To play track N when N-1 is done, look at using the onComplete feature of cfmediaplayer. It fires when done. It could easily do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742794">10</a> by Raymond Camden
		posted on 9/23/2012 at 5:38 PM
		</div>
		<div class="comment_text"><p>As to your last comment, sure, let me know where I can see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742791">11</a> by Misty
		posted on 9/24/2012 at 11:30 AM
		</div>
		<div class="comment_text"><p>Here it is, I do not know but it is not allowing me to enter the url. should i use pastebin</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FXkCVjJ41%3AaZtgvkMLCP9vkNOkaGsTTDhJMAw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/XkCVjJ41">http://pastebin.com/XkCVjJ41</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742796">12</a> by Raymond Camden
		posted on 9/24/2012 at 2:54 PM
		</div>
		<div class="comment_text"><p>If you open the console (Chrome Web Tools for example), you clearly see:</p><p>Uncaught TypeError: Cannot call method 'setSource' of undefined</p><p>Which means the JS code you are using isn't quite right. Please share the code - via pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742798">13</a> by Misty
		posted on 9/24/2012 at 5:35 PM
		</div>
		<div class="comment_text"><p>Hi, Here is the pastebin Code</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FL7FqfN9F%3AjgM3i5WlZykeCSRp6zH7ALwp4k8&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/L7FqfN9F">http://pastebin.com/L7FqfN9F</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742799">14</a> by misty
		posted on 9/26/2012 at 9:23 AM
		</div>
		<div class="comment_text"><p>Hi Ray, have you checked this code i posted in pastebin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742801">15</a> by Raymond Camden
		posted on 9/26/2012 at 2:43 PM
		</div>
		<div class="comment_text"><p>Are you in CF9 or 10?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742802">16</a> by Misty
		posted on 9/26/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>I have both and i have taken care of the "P" you specified in your post that in CF 9, the "P" is smaller and in CF 10 it is big "P"</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742804">17</a> by Raymond Camden
		posted on 9/26/2012 at 6:00 PM
		</div>
		<div class="comment_text"><p>So...to be clear, the code in your pastebin is for CF10, and you are running it on CF10, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742805">18</a> by Misty
		posted on 9/27/2012 at 10:34 AM
		</div>
		<div class="comment_text"><p>100% Yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742806">19</a> by Raymond Camden
		posted on 9/27/2012 at 3:24 PM
		</div>
		<div class="comment_text"><p>Um, don't know then. I hit your URL again but I'm getting an error about a session variable. At this point, it makes sense to switch to email. If you could fix the error on the site now, and send me details via email (url, code pastebin again), I'll take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742807">20</a> by Misty
		posted on 10/17/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>Hi ray, Coming very late on this, Left it due to some other Works. So how can i remove grid and run the file one after another. I do not want to show the cfgrid and the onclick event, it should start working immediately onload and continue till end. How is that possible</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742808">21</a> by Raymond Camden
		posted on 10/17/2012 at 4:08 PM
		</div>
		<div class="comment_text"><p>I would look into the JavaScript API. According to the docs, you can do</p><p>ColdFusion.MediaPlayer.getPlayer</p><p>Do some inspection of the object returned and see if it supports events.</p><p>Actually - I stand corrected. &lt;cfmediaplayer&gt; has an onComplete function. So you would use that to run JS to load up the next song - until the end when you would do nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742809">22</a> by Misty
		posted on 10/17/2012 at 5:15 PM
		</div>
		<div class="comment_text"><p>But ray, Why Adobe Posted this then</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FDeveloping%2FWSe61e35da8d31851852cc9f7d1353e88b409-7fe3.html%3Al_nM_Rx-2MnL7IXZj6icRuWBIU0&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/Developing/WSe61e35da8d31851852cc9f7d1353e88b409-7fe3.html">http://help.adobe.com/en_US...</a></p><p>It refers to that the cfmediaplayer can play playlists</p><p>Note: This option is not available for HTML 5 videos.</p><p>The list of media that you have to play are embedded in play list file M3U format.</p><p>You can specify the play list as follows:</p><p>&lt;cfmediaplayer source="playlist.m3u" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742811">23</a> by Raymond Camden
		posted on 10/17/2012 at 5:55 PM
		</div>
		<div class="comment_text"><p>Um, I guess the answer is I didn't know it and I don't know everything? ;) Good find there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742810">24</a> by Wayne Pankey
		posted on 3/13/2014 at 8:17 PM
		</div>
		<div class="comment_text"><p>Hi Ray and Misty. Curious to know what the resolution to the very first question is/was? I'm having the same issue getting cfmediaplayer working within a cflayoutarea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742812">25</a> by Misty
		posted on 3/13/2014 at 9:40 PM
		</div>
		<div class="comment_text"><p>Hi @wayne,</p><p>I suggest you don't use cflayout or cflayoutarea, i had many troubles with cfajax UI, as ray has also suggested many times in posts, not to use those, best option is to use:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FColdFusion-UI-the-Right-Way%3AdWp8Vodv58fFcKoZr8J6uKyEpno&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/ColdFusion-UI-the-Right-Way">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		