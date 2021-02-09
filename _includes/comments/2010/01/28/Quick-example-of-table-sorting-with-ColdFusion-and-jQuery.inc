
<div class="comment" id="c_1713721617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721617">1</a> by Jim Papaleo
		posted on 1/28/2010 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Nice to know. But, what if the data spans more than one view of the table? (ie. 100 rows showing 25 at a time).  Will it sort all the data or just the visible data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721634">2</a> by Raymond Camden
		posted on 1/28/2010 at 6:33 PM
		</div>
		<div class="comment_text"><p>This is just for visible data. I plan on looking at jqGrid in the future for pagination. I first used jqGrid working with Scott Stroz, but haven't had a time to work up a nice blog entry on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721618">3</a> by Brian Swartzfager
		posted on 1/28/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>@Jim In addition to the jqGrid Ray mentioned, another table sorting plugin that will sort even paginated tables is dataTables (<a href="http://disq.us/url?url=http%3A%2F%2Fdatatables.net%3AitAmtu1xUF04GnDia9Qh5osBEUs&amp;cuid=3321886" rel="nofollow noopener" title="http://datatables.net">http://datatables.net</a>).  dataTables also lets you filter the records (though only with a single filter input).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721631">4</a> by Gary Stanton
		posted on 1/28/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>There's a seperate 'sub' plugin for TableSorter called 'Pager' which handles pagination nicely.<br>I've been using it for a while. Of course you have to load the whole recordset before the JS kicks in and paginates it, but it's not too slow unless you're also loading images for each record.<br>Perhaps there's a way to pull each page's content in using AJAX?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721633">5</a> by Jim Papaleo
		posted on 1/28/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>I use jqGrid (v 3.5) on a portal application.  A CF'er named Kumar has some good examples out there. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusion-ria.com%2FBlog%2Findex.cfm%2F2009%2F1%2F27%2FUsing-jQuery-based-jqGrid-with-ColdFusion-Part-1%3Aw6tp_nT4OgWRWEKnWf1obkLdpRk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusion-ria.com/Blog/index.cfm/2009/1/27/Using-jQuery-based-jqGrid-with-ColdFusion-Part-1">http://www.coldfusion-ria.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721629">6</a> by Dan G. Switzer, II
		posted on 1/28/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>I noticed you're using the URL:<br><a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a></p><p>I actually don't recommend using this URL since it always loads the latest version of jQuery. While this may seem ideal, there are often compatibility issues that can crop up between revisions (especially changes like from 1.3.x to 1.4.x) and all the sudden code that was working yeterday, breaks for no apparent reason.</p><p>It's best to specify a specific revision, that way you can test your application/code with the newest revision before automatically updating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721637">7</a> by Phillip Senn
		posted on 1/28/2010 at 8:37 PM
		</div>
		<div class="comment_text"><p>The neat thing about jqGrid is that it works with jQueryUI themeroller.  You can pick from a bunch of different skins that are all hosted at Google.<br>Here's a link to my example, which contains a zip file you can download:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfmzengarden.com%2FjQueryZenGarden%2F001%2FIndex.cfm%3AvT73hkC3CewcXnFkFln9tihaBl4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfmzengarden.com/jQueryZenGarden/001/Index.cfm">http://www.cfmzengarden.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721620">8</a> by Dan Fredericks
		posted on 1/28/2010 at 8:38 PM
		</div>
		<div class="comment_text"><p>I incorporated this at my new job and they really liked how it worked. the table sort website give you good examples of how to enhance the table sort via ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721622">9</a> by Brian Lang
		posted on 1/28/2010 at 9:33 PM
		</div>
		<div class="comment_text"><p>I am also using the DataTables plugin (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.datatables.net%3ABUkvd8g8CvRYYeS9-gJezSlFZ4k&amp;cuid=3321886" rel="nofollow noopener" title="www.datatables.net">www.datatables.net</a>). On a recent project I used it along with the JQuery UI. DataTables supports the JQuery UI. Very sweet. And it's being used at the Olympics next month.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721627">10</a> by Raymond Camden
		posted on 1/28/2010 at 9:44 PM
		</div>
		<div class="comment_text"><p>@DanS: I live on the edge. ;) I'm not sure I agree with you, but at the same time, it certainly doesn't hurt to use a specific version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721626">11</a> by Michael De Jonghe
		posted on 1/29/2010 at 12:37 AM
		</div>
		<div class="comment_text"><p>I've just started using TableSorter in the last few months. I'm not yet a CFB convert... So I "fixed" the configuration files in DW to add the &lt;thead&gt;&lt;th&gt; and &lt;tbody&gt; tags to my favorite DW Dynamic Table command.</p><p>You'll want to save a copy of this file:</p><p>C:\Program Files\Adobe\Adobe Dreamweaver CS4\configuration\Commands\ServerObjects\ColdFusion\DynamicTable_main.edml</p><p>Then copy over this bit of code:</p><p>&lt;participant version="5.0"&gt;<br>&lt;insertText location="afterSelection"&gt;<br>&lt;![CDATA[<br>&lt;table&lt;@if (@@Border@@) @&gt; border="@@Border@@"&lt;@endif@&gt;&lt;@if (@@CellPadding@@) @&gt; cellpadding="@@CellPadding@@"&lt;@endif@&gt;&lt;@if (@@CellSpacing@@) @&gt; cellspacing="@@CellSpacing@@"&lt;@endif@&gt;&gt;<br>&lt;thead&gt;<br>&lt;tr&gt;<br>&lt;@ loop (@@FieldLabelArray@@) @&gt;<br>&lt;th&gt;@@FieldLabelArray@@&lt;/th&gt;<br>&lt;@ endloop @&gt;<br>&lt;/tr&gt;<br>&lt;/thead&gt;<br>&lt;tbody&gt;<br>&lt;cfoutput query="@@RecordsetName@@"&lt;@ if (@@PageSize@@) @&gt; startRow="#StartRow_@@RecordsetName@@#" maxRows="#MaxRows_@@RecordsetName@@#"&lt;@endif@&gt;&gt;<br>&lt;tr&gt;<br>&lt;@ loop (@@FieldNameArray@@) @&gt;<br>&lt;td&gt;#@@RecordsetName@@.@@FieldNameArray@@#&lt;/td&gt;<br>&lt;@ endloop @&gt;<br>&lt;/tr&gt;<br>&lt;/cfoutput&gt;<br>&lt;/tbody&gt;<br>&lt;/table&gt;<br>]]&gt;&lt;/insertText&gt;<br>&lt;/participant&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721628">12</a> by Dan G. Switzer, II
		posted on 1/29/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Trust me, I've used jQuery since v1.1 and you really don't want to assume your code is always going to work with the latest and greatest code. In every point revision there have been another major changes that you absolutely need to test existing code before implementing in production.</p><p>While you might not run into an issue, as your usage of jQuery expands, then the more likely you'll run into compatibility issues. We utilize jQuery heavily in my day job, and I've had to make changes to code everytime jQuery has been updated to a new revision in order to get the code working 100%.</p><p>The worst thing that can happen to you is for an application just to stop working with no clue to why it's not working. By relying on a 3rd party to provide your application with code that at any time could change, it makes it very hard to find changes in behavior.</p><p>Image knowing that an app that's been working fine for years, all the sudden broke. You knew the code hasn't changed, the server hasn't changed, etc. How long is it going to take you to finally figure out that what has changed as the version of a library being loaded into the page. My guess is that's way down in the chain of what most people are going to look at.</p><p>I'm just pointing this out because in my own experience if I had relied on automatically using the latest build of jQuery, I would have seen several applications break without reason numerous times.</p><p>Also, one thing to keep in mind is that the jQuery UI has traditionally been tied very tightly to specific versions of jQuery. Most versions of the UI library only work with specific revisions of jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721630">13</a> by Raymond Camden
		posted on 1/29/2010 at 2:44 AM
		</div>
		<div class="comment_text"><p>Very good points, Dan. I've only used jQuery for a short time now so I've not had to worry much about updates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721623">14</a> by Don Blaire
		posted on 1/29/2010 at 2:53 AM
		</div>
		<div class="comment_text"><p>Thanks for the posting and the live demo example.  The methods I have used in the past was not always stable in sorting a table. I am looking forward to using what you have demonstrated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721624">15</a> by Dan Parker
		posted on 1/29/2010 at 4:57 AM
		</div>
		<div class="comment_text"><p>jqGrid also has a table 2 grid option, while not as efficient as tablesorter, allows for a consistent look for paged or non-paged tables.</p><p>jqGrid w/efficient methods of SQL paging (<a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2008%2F6%2F10%2FPagination-your-data-in-MSSQL-2005%29%3ACouLuCP01WTHTDIhc6Skv8U5hog&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2008/6/10/Pagination-your-data-in-MSSQL-2005)">http://blog.pengoworks.com/...</a> and CF make a great combo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721635">16</a> by Brig
		posted on 7/22/2011 at 12:24 AM
		</div>
		<div class="comment_text"><p>Thanks for your code and demos - I love it and am using it extensively for a non-profit's internal client tracking application. Question: can sort order be saved to a session variable somehow? So if a user sorts, leaves the page and returns, his sort preference is persistent?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721625">17</a> by Brian Swartzfager
		posted on 7/22/2011 at 12:33 AM
		</div>
		<div class="comment_text"><p>@Brig:  It doesn't look like tableSorter has any built-in mechanism for that, but a quick Google search turned up a few links (<a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1955980%2Fhow-to-get-current-sort-order-from-tablesorter-plugin%3ADSlmxgZfk4Lsk9YNOKsZzwBKFsE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1955980/how-to-get-current-sort-order-from-tablesorter-plugin">http://stackoverflow.com/qu...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fybits.net%2F2009%2F10%2Fmaking-jquery-tablesorter-persistent%2F%29%3ABC1popciPLPz_QTcE8j_l2nwksc&amp;cuid=3321886" rel="nofollow noopener" title="http://ybits.net/2009/10/making-jquery-tablesorter-persistent/)">http://ybits.net/2009/10/ma...</a> on ways to read the current sort state of the table.</p><p>And once you have the current sort state, you should be able to preserve that in a cookie, then just look for the cookie on page load and if it exists use it to set the initial sort.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721641">18</a> by Brig
		posted on 7/22/2011 at 12:42 AM
		</div>
		<div class="comment_text"><p>Brian, I ran into the cookie method in my research. I was hoping to be able to do it with cf session and not cookies though, since many of my users will have cookies disabled. Alas! But thanks for your reply!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721636">19</a> by Phillip Senn
		posted on 7/22/2011 at 1:05 AM
		</div>
		<div class="comment_text"><p>The bridge between JavaScript and ColdFusion is the DOM.  ColdFusion can populate the DOM to tell JavaScript something, and JavaScript can populate the DOM.  If you are comfortable with ajax, then you can have JavaScript send an ajax command to a .cfm page to populate the session scope.  But if that's too complicated, then have js populate a form variable and when the user eventually DOES do a submit, set the session variable equal to the form variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721632">20</a> by Chris Bowyer
		posted on 3/25/2014 at 7:31 AM
		</div>
		<div class="comment_text"><p>Nice! Will try this out. Note. Demo sorting does not appear to work. I have tried in Safari and Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721640">21</a> by Raymond Camden
		posted on 3/25/2014 at 2:53 PM
		</div>
		<div class="comment_text"><p>The tablesorter JS file is 404ing. It is an old demo so I probably won't fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721638">22</a> by Raymond Camden
		posted on 3/25/2014 at 2:57 PM
		</div>
		<div class="comment_text"><p>Ok I lie - I fixed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721639">23</a> by Chris Bowyer
		posted on 3/26/2014 at 1:09 AM
		</div>
		<div class="comment_text"><p>Cool! I have no idea how you fit everything in each day anyway. Maybe you could do an article on that one day. I should mention, I got it up and running immediately from your instructions. The only thing that took a bit of time was figuring out how to extend it with a jQuery UI theme - mainly because of not immediately tripping over the documentation I needed. URL available on request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721645">24</a> by Raymond Camden
		posted on 3/26/2014 at 1:15 AM
		</div>
		<div class="comment_text"><p>I really haven't played much with jQuery UI lately. It works - and I know it is there - but I just don't find myself needing it often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721648">25</a> by Chris Bowyer
		posted on 3/26/2014 at 2:09 AM
		</div>
		<div class="comment_text"><p>It hasn't really changed much in years and although I would love to look at other platforms, I just don’t find the time. I would also like to blog, in particular about things like my experience yesterday, but I spend so much time writing other peoples' content, probably more on that than actually coding these days, I don’t find time for that either. A bit like a mechanic who never gets around to fixing his/her own car - which reminds me. I really should replace the rear wiper that died years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721652">26</a> by Chris Bowyer
		posted on 3/26/2014 at 3:42 AM
		</div>
		<div class="comment_text"><p>For extending with jQuery UI, here's the required documentation - <a href="http://disq.us/url?url=http%3A%2F%2Fmottie.github.io%2Ftablesorter%2Fdocs%2Fexample-widget-ui-theme.html%3AaJWzvdIo75VS5oSMGp0ETGGrPhw&amp;cuid=3321886" rel="nofollow noopener" title="http://mottie.github.io/tablesorter/docs/example-widget-ui-theme.html">http://mottie.github.io/tab...</a></p></div>
	</div>
</div>
		