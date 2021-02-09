
<div class="comment" id="c_1713656894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656894">1</a> by Robert Owen
		posted on 8/29/2006 at 4:00 PM
		</div>
		<div class="comment_text"><p>No Problem or concern.. just a comment. I have used a ColdFusion ecomerce product called CFWebstore that started using Fusebox when they moved to version 5. As far as portability in set-up and use with that framework I've found no problems. There were no special considerations in set-up caused by using that framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656876">2</a> by Tom Chiverton
		posted on 8/29/2006 at 4:18 PM
		</div>
		<div class="comment_text"><p>In general, as Ray says, your code is as portable as the framework it uses, and almost all decent CF server providers will offer almost all frameworks, by default or on request.</p><p>A lot of effort is put into making a framework run in as many places as possible - not just CPUs and operating systems but with and without mappings - though having a mapping generally means you as a developer don't need to worry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656891">3</a> by Jeff Houser
		posted on 8/30/2006 at 5:31 PM
		</div>
		<div class="comment_text"><p>It seems you are talking about portability of code between servers.  But, how portable is the code between different applications and/or different frameworks?  Using a framework is supposed to help this type of reuse (or so they say)</p><p> I know Model-Glue (1.1) the best of any framework.  I'd say that the Model portion is as portable as you code it.  If you're properly encapsulating your code, then you should have no problem taking the same 'model' and putting it into another application, be it a Flex based front end, or Mach II, or Fusebox, or some other roll your own app.</p><p> However, Model Glue views will [most likely] only be portable to other Model Glue applications.  This is because you aren't passing parameters into the Model Glue view (like you do to your model).  You just access the relevant variables by using the Model Glue API (AKA ViewState).</p><p> A controller is usually application specific and I wouldn't expect it to be easily portable without also moving the relevant model and view bits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656897">4</a> by Sean Corfield
		posted on 8/30/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>I'd just like to point out (as the lead developer on Fusebox 5) that Fusebox has always allowed the "self-contained application" approach where you can bundle the framework inside your application and "It. Just. Works."</p><p>When I started on Fusebox 5 - a rewrite from scratch - and went with CFCs for maintainability, my key focus was on backward compatibility and to retain the ability to just "drop in" a Fusebox 5 application on any server and have it run.</p><p>That means all the CFCs are in a single directory so there's no path information involved. You can drop the framework core files into your application "root" and then package up the whole thing and run it on any server.</p><p>I think Fusebox is the only framework that is designed to work this way.</p><p>Note that Fusebox also allows a single install of the core files on the server if you want, either in the web root (no mapping) or anywhere on the file system (with a mapping). That ability was introduced in Fusebox 4.1 and is also present in Fusebox 5.</p><p>For more information, check out <a href="http://disq.us/url?url=http%3A%2F%2Ffuseboxframework.org%2F%3AfwR_SBo69uUnpgEaAFlDzWWYo3o&amp;cuid=3321886" rel="nofollow noopener" title="http://fuseboxframework.org/">http://fuseboxframework.org/</a></p></div>
	</div>
</div>
		