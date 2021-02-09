
<div class="comment" id="c_1713675223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675223">1</a> by Glen
		posted on 12/7/2007 at 1:23 AM
		</div>
		<div class="comment_text"><p>We're actually having all kinds of trouble getting Server Monitor up and running.  Got any tips?  Basically, the movie loads, but nothing ever appears on the screen.  Several people said they've solved the problem, but never post any details :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675225">2</a> by Michael White
		posted on 12/7/2007 at 2:12 AM
		</div>
		<div class="comment_text"><p>but you have to have enterprise version of CF8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675230">3</a> by Will Swain
		posted on 12/7/2007 at 2:42 AM
		</div>
		<div class="comment_text"><p>Ray, I've tried your sample code, but I get the following error:</p><p>The getAdminHash method was not found.</p><p>Either there are no methods with the specified method name and argument types, or the getAdminHash method is overloaded with argument types that ColdFusion cannot decipher reliably. ColdFusion found 0 methods that matched the provided arguments. If this is a Java object and you verified that the method exists, you may need to use the javacast function to reduce ambiguity.</p><p>What's interesting is this:</p><p>ERROR!! - struct <br>COLUMN 0  <br>ID CF_STRUCTBEAN  <br>LINE 29  <br>RAW_TRACE at cfadministrator2ecfc1165008047$funcLOGIN.runFunction(C:\blackstone_updates\cfusion\wwwroot\CFIDE\adminapi\administrator.cfc:29)  <br>TEMPLATE C:\blackstone_updates\cfusion\wwwroot\CFIDE\adminapi\administrator.cfc  <br>TYPE CFML</p><p>C:\blackstone_updates is not a folder that exists on my server. Any ideas?</p><p>Thanks as always</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675226">4</a> by Raymond Camden
		posted on 12/7/2007 at 3:00 AM
		</div>
		<div class="comment_text"><p>Glen - sounds like maybe a bad Flash client install.</p><p>Will - Odd - that call is standard CF Admin API type stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675224">5</a> by Marc Esher
		posted on 12/7/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>with the blackstone thing, try checking your neo-runtime.xml config file and see if it's pointing to that directory instead of your webroot. Failing that, possibly try searching (via eclipse or textpad or some such thing) all the XML files under your cf install root for "blackstone".</p><p>I've run into several of these weird pathing things on cf8, usually pointing to the "e" drive, and it always ended up being a config file that, for whatever reason, had the wrong info.</p><p>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675229">6</a> by Will Swain
		posted on 12/7/2007 at 2:46 PM
		</div>
		<div class="comment_text"><p>Hmmm, no mention of that directory in the neo-runtime.xml file, and no mention in any of the files in the cf install root either.</p><p>Very strange.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675232">7</a> by Glen
		posted on 12/7/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>Michael -</p><p>We do have the enterprise version of CF8, so that's ruled out.</p><p>Ray -</p><p>Only if we have a bad Flash client install on 6 different machines.</p><p>I'm going to try some other things as well, but at this point, it looks like server monitor is a no go... :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675227">8</a> by Glen
		posted on 12/7/2007 at 6:45 PM
		</div>
		<div class="comment_text"><p>The specific error we're getting trying to load up the swf:</p><p>Either the Macromedia application server(s) are unreachable or none of them has a mapping to process this request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675233">9</a> by Raymond Camden
		posted on 12/7/2007 at 7:09 PM
		</div>
		<div class="comment_text"><p>Glen - at this point, I'd call up Adobe support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675234">10</a> by Dietmar
		posted on 2/15/2013 at 7:16 PM
		</div>
		<div class="comment_text"><p>Hi</p><p>I got all that Blackstone stuff up as well when being unable to access the coldfusion administrator in CF MX7, although the server itself otherwise worked OK and served up my own pages with no problem - just not the administrator.</p><p>Also other key tags (for other's benefit):</p><p>The error occurred in Application.cfm: line 113<br>The web site you are accessing has experienced an unexpected error</p><p>So for others who can't access the coldfusion adminstrator, it might be:</p><p>See if the file component.cfc is in the wwwroot/web-inf/cftags/ directory of your Coldfusion installation. It is zero bytes - they can get removed by system cleaners (like mine did!) If it's not there, just create a file with that name in notepad or something - with nothing in it, just save it as a filename in the specified directory.</p><p>This was driving me crazy!</p></div>
	</div>
</div>
		