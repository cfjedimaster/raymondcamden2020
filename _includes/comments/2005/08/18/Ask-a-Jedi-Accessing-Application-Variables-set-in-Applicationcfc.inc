
<div class="comment" id="c_1713620139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620139">1</a> by az
		posted on 8/18/2005 at 8:27 PM
		</div>
		<div class="comment_text"><p>Do you know if it is possible to dynamically adjust the application settings in the "OnApplicationStart" event of the Application.cfc file?</p><p>Here is an example:<br>You have an application that has multiple copies on the same web server.  You need each instance to use a different name and client variable store.  You could edit each of the CFC files manually for each instance of the application any time you have to make changes to the Application.cfc file, but a better solution would be using the "OnApplicationStart" event to dynamically set the application properties.  I haven't had time to experiment with this myself and thought I'd see if you or your readers have any advice.</p><p>Another thing I've always wondered but never took the time to look into further is whether there is a way to force an application restart.  This would be useful if you needed to completely flush the application and reinitialize all applications settings and variables.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620141">2</a> by Sean Corfield
		posted on 8/20/2005 at 7:26 AM
		</div>
		<div class="comment_text"><p>az, remember that onApplicationStart() is only called once per named application (so changing the application settings there would only happen once). However, you can dynamically set any of the application settings in the pseudo-constructor anyway...</p><p>As for restarting the application, you can simulate it programmatically but there is no built-in support for that. You can code some condition that then calls onApplicationEnd() / onApplicationStart() explicitly if needed. Bear in mind the order of the calls to onApplicationStart(), onSessionStart() and onRequestStart() in case you have dependencies...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620137">3</a> by Daniel Schmid
		posted on 8/23/2005 at 4:55 PM
		</div>
		<div class="comment_text"><p>I'm figeling around with mirgration from application.cfm to Application.cfc.</p><p>Unclear is how do I restart the application by url.</p><p>bevor I used <br>&lt;cfif  not structKeyExists(application,"isInitialized") or url.flushApp eq true&gt;<br>...do init...<br>&lt;/cfif&gt;</p><p>hmm, maybe overlook something simple, but how to do that in  Application.cfc..?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620136">4</a> by Raymond Camden
		posted on 8/23/2005 at 6:20 PM
		</div>
		<div class="comment_text"><p>Daniel, see Sean's earlier comment. It covers it exactly. Short answer is that you can't force a "real" App restart, but you can call onApplicationStart manually by adding code to onRequestStart. For example, consider this pseudo-code, if isdefined("url.reinit") onApplicationStart</p><p>What I would suggest is - if your code loads up a set of variables, make that a method, like loadSettings() or some such. This would be called by onApplicationStart(). You can then call the same method in onRequestStart ifthe URL variable exists.</p><p>This has the side effect of keeping your onApplicationStart a bit simple as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620138">5</a> by Todd
		posted on 6/8/2007 at 10:06 PM
		</div>
		<div class="comment_text"><p>So, you can add other function names to the Application.cfc aside from the standard "OnWhatever," correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620142">6</a> by Todd
		posted on 6/8/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>p.s. Sorry for bumping such an old post. o_O  Our custom admin portal finally got redone and I just got around to using Application.cfc. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620140">7</a> by Raymond Camden
		posted on 6/8/2007 at 10:16 PM
		</div>
		<div class="comment_text"><p>Todd, absolutely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620143">8</a> by Scott Arbeitman
		posted on 6/14/2007 at 10:33 AM
		</div>
		<div class="comment_text"><p>You can make things defined in the THIS scope available in calling pages. Although this is usually used for application settings that were traditionally put in the cfapplication tag, you really put whatever you want in there.</p><p>To get this data available on the target template, make sure you implement the onRequest method, which just includes the target page. You will then have access to the THIS and VARIABLES scope from the Application.cfc.</p><p>Use this at your own peril!</p></div>
	</div>
</div>
		