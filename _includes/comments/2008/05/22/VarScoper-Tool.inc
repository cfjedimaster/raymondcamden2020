
<div class="comment" id="c_1713681102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681102">1</a> by Brad Roberts
		posted on 5/22/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>Anyone else use something like this:<br>&lt;cfset var local = structNew()&gt; or something similar?  Seems a lot easier when have 10-20 variables.</p><p>Another idea I've been playing around with is using the arguments scope, especially when I only have a couple of variables.<br>&lt;cfquery name="arguments._theQuery"&gt;<br>&lt;cfreturn arguments._theQuery&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681100">2</a> by Raymond Camden
		posted on 5/22/2008 at 9:10 PM
		</div>
		<div class="comment_text"><p>My issue with local is the amount of extra typing you do.</p><p>My issue with your second idea is that I feel it can confuse things. In general I treat the arguments as read only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681099">3</a> by Erki Esken
		posted on 5/22/2008 at 9:21 PM
		</div>
		<div class="comment_text"><p>Now the question is why isn't this actually a part of CFEclipse yet? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681089">4</a> by Raymond Camden
		posted on 5/22/2008 at 9:25 PM
		</div>
		<div class="comment_text"><p>The project is hosted at RIAForge, so why not make an enhancement request?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681103">5</a> by Dan Roberts
		posted on 5/23/2008 at 3:06 AM
		</div>
		<div class="comment_text"><p>"I've really been surprised at how bad I am with var scoping"</p><p>So one of the top CF community member can't get it right but somehow all the other developers are. I think that is a red flag that this is a problem with the language. VarScoper is very handy while we have to deal with this but hopefully CF is improved so this is less of an issue going forward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681167">6</a> by Raymond Camden
		posted on 5/23/2008 at 5:02 AM
		</div>
		<div class="comment_text"><p>Well I can get it right - if I were to slow down a bit. ;) Most of my issues stem from rushing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681166">7</a> by Rob Barthle
		posted on 5/23/2008 at 5:42 PM
		</div>
		<div class="comment_text"><p>It's offical. You rock.</p><p>Our development team does regular code reviews for every project, and one of the many things we look for is unscoped variables. This tool is going to save us hours of time in handling that!</p><p>And, judging from what varScoper is telling us, our code reviewing needs a lot of work. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681165">8</a> by Dan Roberts
		posted on 5/23/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>@Ray: yeah, I didn't mean it as a digg on you... just a suggestion that the language should change.</p><p>I was doing some error handling the other day and realized that cfcatch is put into variables scope. I mean really... how ridiculous is that. VarScoper doesn't find that problem or similar issues with cfftp and cfhttp. I've also noticed that "cfquery.executionTime" is thrown into variables scope as well and there is no var scoping can prevent it unless you specify a result variable to cfquery and var scope that.</p><p>I'm submitting those issues to the project on riaforge but just venting a bit.</p><p>To catch these issues I... 1) put all instance variables into a struct "variables.instance" 2) add a function to return or dump data in variables scope 3) run some tests 4) dump out variables scope. Basically anything that is directly in variables scope other than methods and "this" is an error. Injecting a method for inspecting variables scope and calling it as part of unit tests is probably the best way to catch these problems, but just isn't as easy as the varScoper tool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681168">9</a> by Raymond Camden
		posted on 5/23/2008 at 6:57 PM
		</div>
		<div class="comment_text"><p>@Rob - All I'm doing is sharing the good news. :)</p><p>@Dan - I don't know. I'd argue there is no need to var scope cfquery.executiontime since you don't end up using it. If you _do_ want to use it then you use result="X" and var scope X. There are no problems with cfftp and cfhttp unless you forget to use result=.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681164">10</a> by Dan Roberts
		posted on 5/23/2008 at 7:11 PM
		</div>
		<div class="comment_text"><p>You are right that if you always provide a result variable and always varscope that variable and never use cfquery.executiontime and always varscope cfcatch and make sure to varscope every variable ever used in every cfc ever created then nothing bad could ever happen :-)</p><p>I woke up in a weird mood this morning. I'm just to going to stop there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681163">11</a> by Rob Barthle
		posted on 4/22/2009 at 12:03 AM
		</div>
		<div class="comment_text"><p>RE: using a struct. Are all variables stored inside protected the same as if you had scoped them on their own?</p><p>My O-O is bad. I envision it to be like a basket and if you scope the basket then everything inside it is covered.</p></div>
	</div>
</div>
		