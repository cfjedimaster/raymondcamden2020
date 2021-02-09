
<div class="comment" id="c_1713614573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614573">1</a> by Cal Jacobson
		posted on 5/18/2003 at 10:15 PM
		</div>
		<div class="comment_text"><p>Great presentation, Ray.</p><p>I had asked about the inclusion of a "proper" (i.e. ability to pass parameters) CFC constructor in the next version of ColdFusion, and while I understand the point you made about just using an init() method or the like, I still think the code would be a lot cleaner if we could do it as in Java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614571">2</a> by Mike B
		posted on 5/20/2003 at 11:59 AM
		</div>
		<div class="comment_text"><p>im sure macromedia has its reasons for making cfc constructors the way they are. personally, i dont see a problem with using an init() method. i have found that using an init() method, specifically in being able to invoke that method more than once, to be a distinct advantage in many situations. i guess this could just be a matter of oppinion, though.</p><p>i have a question...</p><p>myobj = createobject(...).init(...);</p><p>does anyone suppose this syntax would be much different if we did have "proper" cfc constructors?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614568">3</a> by Raymond Camden
		posted on 5/20/2003 at 2:10 PM
		</div>
		<div class="comment_text"><p>Well, I''d like syntax like so:</p><p>ob = createObject("component","name",struct)</p><p>Where struct would be a structure of args/values to pass into the constructor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614575">4</a> by seancorfield
		posted on 6/21/2003 at 11:50 PM
		</div>
		<div class="comment_text"><p>Is this so bad:</p><p>ob = createObject("component","name").init(struct)</p><p>after all, that''s what you need to do in Java for objects that have non-trivial constructors (i.e., that take arguments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614569">5</a> by Raymond Camden
		posted on 6/22/2003 at 10:54 PM
		</div>
		<div class="comment_text"><p>It''s not bad per se, but doesn''t this call end up using 2 objects? One object is created, that object is then used when init is called, and then init has to return a new instance of the cfc. Am I correct? If so, isn''t that a bit expensive? Yea, it''s not the end of the world, but still... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614577">6</a> by seancorfield
		posted on 6/22/2003 at 11:18 PM
		</div>
		<div class="comment_text"><p>No, createObject() constructs the object and returns a reference to it. init() is called on that reference and returns "this" - which is a reference to the same object. That reference is bound to ob. It''s all references which are nice and lightweight.</p><p>Another useful technique is this inside mycfctype.cfc:</p><p>[cffunction name="newInstance" returntype="mycfctype"]<br>  [cfreturn this]<br>[cffunction]</p><p>Then you can call it like this to create a new instance in environments where createObject() is disabled (shared hosts):</p><p>[cfinvoke component="mycfctype" method="newInstance" returnvariable="ob"]</p><p>That''s the equivalent of:</p><p>[cfset ob = createObject("component","mycfctype")]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614574">7</a> by Raymond Camden
		posted on 6/22/2003 at 11:27 PM
		</div>
		<div class="comment_text"><p>Ah, for some reason I was thinking cfreturn this would return only the _data_, not the CFC itself. Sweet technique, Sean!</p></div>
	</div>
</div>
		