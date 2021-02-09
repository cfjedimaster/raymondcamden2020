
<div class="comment" id="c_1713676528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676528">1</a> by Paul
		posted on 1/23/2008 at 4:14 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply.  I ended up setting a variable in the proxy cfc to be the object of the cfc that i wanted to call the functions from:</p><p>variables.itemManager=createObject("component", "itemManager").init(APPLICATION.dsn);</p><p>then i wrote functions in the proxy cfc like this:<br>&lt;cffunction access="remote" name="getAllItemTypes" returntype="query" output="true"&gt; <br>&lt;cfreturn variables.itemManager.getAllItemTypes() /&gt; &lt;/cffunction&gt;</p><p>What do you and others think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676536">2</a> by Tom Chiverton
		posted on 1/23/2008 at 4:28 PM
		</div>
		<div class="comment_text"><p>I think that if you have more than a handful of remote methods, you should <br>a) look at ColdSpring/LightWire for managering your dependancies and properties<br>b) look at AOP-like solutions, such as ColdSpring's RemoteFactoryBean for writing the proxy 'service' CFC for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676537">3</a> by Simon
		posted on 3/20/2008 at 5:33 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I have set up a quick demo app just like above, I have a proxy CFC that talks to the application scoped object (well that’s the idea), but when I hit the application scoped object inside the proxy cfc I get the cf error "Element DBACCESS is undefined in a Java object of type class" etc... I can't for the life of me see whats going on here. I can send you the sample files if you want. Are there any settings I need to enable to allow the proxy CFC to access application scoped objects? This is driving me mad. Here is the simple proxy function call</p><p> &lt;!--- Get array of media types ---&gt;<br>   &lt;cffunction name="getMedia" access="remote" returnType="array"&gt;</p><p>      &lt;cfreturn application.dbAccess.getMedia()/&gt;<br>   &lt;/cffunction&gt;</p><p>I am setting up the application scoped object like this in the application.cfc</p><p>&lt;cfset application.dbAccess = createObject("component","model.dbaccess").init(dsn='cfartgallery')/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676535">4</a> by Raymond Camden
		posted on 3/20/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>You are using application.dbAccess, and it doesn't exist. Your code needs to create this value somehow, somehwere. I can't say exactly how as I don't know the rest of your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676539">5</a> by Simon
		posted on 3/20/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am creating the application.dbaccess object in the onApplicationStart() in my application.cfc using this line</p><p>&lt;cfset application.dbAccess = createObject("component","model.dbaccess").init(dsn='cfartgallery')/&gt;</p><p>I'm i doing something really stupid here an just can't see it</p><p>Cheers</p><p>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676538">6</a> by Raymond Camden
		posted on 3/20/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>Is your CFC under the same folder that your Application.cfc is in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676541">7</a> by summer
		posted on 8/5/2010 at 12:56 AM
		</div>
		<div class="comment_text"><p>I'm getting the same problem that Simon had.  Any resolution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676540">8</a> by Raymond Camden
		posted on 8/5/2010 at 2:52 AM
		</div>
		<div class="comment_text"><p>Can you show (via pastebin) your Application.cfc?</p></div>
	</div>
</div>
		