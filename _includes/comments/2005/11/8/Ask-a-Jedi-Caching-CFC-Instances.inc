
<div class="comment" id="c_1713622467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622467">1</a> by quiksilv
		posted on 11/8/2005 at 7:48 PM
		</div>
		<div class="comment_text"><p>I often throw all my cfc objects into the application scope so that i don't have to initiate them each time I need to use them.</p><p>Not sure if this is best practice but it's quicker to code if nothing else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622470">2</a> by Sean Corfield
		posted on 11/8/2005 at 8:40 PM
		</div>
		<div class="comment_text"><p>I think Sam's question goes some way to proving that a lot of supposed optimizations just don't buy you any noticeable improvement :)</p><p>On a more serious note, if you have stateless service CFCs you might as well instantiate them once into application scope regardless. This isn't really about performance, more about the fact that a service CFC really only ever needs one instance and application scope is a good place to store that one instance.</p><p>Business object CFCs - which usually have request-specific state - will need to be created on each request. You can't cache those in application scope because they are different for each request (you might even be creating several BOs of a given type in a single request). Again, that's not a performance issue, that's just plain ol' business logic.</p><p>If you load test your application and you prove that instantiating a CFC is a bottleneck, then you might look at maintaining a pool of instances to avoid some of the overhead of instantiation. However, pool management adds a layer of complexity to your code and the instances still have to be re-initialized so you may not see much of a performance gain anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622471">3</a> by Sam Farmer
		posted on 11/8/2005 at 9:40 PM
		</div>
		<div class="comment_text"><p>Thanks Ray and Sean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622472">4</a> by Steven Ross
		posted on 11/9/2005 at 1:12 AM
		</div>
		<div class="comment_text"><p>One thing I have been wondering about this is how do you tell how much memory the app is eating up when it is in the application scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622473">5</a> by Steven Ross
		posted on 11/9/2005 at 1:48 AM
		</div>
		<div class="comment_text"><p>Also, If you are programming in a large environment or if you ever envision using your CFC's outside of your application it would make much more sense to not create one gigantic CFC.</p><p>I am currently building an app that is in one giant CFC (using ray's blog.cfc as a model) and I see the advantages. But, coming from a java background I also see a need to create a more object oriented framework by using DAO (Database Access Object) BO (business objects) and other stateless classes to do the mundane tasks. I can't concieve of there being any advantage to sticking these task's in the application scope since you don't need to maintain state.</p><p>But, Like ray said, its his app and it isn't an API or designed to be extended in some way. So it works. I'm enjoying writing this app in one CFC, definately making me think a little differently.</p></div>
	</div>
</div>
		