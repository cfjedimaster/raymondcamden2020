
<div class="comment" id="c_1713715224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715224">1</a> by Scott P
		posted on 5/5/2009 at 6:21 AM
		</div>
		<div class="comment_text"><p>I use extended an Application.cfc in the directory with the cfc (or anything other) files that don't need the main onRequestStart/End.  Sean Corfield has a post about extending - <a href="http://disq.us/url?url=http%3A%2F%2Fcorfield.org%2Fentry%2FExtending_Your_Root_Applicationcfc%3AmuIzHSScvD-0mmR6Hmm6DxSsSWU&amp;cuid=3321886" rel="nofollow noopener" title="http://corfield.org/entry/Extending_Your_Root_Applicationcfc">http://corfield.org/entry/E...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715225">2</a> by Shane Zehnder
		posted on 5/5/2009 at 7:51 AM
		</div>
		<div class="comment_text"><p>Subscribing to comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715222">3</a> by Adrian J. Moreno
		posted on 5/5/2009 at 5:27 PM
		</div>
		<div class="comment_text"><p>One of my coworkers pointed out that just dropping an empty Application.cfc in the CFC root folder bypasses calls to the application's base Application.cfc methods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715223">4</a> by Raymond Camden
		posted on 5/5/2009 at 5:38 PM
		</div>
		<div class="comment_text"><p>Nice suggestions guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715227">5</a> by Antonio Trejos
		posted on 5/5/2009 at 7:01 PM
		</div>
		<div class="comment_text"><p>The design layer has to be implemented independently from the application layer so you only call the header and footer once per Page Refresh, rather than once per on_request event. The problem is that even the calls to functions on CFC, or any other include you reference from a CFM page, is considered by the application.cfc as another request, and so it executed the on_request_start several times on an Ajax driven page. &lt;br&gt;<br>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fchurubox.blogspot.com%2F2009%2F05%2Fin-response-to-raymond-camdens-using.html%3A092P8mvE7bRJv7gQI1c26sPA7mQ&amp;cuid=3321886" rel="nofollow noopener" title="http://churubox.blogspot.com/2009/05/in-response-to-raymond-camdens-using.html">http://churubox.blogspot.co...</a>"&gt;I go around this by using a little old time's fusebox&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715226">6</a> by Abram
		posted on 5/5/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>@Ray, Just curious, why do you not like to use App.cfc to wrap header/footers to layout?  I've done this quite a bit and haven't seen any problems.  Maybe there are gotchas that I just haven't encountered yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715234">7</a> by Josh Curtiss
		posted on 5/6/2009 at 4:08 AM
		</div>
		<div class="comment_text"><p>Personally, I'm not fond of putting any code in Application.cfc that has to do with HTML output. As soon as you start having scripts or CFCs that are used for outputting something other than a webpage that has the look and feel of your app's navigation, you start feeling the pain the will take you down the path of not doing that anymore..! :-D</p><p>Examples: CFCs, or even CFMs that output JSON or XML, or scripts that run as scheduled tasks and you save the output to cfinclude somewhere, scripts that are loaded in frames or DIVs with Ajax, etc!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715235">8</a> by Abram
		posted on 5/6/2009 at 5:16 AM
		</div>
		<div class="comment_text"><p>@Josh, Good point.  My framework "detects" what type of page is being requested and either wraps it in a custom tag or not; so JSON, XML or other HTML-less output is not an issue on my end.  I do see how this could cause problems though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715238">9</a> by Kumar
		posted on 5/8/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>I have a different problem with an application that is some years old and I want to add some Ajax stuff to it. The Application.cfm contains HTML code on the top, and this HTML code is basically generated on every CF page request (so when a user views a source, they see a copyright message).</p><p>Any way to work around that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715240">10</a> by Raymond Camden
		posted on 5/8/2009 at 11:44 PM
		</div>
		<div class="comment_text"><p>Just edit the App.cfm. Look at the cgi scope for the URL being requested (can't remember the name offhand), and hide the HTML for CFC requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715239">11</a> by Noah McCollam
		posted on 9/23/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>I noticed I couldn't get my AJAX calls to work for jquery until I checked for them in my onRequestStart function inside my Application.cfc</p><p>I actually got this from somewhere else, just can't remember where off the top of my head:</p><p>&lt;cfif listlast(arguments.TargetPage,".") is "cfc"&gt;<br>			&lt;cfset StructDelete(this, "onRequest") /&gt;<br>			&lt;cfset StructDelete(variables,"onRequest")/&gt;<br>		&lt;/cfif&gt;</p><p>With this little piece of code inside my application.cfc it seems to resolve all my requests to my CFC's in jquery.</p><p>Hope this helps!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715243">12</a> by Mitchell Griffin
		posted on 1/20/2010 at 6:16 PM
		</div>
		<div class="comment_text"><p>I wanted to say that this blog post has help me move my project along. Thanks for sharing so much good information. I was having a problem with cfajaxproxy bind giving an undefined error. After many searches I found this article and and realized the problem was in my application.cfc.</p></div>
	</div>
</div>
		