
<div class="comment" id="c_1713685081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685081">1</a> by shakti
		posted on 8/15/2008 at 7:13 AM
		</div>
		<div class="comment_text"><p>CFCs have the awesome power of inheritance, which makes an OOP approach possible in coldfusion. some people define CFCs as a class and the functions inside as objects of that class, not sure if pure OOP is possible but does make life a lot easier now with CFCs....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685129">2</a> by John Barrett
		posted on 8/15/2008 at 11:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Cincinnati, well never been there:)</p><p>Thanks so much for clearing some of my confusion up!<br>I actually did not know that a cfc was a collection of udfs.</p><p>I see (at least a little) how you would use this now. That is, using a udf would be used for things that don’t relate to other things.</p><p>My thinking was to create a convert time function that would be used to change the time of the server time to my localtime. I did write a cfc for this. I was thinking that there should be a way to to create a function that would use my localtime as default.</p><p>I see on volume 2 of the CF WACK book(part V,chapter 24) covers this. I am still reading Volume I, and have not purchased this later volume, but I think that when I get to that one, this will become very clear.</p><p>Thanks so much for taking the time to write a blog post on this, and explaining this to me:)<br>I have to try and get some money to get to Max, I checked out some of the talks, sounds great.</p><p>Thanks Ray!<br>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685127">3</a> by Raymond Camden
		posted on 8/15/2008 at 3:12 PM
		</div>
		<div class="comment_text"><p>@shakti: Very good comment there. I was being overly simplistic in my response I think. OO things like inheritance, interface, or just design patterns in general, can make CFCs even more powerful. Certainly more than just a collection of methods, your CFCs really become a model for your application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685120">4</a> by Andy Sandefer
		posted on 8/15/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>John,<br>In my humble opinion cfcs are the greatest thing since sliced bread and bottled beer.  They definitely get you in the mindset of ultimate code re-use.  One thing that I'll caution you on is to avoid an early trap that I fell into which was making mega cfcs.  You're not charged by the file here so make lots of little cfcs whose functions belong together and try to avoid making one cfc to control the world.  Here's an example of how I might separate logic in an app...<br>cfc name / purpose<br>appcommon.cfc / commonly used stuff like security validators and handlers, etc.<br>filemgmt.cfc / functions that I might use to generate ajax file tree data, data to get ajax grids related to cfdirectory queries, handling multiple file uploads, file renames, cfsearch and index stuff, etc.<br>customer.cfc / insert, update, delete statements for handling customer table records and maybe even functions with statements to handle subsidiary data related to customers, etc.<br>item.cfc / insert, update, delete statements for handling item table records and along with functions having statements to handle subsidiary data related to items, etc.<br>inventory.cfc / advanced logic to handle gathering records for item journal batches, posting to an item ledger, gathering qty. on hand, basically this cfc would have methods for things related to inventory</p><p>Now obviously this is a very simple example and for a big app I truly might end up with dozens of cfcs but I'll tell you that some of the first big apps that I wrote that were heavily powered by cfcs back on CF7 had a pretty serious flaw - they had 2 or 3 cfcs powering the entire app and some of these cfcs had well over 40 or 50 methods.  It is not smart to build code like that because it becomes hard to maintain and hard to find things and when you start growing your operation and hiring more developers your cfcs can cause them to make mistakes or flat out lose their bearings because you've made them too all encompassing.</p><p>I'll stop rambling but trust me - lots of little cfcs with some thought up front in regards to cfc and method naming/system nomenclature that makes sense to you and your organization.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685121">5</a> by JC
		posted on 8/16/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>There are also some performance issues to consider when comparing CFC, UDF, and (though not mentioned here) custom tags.</p><p>"It takes relatively more processing time to instantiate a CFC than to process a custom tag. In turn, it takes substantially more time to process a custom tag than to execute a user-defined function (UDF). However, after a CFC is instantiated, calling a CFC method has about the same processing overhead as an equivalent UDF. As a result, you should not use CFCs in place of independent, single-purpose custom tags or UDFs. Instead, you should use CFCs to create bodies of related methods, particularly methods that share properties." (from "When to use CFCs" in the CF Docs)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685128">6</a> by John Barrett
		posted on 8/16/2008 at 11:24 AM
		</div>
		<div class="comment_text"><p>Hi Andy,</p><p>Thanks so much for your advice.</p><p>I am starting to think that cfc are the coolest thing ever! I am just starting out, and so I have not figured out how to do too many things with them.</p><p>I am looking for re-usable code with cfc as well. I did not know(or even think about)the time to process a cfc, and I would most likly not(as a am a newbie) write really big cfcs, but I can see that people would want all the funtionally in a few files over many files. I am glad to hear about this "best practice" in the begining then learning the hard way later.</p><p>The more I play with cfcs the more I am learning about them,and I am liking them a lot! I am trying to write an application at school that will use a cfcs apprach.</p><p>Thanks again, as well as everbody else here, espeically Ray for all your advice.</p><p>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685119">7</a> by Jason Fisher
		posted on 8/17/2008 at 3:04 AM
		</div>
		<div class="comment_text"><p>@John,</p><p>Just to build a bit on what JC is outlining in his post, performance-wise.  The reason a UDF is faster than a CFC is because it can be inline in a CFM: a CFFUNCTION tag at the top of the file (or in a common include, etc) is a true UDF, while a CFC is generally a collection of CFFUNCTION tags all wrapped up in the CFC's own CFCOMPONENT wrapper.</p><p>Hope that helps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685082">8</a> by John Mason
		posted on 8/17/2008 at 5:25 PM
		</div>
		<div class="comment_text"><p>I just wanted to add that UDFs could run into naming  collisions with existing CF functions or new ones as the language develops, and this is the only encapsulation method that has this problem. CFX tags, custom tags and CFCs don't have this issue. One of the reasons some simply take their UDFs and wrap them up with CFCs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685083">9</a> by Elliott Sprehn
		posted on 8/17/2008 at 8:45 PM
		</div>
		<div class="comment_text"><p>@Jason Fisher</p><p>While inlining is in theory possible the compiler certainly doesn't do it. Since CF supports function pointers and metadata for UDFs inlining is incredibly difficult. It gets worse when you realize you can cfinclude another templates and thus would need to have the compiled function, not the inlined version available anyway. And even worse than that is that you can shadow a function with a variable assignment.</p><p>CF just doesn't do enough static analysis to be able to do this, and honestly I doubt you'd see very much gain. UDFs are fast, Wicked fast, and putting in the incredible time burning effort to add this kind of tiny performance improvement would likely not solve anyone's bottleneck.</p><p>(Currently UDFs are compiled to static inner classes on the pages. So calling them is little more than this.MYFUNC.runFunction(...), so you don't gain too much with an inlining)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685084">10</a> by Jason Fisher
		posted on 8/18/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>@Elliot,</p><p>Thanks for the clarification on how the Java code is compiled.  I certainly do NOT recommend inlining UDFs, but was simply trying to explain how could a UDF be faster than a custom tag? which had been stated above :)</p><p>-jfish</p></div>
	</div>
</div>
		