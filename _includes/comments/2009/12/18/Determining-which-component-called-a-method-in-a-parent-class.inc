
<div class="comment" id="c_1713720643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720643">1</a> by Martijn van der Woud
		posted on 12/18/2009 at 6:25 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for demonstrating this, but I have to say that, in *most* cases the need for a superclass to know about its subclasses indicates a flaw in the design. You would have to change the method every time you add a new subclass. The superclass thus has an extra reason to change besides possible changes in its own functionality. If you can avoid that, you will probably be better off in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720645">2</a> by Martijn van der Woud
		posted on 12/18/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>Oops! Sorry! Note to self to read the post better before reacting. Your third method is obviously the best one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720649">3</a> by Don
		posted on 12/18/2009 at 7:17 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.<br>I think I like a modification of the third way. :-)  i.e. use the getMetaData in the subclass to populate the name and pass it to the superclass method. That way you can use a snippet template when creating the subclass without hard coding it anywhere.<br>This is an inherited application with hundreds of subclasses.<br>In the process of migration several of the attributes in the subclasses have changed to accomated new middleware. The superclass uses implicit getters and setters. The existing ui, of course, uses the old attribute names so it has getOldName(),</p><p>In order to avoid (temporarily) refactoring the ui the superclass does a lookup to find the correct mapping to the new name (ie returns getNewName() ) so the application doesn't break and block other developers. The mapping is dependent on which child is calling the superclass. The superclass then logs which piece of ui code made the call aiding the developers working on the ui. There is no intent to leave the mapping process on in the production version, although if the middleware changed the schema and required a new name later you could leave the mapping in place, change the attribute in the subclass and never have the ui care.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720648">4</a> by Don
		posted on 12/18/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>Actually, if I modify the init() method of the superclass to set the name I don't need to modify any subclasses.</p><p>init() {<br>....<br>md =getMetadata(this);<br>this.componentName=<a href="http://disq.us/url?url=http%3A%2F%2Fmd.name%3ATg1q-Crp_ST89dS2DHH4re5SA0g&amp;cuid=3321886" rel="nofollow noopener" title="md.name">md.name</a>;<br>....<br>The superclass can then using this.componentName in its lookup for the mapping and the hundreds of subclasses can remain unchanged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720651">5</a> by Joby
		posted on 7/15/2010 at 10:05 PM
		</div>
		<div class="comment_text"><p>I've run into some discrepancies with the getMetaData() function and the returned .name property.  On our Windows/IIS dev server this returns the full dot-notation path.  However, on our Linux/CentOS/Apache dev server, the name is just the filename (missing the extension) as if the web-root was actually the local folder.  Has anyone run into this issue?  I'm assuming there is a server config that's missing.  However, in the httpd.conf file defines the document root and using createObject() and using the normal dot-notation for the full path from the web root does work.  Its odd the web-root seems to be in use in some cases, but in other it isn't.  Any ideas how I can ensure getMetaData() is consistent across Linux and Windows?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720652">6</a> by Joby
		posted on 7/29/2010 at 8:06 PM
		</div>
		<div class="comment_text"><p>RE: my previous post, looks like this is a bug with 9.0, the update to 9.0.1 looks like it fixes the getMetaData() issue.</p></div>
	</div>
</div>
		