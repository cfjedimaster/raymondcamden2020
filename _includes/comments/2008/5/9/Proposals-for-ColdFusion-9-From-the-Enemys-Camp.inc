
<div class="comment" id="c_1713680738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680738">1</a> by Andy Allan
		posted on 5/9/2008 at 5:22 PM
		</div>
		<div class="comment_text"><p>I think Railo already does the first of those, though I'd need to doublecheck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680739">2</a> by Rick O
		posted on 5/9/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>There's a bit of a Catch-22 here.</p><p>I would say that the majority of people reading your blog would not be affected by either of these changes.  (Maybe a little, but not much.)  If someone is CF-savvy enough to be reading CF blogs, then odds are good that proper variable scoping and query parameter use are already within their toolbelt, or at least within reach of their toolbelt.</p><p>The people that would be most affected by this are the n00bs.  While I agree that explicit scoping is a good thing (who doesn't hate trying to debug old code where you can't tell what the source of a variable is?), it's going to confuse the heck out of many n00bs.  I know that many of us are a long way away from where we started, but remember that one of CF's benefits is that it is wicked simple to get up and running by just adding a few tags to an HTML page.  Yes, being lazy about variable scoping is cheating, but do you really want to have to explain that whole thing to every n00b and front-load all that learning?  That just ups the learning curve and makes CF slightly less accessible.  They may as well go learn Perl and what @ $ and % mean.</p><p>Repeat the last paragraph, replacing "scoping" with "query parameters".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680726">3</a> by Darren Walker
		posted on 5/9/2008 at 5:32 PM
		</div>
		<div class="comment_text"><p>For point 1 above, I believe Railo allows you to configure this setting per CF instance (or module as they call it). It basically means any unscoped variables in your code will throw an error. There is also a significant performance gain, as Railo only looks through the variables scope. That's the theory anyways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680728">4</a> by Jim
		posted on 5/9/2008 at 6:06 PM
		</div>
		<div class="comment_text"><p>For the first point, I am not sure why it is occuring for you but it never does that for me. I hate scope checking in any language and turn it off if I can, but I have tested putting &amp;lt;cfoutput&amp;gt;#x#&amp;lt;/cfoutput&amp;gt; and it only checked outputed local (if it was set) eitherwise it errored (variable not defined) when adding ?x=whatever to the URL.</p><p>As for the second point, I fully agree. I ALWAYS use cfqueryparam though. As for those who say PHP does not support query paramaters, take a look at MySQLi. I am pretty sure that the PostgreSQL library has similar functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680729">5</a> by Jason Dean
		posted on 5/9/2008 at 6:06 PM
		</div>
		<div class="comment_text"><p>To address point number 2, right now, as far as I know, the auto-escaping of quotes in ColdFusion actually PREVENTS SQL Injection attacks. Here is a quick example:</p><p>A url that gets a user’s profile might look like this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%2F%3Fusername%3Djason%3AP9XyxjDpN_RIiLd031y2KqsKMc0&amp;cuid=3321886" rel="nofollow noopener" title="http://domain.com/?username=jason">http://domain.com/?username...</a></p><p>With CF Auto escaping if I try to pass in:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%3Fusername%3Djason%27%3B%2520DELETE%2520FROM%2520USERS%3B--%3AFp4utfwSotrvTEj7ljar_VTZcHQ&amp;cuid=3321886" rel="nofollow noopener" title="http://domain.com?username=jason';%20DELETE%20FROM%20USERS;--">http://domain.com?username=...</a></p><p>Then what will actually get passed to the query for execution will be:</p><p>SELECT username, firstname, lastname<br>FROM users<br>WHERE username = 'jason\'%20DELETE%20FROM%20USERS;--'</p><p>At which point I would simply get an error that user "jason\'%20DELETE%20FROM%20USERS;--" does not exist.</p><p>However, if auto escaping was turned off, the DELETE statement would be processed after the select statement returned the "Jason" user, anything after it would be commented out by the "--" and my user table would be lost.</p><p>I have only done brief experimenting with this, so please correct me if I am wrong, but this is my understanding of how this works</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680733">6</a> by Justice
		posted on 5/9/2008 at 6:10 PM
		</div>
		<div class="comment_text"><p>I love the idea of disabling the scope-trolling.  Force cleaner code, faster processing?  Its like a 'strict' mode for your code ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680731">7</a> by Raymond Camden
		posted on 5/9/2008 at 6:13 PM
		</div>
		<div class="comment_text"><p>@Jason - Yeah good point. Not quite sure what I was thinking. Although what if your sql was</p><p>seelct * from where id = #url.x#</p><p>and url.x was 5;drop%20users</p><p>That doesn't use single quotes so it's a dumb example.</p><p>As I said - I wasn't sure about these ideas. ;)</p><p>@Jim - I think the idea is that a page may be cfincluded and expecting X - if I find I can run it as is - see X is throwing an error and then I provide X, it is a way to attack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680732">8</a> by Jason Dean
		posted on 5/9/2008 at 6:24 PM
		</div>
		<div class="comment_text"><p>@Ray - You're right.  When you are dealing with numeric values begin passed in, SQL injection attacks are MUCH easier. In fact, if you are not cfQueryParaming your numeric variables, you can be easily hacked. String, however, are tougher because of the magic quotes. It's still &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2008%2F2%2F22%2Fsql-injection-on-a-character-field%3AYOjESJ1DStxmlb1jwWnGNnYDW6Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2008/2/22/sql-injection-on-a-character-field">http://www.coldfusionmuse.c...</a>"&gt;not impossible&lt;/a&gt;, but tougher.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680734">9</a> by Andy Sandefer
		posted on 5/9/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>What CF9 really needs is a runtime.  A way for application developers to write and deploy applications without having to charge their clients an extra $1,300 on top of the price of their software.  I'm tired of having better looking and better functioning apps and getting beaten by inferior products based on .NET and PHP (because they're essentially free).<br>We've already got what in my opinion is the most rapid development platform with the most built in value adds - and I know that it costs money to provide all of those features, but we need to be able to attract companies that write from scratch, shrink wrapped software to ColdFusion as a development platform and the way to do that is definitely not by adding $1,300.00 to the price tag of their software.  If they make small apps that are usefull but not enormously feature rich then they would look like idiots trying to sell a piece of software that is $1,000 but has a system requirement needed to run it that costs more than the application itself.<br>What about an edition of CF Server that costs $500 to deploy that can just run apps and that's all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680743">10</a> by Jason Dean
		posted on 5/9/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>We'll see if this works.  I was trying to direct you to an post that discusses getting around the magic quotes in certain situations.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2008%2F2%2F22%2Fsql-injection-on-a-character-field%3AYOjESJ1DStxmlb1jwWnGNnYDW6Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2008/2/22/sql-injection-on-a-character-field">http://www.coldfusionmuse.c...</a>"&gt;not impossible</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680747">11</a> by Raymond Camden
		posted on 5/9/2008 at 6:28 PM
		</div>
		<div class="comment_text"><p>@Andy - Respectfully I'd like to ask that you keep this on topic. Jason Delmore has a good article on the costs of CF:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfinsider.com%2Findex.cfm%2F2007%2F11%2F10%2FThings-ColdFusion-is-not-and-Why-ColdFusion-isnt-free%3A2CkX3RY71kFvdluQNO3E0wyNkyc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfinsider.com/index.cfm/2007/11/10/Things-ColdFusion-is-not-and-Why-ColdFusion-isnt-free">http://www.cfinsider.com/in...</a></p><p>Also - I'd probably think that if a web site cost &lt; 1k, then most likely this is not a web site that needs to run on it's own server. I'd assume thats something that could easily run on a shared host and NOT require buying a full CF license.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680741">12</a> by Andy Sandefer
		posted on 5/9/2008 at 7:07 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for the link - there was some good info (and fighting) there.</p><p>I think that you're missing the boat on the numbers.  A lot of companies can't use shared hosting because of things that Adobe pretends don't exist - like SAS, Sarbanes Oxley, Generally Accepted Accounting Practices, etc.  ColdFusion is a great development platform for making apps that do everything from Secure File Transfer and Messaging to Help Desk, Document Mgmt. and many other types of little niches where companies in fact do sell high volumes of small, but usefull applications, for under 2k a pop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680740">13</a> by Rob Huddleston
		posted on 5/9/2008 at 7:14 PM
		</div>
		<div class="comment_text"><p>@Ray - <br>register_globals was turned off by default in PHP5, so it's actually not a new feature of v6. However, I agree that allowing something similar in CF would be a good idea.</p><p>@Rick - <br>As someone who teaches ColdFusion, I can tell you that teaching proper variable scoping and using cfqueryparam does not make the language more difficult to learn in the least. If anything, it's *harder* to explain the need for scoping when it's semi-optional - if it was off, I could just say it was required and be one with it. :) <br>Most places I teach are Adobe Authorized Centers, meaning that they are forced to use the extremely sub-par "official" courseware for CF, which unfortunately does not talk about cfqueryparam. However, I always teach it anyway, because a)it's important and b)I don't believe in teaching the wrong way to do things because it's easy, hoping that the students will take the time later to learn the right way. (It's the same reason why I refuse to teach table-based design in Dreamweaver classes.) And as I said, I haven't had a student yet that couldn't grasp the concept. It really isn't a terribly difficult thing, so once again, here I have to agree 100% with Ray and say that it would be a great idea to have CF essentially require it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680745">14</a> by Tom Chiverton
		posted on 5/9/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>I disagree. CF9 should be secure by default, but provide a means to enable the older less secure way of doing things, if needed.<br>I would argue it is almost always better to invest the time and money to fix the problem with the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680742">15</a> by CFTutor
		posted on 5/9/2008 at 9:51 PM
		</div>
		<div class="comment_text"><p>I 100% agree with the scope setting. I dont even like the fact that #x# equals #variables.X# - all variables should be scoped!  CF9 should concentrate on web service security, and a CF based web service enterprise bus would be kinda cool also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680746">16</a> by Ken Sykora
		posted on 5/9/2008 at 10:52 PM
		</div>
		<div class="comment_text"><p>@Rick O</p><p>Even the elistist of the elite developers forget on occassion. I'd rather that my code not compile/throw a runtime error if something wasn't scoped properly than to have to figure out the error after it's in production and i end up with a global variable race condition that's extremely hard to debug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680744">17</a> by Tony Garcia
		posted on 5/10/2008 at 12:52 AM
		</div>
		<div class="comment_text"><p>@Andy Sandefer,<br>You DO know about Open BlueDragon, don't you? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.openbluedragon.org%3A8PUsXbI2_JM1xHapjVNnXR7F-Yo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.openbluedragon.org">http://www.openbluedragon.org</a></p><p>According to this blog post, OBD addresses the very issue you bring up (the high cost of CF for smaller apps):<br><a href="http://disq.us/url?url=http%3A%2F%2Falan.blog-city.com%2Fbluedragon_open_source.htm%3AnoJZaqmujiYqSbq8Hb_lS7NrnuI&amp;cuid=3321886" rel="nofollow noopener" title="http://alan.blog-city.com/bluedragon_open_source.htm">http://alan.blog-city.com/b...</a></p><p>Also check out<br><a href="http://disq.us/url?url=http%3A%2F%2Fneilmiddleton.com%2F2008%2F05%2F07%2Fopen-bluedragon-makes-cfml-development-easy-again%2F%3AOco146-aBorrMgC9nsMBb8Ui08Q&amp;cuid=3321886" rel="nofollow noopener" title="http://neilmiddleton.com/2008/05/07/open-bluedragon-makes-cfml-development-easy-again/">http://neilmiddleton.com/20...</a><br>Specifically this passage: "It is now possible to have your CFML projects include the actual openBD runtime itself."</p><p>Sorry for the OT comment, Raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680748">18</a> by Andy Sandefer
		posted on 5/10/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>I'm well aware of BlueDragon but I don't think that it has feature set that I'm looking for.  Thanks anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680749">19</a> by Mary Jo Sminkey
		posted on 5/10/2008 at 9:01 AM
		</div>
		<div class="comment_text"><p>Yup, Railo does have a variety of scope settings which can be set on a per-web basis. You can have strict which will scan only the variables scope up to standard for the CFML standard method, and also a separate setting for whether to scan recordsets as well. There is also a setting for automatically combining URL and form scopes which allows for some of the flexibility people are looking for when they don't scope these. Hopefully these kinds of options will make their way into ColdFusion as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680750">20</a> by Peter Boughton
		posted on 5/11/2008 at 4:58 PM
		</div>
		<div class="comment_text"><p>As already mentioned Railo supports 1 above - what hasn't been mentioned is that it also supports 2.</p><p>You can toggle the single quote escaping on/off in the Administrator, and/or on a per-query basis.</p><p>(I'm doubt I would actually recommend turning it off, but it is nice to have the option for if I do encounter a situation that requires it.)</p></div>
	</div>
</div>
		