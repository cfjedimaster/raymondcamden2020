
<div class="comment" id="c_1713664519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664519">1</a> by Jason Holden
		posted on 4/27/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>I'm not sure if it's "right" or "wrong" to include HTML in a CFC.  I've been using CFCs to handle my site layouts for a while.  Really happy with it.</p><p>Steve Bryant wrote some good articles on using CFCs in the presentation layer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664495">2</a> by Jeremy French
		posted on 4/27/2007 at 1:22 AM
		</div>
		<div class="comment_text"><p>I have no problem at all with using CFCs to either return or display HTML, so long as they are View-level CFCs.  The idea is to keep your logic separate from your display.  As long as you do that, what CF mechanism you use is pure preference in my book.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664503">3</a> by Michael Long
		posted on 4/27/2007 at 3:27 AM
		</div>
		<div class="comment_text"><p>I started to reply to this, but the reply started to be so long that I just did an &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fcfinternals.typepad.com%2Fblog%2F2007%2F04%2Fcan_a_cfc_conta.html%3AIi7x_AQCZLXISpXq4RrBoBTAxv0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfinternals.typepad.com/blog/2007/04/can_a_cfc_conta.html">http://cfinternals.typepad....</a>"&gt;article&lt;/a&gt; on why it's often a good idea for objects/components to generate and return HMTL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664513">4</a> by Steve Nelson
		posted on 4/27/2007 at 5:24 AM
		</div>
		<div class="comment_text"><p>Here's some sample code with using HTML and includes (same basic thing as cf tags) with CFCs:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.webapper.net%2Fprojects%2FCFCFramework%2Findex.cfm%3A9A1oeGZS3NlSJzukZRQIaTyLizE&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.webapper.net/projects/CFCFramework/index.cfm">http://labs.webapper.net/pr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664506">5</a> by Blake Kiser
		posted on 4/27/2007 at 3:32 PM
		</div>
		<div class="comment_text"><p>I try to always use cfc's for logic.  The only exception is when I am using an AJAX call to refresh some html.  Even then I think you should use a cfinclude if that is possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664509">6</a> by Michael Long
		posted on 4/27/2007 at 4:02 PM
		</div>
		<div class="comment_text"><p>@Mark. I prefer using view cfcs over includes or modules because I can define the arguments they need to receive and because they can be referenced and cached in memory for later use.</p><p>Futher, cfcs are extensible. Most of the form cfcs I use extend a base class that generates the correct output from a simple xml definition, binds to the object for data transfer, automatically validates, and so on.</p><p>The view cfcs work similarly, and contain "helper" functions for things like automatic query list display and pagination functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664511">7</a> by Michael Long
		posted on 4/27/2007 at 4:02 PM
		</div>
		<div class="comment_text"><p>@Mark. I prefer using view cfcs over includes or modules because I can define the arguments they need to receive and because they can be referenced and cached in memory for later use.</p><p>Futher, cfcs are extensible. Most of the form cfcs I use extend a base class that generates the correct output from a simple xml definition, binds to the object for data transfer, automatically validates, and so on.</p><p>The view cfcs work similarly, and contain "helper" functions for things like automatic query list display and pagination functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664502">8</a> by tony petruzzi
		posted on 4/27/2007 at 5:08 PM
		</div>
		<div class="comment_text"><p>@jason</p><p>Do you have a link for that article from Steve?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664501">9</a> by Jason Holden
		posted on 4/27/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>@tony</p><p>Steve's website has links to both articles:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bryantwebconsulting.com%2Farticles.cfm%3AGkkdaVAxUNzI27PJTrgCuq7F3h4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bryantwebconsulting.com/articles.cfm">http://www.bryantwebconsult...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664508">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664508">10</a> by Aaron Longnion
		posted on 4/27/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>My background has always been working in teams of mid- to senior-level CF developers, and most of these developers I've worked with seem to agree with the Forta/Horwith school of thought regarding when to use CFCs versus CustomTags.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%3Fmode%3De%26entry%3D1050%3AQFCWOMqpSWMue-_L_olwBhs_Ly0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm?mode=e&amp;entry=1050">http://www.forta.com/blog/i...</a>.  Two of my mentors, Adam and David Churvis, teach this approach in their CFMX Master Class (and use it extensively in the PLUM framework), and I've never been disappointed in organizing my code that way.</p><p>That being said, I can see some of the benefits to move nearly all reusable type code to CFCs IF you're developing code primarily by yourself or in a small group of like-minded developers.</p><p>Also, note that many developers just aren't aware of how powerful and handy CustomTags can be: <a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2Findex.cfm%2F2007%2F4%2F19%2Fmy-nested-custom-tag-is-bi-directional-that-is%3AwyTOK4ULKBTJjSdpNVsRSsbKDZ8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/index.cfm/2007/4/19/my-nested-custom-tag-is-bi-directional-that-is">http://cfzen.instantspot.co...</a></p><p>Ben Nadel has an excellent recent series of blog entries on CustomTags:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F658-Creating-One-Way-Full-Data-Communication-For-ColdFusion-Custom-Tags-With-CFAssociate.htm%3AHCQyue3OcRzPprIBJigGQrNlrQk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/658-Creating-One-Way-Full-Data-Communication-For-ColdFusion-Custom-Tags-With-CFAssociate.htm">http://www.bennadel.com/blo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F657-Determine-The-Parent-ColdFusion-Custom-Tag-Hierarchy-Using-GetBaseTagList-.htm%3AzXXFfC33ol9aWlP34EBCtg0juBo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/657-Determine-The-Parent-ColdFusion-Custom-Tag-Hierarchy-Using-GetBaseTagList-.htm">http://www.bennadel.com/blo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F654-Building-A-Table-With-Nested-ColdFusion-Custom-Tags-And-A-ColdFusion-Component.htm%3AUQ3J2j2ZUUHmZv-Lf5OUAwYTe4g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/654-Building-A-Table-With-Nested-ColdFusion-Custom-Tags-And-A-ColdFusion-Component.htm">http://www.bennadel.com/blo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F650-Building-A-Table-With-Nested-ColdFusion-Custom-Tags.htm%3ADg_V6GOCDwIhaXjNci0Wb03f4l0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/650-Building-A-Table-With-Nested-ColdFusion-Custom-Tags.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664520">11</a> by Michael Long
		posted on 4/27/2007 at 10:42 PM
		</div>
		<div class="comment_text"><p>@Aaron: Nearly anything you can do in a nested tag configuration can be done in a CFC quicker and easier, plus in a cfc you can break functionality down into internal subroutines, inherit functionality, and you can get and assign values back w/o doing nasty returnvalue/caller syntax where you inject variables into the parent's scope.</p><p>Here's a snippet of code from a autogenerating form demo, much like the table generator from your example:</p><p>f=createObject('component','form').init();<br>f.hidden(name='id',value=456);<br>f.input(label='First Name', name='fn', value='mike', size=25);<br>f.input(label='Last Name', name='ln', value='long', size=25, required=1);<br>f.input(label='E-Mail Address', name='em', value='email@sample.com', size=25);<br><a href="http://disq.us/url?url=http%3A%2F%2Ff.select%3A3inciTr-PZ2EUD4BrKJFYx83oK0&amp;cuid=3321886" rel="nofollow noopener" title="f.select">f.select</a>(label='Gender', name='sx', value='m', size=1);<br>f.option(label='Male', value='M');<br>f.option(label='Female', value='F');<br>...<br>#f.display()#</p><p>It beats out performance-wise as well. All-in-all, cfc's are so superior in terms of packaging code that I stopped doing nested tag configurations years ago and never looked back. Pretty much the only thing I use a tag for these days is to do memory/file-based caching routines, and I think I still use the pagination one from time-to-time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664500">12</a> by Raymond Camden
		posted on 4/27/2007 at 11:28 PM
		</div>
		<div class="comment_text"><p>Michael - I really beg to differ. I don't think your example is easier then say</p><p>&lt;cf_form&gt;<br>  &lt;cf_formfield ..&gt;<br>&lt;/cf_form&gt;</p><p>Certainly for people coming from a non-programming background. Shoot, I come from a programming background and I still find the tag based syntax easier to work with.</p><p>Yes, Custom Tags have slower performance, but I do not believe that it is the type of concern that will impact most people. Performance is not _everything_. If it was - we would write in machine language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664510">13</a> by Michael Long
		posted on 4/28/2007 at 12:23 AM
		</div>
		<div class="comment_text"><p>@Raymond - Perhaps from the bit of code shown that's true, but that was just done to show how you can have similar syntax in the setup phase. It's when you add a couple of lines like...</p><p>if (f.process(object))<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fobject.save%3A5nb0C6s-4U4kwRIpLTKl-1uHZFQ&amp;cuid=3321886" rel="nofollow noopener" title="object.save">object.save</a>();</p><p>...that the component-based version begins to show its true colors.</p><p>How about automatically marshalling data to and from your business objects, and having automatic form validation and error checking, and being able to include the previous example's form setup inside a "definition" function, such that each registration or sign-in or administration form is its own self-contained block of functionality? Was all of that included in the custom tagset?</p><p>What happens, say, when you need an special validation type? Do you dive into your cfx_form routines and patch them (problematic if a shared or public library), or do you just add a "validateMYTYPE" function to your form handler and get on with life?</p><p>From a syntax standpoint things are a little different, sure. Then again, you're already cross-training someone who knows input and select into translating select into cf_formfield type="select".  Is <a href="http://disq.us/url?url=http%3A%2F%2Ff.select%3A3inciTr-PZ2EUD4BrKJFYx83oK0&amp;cuid=3321886" rel="nofollow noopener" title="f.select">f.select</a>(...) that much harder? Or easier? Or just six of one, half-dozen of the other?</p><p>Again, I have to stand by the component-based approach for sheer power and functionality and extensibility and packaging and all of the other reasons I've already mentioned. And I've written a LOT of form, table, report, and database-management tagsets.</p><p>But if everyone agreed on everything, we wouldn't have horse races... (grin)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664516">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664516">14</a> by Aaron Longnion
		posted on 4/28/2007 at 1:07 AM
		</div>
		<div class="comment_text"><p>without doing an explicit test on the code below:</p><p>f=createObject('component','form').init();</p><p>... from experience, I'm almost certain that the custom tags will run faster (if pure performance is all we care about) under high load/traffic.  You get the benefit of CFC performance mostly only when you put them in the Application or Server scope, and in some cases (if you don't have too many concurrent sessions) in the Session scope.  But if you're doing createObject calls often on a per request basis (like above), then performance under very high load will decrease (trust me ;-).</p><p>The rest of my rant on the subject can be seen here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2Findex.cfm%2F2007%2F4%2F27%2FRant-about-making-your-CF-code-easy-to-follow%3ANYdbW9t4WIL2sl_BWF7q-OjRK6s&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/index.cfm/2007/4/27/Rant-about-making-your-CF-code-easy-to-follow">http://cfzen.instantspot.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664518">15</a> by Raymond Camden
		posted on 4/28/2007 at 1:37 AM
		</div>
		<div class="comment_text"><p>I'm not saying that CFCs aren't more powerful, they certainly are, but CTs tend to win hands down when it comes to syntax. Don't forget too that you can have a CT API to CFCs. So you have your ease of use and your CFC structures still in tact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664517">16</a> by Michael Long
		posted on 4/28/2007 at 4:01 AM
		</div>
		<div class="comment_text"><p>@Aaron, the createObject call was sort of obligatory in order to show how the component could be instantiated in the first place.</p><p>In the real world I'd call a manager or factory to get the form component, which in turn might come from an internal cache or pool of similar forms. You can also write form and view components such that they're "stateless" and can be cached and shared across multiple threads.</p><p>Or write them such that the definitions (which is where all of the attribute parsing and heavy lifting occur) are generated and cached, making a new form instantiation insignificant in comparison.</p><p>Further, several people have mentioned to me that Scorpio may improve component creation creation speeds quite a bit. Have to see about that one.</p><p>Translated, there are many, many ways to skin that cat. Properly designed, performance is NOT an issue. (trust me)</p><p>And to quote from your rant: "...I've been coding advanced CF for 5 years, and I've never seen..."</p><p>If someone has been coding for five years and has never run across components, factories, frameworks (Model-Glue), ORMs (Reactor), code/form generators, and so on, I'd really have to question how much "advanced" ColdFusion they've done. (grin)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664507">17</a> by Raymond Camden
		posted on 4/28/2007 at 5:12 PM
		</div>
		<div class="comment_text"><p>Michael - I think those of us who write CFCs assume that more people in the community also write CFCs. I think the CFC-writing portion of the CF community is a minority still.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664514">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664514">18</a> by Aaron Longnion
		posted on 4/28/2007 at 6:45 PM
		</div>
		<div class="comment_text"><p>@Michael - Okay, I see you understand the power of CFCs and how to use them most efficiently, so I apologize for implying that your code wasn't the most efficient performance-wise.</p><p>And I'm also looking forward to the createObject performance increases in Scorpio, so that like creating a new object in Java, hopefully you usually won't have to worry much about performance when instantiating objects on a per-request basis.  I trust you man, as it's clear you know what you're talking about and have the experience to back it up.  :)</p><p>re: "...I've been coding advanced CF for 5 years, and I've never seen..." - actually, I was referring the reactions of other developers to the way this particular "architect" had designed a particular app, which was basically a complex, undocumented, spaghetti FB 2-3 hybrid, with little use of CFCs, MVC, encapsulation, best practices, or any other common ways of doing things.  The design was, however, "inventive" and quite advanced (no matter your opinion of it).  Unfortunately, no one else could understand what the heck he was doing until he explained it for hours (which he rarely did) or after a developer had worked with the app for at least 6 months.  Finally, the CTO decided to rewrite the whole thing in Java... good idea!</p><p>That brings up a point which goes back to the original point about whether it's a better practice to use customTags for your View than CFCs: what's best practice in enterprise Java web apps?  And incidentally, what's best practice in enterprise ASP .NET web apps?  If you know the answer, and I'm sure you do, then you get the point.</p><p>@Ray - I don't think you necessarily meant that just because some of us prefer to use customTags for our View that it means we don't also use CFCs extensively, but I agree with your point that probably most CF developers who aren't heavy into the blogosphere are not primarily using the latest OO frameworks or design patterns.  In my experience at least, most of us in the trenches are dealing with legacy apps that were originally written pre-CFMX, and therefore the code isn't always the latest and greatest.  There's nothing wrong or less-advanced necessarily about these legacy architectures (in fact, many of the rake in millions or billions of dollars), but it's just different.  ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664515">19</a> by Michael Long
		posted on 4/28/2007 at 11:34 PM
		</div>
		<div class="comment_text"><p>@Aaron, nothing to apologize for, it's a good conversation. As to "best practices", I'll take a firm stance on the matter and say, "it depends". If you're still coding most of your application logic in a .cfm file then tags probably make sense (see below). If you're using cfc-based controllers or business objects with an ORM, then I'd code stateless views to match.</p><p>@Ray, I understand that many CF developers aren't using objects, much the same as most "old-school" PHP developers aren't using them either. However, many environments are object-based (java, python, ruby) or, like .NET, provide lots of functionality to the developer in terms of pre-packaged objects.</p><p>There have been many comparisons of CF to PHP, and with good reason. Both started out as scripting languages that encouraged a thorough mismash of HTML and code. Both have been extended with "modern" language features that all too few use. And both are constantly being extended with half-a-billion or so global functions and tags.</p><p>Because of that it's easy for beginners (and "advanced" developers) to start in and use both languages. Unfortunately, those habits are carried over into ever larger and more complex sites, and that's where things usually begin to disintegrate into chaos.</p><p>And that's why I tend to resist adding even more "global" functionality in terms of vast arrays of tag libraries. Because if someone is using a cf_form-style system then 9 times out of 10 I'll bet that they're plopping that tag-based form right in the middle of their page, which jumps to a hastily written xyx_process.cfm page that in all likelyhood doesn't do half as much error checking and handling as it should and cflocates back and forth as needed.</p><p>Not really what one would consider to be a "best practice".</p><p>I see our role as providing the tools needed such that using objects and doing component-based development is a no-brainer. And further, to promote "best practices" that ensure rapid development while also creating a site that's easily maintainable and scalable.</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664504">20</a> by Raymond Camden
		posted on 4/29/2007 at 12:41 AM
		</div>
		<div class="comment_text"><p>I agree that a mishmash of logic and html is bad - but when I look at Dotnet and their page behind concept - I think it is taking it a step too far. It seems abstract for the purpose of being abstract - in other words - not practical.</p><p>Syntax wise I think custom tags really make sense in some situations. For layout it certainly does:</p><p>&lt;cf_layout title=".."&gt;<br>Content<br>&lt;/cf_layout&gt;</p><p>For providing complex information. Just look at Flex's datagrid. Yes you can add columns via AS but it is a lot simpler, and a lot easier to understand, in tag format.</p><p>Now if the code behind the tag is sucky - thats something else - but just the fact that it is a custom tag doesn't mean it -must- b sucky. ;)</p></div>
	</div>
</div>
		