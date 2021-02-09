
<div class="comment" id="c_1949203437">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1949203437">1</a> by Carlos Santana
		posted on 4/6/2015 at 4:34 PM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a> Another great post on these series.</p><p>Here are some tips:<br>1. You can use "mfp run"  to start the mfp dev server and see the logs instead of using mfp logs and using tail.<br>Just that mfp run will not termite it will be there printing logs statements, when you Ctrl+C it kills the server.<br>The use case is useful when you have two terminals open one you can do mfp bd in the adapters/ folder and then other you can run mfp run to see the logs</p><p>2. You can also use the new command in MFP 7.0 to call adapters mfp adapter call, it supports Java and JavaScript adapters, we eventually deprecate the mfp invoke on the CLI</p><p>3. You can can use the new Client API to call adapters instead of using WL.Client.invokeProcedure you can use new MFP 7.0 WLResourceRequest.send it uses REST HTTP giving providing the ability to cache the adapter responses and more power to control the request with things like http headers.</p><p>Keep the good work !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1949275133">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1949275133">2</a> (In reply to <a href="#c_1949203437">#1</a>) by Raymond Camden
		posted on 4/6/2015 at 5:18 PM
		</div>
		<div class="comment_text"><p>What is "better" - mfp invoke or mfp adapter call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972580240">
	<div>
		<img src="https://disqus.com/api/users/avatars/karlbishop.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972580240">3</a> (In reply to <a href="#c_1949275133">#2</a>) by Karl Bishop
		posted on 4/17/2015 at 2:17 PM
		</div>
		<div class="comment_text"><p>The adapter call command is more capable, and thus better.  It supports the basic REST verbs, and is the only way to test the new Java Adapter (REST only). We want to encourage developers to move over to proper REST calls for the JS-based adapters too.</p><p>The original Rhino-based JS adapters were RPC based, but the actual implementation was always implemented using POST for the API and Studio tester. The CLI's "invoke" command actually uses GETs, and could fail under large payloads.  As Carlos mentioned, we'll soon deprecate, then remove support for the legacy "invoke" command, as the "call" command supports all adapters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972587358">
	<div>
		<img src="https://disqus.com/api/users/avatars/karlbishop.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972587358">4</a> by Karl Bishop
		posted on 4/17/2015 at 2:21 PM
		</div>
		<div class="comment_text"><p>One other point to share -- The "build" and "bd" shortcut are context aware.  Which means that if you are working on a single adapter, run the command from that adapters directory, and it will be the only artifact processed, which will greatly improve the build and deploy time.  The same is true for individual apps. Conversely, being at the "/adapters", "/apps", or project root, will process all child assets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972590939">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972590939">5</a> (In reply to <a href="#c_1972580240">#3</a>) by Raymond Camden
		posted on 4/17/2015 at 2:24 PM
		</div>
		<div class="comment_text"><p>Query - is there a REST API for using MFP from your app? In the docs they show a REST API, but it is just (from what I can tell) to work with MFP in general. For example, list or add adapters. I don't see a REST API to *use* adapters. Now, maybe the JS API uses REST behind the scenes, but that's not what I mean. Is there a *documented* way for me to use an adapter in a hybrid app, or anywhere really, via REST?</p></div>
	</div>
</div>
		