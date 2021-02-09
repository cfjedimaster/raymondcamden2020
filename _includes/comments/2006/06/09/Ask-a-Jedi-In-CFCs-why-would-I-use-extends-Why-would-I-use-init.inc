
<div class="comment" id="c_1713653953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653953">1</a> by Dan G. Switzer, II
		posted on 6/9/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>Also important to keep in mind, for the variable "myCFC" to actually contain a reference to the CFC create, it the init() method needs to return a reference to the object:</p><p>&lt;cfreturn this /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653945">2</a> by Peter Bell
		posted on 6/10/2006 at 2:01 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Great post as always! A couple of comments. One is that while you shouldn't extend general utilities, often there are utility services that use inheritance.</p><p>For instance, it makes perfect sense for a UserDAO to extend a BaseDAO. The base DAO is a collection of utilities, but they are specific to the purposes of a data access object. Same with a UserService extending BaseService - it is a great way to cut down on the amount of repetitive code you have as what is the difference between (say) deleting a user and deleting a page? Typically you can just parameterize the table name and ID field name and use the base class so you don't have to clutter up all of your entity classes with almost identical delete methods.</p><p>Also, one other thing that must be mentioned whenever inheritance comes up is the phrase: "favor composition over inheritance". It's a little much to cover in a comment, so it might be a good topic for a future Ask a Jedi once you get settled after your trip!</p><p>(For anyone who's wondering, just Google it - there's plenty of great info on the topic).</p><p>Best Wishes,<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653959">3</a> by Raymond Camden
		posted on 6/10/2006 at 2:06 AM
		</div>
		<div class="comment_text"><p>I'm going to be picky and say that FooDAO that extends BaseDAO is not a "utility" example, since FooDAO would pass a "Is A" BaseDAO test. That is different then say a Utility CFC that may have a Throw() method in it to allow CFCs to do stuff like,</p><p>&lt;cfset throw("....")&gt;</p><p>or may have a copy of ParagraphFormat2 from CFLib in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653956">4</a> by Peter Bell
		posted on 6/10/2006 at 2:33 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>But there is no reason why classes containing utilities could not be extended. Would it be so unreasonable to call those "utility classes"?!</p><p>Lets say you have a BaseUtilities class in a shared directory which is inherited by BillsAutosUtilities allowing you to share utilities across projects. Or imagine a MedicalParser and an EngineeringParser class both extending a BaseParser which includes the ParagraphFormat2() method.</p><p>If I was being picky (*grin*) I'd argue that the set of utility classes and the set of classes passing an "is a" test may intersect (unless you DEFINE a utility class as one where the IS A relationship does not apply which I'd consider a slightly non standard definition).</p><p>However, getting away from the semantics, I agree 100% that "IS A" is a great test to use. It is not so much utility versus other classes as whether the set of methods (which presumable provide utility to the calling methods!) are grouped around a single object style concept which could be extended by another object of that same type or whether they are more like a general function library.</p><p>In fact, now that I think about it, I'm having a hard time coming up with a good OO example of a "simple collection of helper functions". Obviously you can put any group of functions into a cfc and call them methods, but the whole point in OOP is to try to group the methods along with associated data into coherent objects that could be subclassed.</p><p>The more I think about it, the more the "utility" or "helper" bit seems like a Red Herring. I'd just use the "IS A" test</p><p>Of course, even that is only a starting point - often you have an object with multiple IS A relationships and often it is better to use composition to solve those problems - it's like the old teacher/student problem. If you define teacher and student as children of person you're fine right up until the point that a student starts to teach a couple of classes in their spare time and then suddenly you are unable to either pay or grade them!</p><p>Best Wishes,<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653951">5</a> by Adrian J. Moreno
		posted on 6/10/2006 at 2:55 AM
		</div>
		<div class="comment_text"><p>At last month's DFW CFUG meeting, Dave Shuck gave a presentation on "Subclassing DAOs for Flexible Apps", which covers how objects inherit properties from each other. Sample code posted with the presentation here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.daveshuck.com%2Findex.cfm%3FcommentID%3D114%3AFw9oQHR-GxH4Sp0ZH9jGJx3GMss&amp;cuid=3321886" rel="nofollow noopener" title="http://www.daveshuck.com/index.cfm?commentID=114">http://www.daveshuck.com/in...</a></p><p>I thought it was very well done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653954">6</a> by Phillip Senn
		posted on 6/16/2006 at 12:49 AM
		</div>
		<div class="comment_text"><p>I have a problem with having to initialize myDataSourceName everytime I want to reference a table.<br>This is how I do it now:<br>foo.cfm contains:<br>&lt;cfset FooObj = CreateObject("Component","Components.Foo").Init("myDataSourceName")&gt;<br>&lt;cfset FooQry = FooObj.View1()&gt;<br>&lt;cfdump var="#FooQry#"&gt;</p><p>foo.cfc contains:<br>&lt;cfcomponent displayname="foo" output="False"&gt;<br>&lt;cffunction name="Init" output="true" returntype="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.foo%3AacJWK_FPGJS96nkItZS10YpxLkc&amp;cuid=3321886" rel="nofollow noopener" title="components.foo">components.foo</a>"&gt;<br>&lt;cfargument name="DSN" required="yes"&gt;<br>&lt;cfset Variables.DSN = arguments.DSN&gt;<br>&lt;cfreturn this&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="View1" output="False" returntype="query" hint="I return everything from foo"&gt;<br>&lt;cfset var rst = ""&gt;<br>&lt;cfquery datasource="#Variables.DSN#" name="rst"&gt;<br>SELECT * FROM foo<br>&lt;/cfquery&gt;<br>&lt;cfreturn rst&gt;<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>So here's my question:<br>Can you use extends to say that foo.cfc "is a" database table object, and should therefore <br>inherit the datasource name to use?</p><p>Simon Horwith wrote an article called "component.cfc: The Mother of All Components" <br>in the November 2003 issue of ColdFusion Developer's Journal (<a href="http://disq.us/url?url=http%3A%2F%2Fcfdj.sys-con.com%2Fread%2F42098.htm%29%3Am5lxtfvLIaBYcVuy-zBiF2UAE2g&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdj.sys-con.com/read/42098.htm)">http://cfdj.sys-con.com/rea...</a>.<br>I wonder if you could put your datasource name in component.cfc and therefore not have to initialize it every time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653960">7</a> by Raymond Camden
		posted on 6/16/2006 at 1:50 AM
		</div>
		<div class="comment_text"><p>What I normally do is have a CFC called settings.cfc. It will either have some hard coded CFSETs, or read from an XML file. This will have my settings. The CFC will have something like getSettings() which returns a simple struct, and I'll pass that to my CFCs. So they get passed all the setting info for the app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653958">8</a> by Peter Bell
		posted on 6/16/2006 at 1:56 AM
		</div>
		<div class="comment_text"><p>Hi Phillip,</p><p>A few comments:<br>Firstly, there is no "answer", just approaches that fit different situations better.</p><p>Right off, I'd recommend initializing your singletons like services, gateways and daos in application scope to improve performance.</p><p>Secondly, I'd encapsaulate that with a lazy loading factory so if you want to shift between request and application scope (test mode or production mode), you only have to change the "scope" variable in one place and always just call uyour factory to get the DAO with all of the scoping abstracted - also allows for abstract factory to easily switch between DAOs if required.</p><p>Thirdly, you could encapsulate the parameterizations for initialization within the factory, so you'd only have to have the DSN in one place anyway.</p><p>Finally, I keep promising to play with it, but I believe if you use ColdSpring you'll get all of the above benefits plus a few more, you won't have to code your factory, the parameters will be in XML, not code, and mortals shall swoon when they see your beautiful code :-&gt;</p><p>That said, yes, you could also have a base DAO that the entity DAO's extend. I'm playing with that now, with a bunch of the db calls parameterized and sitting within the base DAO (really, in a simple system, how different is delete from users and delete from articles?!). However, I would think twice about doing that JUST to pass in the DSN. You are creating a dependency between your base DAO and entity DAOs AND you are stopping the DAO being able to inherit from anything else (unless your base DAO also inherits from it).</p><p>Best Wishes,<br>Peter</p></div>
	</div>
</div>
		