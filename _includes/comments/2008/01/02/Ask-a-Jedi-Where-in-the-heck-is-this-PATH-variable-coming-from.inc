
<div class="comment" id="c_1713675839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675839">1</a> by Mike Rankin
		posted on 1/3/2008 at 2:29 AM
		</div>
		<div class="comment_text"><p>Wouldn't it be great if there were a switch on the server that just let you set the unnamed scope to "variables"?  Code that takes advantage of the scope cascade just feels like horrible kludges to me.</p><p>I wonder if there is a reason that the scope cascade has to be maintained other than for backward compatibility issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675857">2</a> by Ben Nadel
		posted on 1/3/2008 at 2:31 AM
		</div>
		<div class="comment_text"><p>This can be particularly annoying because it doesn't show misspellings:</p><p>#CGI.scrip_name#</p><p>... very easily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675851">3</a> by Raymond Camden
		posted on 1/3/2008 at 2:34 AM
		</div>
		<div class="comment_text"><p>What are these "misspellings" you speak of?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675852">4</a> by Scott P
		posted on 1/3/2008 at 3:27 AM
		</div>
		<div class="comment_text"><p>Looks familiar to this old post:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2006%2F3%2F26%2FYet-Another-Variable-Scoping-Warning%3ALz4qMa5D6FC04XCleTDOHihHPns&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2006/3/26/Yet-Another-Variable-Scoping-Warning">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675853">5</a> by Raymond Camden
		posted on 1/3/2008 at 3:39 AM
		</div>
		<div class="comment_text"><p>Well come on, that was almost two years ago. I got to be allowed to repeat myself _some_ times. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675855">6</a> by Adam Cameron
		posted on 1/3/2008 at 2:17 PM
		</div>
		<div class="comment_text"><p>Just as well they allow misspellings.  cgi.REFERER, indeed ;-)</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675854">7</a> by Geoff
		posted on 1/3/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>Another good reason to use StructKeyExists instead of IsDefined:</p><p>&lt;cfif structkeyexists(cgi,"scrip_name")&gt;<br>	Key exists!<br>&lt;cfelse&gt;<br>	Key doesn't exist!<br>&lt;/cfif&gt;<br>&lt;br /&gt;<br>&lt;cfif isdefined("cgi.scrip_name")&gt;<br>	Is defined!<br>&lt;cfelse&gt;<br>	Is not defined!<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675856">8</a> by Kam
		posted on 1/3/2008 at 7:21 PM
		</div>
		<div class="comment_text"><p>I remember some version of Apache 2.0.x would also expose environment variables in the CGI scope (on Windows, anyway). I was using a variable called "systemroot" and ran into the same  'wheres this value coming from?' issue. Interestingly, dumping the CGI scope didn't show the environment variables' existence.</p></div>
	</div>
</div>
		