
<div class="comment" id="c_1713741931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741931">1</a> by Nathan Strutz
		posted on 6/23/2012 at 1:15 AM
		</div>
		<div class="comment_text"><p>Good stuff, Ray. I love the thought of revisiting blog subjects. <br>FYI for those that don't want to write their own pagination code, I made an open source library, Pagination.cfc, that you can find at <a href="http://disq.us/url?url=http%3A%2F%2Fpaginationcfc.riaforge.org%3AG1ltyeGZ5DstaVGFOsBMI41F2vw&amp;cuid=3321886" rel="nofollow noopener" title="http://paginationcfc.riaforge.org">http://paginationcfc.riafor...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fdopefly.com%2Fprojects%2Fpagination%2F%3ANoifjN6v8XKs4Wb9P0a2qAx3k2g&amp;cuid=3321886" rel="nofollow noopener" title="dopefly.com/projects/pagination/">dopefly.com/projects/pagina...</a>. It's worth a look!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741935">2</a> by phill.nacelli
		posted on 6/23/2012 at 1:19 AM
		</div>
		<div class="comment_text"><p>Ray, great read.</p><p>As you pointed out, you don't expect users to paginate through millions of records.  I know this is a bit off topic since you're talking about specific pagination algorithm, but just for the sake of discussion one of the things I've always pushed for in our projects is to give the user the ability to filter and reduce the amount of those records coming back as much as possible.  Take basic searching on Google for example, no one paginates more than 3-5 pages without refining their search further.</p><p>Especially that now, six years later, we have much improved rich capabilities on the browser for this type of functionality.</p><p>The combination of good pagination code, coupled with a nice rich filtering feature is the ideal scenario for those providing this type of interface.</p><p>Happy Coding,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741933">3</a> by Raymond Camden
		posted on 6/23/2012 at 1:24 AM
		</div>
		<div class="comment_text"><p>@Phill: One thing I'm curious about though is how often these advanced search forms get used. I mean shoot - even I barely use the advanced filtering options in Google. To be clear, I'm not saying they are bad - I'm just wondering how much they are actually used. On some of my sites I log searches. I should maybe look into logging regular searches versus others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741934">4</a> by phill.nacelli
		posted on 6/23/2012 at 1:50 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Google search was perhaps a too broad example, but if you have a business app with a grid just simply giving your users a keyword search field that you can search against (say firstName, lastName, email columns) using ajax to live filter the recordset can help reduce the pain without adding much complexity.</p><p>Basically, my point is, don't rely on pagination alone.  But a combination of pagination, filtering and even client side sorting (another great thing we can do now with HTML5) can make your app a lot more useful to busy users.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741932">5</a> by Raymond Camden
		posted on 6/23/2012 at 1:53 AM
		</div>
		<div class="comment_text"><p>@Phill: I agree with you. I'm just on a tangent now I think. I'd be curious to see metrics for complex forms in general.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741936">6</a> by phill.nacelli
		posted on 6/23/2012 at 1:58 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Now I'm curious too, just afraid that searching "Google Advanced Search Usage Statistics" on Google may destroy the Universe. Wish me luck! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741940">7</a> by JP
		posted on 6/23/2012 at 2:45 AM
		</div>
		<div class="comment_text"><p>Lately, I've been building result lists without paging. I use either a lazy loader (like facebook when you scroll down your news feed) or a button that says "Show More Results" that triggers an ajax request that appends new items to the list of results. I like this approach because you never lose the results you've already loaded. The downside is that you can't jump to a page... but that seems to me like a fairly random thing to do anyway. I don't think this approach is always the best, but it has worked for me in many situations when I used to page results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741939">8</a> by James Moberg
		posted on 6/23/2012 at 2:54 AM
		</div>
		<div class="comment_text"><p>I've been using DopeFly's Pagination.cfc... lots of options, styles &amp; overrides. Good documentations and easy to add to any project.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dopefly.com%2Fprojects%2Fpagination%2F%3Ae4_M4wZ3CG_RgZ-CbbB_wyrwZMw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dopefly.com/projects/pagination/">http://www.dopefly.com/proj...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741946">9</a> by Phil Duba
		posted on 6/23/2012 at 4:14 AM
		</div>
		<div class="comment_text"><p>Believe it or not, I've had to do the filter a number of times on administrative screens where a user may have 10 or more pages of data to sift through, particularly on user accounts and some other, content-like apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741938">10</a> by Jules Gravinese
		posted on 6/25/2012 at 4:52 AM
		</div>
		<div class="comment_text"><p>Ray, you may want to check these out:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.webveteran.com%2Fblog%2F%3Fs%3Dpagination%3AoGgtuf1aIy0Ehlse11tOY_qb1V4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webveteran.com/blog/?s=pagination">http://www.webveteran.com/b...</a><br>It has pagination and also page blockination. Yes, I just made up that word. Hope it catches on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741947">11</a> by Terry Sampson
		posted on 6/25/2012 at 3:14 PM
		</div>
		<div class="comment_text"><p>I used this the first time for one of my web apps here at work and I love it. With this update I will make it even better</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741941">12</a> by ulises
		posted on 6/25/2012 at 7:20 PM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond, you are great!! , my app looks better! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741951">13</a> by Mikel
		posted on 7/6/2012 at 5:04 PM
		</div>
		<div class="comment_text"><p>Thanks for updating this!  It is very handy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741937">14</a> by Mikel
		posted on 10/1/2012 at 4:26 PM
		</div>
		<div class="comment_text"><p>Just to expand on this a bit.  I ended up taking this and using it with a CFDIV to make some nice AJAX paging for my search results.  I thought that I'd point that out in case people reading this hadn't thought of it!  It works so well and it was super easy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741942">15</a> by Kit
		posted on 1/9/2014 at 7:20 PM
		</div>
		<div class="comment_text"><p>Hi, I've just came around your post. I know it is a bit old but I hope I can get some help. <br>When I try your tutorial, I have a hard time getting to the next result page.  Once I hit next page, I lost all my results.  It seems like the query is empty, does that mean when the page is reload, the query did not create any results?</p><p> I feel like there is just one little thing I'm missing.  Hope to hear from you.  Thanks a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741948">16</a> by Raymond Camden
		posted on 1/9/2014 at 8:49 PM
		</div>
		<div class="comment_text"><p>In my example, I'm running a query (ok, fake query!) on every request. Are you doing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741944">17</a> by Kit
		posted on 1/9/2014 at 8:56 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>After writing you, I replaced my query with your fake one and it works.  So on my page, I ran a query at the top of the page.  Now do I have to turn the output to a variable like you do (data)?  If so, how do i do that, sorry I'm new to CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741949">18</a> by Raymond Camden
		posted on 1/9/2014 at 9:28 PM
		</div>
		<div class="comment_text"><p>Well, I named my query data. You can name your query whatever you want, but pay attention to how my code assumes a query called that. If you call it beer, the code needs to change too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741950">19</a> by Kit
		posted on 1/9/2014 at 9:34 PM
		</div>
		<div class="comment_text"><p>Hi raymond,<br>So I have this at the beginning of my page:</p><p>&lt;cfinvoke <br> component="CFC.interm"<br> method="SearchIntermByName"<br> returnvariable="SearchIntermByName"&gt;<br>	&lt;cfinvokeargument name="LastName" value="#FORM.LastName#"/&gt;<br>	&lt;cfinvokeargument name="FirstName" value="#FORM.FirstName#"/&gt;<br>&lt;/cfinvoke&gt;</p><p>What I have done is that where ever you called "data", I just called my query "SearchIntermByName" but my question is since your query is being store as a variable, do I have to do so as well?  It seems like, when the page is refresh, all the results are gone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741943">20</a> by Raymond Camden
		posted on 1/9/2014 at 9:41 PM
		</div>
		<div class="comment_text"><p>You *are* storing your result as a variable - SearchIntermByName.</p><p>My demo links to itself, which means as you paginate, you keep running the same code, and you get the same query, etc time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741952">21</a> by Kit
		posted on 1/9/2014 at 10:38 PM
		</div>
		<div class="comment_text"><p>yah i though so too so i am not sure what I've done wrong...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741954">22</a> by Raymond Camden
		posted on 1/9/2014 at 10:39 PM
		</div>
		<div class="comment_text"><p>Ok, so look at the CFM you are using. When you click to go to page 2, it *is* running again, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741953">23</a> by Kit
		posted on 1/9/2014 at 10:54 PM
		</div>
		<div class="comment_text"><p>okay, I know what it is, it's the FORM variables.  They are gone on the second time.  I will have to find a way to store them somewhere</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741957">24</a> by Raymond Camden
		posted on 1/9/2014 at 10:57 PM
		</div>
		<div class="comment_text"><p>Session scope may work for you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741956">25</a> by Kit
		posted on 1/9/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>YAH, it's working! thanks so much for your help Raymond.</p></div>
	</div>
</div>
		