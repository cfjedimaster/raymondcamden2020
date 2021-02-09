
<div class="comment" id="c_1713710540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710540">1</a> by Bim
		posted on 12/8/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>Ray, to take it one layer further, I have the service layer talking to a gateway layer which contains all the Transfer/SQL code. The service cfc's call get(), set(), getList() functions in gateway cfc's. This has the added advantage of separating the two layers for unit testing purposes. The service cfc's can be tested for application logic and the gateway cfc's can be tested separately for database/Transfer specific logic.</p><p>This is needed in the systems I work with since it is a more complex architecture. People can judge whether this extra layer is needed for their particular application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710525">2</a> by Raymond Camden
		posted on 12/8/2008 at 11:39 PM
		</div>
		<div class="comment_text"><p>Good points Bim. CFLib also does service-&gt;gateway, but I wanted to keep it simpler in the blog entry above. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710539">3</a> by Thomas Case
		posted on 12/9/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>I am also using a Service Layer for interaction with Transfer, but what I am struggling with is method naming.  In theory, I believe the Service Layer's methods shouldn't change and be dependent upon the underlying Gateway's, DAO's, or ORM used.  I am using Transfer in my most recent project and having it working pretty well, but when I look at Hibernate's API, I notice that the method names may be different.  Therefore, prior to "sealing" the API, I know for myself, I need to look better at both Hibernate and Reactor to make sure my Service Layer API can work with any of those ORMs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710543">4</a> by Raymond Camden
		posted on 12/9/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>I'm with you TC. I'd name my Service API methods w/o concern to Transfer or any other ORM. Ie, getFoo, getGoo, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710544">5</a> by John Whish
		posted on 12/9/2008 at 9:05 PM
		</div>
		<div class="comment_text"><p>This is an issue that is currently hurting my brain!</p><p>I'm trying to create a service object for each "business area". These match the packages I've defined in my Transfer.xml config. My service then calls my gateway. The gateway is the only object that talks to transfer, so that I have a consistent API. That's where it gets a bit messy. Do you guys choose to have one gateway per transfer object or one gateway per transfer package?</p><p>I'd love to have a look at the code for cflib if it's available!? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710545">6</a> by Raymond Camden
		posted on 12/10/2008 at 2:44 AM
		</div>
		<div class="comment_text"><p>I normally have a gateway per service.</p><p>CFLib is a bit messy right now, code wise. I did it quickly. Not too sure I want to share it globally just yet. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710551">7</a> by Matt Williams
		posted on 12/11/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>I'm currently building a new app that uses Transfer too. It is a good question on how much do you try to abstract the ORM. To really be independent of an ORM you'd have to take it the lowest common denominators of arrays, structs and queries. As soon as a view calls 'getXArray' you've coupled yourself to Transfer. Whereas if that array was already returned as a variable of some sort you're less coupled.</p><p>I don't have a specific question or answer here, just some thoughts as I think ahead for this app.</p></div>
	</div>
</div>
		