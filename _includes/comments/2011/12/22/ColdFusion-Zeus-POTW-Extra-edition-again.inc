
<div class="comment" id="c_1713737656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737656">1</a> by Yuri Vorontsov
		posted on 12/22/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>Cool. But what's wrong with a good old</p><p>compObjStr = "com.whatever";<br>compObj = createObject("component" , compObjStr );</p><p>Gr<br>Yuri</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737644">2</a> by Raymond Camden
		posted on 12/22/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>I think you misunderstood. This isn't about creating a dynamic CFC. It is about calling a dynamic method on a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737653">3</a> by Yuri Vorontsov
		posted on 12/22/2011 at 8:54 PM
		</div>
		<div class="comment_text"><p>Indeed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737649">4</a> by Joshua Miller
		posted on 12/22/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>Love the new features coming to CFScript - can't wait for every single tag to have a script equivalent. I for one love the little "teaser" features being announced - many of them are as important to me as the major additions. Closures are cool, but the hidden gem of functional implicit struct (and hopefully array) notation excites me more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737647">5</a> by Phillip Senn
		posted on 12/22/2011 at 10:21 PM
		</div>
		<div class="comment_text"><p>It took me a very long time to realize that in JavaScript, {x:4, y:9} was a way of passing an object with 2 name/value pairs.  After all, there's no equal sign, so "how are these values getting set?"  And assigning a value to a variable should be what you learn on day 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737648">6</a> by Raymond Camden
		posted on 12/22/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>I'm just happy they added this - I do so much JS work now that I keep screwing up the assignments going back and forth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737651">7</a> by existdissolve
		posted on 12/22/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray---</p><p>As always, thanks for sharing about even the small enhancements coming in Zeus. I know the troll criticized the highlighting of these features, but for those of us who _actually_ like ColdFusion, this stuff is simply gold.</p><p>I look at it like this. I'm sure there are dozens and dozens of people who are waiting for X or Y *huge* feature to be implemented into CF. And I'm sure once X or Y is implemented, they will immediately use it to its full capability.</p><p>However, there are also a ton of us who use CF, will upgrade to Zeus when it's available, and will probably never use X or Y huge feature. But we will use the heck out of the fix for colons in implicit struct creation. We will use the new callstack capability. And we will use datetimeformat.</p><p>While all of these are certainly "small" in the grand scheme of all that CF does, can do, and will do, they also quickly add up for developers who use CF every day in the calculus of why we love using it, and why we anticipate what's to come in future versions.</p><p>Keep 'em coming!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737654">8</a> by Raymond Camden
		posted on 12/22/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>Thanks- much appreciated. :) There's still a lot more to show, and more nuggets like this (oh, like a new regular expression thing that I'll be coy about).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737655">9</a> by Zach Stevenson
		posted on 12/22/2011 at 10:40 PM
		</div>
		<div class="comment_text"><p>This is very exciting, but I now have a ton of questions.<br>Can the new Invoke Method take a string as it's first value like how cfinvoke can take the name of a component for the component attribute?  ex: invoke(component = "myComponent", method = "foo", arguments = {foo:'bar'});</p><p>If so, is this really the best thing to do?  On each invoke it would be instantiating a temporary transient object that represents the string you passed in just so it can call the function on that object.  The only use cases of passing a string that represents the object instead of the object itself would be utility components to fake static function calls.  So wouldn't it make more sense to include the static modifier to components so you wouldn't even have to instantiate the object and have that overhead each time you called an invoke?  Or further, wouldn't it make sense to add the ClassName.staticFunction()   OR local.class = new ClassName; local.class.staticFunction()  syntax to CF?</p><p>If not so, why is Invoke going to be a global function if the first argument is always a component?  Wouldn't it make sense to make it a method on the component object?  ex: myComponent.invoke(method = "foo", arguments = {foo:'bar'});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737652">10</a> by Raymond Camden
		posted on 12/22/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>"Can the new Invoke Method take a string as it's first value like how cfinvoke can take the name of a component for the component attribute?"</p><p>Yes, I said that. :) "The first argument is either an instance of a CFC or the name of a CFC."</p><p>"If so, is this really the best thing to do?"<br>It depends. Almost always folks make an instance of a CFC and keep it around. But not always. Point is - both is supported.</p><p>"If not so, why is Invoke going to be a global function if the first argument is always a component?"</p><p>If I had to guess, to ensure it wouldn't break with folks who used invoke as a method name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737658">11</a> by Zach Stevenson
		posted on 12/22/2011 at 10:49 PM
		</div>
		<div class="comment_text"><p>Oops!  I didn't even see the paragraph between the second and third examples.</p><p>"If I had to guess, to ensure it wouldn't break with folks who used invoke as a method name."<br>Good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737657">12</a> by Zach Stevenson
		posted on 12/22/2011 at 11:00 PM
		</div>
		<div class="comment_text"><p>Love the JSON struct notation.  That's definitely going to save me tons of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737659">13</a> by Peter Boughton
		posted on 12/22/2011 at 11:23 PM
		</div>
		<div class="comment_text"><p>Is this invoke function instead of fixing obj[method](args) syntax? :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737660">14</a> by Raymond Camden
		posted on 12/22/2011 at 11:25 PM
		</div>
		<div class="comment_text"><p>Zach - to be clear - and you may know this - you can use implicit notation now - just not with colons. You know this, right? (And again - sorry if so. )</p><p>Peter - yes. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737671">15</a> by Zach Stevenson
		posted on 12/22/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>Yes, I know you can, but that 2 second pause remembering which way you have to do it for the language you are currently in is 2 seconds you can never get back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737667">16</a> by Raymond Camden
		posted on 12/22/2011 at 11:32 PM
		</div>
		<div class="comment_text"><p>Heh good point there. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737663">17</a> by Gary F
		posted on 12/23/2011 at 3:15 AM
		</div>
		<div class="comment_text"><p>I like the slow reveals you're blogging, Ray. Little tantalising morsels of entertainment building up to a crescendo with an explosion of the headline features! Hmm, a bit like sex which would be a disappointment if you did what I just described in reverse! Can I say that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737670">18</a> by Raymond Camden
		posted on 12/23/2011 at 3:17 AM
		</div>
		<div class="comment_text"><p>You said it - too late now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737665">19</a> by Peter Boughton
		posted on 12/23/2011 at 4:01 AM
		</div>
		<div class="comment_text"><p>There's an easier way to ensure it doesn't break for people that have an existing invoke function AND it's also a way that means you're not switching syntax when doing JavaScript.</p><p>s["sum"](x:4, y:9)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737664">20</a> by Raymond Camden
		posted on 12/23/2011 at 4:04 AM
		</div>
		<div class="comment_text"><p>What can I say - we didn't do it that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737668">21</a> by Peter Boughton
		posted on 12/23/2011 at 4:19 AM
		</div>
		<div class="comment_text"><p>Well I guess it has only been in the public bug tracker for six months, so we'll have to wait at least eighteen more for it to count as being "requested for years" and thus have a chance of being fixed. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737669">22</a> by salvatore fusto
		posted on 12/23/2011 at 2:25 PM
		</div>
		<div class="comment_text"><p>Ray, have i read correctly? you have written about closures (anonimous function, pass a fn as argument or return a fn eccin Zeus), didn't you?<br>i know that Sean Corfield has porposed this, and this could be is a great step forward for the language!!!<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737672">23</a> by Raymond Camden
		posted on 12/23/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>Closures are definitely in Zeus. I will be blogging examples in January. You can see it right now in my MAX video.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737645">24</a> by Ben
		posted on 12/24/2011 at 2:50 PM
		</div>
		<div class="comment_text"><p>Can you comment on the depth of closure support?  Someone said it would be limited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737666">25</a> by Raymond Camden
		posted on 12/24/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>Define limited. It seems pretty good to me. When I blog it, you will see, and be able to comment obviously. :) My MAX video was cut off, but I'm pretty sure closures is in the part you can watch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737673">26</a> by Kurt Bonnet
		posted on 1/1/2012 at 4:48 AM
		</div>
		<div class="comment_text"><p>Very nice!!!!  I love that I can use script syntax to perform this type of operation now!</p><p>I'm also VERY glad to see that implicit structure notation accepts COLONS as name/value pair delimiters. Since I do so much JS/Json work now I can't tell you how many times I have to go back and replace my equals signs with colons.</p><p>I can't wait for CF10 to come out!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737675">27</a> by Kurt Bonnet
		posted on 1/1/2012 at 4:50 AM
		</div>
		<div class="comment_text"><p>Whoops, typo. I meant "I have to go back and replace my colons with equals signs" when I switch from JS to CF dev.</p><p>It'll be nice to just use colons on both sides.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737676">28</a> by Markus Moser
		posted on 1/3/2012 at 9:31 PM
		</div>
		<div class="comment_text"><p>i'm a little bit confused about this function. you write the cfc can be provided as loaded cfc or as string declaration (like with the tag cfinvoke).<br>does this function only support cfc invocation or also webservice invocation like the tag does?<br>if webservice call are supported how this is working without named arguments?</p><p>tnx markus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737674">29</a> by Raymond Camden
		posted on 1/3/2012 at 9:35 PM
		</div>
		<div class="comment_text"><p>It supports either a CFC instance or a CFC name. Either of those are not going to be remote. I did not try an instance of a web service but I'd imagine that wouldn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737677">30</a> by Sean Corfield
		posted on 1/3/2012 at 11:01 PM
		</div>
		<div class="comment_text"><p>Given that the CFML Advisory Committee was unanimous that object[method](args) should work in cfscript I'm a bit surprised to see yet another global function added. You, Ben Forta and Adam Lehman all supported the object[method](args) notation. The other CFML engines already support it and the Adobe feedback was that it was simply a little too late in the (CF9) process to add it. Yet now we're seeing a (deliberately?) different approach being taken in ACF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737679">31</a> by Sean Corfield
		posted on 1/3/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>BTW, so glad that ACF will support : in struct literals! Folks have been asking for this ever since struct literals were introduced in CF8.</p><p>And it'll mean ACF10 behaves like the other CFML engines have done for several years :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737678">32</a> by Raymond Camden
		posted on 1/3/2012 at 11:43 PM
		</div>
		<div class="comment_text"><p>Sean: I will admit, I would have preferred the other syntax as well. I can accept this version though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737682">33</a> by Sean Corfield
		posted on 1/3/2012 at 11:47 PM
		</div>
		<div class="comment_text"><p>I think it's yet another "icky" language decision but it's not out of band compared to several other poor decisions over the years that CFML has had to endure :)</p><p>And I can see where it's come from, given how many other dynamic languages have some sort of "invoke" method on a metaprogramming object...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737681">34</a> by Raymond Camden
		posted on 1/24/2012 at 7:13 PM
		</div>
		<div class="comment_text"><p>Small correction folks. Zeus will not support the first argument of invoke being a string. Rather, it must be a CFC instance.</p></div>
	</div>
</div>
		