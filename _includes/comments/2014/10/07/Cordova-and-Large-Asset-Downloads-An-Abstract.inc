
<div class="comment" id="c_1714084103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084103">1</a> by Greg Hudy
		posted on 10/8/2014 at 1:41 AM
		</div>
		<div class="comment_text"><p>I have more or less built this and have ran into a few pitfalls along the way, but have a very successful platform now.  Your high level description is right on target and I used jQuery Mobile as well for a few of the interface items.<br>Parse worked great for a bit, but only could manage files up to 10 MB, so a show stopper there.  Also, it wasn't that great of an interface for clients that were not "tech savvy".  I could continue on - if there are other questions that come up, i can try to answer them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084101">2</a> by Nick Collins
		posted on 10/8/2014 at 2:28 AM
		</div>
		<div class="comment_text"><p>I keep thinking it would be SO nice if Jack Kelly were to port his LoaderMax library to JavaScript and Cordova, as he did GSAP, giving us a nice API for queueing and loading files of various types, with progress tracking and events for each queue/file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084102">3</a> by Rob Colburn
		posted on 10/8/2014 at 5:31 AM
		</div>
		<div class="comment_text"><p>I'll say that I've built similar mechanisms on platforms that are more and less agreeable that iOS. The real challenge is if you require actual transactions (cards, paypal, bitcoin, pick your poison(s)). Because, you'd then need to manage transaction state, and you can no longer trust the client. You can reasonably trust the client if you deal in entirely virtual money/rewards because you don't mind cheating.  Going back to the stated problem, there plenty of great ways to handle things. You've got a local db, file-system and cookies at your disposal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084107">4</a> by Tobias Kausch
		posted on 10/8/2014 at 11:35 AM
		</div>
		<div class="comment_text"><p>I will also build a system like this and it will be interesting to follow your ideas here.<br>What I also planned was a tag to give version numbers to files in case I need to update them. So when the application checks if the file exists it will check also if the version number is smaller then the one listed in the json file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084105">5</a> by Amrudesh Santhanam
		posted on 10/8/2014 at 3:11 PM
		</div>
		<div class="comment_text"><p>I just recently built in this same method you have mentioned in an Ionic / Angular JS app that I am building (talking to a REST API). Am using ngCordova too to for the file download functions. Does help.  and its pretty straight forward. I do not use ngCordova fully though bcoz I dont find a way to use 'dataDirectory', 'applicationDirectory' etc in it. It still refers to localFileSystem.PERSISTENT. Do suggest if I should still use ngCordova fully.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084106">6</a> by Raymond Camden
		posted on 10/8/2014 at 3:13 PM
		</div>
		<div class="comment_text"><p>@Amrudesh: Well, I think your last question is a bit OT for this blog post, but, the short answer is that the best thing to do is simply file a bug report with the ngCordova project. You can do so here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdriftyco%2Fng-cordova%2Fissues%3A2-YyabotjbCBbbYE7xC9zqIcMqE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/driftyco/ng-cordova/issues">https://github.com/driftyco...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084108">7</a> by Amrudesh Santhanam
		posted on 10/8/2014 at 3:23 PM
		</div>
		<div class="comment_text"><p>@Raymond . Ya. True. Could have avoided that. Just got carried away. And yes, I have also filed that bug report. Thnx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084109">8</a> by Erin Doyle
		posted on 10/8/2014 at 5:04 PM
		</div>
		<div class="comment_text"><p>I've actually started working on a design for something very similar.  We need the ability to update or add certain images to our app.  They won't change very often but often enough that we want to be able to host the images on the server and when there is a new or updated image the app downloads it and stores it in the file system.  I was in fact looking at the example you posted here as a model: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fhtml5%2Farticles%2Freal-world-example-html5-filesystem-api.html%3AkQ3NlX4gBjI1kLlQKM_K4WcNBWY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/html5/articles/real-world-example-html5-filesystem-api.html">http://www.adobe.com/devnet...</a></p><p>I think what we're going to do is make the API resource able to accept some parameters like lastModifiedDate.  The resource will then zip up whatever images have been added or modified since that date and sent back in the response.  If no parameters are provided it will include all of the images.  What I really like about your example was the ability to make a HEAD request to check the Last-Modifed date of the resource and let the client determine if it is already up-to-date or if it needs to request any new/updated resources.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084110">9</a> by Raymond Camden
		posted on 10/8/2014 at 6:23 PM
		</div>
		<div class="comment_text"><p>@Erin: Re that article: I considered mentioning that, but I haven't tested the library under Cordova. Not sure how well it would perform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084112">10</a> by Erin Doyle
		posted on 10/8/2014 at 7:34 PM
		</div>
		<div class="comment_text"><p>Great point Ray, I often find it challenging, without actually testing it out first, to decide when it's better to go with multiple smaller separate requests versus one big one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084113">11</a> by Erin Doyle
		posted on 10/8/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>@Tobias: What is your plan for where you were going to store the version number for each file?</p><p>I also originally was thinking of using a version for files in my design and then decided to go with checking the last modified time instead.  I figured if I can just use the file system API to give me metadata about the files I already have then I can avoid using a database on the client to store this information.  But I'm having trouble figuring out what all is included in the Metadata object.  All I can find is the modificationTime property.  It would be great if we could add other properties when we store files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084114">12</a> by Tobias Kausch
		posted on 10/8/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>@Erin: Your idea with the last modified date is quite good. But I wanted to start really slow and not develop a sever that has all the logic needed to make the selection of modified files since $date.</p><p>My idea was, to have something small working without much work. To edit the json list myself and change the version number as I replace the files in the folder.<br>Then the app would check its internal list (in localstorage) and compare the version numbers with the ones in the json list. -&gt; then download everything that is smaller and replace + set the new version number.</p><p>Well, as I said it's quite a manual approach at the beginning. I'll have to develop some kind of server that can manage version numbers on its own to become more efficient.</p></div>
	</div>
</div>
		