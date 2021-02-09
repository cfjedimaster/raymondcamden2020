
<div class="comment" id="c_1713661832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661832">1</a> by Peter Bell
		posted on 2/4/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>Well, I think Kevin is looking for some sample apps. Anything from your prodigious portfolio you might be interested in porting to FB?! :-&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661848">2</a> by Raymond Camden
		posted on 2/5/2007 at 7:41 PM
		</div>
		<div class="comment_text"><p>My intent was to start slow and simple. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661846">3</a> by Peter Bell
		posted on 2/5/2007 at 7:50 PM
		</div>
		<div class="comment_text"><p>Absolutely! If you could maybe port BlogCFC and Canvass this week and then work up to something bigger?!</p><p>:-&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661847">4</a> by Raymond Camden
		posted on 2/5/2007 at 7:58 PM
		</div>
		<div class="comment_text"><p>Suuuuure. I'll also release the CMS I've been working on as well. Oops, did I say that out loud?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661831">5</a> by Peter Bell
		posted on 2/5/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>Perfect! Don't suppose I could just give you specs for all my projects and ask you to write them for me and release them as OSS as a service to the community?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661840">6</a> by sadas
		posted on 2/12/2007 at 2:53 PM
		</div>
		<div class="comment_text"><p>asdas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661842">7</a> by Douglas Viltrakis
		posted on 12/25/2007 at 4:37 AM
		</div>
		<div class="comment_text"><p>Very strange behavior happenings to a newbie!namely myself</p><p>I was using the "Most Excellent Tutorial" by the<br>incredible "John Beynon" , using his files as well.</p><p>bizare Fusebox550 behavior.</p><p>this link works without an xfa entry in circuit.xml.cfm?????<br>&lt;cfoutput&gt;<br>&lt;a  href="#request.myself#learnfb.hello"&gt;<br>&lt;/cfoutput&gt;</p><p>this is the actual circuit.xml.cfm file in it's entirety:<br>with no XFA name=... Entry<br>&lt;circuit access="public"&gt;</p><p>    &lt;fuseaction name="hello"&gt;<br>    	&lt;include template="dsp_hello.cfm"/&gt;<br>    &lt;/fuseaction&gt;<br>    &lt;fuseaction name="welcome"&gt;<br>    	&lt;include template="dsp_welcome"/&gt;<br>    &lt;/fuseaction&gt;</p><p>&lt;/circuit&gt;<br>------------------------------------------<br>NO ENTRY FOR ANY XFA and the LINK WORKS!<br>-------------------------------------------<br>1-)The fusebox.xml.cfm has a setting for the fuseaction variable.<br>&lt;parameter name="fuseactionVariable" value="fuseaction"/&gt;</p><p>2-)The Application.cfm has the following two entries:<br>&lt;cfset request.self = "index.cfm"&gt;<br>&lt;cfset request.myself = "#request.self#?fuseaction="&gt;</p><p>3-)fusebox550  has a mapping in coldfusion as /fusebox5</p><p>[Hello World!(this appears in browser)</p><p>This is the Welcome page.</p><p>Send me off to the learnfb.hello cicuit/fuseaction]</p><p>SENDS me to:</p><p>[Hello World! (appears in browser)</p><p>This is the Hello page]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661843">8</a> by Douglas Viltrakis
		posted on 12/25/2007 at 4:47 AM
		</div>
		<div class="comment_text"><p>Disregard my last post , in the next lesson<br>I create an xfa variable and everything is fine</p></div>
	</div>
</div>
		