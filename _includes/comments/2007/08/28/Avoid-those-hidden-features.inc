
<div class="comment" id="c_1713670983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670983">1</a> by Chris Dawes
		posted on 8/29/2007 at 7:44 AM
		</div>
		<div class="comment_text"><p>While I agree with your sentiment, I don't agree with the concept really. Even documented tags get depreciated and changed between versions. CFCHART and CFGRAPH for example.</p><p>Instead we should be advocates for better coding practices. For example instead of saying 'don't use the admin objects', you should instead build version specific libraries for using the admin api and alike:</p><p>lib_cfusion.cfc -&gt; the library you use to run coldfusion specific functions<br>lib_bdragon.cfc -&gt; the library you use to run bd specific functions<br>lib_cfusion_7.cfc -&gt; uses the coldfusion 7 libraries<br>lib_cfusion_8.cfc -&gt; uses the coldfusion 8 libraries<br>lib_cfusion_8_admin.cfc - version 8 admin api library.</p><p>etc</p><p>This way if the api changes all you need to do is create a cfc for the new version and pass the version as part of the arguments for each function.</p><p>This is the way a lot of javascript libraries work, why not implement it in coldfusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670982">2</a> by Chris Dawes
		posted on 8/29/2007 at 7:48 AM
		</div>
		<div class="comment_text"><p>I should have mentioned that the lib_cfusion.cfc is extended by the lib_cfusion_8.cfc and lib_cfusion_8.cfc is extended by lib_cfusion_8_admin.cfc</p><p>lib_cfusion.cfc<br> |_ lib_cfusion_8.cfc<br> . |_ lib_cfusion_8_admin.cfm</p><p>You could just have two levels really, it's up to you. The functions used are in the lib_cfusion.cfc : eg &lt;ctmmffdump&gt; cfscript replacement - which has difference attributes from v7 to v8.</p><p>I'll post more on my blog later today (AU time)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670984">3</a> by Raymond Camden
		posted on 8/29/2007 at 2:27 PM
		</div>
		<div class="comment_text"><p>I don't quite think we are on the same page here. I never said to not use documented tags. I don't think there is anything wrong with that. Deprecated tags should be avoided, but they still work. I'm talking about stuff that is NOT documented and  is not guaranteed to work. Shoot - parameterExists still works and has been deprecated for over 5 years.</p><p>This has nothing to do with coding practices. It's really about just following the "rules", the rules being the docs.</p><p>You are basically saying it IS ok to use the admin objects, but only if you run them in an environment that matches the CF version. I say it is never ok and should be voided. Period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670985">4</a> by Mark Mandel
		posted on 8/30/2007 at 2:53 AM
		</div>
		<div class="comment_text"><p>*cough*<br>Don't know what you're talking about Ray....</p><p>*hides under a rock*</p><p>;o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670986">5</a> by Link Mckinney
		posted on 2/4/2008 at 9:42 AM
		</div>
		<div class="comment_text"><p>I wanted to let you know that ADDT, which was interaktonline MXKollection(a add on MXI that adobe now sells) uses ServiceFactory in their Login functions, under the KT_functions.inc.cfm and is becoming a huge pain for people that move up to cf8 in the shared environments where this option is disabled. This completely screws up all applications that are created with ADDT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670988">6</a> by Brad Melendy
		posted on 4/2/2008 at 3:30 AM
		</div>
		<div class="comment_text"><p>Here's another little tidbit.  I'm finally getting to play with Flex and ran the main sample application Adobe provides to show connectivity to a database via Coldfusion.  So the application works great on my localhost but as soon as I try to put it up on my shared host I get:</p><p>Permission denied for creating Java object: coldfusion.server.ServiceFactory.<br>Access to Java objects in the ColdFusion package has been disabled by the administrator.</p><p>All because of the following line of code:</p><p>&lt;cfset factory = createObject( "java", "coldfusion.server.ServiceFactory" )&gt;</p><p>Now, mind you, this is the first sample application you will get from Adobe regarding database connectivity between Flex 3 and Coldfusion and most places, it won't run.  Not to mention, my host says that it supports all tags except for CFExecute and CFRegistry which would lead you to believe CFObject will work for any circumstances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670989">7</a> by Raymond Camden
		posted on 4/2/2008 at 4:48 AM
		</div>
		<div class="comment_text"><p>Brad, please email me off blog (use my contact form). I know the guys who worked on this code and I can hook up with them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671011">8</a> by Brad Melendy
		posted on 4/2/2008 at 11:30 PM
		</div>
		<div class="comment_text"><p>Well, I was WRONG.  Turns out that in my haste of pushing code to my shared host, I left the datasource incorrectly named.  My pointing fingers at the CFC was due to my inability to hit the CFC with a direct web request like this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbrad.melendy.com%2Fprojects%2Fflex%2FDataTest4%2Femployees.cfc%3ALu_03-G61ywFWoVofMhkxy6PYX8&amp;cuid=3321886" rel="nofollow noopener" title="http://brad.melendy.com/projects/flex/DataTest4/employees.cfc">http://brad.melendy.com/pro...</a></p><p>This generates an error on my shared host but not on my localhost.</p><p>However, it works great when you hit the Flex app:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbrad.melendy.com%2Fprojects%2Fflex%2FDataTest4%2FDataTest4.html%3AUZ4izR05egGgSIdhrzWO0xWbijU&amp;cuid=3321886" rel="nofollow noopener" title="http://brad.melendy.com/projects/flex/DataTest4/DataTest4.html">http://brad.melendy.com/pro...</a></p><p>So fooie on me.  I'm just glad it works.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671008">9</a> by Raymond Camden
		posted on 4/2/2008 at 11:36 PM
		</div>
		<div class="comment_text"><p>Glad you got it. I noticed some missing var statements in the CFC. I've pinged my contact about getting them fixed. While not critical, Adobe should try to always provide good code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671013">10</a> by ike
		posted on 11/27/2008 at 8:11 AM
		</div>
		<div class="comment_text"><p>So it's a year later and I'm running into this issue for the first time. ;)</p><p>Sometimes being a forerunner can be really challenging... I started doing database introspection back on ColdFusion 5 when all we had were custom tags and at the time I was using a combination of information_schema and other proprietary APIs for different databases. My objective of course was to create what is now fairly common with ColdFusion, and that's database agnostic software (relatively speaking). These days DataFaucet does it, Reactor does it, Transfer does it, DataMgr does it, etc. But at the time when I started, it was pretty much unheard of.</p><p>Around the time that 6.1 was released I finally updated the tools to use the JDBC sql.metadata object because it was much more consistent and reliable than the information_schema... and as far as I know, it still is...</p><p>But the past couple days I've been "going backward" actually trying to implement a back-up system for DataFaucet that will fall back on a combination of cfdbinfo and information_schema if the serviceFactory isn't available.</p><p>I would love for this to just be cfdbinfo all the way! Unfortunately it can't be, because the folks at Adobe who implemented it decided to change the standard AGAIN! Now there are some changes I wouldn't mind -- there's a bunch of data in there that's somewhat cryptic and not very useful. The problem is that they made very fundamental changes to the API and they dropped a bunch of information that I actually need.</p><p>So great, I can get the columns from the foreign key constraints, but they don't have any information about their schemas! Are they all from the default schema, or does it return them from any schema? Either would be problematic. And I have no information at all about the name of the constraints. With the JDBC version, I can drop a foreign key constraint (because you need the name for the SQL statement), but with cfdbinfo? Not a freaking chance!</p><p>Hopefully maybe in a future release they'll fix the holes and I'll be able to use cfdbinfo for everything... In the meantime they've basically brought me back to the kind of frustration I was dealing with on CF5. AND! Because the JDBC data is still more robust and reliable, it's still the default solution - it only falls back on cfdbinfo and information_schema if it can't get access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671014">11</a> by ike
		posted on 11/27/2008 at 8:12 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.datafaucet.com%3AQ8oj_tFIywjtSVX1hNo6DXVF17k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datafaucet.com">http://www.datafaucet.com</a> for those who are interested. I probably should have added this to my previous comment. :)</p></div>
	</div>
</div>
		