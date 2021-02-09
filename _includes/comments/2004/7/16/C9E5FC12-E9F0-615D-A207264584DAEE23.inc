
<div class="comment" id="c_1713615971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615971">1</a> by Tina
		posted on 7/21/2004 at 6:15 AM
		</div>
		<div class="comment_text"><p>this is great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615970">2</a> by David K
		posted on 7/21/2004 at 9:59 PM
		</div>
		<div class="comment_text"><p>The Access databases included with the download do not have the correct schema. I created an Access DB based on the schema contained in "mysql.sql" and everything worked fine.</p><p>Thanks for your continued contributions, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615974">3</a> by Raymond Camden
		posted on 7/21/2004 at 10:23 PM
		</div>
		<div class="comment_text"><p>Ooops - I knew that - and coulda _sworn_ I blogged it, but I forgot. It will be ready for final of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615973">4</a> by stylo
		posted on 7/22/2004 at 2:43 PM
		</div>
		<div class="comment_text"><p>I can't figure out how to set this up, can you help?</p><p>I set up the Access db fine. I moved the org folder into the client folder as it says to do but I then moved everything from client up into "blog" and changed the default in the ini to:<br>blogDBType=MSACCESS (Correct?)<br>blogURL=http://root/blog/index.cfm</p><p>I got error:  Could not find the included template /blogdev/tags/scopecache.cfm</p><p>OK, I then saw that I missed that bit about the application file change. Set application.root to "blog" and now I get 1/2 a page then the following error:</p><p>************<br> Error Executing Database Query.<br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Too few parameters. Expected 4.</p><p>The error occurred in F:\blog\org\camden\blog\blog.cfc: line 646<br>Called from F:\blog\includes\pods\recent.cfm: line 17<br>Called from F:\blog\tags\layout.cfm: line 60<br>Called from F:\blog\index.cfm: line 160<br>Called from F:\blog\org\camden\blog\blog.cfc: line 646<br>Called from F:\blog\includes\pods\recent.cfm: line 17<br>Called from F:\blog\tags\layout.cfm: line 60<br>Called from F:\blog\index.cfm: line 160</p><p>644 : 			<br>645 : 			order by 	tblblogentries.#arguments.params.orderBy# #arguments.params.orderByDir#<br>646 : 			&lt;cfif structKeyExists(arguments.params,"maxEntries") and instance.blogDBType is "MYSQL"&gt;limit #arguments.params.maxEntries#&lt;/cfif&gt;<br>647 : 		&lt;/cfquery&gt;<br>648 : 		<br>******************</p><p>Does it think I'm using mysql? What to do?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615976">5</a> by Raymond Camden
		posted on 7/22/2004 at 3:10 PM
		</div>
		<div class="comment_text"><p>stylo - are you using the default blog? It looks like your code may be using the wrong blog in the ini file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615983">6</a> by stylo
		posted on 7/22/2004 at 3:25 PM
		</div>
		<div class="comment_text"><p>BTW, regarding the css file:</p><p>-I saw there's a js comment in the css file. Need to change to a css comment.</p><p>-Trebuchet MS should be in quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615989">7</a> by stylo
		posted on 7/22/2004 at 3:26 PM
		</div>
		<div class="comment_text"><p>&gt;&gt;are you using the default blog</p><p>I guess so. How would I know? I didn't do anything other than what I noted above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615980">8</a> by Raymond Camden
		posted on 7/22/2004 at 3:59 PM
		</div>
		<div class="comment_text"><p>Stylo, look in the application file. Look for the line that says, change this if you dont want the default blog. What is the value of the variable? Then look for that in the ini file and make sure you are using the right dbtype there.</p><p>Also... heh ... what IS a proper CSS comment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615978">9</a> by stylo
		posted on 7/22/2004 at 4:56 PM
		</div>
		<div class="comment_text"><p>seems right:</p><p>appl. file: blogname = "Default"</p><p>[default] <br>blogDBType=MSACCESS</p><p>******</p><p>css comment is the multiline js comment: /* note */</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615985">10</a> by stylo
		posted on 7/22/2004 at 5:00 PM
		</div>
		<div class="comment_text"><p>Sorry for the multiple posts here, but is it maybe the post above:</p><p>"The Access databases included with the download do not have the correct schema. I created an Access DB based on the schema contained in "mysql.sql" and everything worked fine."</p><p>Do I have to change the db somehow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615977">11</a> by Raymond Camden
		posted on 7/22/2004 at 5:25 PM
		</div>
		<div class="comment_text"><p>Absolutely. The Access db in the install folder isn't proper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615988">12</a> by stylo
		posted on 7/22/2004 at 5:36 PM
		</div>
		<div class="comment_text"><p>Well, I looked at the names in the mysql.sql as noted above, and seems they match the Access names used, so I guess I'll just wait for the final release. Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615987">13</a> by stylo
		posted on 7/22/2004 at 5:40 PM
		</div>
		<div class="comment_text"><p>Oh, I see, tblblogentries is missing a few...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615986">14</a> by Ian Winter
		posted on 7/23/2004 at 1:15 PM
		</div>
		<div class="comment_text"><p>Here's the apache rewrite code if anyone wants it as well. Create (or modify) an .htaccess file in your root directory:</p><p>RewriteEngine on<br>RewriteCond %{REQUEST_URI} ^/go/([aA-zZ]*)<br>RewriteRule ^(.*) /index.cfm?mode=alias&amp;alias=%1  [L]</p><p>If you only want numeric aliases pop [0-9] where [aA-zZ] is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615984">15</a> by Ian Winter
		posted on 7/23/2004 at 5:54 PM
		</div>
		<div class="comment_text"><p>&lt;more&gt; doesn't appear to be working? I've altered the way it displays the body but that shouldn't affect it should it?</p><p>Isn't more something that should get sorted when the entry goes to the DB?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615982">16</a> by Raymond Camden
		posted on 7/23/2004 at 6:12 PM
		</div>
		<div class="comment_text"><p>So as not to lose the HTML in the comment post, I'll will use X for both the less than and greater than sign, ok? You simply forgot the last slash. You need to use Xmore/X for it to work right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615981">17</a> by Ian Winter
		posted on 7/23/2004 at 8:36 PM
		</div>
		<div class="comment_text"><p>Ahh, cool, did the trick. FYI- Just checked in the documentation (with 3.5 zip) and it only says use (using X) XmoreX not Xmore/X.</p></div>
	</div>
</div>
		