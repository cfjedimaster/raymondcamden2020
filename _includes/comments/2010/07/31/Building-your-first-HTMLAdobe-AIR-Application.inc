
<div class="comment" id="c_1713725741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725741">1</a> by Jen
		posted on 8/2/2010 at 9:47 PM
		</div>
		<div class="comment_text"><p>Do you need the SDK if you download Aptana?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725744">2</a> by Raymond Camden
		posted on 8/2/2010 at 9:48 PM
		</div>
		<div class="comment_text"><p>Good question - I think so. Let me test w/a vanilla install of Aptana later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725748">3</a> by ppshein
		posted on 8/3/2010 at 9:32 AM
		</div>
		<div class="comment_text"><p>I think, it doesn't need Adobe Air SDK if want to compile in Aptana. But, I need to install Adobe Air runtime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725747">4</a> by Raymond Camden
		posted on 8/3/2010 at 4:16 PM
		</div>
		<div class="comment_text"><p>Well, if it has the SDK, it should have the runtime. I didn't get a chance to reinstall yesterday, but I will today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725743">5</a> by Raymond Camden
		posted on 8/3/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Ok, I removed the AIR runtime and did some testing. With Aptana, I was able to run my AIR projects. I was able to package the AIR app. I was NOT able to run the .air file though as I had no system level AIR runtime. So in theory, you don't need the runtime to do most of your work. You can click Run all day long in Aptana, but at some point you really should install it. Just because.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725746">6</a> by Raymond Camden
		posted on 8/3/2010 at 11:32 PM
		</div>
		<div class="comment_text"><p>See related entries above. I posted the follow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725745">7</a> by Jason Dean
		posted on 8/4/2010 at 1:12 AM
		</div>
		<div class="comment_text"><p>One interesting (and nice) thing about Aptana is that you can point it at any SDK as well. So if I want to I can tell Aptana to run my application in AIR 1.0, 1.5, or 2.0 for compatibility testing.</p><p>I recently used this feature because I had users reporting errors after upgrading to 2.0. We had not upgraded, and things work fine. After trying both versions I saw that they were right.</p><p>So to answer the original question, Aptana comes with an SDK, which includes the runtime, so you don't need to download one separately, but you may want to keep separate copies of the SDK archived for testing, because when Aptana upgrades the default one it will always put you at the most recent version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725742">8</a> by Raymond Camden
		posted on 8/4/2010 at 1:19 AM
		</div>
		<div class="comment_text"><p>You say it includes the runtime - you sure? I'm still not able to run .air files on the test machine I used. I could debug/run em just fine from Aptana, but not actually run the .air file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725750">9</a> by Jason Dean
		posted on 8/4/2010 at 1:41 AM
		</div>
		<div class="comment_text"><p>Right, you can run them because it includes the runtime in the SDK.</p><p>It doe not install the runtime on the machine, it uses them right out of the SDK which is how I am able to run with different versions based on my setup.</p><p>Even if I do go and install the runtime on my machine for usign .air application, I can still run/debug my apps from Aptana using a different runtime, which is the one in the SDK that I have selected.</p><p>Does that make sense? It feels hard to explain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725749">10</a> by Raymond Camden
		posted on 8/4/2010 at 1:44 AM
		</div>
		<div class="comment_text"><p>No it makes sense - I guess we should clarify "run". :) There is the run you do via Aptana, and then the run of the AIR file, which Aptana by itself won't let you do since it is really an OS level thing.</p><p>Truth be told- any self-respecting AIR developer should just have the darn runtime already. ;) They can skip the SDK though if they want to keep things simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725753">11</a> by Jason Dean
		posted on 8/4/2010 at 3:17 AM
		</div>
		<div class="comment_text"><p>Well, they can't really skip the SDK if they are a developer. They need the SDK to debug/package. But Aptana comes with the SDK, so they don't need to get it separately. I suspect that is what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725766">12</a> by Raymond Camden
		posted on 8/4/2010 at 4:07 AM
		</div>
		<div class="comment_text"><p>Aye, better said. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725767">13</a> by niks
		posted on 2/16/2011 at 1:37 PM
		</div>
		<div class="comment_text"><p>Hi , <br>is there any way to use HTML/JavaScript and Flash to build an AIR application and publish it from flash?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725768">14</a> by Raymond Camden
		posted on 2/17/2011 at 2:51 AM
		</div>
		<div class="comment_text"><p>@niks: If you mean to 'create an AIR app' - not really. To build an AIR app you need to run Adobe's command line programs to create a build. AIR can run native programs. So you _could_ possibly do it.</p><p>What's easier is using an AIR app to spit out AIR code - which is what AIRLaunchpad does.</p></div>
	</div>
</div>
		