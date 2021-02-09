
<div class="comment" id="c_1713622456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622456">1</a> by Laura
		posted on 11/8/2005 at 6:03 AM
		</div>
		<div class="comment_text"><p>I had the same issue in my local test machine, and I thought it was because I had downloaded the latest Model-Glue version!<br>Please let me know when you get it resolved.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622458">2</a> by Frank C
		posted on 11/8/2005 at 10:25 AM
		</div>
		<div class="comment_text"><p>I had a similar issue after installing the CFC adapter - a Mach-II application I am developing stopped working with an "is not type of" error in the core framework code.</p><p>Good reminder to be careful where you deploy alpha software :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622457">3</a> by johnb
		posted on 11/8/2005 at 1:04 PM
		</div>
		<div class="comment_text"><p>yep, it had me completely baffled as well! I have two CF instances on my laptop pointing at the same code base - one instances ran my MG stuff, the other didn't, I didn't even think about the CF adapter!! Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622462">4</a> by johnb
		posted on 11/8/2005 at 1:21 PM
		</div>
		<div class="comment_text"><p>and i just removed the adapter and the app has sprung back into life!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622459">5</a> by Michael van Leest
		posted on 11/8/2005 at 1:41 PM
		</div>
		<div class="comment_text"><p>Yeah.... I've seen this too.<br>Maybe it has something to do with mappings? Because the examples from Mike Nimer work fine with the cfadapter, but those cfc's are in the CFIDE mapping/folder.</p><p>I'm going to try and debug this today.... Michael</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622461">6</a> by jim collins
		posted on 11/8/2005 at 7:47 PM
		</div>
		<div class="comment_text"><p>Is this related in any way to the CFC Proxy that was released in 7.01?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622463">7</a> by Raymond Camden
		posted on 11/8/2005 at 7:54 PM
		</div>
		<div class="comment_text"><p>Jim - don't know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622464">8</a> by Angus Johnson
		posted on 11/11/2005 at 9:58 AM
		</div>
		<div class="comment_text"><p>Phew at least I'm not the only one who hasn't been able to get the adapter running. Same problem at our end with return type errors on any mapped cfc's whether they are Tartan, MachII, or our own service API.</p><p>Removed the adapter and everything back to normal. Have to fire up a dedicated instance to play.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622466">9</a> by Drew
		posted on 4/5/2006 at 4:15 AM
		</div>
		<div class="comment_text"><p>Hi everyone,<br>I have the same problem here but don't know what or how to remove the cf adapter.  Can someone give a noob the how tos for this?</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622460">10</a> by Angus Johnson
		posted on 4/5/2006 at 5:43 AM
		</div>
		<div class="comment_text"><p>Hi Drew,</p><p>This issue has been resolved in the latest Beta version of the adapter. You will need to grab that off Macromedia labs, after uninstalling the alpha version. Instructions are on that site.</p><p>Check out the below mailing list for other install issues...<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mail-archive.com%2Fflexcoders%2540yahoogroups.com%3AfQBwhVH_poobYnISbfYrPtQ1wy0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mail-archive.com/flexcoders%40yahoogroups.com">http://www.mail-archive.com...</a></p><p>I think you should find the install much easier. (Note there is a bug in the installer if you are running the J2EE multi server configuration. A work around is in the mailing list).</p><p>Cheers<br>Angus</p></div>
	</div>
</div>
		