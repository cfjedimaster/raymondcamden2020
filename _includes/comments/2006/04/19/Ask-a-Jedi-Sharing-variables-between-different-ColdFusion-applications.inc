
<div class="comment" id="c_1713651968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651968">1</a> by Christopher Wigginton
		posted on 4/19/2006 at 6:19 PM
		</div>
		<div class="comment_text"><p>Maybe a service-oriented architecture (SOA) is a better approach.  Still use CFC's but as web services and build the methods for the interchange of data between the applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651970">2</a> by Teddy Payne
		posted on 4/19/2006 at 6:31 PM
		</div>
		<div class="comment_text"><p>An easier solution would be to replicate the idea of the CLIENT scope.</p><p>Create a datasource that is a common repository for transient key-value pairs.  All applications can use the same datasource and you would not lose security, modify the server scope (bad mojo) or create an additional HTTP request to get the variable.</p><p>If you don't like the database idea, store the variable in an xml file and call it from javascript, webservice, http request...etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651977">3</a> by Nathan D
		posted on 4/19/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>Although it's rarely a "good thing" to do, you could also just share Application names in the CFAPPLICATION tag.  In fact, you can switch among applications with multiple CFAPPLICATION tags -- you could even maintain two different Applications, but still share the variables of one in the other by doing something like:</p><p>&lt;cfset currentApplicationName = application.applicationName&gt;<br>&lt;cfapplication name="NameOfAppFromWhichToShareVars"&gt;<br>&lt;cfset tempAppRef = application&gt;<br>&lt;cfapplication name="#currentApplicationName#"&gt;<br>&lt;cfset structCopy(currentApplicationName,tempAppRef)&gt;</p><p>Again, this is not exactly a best practice, but it is possible.  If you have a set of constants shared across applications it would likely make more sense to store them somewhere as XML and then load them up into each application, or build a third "application" that acts as as service to the other two applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651980">4</a> by Ryan Guill
		posted on 4/19/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Another solution might be to do a cfhttp call to the other application which would return a wddx package or use a webservice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651978">5</a> by Teddy Payne
		posted on 4/19/2006 at 6:56 PM
		</div>
		<div class="comment_text"><p>Nathan,<br>An interesting approach and probably not something I would think of first.  <br>I imagine it will work, but I would think of the next developer behind and how confused he/she will look.</p><p>=)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651981">6</a> by jimjay
		posted on 4/19/2006 at 6:57 PM
		</div>
		<div class="comment_text"><p>Server scope = scary!</p><p>I've actually done some application variable sharing on my production box, mostly because I'm afraid what could happen if I put it live.</p><p>I have a single FCKEditor install for multiple blogCFCs on one site, and FCKEditor needs to know a directory location for images, but I don't want one shared folder for all the blogs.  I want each blog to have it's own images folder.</p><p>So when an admin logs in, I have a UDF that passes some variables using &lt;cfhttpparam&gt; to an setAppVar.cfm file sitting in my FCKEditor directory, which then sets the application variables for the FCKEditor application to use.</p><p>Each blog gets it's own unique folder name, and just for good measure I throw in some &lt;cflocks&gt;.</p><p>Not sure if it's the best method, but this server cfc thing might be better - *shrug*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651979">7</a> by Maurice Crama
		posted on 4/19/2006 at 7:03 PM
		</div>
		<div class="comment_text"><p>If you want the application scope of another application, you can use a java object on the coldfusion server to get the application scope.</p><p>&lt;cfset appTracker = createObject("java","coldfusion.runtime.ApplicationScopeTracker")&gt;<br>&lt;cfdump var="#appTracker.getApplicationScope('application_name')#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651982">8</a> by Raymond Camden
		posted on 4/19/2006 at 7:12 PM
		</div>
		<div class="comment_text"><p>Sean Corfield reminded me on IRC that there is a much easier way to get all app names. Just do:</p><p>&lt;cfapplication name=""&gt;</p><p>Then dump the app scope. You will see a collection of info which also includes all the apps on your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651985">9</a> by John Farrar
		posted on 4/19/2006 at 7:17 PM
		</div>
		<div class="comment_text"><p>I would think that MM would give shared hosting companies the ability to block writting to the server scope all together!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651989">10</a> by jimjay
		posted on 4/19/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>Where can one find all the "java" objects that are accessible by CF?  I keep seeing new objects everywhere</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651971">11</a> by Terry Schmitt
		posted on 4/20/2006 at 6:23 PM
		</div>
		<div class="comment_text"><p>&gt;   &lt;cfapplication name=""&gt;<br>&gt;   &lt;cfdump var="#application#"&gt;</p><p>Now that's a scary one! I've played with the JAVA object just to see how open my shared servers are, but that method is scary easy. I've seen CC and personal data in some applications, which really makes you re-think how you code in a shared environment.<br>It just gets me one step closer to a dedicated server...</p><p>T</p></div>
	</div>
</div>
		