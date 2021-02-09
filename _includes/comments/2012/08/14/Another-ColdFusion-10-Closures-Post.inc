
<div class="comment" id="c_1713742521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742521">1</a> by Adam Cameron
		posted on 8/15/2012 at 3:11 AM
		</div>
		<div class="comment_text"><p>None of these examples are *closures*, Ray.  They're just inline functions.  True, inline functions are a handy feature of CF10 (and, I'd say, more handy than closures are), but you're not demonstrating closures here.</p><p>The whole thing about a closure - that which differentiates one from just a bog-standard function -  is that it encloses variables from the context the function was defined in, rather than its variable references all being relative to when it's called.  This is not happening in any of your examples.</p><p>closure != inline function</p><p>Uncharacteristically, the online docs offer a reasonable example of a closure:<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FDeveloping%2FWSe61e35da8d31851842acbba1353e848b35-8000.html%3AUiYXpXbrkGzMpnpIboMsIQvciN4&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/Developing/WSe61e35da8d31851842acbba1353e848b35-8000.html">http://help.adobe.com/en_US...</a></p><p>It's a good blog post, but it should be relabeled/retitled, I reckon.</p><p>Cheers.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742527">2</a> by Mark Mandel
		posted on 8/15/2012 at 4:03 AM
		</div>
		<div class="comment_text"><p>C/P'ing from Wikipedia:<br>"In computer science, a closure (also lexical closure or function closure) is a function together with a referencing environment for the non-local variables of that function."</p><p>So technically all "inline functiond" in ColdFusion are actually closures, since they do include the reference to it's original environment.</p><p>I would attest that whether or not the code accesses variables from that reference is immaterial. The fact that it simply exists defines these code blocks as closures.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742525">3</a> by Russ S.
		posted on 8/15/2012 at 6:37 AM
		</div>
		<div class="comment_text"><p>@Ray, thanks again for sharing Underscore.cfc. I'm very happy with how it has turned out, I only wish there were more contributors!</p><p>I'm going to be doing a BoltTalk with Tim Cunningham soon about my port of Backbone.js for CF, which is heavily reliant upon Underscore. <a href="http://disq.us/url?url=http%3A%2F%2Fcfmumbojumbo.com%2Fcf%2Findex.cfm%2Fbolttalks%2F%3ApxO97AzwHw6SvymYEWTAw0ljxvY&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmumbojumbo.com/cf/index.cfm/bolttalks/">http://cfmumbojumbo.com/cf/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742522">4</a> by Adam Cameron
		posted on 8/15/2012 at 10:22 AM
		</div>
		<div class="comment_text"><p>Hi Marc, fair enough: I'll concede the technical point there.  *My* point was more than having this sort of example of closures is like having an example of Application.cfc and only talking about what a CFC is, without ever mentioning onApplicationStart / onRequestStart etc.  And then saying "but it DOES demonstrate Application.cfc because it's a CFC and it's called Application.cfc".</p><p>Anyway, I guess I am kind of splitting hairs, and - like I said - I *do* think it's a good post as far as inline functions go.  Just not so much as far as the "closureness" of closures go.  If that makes sense.</p><p>I have an idea for an article on me own blog now though... ;-)</p><p>Cheers.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742526">5</a> by Raymond Camden
		posted on 8/15/2012 at 2:16 PM
		</div>
		<div class="comment_text"><p>Just call me the instigator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742524">6</a> by Adam Cameron
		posted on 8/15/2012 at 2:28 PM
		</div>
		<div class="comment_text"><p>Ray, you Instigator you.</p><p>There: sorted.</p><p>;-)</p><p>Seriously... it might be a while before I get onto it, I've got a reasonable queue of stuff to write up.  Also last time I checked for good closure examples, I struggled a bit.  I note that the example in the CF docs is actually one I wrote by way of example (except "Maori" has been changed to "Hindi" ;-), so even Adobe didn't have many ideas.</p><p>But I'll find something.  I enjoy the investigation.</p><p>Cheers.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742523">7</a> by David Knighton
		posted on 8/15/2012 at 3:48 PM
		</div>
		<div class="comment_text"><p>+1 for Ace of Base alone!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742528">8</a> by Salvatore Fusto
		posted on 8/16/2012 at 12:44 PM
		</div>
		<div class="comment_text"><p>imho the best way to demo a closure is a function returning a function; a pseudo code should be<br>function hello(title){<br>  this.title=title<br>  function hello2(name){<br>     return name + title;<br>  }<br>  return hello2();<br>}<br>myfn = hello(" is the great!")<br>print myfn("Ray Camden") --&gt; Ray camden is the great!<br>myfn = hello(" is fat!"(;<br>print hello("salvatore") --&gt; Salvatore is fat!<br>seiously the hello fn returns a function and its own scope.<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742529">9</a> by Adam Cameron
		posted on 8/18/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>@Salvatore, that's pretty much what they've got in the docs.</p><p>It's a good example for some docs, but I'm more interested in actual useful, real-world usage of closures (and the closureness of closures, not just that CF implements inline functions as closures.  We get it. ;-)</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742532">10</a> by Salvatore Fusto
		posted on 8/20/2012 at 12:50 PM
		</div>
		<div class="comment_text"><p>Adam,<br>you are right, this is a simple doc-style example (derived from javascript code i've written not from cf), but it is usefull to describe how closure encapsulate a function and its own scope: calling the external function hello assign to myfn not only a value, but a scope too, see the variable title, that is passed to myfn and lives for all myfn's usages.<br>about usefullness of closuses and in line unnamed function, i try to explain my opinioon with an example: an algorithm is a set of rules applied to a set of data (think to a function to calculate the sun of an array element): without inline functions you have to write a function with 1 args (the array) so you have to a function for every action to perform on the array; with inline function you can separate data and action, writing a funzion with 2 args, a collection of data and a function representing action the action to perforìm on data: this way code becames more abstract and reusable (you can write a library of fn representing more action, sun, medium etc) to reuse.<br>more, closures let to avoid declaration and use of global variables.<br>of course, we can live without closure and unnamed fn, but imho the make our code more abstract.<br>regards.<br>ps: excuse my poor english, that can be responsable of misunderstanding</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742531">11</a> by Alexei Martchenko
		posted on 8/21/2012 at 1:31 AM
		</div>
		<div class="comment_text"><p>Who's Frank Sintra? :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742530">12</a> by Raymond Camden
		posted on 8/21/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>The Punk Rock version! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742535">13</a> by Adam Cameron
		posted on 9/26/2012 at 11:23 PM
		</div>
		<div class="comment_text"><p>OK, "Mr Instigator", I finally got around to putting my money where my mouth is and doing my own blog article on this, over yonder: <a href="http://disq.us/url?url=http%3A%2F%2Fadamcameroncoldfusion.blogspot.co.uk%2F2012%2F09%2Fcallbacks-function-expressions.html%3AvULrOimsMO8tdzVKgFha1HxfK9Q&amp;cuid=3321886" rel="nofollow noopener" title="http://adamcameroncoldfusion.blogspot.co.uk/2012/09/callbacks-function-expressions.html">http://adamcameroncoldfusio...</a></p><p>Cheers for the inspiration and the instigation.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742534">14</a> by Raymond Camden
		posted on 9/26/2012 at 11:41 PM
		</div>
		<div class="comment_text"><p>You and your silly methodical research. You know that doesn't below in the ColdFusion world! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742533">15</a> by Matt Bram
		posted on 1/6/2013 at 12:24 PM
		</div>
		<div class="comment_text"><p>Ray, Great Post! I was so happy to see that Adobe produced closures in CF10. This I believe in part, had more to do with the integration between ColdFusion and Microsoft OWS (Exchange 10) than anything else. I had developed a Java integration bridge using Microsoft's OWS JAPI with CF9. I had to do this entirely in Java because ColdFusion 9 does not do closures and I could not create the correct Interface in ColdFusion to work around, like the Java solution requires. With closures, we now get a huge benefit. I wouldn't be surprised to see our brethren/sisters developing messaging frameworks and all kinds of other kick you in the pants stuff for CF.</p><p>Great post :)<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_2112569459">
	<div>
		<img src="https://disqus.com/api/users/avatars/bill_tudor.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2112569459">16</a> by Bill Tudor
		posted on 7/2/2015 at 2:31 PM
		</div>
		<div class="comment_text"><p>Ray I don't know if this s CF11 vCF10 thing but I couldn't get this to work until I replaced your gt test in the closured arraysort with compare()</p></div>
	</div>
</div>
		
<div class="comment" id="c_2112574552">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2112574552">17</a> (In reply to <a href="#c_2112569459">#16</a>) by Raymond Camden
		posted on 7/2/2015 at 2:34 PM
		</div>
		<div class="comment_text"><p>Interesting. Well, upgrade to 11. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2362018836">
	<div>
		<img src="https://disqus.com/api/users/avatars/itisdesign.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2362018836">18</a> (In reply to <a href="#c_2112574552">#17</a>) by itisdesign
		posted on 11/16/2015 at 7:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I just ran into that too, but then checked the docs and see the comparator *must* return 1, 0, or -1.</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_2362207487">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2362207487">19</a> (In reply to <a href="#c_2362018836">#18</a>) by Raymond Camden
		posted on 11/16/2015 at 11:57 AM
		</div>
		<div class="comment_text"><p>Ah cool, thank you for posting back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2363091810">
	<div>
		<img src="https://disqus.com/api/users/avatars/itisdesign.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363091810">20</a> (In reply to <a href="#c_2362207487">#19</a>) by itisdesign
		posted on 11/16/2015 at 8:43 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>You're very welcome!</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		