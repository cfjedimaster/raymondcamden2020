
<div class="comment" id="c_1713668093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668093">1</a> by Alex
		posted on 7/8/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Could you please post some example code for a CFC to show the init method in action?</p><p>Alex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668092">2</a> by Calvin
		posted on 7/8/2007 at 5:19 AM
		</div>
		<div class="comment_text"><p>Here's some...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.oreillynet.com%2Fpub%2Fa%2Fjavascript%2F2003%2F09%2F24%2Fcoldfusion_tips.html%3Ab6uBPL_2gC9qRAO0V66E_FRCTt8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.oreillynet.com/pub/a/javascript/2003/09/24/coldfusion_tips.html">http://www.oreillynet.com/p...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668091">3</a> by Gary Funk
		posted on 7/8/2007 at 7:42 AM
		</div>
		<div class="comment_text"><p>By golly, I think I have it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668097">4</a> by ivan
		posted on 7/8/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>nice..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668094">5</a> by Ben Nadel
		posted on 7/8/2007 at 7:36 PM
		</div>
		<div class="comment_text"><p>And just as a follow up to this, I wanted to touch up on the Init() method when it comes to Java objects which you can create via CreateObject( "java", "...). The Init() method on those objects calls the constructor for a Java object. However, unlike ColdFusion, Java can have several different constructors that take different arguments. Take a look at the Java StringBuffer - it has three constructors:</p><p>1. One with no arguments.<br>2. One with an initial capacity argument.<br>3. One with the initial content of the buffer.</p><p>When you create a StringBuffer and call its Init() method, ColdFusion looks at what arguments you pass in, and then looks at the available Java constructors and picks the one that seems most appropriate (based on your arguments).</p><p>So, when it comes to Java, the Init() method calls the Java constructor that is most appropriate. For consistency's sake, people have also adopted the Init() method to the be ColdFusion CFC de facto constructors even though ColdFusion does not enforce this in any way.</p><p>I hope that helps more than it hurts :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668096">6</a> by Raymond Camden
		posted on 7/8/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>To be fair, and I am NOT a Java coder, Ben, what you describe is method overloading. It isn't specific to Init(), but applies to _all_ java methods. Ie, I can build a foo method that takes an int, and one that takes a string. CF doesn't support this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668095">7</a> by Ben Nadel
		posted on 7/8/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>Ray, that's funny, I never thought about it in terms of standard method overloading (just constructors), but now that you bring it up, it makes a lot of sense. However, I was trying to pull it into the whole Init() discussion and part of why that has become a standard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668099">8</a> by Dale Fraser
		posted on 7/9/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>It is a shame CF8 doesn't introduce proper constructors. Why they wouldn't make this simple change is beyond me.</p><p>init is NOT a constructor, it ist just a method called init no different to any other method.</p><p>A constructor would be named the same as the class and called implicity.</p><p>[code]<br>&lt;cfcomponent displayname="shoppingCart"&gt;</p><p>  &lt;cffunction name="shoppingCart" access="public" output="no" returntype="shoppingCart"&gt;<br>    &lt;cfargument name="cartID" type="UUID" required="yes"&gt;<br>    &lt;cfset variables.cartID = arguments.cartID&gt;</p><p>    &lt;cfreturn this&gt;<br>  &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;<br>[/code]</p><p>Adobe should seriously consider if it is the long term benefit of CF to be so different and start doing some things the standard way, CF8 has added a couple that I can think of, but still a long way behind</p><p>PS: I never understood why &lt;cfcomponent wasn't &lt;cfclass</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668098">9</a> by Raymond Camden
		posted on 7/9/2007 at 5:58 AM
		</div>
		<div class="comment_text"><p>While I would like to see the idea of a constructor be more formalized, I take issue with you sayign CF is behind.</p><p>CF is not OO.</p><p>CF should NOT be OO.</p><p>And lastly, I pray to God that CF never becomes OO.</p><p>If I wanted to do OO, I'd use Java, or .Net. This is one reason why I don't much care about interfaces. Give me a feature like cfajaxproxy over interfaces any day.</p><p>When you say it should do things that standard way, what do you mean? OO is the standard? It is _a_ standard. Not _the_ standard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668103">10</a> by Dale Fraser
		posted on 7/9/2007 at 6:22 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I don't agree at all.</p><p>CF is OO, you can create classes, with public and private varibles, create instances, inherit from other classes, define interfaces. It is very OO, just missing some of the bits.</p><p>OO is the one and only standard, that's most languages has OO of some sort. It is what they teach at schools what 90%+ of developers use.</p><p>If you are not using CF in an OO way, then you are behind the game.</p><p>CF8: Is still behind from an OO point of view, ahead in many other areas. I'm just one of those people who want more OO stuff in CF, and as I said being added slowly, but I want it quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668106">11</a> by Raymond Camden
		posted on 7/9/2007 at 6:35 AM
		</div>
		<div class="comment_text"><p>We are going to have to agree to disagree on this one. I don't think you will find many people who agree with your 'CF is OO' statement, not do I think you will find people who _want_ CF to be OO.</p><p>But lets not turn this into a big long argument as I don't want to get too far off topic. Maybe tomorrow morning I'll start up a new blog entry on this topic. (And lets take a guess as to how high the comment count will get.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668121">12</a> by Joshua Curtiss
		posted on 7/9/2007 at 9:55 AM
		</div>
		<div class="comment_text"><p>Let's not forget the pseudo-constructor, the loose code in the component that is executed on creation. A couple years ago at a conference when I was beginning to learn how to implement OO in CF specifically, I asked one of the pros what their opinion was on always executing init() in the pseudo-constructor, effectively making init() implicitly called, albeit by manual means from the perspective of writing the CFC, but when consuming the CFC it would seem more OO-ish. He shot that idea down in front of the whole session audience. It always seemed like a good idea to me. But I terminated the practice after getting that feedback.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668117">13</a> by Dale Fraser
		posted on 7/9/2007 at 10:14 AM
		</div>
		<div class="comment_text"><p>I don't think he should have shot you down, but one of the reasons not to do this is that one of the benefits of a constructor is the ability to pass in paramaters.</p><p>So you can't do that with the method you explained.</p><p>I use Init now days, but as it's not a language feature and more of a style and common way of achiving CF's lacking of a proper constructor it's very easy for a newbie to not understand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668120">14</a> by Raymond Camden
		posted on 7/9/2007 at 4:43 PM
		</div>
		<div class="comment_text"><p>Hey Dale, later today I'm going to blog on CF/OO. Check the blog and please correct me if I misquote you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668122">15</a> by Sean Corfield
		posted on 7/10/2007 at 12:25 PM
		</div>
		<div class="comment_text"><p>I was probably the person who "shot down" using init() in the pseudo-constructor - I've always said it's a very bad idea. The problem is that the pseudo-constructor is executed whenever the object is created - and that includes when you browse the CFC auto-generated documentation. It will also interfere with the ability to use ColdSpring since it assumes that it will call init() - the constructor - after it has created the object and resolved the dependencies.</p><p>I'm glad to here you don't do it any more Joshua!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668123">16</a> by Sean Corfield
		posted on 7/10/2007 at 12:29 PM
		</div>
		<div class="comment_text"><p>Dale, CF does not "lack a proper constructor". Constructors are just methods. In some languages they have the same name as the class, in other languages they do not. Check out Smalltalk, for example.</p><p>Remember that when CF deals with Java objects, it uses this idiom:</p><p>createObject("java","somepackage.SomeClass").init(args)</p><p>that's exactly the same way you deal with CF objects.</p><p>Remember that New Atlanta added "proper constructors" to BlueDragon at one point and then they removed them again - presumably because their customers didn't actually like the way it worked or it was just not idiomatic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668118">17</a> by Dale Fraser
		posted on 7/10/2007 at 2:52 PM
		</div>
		<div class="comment_text"><p>Sean,</p><p>To me a constructor is called when you create the object without you having to remember to do something.</p><p>I use the init method, it does the job and not having implicit constructors is no great loss but I would have prefered it over Interfaces.</p><p>It is also the number one feature of OO that I would like. I didn't know BD had and removed it, interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668119">18</a> by Joshua Curtiss
		posted on 7/11/2007 at 2:51 AM
		</div>
		<div class="comment_text"><p>@Sean - I must say that the phrase "shot down" is a bit strong as you were very respectable about it, but the strong feeling was definitely conveyed and I was surprised at the time. Learning C++ and VB first as a student and THEN entering the ColdFusion arena as a professional, it IS painful to not have a constructor that is implicitly called. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668124">19</a> by Sean Corfield
		posted on 7/11/2007 at 8:09 AM
		</div>
		<div class="comment_text"><p>@Joshua, yeah, I figured it must be me :)</p><p>My background is also of many other languages, several of them OO, but I don't see much difference - beyond the extra typing - between this:</p><p>createObject("component","path.to.myCFC").init(myarg1,myarg2);</p><p>and this:</p><p>createObject("component","path.to.myCFC",myarg1,myarg2);</p><p>and that's about as good as you're going to get in terms of "automatic" calling, regardless of whether the constructor "name" is init() or myCFC() or whatever. So you'd save six characters when you have arguments and seven when you don't. Not a big deal. Especially when you have to type 28 characters in addition to the class type to create an object anyway.</p><p>If you want to save typing, write your own new() function that takes an arbitrary number of arguments and calls both createObject() and init() automatically for you.</p><p>Oh, the irony: the captcha text for this comment is 'bs'... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668125">20</a> by Dale Fraser
		posted on 7/11/2007 at 8:19 AM
		</div>
		<div class="comment_text"><p>Unless,</p><p>They introduce new with the constructors.</p><p>&lt;cfset myInstance = new com.company.Image('jpg') /&gt;<br>&lt;cfset myInstance.drawLine(10, 10, 50, 50) /&gt;</p><p>But i'm only half serious, using init aint that bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668126">21</a> by Dale Fraser
		posted on 7/11/2007 at 8:21 AM
		</div>
		<div class="comment_text"><p>PS: If they add new and the constructor must be defined as a method called init method then existing code would not break :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668127">22</a> by Raymond Camden
		posted on 7/11/2007 at 3:54 PM
		</div>
		<div class="comment_text"><p>Ya know, you could write a UDF called newCOmponent, that would let you do:</p><p>&lt;cfset foo = newComponent("car").("ford","four wheel")&gt;</p><p>This UDF would make a new car component and call init passing along the args you had sent to it.</p><p>Just an idea. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668128">23</a> by Raymond Camden
		posted on 7/11/2007 at 3:55 PM
		</div>
		<div class="comment_text"><p>Ugh, I'm reading my Comment email top down, saw Dale's email, and not Seans, where he basically mentioned the same type thing. Sorry Sean!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668129">24</a> by Joshua Curtiss
		posted on 7/11/2007 at 6:25 PM
		</div>
		<div class="comment_text"><p>@Sean &amp; @Ray: For me, it's not a "save-me-five-keystrokes" deal, it's more about the fuzzy feeling inside knowing that I can create the object without passing any parameters and know it's ready to do business. i.e.:</p><p>MyFoo=CreateObject("component","foo");</p><p>And to know it's good to go as an empty (but initialized!) object. It feels un-OOP-ish (lol) to have to explicitly tell it to .init() for the creation of a new empty object and be sure that all its innards have been initialized properly, because of my comfort from other langs that have the official constructor that will do this.</p><p>Two more points: (a) This isn't a terrible deal to me. I'm just vocalizing it because the topic came up. (b) I haven't started USING ColdSpring yet, but I can appreciate from my reading about it, that this becomes a non-issue because of how ColdSpring handles the execution of init() for you. That's awesome. Outside of that context, though, the init() method feels like a good convention, but not like good OO.</p><p>Lol, I suppose this is good fodder for the "CF is not true OO" discussion. :-)</p></div>
	</div>
</div>
		