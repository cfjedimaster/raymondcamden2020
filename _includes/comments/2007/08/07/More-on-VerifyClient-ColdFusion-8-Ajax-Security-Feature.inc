
<div class="comment" id="c_1713669790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669790">1</a> by Erol Layiktez
		posted on 12/6/2008 at 1:09 AM
		</div>
		<div class="comment_text"><p>Raymond,<br>I am planning to use more ajax/web 2.0 stuff in my developments and I was reading on the security measurs I can take on them.</p><p>IE: I am using cfgrid with binding to a query. Query will return sensative data (user ID's). The cfc that binds returns a structure back and it is remote for doing paging.<br>I also needed to remove my application.cfc (which included security) from that folder because the ajax binding request does not want anything running in between the cfc and the call.</p><p>I was reading on the VerifyClient. My session and client variables are enabled. &lt;cfset verifyClient()&gt; in my cfc does not fail. Also there is not a pwd change going on here I am just concerned that it can be hacked or accessed as a webservice since the method is remote.</p><p>Can you please advise... we have sensative researh data and I would not want a user act like someone else and see other patients data inexample.... Does that mean I should not use ajax functions just yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669814">2</a> by Raymond Camden
		posted on 12/6/2008 at 2:16 AM
		</div>
		<div class="comment_text"><p>It is important to remember that verifyClient does one thing only. It tries to ensure you are coming in via an Ajax request. It secures the type of connection, but not the content at all.</p><p>You should be much more concerned with the content - ie, is this guy authenticated to retrieve the content he wants, as opposed to, where the guy is coming from.</p><p>I'm not saying you SHOULDN'T be concerned about that - just that it is secondary to the primary concern.</p><p>So with that being said, remember that there is no TRUE way to detect an AJAX request. An AJAX request is nothing more than a HTTP request by the browser. verifyClient works via a hack essentially. It isn't bad, and it blocks most folks, but I got around it in about 15 minutes.</p><p>You _do_ have to make a 'real' proper request first, but someone could write a robot to do this rather quickly. Ie, do the post to a non-ajax page, get the cookies needed to mark the session, then post again to the ajax page.</p><p>So again - focus more on the authentication/authorization as compared to the type of connection security.</p><p>Does this make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669813">3</a> by Erol Layiktez
		posted on 1/5/2010 at 5:01 AM
		</div>
		<div class="comment_text"><p>Yes, it makes sense but I can not make the security module run between the grid and the cfc binding since ajax binding request does not want anything running in between the cfc and the call.</p><p>The application that the grid is included is secure. Through the application.cfc... So no unauthenticated and authorized user can get to the app. But I was afraid if they could call the cfc from somewhere else. I thought verifyClient() might prevent that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669824">4</a> by Raymond Camden
		posted on 1/5/2010 at 5:15 AM
		</div>
		<div class="comment_text"><p>Err, well, not sure I'm reading you quite right. verifyClient does try to prevent you from running the CFC from "somewhere else". It isn't perfect, but it does try to do that.</p></div>
	</div>
</div>
		