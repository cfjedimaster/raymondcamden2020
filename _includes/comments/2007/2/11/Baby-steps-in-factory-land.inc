
<div class="comment" id="c_1713662192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662192">1</a> by Steve Bryant
		posted on 2/11/2007 at 8:26 PM
		</div>
		<div class="comment_text"><p>Could you have your factory store an instance before it returns it? The the factory itself would have an instance available to pass in to a new component as it creates it.</p><p>The major problem here, of course, is that order becomes important. Still, you could have your code throw an informative error if the required component wasn't available.</p><p>If the factory does store an instance, you could also have it verify if it has the instance stored before it tries to create a new one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662198">2</a> by Dan
		posted on 2/11/2007 at 9:35 PM
		</div>
		<div class="comment_text"><p>Have you had a chance to check out ColdSpring yet? It really helps out with dependency injections, really easy to use and very powerful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662201">3</a> by Steve Nelson
		posted on 2/11/2007 at 9:41 PM
		</div>
		<div class="comment_text"><p>I just worked on a BIG project that used factories exactly like this. It's not easier to deal with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662199">4</a> by Rob Gonda
		posted on 2/11/2007 at 9:55 PM
		</div>
		<div class="comment_text"><p>Nice Ray ... great to see you're playing with Factories. I'm late to release the code and slides for my presso, but I'll do it today.</p><p>The next step, like Steve said, is to save the reference to the instances inside your factory. Order may or may not be as important if you use the same factory methods recursively to wire your objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662197">5</a> by Raymond Camden
		posted on 2/11/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Dan - note the title: "Baby steps" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662203">6</a> by Don Zacharias
		posted on 2/11/2007 at 10:59 PM
		</div>
		<div class="comment_text"><p>this last line in your last code snippet is just an errant copy-paste, right?<br>&lt;pre&gt;&lt;cfset application.soldier = application.factory.getComponent("soldier")&gt;<br>"arrayofjobs")&gt;&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662206">7</a> by Raymond Camden
		posted on 2/11/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>Dan, no, it was a test. You passed. ;) Seriously - thanks. I also found another typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662204">8</a> by Jeff Houser
		posted on 2/12/2007 at 4:06 AM
		</div>
		<div class="comment_text"><p>2nd code block, are 'player' and 'planet' variables supposed to be created from the same 'planet' cfc?</p><p> After the bullet list, "Each of the CFCs aboVe" ?  Is a V missing?</p><p> That said, I think I'm missing some background with this example.  I don't understand what ship, soldier, planet, player, and ruleset are.  Without knowing that, I can't say whether or not it makes sense to create the components in the application scope.  Perhaps I'm looking to deep into the example.</p><p> To date, I'm with Steve Nelson.  I see no benefit in encapsulating a single line of code.  I assume this will make more sense as you write more?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662200">9</a> by Raymond Camden
		posted on 2/12/2007 at 4:14 AM
		</div>
		<div class="comment_text"><p>Jeff, I think you are reading a bit too much into the code. The whole ship, player, planet, etc, were just examples. They don't mean _anything_ or relate to a real world application. My second post _will_ have a real example and will show the above and after.</p><p>Typo fixed. Thanks.</p><p>You don't see the benefit already? Well hopefully the second post will make it more obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662207">10</a> by Michael Sharman
		posted on 2/12/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>On the topic of factories here are 2 great blog posts which I found useful a little while ago when researching factories:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.phillnacelli.net%2Fblog%2Findex.cfm%2F2006%2F11%2F21%2FObjectFactory-Explained%3ADLLzGIaT2huKNfPrkN_MV_nD-K8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phillnacelli.net/blog/index.cfm/2006/11/21/ObjectFactory-Explained">http://www.phillnacelli.net...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kellyjo.com%2Fblog%2Findex.cfm%2F2006%2F12%2F11%2FDueling-Object-Factories%3AElIzD58SGBMiTJ_MdK9Bxp71_sE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kellyjo.com/blog/index.cfm/2006/12/11/Dueling-Object-Factories">http://www.kellyjo.com/blog...</a></p><p>Michael</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662209">11</a> by Jeff Houser
		posted on 2/12/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p> I'm definitely putting too much into the code.  I tend to learn better with real-world examples than I do on 'theoretical' examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662208">12</a> by jim collins
		posted on 2/12/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>I like factories, but whenever I read about them I'm reminded of this article: <a href="http://disq.us/url?url=http%3A%2F%2Fdiscuss.joelonsoftware.com%2Fdefault.asp%3Fjoel.3.219431.12%3AXCtxQulgDnEhJMfifCDZKiKBtuI&amp;cuid=3321886" rel="nofollow noopener" title="http://discuss.joelonsoftware.com/default.asp?joel.3.219431.12">http://discuss.joelonsoftwa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662212">13</a> by Rob Gonda
		posted on 2/13/2007 at 8:52 AM
		</div>
		<div class="comment_text"><p>Jim, that's a great story. In our defense, may I add, Dependency Injection would simplify your dilemma. By using DI, the factory becomes transparent, thus w/o the need of any manual. If you need a hammer, it will magically appear in your hands.</p></div>
	</div>
</div>
		