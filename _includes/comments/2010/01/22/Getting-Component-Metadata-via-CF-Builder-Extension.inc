
<div class="comment" id="c_1713721429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721429">1</a> by Steve Bryant
		posted on 1/23/2010 at 12:24 AM
		</div>
		<div class="comment_text"><p>I would think that the incorrect value for path would be easy to current. Name and fullname would, of course, be another matter (though I suppose you could just have the extension remove those from its output).</p><p>I would think that a bigger issue would be component extension. If the component is extending another component then it might not be found from the CFC in its new (copied) location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721422">2</a> by Raymond Camden
		posted on 1/23/2010 at 12:26 AM
		</div>
		<div class="comment_text"><p>Good point on the inheritance. I'll try that in a few - I bet it will fail miserably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721428">3</a> by Randy Johnson
		posted on 1/23/2010 at 2:04 AM
		</div>
		<div class="comment_text"><p>I have never worked with extensions before so I apologize if this is off base but could you get the Path Etc from this: &lt;cfset myFile = data.event.ide.projectview.resource.xmlAttributes.path&gt;<br>For the name I was thinking you could use the path and replace the slashes and remove the .cfc on the actual file name but there would be the issue of figuring out what the webroot is and removing it from the name.</p><p>and then add that update /add the info  to your Meta Struct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721432">4</a> by Raymond Camden
		posted on 1/23/2010 at 3:47 AM
		</div>
		<div class="comment_text"><p>Randy, you can't use the path to get metadata for a CFC. You must use "dot" notation which is based on either the current folder, or CF mappings (or custom tag paths as well). For the name though - you are right. That would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721433">5</a> by Kevin Penny
		posted on 1/23/2010 at 4:12 AM
		</div>
		<div class="comment_text"><p>Hey Ray -= check out my cfpropertyinspector on riaforge - I'm doing this here<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfpropertyextension.riaforge.org%2F%3AH_Kw7eztwL1Z4sM2kPPVNUBOTb4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfpropertyextension.riaforge.org/">http://cfpropertyextension....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721427">6</a> by Marko Simic
		posted on 1/23/2010 at 6:34 AM
		</div>
		<div class="comment_text"><p>Checkout CFC2UML (CFB Extension) <a href="http://disq.us/url?url=http%3A%2F%2Fcfc2uml.riaforge.org%3A3Ckw0PKmZH4Mu4p3G14nqonHTCw&amp;cuid=3321886" rel="nofollow noopener" title="cfc2uml.riaforge.org">cfc2uml.riaforge.org</a>.<br>Method "AbsoluteToDotPath" in CFC2UML.cfc.</p><p>There you'll see how to translate physical path to dot-delimited format, taking internal app mappings in consideration. There are 2 solutions depending of server type: Adobe CF or Railo 3.x. If anyone  know how to do it on OBD I'll be glad to implement support for that server too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721430">7</a> by Raymond Camden
		posted on 1/25/2010 at 5:13 PM
		</div>
		<div class="comment_text"><p>@Kevin - I downloaded your project - but can you tell me what part of the code handles the issue this blog entry covers - specifically getting component metadata from a random path?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721436">8</a> by Kevin Penny
		posted on 1/27/2010 at 3:18 AM
		</div>
		<div class="comment_text"><p>@Ray - <br>Well it might be a bit different in that I'm asking for a mapping (optional) and path from the user - which allows me to make the appropriate guess as to the path - another alternative I thought of but didn't implement is to use the mappings list from cfadmin, but I'd have to ask for server credentials and figured that would be a bit too intrusive.  A search for 'getComponentMetaData' will likely pull it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721434">9</a> by Ali
		posted on 3/3/2010 at 4:52 AM
		</div>
		<div class="comment_text"><p>@ray - you can add an alias to all your CFC's which has the full qualified dot-notation path.</p><p>I'm working on a project where I need to put that in for Flex, to consume CF services.</p><p>That way your MetaData extension will always have what you need in the "Alias" property.</p><p>Just a thought.</p><p>--Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721431">10</a> by Raymond Camden
		posted on 3/3/2010 at 7:49 PM
		</div>
		<div class="comment_text"><p>Sorry - an Alias? What do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721435">11</a> by Ali
		posted on 3/3/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>@ray -</p><p>I mean, if you have a cfc called myTest.cfc<br>and it's in a folder called  extensions/cfctest/handlers</p><p>In the component declaration using cfscript syntax you could say:</p><p>component alias="extensions.cfctest.handlers.myTest" displayname="test it ray"<br>{<br>// methods go in here<br>}</p><p>That way in your metadata you'll always get the dot path whenever you introspected it.</p><p>--Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721440">12</a> by Ali
		posted on 3/3/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>Ok sorry Ray, alias is only used if the CFC in question is going to be converted to an AS3 object for Flex or LiveCycle.</p><p>It doesn't really apply, then in this situation, I guess......</p></div>
	</div>
</div>
		