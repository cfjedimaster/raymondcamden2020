
<div class="comment" id="c_1713659858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659858">1</a> by Tom Mollerus
		posted on 12/1/2006 at 10:16 PM
		</div>
		<div class="comment_text"><p>For that matter, it should be noted that any person who has the slightest bit of knowledge of how HTML forms work can submit anything they like up to your form. For instance, if you really want to test how well a form handler has been secured, just save the form to your local PC and edit the fields yourself (no need to have Firefox do it for you).  Then you can submit whatever you like to the server.</p><p>Conclusion: validate every single item of user-submitted information for length, data type, and malicious code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659877">2</a> by Peter Bell
		posted on 12/1/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>Yeah. Still amazes me how many people rely on client side validations/limitations. They are a nice addition, but the server should never assume that all expected form fields will exist or will have values you expect. Also, if you have javascript display logic (if they entered this then show that field) don't assume that just because they posted that field that they entered the right information. It is just too easy to hack this stuff.</p></div>
	</div>
</div>
		