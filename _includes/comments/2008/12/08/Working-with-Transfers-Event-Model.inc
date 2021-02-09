
<div class="comment" id="c_1713710531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710531">1</a> by Michael Long
		posted on 12/9/2008 at 11:22 AM
		</div>
		<div class="comment_text"><p>That's pretty awkward. So according to the article, if I have 50 data objects, and each one needed some sort of "aftercreate" handling, I'd have to write 50 checks to see which object is being passed in?</p><p>If true, Transfer would do better to make the object "decorator" a full-fledged delegate, so it can then call the single and specific "aftercreate" method for that object type (if it exists in the delegate). Which also tends to conveniently eliminates the duplicate object registration process.</p><p>At the very least, it should let you register an event handler for a specific type (employee). Coding a single function that switches on object type is simply bad design.</p><p>And needlessly passing every object created by the system to a single function so it can be tested is a poor performance choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710546">2</a> by Mark Mandel
		posted on 12/9/2008 at 3:47 PM
		</div>
		<div class="comment_text"><p>* takes it on the chin, keeps on running *</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710549">3</a> by Michael Long
		posted on 12/9/2008 at 4:46 PM
		</div>
		<div class="comment_text"><p>@Marc, if you already have the event mechanism in place, and if you can get to the decorator from the transfer object (TO), then adding the decorator/delegate functionality I just described should be trivial.</p><p>Then you'd have the best of both worlds, easily customization of events for a given TO with minimal extra code via the delegate, plus the ability of external components to tie into the global system using the current mechanism.</p><p>I also think you should add the ability to register a handler bound to a specific type. That would fix the performance issue of broadcasting events for each and every object insert and update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710547">4</a> by Raymond Camden
		posted on 12/9/2008 at 4:47 PM
		</div>
		<div class="comment_text"><p>@ML: I'm not 100% sure I read your first paragraph right. If you have 50 _types_, and you want event handling for all for BeforeCreate, you only do ONE function call. Ie, one addBeforeCreateObserver.</p><p>Or do you mean that if you had 50 different types of things to do you would have a huge ass CFIF? Well, in that case, you are right. If you had 50 unique things to do for BeforeCreate than you would need a rather large CFSWITCH. However, to be fair to Mark, I'd say that is a VERY extreme case. I see the Event Model is being a bit more generic. Using my autoset create/update example, I think you can imagine that it would probably apply to ALL content in my employee db.</p><p>That's my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710553">5</a> by Brian Kotek
		posted on 12/9/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>Ray, just a note that if you are using ColdSpring, you can simplify this a fair bit by letting your Observer configure itself with the Transfer Factory:</p><p>&lt;bean id="myTransferObserver" class="com.MyObserver"&gt;<br>	&lt;constructor-arg name="transfer"&gt;<br>		&lt;ref bean="transfer" /&gt;<br>	&lt;/constructor-arg&gt;<br>&lt;/bean&gt;</p><p>And then in the constructor for the Observer:</p><p>&lt;cffunction name="init" access="public" returntype="any" hint="Constructor."&gt;<br>	&lt;cfargument name="transfer" type="transfer.com.Transfer" required="true" /&gt;<br>	&lt;cfset arguments.transfer.addBeforeUpdateObserver(this) /&gt;<br>	&lt;cfset arguments.transfer.addBeforeCreateObserver(this) /&gt;<br>	&lt;cfreturn this /&gt;<br>&lt;/cffunction&gt;</p><p>So CS passes Transfer into the Observer, and it registers itself for whatever events it is interested in.</p><p>Michael's idea seems to be going on the assumption that every object needs it's own custom event handling code. In reality, this is not the case.</p><p>Observers are meant to handle cross-cutting concerns in a manner similar to AOP, things like populating a createdDate or lastModififierID, which tend to apply to many if not all Transfer objects in the system. If Transfer did that, you'd end up with duplicated handling code in every Transfer object, which would be absolutely awful.</p><p>Further, if you have code that you want to run before update or save that is specific to each Transfer object, you already have the means to do this! Just override any of the save or update methods in the Transfer object and run whatever code you want to. What would be the point of designating some "special" method within a TO that did nothing but execute some code that you could just have run in your save() method? Again, Transfer Observers are meant to handle things that apply across many objects, they are not meant for code specific to individual objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710538">6</a> by Raymond Camden
		posted on 12/9/2008 at 8:08 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this Brian. Your comments on cross cutting is exactly what I took from the docs as well, but you explained it much better. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710554">7</a> by Matt Williams
		posted on 12/10/2008 at 3:02 AM
		</div>
		<div class="comment_text"><p>Thanks Ray and Brian. Very timely. I was trying to figure out a one-place way to default a date to null. I had to do this on lots of tables and didn't really want to do it in a configure method.</p><p>The AfterNew event worked great for me. I did have to add lazy-init="false" to the observer bean definition in CS for it to do the registering automatically.</p></div>
	</div>
</div>
		