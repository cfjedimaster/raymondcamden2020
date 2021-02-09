
<div class="comment" id="c_1714082927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082927">1</a> by WilGeno
		posted on 5/2/2014 at 1:30 AM
		</div>
		<div class="comment_text"><p>You got Minnesota?  That looks like my house this past winter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082903">2</a> by Aaron Neff
		posted on 5/3/2014 at 10:17 AM
		</div>
		<div class="comment_text"><p>"if you had file /X.cfm in your ColdFusion web root, and tried to run /X.cfm in virtual host so and so, then the one in the ColdFusion web root will break"</p><p>Hi Ray,</p><p>Thanks for blogging that.  I don't use CF's web root either and didn't know that.  A few days ago, I'd created a simple hello world CF mobile app in CF's web root (b/c "Generate PhoneGap Build" seems to prefer apps to be in that dir - per #3751819).  I just now tried loading an IIS site, housed in another folder, and got a white page.  I viewed the source and saw cfclient's JS code and realized: that mobile app in CF's web root was trumping my request to view the IIS site.</p><p>IMO, I don't think x.cfm in CF's web root should trump x.cfm in a virtual host.  That just leads to trouble.  But I guess Adobe won't change it if it's always been that way.  At least now I know (and hopefully I won't forget haha).</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		