
<div class="comment" id="c_1713654785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654785">1</a> by shimju david
		posted on 7/7/2006 at 6:29 PM
		</div>
		<div class="comment_text"><p>Model Glue.XML Security problem:-</p><p>All modelglue based coldfusion website's configuration will be in a modelglue.xml file. As XML file can be outputted on the browser do yo think it is a darn security threat? How can we overcome from this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654797">2</a> by Raymond Camden
		posted on 7/7/2006 at 6:34 PM
		</div>
		<div class="comment_text"><p>You can password protect the config folder for one. The other solution is to change the ModelGlue_CONFIG_Path. This is what I did in the MG version of CFLIB (which STILL isn't done):</p><p>&lt;cfset ModelGlue_CONFIG_PATH = expandPath("..") &amp; "/config/ModelGlue.xml" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654803">3</a> by Matt Woodward
		posted on 7/7/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>Couple of methods to handle this.  One is to put your XML file in a directory that's not accessible from the web root.  If that isn't feasible (for example if you're in a shared hosting environment), you can rename the file with a .xml.cfm extension and put &amp;lt;!-- &amp;lt;cfsetting enablecfoutputonly="true" /&amp;gt; --&amp;gt; at the top of the file.</p><p>You definitely don't want your xml config file accessible via a URL.  Often times it will have sensitive info in it, but even if it doesn't, giving people a roadmap of your app and configuration details probably isn't the best idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654802">4</a> by Teddy R Payne
		posted on 7/7/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>I really dislike not having easy access to contact forms.  I do not care if I have your email, just give me a way to send you a message.  I completely agree Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654804">5</a> by Jacob Munson
		posted on 7/8/2006 at 7:27 AM
		</div>
		<div class="comment_text"><p>I was curious about this ModelGlue.xml thing, and did a google search.  I found one site that had their file exposed, and it included all the DSN info.  I'd love to contact the site's author and alert him about it, but it's all in Japanese and I can't find a contact link.  If anybody speaks Japanese, let me know and I'll pass along the link.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654792">6</a> by shimju david
		posted on 7/8/2006 at 11:35 AM
		</div>
		<div class="comment_text"><p>Thanks Ray and Matt for your advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654795">7</a> by Rob Cawte
		posted on 7/10/2006 at 6:12 AM
		</div>
		<div class="comment_text"><p>Jacob,</p><p>About the Japanese site .... send me the link on rob at cawte dot com, and I'll follow up.</p><p>Cheers,<br>-Rob Cawte</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654799">8</a> by Jacob Munson
		posted on 7/10/2006 at 6:58 AM
		</div>
		<div class="comment_text"><p>Rob,</p><p>Sounds good.  I not at my house right now, but I'll send it as soon as I get back to my computer, where I've got the link.</p></div>
	</div>
</div>
		