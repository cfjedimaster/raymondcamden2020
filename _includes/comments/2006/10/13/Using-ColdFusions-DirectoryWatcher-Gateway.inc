
<div class="comment" id="c_1713658245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658245">1</a> by TJ Downes
		posted on 10/14/2006 at 1:38 AM
		</div>
		<div class="comment_text"><p>I think i'll build a test for this, maybe create a CFWinClam Antivirus for CF Uploads.</p><p>Pretty easy, watch the directory using your Gateway, use cfexecute to fire off an Antivirus scan on a file that's been uploaded to the web root. This would potentially avoid the need to use a real-time AV scanner on the server.</p><p>If you've used a number of the commercial real time scanners like me, you may have experienced file-locking issues or performance problems. <br>I'm wondering how it handles temp files, file locks, etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658248">2</a> by TJ Downes
		posted on 10/14/2006 at 1:41 AM
		</div>
		<div class="comment_text"><p>OOps, I did it again! ClamWin, not Winclam. That's important to know if you are researching it... Winclam results in a bunch of suspicious looking sites plastered with banners and popups.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658247">3</a> by Raymond Camden
		posted on 10/14/2006 at 1:48 AM
		</div>
		<div class="comment_text"><p>Banners and popups? How gauche.</p><p>(Now pardon me while I add some more Adsense love here... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658252">4</a> by Neil Bailey
		posted on 10/16/2006 at 7:07 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>VERY, *very* cool.  However, I have one question:  can I monitor multiple directories, and if so, can I fire off a different reaction for each one (directory one calls dirOneOnAdd or whatever)?</p><p>THAT would be the freaking coolest thing ever...or at least this weekend :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658249">5</a> by Raymond Camden
		posted on 10/16/2006 at 7:15 AM
		</div>
		<div class="comment_text"><p>Remember that each EG Instance has a config file. So you can easily monitor N directories with N EG instances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658253">6</a> by Andi Setiyadi
		posted on 10/16/2006 at 9:35 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I tested the DirectoryWatcher, I have one question.  In onAdd or onChange function, if I tried to call a cfc that reside in other folder, it said that the cfc could not be found.  I tried several ways, the only way to make the cfc call works, ONLY if I put the handler/listener cfc in the same folder of the cfc that I am trying to invoke.</p><p>Is this a bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658251">7</a> by Raymond Camden
		posted on 10/16/2006 at 3:23 PM
		</div>
		<div class="comment_text"><p>You need to make a CF mapping I believe. If your mapping was stuff and your cfc was named doit, then you could then make an instance of stuff.doit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658246">8</a> by Jim Sidway
		posted on 1/8/2014 at 9:02 PM
		</div>
		<div class="comment_text"><p>Excellent tutorial. I was hopeful I could set up a DirectoryWatcher Gateway to log changes to files in a particular directory.  For some reason after adding a DirectoryWatcher Gateway Instance in CF 10 Developer and having enabled ColdFusion Gateway Services on the Settings page when I try to start the instance I created I'm told "Unable to start event gateway instance: Event Gateway Service is not enabled".  I tried searching on this but found little about a fix and nothing that helps me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658259">9</a> by Raymond Camden
		posted on 1/8/2014 at 10:01 PM
		</div>
		<div class="comment_text"><p>Hmm, honestly, I don''t know. I haven't used CF Event Gateways in - well - probably almost as long as this blog post is old. ;) No suggestions outside of ringing up support - but maybe someone else who commented here will know. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658250">10</a> by JD
		posted on 8/28/2014 at 10:55 PM
		</div>
		<div class="comment_text"><p>RE: Unable to start event gateway instance - I have this problem, too.  Check your Sandbox Security.  If it's on, turn it off and try it, it will most likely start.</p><p>Yet another thing that is being blocked by Sandbox Security after the JVM 7.55 update.  Solr collections are breaking, for me, as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658254">11</a> by kannan
		posted on 9/12/2014 at 1:55 AM
		</div>
		<div class="comment_text"><p>---Unable to start event gateway instance---<br>this below link will help you to avoid this problem. <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F15395819%2Funable-to-start-event-gateway-instance-event-gateway-service-is-not-enabled%3AHtAOzLPKMwGMkdMXsBx81baM4zY&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/15395819/unable-to-start-event-gateway-instance-event-gateway-service-is-not-enabled">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		