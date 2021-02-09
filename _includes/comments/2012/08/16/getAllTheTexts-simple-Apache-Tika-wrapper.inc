
<div class="comment" id="c_1713742548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742548">1</a> by Harry
		posted on 8/17/2012 at 3:45 PM
		</div>
		<div class="comment_text"><p>I am not sure why you are not using the Tika Method parseToString()?<br>e.g.<br>oTika = createObject("java", "org.apache.tika.Tika");<br>sContent = oTika.parseToString( FileInputStream );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742545">2</a> by Raymond Camden
		posted on 8/17/2012 at 3:59 PM
		</div>
		<div class="comment_text"><p>Because I wanted the metadata too. Actually, the person who asked me to write this didn't ask for it - but I was impressed by the level of metadata Tika returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742556">3</a> by Raz
		posted on 9/9/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>Hi, I tried your the code but I'm getting an error:<br> 	The setContextClassLoader method was not found.</p><p>please see the complete stack trace at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FUiYeREFS%3A-g5Htt0rucf7v76xXrZ2t3qN0Zg&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/UiYeREFS">http://pastebin.com/UiYeREFS</a></p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742547">4</a> by Raymond Camden
		posted on 9/9/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>Weird - that is coming from JavaLoader itself. What version of ColdFusion are you running?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742550">5</a> by Raz
		posted on 9/10/2012 at 4:46 AM
		</div>
		<div class="comment_text"><p>CF9</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742549">6</a> by Raymond Camden
		posted on 9/10/2012 at 6:15 AM
		</div>
		<div class="comment_text"><p>I'm on CF10. Hmmm. Maybe try the released JavaLoader? The one I have in Github is from a development branch in JavaLoader, not the release version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742552">7</a> by Joel Stobart
		posted on 1/4/2013 at 7:01 PM
		</div>
		<div class="comment_text"><p>I can't get this to work; I get the same error. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742551">8</a> by Raymond Camden
		posted on 1/4/2013 at 7:30 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is checking w/ Mark Mandel since it is a JavaLoader issue (afaik).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742554">9</a> by Kelly
		posted on 6/7/2013 at 2:46 AM
		</div>
		<div class="comment_text"><p>I am having same issue as above. I am running CF 10. Did anyone solve this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742553">10</a> by Joel Stobart
		posted on 6/7/2013 at 4:33 PM
		</div>
		<div class="comment_text"><p>I did get it to work in the end. But I can't remember exactly how, definitely something related to the version of the JavaLoader. If I have time I'll dig it out and get back to you.<br>- Joel</p></div>
	</div>
</div>
		