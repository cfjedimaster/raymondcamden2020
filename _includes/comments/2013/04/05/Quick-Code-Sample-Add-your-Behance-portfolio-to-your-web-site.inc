
<div class="comment" id="c_1713745732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745732">1</a> by Evans Mwendwa
		posted on 5/12/2013 at 3:03 PM
		</div>
		<div class="comment_text"><p>This is cool. But you could also use the behance api to fetch projects in a better way. The API  provides more projects information and has more functionality including commenting, appreciations e.t.c</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745731">2</a> by Raymond Camden
		posted on 5/12/2013 at 10:00 PM
		</div>
		<div class="comment_text"><p>That version requires authentication. This one runs anonymous.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745735">3</a> by Yashi
		posted on 8/23/2013 at 1:29 PM
		</div>
		<div class="comment_text"><p>this is awesome post... but i Agree with Evans, can you explain <a href="http://disq.us/url?url=http%3A%2F%2Fus.how%3A2D4NQZ4UuLAWMkuttIJHIvFGBpQ&amp;cuid=3321886" rel="nofollow noopener" title="us.how">us.how</a> to use behance api a-z using any method you know, javascript or php..and that would be help to the community...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745733">4</a> by Raymond Camden
		posted on 8/23/2013 at 11:45 PM
		</div>
		<div class="comment_text"><p>The issue with a JS API is that you are limited to 150 requests per hour. Now - most of us have blogs that don't get that much traffic. Mine gets about 5-6K per day. If we assume the same amount of traffic all day, thats 208 requests per hour. So there is no way it would work. A server-side solution would let you cache.</p><p>I don't know PHP so can't help there. Best I can suggest is their docs. It looks easily enough. If you wanted a CF solution I could whip you up a demo. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745736">5</a> by Yashi
		posted on 8/24/2013 at 8:13 AM
		</div>
		<div class="comment_text"><p>hi Raymond, thanks for your comment.. so can you explain bit more about your version. i mean can you reproduce this script for more customize version with all the method used by behance api for example project view, user statistics, featured projects, total views,... etc... then we can use this as alternative solution for what behance did.and include behance profile to our own website with more customize view.sorry i'm still in intermediate stage in js. so i hope you can extend this... and i keep watching this thread...  thank you so much for what you did...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745734">6</a> by Raymond Camden
		posted on 8/24/2013 at 5:02 PM
		</div>
		<div class="comment_text"><p>Well, to be clear, the Behance API can allow you to do cool stuff. Don't get me wrong. But the usage limits imo make it hard to recommend for a client side app. Every visitor to your site would make use of one API call and if you got any amount of traffic at all it would quickly eat up your usage.</p><p>By doing the API calls on the server you can do caching. Ie, call once an hour, or heck, once a day even. Stuff like your project list doesn't change often. And if you provide a way to clear the cache you can handle it manually.</p><p>Does that make sense? I mean - I can definitely write you some JS examples - I just worry about how useful it will be. Then again, maybe this is something you can contact Behance (ok, we both work for Adobe, but...) and see about increasing the data limit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745758">7</a> by Yashi
		posted on 8/24/2013 at 5:22 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond. so that is the case people who don't include behance portfolio to their website via API... and i Google every possible keyword to find any method. finally i found your <a href="http://disq.us/url?url=http%3A%2F%2Fblog.so%3A8NVczT6NyeibKa9xaiIhd8kU1h8&amp;cuid=3321886" rel="nofollow noopener" title="blog.so">blog.so</a> now i understand what is the limitation of the behance API.and it's better to add a link pointing to the behance portfolio other than showing behance information through my website... actually my plan was a doing  case study pages for every project i did and showing how many peoples are see this, how many peoples are like this and showing featured project... etc but unfortunately i can't do it.. :'( anyway thanks for your effort to show some method..and i look forward to hearing from you.. thank you once again raymond..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745762">8</a> by Raymond Camden
		posted on 8/24/2013 at 5:25 PM
		</div>
		<div class="comment_text"><p>So... hard to understand your response. Are you saying you would still like to see an example? I can definitely show an example even if the data limits are low imo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745759">9</a> by Yashi
		posted on 8/24/2013 at 5:28 PM
		</div>
		<div class="comment_text"><p>yes yes... i like to see examples...if you can make it more clear and detail instruction it would be great.. :) :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745763">10</a> by Raymond Camden
		posted on 8/24/2013 at 5:31 PM
		</div>
		<div class="comment_text"><p>No promises, but I can put it in my queue of things to dig into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745760">11</a> by Yashi
		posted on 8/24/2013 at 5:34 PM
		</div>
		<div class="comment_text"><p>ok no problem. actually i still developing my site.. if you have free time, make a blog post for it.. i'll keep watching your blog... thanks raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745761">12</a> by Kevin McCarthy
		posted on 9/5/2013 at 11:45 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Thanks for uploading this code! I've got it working on my portfolio site and I'm really happy with it. I have one quick question though, how can I change the code to only load my two most recent projects instead of all of them?</p><p>Thanks for the help,<br>Kevin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745765">13</a> by Raymond Camden
		posted on 9/6/2013 at 12:07 AM
		</div>
		<div class="comment_text"><p>I'm coding by hand, so pardon any typos. See this?</p><p>for(var i=0; i&lt;e.responseData.feed.entries.length; i++) {</p><p>Change it to:</p><p>for(var i=0; i&lt;Math.min(e.responseData.feed.entries.length,2); i++) {</p><p>Math.min(x,y) simply means, return the smaller of the two numbers. I didn't use just 2 because you may go into an artistic rage and delete all but one project. By using Math.min I can ensure I use the lower of the two numbers.</p><p>The RSS *should* be sorted newest first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745764">14</a> by katya
		posted on 10/6/2013 at 11:55 PM
		</div>
		<div class="comment_text"><p>Hi! Thank you for this post. I try to find the way to separate entry.content var to image and description, I would like to put only image and maybe fields. Can't find it on API page :( Can you help please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745766">15</a> by Raymond Camden
		posted on 10/7/2013 at 3:58 AM
		</div>
		<div class="comment_text"><p>I made a small modification to the code so that if you add this:</p><p>var BEHANCE_IMAGEONLY=true;</p><p>It removes the line of text after the image.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2013%2Fapr%2F2%2Fv2%2Ftest.html%3AyHXsH7yZPK0UGQVWLhtT9FmFiIw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2013/apr/2/v2/test.html">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745768">16</a> by katya
		posted on 10/7/2013 at 10:13 PM
		</div>
		<div class="comment_text"><p>thanks</p><p>I don't know why, but I don't get all the feed, only 5 newest and 7 latest<br>projects. what can be a problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745769">17</a> by Raymond Camden
		posted on 10/7/2013 at 10:44 PM
		</div>
		<div class="comment_text"><p>Um, well it just reads the RSS feed - it doesn't filter by new or latest per se. It also has a limit of 10. See this URL used by the code:</p><p>var url = "<a href="https://disq.us/url?url=https%3A%2F%2Fajax.googleapis.com%2Fajax%2Fservices%2Ffeed%2Fload%3Fv%3D1.0%26q%3Dhttp%253A%2F%2Fwww.behance.net%2F%3AkJxdPKQ4v3QlJLxZAA9-akVGrXA&amp;cuid=3321886" rel="nofollow noopener" title="https://ajax.googleapis.com/ajax/services/feed/load?v=1.0&amp;q=http%3A//www.behance.net/">https://ajax.googleapis.com...</a>" + BEHANCE_USER + ".xml&amp;num=10&amp;v=1.0&amp;callback="+cb;</p><p>You could change num=10 to num=20.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745771">18</a> by Raymond Camden
		posted on 10/16/2013 at 3:13 PM
		</div>
		<div class="comment_text"><p>For folks who asked, I've begun work on a JavaScript API library wrapper:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F10%2F16%2FFirst-draft--JavaScript-Library-for-Behance-Integration%3AaZas3EGjfNhUXuY_Gsn-NoLFraY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/10/16/First-draft--JavaScript-Library-for-Behance-Integration">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745773">19</a> by Yashi
		posted on 10/16/2013 at 3:19 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745775">20</a> by jordi
		posted on 12/10/2013 at 5:31 PM
		</div>
		<div class="comment_text"><p>Hi,<br>Nice post!<br>And, as I am pulling my projects from Behance in to my personal web site, I'd like as well to be able at least to 'favorite' them, but so far I found how to retrieve the value only. Any idea?<br>mine so far is using something like '<a href="https://disq.us/url?url=https%3A%2F%2Fwww.behance.net%2Fc%2Fa%3Fe%3Dproject%26id%3Dmyprojectid%26back%3Ddefine%26r%3Dhttps%253A%252F%252Fwww.behance.net%252Fv2%252Foauth%252Fauthenticate%26s%3D1%26_%3D1386678424023%26cb%3D83874510%27%3Aye-kk-V4FMYuf5L6MtXgZFnFQq4&amp;cuid=3321886" rel="nofollow noopener" title="https://www.behance.net/c/a?e=project&amp;id=myprojectid&amp;back=define&amp;r=https%3A%2F%2Fwww.behance.net%2Fv2%2Foauth%2Fauthenticate&amp;s=1&amp;_=1386678424023&amp;cb=83874510'">https://www.behance.net/c/a...</a> but does not look so nice, although it works...<br>and by the way, does anyone knows how the date format is given? it looks like milliseconds but it is definitely something wron for me as I am getting dates in order of Sat Jan 17 1970 00:20:49 GMT+0000 (GMT Standard Time)... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745774">21</a> by Raymond Camden
		posted on 12/10/2013 at 8:43 PM
		</div>
		<div class="comment_text"><p>@jordi: This blog post works with the public RSS feed of your Behance data. It isn't a "real" API example. You would need to use the real API in order to do that and would need to have an authenticated connection as well. Definitely possible. As for the date format - perhaps it is seconds, not milliseconds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745777">22</a> by jordi
		posted on 12/10/2013 at 8:59 PM
		</div>
		<div class="comment_text"><p>Hi, thanks for the answer.<br>And yes, it is seconds, It is a pity not to have thought of it myself. :P<br>I'll look closer in how to apply 'favourited' functionality to my own blog using the API.<br>thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745776">23</a> by Rachel
		posted on 1/20/2014 at 5:11 PM
		</div>
		<div class="comment_text"><p>Just wanted to just say thank you for this! I used your edited library version for my gallery. I edited the code simplified it so it only displayed a collage of my photos which looks awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745778">24</a> by Raymond Camden
		posted on 1/20/2014 at 8:16 PM
		</div>
		<div class="comment_text"><p>You are most welcome, Rachel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745779">25</a> by Josh
		posted on 1/23/2014 at 7:26 PM
		</div>
		<div class="comment_text"><p>Raymond, thank you! This was very easy to include in my site and modify. I appreciate the support you've been able to provide via this post as well. Good luck with the next version!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745780">26</a> by Vໜtor
		posted on 2/25/2014 at 12:03 AM
		</div>
		<div class="comment_text"><p>Hi Raymond!</p><p>Many thanks for the resource. It was very useful for the integration on my portfolio. You can see it running here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.vdesigner.es%3A32zQyqkOIRAaGPfg0qamfJOsU_I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.vdesigner.es">http://www.vdesigner.es</a></p><p>For the CSS issue you said on the post I recommend to tag the name of the user using &lt;a&gt; or &lt;span&gt; and add some right margin (16px, the width of the Behance mini logo).</p><p>I added some styles to integrate it with the style of my portfolio, feel free to take it if it can helps you.</p><p>Cheers ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745781">27</a> by Raymond Camden
		posted on 2/25/2014 at 12:18 AM
		</div>
		<div class="comment_text"><p>*sigh* I hate people who can do pretty. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745782">28</a> by Vໜtor
		posted on 2/25/2014 at 1:26 AM
		</div>
		<div class="comment_text"><p>xD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745783">29</a> by rj
		posted on 4/14/2014 at 7:01 AM
		</div>
		<div class="comment_text"><p>plss...help me in my web portfolio...need it badly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745785">30</a> by rj
		posted on 4/14/2014 at 7:02 AM
		</div>
		<div class="comment_text"><p>plss email me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745786">31</a> by Raymond Camden
		posted on 4/14/2014 at 7:19 AM
		</div>
		<div class="comment_text"><p>This blog is not a place to ask folks to build your portfolio for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745789">32</a> by Sean
		posted on 7/4/2014 at 12:11 AM
		</div>
		<div class="comment_text"><p>Your addition of var BEHANCE_IMAGEONLY=true</p><p>doesn't work for all project descriptions... e.g. try the example "timtadder" and scroll down.</p><p>I've tried to figure out a fix, but can't quite get it to work, any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745788">33</a> by Raymond Camden
		posted on 7/4/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>It's an easy fix. Change the replace on line 28 to</p><p>content = content.replace(/&lt;br&gt;(?:.|\s)*/,"");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1846173075">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GWlXYsP88x.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846173075">34</a> by Peter Easton
		posted on 2/10/2015 at 7:27 PM
		</div>
		<div class="comment_text"><p>HI Raymond, great post,( i hate behance) I was wondering if you knew a way to modify this to show more than one users work? I have it looping through my students galleries but for some reason all the galleries are the same person. any pointer would be great<br>Pete</p></div>
	</div>
</div>
		
<div class="comment" id="c_1846177502">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846177502">35</a> (In reply to <a href="#c_1846173075">#34</a>) by Raymond Camden
		posted on 2/10/2015 at 7:29 PM
		</div>
		<div class="comment_text"><p>Heh, you hate Behance? Then why use it? :) Um - can you show me your code? Not as a comment, put it up someplace where I can run it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1846192024">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GWlXYsP88x.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846192024">36</a> (In reply to <a href="#c_1846177502">#35</a>) by Peter Easton
		posted on 2/10/2015 at 7:36 PM
		</div>
		<div class="comment_text"><p>don't have a choice the school uses it for galleries, i can but its basically back to your code with my urls, I just started tinkering today</p></div>
	</div>
</div>
		
<div class="comment" id="c_1846195510">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GWlXYsP88x.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846195510">37</a> (In reply to <a href="#c_1846177502">#35</a>) by Peter Easton
		posted on 2/10/2015 at 7:38 PM
		</div>
		<div class="comment_text"><p>my looping code is:<br>    $db_hostname = "xxxxx";<br>    $db_database = "xxxxx";<br>    $db_username = "xxxx";<br>    $db_password = "xxxx";<br>    $dbconnection = @mysql_connect($db_hostname, $db_username, $db_password) ;<br>    @mysql_select_db($db_database, $dbconnection);<br>    $access_sql = "SELECT * FROM `pshow` WHERE `deptcode` = 'webgroup'";<br>    $access_statusSet = @mysql_query($access_sql, $dbconnection);<br>        while ($stu_user = mysql_fetch_assoc($access_statusSet)){        <br>            $username = $stu_user['username'];<br>        ?&gt;<br>        &lt;div&gt;&lt;div id="behance_p"&gt;&lt;/div&gt;<br>        &lt;script&gt;<br>            var BEHANCE_USER = "";<br>            var BEHANCE_IMAGEONLY=true;<br>        &lt;/script&gt;<br>        &lt;script src="/assets/portfolio/behance_show.js" async=""&gt;&lt;/script&gt;<br>        </p></div>
	</div>
</div>
		
<div class="comment" id="c_1846227079">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GWlXYsP88x.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846227079">38</a> (In reply to <a href="#c_1846177502">#35</a>) by Peter Easton
		posted on 2/10/2015 at 7:54 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fmysite.pratt.edu%2F%7Epeaston%2Fbehance%2F%3AmaBkRurdEe6Exk3a2GOJFgbYjtE&amp;cuid=3321886" rel="nofollow noopener" title="http://mysite.pratt.edu/~peaston/behance/">http://mysite.pratt.edu/~pe...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1846246597">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846246597">39</a> (In reply to <a href="#c_1846227079">#38</a>) by Raymond Camden
		posted on 2/10/2015 at 8:06 PM
		</div>
		<div class="comment_text"><p>Ah, you want to use the newer version of my code, detailed here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F04%2F11%2FUpdate-to-my-JavaScript-Behance-API%3AAlgxWjUm0-0-4W-QWmHdxHkXP88&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/04/11/Update-to-my-JavaScript-Behance-API">http://www.raymondcamden.co...</a>. I'll see if I can whip up a demo that shows 2 users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1846303130">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GWlXYsP88x.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1846303130">40</a> (In reply to <a href="#c_1846246597">#39</a>) by Peter Easton
		posted on 2/10/2015 at 8:38 PM
		</div>
		<div class="comment_text"><p>that would be great, thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1847151809">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1847151809">41</a> (In reply to <a href="#c_1846227079">#38</a>) by Raymond Camden
		posted on 2/11/2015 at 4:06 AM
		</div>
		<div class="comment_text"><p>It was done quickly, but you can see it here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FBehanceAPI%2Fblob%2Fmaster%2Fdemos%2Ftest4.html%3Am01mWmBt5NUG9x_6cka65i5RAiQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/BehanceAPI/blob/master/demos/test4.html">https://github.com/cfjedima...</a></p><p>Basically it is rather simple. Just use renderProjects N time. In each case, change the user and div to populate the projects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2150354162">
	<div>
		<img src="https://disqus.com/api/users/avatars/missingthumb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2150354162">42</a> by Missing Thumb
		posted on 7/22/2015 at 4:59 AM
		</div>
		<div class="comment_text"><p>RE: your little CSS issue,</p><p>In your - div.behance_title img - Styles remove all margins, remove the float, give the image a position: absolute; and left: 19px;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2150855535">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2150855535">43</a> (In reply to <a href="#c_2150354162">#42</a>) by Raymond Camden
		posted on 7/22/2015 at 12:56 PM
		</div>
		<div class="comment_text"><p>Ah thanks. If I update this sample in the future I'll remember that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2218167430">
	<div>
		<img src="https://disqus.com/api/users/avatars/michael_algeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2218167430">44</a> by Michael Algeo
		posted on 8/26/2015 at 1:53 PM
		</div>
		<div class="comment_text"><p>I have a question regarding the styling. I was wondering if you could possibly help me out.</p><p>I'm wanting to match the style of this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwebdesign.tutsplus.com%2Ftutorials%2Fbuilding-an-instagram-based-portfolio-with-bootstrap--cms-22243%3A-0W59-gVurDJgf74jU2E79dys6c&amp;cuid=3321886" rel="nofollow noopener" title="http://webdesign.tutsplus.com/tutorials/building-an-instagram-based-portfolio-with-bootstrap--cms-22243">http://webdesign.tutsplus.c...</a></p><p>But I don't know where to add my css. Like the description area, photo area and such.</p><p>Any ideas where to begin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2219948084">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2219948084">45</a> (In reply to <a href="#c_2218167430">#44</a>) by Raymond Camden
		posted on 8/26/2015 at 9:53 PM
		</div>
		<div class="comment_text"><p>If I remember right, I embed the CSS towards the end of the JS. You can see the definitions there - and that is where you would begin modifying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2220736178">
	<div>
		<img src="https://disqus.com/api/users/avatars/michael_algeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2220736178">46</a> (In reply to <a href="#c_2219948084">#45</a>) by Michael Algeo
		posted on 8/27/2015 at 10:07 AM
		</div>
		<div class="comment_text"><p>Perfect! I'm glad you seen this! I thought I'd let you know, I got it to work my way using the API and demos you had posted on GitHub. I hope you know I greatly appreciate this. I recommend everyone to give that a try. I've also recommended it in my comments.</p><p>I'm trying to prep my portfolio website you see :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521563894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521563894">47</a> by Tim Barkley
		posted on 2/18/2016 at 5:18 PM
		</div>
		<div class="comment_text"><p>Hey there, I really appreciate this post! <br>How would I go about having the links open in a new window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521665989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521665989">48</a> (In reply to <a href="#c_2521563894">#47</a>) by Tim Barkley
		posted on 2/18/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p>Also, how to change the number of projects that show up</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521812614">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521812614">49</a> (In reply to <a href="#c_2521563894">#47</a>) by Raymond Camden
		posted on 2/18/2016 at 7:18 PM
		</div>
		<div class="comment_text"><p>Modify the code that generates the link to include target="_new".</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521818031">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521818031">50</a> (In reply to <a href="#c_2521665989">#48</a>) by Raymond Camden
		posted on 2/18/2016 at 7:21 PM
		</div>
		<div class="comment_text"><p>I believe thats in the URL value - I think the 10 there should be changed. You would need to check on the Behance side though to see if it is supported.</p></div>
	</div>
</div>
		