
<div class="comment" id="c_1713615613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615613">1</a> by Nathan Dintenfass
		posted on 5/8/2004 at 12:10 PM
		</div>
		<div class="comment_text"><p>I don't think this is "bug" -- it seems MACR made a conscious decision to implement this in this way.  Nasty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615615">2</a> by Dominic Plouffe
		posted on 5/9/2004 at 3:17 PM
		</div>
		<div class="comment_text"><p>I agree with the fact this is a bug.  I remember during the early beta or NEO, variables set inside a &lt;cffunction&gt; could not be accessed in a &lt;cfinclude&gt;.  I guess back they “patched” it by copying the local function scope inside the global request scope.   Unfortunately though, I think, this is a design issue that MACR can’t fix unless the start re-architecting ColdFusion. The problem, I think, is the fact that we are allowed to use &lt;cfinclude&gt; inside a &lt;cffunction&gt;.  Although this is very convenient, it doesn’t make any sense.  &lt;cfinclude&gt;’s are great to re-use code such as headers, footers and menus.  Functions though, in my mind, are meant to perform operations and return a value.  ColdFusion is, as far as I know, the only web scripting language that allows you to integrate both visual and programmatic operations in functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615612">3</a> by Jason Clark
		posted on 5/10/2004 at 4:22 PM
		</div>
		<div class="comment_text"><p>We've run into this a lot within our application, cfquery names being seen from the base cfm files (overwriting queries within the cfm files themselves).  This is a fundemental design problem with ColdFusion, and stems from trying to be as "RAD" as possible.  The problem is it’s too late for them to change it, as it would break a lot of applications out there.</p><p>As ColdFusion continues to add more advanced functionality like CFC’s, more problems will arise.   The language needs more structure, but it’s built to not have as much structure as other languages.  Take for example variable declaration within a method of a CFC,  in almost any other language any variable declared within the method/function stays local (not the case in coldfusion unless you prepend it with var).  This causes all sorts of problems if CFQUERY names aren’t scoped to the variables scope etc.   The CFINCLUDE problem is the same thing.  Most other languages you can’t just include a code template and have its contents visible within the function the way you can with ColdFusion.  You have to put the contents of the cfinclude in a function or object etc.</p><p>This problem is entirely centered around RAD, and how eventually it interferes with strucuture. It will be interesting to see how Macromedia overcomes this problem, as I think it is only going to become larger over time.  Unless Macromedia just wants developers creating relatively simple small to medium sized applications, which is probably at least 75% of the ColdFusion development out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615614">4</a> by c2
		posted on 7/19/2005 at 6:08 AM
		</div>
		<div class="comment_text"><p>Is this still a problem on MX 6.1 with latest updaters?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615617">5</a> by Raymond Camden
		posted on 7/19/2005 at 4:26 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure this was fixed in the latest 6.1 release. Pretty sure. Easy enough to test though. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615616">6</a> by Phil Cruz
		posted on 8/8/2005 at 9:26 PM
		</div>
		<div class="comment_text"><p>I tested and it doesn't appear to be fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615623">7</a> by Sander
		posted on 9/27/2005 at 3:18 AM
		</div>
		<div class="comment_text"><p>This definitely works as expected (that is, the bug isn't present) in MX 7.</p></div>
	</div>
</div>
		