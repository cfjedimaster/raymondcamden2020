
<div class="comment" id="c_1713677174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677174">1</a> by Joshua Michael Hublar
		posted on 3/17/2008 at 1:57 AM
		</div>
		<div class="comment_text"><p>This is a great technique. . .   It really makes a page come in a lot cleaner.  I would like to offer a warning, though:  The script that invokes the ColdFusion.navigate portion *must* be in the head portion of your template or it won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677175">2</a> by Conrad
		posted on 4/5/2008 at 12:17 AM
		</div>
		<div class="comment_text"><p>Hi raymond,</p><p>I want to use the Spry accordion widget inside a CFDIV tag, like this:</p><p>menu.cfm:</p><p>&lt;div id="Accordion1" class="AquaAccordion" tabindex="0"&gt;<br>  &lt;div class="Panel"&gt;<br>    &lt;div class="Tab"&gt;<br>      &lt;div class="Label"&gt;Panel 1&lt;/div&gt;<br>    &lt;/div&gt;<br>    &lt;div class="Content"&gt;<br>    ...<br>    &lt;/div&gt;<br>  &lt;/div&gt;<br>  &lt;div class="Panel"&gt;<br>    &lt;div class="Tab"&gt;Panel 2&lt;/div&gt;<br>    &lt;div class="Content"&gt;<br>    ...<br>    &lt;/div&gt;<br>  &lt;/div&gt;<br>&lt;/div&gt;</p><p>menu_call.cfm</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script src="SpryAssets/SpryAccordion.js" type="text/javascript"&gt;&lt;/script&gt;<br>&lt;link href="SpryAssets/SpryAccordion.css" rel="stylesheet" type="text/css"&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;cfajaximport&gt;</p><p>&lt;cfset ajaxonload("sp2")&gt;<br>&lt;cfdiv bind="url:menu.cfm"/&gt;</p><p>&lt;script type="text/javascript"&gt;<br>&lt;!--<br>var sp2 = new Spry.Widget.Accordion("Accordion1");<br>//--&gt;<br>&lt;/script&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>What I do it wrong?</p><p>Thanks,</p><p>Conrad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677176">3</a> by Raymond Camden
		posted on 4/7/2008 at 8:27 PM
		</div>
		<div class="comment_text"><p>I have not messed with mixing Spry and CF's Ajax features. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677177">4</a> by Ramesh Sabetiashraf
		posted on 6/22/2008 at 3:14 AM
		</div>
		<div class="comment_text"><p>I've been struggling with the same issue until I ran into this blog today.  Interesting work around, but a problem with CFDIV binding is loss of search engine visibility (i.e., search engines won't see your main navigation and may not index your site properly.)</p><p>So here's what I came up with after playing with CSS.  It does keep the menu search engine optimized.</p><p>&lt;head&gt;<br>   &lt;style type="text/css"&gt;<br>      /* this should stop the horizontal menu from showing vertically (until the page load is complete) */<br>      #topmenu li { <br>         display:inline;<br>      }</p><p>      /* use this to ensure submenus aren't displayed horizontally */<br>      #topmenu li li { <br>         display:list-item;<br>      }<br>&lt;/head&gt;</p><p>&lt;cfmenu name="topmenu" type="horizontal"&gt;<br>...<br>&lt;/cfmenu&gt;</p><p>Cheers,</p><p>Ramesh.</p></div>
	</div>
</div>
		