
<div class="comment" id="c_1713719450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719450">1</a> by Dan Roberts
		posted on 11/4/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>Ouch. I assume you've found this to be a problem with cfdump output and not the actual usage of the cfcs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719458">2</a> by Raymond Camden
		posted on 11/4/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>Correct. If you try to run the method, you get the standard error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719463">3</a> by salvatore fusto
		posted on 11/4/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>Hi Ray, are you sure this is not a problem of structure, or array, assignment? in other word, a memory problem of such type of data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719459">4</a> by Kyle
		posted on 11/4/2009 at 11:17 PM
		</div>
		<div class="comment_text"><p>Interesting Ray. Have you ever seen what happens in a shared hosting environment when you dump the application scope and your application doesn't have a name? It seems to not be able to find which one to dump, so it dumps all application scopes currently running on the server. Kinda scary if you store dsn's with usernames and passwords in the app scope. The CF architects at MAX this year said this may be a bug but were unaware of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719464">5</a> by Nathan Mische
		posted on 11/4/2009 at 11:20 PM
		</div>
		<div class="comment_text"><p>If the tags under WEB-INF/cftags were not pre-compiled we could fix this ourselves. (I'm pretty sure cfdump is implemented in CFML.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719466">6</a> by Raymond Camden
		posted on 11/5/2009 at 1:01 AM
		</div>
		<div class="comment_text"><p>@sal: It is purely a display issue - nothing more. Following up the 'bad' dump with a good dump shows the CFC as it should be.</p><p>@Kyle: Yep, this is a known issue. Either the engineers misunderstood you or ... or something else - but I know Sean (or I believe Sean) Corfield has mentioned this in the past.</p><p>@Nathan: It is - or it was back when I worked at Macromedia. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719468">7</a> by Tom Jenkins
		posted on 11/9/2009 at 4:43 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>This had been driving me crazy today! I thought all my functions were , for some reason, being duplicated into the other objects, making the process pointless. Annoying thing is I Read this blog entry and forgot about it :( It wasn't until a colleague pointed it out that the two instances clicked together!</p><p>Anyway thanks for confirming the problem</p><p>TJ</p></div>
	</div>
</div>
		