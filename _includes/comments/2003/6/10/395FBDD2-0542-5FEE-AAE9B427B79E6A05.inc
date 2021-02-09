
<div class="comment" id="c_1713614637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614637">1</a> by Charlie Arehart
		posted on 11/30/2003 at 4:49 PM
		</div>
		<div class="comment_text"><p>Ray, glad to hear of your expanding into the JSP world, as any new knowledge can be a good thing. But can expand on your enthusiasm for it? You say you're "impressed with how powerful the language is". Do you mean Java? Or JSP, specifically? Or perhaps you mean the traditional MVC design approaches people follow in JSP?</p><p>I just ask because, coming from someone so familiar as you are with CFML, I'd be surprised you'd consider JSP to be a "powerful language". By comparison to CFML, JSPs handful of tags are paltry. And while you can do much more with Java scriptlets, that's typically frowned upon--and indeed you can do the same scriptlets in CFMX or BlueDragon.</p><p>If it's the whole approach of more careful separation of concerns, MVC design, perhaps Struts, beans, EJBs, etc., that's a different matter, of course. Even then, as a CFML fan I have to assert that many of those same benefits could also accrue to CF folks, if only they'd follow the same patterns.</p><p>I'm not meaning to bust your b*lls. :-) Actually, I really hope we hear more about your experience entering into the JSP realm. More than anything, I hope that perhaps your dipping your toe into the waters may lead you to find more connections to be drawn between the two worlds.</p><p>Just as learning another language can increase one's sophistication and ability, similarly I think that all CFML developers could benefit from learning another web app programming language (JSP, ASP.NET, PHP, Python, etc.) As folks do, especially as thought leaders like you do, it can only help the community by either their learning new things, or better appreciation the things they know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614638">2</a> by Raymond Camden
		posted on 11/30/2003 at 7:02 PM
		</div>
		<div class="comment_text"><p>I'd say my enthusiasm is more for the Java platform as a whole, in the server side I mean. I would not say it is _just_ JSP for sure.</p><p>Do not think that because I consider JSP/java to be 'powerful' that it comes anywhere close to CF. When you compare CF's tags to what is supported in JSP, I don't really consider that big of a deal. There are a few cases where it matters - like having a nice cfquery and cfoutput tag bound to a query. Using databases is not quite as easy... until you build a simple query object. But in general, I didn't mind the 'missing' tags in JSP and simply felt like I was using cfscript.</p><p>Some random things I liked - I liked being able to run servlets at startup. I liked the web-inf folder, which we can do in CFML of course, but it's not builtin.</p><p>The number one thing I liked - which is not unique to Java, is strict typing. That is both a benefit and a pain. It is a benefit when you are doing any kind of large scale development, but it is a pain when you are doing  a 'quickie.' I'd kill to have strict typing in CF. It seems to make development incredibly more robust when you have that level of a strictness in your code. I'd like to be able to simply turn on a switch (via cfsetting) and then use syntax like, cfset int x = 1, etc.</p></div>
	</div>
</div>
		