
<div class="comment" id="c_1713743896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743896">1</a> by Steve
		posted on 11/28/2012 at 8:20 PM
		</div>
		<div class="comment_text"><p>Very timely!  Just got a new server the other day and plan on putting CF10 on it and then migrate our site from it's current CF8 server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743891">2</a> by David McGuigan
		posted on 12/22/2012 at 10:32 AM
		</div>
		<div class="comment_text"><p>Awesome. Implementing shortly. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743893">3</a> by Jim
		posted on 5/16/2013 at 6:36 PM
		</div>
		<div class="comment_text"><p>Are there errors in the lockdown guide?</p><p>1) It says to create the cfadmin directory, but then it doesn't say anything about copying anything to it.  Are you supposed to copy what's under the Coldfusion cfusion\wwwroot to your new cfadmin folder?  If you do, will the updates then fail since it does not know where the actual CFIDE is or do you have to copy it over again after each update.</p><p>2)  Moving the CFIDE appears to break the updates, the accordions are gone and when I click on "Download" nothing happens though the rest of the administrator appears to work.</p><p>Any help appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743894">4</a> by Jim
		posted on 5/16/2013 at 7:39 PM
		</div>
		<div class="comment_text"><p>I figured out part of my problem.  I had to include a cf-scripts virtual directory in the cfadmin web site pointing to the scripts folder.  That fixes the accordion/download issue.</p><p>But the other issue is that now the updater does not know where CFIDE is, does it?  You set where the scripts directory is, but not the CFIDE.  Do you have to copy it over after every update?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743897">5</a> by Raymond Camden
		posted on 5/16/2013 at 9:24 PM
		</div>
		<div class="comment_text"><p>Jim, I'd reach out to Pete Freitag at Foundeo. He is the author of the document.</p></div>
	</div>
</div>
		