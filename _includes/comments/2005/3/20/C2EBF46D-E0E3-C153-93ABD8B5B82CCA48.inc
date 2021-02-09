
<div class="comment" id="c_1713617624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617624">1</a> by Steven Erat
		posted on 3/21/2005 at 9:39 AM
		</div>
		<div class="comment_text"><p>For anyone interested in adding Technorati features to BlogCFC, I've written a short how-to here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%2Fblog%2Findex.cfm%3Fmode%3Dalias%26alias%3DBlogCFCTechnorati%3A7Fh_Ai-UowJYW97Y8hbyjJ-b_t8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com/blog/index.cfm?mode=alias&amp;alias=BlogCFCTechnorati">http://www.talkingtree.com/...</a></p><p>This how-to was tested with BlogCFC 3.5.2, so references to line numbers or page names may differ in this new 3.6 version, but the how-to should still easily apply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617622">2</a> by PaulH
		posted on 3/21/2005 at 11:19 AM
		</div>
		<div class="comment_text"><p>ray, will <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fblog.zip%3AluEcCk5GEAIKJ-3bKfx3VTPo0vs&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/blog.zip">http://ray.camdenfamily.com...</a> be the d/l link from now on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617626">3</a> by Michael Dinowitz
		posted on 3/21/2005 at 11:25 AM
		</div>
		<div class="comment_text"><p>So how about replacing those ugly UUIDs with a short url or changing the whole thing to auto-number? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617625">4</a> by Raymond Camden
		posted on 3/21/2005 at 6:33 PM
		</div>
		<div class="comment_text"><p>Paul: Yes. <br>Mike: The UUID stuff simply makes it easier to support SQL Server, mySQL, and MS Access. Do not forget that you can use aliases for postings. You can also use url rewriting. I didn't want to do rewriting myself so that folks were available to do whatever kind of format they want.</p><p>As an FYI, a small bug fix will be released later today. If you pass a bad yeae (2005d), an error is thrown. The error is handled by the new error handler, but I want to make it handle the bad year better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617620">5</a> by O?uz Demirkap?
		posted on 3/21/2005 at 9:07 PM
		</div>
		<div class="comment_text"><p>Hi Raymend,</p><p>First of all thanks for your great effort!</p><p>I have some simple problems as I wrote you before.</p><p>- When I changed language file (<a href="http://disq.us/url?url=http%3A%2F%2Fmain_tr_TR.properties%3AwxscoKP-3viFlYYDuhhkPLuhQZc&amp;cuid=3321886" rel="nofollow noopener" title="main_tr_TR.properties">main_tr_TR.properties</a>) into Unicode on Windows, I got following error:</p><p>Cannot use the charset utf-8 because the file has a Byte Order Mark indicating it uses the charset UnicodeLittleUnmarked.</p><p>The error occurred in C:\CFusionMX7\wwwroot\org\hastings\locale\resourcebundle.cfc: line 51<br>Called from C:\CFusionMX7\wwwroot\org\hastings\locale\resourcebundle.cfc: line 67<br>Called from C:\CFusionMX7\wwwroot\blogcfc\Application.cfm: line 34<br>49 : 		&lt;/cfif&gt; <br>50 : 				<br>51 : 		&lt;cffile action="read" file="#arguments.rbFile#" variable="resourceBundleFile" charset="utf-8"&gt;<br>52 : 		<br>53 : 		&lt;cfloop index="rbIndx" list="#resourceBundleFile#" delimiters="#chr(10)#"&gt;</p><p>I have changed line 51 in resourcebundle.cfc as below and it is ok now.</p><p>&lt;cffile action="read" file="#arguments.rbFile#" variable="resourceBundleFile"&gt;</p><p>Just information.</p><p>- When I changed blog.ini file into Unicode to support my name in Turkish. I got following error.</p><p>Default isn't registered as a valid blog.</p><p>The error occurred in C:\CFusionMX7\wwwroot\org\camden\blog\blog.cfc: line 918<br>Called from C:\CFusionMX7\wwwroot\org\camden\blog\blog.cfc: line 58<br>Called from C:\CFusionMX7\wwwroot\blogcfc\Application.cfm: line 30<br>916 : 				hint="Throws errors."&gt;<br>917 : 		&lt;cfargument name="message" type="string" required="false" default=""&gt;<br>918 : 		&lt;cfthrow type="blog.cfc" message="#arguments.message#"&gt;<br>919 : 		<br>920 : 	&lt;/cffunction&gt;</p><p>Any suggestion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617623">6</a> by O?uz Demirkap?
		posted on 3/21/2005 at 9:24 PM
		</div>
		<div class="comment_text"><p>I would also suggest to save all templates in Unicode but with "Include Unicode Signature (BOM)".</p><p>Especially "layout.cfm" file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617627">7</a> by O?uz Demirkap?
		posted on 3/21/2005 at 9:27 PM
		</div>
		<div class="comment_text"><p>In layout.cfm file a syntax error on line.</p><p>&lt;link rel="alternate"" type="application/rss+xml" title="RSS" href="rss.cfm?mode=full" /&gt;</p><p>must be like:</p><p>&lt;link rel="alternate" type="application/rss+xml" title="RSS" href="rss.cfm?mode=full" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617628">8</a> by tonyoftheweegclan
		posted on 3/22/2005 at 12:30 AM
		</div>
		<div class="comment_text"><p>Ray, how would one ugrade without losing layout changes that we have made?</p><p>tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617630">9</a> by Oguz Demirkapi
		posted on 3/22/2005 at 12:36 AM
		</div>
		<div class="comment_text"><p>I think no way.</p><p>I just spent ~2 hours to apply my own design &amp; customizations into my blog with new version. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617634">10</a> by Ray Camden
		posted on 3/22/2005 at 12:39 AM
		</div>
		<div class="comment_text"><p>Tony: All the layout changes were simply the removal of the mapping. Ie, from /#app.root#/foo to /foo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617632">11</a> by tonyoftheweegclan
		posted on 3/22/2005 at 12:43 AM
		</div>
		<div class="comment_text"><p>orguz...</p><p>so, you had to "REWORK" your layout changes that were in existence prior to the upgrade?</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617639">12</a> by Ray Camden
		posted on 3/22/2005 at 12:45 AM
		</div>
		<div class="comment_text"><p>There should be no need to rework layout.cfm and podlayout.cfm. Just remove the mappings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617633">13</a> by Oguz Demirkapi
		posted on 3/22/2005 at 12:53 AM
		</div>
		<div class="comment_text"><p>If you need a new look with new design elements &amp; CSS etc. you need to work on it. But for standard BlogCFC layout, you just need to remove application root parameter in some files. But if you have standard code without customization, it is better to replace all code with new ones.</p><p>I have some changes on design etc. as I like and just because of that it costs a bit time.</p><p>Just check my blog: <a href="http://disq.us/url?url=http%3A%2F%2Fdemirkapi.net%3AW88NCqko9lTJc_ldnNzKL2kLAPA&amp;cuid=3321886" rel="nofollow noopener" title="http://demirkapi.net">http://demirkapi.net</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617638">14</a> by Raphael Anzenberger
		posted on 3/22/2005 at 7:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for your hard work and your willingness to share your tool.  I really appreciate!</p><p>I receive an error when trying to send a posting:<br>No SMTP server specified for CFMAIL</p><p>I added a server attribute to the CFMAIL tag in blog.cfc line 840, but no luck.  I can send emails find outside the blog application on this domain name.  My host is CrystalTech.</p><p>Let me know if I need to change something!</p><p>Thanks,</p><p>Raphael Anzenberger.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617640">15</a> by Dave Hill
		posted on 3/22/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>Hi, I cant see the form for posting messages using firefox, could be something I have missed but im not sure.  Has anyone else encountered this when applying new layout?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617636">16</a> by Ray Camden
		posted on 3/22/2005 at 8:02 PM
		</div>
		<div class="comment_text"><p>Raphael: The CFC is probably cached. Add reinit=1 to the URL.</p><p>Dave: There is no "new layout." All I did was remove the mapping call from layout tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617635">17</a> by Dave Hill
		posted on 3/22/2005 at 8:42 PM
		</div>
		<div class="comment_text"><p>Sorry, no, i was on bout my new layout!</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617642">18</a> by tonyoftheweegclan
		posted on 3/22/2005 at 10:10 PM
		</div>
		<div class="comment_text"><p>also, ray, one comment for the next version...</p><p>put the post button BEFORE the CANCEL button in the tab order, i cant tell you how many times, ive tabbed once off the subscribe checkbox, and hit the space bar, and CANCELLED a long post :(</p><p>sincerely yours :)<br>johnny effin usability</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617641">19</a> by raphael anzenberger
		posted on 3/23/2005 at 5:34 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the tip yesterday, it worked great!  Another question: I would like to use the multi-blog ability.  How do I go about implementing this?  I have not found too much info in the doc.</p><p>Many thanks!</p><p>Raphael.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617646">20</a> by Raymond Camden
		posted on 3/23/2005 at 7:58 PM
		</div>
		<div class="comment_text"><p>Raphael: This is covered in the doc. You basically need to duplicate the [Default] section in the ini file. So, [Blog2] with crap beneath it would define the second blog. You would have a second client folder, and you would edit the blogName variable in the Application.cfm file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617644">21</a> by Steve Walker
		posted on 3/24/2005 at 5:38 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is such a great learning tool for how to do CFCs the "right" way.  Thank you.</p><p>I saw Raphael's question about the server setting for cfmail.  I did the same thing he did only to find out that not only does it throw an error, it exposes your username and password for all the world to see (thank God for testing servers).  How do you set the server values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617649">22</a> by Raymond Camden
		posted on 3/24/2005 at 5:42 AM
		</div>
		<div class="comment_text"><p>Steve: To be honest - If I was building this from scratch I'd probably 'break out' the CFC a bit. Right now a bit too much is going on in that one CFC. I _do_ think my code in general is tight, but the organization of the CFC could be improved.</p><p>As for your error - the reason you see it is that the new error handler ALSO sends email. You need ot add server info there as well. Raphael, I missed that earlier. The reason you see the error is that the error template itself is throwing the error.</p><p>FYI, 3.6.1 will be released tonight (most likely).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617648">23</a> by Ray Camden
		posted on 3/24/2005 at 10:02 PM
		</div>
		<div class="comment_text"><p>FYI - the 3.6.2 release today will let you specify mailserver/mailusername/mailpassword in the ini file so you no longer need to mod my code to support a specific mail server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617647">24</a> by Rob Brooks-Bilson
		posted on 3/30/2005 at 4:59 AM
		</div>
		<div class="comment_text"><p>Ray, one other feature I'd like to see in a future release is Ping.  I know this was mentioned before, but it looks like both Steven Erat and Critter have implemented versions of this.  You might want to check out their work and possibly role one of the solutions into the core.</p><p>Critter's seems to be the most flexible:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftacfug.org%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3DBE1D13B0-36D1-E29A-87223EC24D93826D%3AtCnjYr66gwdqLIA1w5JhX2e5Re4&amp;cuid=3321886" rel="nofollow noopener" title="http://tacfug.org/blog/index.cfm?mode=entry&amp;entry=BE1D13B0-36D1-E29A-87223EC24D93826D">http://tacfug.org/blog/inde...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617650">25</a> by eric
		posted on 4/13/2005 at 6:02 PM
		</div>
		<div class="comment_text"><p>Hello;</p><p>Great site!  I am trying to set the blog up but I am not sure why I need a mapping.  I cannot get the blog to work, I am getting an error on Line 480 on the blog.cfc page as soon as I go to the index page.</p><p>If I were to set up the blog in a subdirectory on my site, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.hifispin.com%2Fblog%3AoR1GKs4IVahAwBB8tLX4QQVvp2o&amp;cuid=3321886" rel="nofollow noopener" title="www.hifispin.com/blog">www.hifispin.com/blog</a>, what would the directory structure be in that blog file?</p><p>Thanks,</p><p>Eric</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617651">26</a> by Raymond Camden
		posted on 4/13/2005 at 6:09 PM
		</div>
		<div class="comment_text"><p>eric - in the latest version you do not need a mapping. As for the error - ensure you have the very latest version as I've had a few releases since 3.6 (latest is 3.6.4 I believe)</p></div>
	</div>
</div>
		