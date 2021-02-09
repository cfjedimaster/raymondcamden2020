
<div class="comment" id="c_1713728093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728093">1</a> by MikeG
		posted on 12/2/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>That question was too easy for you.  I got a tougher one for you (I think)..</p><p>How do you tell, from inside the custom tag, what template called the custom tag?  Say I want to log what the calling template was within the custom tag?  Without degugging turned on so you cannot use the Factory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728073">2</a> by Raymond Camden
		posted on 12/2/2010 at 11:02 PM
		</div>
		<div class="comment_text"><p>getBaseTagList()</p><p>Old school. Custom tags are pretty powerful even if they aren't used much anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728095">3</a> by MikeG
		posted on 12/2/2010 at 11:23 PM
		</div>
		<div class="comment_text"><p>if it was that easy I would not have asked &lt;grin&gt;<br>file called tester.cfm, contains this code.<br>&lt;cf_ct&gt;</p><p>File called ct.cfm has this code.<br>getBaseTagList() (pounded and wrapped)</p><p>The result of the output is "CFOUTPUT,CF_CT"</p><p>What I want it to tell me is tester.cfm.  That is the magic I am looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728096">4</a> by Raymond Camden
		posted on 12/2/2010 at 11:26 PM
		</div>
		<div class="comment_text"><p>getBaseTemplatePath() should do it? Unless it's</p><p>a.cfm<br>cfinclude b.cfm<br>which runs test.cfm</p><p>Them I'm not sure - test and let me know. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728097">5</a> by MikeG
		posted on 12/3/2010 at 12:49 AM
		</div>
		<div class="comment_text"><p>No simple answer, no real way that I can find, to determine the calling template from within a custom tag.</p><p>If you use getBaseTagList(), what gets returned are the names of the tags used within the custom tag template though not all of them. If you are calling the custom tag from a custom tag, the template name will show up in this list (cf_customtag).  What is interesting is that if you call the custom tag using cf_customtag or cfmodule template=, it shows up in the list as cf_customtag.</p><p>If you call a custom tag directly from a non custom tag template, you can use getBaseTemplatePath() to get that template name in the format of drive:\path\to\basetemplate.cfm</p><p>If you cfinclude the template that calls the custom tag, the template that actually calls the custom tag is not discoverable using either method.</p><p>This is all stuff that I have known for years, been using custom tags almost as long as I have been eating brontosaurus burgers but have never figured out a way to definitively determine the name of the calling template from within the custom tag.</p><p>You can get the whole page stack from within the custom tag, but debug has to be turned on.  Use coldfusion.server.ServiceFactory.GetDebuggingService() and then you can pull a query using GetDebugger().GetData(), but even that just provides the page stack and not the relationships.</p><p>I still use custom tags a lot, great way to reuse code for the screen and from time to time it would sure be nice to be able to use calling template as a decion criteria.  Was hoping you might know of some gem in getPageContext() or some other esoteric, under the hood, root level goodie..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728071">6</a> by Raymond Camden
		posted on 12/7/2010 at 4:25 AM
		</div>
		<div class="comment_text"><p>As an alternative - you can use cfassociate in a child tag to associate data to a parent. In the parent you can do validation to ensure that child tags existed.</p><p>You know - you _couid_ call getBaseTagData("foo") to 'look' for foo as a parent tag. If you get nothing back, throw an error. Did anyone try that?</p></div>
	</div>
</div>
		