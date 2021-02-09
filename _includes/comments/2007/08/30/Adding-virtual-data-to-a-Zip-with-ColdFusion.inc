
<div class="comment" id="c_1713671162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671162">1</a> by Ben Nadel
		posted on 8/30/2007 at 10:36 PM
		</div>
		<div class="comment_text"><p>Yeah, that is one of the things I was thinking (file requirements). Going old school with the zip Java libraries, you could always just write to a byte stream instead of a file output stream. Then you just have the binary in memory.</p><p>I with the CFImage people talked to some of the other "departments" as there are a number of CFImage features that *should* be used elsewhere such as:</p><p>- Saving to a variable<br>- reading in both RELATIVE and expanded paths</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671168">2</a> by Rob Rawlins
		posted on 8/31/2007 at 1:42 PM
		</div>
		<div class="comment_text"><p>Yeah,</p><p>I remember having a similar conversation with you a while back Ben about your zip utility and the benefits to me of being able to work 'in memory' with compressed data.</p><p>Its somthing I never got around to testing for processor and memory usage, but I serve a lot of data through my web services some of which is pretty substantial stuff and bandwidth for the recieving client is a big issue, so I always compress the data before I ship it out.</p><p>At the moment that requires writing the zipped data to disk, reading its brinary which is served to the client, and then deleting the zipped data from the file system, it works a charm like this, I just hate writing files like this so regularly to the file systemm, it'll only be a matter of time untill it falls over.</p><p>Somthing which procudces an in memory blob would be great, I'm sure memory usage wouldnt be a massive issue, unless we're talking about massive files, but even if we were we're talking about very short periods of time it would be sitting in memory in the local var scope, It's just about finding the most efficient way of handling it.</p><p>Rob</p></div>
	</div>
</div>
		