
<div class="comment" id="c_1713616875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616875">1</a> by dan
		posted on 2/2/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>Thanks for tip. I figured it had something to do with localizing the var to the function but I was not aware that it could lead to issues down the road.</p><p>Thanks for your help Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616872">2</a> by Qasim Rasheed
		posted on 2/2/2005 at 9:28 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for repeating this important tip. I think it would be nice in this context if we also mention the weird &amp;lt;cfinclude&amp;gt; functionality inside a cfc method.   In a CFC method, if you include a file using cfinclude, it will essentially copy all the var scoped variables (previously declared for this function) to the variables scope of CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616874">3</a> by Critter
		posted on 2/2/2005 at 9:33 PM
		</div>
		<div class="comment_text"><p>I had this problem using the variable "i" in a loop in two functions that were called on the same page.. it took me /ages/ to figure out the problem. threw in a little "var i = 1" solved all of /those/ problems!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616873">4</a> by Michael Dinowitz
		posted on 2/3/2005 at 3:04 AM
		</div>
		<div class="comment_text"><p>It's not just CFSETs but tags such as CFPARAM, which does not allow for the var. Very dangerous at times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616878">5</a> by Raymond Camden
		posted on 2/3/2005 at 3:06 AM
		</div>
		<div class="comment_text"><p>I would question why someone would use cfparam in a udf/method. If the intent is to say, define X if X isn't defined, then X should be an optional argument with default=...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616876">6</a> by Michael Dinowitz
		posted on 2/3/2005 at 3:27 AM
		</div>
		<div class="comment_text"><p>People are people and will do strange things. Point is, any time a variable is created inside a methid/UDF, it 'should' be var-ed. CFPARAM is one of those variable creation tags that people forget about. What's needed is the ability to set per function or globally that a method/udf is 'protected' as in locally created vars are local, not global. I'd perfer this as default, but....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616879">7</a> by Raymond Camden
		posted on 2/3/2005 at 3:41 AM
		</div>
		<div class="comment_text"><p>Good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616877">8</a> by Jason
		posted on 9/21/2005 at 11:05 PM
		</div>
		<div class="comment_text"><p>Is:</p><p>&lt;cfset var myVar = ""&gt;</p><p>the same as:</p><p>&lt;cfset variables.myVar = ""&gt;</p><p>in the context of localizing variables within a ColdFusion component?  Or can you comment on the differences, assuming you always access it as variables.myVar throughout the cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616886">9</a> by Raymond Camden
		posted on 9/21/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>Jason, no</p><p>Inside a method, cfset var x sets x to exist ONLY in the method. cfset variables.x makes x global to the entire cfc.</p></div>
	</div>
</div>
		