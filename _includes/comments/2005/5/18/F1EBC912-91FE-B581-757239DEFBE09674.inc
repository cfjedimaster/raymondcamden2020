
<div class="comment" id="c_1713618526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618526">1</a> by mark kruger
		posted on 5/20/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>Ray - did you ever figure out why this was the case or find a solution other than creating the folder? This is going to crop up on a couple of sites we are doing so I want to remember it. I just know I'm going to be beating my brains out trying to remember where I heard of this problem before (ha).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618529">2</a> by Raymond Camden
		posted on 5/20/2005 at 2:42 AM
		</div>
		<div class="comment_text"><p>Nope, sorry, no additional info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618528">3</a> by Cybernaz
		posted on 9/6/2005 at 1:29 AM
		</div>
		<div class="comment_text"><p>Where exactly did you create the folder on the server? I am having the same exact problems and am not able to turn flashremoting on at all. Also can you tell me what is the configuration on your gateway-config.xml file? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618527">4</a> by Raymond Camden
		posted on 9/6/2005 at 5:12 PM
		</div>
		<div class="comment_text"><p>I created the folders under web root. Note - I had a simular issue last week. I tried this solution and it didn't work. What I did instead was remove and then reinstall the IIS connectors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618530">5</a> by Anthony
		posted on 10/11/2005 at 7:53 PM
		</div>
		<div class="comment_text"><p>Hey ray, I see you haven't learned the source of the problem. I'm having the same, but I'll have to wait until off hours to reinstall the connector. But here's my question; Did you figure out how to quickly test remoting on CFMX 7 since going to the url doesn't work any more?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618533">6</a> by Raymond Camden
		posted on 10/13/2005 at 2:18 AM
		</div>
		<div class="comment_text"><p>No, I did not. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618531">7</a> by Dave Jones
		posted on 10/12/2006 at 6:16 AM
		</div>
		<div class="comment_text"><p>I ran into the same problem with a site I have on a shared hosted server. What I found that worked for me was to create an empty flex2gateway directory in my web root and that took care of the NetConnection.Call.BadVersion problem.</p></div>
	</div>
</div>
		