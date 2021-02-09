
<div class="comment" id="c_1713723483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723483">1</a> by Dan G. Switzer, II
		posted on 4/11/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>A couple of things:</p><p>1) For better efficiency, try specifying a scope to your main selector. This can speed up things when you have lots of input elements.</p><p>2) Cache you selectors. You keep doing things like: $(this).children("tr") it's expensive to keep doing all these look ups. Any time your reusing a collection make sure to store it in a variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723486">2</a> by Raymond Camden
		posted on 4/11/2010 at 12:36 AM
		</div>
		<div class="comment_text"><p>2 makes sense. I kinda figured though as I was only doing 2-3 calls it didn't matter. Do you think it makes sense when only doing a few calls?</p><p>1 does _not_ make sense. Got an example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723484">3</a> by Brian Swartzfager
		posted on 4/11/2010 at 12:51 AM
		</div>
		<div class="comment_text"><p>Ray, I think Dan's talking about the ability to tell jQuery that you're only looking for matching elements within a certain container (like your permissions table).  I think the syntax would be:</p><p>$("input[name^='perm_']","#myPermissionsTable").change()...</p><p>...with "myPermissionTable" as the id of the table.</p><p>I haven't touched jQuery in a few months, so I may be a bit off on that one...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723481">4</a> by Dave phipps
		posted on 4/11/2010 at 1:02 AM
		</div>
		<div class="comment_text"><p>To scope your selector simply add the parent id to the selector. E.g if your form has an id of myform then you can do this: $("input[id*='']","#myform").change...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723489">5</a> by Don
		posted on 4/11/2010 at 4:52 AM
		</div>
		<div class="comment_text"><p>You can also use the "find" method which doesn't depend on knowing how "deep" the checkbox is found. I have no idea if there is a much of a performance hit. I also based the selectors on attribute value (no need to remove checked attr from unchecked)</p><p>$(document).ready(function(){<br> $("input[name^='perm_']").change(function() {<br>        if($(this).attr("checked")) $(this).closest("tr").find("[disabled=true]").removeAttr("disabled")<br>       else {<br>             //remove checks<br>             $(this).closest("tr").find("[checked=true]").removeAttr("checked");<br>            //make all disabled<br>            $(this).closest("tr").find("[disabled!=true]").attr("disabled",true);<br>            //but fix me<br>             $(this).removeAttr("disabled") <br>	      }<br>     })</p><p>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723485">6</a> by Raymond Camden
		posted on 4/11/2010 at 6:46 PM
		</div>
		<div class="comment_text"><p>Thanks all for clarifying the scoping. I knew of it - but for some reason, I didn't 'get it' when Dan mentioned it.</p><p>So question - in both tips, it felt a bit like overkill to me. For example, why cache the $(this).closest("tr").etc when I only run it twice? Not arguing against the performance benefits, just... well, ok, maybe I'm being lazy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723487">7</a> by Raymond Camden
		posted on 4/11/2010 at 7:11 PM
		</div>
		<div class="comment_text"><p>By the way, I'm also thinking of adding a bright yellow background to the TRs where OVERRIDE is enabled. Maybe a bit ugly, but even more obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723493">8</a> by Don
		posted on 4/11/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>The main reason I proposed an alternative is that it avoids knowing the depth of the checkbox and having to use children().children() not for performance. Also it will enable/disable all controls in the row so it could be used if you had elements other than checkboxes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723488">9</a> by Raymond Camden
		posted on 4/11/2010 at 7:22 PM
		</div>
		<div class="comment_text"><p>@Don: Oh yeah - thats smart!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723490">10</a> by Dan G. Switzer, II
		posted on 4/12/2010 at 6:45 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Sorry I didn't give examples, I posted from within TweetDeck on my iPhone, so I couldn't see the original post when typing up my response. Brian &amp; Dave were correct with their responses. Scoping your selector can see huge performance increases if you have a DOM heavy page. For example, if you have 100s of input elements on a page (which is certainly possible on large forms) then selector $("input[name^='perm_']") has to go through each input element and examine it's name.</p><p>However, if you can limit searching the input elements to specific fields, then you've vastly reduced the overhead.</p><p>Another option is to add a class to your inputs. Modern browsers have built-in JS methods for CSS selection, so this can speed things up too.</p><p>As far as caching goes, you're actually creating 5 separate jQuery instances of $(this)--which is an expensive operation. Unless I'm only calling $(this) once, I always cache it. I never use $(this) more than once in the current running context.</p><p>Also, your code references $(this).closest("tr").children().children() 3 times. Not only would caching provide performance benefits, it's going to simplify your code if you ever change your markup.</p><p>Also, to future proof your code a bit, I'd probably change $(this).closest("tr").children().children() to $(this).closest("tr").find(":checkbox"). While this might be slightly slower, 1) you'd now be caching the results, 2) it's now safer to make changes to your DOM w/out breaking the code (obvious, if you stop using tables or make drastic layout changes the code may break, but it won't break if you have to add some additional markup,) 3) it's easier to read what's going on.</p><p>When I see $(this).closest("tr").children().children() I don't immediately know what DOM element I'm dealing with. However, $(this).closest("tr").find(":checkbox") is much more straightforward.</p><p>So, I'd add this to your code:</p><p>var $el = $(this), $checkbox = $el.closest("tr").find(":checkbox");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723492">11</a> by Raymond Camden
		posted on 4/13/2010 at 3:29 PM
		</div>
		<div class="comment_text"><p>Juicy. Going to try to rewrite this today during lunch and repost the code as a comment. Thanks!</p></div>
	</div>
</div>
		