
<div class="comment" id="c_1713734899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734899">1</a> by Dave Ferguson
		posted on 8/31/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>I think that the term "Professional" is completely arbitrary and mostly over used.  For example, the professional strength cleaner I bought worked worse than Formula 409.</p><p>Like Ray stated, there is MXUnit for unit testing.  There are tools from Integral to help with debugging.  There is even a debugger built into ColdFusion Builder.  If you are using ColdBox it has a suite of tools for testing.</p><p>There are a million ways you can write ColdFusion.  In contrast to other languages where they are highly structured and don't allow the free-form development you find in ColdFusion.  This probably makes it harder to create a one size fits all unit testing suite.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734896">2</a> by Dan G. Switzer, II
		posted on 8/31/2011 at 6:31 PM
		</div>
		<div class="comment_text"><p>Not to throw fuel on the fire, but there's absolutely nothing wrong with utilizing Java for your business logic and using ColdFusion for the presentation wrapper.</p><p>Java has plenty of sophisticated tools that can analyze code and give you this kind of reporting. Dropping to Java certainly gives you some advantages, but you're going to loose a lot of the RAD nature of CFML.</p><p>CFML is a fantastic language that excels at HTML presentation, but if you're looking for more sophisticated tools to manage your backend logic, one of the great things about CF is you can utilize other languages within CF--languages that have the types of tools you're looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734900">3</a> by Andrew Scott
		posted on 8/31/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>This is a very interesting subject and one that is something that I have been complaining about for many years as well, yes we have CFB now but I would far from call it professional at the moment.</p><p>Other things like being able to to Open up a Hibernate Studio like tool, where I can see the tables and create the links and then see the generated HQL, is something that is very lacking. I mean I could use what Java already has, but the hibernate cfg is not even exposed for ColdFusion so that gos out the window very quickly.</p><p>Integration into Mylyn I believe is coming, but it is still behind the rest of the world.</p><p>Unit testing, yes we have mxunit. But we have nothing when it comes to Behavioural development or BDD, which is far better than TDD.</p><p>I could go on about many and I mean many other areas, but the question is very relevant that there isn't a great deal of things that we can use to integrate.</p><p>Not sure this is something that Adobe can fully address, but there is an extreme lack of professional tools, and I will include the IDE in that because CFB is no way what I would even consider professional.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734907">4</a> by Robby Bankston
		posted on 8/31/2011 at 6:43 PM
		</div>
		<div class="comment_text"><p>Please do not take this the wrong way.   I was not trying to disparage MXUnit or any other project.  I was merely lamenting the number of tool choices.  If you are a Java, ASP, or C++ developer, you have more tool choices than you care to shake a stick at.  Someone did mention server monitoring and I have found that FusionReactor is quite nice from my experience but I was in reference to developer tools, not server tools.  Thank you everyone for your input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734905">5</a> by Barney Boisvert
		posted on 8/31/2011 at 6:44 PM
		</div>
		<div class="comment_text"><p>I would happily plunk down the cost of a CF enterprise license for an IDE which was based on either the Eclipse or IDEA platform (and didn't hose the core tenets of the platform like CF &amp; Flash Builder do), and had the following features:</p><p> * complete support for CF8, 9, and Railo dialects of CFML, including both autocompletion, highlighting, and structural views (outlines, etc.),<br> * an internal runtime engine which would allow dummy execution of code to facilitate emulation of "static" typing checks, but which CFML only does at runtime, and<br> * use of that same internal runtime for executing unit tests (I like MXUnit, but anything JUnit-y is fine with me) without needing an external app server.</p><p>Point two, in particular, is the only way to get reasonable dynamic component insight and refactoring support.  The stuff in CFBuilder today is a good start, but without some dynamic evaluation it's never going to "get there".  But even if it does, it still doesn't meet the "embrace the Eclipse platform" criteria.</p><p>Honestly, every time I work on a Java or Groovy project and come back to CFML I'm really disappointed but the dev experience.  If not for the hundreds of thousands of lines of CFML which I already have to support, the lack of tooling would definitely be enough to make me ditch CFML.</p><p>Of course, the tooling problem is a huge one for every platform, not just CFML.  If you've ever looked at PHP tooling, it's better, but still hardly ideal.  Java, C/C++ and .NET, because they're the 8,000# gorillas, have good tooling.  And older languages usually do because of how long they've been around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734901">6</a> by Lance Staples
		posted on 8/31/2011 at 7:05 PM
		</div>
		<div class="comment_text"><p>The code coverage tool you mentioned is called chimera.  It is currently in alpha.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfcommons.org%2Findex.cfm%2Fmodule%2Fchimera%3AYsyVdxBZHCOGwOcr5MuAQAz58b4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfcommons.org/index.cfm/module/chimera">http://cfcommons.org/index....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734902">7</a> by Robby Bankston
		posted on 8/31/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>I had actually seen that page for Chimera before but at that time could not find any download link in order to test.  Perhaps that is what the author wanted since it was in alpha stage but I followed it for a long time with no status updates/updated ETA so I got disappointed as I was looking forward to trying it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734904">8</a> by James, F.E.
		posted on 8/31/2011 at 7:50 PM
		</div>
		<div class="comment_text"><p>Maybe something like Charlie Arehart's CF411 list of tools is what you are looking for? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cf411.com%2F%3Abzy11WLR-8KZ0C1KCNc2RRqyoPY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cf411.com/">http://www.cf411.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734915">9</a> by Rob Brooks-Bilson
		posted on 8/31/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>Robby,  you might also want to take a look at Nathan Struts's CFML Complexity Metric tool. It will give you the McCabe Index for CFML that you're looking for.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfmlcyclomaticcomplexity.riaforge.org%2F%3A8KFKI6mKbNqx7MgvcAQgPFHaldA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmlcyclomaticcomplexity.riaforge.org/">http://cfmlcyclomaticcomple...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734909">10</a> by Nathanael Waite
		posted on 8/31/2011 at 9:29 PM
		</div>
		<div class="comment_text"><p>Ray you should fix <a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fcf411%2F%23cfpowered%3ATCoZ5JQ9Co7_zbJHUwJqISNNSH8&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/cf411/#cfpowered">http://carehart.org/cf411/#...</a></p><p>"Ray Camden's CF resources page" - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fcoldfusionresources.cfm%3AcY9svvzuXNURU6XQx0kIB6rG6PU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/coldfusionresources.cfm">http://www.coldfusionjedi.c...</a>  Comes up with page not found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734906">11</a> by Raymond Camden
		posted on 8/31/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>I don't own Charlie's site. ;) But I'll ping him. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734903">12</a> by Bob
		posted on 8/31/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>Maybe a tangent here but one thing Adobe does not do well and needs desperately to address with Coldfusion is that “many in the industry consider it aging or dead” or not “fashionable”</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734910">13</a> by Raymond Camden
		posted on 8/31/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>@Bob: ColdFusion is old. So is PHP and Ruby. You can't change that. As for 'cool', Adobe can't say it's cool. You need developers to do that. Personally I've been trying to do that by using it _outside_ of our community. For example, almost all of my jQuery blog entries use CF for the back end. I don't use it to push CF but more as a "oh btw, look how well CF works along with..." type thing. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734912">14</a> by Raymond Camden
		posted on 8/31/2011 at 9:53 PM
		</div>
		<div class="comment_text"><p>@Dan: I think you make a fair point. It's not abandoning CF to use it with Java.</p><p>@Andrew: Unless I'm misunderstanding you, the Hibernate config _is_ exposed. You can also generate the hbxml files if you want. I _would_ like to see tools in CFB to make it easy to do ad hoc HQL queries.</p><p>@Barney: Doesn't CFB already support multiple dialects? And you can't honestly expect it to ship with a Railo library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734913">15</a> by steve ryan
		posted on 8/31/2011 at 10:06 PM
		</div>
		<div class="comment_text"><p>Man, I hate hearing about the death of CF.  I just started to get the hang of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734917">16</a> by Barney
		posted on 8/31/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I don't know if CFB supports multiple dialects.  It doesn't let you use the Eclipse platform though, so it's irrelevant to me.  Adobe's implementations of CFBuilder and Flex/FlashBuilder don't allow you to network install the plugins, you have to install them onto your local machine, rather than just the license.  Which pretty much defeats the whole purpose.  And it doesn't run on Linux, but that's a lesser gripe.  If I could at least centralize, I'd consider running a VM for CFB.  But since it doesn't, I'll run CFE (which does centralize) native.</p><p>As for the internal runtime, I don't much care what it is.  Ideally it'd follow the project's dialect, but whatever. Though I'm not sure why Adobe wouldn't bundle Railo and OBD, since both of their licenses allow it.  The problem would be if a third-party tool vendor wanted to support ACF natively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734914">17</a> by Raymond Camden
		posted on 8/31/2011 at 10:35 PM
		</div>
		<div class="comment_text"><p>@Barney: CFB supports 7-9.</p><p>I'm confused why you say it doesn't let you use the "Eclipse platform." That is a very broad statement. I can use other plugins with CFB no problem. You mention "network install" - is that some feature where - remotely - you can push a plugin? If so - I've never heard of anyone doing that. I can see how that would be useful in an Enterprise- but it seems like an edge case to me. I also think it's unfair to say it totally defaults the purpose. You make it sound like it's not even Eclipse, which doesn't seem right to me. But I'm assuming I'm misreading you. Can you clarify that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734916">18</a> by Dave DuPlantis
		posted on 8/31/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>Of course CF is aging. Like Ray says, it's old. So is Java. So is any other language that people like and continue to use. All languages are either aging or extinct. I prefer aging. :) (You can argue that new languages are not yet aging ... I'd ask what constitutes "new", and then I'll take that list and ask you about them in a year.)</p><p>As far as "dead" goes, and I'm not picking on Robby on this one, but rather on the general idea ... "people in the industry" who think an active language is "dead", no matter which language it is, are not people whose opinions you need to worry about. They're lost. The people you want to approach are the ones with questions about it, and maybe some of those would be lured by a better tool set.</p><p>IIRC, Nathan Strut's tool is an approximation of McCabe's CC ... but it could use some help, and maybe the best way to give it help is to download it, use it, and give him feedback about it (or even to tweak it yourself). Maybe it's not the polished tool that you could get for another language, but it's a start, and how many of those polished tools were once side projects that an enterprising developer did in his or her spare time?</p><p>I like what's happened so far with CF Builder, and I'd love to see Adobe pick up some code coverage and complexity tools based on CFCs and run with them, even if they have to start with tag-only and script-only options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734918">19</a> by Judah McAuley
		posted on 8/31/2011 at 10:55 PM
		</div>
		<div class="comment_text"><p>I've said it before to Adobe and I'll say it again here: What I really want from a professional cfml development tool is refactoring and code introspection support.</p><p>Right now I do a lot of .Net development and in Visual Studio 2008 and 2010 (especially with the Resharper add on), I can use dependency injection to add a class to my service and after that, the IDE just knows about it. It knows what all the methods are called, what the arguments are for those methods, what types they return. I can right click on a method and go right to the definition of that method without having to remember which file it is in. I can easily find every place in my project that references that method. When I change the signature on a method by adding an argument, syntax highlighting will be changed project-wide showing that I now have invalid calls (if the argument is required).</p><p>I love working in cfml, a lot more than I like writing C#. But I have to say, Visual Studio is light years ahead of anything available for CF. CF has made some excellent strides in the area of frameworks and I'd happily put ColdBox or FW/1 up against .Net MVC, but the dev tools just aren't up to par.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734921">20</a> by Jaime Metcher
		posted on 9/1/2011 at 2:45 AM
		</div>
		<div class="comment_text"><p>+1 to Dan.</p><p>Also I'll add that the tooling challenge is complicated by the complex positioning of ColdFusion.</p><p>Is it a front-end technology?  In which case you have to compare the tooling to Flash Builder and Visual Studio's screen painter, both of which are streets ahead at this point.</p><p>Is it a back-end technology? Java is waaay ahead for pure back-end coding, both for tooling and sheer speed of development.</p><p>Is it a full stack?  That's a huge tooling challenge.  It's worth pointing out that the full-stack tooling for Java is still pretty ordinary after all these years (acknowledging the huge strides in the last little while), and CF is actually ahead here.</p><p>Or is it a bit of everything (which I think is closest to the mark)?  In which case it's just not reasonable to expect best-in-class tooling in any single scenario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734922">21</a> by Andrew Scott
		posted on 9/1/2011 at 5:34 AM
		</div>
		<div class="comment_text"><p>@Ray, there is a huge difference between the Hibernate Configuration file and generated mapping files. One is used for mapping to the database, the other is the details or configuration of the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734923">22</a> by Raymond Camden
		posted on 9/1/2011 at 6:06 AM
		</div>
		<div class="comment_text"><p>I didn't say they were the same. I said that I believe you  have access to both. I just checked - you can specify an ormconfig file in app.cfc, and you can also use a setting there to generate the mapping files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734925">23</a> by Andrew Scott
		posted on 9/1/2011 at 7:20 AM
		</div>
		<div class="comment_text"><p>@Ray, sorry my bad for not reading you correctly. Very nice that you can specify the ormconfig, that could be very useful and might allow us to use the likes of Hibernate Studio or similar tools.</p><p>But it would also be nice if ColdFusion allowed for this file to be exposed as well, not too many are going to be able to be confident enough to create this file on their own.</p><p>Also you might want to ping the Adobe people for the docs on this section, the link for ormconfig to the Hibernate area is broken. Looks like the Hibernate site has been redone and many links seem to be now broken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734926">24</a> by Kamil
		posted on 9/2/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>In reading through the string, I wonder why the "death of CF" comes up so  frequently! I have never, to the best of my knowledge, heard that about any other language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734928">25</a> by Gary F
		posted on 9/4/2011 at 2:45 AM
		</div>
		<div class="comment_text"><p>Two things:<br>1) If some people are still using a language then it can't be dead.<br>2) Those who have never used any of these "professional" tools aren't missing them. ;-)</p><p>...but it would be very nice to have more "coolness" in IDEs and the development process. Whatever that may be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734929">26</a> by Andy Sandefer
		posted on 9/8/2011 at 1:47 AM
		</div>
		<div class="comment_text"><p>For starters, I was strictly a CF'er for about 5 or 6 years. In March I was forced into C# and I have to admit that after some early struggles I now very much like it.  <br>My strategy for web application development makes nearly zero use of Microsoft's server controls and is almost entirely based on jQuery + web services + C# for DAO/Business Logic.  After using both technology stacks I feel like I have a pretty objective perspective on this whole dead language business.<br>First off, CF is not dead, it is a niche language that serves several medium to large scale enterprises.  Secondly, CF does more out of the box with no third party add-ins than any other environment on the market.<br>It fell down when compared to ASP.NET prior to version 9 in terms of OOP constructs.  It also lacked a solid, universally accepted development environment until CF builder came along.<br>It does things in 1 or 2 lines of code that take .netters writing piles of code to do - which says that the CF team truly cares about developer productivity.<br>It is unfortunate that they've caught up with (and in many cases surpassed) other popular rivals - the problem is that they did it 6 years too late.<br>It will endure as long as it is profitable for Adobe.  CF 8 was extremely profitable and I would imagine that they're in the black for CF9 already so I doubt that the product is going anywhere.  It is a niche product with talented cf zealots who put about every other blogging community to shame, but it's days of dominating the web landscape are over.<br>As far as advanced tools go I am sorry to say that Microsoft and pure Java offerings completely outclass CF Builder (no comparison).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734927">27</a> by kacperus
		posted on 4/22/2013 at 1:28 AM
		</div>
		<div class="comment_text"><p>I know the topic is quite old now but I was looking for some Cold Fusion code coverage statistics tool for some time and eventually I end up creating one on my own.</p><p>If anyone is interested then I invite you to visit my project page on Google Code: <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fcf-metrics%3APo5AjH4Cd3K6h9vGJ3yIezP2D7A&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/cf-metrics">http://code.google.com/p/cf...</a>. Give it a try and tell me what you think. The tool is called cf-metrics and offers code coverage for Adobe Cold Fusion servers.</p><p>Constructive feedback (and/or contribution) is more than welcome!</p></div>
	</div>
</div>
		