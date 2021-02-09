
<div class="comment" id="c_1713649031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649031">1</a> by Terrence Ryan
		posted on 1/12/2006 at 8:15 AM
		</div>
		<div class="comment_text"><p>Why would you use a custom tag for header/footer display as opposed to a cfc with functions with output set to "true"?  This question comes up where I work every once in a while where I work, and I'ver never had a reason for one versus another.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649037">2</a> by Jeff Coughlin
		posted on 1/12/2006 at 6:52 PM
		</div>
		<div class="comment_text"><p>Terrence,</p><p>This is of course a debatable answer, but many folks (including me) believe that a CFC should include logic only (I never set output to true except for debugging during development).  Instead it is preferred to treat the CFC like a black box where you put in values it requires and it outputs values you expect.  Then you can apply said values to your output pages (cfm files).</p><p>There's no "rule" that says you have to follow this method and I'm not a stickler to those who wish to output within CFCs (as long as they don't work for me ;)).  One of the nice things about ColdFusion is that you can code the way you want most of the time (like outputting within CFCs) even if its not the favored method.</p><p>-----<br>Hehe.  I expect to get hate messages from the hard core OO zealots (or strongly-typed framework users) who shun away from outputting within CFCs.  Just please remember that I'm on your side :).  I'm just acknowledging the fact that ColdFusion lets the programmer be pretty versatile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649036">3</a> by Raymond Camden
		posted on 1/12/2006 at 7:03 PM
		</div>
		<div class="comment_text"><p>Terrance, I think Jeff answered it. Also - something that includes, UDFs, and CFC's can't do is wrap. So my templates look like this normally:</p><p>&lt;cfmodule template="/tags/layout.cfm" title="Home"&gt;<br>content here<br>&lt;/cfmodule&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649032">4</a> by Jeff Houser
		posted on 1/12/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>I'm speaking on this sort of thing at CFUnited.  ( And CFObjective ).</p><p> One other thing that cfmodule can do (that includes, UDFs, and CFCs can't) is nested tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649034">5</a> by Raymond Camden
		posted on 1/12/2006 at 7:42 PM
		</div>
		<div class="comment_text"><p>Hey Jeff, a recommendation. Nested tags are one of those things that I tell people are cool - but rarely used. One good example of a nested tag though is a DataTable custom tag I wrote. The purpose is to create a grid of data with pagination and sorting built in. I use nested tags to allow you to define columns. If you download Galleon you can see an example of that. I find it to be a good example. (Although I think the Galleon version is modded quite a bit.) Anyway - just a suggestion. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649039">6</a> by Terrence Ryan
		posted on 1/12/2006 at 7:59 PM
		</div>
		<div class="comment_text"><p>Okay so we're talking philosophic/stylistic concerns versus any performance reasons.  That makes sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649040">7</a> by Jeff Houser
		posted on 1/12/2006 at 8:21 PM
		</div>
		<div class="comment_text"><p>Ray, I'm not actually sure what you were suggesting.  ;)</p><p> I've never needed to use a nested tag.  But, if needed, it is not a functionality you can get from UDFs or CFCs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649041">8</a> by Teddy
		posted on 1/12/2006 at 8:22 PM
		</div>
		<div class="comment_text"><p>I think encapsulation can be used in many different ways that style and philosophy will keep a good blog alive.  However, if the scope (not variable scope) of the encapsulation is trying to achieve too much, then the style/philosophy needs to go through the scientific method again.  Planning up front for precise functionality of an encapsulated piece of code is possible, but usually encapsulation is a refinement process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649043">9</a> by Raymond Camden
		posted on 1/12/2006 at 8:27 PM
		</div>
		<div class="comment_text"><p>Sorry Jeff - I thought you meant you were speaking on CFCs, UDFs, and Custom Tags together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649044">10</a> by Jeff Houser
		posted on 1/12/2006 at 8:57 PM
		</div>
		<div class="comment_text"><p>re-reading my initial post, I actually should have said</p><p> "One other thing that CUSTOM TAGS can do (that includes, UDFs, and CFCs can't) is nested tags."</p><p> I apparently had a brain misfire that resulted in the typo.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649033">11</a> by Adam Ness
		posted on 1/13/2006 at 5:45 AM
		</div>
		<div class="comment_text"><p>One advantage of &lt;cffunctions&gt; over Includes and Modules is the significant savings in object instantiation.  ColdFusion compiles each of your .cfm files into an object, which it then passes data back and forth to.  When you &lt;cfinclude&gt; a template, or when you use &lt;cfmodule&gt; to pull a template in, ColdFusion has to instantiate that Object, pass the data in, process the request, and then destroy the object.  One at a time, this isn't a big deal, but I once worked someplace that used some very table-heavy data views, and we'd often see code like this:</p><p>&lt;table&gt;<br>&lt;cfinclude template="tableHead.cfm"&gt;<br>&lt;cfloop query="foo"&gt;<br>  &lt;cfinclude template="tableRow.cfm"&gt;<br>&lt;/cfloop&gt;<br>&lt;/table&gt;<br>.<br>.<br>.</p><p>By converting the tableRow.cfm into a &lt;cffunction&gt; we were able to trim about a half a second from queries that were returning more than a hundred or so lines.</p><p>Lesson I learned from this: if you're working in tight loops, don't use &lt;cfinclude&gt;.  It'll cost you a lot of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649038">12</a> by Will
		posted on 1/13/2006 at 5:52 AM
		</div>
		<div class="comment_text"><p>I've been using cfc's for my layouts and I really feel comfortable doin' it that way.</p><p>showHeader(), showLeftMenu(), showFooter(), listProducts(), etc.</p><p>It's really versatile and feels pretty darn natural if you love cfc's.</p><p>As for the output or no output from a cfc .... Heck, It's doesn't bother me a bit!  :)</p><p>my two cents,<br>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649042">13</a> by Jeff Houser
		posted on 1/13/2006 at 6:24 AM
		</div>
		<div class="comment_text"><p>Adam,</p><p> I don't think you said what you meant to say.  How could moving a query out of an include and into a function trim off time from the query?  I think you meant that moving the code from an include to a function made the CF code bad.</p><p> I'll also add, to no one in particular, that many people who use CFCs will create the CFC instance once (using CreateObject or cfobject), and then just call multiple methods off that CFC.</p><p>Will,</p><p> Normally I'd side with Jeff C when he said that CFCs are best for business logic, however I do not have a problem with CFCs designed strictly for presentation logic.  I only have a problem with CFCs that mix presentation and business logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649035">14</a> by Will
		posted on 1/13/2006 at 6:34 AM
		</div>
		<div class="comment_text"><p>yep, gotcha.</p><p>For products I'll have a productDAO.cfc, then a productDisplay.cfc. The template calls productDAO for getProducts(), then calls productDisplay.cfc, passing in the getProducts query as an argument.</p><p>I also wrap the presentation code around the display call, keeping look'n'feel out of the cfc. And/or pass in a class as an argument.</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649045">15</a> by Adam Ness
		posted on 1/13/2006 at 10:23 AM
		</div>
		<div class="comment_text"><p>Jeff,</p><p>I actually meant what I said: by moving the code that was repeated out of an include, and into a function, I realized significant speed gains.  I think you might have misunderstood which part of the code was better off in functions though: the "TableRow.cfm" was the one that was translated into a function for the most significant speed gains.  Basically, &lt;cfincluding&gt; a file incurrs a lot more overhead than calling a &lt;cffunction&gt;, whether it's in a CFC or just part of a function library.</p><p>As to mixing logic and display, a lot of my history comes from the PHP/Smarty world, so I tend to think that the logic should be almost entirely contained in the CFC files, and the display should be contained in the CFM files, but I admit it's purely a preferential thing.</p></div>
	</div>
</div>
		