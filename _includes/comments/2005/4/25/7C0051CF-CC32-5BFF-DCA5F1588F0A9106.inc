
<div class="comment" id="c_1713618251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618251">1</a> by Ryan Guill
		posted on 4/26/2005 at 6:29 AM
		</div>
		<div class="comment_text"><p>I had the same sort of troubles back when I first started using cflogin back in 6.1.  I ended up writing my own login.cfc that took care of everything, and I've been using it ever since.  I plan on releasing it in COAL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618253">2</a> by Brandon Harper
		posted on 4/26/2005 at 9:50 AM
		</div>
		<div class="comment_text"><p>I'm not a fan of rewriting existing functionality in a given product or platform, but I think the Session handling in CF is one of it's weakest points. It's a rare case where I decided rolling my own was a better choice than trying to work around it's limitations/burdens.  Especially after grinding my teeth on non-locked Session calls in CF 3-5 in other peoples code many times in the early days of my CF career...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618259">3</a> by Dave Ross
		posted on 4/26/2005 at 10:16 AM
		</div>
		<div class="comment_text"><p>it's only useful if you want to lock down remote methods... but now I'm of the opinion that you should be doing even THAT yourself .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618256">4</a> by Brian King
		posted on 4/26/2005 at 6:10 PM
		</div>
		<div class="comment_text"><p>I really wanted to use cflogin -- i did...i had such high hopes that it would be an easy architecture to use -- until I realized that my user's passwords with periods and apostrophes were being truncated.  To this day i don't know if it was cflogin or the J2EE, but I had to give up and roll my own.</p><p>So now I have a pleasant CFC that will authenticate via three methods (LDAP, "local" (read database), and X.509).  Yay!  And yes, I did have to pull session scope in the CFC for one piece of information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618254">5</a> by tony petruzzi
		posted on 4/26/2005 at 6:46 PM
		</div>
		<div class="comment_text"><p>Call me old fasion, but I never really like the concept of CFLOGIN. I guess it because I have always used client variables for login information. CFLOGIN just felt really klunky from the beginning.</p><p>I have never used session variables before, and I just don't like the fact of putting authenication info into a cookie. I like the fact that client variables use cookies to tie the person to the session, can be clustered across multiple servers since the information is stored in a DB and not in memory and the actually content of the client variable is stored in the database so the enduser can't get at it.</p><p>Yeah I know you have to add an extra step of using CFWDDX to store and pull the info from the database, but after like 2 times of doing it, it just becomes habit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618260">6</a> by Raymond Camden
		posted on 4/26/2005 at 6:50 PM
		</div>
		<div class="comment_text"><p>Tony - I have some problems with your post (respectfully :)</p><p>You say you don't like putting auth. info in a cookie - but session vars - like client vars - don't put anything in the cookie except for the 'marker'. So client.password is just as secure as session.password. Now - you are correct in that client vars give you the ability to work over a cluster, although sessions can be forced to once machine in a cluster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618255">7</a> by Christopher Wigginton
		posted on 4/26/2005 at 10:10 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You could add a role during your login process and perform a role check.</p><p>&lt;cfif GetAuthUser() neq "" and not IsUserInRole("MyLogin")&gt;</p><p> If the role doesn't exist, it's an auto-login from NT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618258">8</a> by tony petruzzi
		posted on 4/26/2005 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Actually I didn't mean to state that about session variables. I know they don't put the information into the session cookies. I meant to say that I don't like the idea of just using cookies (not session variables cookie or client variables cookie, just cookies) and putting authentication information in them. I know some people that acutally do this. It was just my poor grammer and not fully explaining what I meant that got mixed up.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618261">9</a> by Raymond Camden
		posted on 4/26/2005 at 11:07 PM
		</div>
		<div class="comment_text"><p>Tony: Cool beans.</p></div>
	</div>
</div>
		