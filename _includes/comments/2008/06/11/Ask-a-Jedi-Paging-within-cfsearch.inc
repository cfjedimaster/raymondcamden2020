
<div class="comment" id="c_1713681705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681705">1</a> by ryanTJ
		posted on 6/11/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>Pagination.cfc on RiaForge is a pretty nice pagination tool. You supply a query and the max records per page and it handles start/end rows for you. You still display your results but pagination.cfc creates the prev/next and page numbers for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681702">2</a> by Andy Sandefer
		posted on 6/17/2008 at 7:35 AM
		</div>
		<div class="comment_text"><p>&lt;cfreturn QueryConvertForGrid(qrySearchResults, <a href="http://disq.us/url?url=http%3A%2F%2FARGUMENTS.page%3AxGxcS5RwC5aaPtsNy9S2zclx1b4&amp;cuid=3321886" rel="nofollow noopener" title="ARGUMENTS.page">ARGUMENTS.page</a>, ARGUMENTS.pageSize)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681692">3</a> by Raymond Camden
		posted on 6/17/2008 at 12:29 PM
		</div>
		<div class="comment_text"><p>@Andy - Yep, good one. That func was primarily built for Ajax, but you can use it outside of Ajax as well. Just remember it doesn't return a query though - if I remember right it's a struct with a query inside it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681699">4</a> by Andy Sandefer
		posted on 6/17/2008 at 6:56 PM
		</div>
		<div class="comment_text"><p>I'm a huge fan of the html grid and can't live without it!  One of my clients has a ton of report files organized by department and I made a cfgrid on the left for department selection and a second (bound) cfgrid on the right which calls a method who in turn does a cfdirectory based on the selected department and then displays the cfdirectory's results to a grid so that I can display files in the right hand grid for whichever department is selected in the left hand grid.  I took this a step further and added filter as you type functionality (kind of like what you did for RIA Forge Ray!) for both grids as well as Add, Edit and Delete using cfajaxproxy and cfwindow madness and they liked it.</p><p>This post has me thinking about cfsearching a collection based on indexed documents as a user types and dynamically refreshing a grid based on the collection's search results - this would be for my Convergence Product (I demo'd an earlier version of this during Best of Scorpio but you weren't there that day).</p><p>Anyway, this type of stuff runs way quick in Firefox and Safari but really awful in IE.  I hope that IE8 is not so much of a turd at AJAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681703">5</a> by futr_vision
		posted on 6/22/2009 at 7:23 PM
		</div>
		<div class="comment_text"><p>I'm quite getting how to paginate the results from cfsearch. is this applicable to results returned to a cfgrid? My understanding is that is not doable when a cfgrid is involved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681708">6</a> by Raymond Camden
		posted on 6/22/2009 at 11:30 PM
		</div>
		<div class="comment_text"><p>When you return data for cfgrid, it has to be in a special format. Something like a struct with a TOTAL and a DATA (query) key. I'm not 100% sure - but the docs are. If you use queryConvertForGrid, you don't have to worry about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681710">7</a> by futr_vision
		posted on 6/23/2009 at 1:21 AM
		</div>
		<div class="comment_text"><p>I've got a cfsearch that does populate a cfgrid. I'm using 2 of the 4 custom fields to store that data. It outputs nicely to the cfgrid but pagination is non-existent despite defining pagesize. Are you saying I can use queryConvertForGrid with the cfsearch?</p><p>Please excuse me if that is a stupid question. I am very new to CF programming or any programming for that matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681707">8</a> by Raymond Camden
		posted on 6/23/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>If you did query=... for the grid, it isn't an Ajax grid and pagination won't work. You need to load the data via a binding for it to be Ajax based and make use of paging.</p></div>
	</div>
</div>
		