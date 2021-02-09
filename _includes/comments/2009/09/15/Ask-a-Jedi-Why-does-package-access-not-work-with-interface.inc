
<div class="comment" id="c_1713718416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718416">1</a> by John Farrar
		posted on 9/15/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>Well declaring a method “private” would give the person declaring it a clue it was internal. LOL … or duh, we know that. Here is an illustration primed for someone to totally ignore the point because they are not trying to see my point. Yet, going to throw it out there for the guys who actually want to think about what I am saying.</p><p>base_bird.cfc</p><p>energy_interface.cfc</p><p>dove.cfc (extends base_bird / implements energy_interface)<br>hummingbird.cfc (extends base_bird / implements energy_interface)<br>eagle.cfc (extends base_bird / implements energy_interface)</p><p>Each type of bird has a way to collect and expend energy. Some of the energy methods would naturally be “private”. It does not make sense to expose all the interface as  public. This clutters the interface and in some use cases this would also be a security issue depending on the project and implementation. The point is that all the energy methods need to be there. They are not needed in the base class. In fact it can be argued that putting a default method in the base class makes it possible to create a bird where the appropriate methods were not added. Because the methods were in the base class the bird may test properly but actually not preform accurately. Therefore it is yet another path to unstable code. So I can see where private methods in the cfInterface tag would be pragmatic. Of course your millage may vary. Again this won’t “prevent” issues… but it should increase code integrity.</p><p>Note some may panic thinking this will "change" the way it works in other languages. If you added heads up GPS to your car windshield it would not change the way your windshield wipers work. The rain would still stay on the outside... and you don't have to turn the GPS on. It would just be an additional feature letting all the current features continue to work just like they do now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718421">2</a> by Ryan Guill
		posted on 9/15/2009 at 6:33 PM
		</div>
		<div class="comment_text"><p>also, I just wanted to add that the interface defines the *minimum* contract for an object; meaning that you must define *at least* what externally available methods and properties that the interface defines, but you can also provide other externally available methods and properties as you see fit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718418">3</a> by Brian Kotek
		posted on 9/15/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>Since an interface is, by definition, a public API contract, and since this is how it is done in virtually every language's implementation (Java, PHP, ActionScript, C#, etc.), I'd say you might as well get used to the idea that this is how it works. One can disagree, but I think it is highly unlikely that Adobe will reject the industry-wide definition of an interface on the basis of a few dissenters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718413">4</a> by John Farrar
		posted on 9/15/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>@Brian... appending features does not "change" the standard. It does something called "innovate". And it's a bit rude to call an innovator a dissenter. I would suggest this same feature being added to JAVA also for instance, and the other languages. Of course maybe we should get at the end of the line and do it after everyone else? NAY... CF is a leader, and should continue to innovate!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718417">5</a> by Brian Kotek
		posted on 9/15/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>In this case, "appending a feature" changes the very definition of what an interface is supposed to be. Which means such a change should be very carefully considered. Add to this the fact that every language I have used that contains interfaces implements them this way, which means a great number of experienced people have thought this through already. Were they all wrong? Possibly. But very doubtful.</p><p>In my experience, any time I've thought I needed a non-public interface method has resulted in discovering a flaw in my design. I end up using abstract classes and composition to address these situations, which usually results in a better design.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718430">6</a> by Andy Powell
		posted on 9/15/2009 at 9:07 PM
		</div>
		<div class="comment_text"><p>I would highly suggest that anyone interested in interfaces and how to use them read this book:</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.amazon.com%2Fdp%2F0976694050%3Ftag%3Danposcofljaan-20%26camp%3D14573%26creative%3D327641%26linkCode%3Das1%26creativeASIN%3D0976694050%26adid%3D1T043PS1N9SYM2H668MF%26%3Acx6X5KgDwkcZbaFmKyHQbvULcX8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amazon.com/dp/0976694050?tag=anposcofljaan-20&amp;camp=14573&amp;creative=327641&amp;linkCode=as1&amp;creativeASIN=0976694050&amp;adid=1T043PS1N9SYM2H668MF&amp;">http://www.amazon.com/dp/09...</a>"&gt;Interface Oriented Design&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718420">7</a> by John Farrar
		posted on 9/15/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>That is like saying roll bars in a race car would be wrong if you added a seat belt for safety. Your argument basically makes the assumption that adding a seat belt would question the roll bar.</p><p>Private doesn't change anything. So it doesn't speak to being wrong or right... you are just sorta off on a disconnected tangent. :)</p><p>I cannot speak to the flaws in your design on non-public interfaces. I can speak to the concept of implicit setters and getters. Some times you may choose to have a setter or getter be private. This is possible in AS3 and other languages but off the topic of private methods in CFInterface. Many times they don't need to be private... and they don't "need" to be public. If they do not need to be public I personally prefer to not "clutter" the interface with methods that don't concern the "external interface". It's OK with me if you make everything external on your software.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718422">8</a> by John Farrar
		posted on 9/15/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>@Andy... after reading the book could you give us a review of how (1) What level a developer should be before reading this book? (2) What you thought about th equality of this book. (3) How hard it is to translate the concepts to ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718414">9</a> by John Farrar
		posted on 9/15/2009 at 9:15 PM
		</div>
		<div class="comment_text"><p>@Andy...<br>P.S.<br>What does the book give for a reason you would not have a public interface in this author's opinion? (Other than no one did it to start before now... a concrete reason.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718419">10</a> by Jason Dean
		posted on 9/16/2009 at 2:14 AM
		</div>
		<div class="comment_text"><p>@john,</p><p>The thing about having private methods in an interface that does not make sense to me is about encapsulation. The interface is about defining how the object should appear to the PUBLIC. If, as you say, you should be able to define private methods in an interface, and I am trying to implement that interface, why should I be forced to use those private methods? What if I can still honor the public contract of the interface without implementing those internal methods? Well, if they were defined in the interface, then I would still need to implement them, right?  Even if I wasn't using them?  What happens inside of the object should not matter, right?  Why would I need to clutter up my class with methods I am not using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718415">11</a> by Rick O
		posted on 9/16/2009 at 2:34 AM
		</div>
		<div class="comment_text"><p>John F said:</p><p>"Some of the energy methods would naturally be “private”. It does not make sense to expose all the interface as public. This clutters the interface and in some use cases this would also be a security issue depending on the project and implementation. The point is that all the energy methods need to be there."</p><p>I think this is the crux of the problem, and not to put too fine a point on it, but I think you are confusing Inheritance (is-a: extending a base class) and Composition (has-a: implementing an interface).</p><p>In your example, you say: "Some of the [interface] methods would naturally be private".  This is wrong, by definition.  An interface defines how one component tells another to do something.  By definition, another component cannot call a component's private methods.  And thus, the private methods cannot be included in an interface.</p><p>To extend your example, you suppose that every class that implements the "energy_interface" interface must have some kind of "collateEnergy" private method.  That may be true by coincidence, but if it is not 100% necessary to perform the function defined by the interface, and isn't something that the caller into the interface needs to worry about, then it isn't in the interface.  And what's to stop me from writing a class that doesn't use that particular function, for whatever reason?</p><p>That's the whole point of interfaces: they define the minimum surface area of an implementing component, or the "you must be this tall to ride this ride".  Private methods, by definition, are not part of the surface area of a component.</p><p>"Extending" interfaces to support private methods wouldn't make any sense.  At that point, you have pure virtual abstract private methods, and you're back to being a class, not an interface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718426">12</a> by Adam Cameron
		posted on 9/16/2009 at 11:10 AM
		</div>
		<div class="comment_text"><p>All the discussion here seems to be about public vs private access for interfaces.  Obviously (sorry John) PRIVATE methods have no place in an interface.  By definition (as others allude to).</p><p>I agree with everything that's being said here regarding private methods, but it's a bit of a non-sequitur as far as answers to the actual question goes.  IE: it's not answering the question actually being asked.</p><p>Does it make sense to enforce an interface in such a way that a method MUST be exposed to its package?  Would this mean "only to the package", or would it mean "at least to its package" (so the implementing method could be PUBLIC)?  Does it make sense?</p><p>What about asking the same question about remote-access methods?  Is it the business of an interface to specify that a web-service-ready method must be provided by the implementing class?</p><p>I think in regards to packages, it's probably not really appropriate (and for the same reasons as for private methods).  I'm not so sure about remote methods.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718423">13</a> by John Farrar
		posted on 9/16/2009 at 5:15 PM
		</div>
		<div class="comment_text"><p>Perhaps this is my difference of thought. (@Rick) There are two types of patterns, class patterns and instance patterns. Intheritance is a class pattern where decorator is a instance pattern. I view interface as it works in ColdFusion to be a class pattern. I showed some of the 'gurus' my example and they understood my point was not crazy after all. Won't throw it out for the general public because there is enough confusion just learning design patterns to not throw out something people are closed minded about. Anyhow...</p><p>1. CFInterface does not appear to be running on "live components". If CFInterface checked components that were already existing then it would make sense to me that it were about and only about public methods. (instance patterns)</p><p>2. CFInterface runs as a component is being instantiated. So it is about the class as well as the resulting instance. (class patterns)</p><p>Understanding how CFInterface works may be an issue with understanding how other concepts work on other platforms. (Someone else can speak to that.)</p><p>After chatting with this off the list with others they told me in C++ and Java this type of thing is done with an "abstract private method". CF does not support this. In CF you would have to deal with this by creating a method with a throw statement that is called when the method is requested. Unlike the class based pattern this will not fail on instantiation so unless you call the method it will appear to be intact. Perhaps something we can look at for the next version... or I may share the solution I came up with for the community at a later date.</p><p>Here is my guess... if we can check for the method on instantiation as long as it is not through CFInterface people will like it. The whole issue is the holiness of interface basically. :)</p></div>
	</div>
</div>
		