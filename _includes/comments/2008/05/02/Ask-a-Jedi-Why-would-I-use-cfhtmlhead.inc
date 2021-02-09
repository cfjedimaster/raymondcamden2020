
<div class="comment" id="c_1713680474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680474">1</a> by DanaK
		posted on 5/2/2008 at 4:32 PM
		</div>
		<div class="comment_text"><p>A lot of times I find myself using cfhtmlhead when maintaining someone else's application. Let's say for instance you have a one off javascript or css rule that needs to come into play and you're too lazy or unable to modify the template of the page. cfhtmlhead can come to the rescue and dump it up in the header.</p><p> Theres other, more valid, uses cases but ones like those I seem to come up against a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680475">2</a> by Matt Turner
		posted on 5/2/2008 at 5:49 PM
		</div>
		<div class="comment_text"><p>Admittedly in the past I have abused the functionality provided in the tag, mostly in the same way as Danak described.  I would find myself including  js/css using cfhtmlhead on the page that is going to need the functionality.</p><p>However from a front end engineering standpoint doing things like dynamic js and or css with the use of cfhtmlhead is a performance nightmare as your stripping the browsers of their ability to cache resources they should really be able to.</p><p>A trap I fell into often was using CF to generate javascript dynamically where more appropriately I would have made my JS more dynamic to accommodate my CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680476">3</a> by Terrence Ryan
		posted on 5/2/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>My big use case is customtags. Let's say I build a javascript+html interface, and the javascript is only used with this custom tag.</p><p>I'll write the javacript into the custom tag, but load it into the htmlhead instead of inline. That way I keep all the code in one place, but I maintain the javascript in the header instead of the body of the html page.</p><p>I don't know if it is a compelling use case, but it's why I use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680539">4</a> by Jon Clausen
		posted on 5/2/2008 at 9:56 PM
		</div>
		<div class="comment_text"><p>Similar to Terrence, I find that the single best reason for using cfhtmlhead is when dealing with Javascript libraries and dependencies.</p><p>In my recent applications, I'm almost always using a "scriptDealer" service object that allows me to call &lt;cfset controller.dealScript(scriptname[,script_text][,script_priority])&gt; to create the final block of javascript files served in the head section with the HTML output.</p><p>For me, that results in only having to use cfhtmlhead once in the request and allows me to ensure that if I need a dependent library, I can can call it repeatedly and it will only be served once and in the correct order for dependency tree.  An frequent example, in my case, would be when using JQuery plugins like the UI components (accordians, tabs, etc.).</p><p>My 2 cents. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680538">5</a> by Kevin Sargent
		posted on 10/16/2008 at 6:44 AM
		</div>
		<div class="comment_text"><p>I use it for custom tags that invoke jquery functions.... for example, cf_dragDropList would do something like:</p><p>load jquery core, if not already loaded (don't load it twice)<br>load jquery ui components is not already loaded<br>load JS required to make drag and drop list sorting work</p><p>specifics are made dynamic by passing css classes and ids to the cf_dragDropList as arguments. So I can crate a drag and drop sortable list that saves via ajax with a single custom tag.</p><p>cfhtmlhead makes this possible.</p></div>
	</div>
</div>
		