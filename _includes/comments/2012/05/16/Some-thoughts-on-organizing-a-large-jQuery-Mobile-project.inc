
<div class="comment" id="c_1713741142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741142">1</a> by Mario Junior
		posted on 5/16/2012 at 7:16 PM
		</div>
		<div class="comment_text"><p>Interesting how something so simple to develop on Flex-based apps (like architecture and componentization) become so complicated with JS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741146">2</a> by WebManWlkg
		posted on 5/16/2012 at 7:34 PM
		</div>
		<div class="comment_text"><p>I'm of the school of thought that apps, databases, network wiring, etc, should design themselves, based on your needs.</p><p>Example: "how the heck to you even use JQ to manipulate controls on another page?" You don't. You've just made a persuasive argument that your app needs to use a multi-page template, so that "another page" resides in the same DOM.</p><p>Keep asking yourself honestly what you need it to do, and it will gradually organize itself, IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741143">3</a> by Dave Hoff
		posted on 5/16/2012 at 7:38 PM
		</div>
		<div class="comment_text"><p>Sounds like you haven't discovered the awesomeness of BackboneJS yet. Picking up backbone has completely changed the way I think about architecting large JS apps. As CF devs you'll appreciate the lack of convention over configuration in backbone. It basically provides the tools to do MVC on the frontend without forcing you into any specific pattern.</p><p>Have a look at the article below that specifically talks about using backbonejs along with jQuery mobile. <br><a href="http://disq.us/url?url=http%3A%2F%2Fcoenraets.org%2Fblog%2F2012%2F03%2Fusing-backbone-js-with-jquery-mobile%2F%3A7GEsuX7Qc_JDB1gvW9LPzJRiQWc&amp;cuid=3321886" rel="nofollow noopener" title="http://coenraets.org/blog/2012/03/using-backbone-js-with-jquery-mobile/">http://coenraets.org/blog/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741145">4</a> by Greg Wilson
		posted on 5/16/2012 at 11:07 PM
		</div>
		<div class="comment_text"><p>If you have that many pages, you should be using a MVC architecture with something like backbone.js or knockout.js.  It will dramatically organize your code and give you a project that is much easier to maintain moving forward.</p><p>Christophe has some good "getting started" materials - <a href="http://disq.us/url?url=http%3A%2F%2Fcoenraets.org%2Fblog%2F%3Fs%3Dbackbone%3ArtBiAXicqiijjElknG3SbeVl-U8&amp;cuid=3321886" rel="nofollow noopener" title="http://coenraets.org/blog/?s=backbone">http://coenraets.org/blog/?...</a></p><p>Honestly, JQM is not really intended for mobile apps.  It's more for mobile web sites where the pages are dynamically created using something like PHP, CF, etc.  When you get to a lot of pages and/or you need to start customizing, you find yourself working "against the design" of JQM.</p><p>Greg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741144">5</a> by Mario Junior
		posted on 5/17/2012 at 4:13 AM
		</div>
		<div class="comment_text"><p>Backbone is a good choice, but if think better: Backbone + jQuery + jQueryUI = ExtJS4 (Sencha).<br>So, you can use a mix of js libraries or just use an unique framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741148">6</a> by Igor Costa
		posted on 5/17/2012 at 5:48 AM
		</div>
		<div class="comment_text"><p>Interesting question.</p><p>Solution: Go back to Flex, NaN! hehe</p><p>But, seriously, try to use some MVC js libraries out there. sproutcore is by far the best friendly mvc for JS and specially if you know cairngorm.</p><p>Split js as Controllers and html as views.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741147">7</a> by Frequent
		posted on 5/22/2012 at 5:15 PM
		</div>
		<div class="comment_text"><p>I'm trying to upgrade a fairly complex site (Coldfusion8/MySQL) I had developed for me some time ago into solely using Jquery Mobile (no Phonegap so far).</p><p>I'm pretty much starting from scratch with MySql and Coldfusion and am still learning the ropes from the existing source code.</p><p>Having looked at various frameworks (more closely js-backbone, cf-fw1), they all require to more or less turn off JQM-AJAX-handling (what I'm used to, what I like).</p><p>I've eventually went with a basic page layout (about 25 pages, some using JQM-splitscreen which I developed) and am trying to do all the server-side-communication and view-loading through AJAX exclusively, as I don't want to reload the page constantly on mobile devices.</p><p>I'm structuring the site into base-pages, templates, layouts, controllers and services, which is enough complexity for me... so I'm not really keen on dropping another framework layer and on top of this.</p><p>The only thing I ended up using was requirejs (so I'm also having JS-controllers and JS-services). This loads all- 3rd party-plugin related stuff on demand only and seems to work so far... although still a long way to go.</p></div>
	</div>
</div>
		