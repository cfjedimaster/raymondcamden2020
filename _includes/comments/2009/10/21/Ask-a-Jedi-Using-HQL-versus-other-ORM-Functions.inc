
<div class="comment" id="c_1713719178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719178">1</a> by Mark Mandel
		posted on 10/22/2009 at 7:38 AM
		</div>
		<div class="comment_text"><p>I think Ray has done a really good job of explaining what is going on here, but there are a couple of things I would like to emphasise, in regards to your question of "how different HQL is from SQL".</p><p>* As Ray mentioned, HQL will return an array of Objects. This is a fairly large distinction, as you still have access to your business logic that is contained in your Objects, as opposed to a query result set.</p><p>* Since HQL is Object based, you can traverse inheritence hierarchies much easier than you would with native SQL. Something like 'from com.Workers' HQL statement is very powerful when you have 'RedWorkers' and 'BlueWorkers' that inherent from 'Workers'</p><p>* You generally have to do less work in HQL than you would have to do in SQL, because HQL knows about the relationships between Objects.  So really, all you need to know about is Object relationships. This means you spend less time concept shifting between Object-think and Relational-think, which is a Good Thing.</p><p>* If you don't want to get back Objects from HQL, you can request just properties as well (although I've never had the need).</p><p>Hopefully that is some other interesting points to consider.</p><p>That all being said - there are times when native SQL IS the better choice, it's just a pro/con game, like anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719199">2</a> by Barney
		posted on 10/22/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>I'd say you're pretty much right on the money.  entityLoad (and derivatives) is for a very specific, all-or-nothing request.  HQL is when you need more flexibility, either with ORed constraints ("from person p where <a href="http://disq.us/url?url=http%3A%2F%2Fp.sex%3A9d0RPTVh7WRGddf4CZMUaKGSrJ8&amp;cuid=3321886" rel="nofollow noopener" title="p.sex">p.sex</a> = 'male' or p.age &gt; 60"), joins ("from person p where <a href="http://disq.us/url?url=http%3A%2F%2Fp.address.city%3ALjsdZTYerDVmFosLjDWvQarjfZ4&amp;cuid=3321886" rel="nofollow noopener" title="p.address.city">p.address.city</a> = 'Sherwood'"), or you don't actually want entities ("select avg(age) from person p").</p><p>Using raw Hibernate, I believe projections and criteria will give you 100% coverage over HQL's functionality, but to my knowledge CF9 doesn't expose the Critera API.  You can certainly hit it through the Session if you wanted, however that's not very CF-ish, so I'd say HQL is the way to go for anything complex.</p><p>You can actually do EVERYTHING with HQL, if you want.  "from person p where <a href="http://disq.us/url?url=http%3A%2F%2Fp.id%3AHtSotN6W0iVp2ONz1XPSVpoyswM&amp;cuid=3321886" rel="nofollow noopener" title="p.id">p.id</a> = 23" is identical to entityLoad("person", 23) functionality-wise.  However, the latter is a bit more direct and allows Hibernate to bypass some of it's internal machinery, making it marginally faster (if your stopwatch has a nanosecond hand).</p><p>Aside from retrieve-entity-by-id queries, I tend to use HQL for everything.  I find it very expressive, especially with dot-traversal; you can very clearly describe very complicated queries.</p><p>Unfortunately, Adobe sort of screwed the pooch and didn't give us dbtype="orm" on the CFQUERY tag so you could nest your HQL and use conditional logic to create it inline.  You can fake it with a CFSAVECONTENT/ormExecuteQuery() pair, or build a string in a variable, but neither approaches the smoothness of CFQUERY.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719200">3</a> by Raymond Camden
		posted on 10/22/2009 at 7:50 AM
		</div>
		<div class="comment_text"><p>What about simply making a hqlquery custom tag?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719202">4</a> by Mark Mandel
		posted on 10/22/2009 at 7:54 AM
		</div>
		<div class="comment_text"><p>Now Ray, you're talking way too sensible! ;o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719201">5</a> by Barney
		posted on 10/22/2009 at 8:05 AM
		</div>
		<div class="comment_text"><p>A custom tag will do it, but whomever uses the custom tag has to manually deal with CFOUTPUT semantics.  To put that another way, the tag will *sometimes* require CFOUTPUT tags to be used around it's body based on the context it's invoked in.  It's a pretty fundamental issue with custom tags.  I've requested fixing it, but I've heard nothing.</p><p>So ultimately a built-in feature would provide a WAY better experience, not to mention a more consistent one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719177">6</a> by Raymond Camden
		posted on 10/22/2009 at 4:56 PM
		</div>
		<div class="comment_text"><p>Even with that - I may still whip up a custom tag. I mean shoot - Transfer has it - and I think it works well there too. Plus - I just like writing custom tags. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719180">7</a> by Shannon Hicks
		posted on 10/22/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If you're going to do a custom tag, don't forget to implement the caching features that ormExecuteQuery() has. Also, please implement filters (<a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fcf-orm-dev%2Fbrowse_thread%2Fthread%2F4bc04047f942b731%2366cc2878e6c054f4%29%3AGuUEP2SBO67JRp5C9XZKfOGdsp0&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/cf-orm-dev/browse_thread/thread/4bc04047f942b731#66cc2878e6c054f4)">http://groups.google.com/gr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719179">8</a> by Richard
		posted on 2/17/2010 at 3:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>on this subject of ORM/Hibernate in CF9, i have experimented in a small project and I really like it. After testing a little bit of OO in CF, I would like to use a proper MVC in my future applications - where does ORM/HIBERNATE fit in with Model-Glue or any other frameworks and what would be the starting set up...please assume am newbie to the MVC?<br>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719185">9</a> by Raymond Camden
		posted on 2/18/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>To me, this is an apples and oranges question. ORM helps abstract your SQL. It does not help/hinder MVC. You can write an MVC app that makes use of ORM at the model layer and you can write an ORM-enabled app that is old school procedural. One does not imply the other.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719184">10</a> by Mark Ireland
		posted on 2/20/2011 at 4:52 PM
		</div>
		<div class="comment_text"><p>What is your impression of cfScaffold?<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfscaffold.riaForge.com%3AYYknT10OJVQ4ea4UOzTxp7HjVAc&amp;cuid=3321886" rel="nofollow noopener" title="cfscaffold.riaForge.com">cfscaffold.riaForge.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719183">11</a> by Raymond Camden
		posted on 2/20/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>I haven't used it. It looks like it would be useful if you did NOT have ORM baked in. Before CF9 I was primarily a Transfer user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719182">12</a> by Mark Ireland
		posted on 2/21/2011 at 3:35 AM
		</div>
		<div class="comment_text"><p>If you get a chance please check it out. I think it needs CF9 with ORM on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719186">13</a> by Raymond Camden
		posted on 2/21/2011 at 7:13 AM
		</div>
		<div class="comment_text"><p>Sorry - are you saying it only works with CF9/ORM? Or are you asking me if it requires that? If so - it makes sense to contact the project owner and ask him/her if that's a requirement. Or am I misreading you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719187">14</a> by Mark Ireland
		posted on 3/4/2011 at 5:27 AM
		</div>
		<div class="comment_text"><p>Yes, it needs CF9/ORM and I am interested in your opinion on the demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719198">15</a> by Raymond Camden
		posted on 3/4/2011 at 2:13 PM
		</div>
		<div class="comment_text"><p>I haven't used it - so I can't speak to it. Maybe someone else in the thread.</p></div>
	</div>
</div>
		