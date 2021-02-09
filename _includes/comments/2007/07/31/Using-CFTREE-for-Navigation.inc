
<div class="comment" id="c_1713669423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669423">1</a> by todd sharp
		posted on 7/31/2007 at 6:34 PM
		</div>
		<div class="comment_text"><p>Sounds like that would make a perfect Cheat Sheet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669421">2</a> by Dan Wilson
		posted on 7/31/2007 at 7:52 PM
		</div>
		<div class="comment_text"><p>I agree with Todd. A cheat sheet would be a great resource.</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669422">3</a> by Lola LB
		posted on 7/31/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>I would.  But, seriously, man, you need to Sleep.  ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669425">4</a> by Steve Sequenzia
		posted on 7/31/2007 at 9:05 PM
		</div>
		<div class="comment_text"><p>Ray -</p><p>I asked the original question on CF-Talk. Thanks for your help, I really appreciate it.</p><p>I was actually trying to do it with the &lt;cfdiv&gt; and bind but I could not figure out the syntax for the node part.</p><p>I am still struggling with one part of it.</p><p>I want to load a new page in the "main" layout when each link in the tree is clicked. I made it work like this:</p><p>&lt;cfform name="form"&gt;</p><p>&lt;cftree format="html" name="mytree"&gt;</p><p>&lt;cftreeitem display="Navigation" value="root"&gt;<br>&lt;cftreeitem display="Page A" parent="root" value="pageA.cfm"&gt;<br>&lt;cftreeitem display="Page B" parent="root" value="pageB.cfm"&gt;</p><p>&lt;/cftree&gt;</p><p>&lt;/cfform&gt;</p><p>&lt;cfdiv bind="url:content.cfm?value={mytree.node}" /&gt;</p><p>and then on the content.cfm page I just have a simple &lt;cfinclude template="#value#"&gt;.</p><p>This seems to work perfect when the links in the tree are clicked. Thing is, when the page initially loads it does not know the value of #value# and it errors out. That makes sense so I tried to add &lt;cfparam name="value" default="page.cfm"&gt; to the beginning of the page but that is not working.</p><p>For some reason the &lt;cfparam&gt; is not working with the bind to the cfdiv in the "main" layout when the ?value={mytree.node} is added. I even tried to just do a &lt;cfoutput&gt;#value#&lt;/cfoutput&gt; without the include and it does not work. I thought it might have something to do with the naming so I tried changing the name in the &lt;cfparam&gt; to something else and that is also not working.</p><p>Any ideas?</p><p>Thanks again for your help. I am certain that you are very busy, so your help is very appreciated.</p><p>-Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669424">5</a> by Raymond Camden
		posted on 7/31/2007 at 10:47 PM
		</div>
		<div class="comment_text"><p>You have two problems here.</p><p>First off - when the page loads, value does exist. If you use firebug you will see it gets passed as</p><p>value=</p><p>Now the value (the value of value ;) is blank, but it EXISTS! See the difference?</p><p>What you need is:</p><p>&lt;cfif not isDefined("url.value") or not len(trim(url.value))&gt;<br> &lt;cfset value = "somedefault"&gt;<br>&lt;/cfif&gt;</p><p>Your second problem is MUCH more serious. I HIGHLY urge you to change your application. Pardon the caps - but passing in a file to load via the query string is a very bad idea. What if I notice this and I change the value? What if I set url.value=content.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669439">6</a> by Steve Sequenzia
		posted on 8/1/2007 at 7:41 PM
		</div>
		<div class="comment_text"><p>Point taken...</p><p>Thanks Ray, I will work on changing the structure of this application.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669437">7</a> by I Rz
		posted on 8/16/2007 at 6:27 PM
		</div>
		<div class="comment_text"><p>Works great. But if I include the files the content.cfm is not found. I tried all combos of url:dir/content.cfm, url:/dir/content.cfm, etc... What is the trick?<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669433">8</a> by I Rz
		posted on 8/16/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>for Steve Sequenzia, try below if I understood your problem correctly.<br>&lt;cfdiv bind="url:content.cfm?value={mytree.node}" bindOnLoad = "false"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669431">9</a> by Raymond Camden
		posted on 8/16/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>RZ - try using a full path from web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669434">10</a> by hongsun
		posted on 3/31/2009 at 6:55 AM
		</div>
		<div class="comment_text"><p>I would like to use navigate function, but cannot make it work:</p><p>My code:<br>--------<br>&lt;cfform action=""&gt;<br>&lt;cfoutput&gt;	<br>&lt;CFTREE name = "Tree"  highlighthref="yes" format="flash" height="320" width="200" appendkey="false"&gt;</p><p> &lt;CFTREEITEM value="4" display="Accounting" expand="yes" img="./Images/folder_home.png" imgopen="yes"&gt;<br>	&lt;CFTREEITEM value="41" display="Reports" expand="no" img="element" parent="4" href="javaScript:ColdFusion.navigate('#self##xfa.accountingReport#','center')"&gt;&lt;/a&gt;<br>	&lt;CFTREEITEM value="42" display="CAN Management" expand="no"  img="element" parent="4" href="javaScript:ColdFusion.navigate('#self##xfa.accountingManageCAN#','center')"&gt;</p><p>&lt;/CFTREE&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfform&gt;</p><p>-----------------------------------------</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669435">11</a> by Thomas
		posted on 5/11/2010 at 6:30 PM
		</div>
		<div class="comment_text"><p>Any ideas on how to do something similar with CF7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669440">12</a> by Raymond Camden
		posted on 5/11/2010 at 6:38 PM
		</div>
		<div class="comment_text"><p>It is a wrapper to a YUI library (as opposed to Ext I think). You can easily use them yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669432">13</a> by Thomas
		posted on 5/11/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>Also... I cannot seem to get javascript to work with the href.</p><p>I have a simple function:<br>function hello(){<br>     alert('hello');<br>}</p><p>and call it like so:<br>href="javaScript:hello()"</p><p>With this, I get a syntax error</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669430">14</a> by Ranga
		posted on 7/8/2010 at 6:06 AM
		</div>
		<div class="comment_text"><p>In one of the requirements of a page in my website, I have to expand one of the cftreeitems. I was able to achieve using expand="yes". My problem is when a cftreeitem is set expand="yes" the folder is displaying a closed folder icon instead of an open folder icon.</p><p>Do you know how do I manipulate so that I get to show an open folder icon when an item is expanded on page load?</p><p>For e.g. assume that I have a cftree as following:</p><p>&lt;cftree format="html" name="mytree"&gt;<br>&lt;cftreeitem display="Navigation" value="root" expand="yes" img="folder" imgopen="folder"&gt;<br>&lt;cftreeitem display="Page A" parent="root" value="pageA.cfm"&gt;<br>&lt;cftreeitem display="Page B" parent="root" value="pageB.cfm"&gt;<br>&lt;/cftree&gt;</p><p>Now on page load I need to do two things:<br>1. Highlight Page B<br>2. Show open folder icon for Navigation.</p><p>Thanks<br>Ranga</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669438">15</a> by Raymond Camden
		posted on 7/9/2010 at 3:19 PM
		</div>
		<div class="comment_text"><p>You can get the tree object (ColdFusion.Tree.getTreeObject) and see if there is a way via that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669436">16</a> by saiful
		posted on 7/28/2010 at 6:02 AM
		</div>
		<div class="comment_text"><p>hai ray,</p><p>thanks for your tutorial on cftree for navigation. it's really helpful link to my new project. i'm working on multiple layer cftree.</p></div>
	</div>
</div>
		