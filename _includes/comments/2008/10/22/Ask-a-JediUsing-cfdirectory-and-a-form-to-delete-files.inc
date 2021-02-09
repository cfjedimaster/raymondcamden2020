
<div class="comment" id="c_1713709268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709268">1</a> by Elliott Sprehn
		posted on 10/23/2008 at 9:31 AM
		</div>
		<div class="comment_text"><p>Bad bad bad!!!</p><p>You should be using getFileFromPath() on the file in the fileExists() and &lt;cffile action="delete"&gt;.</p><p>With what you have there I can pass a random path that contains ../../ and delete all the .cfm/.cfc files on your entire server! (Also probably everything else that the JRun user has permissions on)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709272">2</a> by Joe Smith
		posted on 10/23/2008 at 11:37 AM
		</div>
		<div class="comment_text"><p>Thanks Muchly this has helped alot! I've managed to recreate this perfectly. As for Elliott's comment, this is only a school project and wont be accessible externally but i appreciate the concern.</p><p>Thanks Again Raymond =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709271">3</a> by John Whish
		posted on 10/23/2008 at 2:08 PM
		</div>
		<div class="comment_text"><p>@Joe, great to see ColdFusion being used for a school project! Good luck :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709273">4</a> by Raymond Camden
		posted on 10/23/2008 at 3:15 PM
		</div>
		<div class="comment_text"><p>Elliot, ok, ok ok! (Does saying it 3 times make it more true? ;)</p><p>Good point - here is the modified cfif block Joe.</p><p>&lt;cfif fileExists(directory &amp; "/" &amp; getFileFromPath(f))&gt;<br>	&lt;cffile action="delete" file="#directory#/#getFileFromPath(f)#"&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709274">5</a> by Elliott Sprehn
		posted on 10/23/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Hah, sorry about that ;)</p><p>It would be great if you'd fix the actual post though. For the same reasons posting sample code without cfqueryparam is dangerous, posting this is dangerous.</p><p>People copy and paste code and model code on well known, respected blogs, from respected developers... like you! And if that code has security flaws they get propagated all over the place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709269">6</a> by Raymond Camden
		posted on 10/23/2008 at 7:22 PM
		</div>
		<div class="comment_text"><p>Agreed and updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709270">7</a> by Elliott Sprehn
		posted on 10/24/2008 at 1:18 AM
		</div>
		<div class="comment_text"><p>Thanks!</p></div>
	</div>
</div>
		