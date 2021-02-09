
<div class="comment" id="c_1713614752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614752">1</a> by Adam Howitt
		posted on 7/15/2003 at 8:06 PM
		</div>
		<div class="comment_text"><p>When you define a cfc you should be able to specify two extra parameters, both optional:<br>1. initRequired - BOOLEAN - should default to true unless specified. Determines whether an object automatically calls the initMethod when the object is created.<br>2. initMethod - STRING - should default to init unless specified. Determines which method should be called when the object is instantiated (if initRequired is TRUE).</p><p>The use of initMethod makes the code more flexible since you can create multiple init methods (one for debugging, one for live) and switch between both by simply changing the initMethod.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614756">2</a> by Nolan Erck
		posted on 7/15/2003 at 8:06 PM
		</div>
		<div class="comment_text"><p>Okay I'm still a tad new to CFCs but...</p><p>Why not put your init code at the top of the CFC file, so it runs in a similar fashion to a C++ constructor?  Then you're guaranteed the code runs, you don't have to call init() every time.  Or am I missing something? I guess you'd have to come up with a way to pass a value into this constructor code that wasn't too ugly, but would this solve the problem otherwise?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614751">3</a> by Raymond Camden
		posted on 7/15/2003 at 8:10 PM
		</div>
		<div class="comment_text"><p>Nolan, the problem is that you can't pass arguments to the constructor, and that's what I need.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614759">4</a> by George Jagodzinski
		posted on 7/15/2003 at 10:29 PM
		</div>
		<div class="comment_text"><p>I have battled with this issue as well, and what i finally came up with was not to build something that would prevent user error. The way i see it, since there is no way to define an actuall constructor and even then no way to truley override it the only correct thing to do is intilaze the fields at the top of the cfc and then have an init function to set them to what you need. If the init method is not called the cfc just uses the initial values, wich could cause it to do nothing, but I think the ball is in the court of the user to call the init method in their code. I can't see a decent way to do it so i say why hack it? ...ok i wrote that fast , hope it makes sense ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614757">5</a> by Matt Liotta
		posted on 7/15/2003 at 10:48 PM
		</div>
		<div class="comment_text"><p>There is no good solution to your problem because you are trying to apply the wrong technology to your problem. There is currently no language construct allowing you to pass parameters to a CFC at instanciation time in CFML, so if that is what you need, then you best use a language that supports constructors e.g. Java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614758">6</a> by Raymond Camden
		posted on 7/15/2003 at 10:57 PM
		</div>
		<div class="comment_text"><p>I agree that there is no _native_ way in CFML to do what I want. That does not mean that there isn't an interesting alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614762">7</a> by Ben Forta
		posted on 7/15/2003 at 10:57 PM
		</div>
		<div class="comment_text"><p>Ray, don't. Code for the worst case, always call Init() with defaults as your constructor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614761">8</a> by Raymond Camden
		posted on 7/15/2003 at 11:03 PM
		</div>
		<div class="comment_text"><p>What exactly do you mean, Ben? Do you mean every method should call init()? Again, that's just as bad as checkFoo, and it doesn't help since I need init() to be called with args. In other words, the basic logic of this CFC is, before you use it, you must define various arguments.</p><p>I think it's a tossup between ugly CFC code (hacks in each method) and requiring more care on the users part (they must call init).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614765">9</a> by Ben Forta
		posted on 7/15/2003 at 11:19 PM
		</div>
		<div class="comment_text"><p>No, I mean I'd try not to create a CFC that actually requires parameters. Whenever possible, assume some defaults. Users should know to call Init(), but just in case, use some defaults - default behaviour is better than throwing errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614766">10</a> by Raymond Camden
		posted on 7/15/2003 at 11:22 PM
		</div>
		<div class="comment_text"><p>I don't believe that is possible though, well, no, I  do agree with you in general. However, let's take a specific case where I have a CFC that requires database access. There is no good default for DSN. Other stuff, like Title, can be set to "Nameless", etc, but DSN needs to be something that actually works. Of course, I could just say "Blog" and document it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614764">11</a> by seancorfield
		posted on 7/16/2003 at 12:55 AM
		</div>
		<div class="comment_text"><p>Here's an interesting option...</p><p>Have some constructor code that copies all the methods (except 'init') to a private struct and replaces them with a method that always throws an exception.</p><p>Then have your init method restore the real methods.</p><p>Yes, very hacky but it is reasonably foolproof and doesn't require any code in your methods... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614767">12</a> by Nathan Dintenfass
		posted on 7/16/2003 at 1:51 AM
		</div>
		<div class="comment_text"><p>I'm not sure why it's so bad to throw an error in this case -- it's something that would only happen during development, so the developer would have ample chance to fix it.  It's not like an end-user would need to do something strange.</p><p>I agree that for something like DSN there isn't a good default (and throwing errors that the DSN "blog" cannot be found doesn't strike me as any better than an error that says "instance.dsn cannot be found").</p><p>Personally, I find myself putting an init() method in all of my CFCs, even if it does nothing.  That way, I just get in the habit of calling init() no matter what (and I do as you suggest -- return "this" so it can all be called on one line).</p><p>You could always do a try/throw around any code that requires the init variables rather than calling a new method in every one of them -- that way you can at least give a "good" error to the developer.  I'm not sure why it's bad (other than potential performance -- which is not a key consideration for your blog) to need something like that (or even the "hook" method you suggest) -- the point of a CFC is to encapsulate the complexity, right?  So, doing that work inside the component is just part of the complexity you are encapsulating.</p></div>
	</div>
</div>
		