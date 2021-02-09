
<div class="comment" id="c_1713666138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666138">1</a> by Beavis &amp; Butthead
		posted on 6/1/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>huh... huh... <br>Ray said "dump"<br>huh... huh...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666140">2</a> by Raymond Camden
		posted on 6/1/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>How dare you. Do you think I was trying to be silly with my title?</p><p>Oh wait.... I was. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666144">3</a> by Tom Mollerus
		posted on 6/1/2007 at 6:03 PM
		</div>
		<div class="comment_text"><p>Ray, sorry I can't look this up myself, but I can't seem to find CF8 reference docs anywhere. What's meant by the "console" as an output for cfdump?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666145">4</a> by Raymond Camden
		posted on 6/1/2007 at 6:12 PM
		</div>
		<div class="comment_text"><p>If you run CF as a service, then the console is a log file. But you can also run CF from the command line (console), and if you do, it will get output there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666142">5</a> by Matt Turner
		posted on 6/1/2007 at 6:21 PM
		</div>
		<div class="comment_text"><p>Definitely a step in the right direction, but I sure would like to see cfscript support added to cfdump, and all the tags for that matter.  Well we can always wrap them ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666141">6</a> by Rick Osborne
		posted on 6/1/2007 at 6:21 PM
		</div>
		<div class="comment_text"><p>I could see a use for the keys="3" attribute for when you are using a struct as an index into something else, like a query.  In cases where you don't know what the keys will be, then you can't specify which ones you want to see, but you might want to see just a few to ensure that you don't have some really dumb bug in your code.</p><p>For example:</p><p>&lt;cfquery datasource="dsn" name="People"&gt;<br>SELECT FirstName, LastName, SSN, omg, wtf, bbq, foo, bar<br>FROM People<br>&lt;/cfquery&gt;<br>&lt;cfset PeopleIndex=StructNew()&gt;<br>&lt;cfloop query="People"&gt;<br>&lt;cfset PeopleIndex[SSN]=CurrentRow&gt;<br>&lt;/cfloop&gt;<br>&lt;cfdump var="#PeopleIndex#" keys="5"&gt;</p><p>If I had made some really bad mistake in my loop, I wouldn't know what the keys were to look for, but if I had 1000 people in my query, I also wouldn't want to dump the whole thing out.  I just want to see enough to know that it looks generally correct.</p><p>(And before someone says that you can do this with a QoQ -- yes, you could, but this is faster.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666147">7</a> by Ben Nadel
		posted on 6/1/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>CFDump is awesome. And now, it is even awesomer :) I love the query column selection and the file output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666146">8</a> by Marc Esher
		posted on 6/1/2007 at 7:15 PM
		</div>
		<div class="comment_text"><p>for console, it'll write it to C:\ColdFusion8\runtime\logs\coldfusion-out.log, assuming c:\coldfusion8 is your coldfusion root.</p><p>it doesn't appear that this file is readable in the new CF Log Viewer panel through eclipse, though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666148">9</a> by Raymond Camden
		posted on 6/1/2007 at 7:31 PM
		</div>
		<div class="comment_text"><p>It isn't a "standard" cf log Marc. By "standard" I mean CSV. It is more a dump type log if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666153">10</a> by Michael Long
		posted on 6/1/2007 at 8:55 PM
		</div>
		<div class="comment_text"><p>Too bad they didn't add an option to not expand nested object/cfc references. Many frameworks reference other objects, which in turn reference still other objects like a factory which may contain references to cached objects. Try dumping one of those.</p><p>And not to mention circular references where object A references object B  which has a reference to object A.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666156">11</a> by Raymond Camden
		posted on 6/1/2007 at 9:01 PM
		</div>
		<div class="comment_text"><p>Michael - you do know there is an EXPAND attribute, right? It has been in there since cf6 I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666154">12</a> by Michael Long
		posted on 6/1/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>Unless I'm wrong, setting expand=no only hides the data, yes? All of the nested data is still generated and downloaded, waiting to be expanded manually using the javascript functionality.</p><p>As such, doing a cfdump on, say, a reactor framework object will still result in downloading half the framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666155">13</a> by Raymond Camden
		posted on 6/1/2007 at 10:32 PM
		</div>
		<div class="comment_text"><p>True dat. Sorry I misread you. Well, a dump is a dump. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666161">14</a> by sal
		posted on 6/3/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>freakin wicked!! I'm diggin the show and hide attribute, thats fo sho! And as far as dumping into a file, damn I could have used that plenty of times, on previous projects using the reactor ORM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666158">15</a> by Justin Carter
		posted on 6/4/2007 at 5:34 AM
		</div>
		<div class="comment_text"><p>I think we have more ways to dump debugging info than we can poke a stick at :P I did a quick post this morning on dumping JS debug info using the new Ajax Logger:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.madfellas.com%2Fblog%2Findex.cfm%2F2007%2F6%2F3%2FColdFusion-8-Ajax-Logger%3AR6FMCnBOQoWYzmIiUpOVhWawXWs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.madfellas.com/blog/index.cfm/2007/6/3/ColdFusion-8-Ajax-Logger">http://www.madfellas.com/bl...</a></p><p>It's dump'o'rific :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666157">16</a> by MrBuzzy
		posted on 6/4/2007 at 11:14 AM
		</div>
		<div class="comment_text"><p>Ray, there is a way to view the live console output even when running CF as a service. Co-incidently I recently blogged about this here: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.mrbuzzy.biz%2F%3Fp%3D8%3A3wltELip9yu7FboseobMt1IVy14&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.mrbuzzy.biz/?p=8">http://blog.mrbuzzy.biz/?p=8</a><br>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666159">17</a> by Raymond Camden
		posted on 6/4/2007 at 3:46 PM
		</div>
		<div class="comment_text"><p>Nicde tip there, MyBuzzy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666160">18</a> by Mary Jo
		posted on 6/8/2007 at 6:02 PM
		</div>
		<div class="comment_text"><p>Any chance they got around to fixing it to be XHTML compliant? It's really annoying when you use it on a page that has an XHTML strict doctype and all the styles disappear as a result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666163">19</a> by Paul Dynan
		posted on 9/14/2009 at 10:47 PM
		</div>
		<div class="comment_text"><p>Is there a way to put the results of a CFDump into a variable?  I want to insert the contents into a database (building on the error handling I was asking about last week).  I'd like to keep the formatting that comes in CFDump when we retrieve the results later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666167">20</a> by Paul Dynan
		posted on 9/14/2009 at 11:25 PM
		</div>
		<div class="comment_text"><p>Never mind...looks like my idea light is florecent, and it needed to flicker on:</p><p>&lt;CFSAVECONTENT VARIABLE="varApplication"&gt;<br>    &lt;CFDUMP VAR="#Application#" LABEL="Application"&gt;<br>&lt;/CFSAVECONTENT&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666162">21</a> by Raymond Camden
		posted on 9/14/2009 at 11:43 PM
		</div>
		<div class="comment_text"><p>Just be warned - when you cfdump, a request variable is used to determine the CSS should be output. The 2nd-N time you run cfdump then the CSS is not used. In order to ensure you wrap the CSS, you would need to check for the existence of the Request variable and struct delete it before running the cfdump.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666166">22</a> by Paul Dynan
		posted on 9/14/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>It seemed to work fine in my initial tests.</p><p>I used the above to put the results in a SQL text column using CFQueryParam.  I then do a simple SELECT query, and output using <br>&lt;CFOUTPUT&gt;#myQuery.colApplication#&lt;/CFOUTPUT&gt;.</p><p>The results come out looking identical to original CFDump, and still collapse on click, too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666164">23</a> by Raymond Camden
		posted on 9/15/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>Did you test with a cfdump somewhere earlier in the request, _before_ the one you wrap/save?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666170">24</a> by Paul Dynan
		posted on 9/15/2009 at 12:09 AM
		</div>
		<div class="comment_text"><p>I just tested, and it still seems fine.  I do the inserts on my site-wide error page.  I have debugging off, no outptu dumps, and nothing other than a text message on the screen ("Sorry for the error...").</p><p>On a separate page, in a separate browser, I used the select and output, and it works great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666169">25</a> by Raymond Camden
		posted on 9/15/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>Ah, maybe they changed it to always dump the CSS.</p><p>Tested - yep. What's odd is that they still add the request variable, cfdumpinited, but they don't use it. I"ll file a bug report on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666168">26</a> by Paul Dynan
		posted on 9/15/2009 at 12:16 AM
		</div>
		<div class="comment_text"><p>As long as the bug fix doesn't fix how great it's working now ;)</p><p>Btw, all the of alerts I've gotten from this post today come back as "Delievery Failure" ("Reason: Recipient spam or content filter rejected the message").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666171">27</a> by Raymond Camden
		posted on 9/15/2009 at 12:17 AM
		</div>
		<div class="comment_text"><p>BlogCFC does comment emails by sending TO everyone who subscribed FROM the subscriber. Someone here has a bad email address (this is an old entry) so that's why you get the bounce backs.</p></div>
	</div>
</div>
		