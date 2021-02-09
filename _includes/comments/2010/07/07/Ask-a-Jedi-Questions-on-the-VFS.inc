
<div class="comment" id="c_1713724967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724967">1</a> by Saul
		posted on 7/7/2010 at 7:35 PM
		</div>
		<div class="comment_text"><p>I had a light just half come on! For downloading stats extracts I write my database query to a file using cfspreadsheet, then temporarily copy it to a location below webroot whilst giving the user the link. The accessible file is autodeleted 30 seconds later. Sounds like I could simplify this, is there some soft of cache/expire option on the file in memory Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724965">2</a> by Raymond Camden
		posted on 7/7/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>Nope, the "file" exists forever - or until the server restarts. If the server never restarts, it will never go away. You can check the 'last mod' property of the file (it should reflect when it was copied to ram) and delete it with a scheduled task.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724953">3</a> by Raymond Camden
		posted on 7/7/2010 at 10:15 PM
		</div>
		<div class="comment_text"><p>I want to point out a misleading statement I made above. I brought up the example of how VFS could be used to boost things when doing multiple image operations. You can use an images in ram (and by that I don't mean VFS, just a normal image variable) and perform multiple operations there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724968">4</a> by Adam Cameron
		posted on 7/8/2010 at 10:54 AM
		</div>
		<div class="comment_text"><p>G'day.</p><p>I would be very very cautious about putting large files in the VFS.  The VFS impinges on heap space, which - despite a 64-bit architecture's advances in addressable space - could very quickly be swallowed up by a couple of large files.  Obviously one can throttle the total available space to the VFS so one can allocate a finite storage area, but it's still an important consideration.</p><p>If dealing with large files as per the original poster's query, one is going to have to set the VFS size large enough to accommodate the maximum expected file size, which - I think (I should check before saying this, but I haven't) - will allocate that amount of RAM on server start-up, which'll mean that amount of RAM will be unavailable to CF for "normal" heap usage right from the outset, whether the VFS space is being used or not.  Not a good use of resources.</p><p>Until the VFS can be homed in a different heap from the one CF itself uses, I think its usefulness is limited.</p><p>As Ray has cited, it could be leveraged for dynamic CFM files (and I agree with Ray's caveats here), but I question even the merits of this.  Most of the performance overheads with dynamic CFM files is the compilation, not the file-system-fetch.  On a decent server, file-system fetching is really really quick anyhow: nothing like fetching from RAM, but still - when considering the time-cost of fulfilling a request - I don't think it's usually a major consideration.  So I would think gains in using the VFS would be minimal here, when played off against resource consumption and management.  For dynamic file reuse, I'd just leverage the fact that CF caches its templates in RAM already anyhow, and has intelligent management of how it ages / clears seldom-used templates from that cache.</p><p>I'd love to hear of someone's experiences in using the VFS in a production environment where the gains over using the normal file system have been measured, and a true benefit identified.  So far all I've really heard is people citing the theory that "well RAM is faster than disk therefore using the VFS is a great boon for operations that need that edge".  I've heard nothing "real".</p><p>If I was wanting to use a RAMdisk, I think I'd set it up at OS level, rather than in CF.  Leave CF to processing CF files.  That's what it's good at.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724962">5</a> by Gov
		posted on 7/8/2010 at 2:36 PM
		</div>
		<div class="comment_text"><p>My guts tells me to agree with Adam, but would like to see some real world case studies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724966">6</a> by ronnie
		posted on 8/30/2013 at 11:35 PM
		</div>
		<div class="comment_text"><p>Does anyone know what the max limit of ram that can be allocated to VFS?  I've tried over 1 gb, and the free space gets returned as a negative number, and any attempts to write to the RAM results in a error message that the global limit is exceeded..</p></div>
	</div>
</div>
		