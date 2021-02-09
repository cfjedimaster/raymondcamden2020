
<div class="comment" id="c_1713665857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665857">1</a> by Jonathon
		posted on 6/1/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>"Specifically the 5 hour session timeout. The default is 20 minutes, and while I've seen 30, or 40, 5 hours seemed... excessive. Although if you look at the ColdFusion Administrator, the max is set to 2 whole days. Does anyone else use high timeouts like this?"</p><p>We do a lot on some Business-To-Business sites that we create.  A lot of times, we know the users are going to be using the site throughout the workday, and they really don't like having to sign back in every time they need to enter a project update.  We're not really storing anything "big" in the Session scope though, usually just a userID that points to a record in the database.  Definitely no instantiated objects in there, so I don't worry too much about consuming server RAM in those Sessions.</p><p>Jonathon</p></div>
	</div>
</div>
		