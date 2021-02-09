
<div class="comment" id="c_1713720391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720391">1</a> by Ben Riordan
		posted on 12/9/2009 at 9:57 AM
		</div>
		<div class="comment_text"><p>Even with just these two entries published thus far, this is awesome to follow through these apps as a new CF developer. Learning a lot. Thanks to you all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720389">2</a> by Brad Wood
		posted on 12/9/2009 at 11:49 AM
		</div>
		<div class="comment_text"><p>"No cfscript components (YAY FOR TAGS!)"</p><p>That's funny, I thought this was "The Best of ColdFusion 9 Contest" not "The Best of DBML"  :)</p><p>Cool project Ben, the UI looks slick!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720390">3</a> by Ben Nadel
		posted on 12/9/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>First off, thanks for letting me participate in this stuff :) It was a lot of fun.</p><p>As far as the THIS-scoping in my internal method calls, this is a personal preference thing. For some reason, and maybe this is a carry over from Javascript, but I just have this huge urge to scope ALL of my method calls. Seeing a method just sitting out there, alone, without any scope just sort of makes me sad :)</p><p>Of course, this leads to another issue - pre CF9, you couldn't scope private methods AND use named-arguments. IE. the following would throw an error:</p><p>variables.doSomething( foo = "bar" )</p><p>As such, I simply made all of my methods public such that I could use the THIS scope when invoking them.</p><p>I have to say, though, even with this variables-scope issue being fixed in CF9, scoping private method calls might take some getting used to as I simply don't like typing out "variables". I guess I am lazy that way. Plus, I don't think it looks nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720392">4</a> by Marko Simic
		posted on 12/9/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>Nice and sleek. No wai to lost yourself in Ben's code.<br>I always appriciated when ppl are able to do things that way, regartless the fact I never was :)<br>(this is the place where I say "good bless framewroks")<br>As regular reader of his blog, I used to on his coding style. Dynamic app name is kinda of his signature.<br>I tried to open my GMail account, which holds gazillion of emails, and app breaks on &lt;cfimap action="getall".../&gt;. <br>But it works when I limit number of emails to retreive (ie MaxRows=50).</p><p>+1 prefixing vars with "variables" sucks<br>+1 don't like "this" scoping of methods<br>+1 Latest Muse album is brilliant</p><p>As consequence of its artistic simplicity, app is bug free ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720396">5</a> by Sam Farmer
		posted on 12/9/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>Cool app Ben.  I had to set maxrows as suggested by Marko but then it worked great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720393">6</a> by Ben Nadel
		posted on 12/9/2009 at 11:07 PM
		</div>
		<div class="comment_text"><p>Oooh right, maxrows. Yeah, the test account I was working with only had like 3 emails in it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720397">7</a> by Mike Chandler
		posted on 12/10/2009 at 1:26 AM
		</div>
		<div class="comment_text"><p>To clarify, is Dan saying that he prefers tag based CFCs versus those that use cfscript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720395">8</a> by Gary Funk
		posted on 12/10/2009 at 4:28 AM
		</div>
		<div class="comment_text"><p>@MIke: Who is this Dan you speak of?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720399">9</a> by Raymond Camden
		posted on 12/10/2009 at 4:38 AM
		</div>
		<div class="comment_text"><p>The entry was reviewed by Dan Short. About 70% of the 16 entries are being judged by other members of the Adobe Community Experts program. I'm taking their reviews in, massaging them a bit, and posting them. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720394">10</a> by Gary Funk
		posted on 12/10/2009 at 5:33 AM
		</div>
		<div class="comment_text"><p>Yes. Yes it does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720401">11</a> by P. Smith
		posted on 1/2/2012 at 7:09 AM
		</div>
		<div class="comment_text"><p>Great app! It was exactly what I was looking for. I was able to add "Sent Mail" also. You can do this by modifying a cfimap to look in folder="[Gmail]/Sent Mail"</p></div>
	</div>
</div>
		