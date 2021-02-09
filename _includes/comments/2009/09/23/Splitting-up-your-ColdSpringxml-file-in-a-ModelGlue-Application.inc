
<div class="comment" id="c_1713718536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718536">1</a> by Joshua Scott
		posted on 9/23/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is great, but why not just break them up this way right inside your coldspring.xml file?</p><p>&lt;!-- IMPORT COMMON BEANS --&gt;<br>&lt;import resource="/SymphonyCore/config/beans/ReactorFactory.xml" /&gt;	<br>&lt;import resource="/SymphonyCore/config/beans/CommonBeans.xml" /&gt;</p><p>I have done this for a long time and it is a lot easier than the method you mentioned.</p><p>Am I wrong?</p><p>Josh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718556">2</a> by Raymond Camden
		posted on 9/23/2009 at 9:01 PM
		</div>
		<div class="comment_text"><p>2 things.</p><p>a) This isn't mentioned in the reference guide at all. :( I need to bug Chris Scott on it.</p><p>b) I'd still probably prefer a separate set of files for this. So while I can see using the IMPORT directive, I'd do it from my custom beans.xml file, just to keep things segregated between my services and my MG settings. But that's just my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718550">3</a> by Joshua Scott
		posted on 9/23/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>I see your first point. As to your second point, that is exactly how I use the import directive I keep my mg stuff separate. In either case, I am glad to know of another way to do it.</p><p>Thanks for all of your helpful blog posts.</p><p>Josh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718557">4</a> by Martijn van der Woud
		posted on 9/23/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>Ray, in your setup, my hunch would be that a reload of the ModelGlue framework would not reload the factory in application.cs, but instead just create a new ColdSpring instance containing the MG settings, and use the existing application.cs beanFactory as the parent bean factory as is.</p><p>Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718559">5</a> by Raymond Camden
		posted on 9/23/2009 at 10:54 PM
		</div>
		<div class="comment_text"><p>Um... not 100% sure if I'm reading you right, but my understanding is that it would make a new pointer again, so it wouldn't take any more (or less) RAM.</p><p>You do bring up a good side point though. If I edit my beans.xml, I'd have to ensure I rerun onApplicationStart(). I'd just add a hook to onRequestStart that does that, and uses the same URLs hooks as ModelGlue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718561">6</a> by Martijn van der Woud
		posted on 9/23/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>@Ray The "side point" was my main concern. ;) Setting reload to true in MG settings would have no effect on the parent bean factory. You would have to pass a url variable every time you want a reload. Could be a little (admittedly, just a litte :)) inconvenient during development.</p><p>But my guess would be that the &lt;import&gt; technique mentioned by Josh WOULD do a re-instantiate the imported bean factories. Can you confirm that Josh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718538">7</a> by Joshua Scott
		posted on 9/23/2009 at 11:33 PM
		</div>
		<div class="comment_text"><p>Yes. Using thing import method all bean factories are re-instantiated. I have used this method on a bunch of different projects and have never had a problem.</p><p>- JS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718539">8</a> by Martijn van der Woud
		posted on 9/23/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>Thanks Josh. I did not know about this either. Nice stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718560">9</a> by Mischa
		posted on 9/24/2009 at 7:11 PM
		</div>
		<div class="comment_text"><p>@Raymond: Maybe it's really just a peanut, but the MG-Settings in the CS-Config are project-based too. In other words, they belong these are rather project-settings than framework-settings to me. And it's up to ColdSpring to manage it's Config. That't why I use the same technique as Josh. But I also see your point - separation isn't bad at all. By the way: In which reference should it be mentioned? CS or MG?</p><p>@Josh: I do it the same way and never ever noticed any problems with it. So I'm very happy with it.</p><p>Hope, my points aren't lost in translation...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718563">10</a> by Raymond Camden
		posted on 9/24/2009 at 10:33 PM
		</div>
		<div class="comment_text"><p>The include directive should be mentioned in the CS ref as it is a CS directive, not MG. (Well MG supports INCLUDE as well, and it is the same idea, but its another product.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718564">11</a> by Raymond Camden
		posted on 11/5/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>A Tip: This drove me batty today. My MG application is set to autoreload. I noticed though that changes to my controllers were showing up, but not changes to my model. Doh. I had forgot that I was storing the CS factory in the app scope, which was NOT auto-reloading.</p></div>
	</div>
</div>
		