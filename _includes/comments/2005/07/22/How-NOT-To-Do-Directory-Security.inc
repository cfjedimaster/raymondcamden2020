
<div class="comment" id="c_1713619241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619241">1</a> by tony petruzzi
		posted on 7/22/2005 at 10:59 PM
		</div>
		<div class="comment_text"><p>This is why you should always use a combination of OS and CF security on an administrative backend. To give an example:</p><p>On all of the websites I administrate we use IIS on W2K. So for the admin directory we configured IIS to not allow anonymous access and to use WINNT Intergrated security. This means that someone must have an account on the domain or the machine in order to even get to the application's login page. Then we have seperate accounts for the application and use client variables within CF to secure it.</p><p>This provides two layers of security. So even if someone has an account on the domain or the machine, unless they have an account within the application, they can't get in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619245">2</a> by Christopher Wigginton
		posted on 7/22/2005 at 11:26 PM
		</div>
		<div class="comment_text"><p>It's times like those that you really appreciate the power application.cfm/application.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619249">3</a> by James
		posted on 7/22/2005 at 11:46 PM
		</div>
		<div class="comment_text"><p>It always amazes me how many sites leave their admin front ends, open for the world to see. It's an easy case of just appending /admin to some url's, and up comes their cms / website admin page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619250">4</a> by justin
		posted on 7/23/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>But as long as you have good security in play shouldn't it not be much a problem to let a user see a login box?</p></div>
	</div>
</div>
		