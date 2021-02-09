
<div class="comment" id="c_1713622168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622168">1</a> by Seth Petry-Johnson
		posted on 10/28/2005 at 2:08 AM
		</div>
		<div class="comment_text"><p>I handle this situation by checking for the existance of a variable called Request.RequireLogin.  If this value is TRUE and the user is not already logged in, then the redirect to the login page is triggered.</p><p>I usually use CFPARAM to provide a default value for this variable.  This way, I only need to give a specific value for those pages that have non-default behaviour.</p><p>IMHO this is better than maintaining a centralized list of pages that do (or do not) require the login.  As long as the variable is well documented, or even better is part of a common framework used by all pages of the site, there are few maintenance headaches with this approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622169">2</a> by Brian
		posted on 10/28/2005 at 2:50 AM
		</div>
		<div class="comment_text"><p>I have never really used the built in cflogin/cflogout structure on my ColdFusion applications.  Instead I have a custom security/login system that relies on Session scope variables to hold the login status, user role(s) and other information.  I then simply have a function on my utility component or a template I can call/include at the top of any page that needs to be secured, it checks the user's login status and roles and (if necessary) redirects them to the login page.  This call/include is never placed on public information pages or utility pages such as register, request new password, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622171">3</a> by Anthony
		posted on 10/28/2005 at 8:00 PM
		</div>
		<div class="comment_text"><p>I tend to use a list, because I end up having many lists for things like exclusion from verity indexing, etc. Another technique I've used thats more portable is using a naming convention. i.e. if the left character is '_' then don't do something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622172">4</a> by Raymond Camden
		posted on 10/28/2005 at 9:43 PM
		</div>
		<div class="comment_text"><p>So I too like the idea of checking the file name - one thing though. You always want to err on the side of securing instead of not securing. Ie, don't say, if file name has foo in it, be secure, but rather say, if file name has foo, don't be secure. Basically, make it so if you screw up, it will tend to err towards being secure.</p></div>
	</div>
</div>
		