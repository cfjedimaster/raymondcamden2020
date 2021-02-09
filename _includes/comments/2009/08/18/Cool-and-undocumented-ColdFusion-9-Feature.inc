
<div class="comment" id="c_1713717773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717773">1</a> by Micah
		posted on 8/19/2009 at 6:02 AM
		</div>
		<div class="comment_text"><p>Very cool. I've been looking for this feature to use with bug alerts. Ideally I'd like to automatically specify which function and class or file in which an issue occurred. Does any one have any idea how to do this in CF8 (perhaps with java)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717776">2</a> by Jody Fitzpatrick
		posted on 8/19/2009 at 7:11 AM
		</div>
		<div class="comment_text"><p>This gets me thinking perhabs this could be used in<br>error handling. Where you would be able to see the precise function that through you the error. Hmmm might<br>have to code something here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717775">3</a> by Joshua Curtiss
		posted on 8/19/2009 at 11:02 AM
		</div>
		<div class="comment_text"><p>Whoah, it's like what we sometimes try to do with onMissingMethod(), but more elegant because we won't need one big if..then..else block for the different types of dynamic methods we want to implement.</p><p>Plus, the method names can still be dynamically generated, say, in the init() method! (I'm assuming this, haven't test it)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717784">4</a> by Gary Gilbert
		posted on 8/19/2009 at 12:28 PM
		</div>
		<div class="comment_text"><p>Interesting that they added this.  I posted something similar to this back in February of last year <a href="http://disq.us/url?url=http%3A%2F%2Fwww.garyrgilbert.com%2Fblog%2Findex.cfm%2F2008%2F2%2F4%2FWhat-Function-Called-My-Function%3AHHZXYCPJ_vO1EisXV_eH3fkAIL4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.garyrgilbert.com/blog/index.cfm/2008/2/4/What-Function-Called-My-Function">http://www.garyrgilbert.com...</a></p><p>An Adobe forums user wanted to know how to find out what function called his function, or method.  Back then with cf8 the only way was to force and catch an error to get the stack trace, and parse out the function name.  A total hack, now I see they have provided a function to do that for you.  Pretty cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717785">5</a> by Gary Gilbert
		posted on 8/19/2009 at 12:42 PM
		</div>
		<div class="comment_text"><p>Actually just read entire post again, first pass I misunderstood the function call.... so my post in february of last year is similar in that its totally different...</p><p>sigh I need another coffee so that I am really awake</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717787">6</a> by Martijn van der Woud
		posted on 8/19/2009 at 1:17 PM
		</div>
		<div class="comment_text"><p>From a design perspective, one could argue that this function should be used with caution, because it violates the so-called 'Hollywood principle' (don't call us, we will call you). Usually it is best when a method just does it's own thing, oblivious of the object and/or method that is calling it. Otherwise the behavior of the method might be dependent of some characteristics of the caller, causing tight coupling which may reduce maintainability; the method than has two potential reasons to change:</p><p>1) because it's own logic must be changed<br>2) because something changed in one or more callers</p><p>Ideally methods and/or object have only one potential reason for change.</p><p>Besides this caveat, this function allows for even more flexibility, which in my opinion is the number one advantage of CFML over other languages like Java. I wonder what people can come up with now that they know about this...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717788">7</a> by tony petruzzi
		posted on 8/19/2009 at 4:07 PM
		</div>
		<div class="comment_text"><p>@Micah,</p><p>you can kind of do this in cf8, however it's extremely hackish. basically what you can do is create a java.lang.Execption and then parse out the information from the exceptions tagcontext. if you want to see it in the real world, have a look at the CFWheels source code for the $deprecated().</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fcfwheels%2Fsource%2Fbrowse%2Ftrunk%2Fwheels%2Fglobal%2Finternal.cfm%3AiYgDVwVCsurha14wmiJtpw1MYJo&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/cfwheels/source/browse/trunk/wheels/global/internal.cfm">http://code.google.com/p/cf...</a></p><p>We're using this technique to announce deprecated elements of the framework to developers and giving them a heads up that these elements could be removed in a future release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717790">8</a> by Ben Nadel
		posted on 8/19/2009 at 5:52 PM
		</div>
		<div class="comment_text"><p>Interesting function. It would be cool if they could also provide a method to get the reference to the function object itself as well. I like your example with the generic getter/setters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717792">9</a> by Raymond Camden
		posted on 8/19/2009 at 6:09 PM
		</div>
		<div class="comment_text"><p>@Ben: That example was from Elliott Sprehn - super smart CF guy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717791">10</a> by Ben Nadel
		posted on 8/19/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>No doubt Elliott is wicked smart (too bad he wasn't at CFUNITED this year - I hear he had an internship at Microsoft). His example is cool, but breaks if the target method is not stored in the variables scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717793">11</a> by Raymond Camden
		posted on 8/19/2009 at 6:13 PM
		</div>
		<div class="comment_text"><p>How would the method _not_ be stored in the variables scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717795">12</a> by Ben Nadel
		posted on 8/19/2009 at 6:16 PM
		</div>
		<div class="comment_text"><p>If you store a pointer to it in the request scope or something. I am not talking about methods inside a CFC, but free-floating functions (which can be pulled out of a CFC as well).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717799">13</a> by Raymond Camden
		posted on 8/19/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>Ah, interesting - now I get what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717800">14</a> by Ben Nadel
		posted on 8/19/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>It originally came up because I wanted to be able write a UDF to the ram disk and then read it back in and have it be able to reference itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717796">15</a> by Ron Hopper
		posted on 8/19/2009 at 6:22 PM
		</div>
		<div class="comment_text"><p>That's great!  I needed this function for partial-mocking in cfSpec.  When running a test, you can dynamically inject code to stub out methods on other objects so they are not actually called during the test.  I've done it by pointing method names at onMissingMethod, but that's messy and only works when the function is called externally or with an explicit 'this' scope.  Great news! Thanks for posting it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717797">16</a> by Hemant
		posted on 8/21/2009 at 8:26 AM
		</div>
		<div class="comment_text"><p>I guess I should add this to my presentation for MAX. Thanks Ray for your post highlighting this function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717798">17</a> by Eric Twilegar
		posted on 9/8/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>I'll probably use this in my views/templates.</p><p>We had a system setup where at the begging and end of functiosn we'd output a something like "Drawing start of table"...and then something similiar at the end the end. Of course the function only outputted when in debug mode.</p><p>At the end of the day you could throw a page into debug mode and easily find where in a template something was rendered. We tend to put lots of functions in our templates to better encapsulate them as they start to get really long.</p><p>This could help the developer find exactly what code is drawing a portion of the page. Hopefully it's return the CFC, CFM or whatever else might be useful.</p></div>
	</div>
</div>
		