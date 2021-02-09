
<div class="comment" id="c_1713709235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709235">1</a> by Brandon Hansen
		posted on 10/20/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>I am so torn!  That works perfectly, and is similar to what I was thinking in my head.  But then is it "right" to call the request scope from a UDF?  Common sense tells me to use whatever works, but so often we grimace when UDF's call the application, request or any other persistent scope.</p><p>But other than that slight hesitation, the suggestion is perfect!  Thank you very much!</p><p>One of these days I am going to have to stop by your wish list.  Thank you so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709228">2</a> by Raymond Camden
		posted on 10/20/2008 at 11:01 PM
		</div>
		<div class="comment_text"><p>I know I've said - many times - UDFs should be abstract, black boxed, etc. However in this case I think it is a perfectly fine usecase for the situation. You have a need for a storage mechanism that - by design - must exist outside the UDF itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709233">3</a> by tony petruzzi
		posted on 10/20/2008 at 11:27 PM
		</div>
		<div class="comment_text"><p>@brandon,</p><p>personally if i was you, i would make a cfc and encapsulate these two functions along with the request scope storage in it.</p><p>reason being is so that down the road, you're not looking at the code and going wtf?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709231">4</a> by Quan Tran
		posted on 10/20/2008 at 11:37 PM
		</div>
		<div class="comment_text"><p>If you have hesitation accessing the request scope, why not just pass it in to the function. Slight code change to reference the argument variable instead of the request scope directly.</p><p>if you do make it into a cfc, you could do the same or just create the object in the request scope and use the local cfc (this/variables) scopes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709243">5</a> by Brandon
		posted on 10/21/2008 at 1:04 AM
		</div>
		<div class="comment_text"><p>I would have just gone with a cfc, but with the nature of the app it just wouldn't work.  The plugins are created and installed by people other than myself, so to tell them that they have to reference the cfc (and the directory) gets a little to overwhelming for some people.  It is easier to just let them know that they need to call the setButton("buttonName") function somewhere in the header of their root plugin page.</p><p>I know that sometime down the road I might take a look and wonder what is going on, but fortunately I am in the habit of writing more notes than code.  (When I first started Forta hammered that point into me).</p></div>
	</div>
</div>
		