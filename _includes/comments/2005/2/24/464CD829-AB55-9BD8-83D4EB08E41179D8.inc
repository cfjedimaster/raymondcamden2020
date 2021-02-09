
<div class="comment" id="c_1713617261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617261">1</a> by Simeon
		posted on 2/25/2005 at 5:19 AM
		</div>
		<div class="comment_text"><p>Well to give accurate credit I must say that my eagle-eye friend Sean Corfield spotted the spelling mistake while we discussed why I couldn't get my session managment to work.</p><p>But thanks to Ray for the skeleton, and thanks to Sean for proving I was not crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617259">2</a> by John Farrar
		posted on 2/25/2005 at 7:25 AM
		</div>
		<div class="comment_text"><p>Let me ask again just to make sure. In the OnApplicationEnd you have the argument "applicationScope". In the OnSessionEnd you have the argument "appScope". Shouldn't the naming of the scopes be consistant? (just for general coding practices... noticed it because I am used to people pointing this type of thing out for me.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617260">3</a> by Raymond Camden
		posted on 2/25/2005 at 8:17 AM
		</div>
		<div class="comment_text"><p>John: The name of the argument is totally up to you. However, you are right, the naming should be consistent. I'll do another update tomorrow morninig.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617262">4</a> by Marcus C.
		posted on 3/1/2005 at 1:00 AM
		</div>
		<div class="comment_text"><p>Weird..the onRequest method in the application.cfc will not show the page in the browser. No error/debug message, just a blank page. If I take this method out, the page shows fine. Not sure what the problem is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617267">5</a> by Raymond Camden
		posted on 3/1/2005 at 1:09 AM
		</div>
		<div class="comment_text"><p>Are you using the exact same code from the PDF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617271">6</a> by Marcus C.
		posted on 3/1/2005 at 3:15 AM
		</div>
		<div class="comment_text"><p>Yes I am, the exact same code. I even commented out several of the methods I not using yet. I only have <br>onApplicationStart, onApplicationEnd, and onRequest enabled (no commented out) and I get a blank page. When I comment out the onRequest method the page opens (has errors but opens). I want to include some udfs in this methods otherwise I would just leave it out. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617264">7</a> by Marcus C.
		posted on 3/1/2005 at 3:16 AM
		</div>
		<div class="comment_text"><p>Sorry meant to say: I only have onApplicationStart, onApplicationEnd, and onRequest enabled (the other methods are commented out)..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617268">8</a> by Raymond Camden
		posted on 3/1/2005 at 3:20 AM
		</div>
		<div class="comment_text"><p>Did you get the _latest_ copy? I had a typo that caused an error to fire. Since onError is blank, the error got supressed. Try the latest copy. If it doesn't help, try outputting the errors in onError and see if it makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617265">9</a> by Marcus C.
		posted on 3/1/2005 at 3:22 AM
		</div>
		<div class="comment_text"><p>Sorry meant to say: I only have onApplicationStart, onApplicationEnd, and onRequest enabled (the other methods are commented out)..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617263">10</a> by Marcus C.
		posted on 3/1/2005 at 6:37 AM
		</div>
		<div class="comment_text"><p>Sorry meant to say: I only have onApplicationStart, onApplicationEnd, and onRequest enabled (the other methods are commented out)..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617270">11</a> by Marcus C.
		posted on 3/1/2005 at 7:13 AM
		</div>
		<div class="comment_text"><p>That did it. Guess I didn't have latest copy. Thanks for the great document!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617273">12</a> by Crit
		posted on 3/10/2005 at 11:01 AM
		</div>
		<div class="comment_text"><p>i'm having the same issue... i just copied the pdf and threw it into an Application.cfc file in the root of my app, but no pages appear at all... any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617274">13</a> by Raymond Camden
		posted on 3/10/2005 at 7:44 PM
		</div>
		<div class="comment_text"><p>Turn on debugging and see if onError is being run. Since my onError is empty, you won't see anything. You should modify it for now to cfdump the exception. Also be 100% sure you get the latest PDF as the first version had a typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617275">14</a> by Critter
		posted on 3/10/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>I did find an error, it was from code i had commented out. now I get a:</p><p> Unable to complete CFML to Java translation.<br>Error information unsupported statement: class<br>coldfusion.compiler.ASTfunctionDefinition</p><p>for code that works when it's in my application.cfm. I've posted it to cf-talk as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617269">15</a> by William
		posted on 6/16/2005 at 1:30 AM
		</div>
		<div class="comment_text"><p>Just wanted to say thanks. Having a reference from a CF engineer helps with "best practices" scenarios. I don't need to cut-and-paste anything here, but to see the framework certainly helps me out a great deal. Thanks again. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617272">16</a> by Bruce Trevarthen
		posted on 8/8/2005 at 6:30 AM
		</div>
		<div class="comment_text"><p>I got annoyed with the use of CFABORT causing errors to be thrown and displayed all the time so I wrapped the outputs of my onError method in the following:</p><p>&lt;cfif NOT Find("AbortTag.doStartTag",Arguments.Except.RootCause.StackTrace)&gt;..logging and display output..&lt;/cfif&gt;</p><p>Now I only see real errors.</p></div>
	</div>
</div>
		