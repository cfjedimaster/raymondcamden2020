
<div class="comment" id="c_1713618981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618981">1</a> by Wayne Graham
		posted on 7/1/2005 at 7:51 PM
		</div>
		<div class="comment_text"><p>I've been experimenting with using this in an academic setting as an outreach mechanism for our library. Right now we're running three blogs off of this software (with a typical subscription rate of about 500+-), and so far we've not run into any type of scaling that can be traced to the software.</p><p>I do have a couple of suggestions that would make my life easier in supporting these blogs though; first, it would be nice to have a panel that would allow one to create new blogs based on the default template. Right now I have an ANT task that does this, but requires a new configuration file for each blog.</p><p>Second, instead of an ini file, it would be nice to have this as an XML file. I think it's far easier to see the items that need to be edited in my XML viewer than they are in a text editor.</p><p>Lastly, updating is a problem. It would be nice if there could be a base set of files that other blog instances could use, and the only items in the blog folders would be an application and index file that then got the rest of the display information from a central core.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618986">2</a> by Scott Stroz
		posted on 7/4/2005 at 7:07 PM
		</div>
		<div class="comment_text"><p>Ray - FYI, something seems to be awry with your RSS feeds.</p><p>Using live bookmarks in FireFox, the only item that shows up is 'Verity Tip' dated June 23, 2005.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618991">3</a> by Damon Gentry
		posted on 7/6/2005 at 12:58 AM
		</div>
		<div class="comment_text"><p>I am also seeing the same problem Scott Stroz is having.  This is happening on all three of my systems (home, laptop, and office).  I am not seeing this on other blogs powered by BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618990">4</a> by Raymond Camden
		posted on 7/10/2005 at 6:31 AM
		</div>
		<div class="comment_text"><p>Damon: fixed. Will update the beta zip on Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618992">5</a> by Matt Eash
		posted on 7/11/2005 at 7:48 PM
		</div>
		<div class="comment_text"><p>I had to change the code to have 2 blogs running simultaneously under the same CFApplication, but they both needed access to different Resource files.</p><p>You store a common Blog object and a common Resource object in memory for all blogs.  I modified this to store all objects in application.["#blogname#"] instead of just application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618997">6</a> by Chris Rogers
		posted on 7/11/2005 at 11:08 PM
		</div>
		<div class="comment_text"><p>Hey Ray, question for you within the BlogCFC would it be easy to extend the app to allow for files to be uploaded with a Blog and subsequently store against the UUID for an individual Blog?</p><p>Also, has any one experimented with doing the above and possibly beign able to provide access to the uploaded files from within the RSS feeds?</p><p>Thanks in Advance,<br>Chris</p></div>
	</div>
</div>
		