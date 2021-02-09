
<div class="comment" id="c_1713667766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667766">1</a> by Dan
		posted on 6/22/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I totally agree with you here. There is no need to be referencing application.dsn inside of your cfc. I wrote an article about avoiding global data in this case. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.danvega.org%2Fblog%2Findex.cfm%2F2007%2F2%2F19%2FAvoid-Global-Data%3Ax9x6WwmjWhIOx17kpmbU0zfMbg4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danvega.org/blog/index.cfm/2007/2/19/Avoid-Global-Data">http://www.danvega.org/blog...</a> . The other thing wrong with that code is that Paris hilton should be nobody's Idol :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667770">2</a> by CFToku
		posted on 6/22/2007 at 7:33 PM
		</div>
		<div class="comment_text"><p>I'm thinking it's because he defined the <a href="http://disq.us/url?url=http%3A%2F%2FApplication.name%3ARcKwivDmd3_zdTpc3r419fqXwIc&amp;cuid=3321886" rel="nofollow noopener" title="Application.name">Application.name</a> AFTER setting the Application.DSN</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667772">3</a> by CFToku
		posted on 6/22/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>Oops, the [more] button got me.. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667764">4</a> by Adam
		posted on 6/22/2007 at 11:26 PM
		</div>
		<div class="comment_text"><p>So the "problem," as you put it, is not necessarily using an application.dsn, but rather referencing it inside of a component. You had me worried there for a moment. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667762">5</a> by Raymond Camden
		posted on 6/23/2007 at 12:36 AM
		</div>
		<div class="comment_text"><p>Right - but that really wasn't the main point of the entry. The real bug was putting app vars before the cfapp tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667769">6</a> by Adam
		posted on 6/23/2007 at 1:23 AM
		</div>
		<div class="comment_text"><p>Well sure, but I saw that pretty quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667765">7</a> by David C-L
		posted on 6/23/2007 at 6:39 AM
		</div>
		<div class="comment_text"><p>For those of us who are OO newbies, can you say more about why we shouldn't reference application.dsn in a CFC and what we should do instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667773">8</a> by Raymond Camden
		posted on 6/23/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>David: This isn't an OO thing. It is an encapsulation thing. The idea is that you won't your code to know as little as possible. Here is a very simple, trivial example. Imagine you want to write a function that will say hello to you. So if my name is Ray, it should say:</p><p>"Hello, Ray!"</p><p>I could write my CFC to do this:</p><p>return "Hello, " &amp; <a href="http://disq.us/url?url=http%3A%2F%2Fsession.name%3AZwb-hLe-wEBzsm3ETsHiiwbl77s&amp;cuid=3321886" rel="nofollow noopener" title="session.name">session.name</a></p><p>And that works fine - but note the use of <a href="http://disq.us/url?url=http%3A%2F%2Fsession.name%3AZwb-hLe-wEBzsm3ETsHiiwbl77s&amp;cuid=3321886" rel="nofollow noopener" title="session.name">session.name</a>. The CFC assumes that the session scope is enabled and that the name key stores my name. If I stop using the session scope or switch to a different key (or keys, maybe client.firstname and client.lastname), then my CFC suddenly stops working.</p><p>But if my CFC took an argument, name, and did this:</p><p>return "Hello, " &amp; <a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a></p><p>It now works no matter what scope my name is stored in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667771">9</a> by Nick Sweeney
		posted on 6/23/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>Um... Ok.  But:</p><p>What version of CF can you start to use app.cfc? MX7?</p><p>And Dan - in your example - you show that:<br>&lt;cfargument name="dsn" type="string" required="true"&gt;<br>&lt;cfset variables.dsn = arguments.dsn&gt;<br>and then in the CFC query you use datasource="#variables.dsn#"</p><p>- - Which I understand how it works - but, why is that better? Because of memory use?? Isn't the idea to only set one variable once? (especially if it doesn't change?)</p><p>I thought the idea of "application." variables was that if it is "app" wide - you only have to set it once and then it's done. In your example - we would continually be setting that value for each CFC in the App... Which seems redundant to a fault.  So - what am I missing?  Future Flexibility?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667775">10</a> by John
		posted on 6/24/2007 at 3:18 AM
		</div>
		<div class="comment_text"><p>Being somewhat new to CF I'm usually quite puzzled when you post these little problems and hide the answer behind the more button.  Upon seeing the problem I feel like a complete idiot and I wonder how I missed something so obvious.  Well, I'm happy to say that I saw this one right off the bat.  And it was pretty exciting! :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667774">11</a> by David C-L
		posted on 6/24/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>Thanks for the response Ray.</p><p>I realize I'm digressing wildly from the point of this post, so feel free to stop me-- I'm just thinking out loud.  I have a lot of Coldfusion 5 code that's in the process of migrating to MX, so this is basically a new problem to me.  I've never had to worry about passing datasources into functions because in addition to no CFCs, CF5 doesn't have CFFUNCTION and therefore you can't run a query in a UDF.  I'm used to setting application.dsn once and being able to assume that all of the code in the application can use it.</p><p>Having to include a DSN argument in every function you create sounds like a lot of work.  Further, I would worry about consistency-- some functions would have the DSN first, some would have it last.  Would it make sense to have a singleton datasource object that is inherited by other objects in the app?  Is there a convention for how this problem is handled in Coldfusion OO code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667776">12</a> by simplico
		posted on 6/25/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>Another option with CFCs is to use an init function and just set the dsn (and other variables) there.</p><p>&lt;cffunction name="init" returntype="any" output="false"&gt;<br>   &lt;cfargument name="dsn" required="true"&gt;</p><p>   &lt;cfscript&gt;<br>     this.dsn = arguments.dsn;<br>   &lt;/cfscript&gt;</p><p>   &lt;cfreturn this /&gt;<br>&lt;/cffunction&gt;</p><p>and then in your code you just call the init function.</p><p>&lt;cfscript&gt;<br>   products = createobject("component","<a href="http://disq.us/url?url=http%3A%2F%2Fcfc.name%3AM56Kkn2oFUWydwNEBTrg-pyc3w4&amp;cuid=3321886" rel="nofollow noopener" title="cfc.name">cfc.name</a>").init(application.dsn);<br>&lt;cfscript&gt;</p><p>and within the CFC you would use this.dsn for datasource name.</p><p>CFCs are the way to go IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667778">13</a> by Raymond Camden
		posted on 6/25/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>@David: CF5 did have UDFs - they were just script based. It also had custom tags.</p><p>Encapsulation sometimes DOES mean more work. But we code for stronger code, not for 'getting it done as fast as possible.' ;)</p><p>As for having a consident "place" for DSN - don't forget you can always used named params:</p><p>foo = myfuncorcfc.function(name="ray", dsn="#application.dsn#", etc=foo)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667777">14</a> by Raymond Camden
		posted on 6/25/2007 at 5:32 PM
		</div>
		<div class="comment_text"><p>Nick - see simplico. THe idea is to set it once when you create the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667779">15</a> by David C-L
		posted on 6/25/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>Ray, I use UDFs in CF5 all the time.  My point is that in CF5, UDFs can only be created in cfscript.  Unless there's a trick I'm unaware of, this means they can't run queries and therefore don't have much use for a data source name.</p><p>simplico's answer works for me... thanks simplico!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667781">16</a> by Raymond Camden
		posted on 6/25/2007 at 7:22 PM
		</div>
		<div class="comment_text"><p>I misread your comment David - I thought you were implying there were no UDFs in CF5.</p></div>
	</div>
</div>
		