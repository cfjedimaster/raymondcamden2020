
<div class="comment" id="c_1713670001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670001">1</a> by Steve Sequenzia
		posted on 8/10/2007 at 2:34 AM
		</div>
		<div class="comment_text"><p>Yes it has been a gridy week.</p><p>Thanks to your help I have got some pretty cool grids working by binding to a cfdiv.</p><p>Here is a little demo of one.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8%2Fcfgrid%2Fcontacts.cfm%3Al1Un0aB-7VLoRE9zq40PYyru8Ks&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8/cfgrid/contacts.cfm">http://demo.thinksys.com/cf...</a></p><p>Thanks again for all the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670003">2</a> by Will
		posted on 8/10/2007 at 4:19 AM
		</div>
		<div class="comment_text"><p>Hey Ray, this works great except for one thing - when the page loads, it fires on the first row as it starts out selected. Is there a way to make it not auto-select the first row when loading a grid? I couldn't find anything about that in the CF8 docs. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670005">3</a> by Raymond Camden
		posted on 8/10/2007 at 5:03 AM
		</div>
		<div class="comment_text"><p>To me - that's a feature. :) Try selectOnLoad="false".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670004">4</a> by Steve Sequenzia
		posted on 8/10/2007 at 5:15 AM
		</div>
		<div class="comment_text"><p>Yup... selectOnLoad="false" works. I like it better on also, though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670006">5</a> by Will
		posted on 8/10/2007 at 6:04 AM
		</div>
		<div class="comment_text"><p>Thanks guys. I agree that it's a great feature that it can auto-select, but when I want clicking on the grid to take you somewhere else, it's not so good :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670007">6</a> by Raymond Camden
		posted on 8/10/2007 at 4:36 PM
		</div>
		<div class="comment_text"><p>Nice use of pod, Steve. I forget how nice it looks. I'll add that to my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670010">7</a> by Will
		posted on 8/10/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>Last question on this, I promise. Is there a way to do this based on the specific column a user clicked on versus just the entire row? I'd like to perform different javascript calls based on the column in the row the user selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670027">8</a> by Abul
		posted on 8/10/2007 at 7:02 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is their a way to add a image to the data grid?</p><p>Your this example is coooooooooooool.</p><p>Abul</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670021">9</a> by Raymond Camden
		posted on 8/10/2007 at 8:28 PM
		</div>
		<div class="comment_text"><p>Abul: Yes. You just include it in your data. So for example, I added this to a test to modify an existing query before passing it to my grid:</p><p>&lt;cfloop query="getData"&gt;<br>	&lt;cfset querySetCell(getData, "test", "&lt;img src='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fimages%2Fme.jpg%27%3E%3AqgesqAVqVTMobY4tfniRJn4h6-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/images/me.jpg'>">http://www.coldfusionjedi.c...</a>", currentROw)&gt;<br>&lt;/cfloop&gt;</p><p>I'll do a full demo later today.</p><p>@Will: I don't think so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670023">10</a> by Marty McGee
		posted on 8/13/2007 at 4:44 AM
		</div>
		<div class="comment_text"><p>Hey Steve - that demo you have at <a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8%2Fcfgrid%2Fcontacts.cfm%3Al1Un0aB-7VLoRE9zq40PYyru8Ks&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8/cfgrid/contacts.cfm">http://demo.thinksys.com/cf...</a> is pretty cool.  I'm interested to see the code.  If you're up for it, please post the code you created for your cfgrid-cfpod example.  (I'm sure some others would like to see what you've done too! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670022">11</a> by Steve Sequenzia
		posted on 8/13/2007 at 7:07 AM
		</div>
		<div class="comment_text"><p>@Marty</p><p>I just added the code to the bottom of the demo page. Let me know if you have any questions that I can help with.</p><p>I also did a demo with two connected grids. Here is a demo of it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8%2Fcfgrid%2F2grids.cfm%3AL4r-nFcO5zJPhx3FIJFsNMiBjq8&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8/cfgrid/2grids.cfm">http://demo.thinksys.com/cf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670020">12</a> by Marty McGee
		posted on 8/13/2007 at 7:27 AM
		</div>
		<div class="comment_text"><p>@ Steve</p><p>SWEET!  Thanks for doing this.  Just so others can follow along, Steve Sequenzia has offered two code examples for binding data 1) to a cfdiv, and 2) to a second cfgrid on the same page, based on a cfgrid row click (awesome):</p><p>1) cfgrid-to-cfdiv example:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8%2Fcfgrid%2Fcontacts.cfm%3Al1Un0aB-7VLoRE9zq40PYyru8Ks&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8/cfgrid/contacts.cfm">http://demo.thinksys.com/cf...</a></p><p>2) cfgrid-to-cfgrid example:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8%2Fcfgrid%2F2grids.cfm%3AL4r-nFcO5zJPhx3FIJFsNMiBjq8&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8/cfgrid/2grids.cfm">http://demo.thinksys.com/cf...</a></p><p>Thanks Steve!  I'm sure this will be very helpful for readers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670025">13</a> by Mike Sprague
		posted on 8/14/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>Does anyone know how to 'de-select' all rows in the grid using JavaScript?  I have a function that I want to run that requires all the rows to be cleared.  So far, the only way I can seem to do this is to re-load the grid.  That seems like a waste of processing.  Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670026">14</a> by Tony Garcia
		posted on 8/17/2007 at 3:11 PM
		</div>
		<div class="comment_text"><p>Steve's examples are very cool.<br>If you do a 'veiw source' on those pages, though, you can see that there are a bunch of .js files callled at the top. Anyone know how much file size overhead this stuff is adding??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670024">15</a> by Tony Garcia
		posted on 8/17/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>All right. I analyzed Steve's first example using the site analyzer at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.websiteoptimization.com%3AL1FlAZoEwi4m0AL09nSxMrN6mdM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.websiteoptimization.com">http://www.websiteoptimizat...</a>. Here's how it breaks down:<br>HTML: 3.1 kb<br>CSS: 6.7 kb<br>Javascript: 435 kb!</p><p>Wow. All these cool AJAX tricks that you can do with CF8 look cool. But a simple page like this weighing in at almost a half megabyte, you better hope none of your users are still on dialup....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670031">16</a> by Will
		posted on 8/17/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Rey bango made a post about shrinking the CF js files. Try using Dojo's Shrinksafe:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Falex.dojotoolkit.org%2Fshrinksafe%2F%3AXVW8JHCYshFUQyeWreQg0_cAAYg&amp;cuid=3321886" rel="nofollow noopener" title="http://alex.dojotoolkit.org/shrinksafe/">http://alex.dojotoolkit.org...</a></p><p>I did it for the Spry js files and they all still work perfectly but are a fraction of their original size.</p><p>(original blog link to Rey's post : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.reybango.com%2Findex.cfm%2F2007%2F7%2F22%2FCompressing-Sprys-JavaScript-Files%29%3Aem8DUa4hRLQyDrLSJ33QNe7zZJQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.reybango.com/index.cfm/2007/7/22/Compressing-Sprys-JavaScript-Files)">http://www.reybango.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670030">17</a> by Raymond Camden
		posted on 8/17/2007 at 11:50 PM
		</div>
		<div class="comment_text"><p>I want to +1 the recommendation on the Spry files. To be fair to the Spry team - Spry isn't officially released yet, and they have always promised to shrink the files when totally done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670029">18</a> by Tony Garcia
		posted on 8/18/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>I don't want to sound like a naysayer here, but looking at the  generated source of Steve's first example, the vast majority of the javascript files called are from the YUI and EXT packages, not Spry. And Rey's post mentioned that only the Spry files are uncompressed. So unless I'm not understanding something here, compressing the Spry files shouldn't make much of a difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670032">19</a> by Peter Swanson
		posted on 8/22/2007 at 3:54 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Nice post. However, I think I've found a bug. If you click on a title, the javascript popup displays with the title and the ID just fine. However, if you close the popup window, then click on the same title again, no popup appears. I know this is a minor issue, however, I believe some users will invariably close the window, then want to see the same info again.</p><p>How to get around this one?</p><p>Thanks,</p><p>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670033">20</a> by Raymond Camden
		posted on 8/22/2007 at 5:19 PM
		</div>
		<div class="comment_text"><p>Hmm. I tried to specify an event:</p><p>&lt;cfajaxproxy bind="javascript:noteChange({entries.title@mousedown},{<a href="http://disq.us/url?url=http%3A%2F%2Fentries.id%3AX0zfGuZOtqqK0XdSFFsWLKjwfew&amp;cuid=3321886" rel="nofollow noopener" title="entries.id">entries.id</a>@click})"&gt;</p><p>but it didn't work. Notice I tried both mousedown and click.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670034">21</a> by Camilo
		posted on 9/2/2007 at 6:56 AM
		</div>
		<div class="comment_text"><p>Hello Everyone,</p><p>I was studying the code, and could not duplicate the examples posted, can you Steve Sequenzia please post a zip of the files, so that I can study the source, along with any one else for the matter?</p><p>a studying student,<br>Camilo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670038">22</a> by Steve Sequenzia
		posted on 9/2/2007 at 8:15 AM
		</div>
		<div class="comment_text"><p>Here is a zip of the examples I did:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.thinksys.com%2Fcf8-grid-examples.zip%3A3VaETm8DV4qkX5Dj4suMN7yP7Hg&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.thinksys.com/cf8-grid-examples.zip">http://demo.thinksys.com/cf...</a></p><p>Let me know if I can help.</p><p>-Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670035">23</a> by Camilo
		posted on 9/2/2007 at 9:35 AM
		</div>
		<div class="comment_text"><p>Well thanks for the understanding, there was an error <br>the code could not find the cfc</p><p>it is in the same directory, and still error.  But I have the code, and this has greatly help me out.  thanks for giving me the leg up with this ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670037">24</a> by Camilo
		posted on 9/2/2007 at 10:38 AM
		</div>
		<div class="comment_text"><p>Never Mind, I got it... I caught the error..it was the db connection.  I set one up and the light came on.  Thanks everyone for sharing such great code.</p><p>There is a lot that I can learn from from everyone here !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670039">25</a> by Matteo Stagi
		posted on 9/14/2007 at 4:46 PM
		</div>
		<div class="comment_text"><p>I needed to have a cflayout bind to 2 differents grids. In the cflayout there is the form code to update news in the DB. In the first grid there is a list of last 20 inserted news. Clicking on the grid you can update the news using the form. But I needed also a search form to retrieve old news to update. This search form populate a second grid. To have both grid working on grid change I used the cfajaxproxy as explained by Raymond</p><p>&lt;script&gt;<br>function UpdateFromGrid(gridname,id) {<br>   ColdFusion.navigate('newseditor.cfm?action=update&amp;ID='+id,'CentralAdmin');<br>&lt;/script&gt;</p><p>And</p><p>&lt;cfajaxproxy bind="javascript:UpdateFromGrid('SearchResults',{<a href="http://disq.us/url?url=http%3A%2F%2FSearchResults.id%3AE8Dfq2vu2lfV3gvpPTcaJVlYJ0w&amp;cuid=3321886" rel="nofollow noopener" title="SearchResults.id">SearchResults.id</a>})"&gt;<br>&lt;cfajaxproxy bind="javascript:UpdateFromGrid('LastNews',{<a href="http://disq.us/url?url=http%3A%2F%2FLastNews.id%3AWzrxu3O7nDm8x4kotASGd4c53Ac&amp;cuid=3321886" rel="nofollow noopener" title="LastNews.id">LastNews.id</a>})"&gt;</p><p>Where SearchResults and LastNews are the two cfgrids and CentralAdmin is the cflayout.</p><p>But I had the problem of selecting the previous selected row, arised by Peter. This is a problem in particular if your search query returns just one row. You can click on it just once. This other great article by Raymond (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F8%2F20%2FCustom-grid-renderers-with-CFGRID%29%3AfGjnceUqzMWih7rT7F0NIQdf0YU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/8/20/Custom-grid-renderers-with-CFGRID)">http://www.coldfusionjedi.c...</a> suggested my the solution:</p><p>&lt;script&gt;<br>function UpdateFromGrid(gridname,id) {<br>   ColdFusion.navigate('newseditor.cfm?action=update&amp;ID='+id,'CentralAdmin');<br>   mygrid = ColdFusion.Grid.getGridObject(gridname);<br>   sm = mygrid.getSelectionModel()<br>  sm.clearSelections(false);<br>&lt;/script&gt;</p><p>Unfortunately this didn't work. The selection was cleared but the onChange event was still not fired when selecting again a previously selected row.</p><p>Studying cfgrid.js I think to have finally find the solution:</p><p>&lt;script&gt;<br>function UpdateFromGrid(gridname,id) {<br>   ColdFusion.navigate('newseditor.cfm?action=update&amp;ID='+id,'CentralAdmin');<br>   mygrid = ColdFusion.Grid.getGridObject(gridname);<br>   sm = mygrid.getSelectionModel()<br>   sm.clearSelections(false);<br>   ColdFusion.objectCache[gridname].selectedRow=-1;<br>&lt;/script&gt;</p><p>This worked for me. Now I have two different grid controlling a cflayout and you can click on previously clicked row and have the action fired.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670040">26</a> by Neil
		posted on 10/9/2007 at 2:19 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks so much for this very useful post.  The CF 8 docs are very obtuse on this point; they make it seem like you can just use the cfgrid's onchange event listener.  However, onchange doesn't seem to work in this context.  Your post has saved the day after about 4-6 hours of searching.</p><p>Thanks!</p><p>-Neil</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670043">27</a> by Michael Skinner
		posted on 10/31/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>Does not work when using flash format. Any work around?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670044">28</a> by Raymond Camden
		posted on 10/31/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>Not to be silly - but don't use Flash Forms. Seriously. If you like them- use Flex 2 where you have much more control over them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670045">29</a> by Michael Skinner
		posted on 10/31/2007 at 10:33 PM
		</div>
		<div class="comment_text"><p>I have no choice in the matter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670047">30</a> by Dave Phipps
		posted on 12/10/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Just trying to create a new tab in a cflayout when a grid item is selected. I managed to get it to create and select the tab but I can't seem to pick up the id that I give to the new tab's source attribute. The id doesn't seem to be in the attributes or url scope (I'm using fusebox).</p><p>I have a fuseaction that sets up the cflayout. A default tab has another fuseaction as its source. This tab contains a cfgrid which when a row is click it fires the noteChange function which creates a new tab and uses another fuseaction as the source also passing the id in the source url.</p><p>How do I pick up that id within the new tab?</p><p>Here's the javascript:</p><p>&lt;script&gt;<br>noteChange = function(orderid) {<br>  var newTab = 'odetail_' + orderid;<br>  var newName = 'Order Details:- ' + orderid;<br>  var oUrl = 'index.cfm?page=admin.orderDetail&amp;orderid=' + orderid;<br>  ColdFusion.Layout.createTab('tabcontainer',newTab,newName,oUrl,{closable:true});<br>  ColdFusion.Layout.selectTab('tabcontainer',newTab);<br>}<br>&lt;/script&gt;</p><p>Also, notice that I had to define the function as noteChange = function() {}</p><p>rather than just function noteChange() {}</p><p>I read in the docs that this is something to do with the fact that the script is running from within a tab rather than the top level page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670046">31</a> by Dave Phipps
		posted on 12/10/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>scratch that last post - I had the orderid in the url with &amp;amp; instead of &amp; and changing this seems to have resolved the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670048">32</a> by sneha
		posted on 8/2/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>I'm working on something similar to steve's second example wherein i want to filter grid2 results based on grid1 selection which works fine except that I WANT ALL RECORDS TO BE DISPLAYED IN GRID2 ON PAGE LOAD. I have selectOnLoad=false (TO DISABLE SELECTION ON LOAD SO I CAN HAVE ALL RECORDS IN GRID2) in grid1 &amp; bind attribute for grid2 has this:<br>bind="cfc:employeeService.getData({cfgridpage},{cfgridpagesize},<br>	{cfgridsortcolumn},{cfgridsortdirection},{grid1.FirstName})"</p><p>i just don't know whats getting passed in {grid1.FirstName} the first time page loads. The grid is always blank on page load. Only when a row is clicked, results are filtered in grid2.</p><p>I've been scratching my head for hours..unable to find whats wrong..pls help someone..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670053">33</a> by Matts
		posted on 2/11/2009 at 5:43 AM
		</div>
		<div class="comment_text"><p>I've successfully implemented this on a web site<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rgpc.ca%2Fresource%2F%3Abvtq7yx2ZkhbliN9VmLPY9UpdVo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rgpc.ca/resource/">http://www.rgpc.ca/resource/</a></p><p>Grid click opens a cfwindow<br>Click on the [X] or a close window hyperlink calls a javascript which runs<br>ColdFusion.Window.destroy('window_name',true);</p><p>BUT, if the user then clicks on the same row in the grid, nothing happens. They have to click on a different grid row to open (create) another window.</p><p>Any ideas how to fix?<br>&lt;script language="javascript"&gt;<br>function noteChange(id) {<br>		ColdFusion.Window.create('resource_detail', 'Resource Details', '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.rgpc.ca%2Fresource%2Fresource.cfm%3Fid%3D%27%3ARDrsvFkmd5VTDm0L09RR_C7N5lA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rgpc.ca/resource/resource.cfm?id='">http://www.rgpc.ca/resource...</a> + id, {modal:false, width:&lt;cfoutput&gt;#cfwindow_width#&lt;/cfoutput&gt;, height:&lt;cfoutput&gt;#cfwindow_height#&lt;/cfoutput&gt;, closable:true, x:400, y:100});</p><p>		ColdFusion.Window.onHide('resource_detail', destroy_window);</p><p>}<br>function destroy_window() {<br> ColdFusion.Window.destroy('resource_detail',true); <br>&lt;/script&gt;</p><p>any help much appreciated!</p><p>Cheers,</p><p>Matts</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670049">34</a> by Matts
		posted on 2/11/2009 at 7:18 AM
		</div>
		<div class="comment_text"><p>I've been looking around some more and it seems some people have had some success with</p><p>ColdFusion.objectCache['resource_list'].selectedRow=-1;</p><p>where 'resource_list' is the name of the cfgrid</p><p>I've added this in various places in my javascript -- no js errors are posted, but also no luck!</p><p>Matts</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670050">35</a> by Matts
		posted on 2/11/2009 at 7:31 AM
		</div>
		<div class="comment_text"><p>Thanks to Matteo Stagi from above (a couple years ago)... there is some javascript that FINALLY solves this issue of not being able to 're-click' the same grid row...</p><p>mygrid = ColdFusion.Grid.getGridObject('resource_list');<br>sm = mygrid.getSelectionModel()<br>sm.clearSelections(false);		ColdFusion.objectCache['resource_list'].selectedRow=-1;</p><p>Hope this helps someone out there!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670052">36</a> by Tones411
		posted on 2/18/2009 at 9:00 PM
		</div>
		<div class="comment_text"><p>I couldn't get ajaxproxy to work in my case. I went with this alternative: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.danvega.org%2Fblog%2Findex.cfm%2F2008%2F3%2F20%2FCFGrid-Event-Listeners%3ApG8Ic5-tRoa50V2oZLpiGarq3As&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danvega.org/blog/index.cfm/2008/3/20/CFGrid-Event-Listeners">http://www.danvega.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670054">37</a> by James
		posted on 3/19/2009 at 6:20 PM
		</div>
		<div class="comment_text"><p>As always I had a problem and you came up with the solution. Thanks once more!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670055">38</a> by Clay
		posted on 9/29/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>I am just dipping my toe into the CF Ajax world and am loving it, but ran into some issues, where I am stumped. I have a cfgrid that is pulling a query from a cfc. I got this to work with no problems. Now I am attempting to utilize cfwindow for detail information. So, when an end user clicks on a row in the grid, a cfwindow pops up with more detailed information. It works great the first time. After I close the window and click another row, the ID is null. Thoughts?</p><p>Here is my code...</p><p>function showDetail(id) {<br>                alert(id);<br>                var windowID = '_detail'+id;<br>                ColdFusion.Window.create(windowID,'Order Details','details.cfm?orderDetails='+id,{x:100,y:100,height:150,width:500,modal:false,closable:true,draggable:false,resizable:false,center:false,refreshOnShow:true});                ColdFusion.objectCache[getOrders].selectedRow=-1;<br>}</p><p>FYI, the cfwindow, simply contains code that pulls a query based upon the passed url parameter to populate a cfgrid within the cfwindow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670058">39</a> by Clay
		posted on 9/29/2009 at 10:33 PM
		</div>
		<div class="comment_text"><p>Ray...disregard previous post. I found issue. To "save time", I copied the code for the grid from the parent page to the cfwindow. I forgot to change the name. Duh!</p><p>Keep using the force!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670061">40</a> by Yousaf Riaz
		posted on 1/28/2010 at 3:00 AM
		</div>
		<div class="comment_text"><p>Well this does not work if the form format is flash .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670059">41</a> by Raymond Camden
		posted on 1/28/2010 at 3:06 AM
		</div>
		<div class="comment_text"><p>Correct. I do not recommend using Flash Forms anymore. Just use Flex. Newer - better - and free.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670062">42</a> by Dwayne Anderson
		posted on 1/27/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>using the code in this post, how can I move records from a cfgrid to another emoty grid when selected?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670063">43</a> by Raymond Camden
		posted on 1/27/2011 at 12:12 AM
		</div>
		<div class="comment_text"><p>What's an emoty grid?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670065">44</a> by Dwayne Anderson
		posted on 1/27/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>Sorry, I meant empty...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670066">45</a> by Raymond Camden
		posted on 1/27/2011 at 12:15 AM
		</div>
		<div class="comment_text"><p>You would need to look at Ext's API for Grids. CF gives you access to get the core grid object. So you would need to see how one adds rows to grids dynamically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670069">46</a> by Stefan
		posted on 7/27/2011 at 10:23 AM
		</div>
		<div class="comment_text"><p>Hello,<br>I'd like to put a button inside of a grid toolbar and make a bind to that button with cfajaxproxy.<br>	var tbar = ColdFusion.Grid.getTopToolbar("artists");<br>		//var tbar = grid.getTopToolbar();<br> 		tbar.addButton({text:"Delete"<br>						, tooltip:"Aplica filtrul pe randurile selectate."<br>						, id:"deletebutton"<br>						, name:"deletebutton"<br>						, iconCls:"icon-table-save"<br>						, disabled: false<br>						/*, handler:onApplyFilter */<br>		});</p><p> 		tbar.addSeparator();<br>		//grid.showTopToolbar();<br>		ColdFusion.Grid.showTopToolbar("artists");<br>How can I do this?<br>If I use <br>&lt;cfajaxproxy bind="javascript:noteChange({artists.deletebutton@click},{<a href="http://disq.us/url?url=http%3A%2F%2Fartists.id%3AITxp7AyL6niywTScV3IKnqC5krE&amp;cuid=3321886" rel="nofollow noopener" title="artists.id">artists.id</a>@none})"&gt;<br>the script fires when I click a row (and the corespondent to the artists.deletebutton@click is undefined), but not when I click that button.<br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670070">47</a> by Sandra
		posted on 8/2/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>Does anyone has a working example of binding the cfgrid to the cfdiv? The links posted by Steve Sequenzia are now broken :(. <br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670072">48</a> by Sandra
		posted on 8/2/2011 at 6:49 PM
		</div>
		<div class="comment_text"><p>Got it. It's simple as <br>&lt;cfdiv bind="{gridname.gridcolumnname}" ID="myDiv" "/&gt; .</p></div>
	</div>
</div>
		