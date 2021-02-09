
<div class="comment" id="c_1714083762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083762">1</a> by Steve Seaquist
		posted on 8/22/2014 at 3:13 AM
		</div>
		<div class="comment_text"><p>The same was posted on StackOverflow 9 hours ago:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F24313528%2Fcf10-cf11-web-services-using-axis2-restarting-existing-java-objects%2F25427918%23answers-header%3AeEE0NlzEogGI3iFXrg--LrQJC1Y&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/24313528/cf10-cf11-web-services-using-axis2-restarting-existing-java-objects/25427918#answers-header">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083763">2</a> by Steve Seaquist
		posted on 8/22/2014 at 3:46 AM
		</div>
		<div class="comment_text"><p>P.S.: A little sympathy for the devil (web services):</p><p>If what you need to do is a small in-app callback to display a dropdown of counties after the user selects a state, sure, use JSON or $.load() or whatever.</p><p>What makes XML appealing in the business world is that it has a contract. It's enforceable. If you publish a service with WSDL (XML about the interface) and XSDs (XML about the data transferred over the service), those terms of the service constrain both publisher and consumer. When large sums of money is involved, the people who control the money really, really like that sort of thing. It makes the conditions under which money is committed explicit and deterministic.</p><p>As you know, I can't talk in a public forum such as this about where I work without prior approval. But you know where I work. It's very *definitely* a business environment, with auditors and lawyers and all that stuff.</p><p>To your readers, yes, I agree. Please avoid web services when simpler solutions are available and suit your needs. But that's not to say that web services have no purpose. When rigor is needed, and errors could have catastrophic consequences, that's where ColdFusion's simple CFC implementation of web services can be a real life-saver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083764">3</a> by Raymond Camden
		posted on 8/22/2014 at 5:28 AM
		</div>
		<div class="comment_text"><p>Fair points there Steve. Although I still hate em. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083765">4</a> by Adam Tuttle
		posted on 8/22/2014 at 2:45 PM
		</div>
		<div class="comment_text"><p>What a terrible idea. Just because it's by design doesn't make that a good decision. This is not only inconsistent, it is purposely and lazily inconsistent. Maybe Adobe need a refresher course in what makes a language enjoyable to use (aka Good)</p><p>(And yes, I'll be filling the same complaints on the bug)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083766">5</a> by Christopher Wigginton
		posted on 11/14/2014 at 10:43 PM
		</div>
		<div class="comment_text"><p>It's issues like these that stop companies from upgrading, especially in validated environments.  Running tests to verify existing code is costly, having to go through and adjust code is even worse.</p><p>An Axis admin setting where you can set the default instantiation behavior with the additional ability to override at the CFC level would have been a better design.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1739682843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1739682843">6</a> by Steve Seaquist
		posted on 12/13/2014 at 12:55 AM
		</div>
		<div class="comment_text"><p>Steve Seaquist here again. (I forgot my password.)</p><p>Axis1 was giving me fits with a critical service, so I decided to try dom_watson's suggested fix for Axis2 (in the StackOverflow post). It worked, and I posted the experience crediting dom_watson with the answer. Whether SO will credit him with the answer remains to be seen.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F24313528%2Fcf10-cf11-web-services-using-axis2-restarting-existing-java-objects%2F27453956%2327453956%3ANg0e-abJyoAew1YuE8vCphxg9T4&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/24313528/cf10-cf11-web-services-using-axis2-restarting-existing-java-objects/27453956#27453956">http://stackoverflow.com/qu...</a></p><p>The reuseInstance feature Adobe added to CF11 Update 3 looks FANTASTIC.</p></div>
	</div>
</div>
		