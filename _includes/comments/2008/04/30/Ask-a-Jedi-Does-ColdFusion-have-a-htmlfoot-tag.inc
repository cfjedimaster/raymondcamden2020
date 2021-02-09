
<div class="comment" id="c_1713680396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680396">1</a> by Raul Riera
		posted on 4/30/2008 at 5:56 PM
		</div>
		<div class="comment_text"><p>If you are going to go with the trouble of making a custom tag, and making it really complex to handle more than just text, why not just use a cfinclude on each page before the body? that way it could embed a much richer and simpler code separeted in .cfm files.</p><p>Unless code reuse is DEEPLY related here, I dont see why doing this would be good. Maybe because cfhtmlhead doesnt make that much sense either for me :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680398">2</a> by Raymond Camden
		posted on 4/30/2008 at 6:01 PM
		</div>
		<div class="comment_text"><p>How dare you say my waste of time is a waste of time. I am highly offended!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680397">3</a> by Todd Rafferty
		posted on 4/30/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>cfhtmlhead isn't a waste of time and I can certainly see some usage for cfhtmlfoot.  I recently came across the benefits of cfhtmlhead and it's not really useful until you think "man, I wish I could shove this javascript/metadata up into the header of my templates without actually having to write it there."</p><p>Then the little lightbulb comes on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680400">4</a> by Gary Gilbert
		posted on 4/30/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>cfhtmlhead is very useful.</p><p>sure you don't HAVE to have your javascript in the head tag but I like it there, its neater.</p><p>And if you use a MVC framework you don't typically have access to the htmlhead so if you do want to jam some javascript, css or metadata tags into the head of the page from your display page you need to use it.</p><p>Then again if you are using an MVC framework you could declare two variables htmlhead and htmlfoot and output them in the appropriate places in your layoutpage, then you simply need to set those variables with whatever it is you want to output when you want stuff jammed in the header or footer....no need to create a custom tag to do it, no need to use onRequestEnd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680399">5</a> by Leon Ridge-Cooke
		posted on 5/1/2008 at 12:50 PM
		</div>
		<div class="comment_text"><p>What happened to OnRequestEnd.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680402">6</a> by Raymond Camden
		posted on 5/1/2008 at 2:59 PM
		</div>
		<div class="comment_text"><p>Technically that isn't a suitable answer. Sure you can use it to append stuff at the end, but in this question, the idea is - I've got a full layout already but I want to insert something before the body tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680407">7</a> by Leon Ridge-Cooke
		posted on 5/1/2008 at 3:07 PM
		</div>
		<div class="comment_text"><p>okay, what about..</p><p>at the end of the specific page<br>&lt;cfset somevariable = "html goes here"&gt;</p><p>and in the OnRequestEnd.cfm<br>&lt;cfif IsDefined("somevariable")&gt;#somevariable#&lt;/cfif&gt;<br>and then the rest of the "footer" layout follows.</p><p>if the html is complex, maybe use cfsavecontent?</p><p>My code is brief, probably needs some better coding.</p><p>Tell me what you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680405">8</a> by Raymond Camden
		posted on 5/1/2008 at 3:10 PM
		</div>
		<div class="comment_text"><p>While that does work, it doesn't technically apply to the problem at hand in this blog post - which is to dynamically insert something before the body tag. I'm splitting hairs here probably. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680406">9</a> by Leon Ridge-Cooke
		posted on 5/1/2008 at 3:12 PM
		</div>
		<div class="comment_text"><p>no problem. I have learnt a lot from you. Just wanted your opinion on my method.</p><p>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680408">10</a> by Raymond Camden
		posted on 5/1/2008 at 3:19 PM
		</div>
		<div class="comment_text"><p>Well, if we agree that what you want isn't the best specifically for what we discuss here, let me comment in general.</p><p>I don't think onRequestEnd is a good way to do layout stuff. Nor would I recommend Application.cfm. Nor onRequestStart/End.</p><p>I recommend using custom tags for layout. So my page would look like so:</p><p>&lt;cf_layout title="foo"&gt;<br>some page<br>&lt;/cf_layout&gt;</p><p>I've got a blog entry on it here on the blog somwhere.</p><p>The reason I don't like using app.cfm/onrequestend.cfm/app.cfc is that if you have a page that DOESN'T need layout, like a popup window, then you have to embed code in those files to block it. To me, this should be done on the page instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680409">11</a> by Leon Ridge-Cooke
		posted on 5/1/2008 at 3:29 PM
		</div>
		<div class="comment_text"><p>ok, i'm an old school cfer. I learnt from CF5. I have all my page headers, menus and footer drawn from application.cfm and onrequestend.cfm. These pages have cfincludes to draw in headers, menus and footers. When i need a page, like a popup, i call the page with a url variable something like popup.cfm?noheaders.</p><p>The application.cfm looks for this and does not include "header.cfm", "menu.cfm", etc. The same for OnRequestEnd.</p><p>I've always had a gut feeling that this is wrong. I will look into it when I have some time. Unfortunately my current client wants results now, so I have to code as I know how to code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680410">12</a> by Sebastiaan
		posted on 10/20/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm puzzled by something. I have an old FB3 app where I use CFHTMLHEAD. But everything I put in the tag comes TWICE in the &lt;head&gt;-tag. Any ideas to why? It doesn't change if I put the tag in the dsp-file, the fbx_switch.cfm or in the layout_nnn.cfm file. HELP!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680411">13</a> by Raymond Camden
		posted on 10/20/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>If you add a cflog before the cfhtmlhead, do you see 2 log messages per request?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680414">14</a> by Pipeline Interactive
		posted on 9/16/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>We had the same problem described by Sebastiaan. We had a template running getPageContext().getOut().clearBuffer(); so we could manipulate the HTML to perform actions such as removal of whitespace. We were also seeing duplicate output from CFhtmlhead and CF generated Javascript. Removing this call fixed the issue for us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680416">15</a> by Corey Butler
		posted on 10/29/2010 at 9:08 PM
		</div>
		<div class="comment_text"><p>I know this is an old thread, but I came across it while looking for common methods of achieving a "reverse" &lt;cfhtmlhead&gt; tag. Personally, I'd love to see a &lt;cfhtmlfoot&gt; tag. Most of my interface work is done with JavaScript, and for performance reasons, it is often best to load it at the end of the page just before the &lt;/body&gt; tag. Or so says the pag speed utility in Firebug :-) Of course I've worked around this with a method similar to those listed above, but it would be nice to have native language support for something like that for the sheer purpose of standardizing the code for other developers. Despite the fact this is a simple custom tag, it can always be scary when look at a code base and see a bunch of unknown custom tags.</p></div>
	</div>
</div>
		