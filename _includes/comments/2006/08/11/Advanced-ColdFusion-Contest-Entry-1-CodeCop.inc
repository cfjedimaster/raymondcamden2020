
<div class="comment" id="c_1713656168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656168">1</a> by Bastian Konetzny
		posted on 8/11/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>I like the charts, you quickly see what type of errors you have in your report. I should have done things like that in my submission :)</p><p>Nice one, slick an clean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656164">2</a> by Justice
		posted on 8/11/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Well I got it installed and running, you mentioned it didn't ask about database type Ray, but when it asked for a DSN there was a drop down right underneath with MS SQL, MySQL, etc.</p><p>I like how you can click right into highlited source code to view mistakes, and I really like how when you click on an error, it shows a list of all templates that use that error.  I have not made any rules yet, but I really like this so far!</p><p>I ran this against one of my projects, and one of the things it noticed right away is my use of the 'evaluate()' function.   I know thats generally a no-no, but how else would you get the value for a variably named variable?  ie Evaluate("URL.level#Numberformat(i,"0000")#")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656167">3</a> by Steve Bryant
		posted on 8/11/2006 at 5:40 PM
		</div>
		<div class="comment_text"><p>Justice,</p><p>URL["level#Numberformat(i,'0000')#"]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656158">4</a> by Raymond Camden
		posted on 8/11/2006 at 5:44 PM
		</div>
		<div class="comment_text"><p>Justice, I must have missed that. All I remembered was the DSN name. So ignore that comment.</p><p>FYI - Steve has a new zip. I have replaced the zip as of RIGHT NOW. If you downloaded, redownload. It fixes the bug I mentioned with a tag rule.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656169">5</a> by Justice
		posted on 8/11/2006 at 5:44 PM
		</div>
		<div class="comment_text"><p>Steve,</p><p>Oh duh, because the URL is actually a structure of values, I gotcha.</p><p>Thanks man!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656148">6</a> by Steve Bryant
		posted on 8/11/2006 at 5:50 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for all the feedback! I will try to get my documentation updated soon.</p><p>What you see for the DSN choice actually varies based on where the installation is. If CodeCop can find a list of datasources (if it is running on CFMX 6.1 or in the administrator of CFMX 7), then it will return a list of datasources for the supported database types.</p><p>If you add a new DataMgr.cfc for a new database type and refresh the code (by setting URL.reinit to 1), then the new database type will be supported (so you could add DataMgr_Ingres.cfc and the whole application would support Ingres).</p><p>Nonetheless, I should have documented that and plan to do so.</p><p>Justice,</p><p>Sorry for the brief answer. Basically all ColdFusion variable scopes are structure and can be accessed with structure notation as given. So, URl.myvar is the same as URL["myvar"].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656160">7</a> by Rob Brooks-Bilson
		posted on 8/11/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>Wow, Steve, that's a pretty slick implementation you have here.  Kudos.</p><p>Ray, I think this particular contest idea was really cool - not only as a learning exercise, but also because the resulting applications are really useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656166">8</a> by Raymond Camden
		posted on 8/11/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>I know it's bad form to agree with a compliment, but I will. If I had gotten only one entry, I'd be 100% pleased.</p><p>As an FYI, next Friday I'll have the second entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656170">9</a> by Dan Sorensen
		posted on 8/11/2006 at 7:38 PM
		</div>
		<div class="comment_text"><p>Is there a compiled list of CF best coding practices somewhere that we could use to make our rules?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656171">10</a> by Dan Sorensen
		posted on 8/11/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>Why is StructKeyExists() prefered over isDefined()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656152">11</a> by Rich Rein
		posted on 8/11/2006 at 8:11 PM
		</div>
		<div class="comment_text"><p>Has anyone got this working with an Access db?  I made a new mdb, set up the CF dsn, the tables were set up...but I get an error trying to load the CodeCop homepage (and am so far removed from working with Access that I can't for the live of me remember if the query should work or not)...</p><p>Error Executing Database Query.  <br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Syntax error (missing operator) in query expression 'chkRules.SeverityID = chkSeverities.SeverityID INNER JOIN chkCategories ON chkRules.CategoryID = chkCategories.CategoryID'.</p><p>The error occurred in D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Rules.cfc: line 101<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Rules.cfc: line 242<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Transfer.cfc: line 69<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\CodeCop.cfc: line 68<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\Application.cfm: line 73<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Rules.cfc: line 101<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Rules.cfc: line 242<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\Transfer.cfc: line 69<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\sys\CodeCop.cfc: line 68<br>Called from D:\inetpub\wwwroot\CFIDE\administrator\CodeCop\Application.cfm: line 73</p><p>99 : 	INNER JOIN	chkCategories<br>100 : 		ON		chkRules.CategoryID = chkCategories.CategoryID<br>101 : 	WHERE		RuleID = &lt;cfqueryparam value="#arguments.RuleID#" cfsqltype="CF_SQL_INTEGER"&gt;<br>102 : 	&lt;/cfquery&gt;<br>103 :</p><p>--------------------------------------------------------------------------------</p><p>SQL    SELECT RuleID,RuleName,RuleType,TagName,Regex,Description,allExtensions,UUID,CustomCode, chkSeverities.SeverityID,SeverityName,rank, chkCategories.CategoryID,CategoryName, '' AS Packages, '' AS Extensions, '' AS ExtensionNames FROM chkRules INNER JOIN chkSeverities ON chkRules.SeverityID = chkSeverities.SeverityID INNER JOIN chkCategories ON chkRules.CategoryID = chkCategories.CategoryID WHERE RuleID = (param 1)  <br>DATASOURCE   CodeCop <br>VENDORERRORCODE   -3100 <br>SQLSTATE   42000</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656155">12</a> by Scott Krebs
		posted on 8/11/2006 at 8:21 PM
		</div>
		<div class="comment_text"><p>Dan,<br>Read through:<br><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2006%2F2%2F8%2FAsk-a-Jedi-Checking-the-Query-String%3Ay4_6nMImX2ewy9_nfvu_vp7nP88&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2006/2/8/Ask-a-Jedi-Checking-the-Query-String">http://ray.camdenfamily.com...</a><br>and<br><a href="http://disq.us/url?url=http%3A%2F%2Fcorfield.org%2Fblog%2Findex.cfm%2Fdo%2Fblog.entry%2Fentry%2FisDefined_vs_structKeyExists%3A25zEciBfT7m1FVZLJeTFRMyVVTY&amp;cuid=3321886" rel="nofollow noopener" title="http://corfield.org/blog/index.cfm/do/blog.entry/entry/isDefined_vs_structKeyExists">http://corfield.org/blog/in...</a><br>for your answer. Surprised me too when Ray enlightened me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656154">13</a> by Steve Bryant
		posted on 8/11/2006 at 8:30 PM
		</div>
		<div class="comment_text"><p>Dan,</p><p>Good question about the compiled list of rules. I just made a blog entry to try to compile a list. Head on over there and make your suggestions!<br><a href="http://disq.us/url?url=http%3A%2F%2Fsteve.coldfusionjournal.com%2Fcoldfusion_coding_rules.htm%3AymTGx-jhoQtg5hEd9Qgxce2b5R4&amp;cuid=3321886" rel="nofollow noopener" title="http://steve.coldfusionjournal.com/coldfusion_coding_rules.htm">http://steve.coldfusionjour...</a></p><p>Rich,</p><p>I know I tested this on Access at some point in development, but I must have made some changes since then. I don't see anything in that SQL that stands out, but maybe I accidentally used a reserved word or something. I will check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656150">14</a> by Dan Sorensen
		posted on 8/11/2006 at 8:31 PM
		</div>
		<div class="comment_text"><p>Scott,</p><p>Thanks, that helps a lot! :-) (It's also disapointing, because I really like the simplicity and readability of isDefined().)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656151">15</a> by Steve Bryant
		posted on 8/11/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>It looks like the issue with Access is that it doesn't support multiple joins in a query without parenthesis to dictate processing order.</p><p>Which means that in order to support Access, I have to change all of my pretty inner joins that are cluttered up by nested parenthesis or change to a less clear comma delimited list of tables in the from clause and do the joins in the where clause.</p><p>I'm not happy with Access at the moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656157">16</a> by Peter Boughton
		posted on 8/11/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>&lt;rant&gt;<br>RE: The Evaluate() comment in the screenshot.</p><p>People always claim Evaluate is slower, and never offer any evidence to back it up.</p><p>I've done simple tests myself, comparing thousands of iterations of Evaluate("Form.#Var#") against Form[Var], and there was no notable difference between them.</p><p>Obviously Form[Var] is far more elegant, but I get irritated by people making speed claims without checking/offering proof - especially if the advice is being given from an authoritive source, such as a code checking application.<br>&lt;/rant&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656159">17</a> by Raymond Camden
		posted on 8/11/2006 at 9:26 PM
		</div>
		<div class="comment_text"><p>Peter, just to be absolutely clear. This contest is NOT about creating a bible of best practices. While that is the _result_, the contest is about the engine itself. I don't want to get into religous wars about best practices. :)</p><p>Check this for a view from a core CF engineer:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.sanmathi.org%2Fashwin%2F2006%2F07%2F24%2Fwhento-evaluate-and-iif%3AZFHRJMUM_1Z0LW5jOrztcppfN5o&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.sanmathi.org/ashwin/2006/07/24/whento-evaluate-and-iif">http://blogs.sanmathi.org/a...</a></p><p>"As has been noted often enough, evaluate() and iif() are not the most performant of functions, since they do need to dynamically compile the expressions that they’re being asked to process."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656156">18</a> by Peter Boughton
		posted on 8/11/2006 at 9:39 PM
		</div>
		<div class="comment_text"><p>Fair enough - I'd just been seeing the claim in quite a few places recently and couldn't contain myself any longer. :)</p><p>Thanks for that link though, it's a nice explanation, and has a good clear summary on when/not to use them...<br>&gt; In summary - use evaluate() and iif() in situations <br>&gt; where the expression to be evaluated remains static over <br>&gt; time. Using them for dynamic expressions will prove <br>&gt; inefficient, and may well negate any benefits that <br>&gt; static expressions enjoy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656153">19</a> by Gary Funk
		posted on 8/12/2006 at 1:39 AM
		</div>
		<div class="comment_text"><p>This just makes me happy to be a CF programmer. Our crowd is great.</p><p>Steve, thank you for sharing.</p><p>Ray, a big thank you to you too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656163">20</a> by Tom Bishop
		posted on 8/12/2006 at 11:16 AM
		</div>
		<div class="comment_text"><p>Erm, errors out on me:</p><p>cannot convert the value "" to a boolean</p><p>The error occurred in D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sys\Reviews.cfc: line 208<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sys\CodeCop.cfc: line 120<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 779<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 756<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 755<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 753<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 326<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 233<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\sebtags\sebForm.cfm: line 233<br>Called from D:\CFusionMX7\wwwroot\CFIDE\administrator\CodeCop\index.cfm: line 34</p><p>206 : 		&lt;cfloop query="qRules"&gt;<br>207 : 			&lt;!--- If this is a file that should be checked for this rule ---&gt;<br>208 : 			&lt;cfif allExtensions OR ListFindNoCase(ExtensionNames,ListLast(ListLast(FileInfo.FullName,"/"),"."))&gt;<br>209 : 				&lt;!--- Run check for this rule type ---&gt;<br>210 : 				&lt;cfset variables.RuleTypes[RuleType].checkRule(ReviewID,RuleID,FileInfo)&gt;</p><p>Anyone else had the same problem? Not sure if it's my dodgy cfc's I'm testing or if it's a problem with CodeCop...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656162">21</a> by Steve Bryant
		posted on 8/12/2006 at 4:53 PM
		</div>
		<div class="comment_text"><p>Tom,</p><p>It looks like a problem with CodeCop. I think I see what caused it.</p><p>Would you mind dropping me a line with your information so I can test it in a situation closely matching your?</p><p>Either on my web site or send me an email (my first name at my domain name).<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bryantwebconsulting.com%2Fcontact.cfm%3AfJnEIQSakbll7BzOcqTXBZPopPc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bryantwebconsulting.com/contact.cfm">http://www.bryantwebconsult...</a></p><p>If anyone else runs into trouble, let me know as well. I am hoping to have the first public beta out soon (feel free to use this copy until then).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656174">22</a> by Rob Brooks-Bilson
		posted on 8/12/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>Steve,</p><p>You may want to ping Steve Nelson (of Fusebox fame).  I remember way back in the day, he had a code checking tool as well.  Many of us (myself included) sent him ideas for rules at the time.  Perhaps he'd be willing to share...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656175">23</a> by Steve Bryant
		posted on 8/13/2006 at 1:37 AM
		</div>
		<div class="comment_text"><p>Rob,</p><p>That is a good idea. I will do that.</p><p>Tom,</p><p>I just uploaded a new build to my site that should fix issues with Access. The bad news is that you will have to use a different database or delete the "chk" tables from the one you are using in order for the fixes to be effective (CodeCop will recreate them correctly).</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bryantwebconsulting.com%2Fproducts%2Fcodecop.cfm%3Aox6kx9B-Rj5ZJpcKtuCjBbwRZkE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bryantwebconsulting.com/products/codecop.cfm">http://www.bryantwebconsult...</a></p><p>I am also hoping to create some real documentation as soon as I get time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656177">24</a> by Justice
		posted on 8/14/2006 at 4:12 PM
		</div>
		<div class="comment_text"><p>Just as a suggestion, maybe you could make an export/import function on your rule packages, so that people can share good rules they have written? =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656178">25</a> by Steve Bryant
		posted on 8/14/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>Justice,</p><p>Good idea!</p><p>Actually, that is there already (even in my original entry).</p><p>The packages page has an "Import Package" link that will allow you to import a package from an XML file.</p><p>If you edit a package, that page as an "Export Package" link which will export the XML for that package.</p><p>This will allow you to share packages and rules with other developers.</p><p>I also just put out a new build which fixes the problems with MS Access, improved the installation instructions, and adds CFC Introspection.<br><a href="http://disq.us/url?url=http%3A%2F%2Fsteve.coldfusionjournal.com%2Fcodecop_beta.htm%3Au6zoCv6HZYba-QpKb-_7iVdt25U&amp;cuid=3321886" rel="nofollow noopener" title="http://steve.coldfusionjournal.com/codecop_beta.htm">http://steve.coldfusionjour...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656179">26</a> by Justice
		posted on 8/14/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>well, I am going to blame it on the lack of coffee this morning.  I am working on a cup right now, and I wont post till its gone =)</p><p>Thanks for a very cool product, but I shudder when I run it against code I ran 4 years ago...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656182">27</a> by Tom Bishop
		posted on 8/14/2006 at 11:35 PM
		</div>
		<div class="comment_text"><p>Steve,</p><p>Great, your update works just fine. A great little application. I just hope it doesn't start handing out fines now. Have enough trouble on the roads.</p><p>Tom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656180">28</a> by Lola Lee Beno
		posted on 8/15/2006 at 1:42 PM
		</div>
		<div class="comment_text"><p>I, of course, had to download and try it out.  I'm using MySQL - 5.0.17 max.  I ran into a serious issue when I clicked on one of the files - got an SQL syntax error message.  I think as a general rule, if one is going to support a selected number of databases, these should at least be given an adequate test, and information placed in the documentation as to which database versions have been tested.</p><p>Another issue I have with this application is - not enough documentation.  What does this do, how can it help me do my job better, convince me why I should use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656181">29</a> by Steve Bryant
		posted on 8/15/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>I just uploaded a new build (10) which fixes the MySQL issue. I retested on Access and MS SQL. I haven't been able to test on PostGreSQL though. If anyone runs into trouble on that, I may need access to the database to test in order to fix it.</p><p>I know I need documentation for it. I just have to find the time to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656183">30</a> by Tom Bishop
		posted on 8/18/2006 at 9:15 AM
		</div>
		<div class="comment_text"><p>Lola, when you got the SQL error, did you make sure the MySQL service was running? The first time I tried it I got an error and was wondering what the hell was going on until I realised the service was started on my server machine. Doh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656184">31</a> by Rob Brooks-Bilson
		posted on 11/15/2006 at 2:47 AM
		</div>
		<div class="comment_text"><p>Hi Steve,</p><p>I just installed the latest version from your site and it's working pretty well.  I did notice an error, however, when I click on By Categories, By Files, or By Rules links in the report.</p><p>&lt;code&gt;<br> The column name (FileName_UCase) that you specified already exists in this query.<br>Column names must be unique.</p><p>The error occurred in C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 360<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 352<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 341<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 161<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 161<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\sebtags\sebTable.cfm: line 1<br>Called from C:\CFusionMX7\wwwroot\tools\CodeCop\review-rules.cfm: line 42</p><p>358 : 						&lt;cfset ArrayAppend(aSortVals,UCase(qTableData[ThisTag.qColumns[i].sortfield][CurrentRow]))&gt;<br>359 : 					&lt;/cfloop&gt;<br>360 : 					&lt;cfset QueryAddColumn(qTableData, "#ThisTag.qColumns[i].sortfield#_UCase",  aSortVals)&gt;<br>361 : 				&lt;/cfif&gt;<br>362 : 			&lt;/cfloop&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656186">32</a> by Steve Bryant
		posted on 11/15/2006 at 3:40 AM
		</div>
		<div class="comment_text"><p>Rob,</p><p>Thanks for the catch.</p><p>It looks like the newer version that I had available as an example implementation of DataMgr 2.0 Beta didn't have the error, so I made that the primary download for CodeCop.</p><p>As an aside, I haven't forgotten about this project. My spare time has been limited and mostly dedicated to DataMgr 2 lately. Hopefully I will get the install cleaned up and release CodeCop 1.0 in the somewhat near future.</p><p>Thanks,</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656187">33</a> by Thomas
		posted on 8/20/2007 at 5:48 PM
		</div>
		<div class="comment_text"><p>Access error:  Data type mismatch in criteria expression.</p><p>Error line: CodeCop\com\sebtools\DataMgr.cfc: line 1522</p><p>line 1522: &lt;cfquery name="qQuery" datasource="#variables.datasource#"&gt;&lt;cfloop index="i" from="1" to="#ArrayLen(aSQL)#" step="1"&gt;&lt;cfif IsSimpleValue(aSQL[i])&gt;&lt;cfset temp = aSQL[i]&gt;#Trim(PreserveSingleQuotes(temp))#&lt;cfelseif IsStruct(aSQL[i])&gt;&lt;cfset aSQL[i] = queryparam(argumentCollection=aSQL[i])&gt;&lt;cfswitch expression="#aSQL[i].cfsqltype#"&gt;&lt;cfcase value="CF_SQL_BIT"&gt;&lt;cfif aSQL[i].value&gt;1&lt;cfelse&gt;0&lt;/cfif&gt;&lt;/cfcase&gt;&lt;cfcase value="CF_SQL_DATE"&gt;#CreateODBCDateTime(aSQL[i].value)#&lt;/cfcase&gt;&lt;cfdefaultcase&gt;&lt;cfif ListFindNoCase(variables.dectypes,aSQL[i].cfsqltype)&gt;#Val(aSQL[i].value)#&lt;cfelse&gt;&lt;cfqueryparam value="#aSQL[i].value#" cfsqltype="#aSQL[i].cfsqltype#" maxlength="#aSQL[i].maxlength#" scale="#aSQL[i].scale#" null="#aSQL[i].null#" list="#aSQL[i].list#" separator="#aSQL[i].separator#"&gt;&lt;/cfif&gt;&lt;/cfdefaultcase&gt;&lt;/cfswitch&gt;&lt;/cfif&gt; &lt;/cfloop&gt;&lt;/cfquery&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656189">34</a> by Steve Bryant
		posted on 8/20/2007 at 5:58 PM
		</div>
		<div class="comment_text"><p>Thomas,</p><p>Ray's year old blog entry probably isn't the best place for support.</p><p>The best thing to do is go to the RiaForge page (listed below) and make sure you are running the latest version.</p><p>If you still have the bug, you can report it there or go to my site and fill out the contact form and I will be happy to see what I can do to help you out.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodecop.riaforge.org%2F%3AEIKETL2bO5c4Fmio0zcaU7wC0HU&amp;cuid=3321886" rel="nofollow noopener" title="http://codecop.riaforge.org/">http://codecop.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656188">35</a> by Jim
		posted on 7/14/2014 at 11:24 AM
		</div>
		<div class="comment_text"><p>While installing on CF11, I got following error.</p><p>After adding datasourcename and selecting MySQL ...</p><p>-------------------------------------------------------------------</p><p>The value returned from the StructKeyHasLen function is not of type numeric.</p><p>If the component name is specified as a return type, it is possible that either a definition file for the component cannot be found or is not accessible.</p><p>The error occurred in D:/sites/test/web/CodeCop/com/sebtools/DataMgr.cfc: line 2022<br>Called from D:/sites/test/web/CodeCop/sys/CodeCop.cfc: line 33<br>Called from D:/sites/test/web/CodeCop/Application.cfm: line 69<br>2020 : 						}<br>2021 : 						//Set alias (if exists)<br>2022 : 						if ( StructKeyHasLen(thisField,"alias") ) {<br>2023 : 							tmpStruct["alias"] = Trim(thisField["alias"]);<br>2024 : 						}</p><p>-------------------------------------------------------------------</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656190">36</a> by Steve Bryant
		posted on 7/16/2014 at 5:33 AM
		</div>
		<div class="comment_text"><p>Change the returntype on the StructKeyHasLen method from "numeric" to "boolean" and refresh the application.</p><p>Before ColdFusion 11, any boolean value also counted as a numeric value in a returntype (allowing me to use returntype="numeric" if I expected to return boolean, but wanted to leave my options open). In ColdFusion 11, a boolean does not count as numeric. Which makes sense, but breaks some code.</p><p>I'll try to post up an update to DataMgr on this in near future and an update to CodeCop eventually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656191">37</a> by Kostas
		posted on 9/10/2014 at 2:45 PM
		</div>
		<div class="comment_text"><p>I just installed the codecop from this blog and unfortunately i can not work with Coldfusion 10??? I created the datasource in MySQL and i got the message</p><p>Could not find the ColdFusion component or interface types.Reviews.</p><p>Ensure that the name is correct and that the component or interface exists.</p><p>The error occurred in C:/wamp/www/qstools/codecop/sys/Reviews.cfc: line 29<br>Called from C:/wamp/www/qstools/codecop/sys/CodeCop.cfc: line 132<br>Called from C:/wamp/www/qstools/codecop/sys/CodeCop.cfc: line 61<br>Called from C:/wamp/www/qstools/codecop/Application.cfm: line 73<br>27 : 	&lt;cfloop query="qRuleTypes"&gt;<br>28 : 		&lt;cfif name neq "base.cfc"&gt;<br>29 : 			&lt;cfset variables.RuleTypes[ListFirst(name,".")] = CreateObject("component","types.#ListFirst(name,'.')#").init(variables.Files,variables.Rules,variables.Issues)&gt;<br>30 : 		&lt;/cfif&gt;<br>31 : 	&lt;/cfloop&gt;</p><p>Any help would convenient to me???</p><p>Kind Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656193">38</a> by Kostas
		posted on 9/10/2014 at 6:40 PM
		</div>
		<div class="comment_text"><p>i followed instructions.txt inside Codecop folder and i have the problem</p><p>Element CONFIGSITE is undefined in a CFML structure referenced as part of an expression.</p><p>The error occurred in C:/wamp/www/qstools/codecop/Application.cfm: line 45<br>43 : &lt;/cfif&gt;<br>44 : <br>45 : &lt;cfset request.Paths = Application["CodeCop"].ConfigSite.getPaths()&gt;<br>46 : <br>47 : &lt;cfset SettingsData = Application["CodeCop"].SettingsMgr.getSettings()&gt;&lt;!--- Get settings data --</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656192">39</a> by Raymond Camden
		posted on 9/10/2014 at 6:42 PM
		</div>
		<div class="comment_text"><p>Can you please contact the author of this app? This post is *very* old and the code is probably going to need lots of updating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656194">40</a> by Steve Bryant
		posted on 9/10/2014 at 6:51 PM
		</div>
		<div class="comment_text"><p>You can fill out the form on the RIAForge page or the contact form on my site. I want to get CodeCop updated, but I am pretty behind on client work right now so it will probably be a little while.</p></div>
	</div>
</div>
		