
<div class="comment" id="c_1713655823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655823">1</a> by Sean Coyne
		posted on 8/3/2006 at 11:23 PM
		</div>
		<div class="comment_text"><p>Why not build a UDF or CFC with a function to retrieve it from the application scope so you can call rb('cancel').  This way you get the validation you are missing, but its still easy to read.  Its still breaking the rules since the funciton would need to read the application scope, but at least you would get a nice error message.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655841">2</a> by Raymond Camden
		posted on 8/3/2006 at 11:29 PM
		</div>
		<div class="comment_text"><p>That isn't a bad idea at all. Thank you! Your now part of BlogCFC. ;)</p><p>ALthough - I wonder if you can make a pointer to a method. Then I wouldn't have to make a UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655843">3</a> by Raymond Camden
		posted on 8/3/2006 at 11:32 PM
		</div>
		<div class="comment_text"><p>Shoot. You can, but it makes a new instance it seems. You don't get the internal data anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655850">4</a> by Sam Farmer
		posted on 8/3/2006 at 11:44 PM
		</div>
		<div class="comment_text"><p>I always prefer to scope things even if they are a shortcut so:</p><p>#variables.rb("cancel")#</p><p>Though rb also seems a little short to me.  The next developer might take a lot of time wondering what that means.  So I would probably go with:</p><p>#variables.getResource("cancel")#</p><p>Which, hmmm, isn't a hell of a lot shorter...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655827">5</a> by Raymond Camden
		posted on 8/3/2006 at 11:49 PM
		</div>
		<div class="comment_text"><p>I'm sticking with rb fdor now, but I did do as Sean suggested and wrote a UDF wrapper, so now rb("bad") returns the right UNKNO... key.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655828">6</a> by Sam Curren
		posted on 8/3/2006 at 11:57 PM
		</div>
		<div class="comment_text"><p>How about setting rb to appliction.resourceBundle, and shortening (or aliasing) getResource() to get()?<br>rb.get("cancel") is much smaller, but retains the instance data and functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655825">7</a> by Raymond Camden
		posted on 8/4/2006 at 12:04 AM
		</div>
		<div class="comment_text"><p>I'm happy with what I did, but that is a good alternative as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655826">8</a> by Sam Farmer
		posted on 8/4/2006 at 12:35 AM
		</div>
		<div class="comment_text"><p>Thats cool.</p><p>Still I'd advise against it.  I recently re-read the ColdFusion MX Coding Guidelines - Contents authored by the then Macromedia web team including Sean Corfeld. (and IMO the most useful yet most often ignored document on ColdFusion).  Here's what it says about variable naming, etc:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fwtg%2Fpublic%2Fcoding_standards%2Fstyle.html%3AfjGSdLuBCm4DAGfMRD6pnlgE43s&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/wtg/public/coding_standards/style.html">http://livedocs.macromedia....</a></p><p>General Naming Guidelines</p><p>All entities should be named for readability - names should be readable English words or phrases. The primary function or purpose of any entity should be obvious from its name. In general, "verb-noun" and "adjective-noun" phrases are the most natural choice, e.g.,:</p><p>    course_list_output.cfm - invoked in a URL<br>    calculate_sales_tax.cfm - a custom tag<br>    ProductInformation.cfc - a ColdFusion component<br>    userName, lastName, getBankBalance - a variable, function, attribute, property etc</p><p>The singular noun is preferred. In general, .cfm files will be lower case with words optionally separated by underscores and .cfc files will be MixedCase (also known as CamelCase).</p><p>Abbreviations</p><p>Abbreviations and acronyms should be avoided. Only a few, widely understood acronyms or abbreviations may be used, such as ID, CGI and URL. Such abbreviations and acronyms will be uppercase, unless they are part of a filename that forms part of a URL, in which case they will be lowercase, e.g.,</p><p>    userID - variable, attribute, property etc<br>    set_user_id.cfm - invoked in a URL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655830">9</a> by Sean Coyne
		posted on 8/4/2006 at 12:37 AM
		</div>
		<div class="comment_text"><p>Sam you do realize this article is entitled "Breaking Rules" right? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655831">10</a> by Raymond Camden
		posted on 8/4/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>Sam, I don't think you get it. I agree that "Good var names" is a VERY important rule. My point was that sometimes we have to break the rules. Now - you may disagree with my example of course, but I do think most folks would agree that no rule is applied 100% of the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655829">11</a> by Nathan Dintenfass
		posted on 8/4/2006 at 12:41 AM
		</div>
		<div class="comment_text"><p>This also seems to assume you won't, for instance, use rb[] in a custom tag, since you aren't using the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655834">12</a> by Raymond Camden
		posted on 8/4/2006 at 12:45 AM
		</div>
		<div class="comment_text"><p>Since I'm breaking the rules anyway, I'd probably just do</p><p>rb = caller.rb</p><p>As long as I'm consistent, I think it is ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655833">13</a> by Nathan Dintenfass
		posted on 8/4/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>Yeah, but that assumes no nested calls of custom tags and/or that you KNOW how deep you are when calling it.  Seems a bad assumption to me.... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655832">14</a> by Raymond Camden
		posted on 8/4/2006 at 12:50 AM
		</div>
		<div class="comment_text"><p>Point taken. I still feel this is a good decision. Mainly because I had -so- many of those RB calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655836">15</a> by Ryan Guill
		posted on 8/4/2006 at 1:25 AM
		</div>
		<div class="comment_text"><p>I do something like this in my functions a lot.  Ill pass something in as an argument with a long name, and then ill make a local var variable with a much shorter name to use.</p><p>My only problem with your code is that you are creating an object in the application scope, which is good, but then you are copying that into the variables scope on every request.  So you are probably saving the instantiation time of making the object, but you are adding a lot of overhead to every page call, unless im reading it wrong.</p><p>May not mean much on a lot of apps, but could make a difference in some.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655837">16</a> by Raymond Camden
		posted on 8/4/2006 at 1:29 AM
		</div>
		<div class="comment_text"><p>Ryan, in the app scope I both create the CFC and load it with data. I'm not copying the app scope CFC, but the UDF. (To be fair, I am copying a UDF from a CFC called Utils.) That UDF calls the app scope CFC.</p><p>So, on every request I'm making a pointer to a CFC method. Should be very minimal on overheard.</p><p>Why didn't I just make a pointer to the resourcebundle itself? When I did, I "lose" the internal data, which is probably a good thing I guess. Hence the udf "in the middle".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655842">17</a> by Scott Stroz
		posted on 8/4/2006 at 4:55 AM
		</div>
		<div class="comment_text"><p>Rules or no rules, anything that is easy to read, easy to understand and makes it so my fat fingers do less work, is OK in my book.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655840">18</a> by Tom Chiverton
		posted on 8/4/2006 at 3:01 PM
		</div>
		<div class="comment_text"><p>I see no problem with throwing an error for incomplete translations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655838">19</a> by Oliver Merk
		posted on 8/4/2006 at 3:28 PM
		</div>
		<div class="comment_text"><p>Ya know, Ray, I used to have a rule about breaking rules, but I don't follow it any more ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655839">20</a> by Justice
		posted on 8/4/2006 at 3:49 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The coldfusion muse blogged about using cfimport to make CF process html tags here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmkruger.cfwebtools.com%2Findex.cfm%2F2006%2F5%2F10%2Fadaptive.tags%3ADfvFoKQKXsMWMNnPiVkJ0r5NeME&amp;cuid=3321886" rel="nofollow noopener" title="http://mkruger.cfwebtools.com/index.cfm/2006/5/10/adaptive.tags">http://mkruger.cfwebtools.c...</a></p><p>My thought is this:  Do nothing with your input tag, and have all values be a base of english.  Then just write a input.cfm to re-write, and check the 'value' attribute for a pre-set list of translatable words.  If it matches, see if you need to substitute a different language.</p><p>Then you would have no code changes at all, and all your localization would be in 1 completely optional file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655844">21</a> by Raymond Camden
		posted on 8/4/2006 at 3:55 PM
		</div>
		<div class="comment_text"><p>Sorry, I just don't like the cfimport/process everything approach. I find it problematic as you don't know what tags are going to be processed. It is "neat", but not something I would recommend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655846">22</a> by Tony Petruzzi
		posted on 8/4/2006 at 5:29 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Don't know if it has been mention (there are so many comments here), but why not just do:</p><p>&lt;cfset request.rb = application.resourceBundle.getResource&gt;</p><p>Then you could just call:</p><p>#request.rb('cancel')#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655845">23</a> by Raymond Camden
		posted on 8/4/2006 at 5:37 PM
		</div>
		<div class="comment_text"><p>See my notes above. When you do this, it appears as if you lose Variable scoped data. The RB cfc uses a variable to store the info, so this means it is unworkable. Hence the use of the UDF proxy.</p><p>I really wanted this blog post to focus on rules and when you may break them, not my specific example. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655848">24</a> by Tom Chiverton
		posted on 8/4/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>Hay, rules are made to be broken, right ?<br>It's a bit like over the fence in the Flex world - best practice is to separate view from the controller (view and view helper), but if it's only 2 or 3 quick functions, it's clearer to just keep the helper functions in the view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655852">25</a> by Sean Corfield
		posted on 8/5/2006 at 10:52 AM
		</div>
		<div class="comment_text"><p>As primary author of the coding guidelines document, I would like to say that, yes, you can always break the rules IF YOU KNOW WHAT YOU ARE DOING AND CAN JUSTIFY IT TO A REVIEW GROUP OF YOUR PEERS. Sorry for shouting but that's a VERY important rule about rules.</p><p>And I could probably be persuaded that 'rb' is a reasonable abbreviation of resource bundle in a program that uses 'rb' consistently everywhere.</p><p>On losing variables scope if you pull a method out of a CFC, yes, you need to remember that ColdFusion is a DYNAMIC language and does it's variable binding at RUNTIME. Functions are functions are functions. If you call them in the context of a CFC instance then "variables" binds to the (protected) scope of the CFC instance. If you call them in the context of a CFM page then "variables" binds to the page scope (i.e., variables scope). That means you can take a UDF that contains <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.foo%3A2t_dD2fr_pvM_uOYAgwpAVwdViI&amp;cuid=3321886" rel="nofollow noopener" title="variables.foo">variables.foo</a> and store (a reference to) it in an existing CFC instance and then call it as a method and it will lookup "foo" in the CFC's (protected) scope even tho' if you called it "loose" (i.e., as a simple UDF in the page), it will lookup "foo" in the CFM's page scope. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655854">26</a> by Raymond Camden
		posted on 8/5/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>I think Sean makes a very good point here. I didn't think of it since BlogCFC is a -very- small core team, but on any "real" project with multiple people, a change like I had made should broadcasted to the team first.</p><p>Something else I like to do - but don't do all the time, is to create a simple project technical document. It contains all the types of things that a new developer would want to know when coming onto a project.</p></div>
	</div>
</div>
		