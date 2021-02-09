
<div class="comment" id="c_1713663238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663238">1</a> by Eric Cancil
		posted on 3/16/2007 at 12:58 AM
		</div>
		<div class="comment_text"><p>Why don't you just send an upload id to the backend that is the same for all of them?</p><p>also: this may be useful for you<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.3r1c.net%2F%3Fp%3D53%3AC7-USg2XceTelM4-jbQY2kmNha4&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.3r1c.net/?p=53">http://blog.3r1c.net/?p=53</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663239">2</a> by Raymond Camden
		posted on 3/16/2007 at 5:41 PM
		</div>
		<div class="comment_text"><p>Eric - I suppose you mean I should send a UUID of some sort? I could do that, but I'd still need to do some complex handling of it on the server side. Another problem is that I really do need to wait for the first image to finish. Since the first image inserts into the db and the thumbnail updates it, I need the first image done so I can then update the db row.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663236">3</a> by Jared Rypka-Hauer
		posted on 3/18/2007 at 9:18 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>As I understand it you can use a Flex ByteArray to send files thru the remoting gateway to do this, too... rather than doing an HTTP post. That's not an approach I've taken before though, so I can't say how it works.</p><p>You can't use the FileReferenceList, either, because the fileList property is read-only, meaning that this class is meant for selecting multiple files from a single dialog box.</p><p>That means that your approach is correct, and in fact the approach we just used in a project. I wish the fileList property on the FileReferenceList wasn't read-only, as it works the same way as your solution internally but it automates the whole process.</p><p>AFAIK, it's really the only way to solve your issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663243">4</a> by Raymond Camden
		posted on 3/19/2007 at 12:04 AM
		</div>
		<div class="comment_text"><p>Thanks for the sanity check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663241">5</a> by Danny
		posted on 10/4/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>Every time I trace the DataEvent.UPLOAD_COMPLETE_DATA event, it just returns data that consists of "\n\n\r\r\t\t" etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663242">6</a> by YUSRAINE
		posted on 4/1/2013 at 4:11 PM
		</div>
		<div class="comment_text"><p>can you put the code for flex upload your images</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663246">7</a> by Raymond Camden
		posted on 4/1/2013 at 5:29 PM
		</div>
		<div class="comment_text"><p>Sorry, I'd have no idea where to find this code. This post is over 6 years old now.</p></div>
	</div>
</div>
		