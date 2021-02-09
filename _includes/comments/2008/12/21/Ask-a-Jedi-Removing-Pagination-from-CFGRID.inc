
<div class="comment" id="c_1713710837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710837">1</a> by Nate
		posted on 12/22/2008 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thanks for the post Ray. This is what I was looking for.</p><p>I am surprised that Adobe did not include some of these simpler options in their CF tags for use and that we have to dig into ExtJS to use them. There is an additional issue here that the grid look will change after the page has loaded (correct me here if I am wrong).</p><p>The advantage of using cfgrid with bind instead of using a cfdiv with an inline query and cfgrid is that cfdiv always shows the "loading graphic" whenever the select box is changed, while cfgrid with bind is much more dynamic. But the cfdiv solution sounds more pleasing to me right now than modifying the grid after it has loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710831">2</a> by Raymond Camden
		posted on 12/22/2008 at 9:10 PM
		</div>
		<div class="comment_text"><p>I think Adobe made some educated guesses as to what folks would _commonly_ do, and just added the JS API to cover the rest. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710835">3</a> by Nate
		posted on 12/22/2008 at 9:15 PM
		</div>
		<div class="comment_text"><p>The "hacks" into the libraries are great for doing things like a custom renderer for the cfgrid, removing pagination (along with allowing us to remove row selection) to me seems like a basic function that should be a part of the cfgrid implementation.</p><p>On the topic of the ExtJS libraries, is the whole lib included by Adobe or are only certain aspects of it (like the grid libraries implemented)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710840">4</a> by Akira
		posted on 12/22/2008 at 10:44 PM
		</div>
		<div class="comment_text"><p>Nate, as far as I know everything that is in Ext 1.1 is included in the CFIDE folder.</p><p>Ray, since Ext has changed their licensing model and moved to 2, do you know if Adobe is going to be including Ext 2 in a future update?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710833">5</a> by Raymond Camden
		posted on 12/22/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>@Akira: I'm not aware of any public statement. Personally, I think that - in GENERAL - you should use what is provided and documented only. Yes, the full Ext library may be there, but I'd stick to the official stuff. If you want to do more, then I'd grab my _own_ copy of Ext (it's what, 5k??) and use that version. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710838">6</a> by Akira
		posted on 12/23/2008 at 12:03 AM
		</div>
		<div class="comment_text"><p>Ray, makes sense but I don't like the GPL 3 that is on the new version of the Ext library. The old one isn't easy to find on their website.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710836">7</a> by Raymond Camden
		posted on 12/23/2008 at 12:05 AM
		</div>
		<div class="comment_text"><p>Ah, well, I was speaking in general. Personally I'm not a big fan of Ext. It seems a bit hard to use. Of course, I said the same about jQuery, and now I'm getting more used to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710834">8</a> by Anthony Patch
		posted on 1/15/2009 at 4:03 PM
		</div>
		<div class="comment_text"><p>How do you output the result set in getentries.cfm in order to populate the grid via the bind attribute?  In otherwords, what is in the getentries.cfm file?  Do you have to use queryConvertForGrid?  If so how?  Much appreciated,<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710839">9</a> by Raymond Camden
		posted on 1/16/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>Yep, queryConvertForGrid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710843">10</a> by Anthony Patch
		posted on 1/16/2009 at 3:18 PM
		</div>
		<div class="comment_text"><p>Thanks.  After reading LiveDocs, I found that you have to use queryConvertForGrid with serializeJSON in order to output correctly.  ex:<br>&lt;cfoutput&gt;#serializeJSON(QueryConvertForGrid(query, page, pagesize))#&lt;/cfoutput&gt;</p><p>It works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710845">11</a> by Nando
		posted on 2/1/2009 at 1:15 AM
		</div>
		<div class="comment_text"><p>I stumbled upon another way to remove pagination, which is to create your own footer under the grid. If you do that, it replaces the pagination footer with yours.</p><p>Here is how I've implemented it, adding a button to add a record with only a large red "+" icon in the middle of the button, and a delete button with an icon and the words "Delete Selected".</p><p>function initGrid() {<br>		grid = ColdFusion.Grid.getGridObject("RecipeHerbGrid");<br>		var gridFoot = grid.getView().getFooterPanel(true);<br>		var bbar = new Ext.Toolbar(gridFoot);      <br>		bbar.addButton({<br>		cls:"x-btn-text-icon",<br>		icon:"icons/add.png",<br>		handler:onAdd<br>		});<br>		bbar.addSeparator();<br>		bbar.addButton({<br>		text:"Delete Selected",<br>		cls:"x-btn-text-icon",<br>		icon:"icons/delete.png",<br>		handler:onDelete<br>		});<br>	}</p><p>Heck, while i'm posting this, I should also just go ahead and post the handler functions, in case it helps anyone. Took me a long time to pull all this together:</p><p>function onAdd(button,event){<br>		<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('addRecipeHerbWindow');<br>		// console.log(button);<br>		// console.log(event);<br>	}</p><p>	function addRecipeHerb() {<br>		//send data to CFC to add RecipeHerb, the result will be handled by handleResult function above<br>		var f = document.frmRecipeHerb;<br>		dataproxy.addNewRecipeHerb (<br>			f.recipeVariationId.value,<br>			f.herbId.value,<br>			f.weight.value<br>		);<br>		ColdFusion.Window.hide('addRecipeHerbWindow');<br>		ColdFusion.Grid.refresh('RecipeHerbGrid', true);<br>	}</p><p>	function onDelete(){<br>	<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('deleteRecipeHerbWin');<br>	}</p><p>	function deleteRecipeHerb(confirmMessage) {<br>	// if user choose to delete, then send the CFC call, otherwise just sit back!<br>	if (confirmMessage == 'yes')<br>	{<br>	var grid = ColdFusion.Grid.getGridObject("RecipeHerbGrid");<br>	var record = grid.getSelections();<br>	// remember, CF makes column names to all UPPERCASE, so dont forget to do that<br>	dataproxy.deleteRecipeHerb(record[0].data.RECIPEHERBID);<br>	}<br>	ColdFusion.Window.hide('deleteRecipeHerbWin');<br>	ColdFusion.Grid.refresh('RecipeHerbGrid', true);<br>	}</p><p>	function editRecipeHerb() {<br>		var grid = ColdFusion.Grid.getGridObject("RecipeHerbGrid");<br>		var record = grid.getSelections();<br>		dataproxy.editRecipeHerb (<br>			record[0].data.RECIPEHERBID,<br>			record[0].data.THEWEIGHT,<br>			record[0].data.PINYIN<br>		);<br>		ColdFusion.Grid.refresh('RecipeHerbGrid', true);<br>	}</p><p>It's all wired to the back end using the cfajaxproxy tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710844">12</a> by Michael Sinaysky
		posted on 6/27/2009 at 5:03 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Can you publish code for the getentries.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710859">13</a> by Raymond Camden
		posted on 6/27/2009 at 6:48 AM
		</div>
		<div class="comment_text"><p>This should be it. It uses a BlogCFC database.</p><p>&lt;cfquery name="entries" datasource="blogdev"&gt;<br>select   *<br>from   tblblogentries<br>&lt;cfif len(url.sort) and len(url.dir)&gt;<br>order by #url.sort# #url.dir#<br>&lt;/cfif&gt;<br>&lt;/cfquery&gt;</p><p>&lt;cfset data = queryConvertForGrid(entries, <a href="http://disq.us/url?url=http%3A%2F%2Furl.page%3AC_xO5sp56MglNem2Q4Q6x0wV5WE&amp;cuid=3321886" rel="nofollow noopener" title="url.page">url.page</a>, url.pagesize)&gt;<br>&lt;cfset encoded = serializeJSON(data)&gt;<br>&lt;cfcontent type="text/json" reset="true"&gt;&lt;cfoutput&gt;#encoded#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710862">14</a> by Michael Sinaysky
		posted on 6/27/2009 at 11:58 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I am receiving fallowing error:<br>window:global: 'e' is undefined (http://localhost/CFGrid_Test/test.cfm?cfdebug=true, line 525)</p><p>This is a code for Test.cfm<br>&lt;html&gt;<br>    &lt;head&gt;<br>		&lt;script&gt;<br>        function testit() <br>		{<br>			var myGrid = ColdFusion.Grid.getGridObject('entries');<br>			myGrid.view.getFooterPanel().setVisible(false);<br>			myGrid.view.refresh();<br>        }<br>        &lt;/script&gt;<br>    &lt;/head&gt;</p><p>    &lt;body&gt;    <br>        &lt;cfform name="test"&gt;<br>            &lt;cfgrid autowidth="true" <br>                name="entries" <br>                format="html" <br>                width="600" <br>                bind="url:getentries.cfm?page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;sort={cfgridsortcolumn}&amp;dir={cfgridsortdirection}"&gt;<br>                &lt;cfgridcolumn name="id" header="ID"&gt;<br>                &lt;cfgridcolumn name="price" header="Price"&gt;<br>                &lt;cfgridcolumn name="product" header="Product"&gt;            <br>            &lt;/cfgrid&gt;<br>        &lt;/cfform&gt;<br>       &lt;cfset ajaxOnLoad("testit")&gt;<br>    &lt;/body&gt;<br>&lt;/html&gt;</p><p>This is a code for getentries.cfm</p><p>&lt;cfset data = queryNew("id,price,product")&gt;<br>        &lt;cfloop from=1 to=10 index="x"&gt;<br>           &lt;cfset total = randRange(20,100) &amp; "." &amp; randRange(1,99)&gt;<br>           &lt;cfset product = "Product #X#"&gt;<br>           &lt;cfset queryAddRow(data)&gt;<br>           &lt;cfset querySetCell(data, "ID", x)&gt;<br>           &lt;cfset querySetCell(data, "price", total+0, x)&gt;<br>           &lt;cfset querySetCell(data, "product", product, x)&gt;<br>        &lt;/cfloop&gt;</p><p>&lt;cfset data = queryConvertForGrid(getArtists, <a href="http://disq.us/url?url=http%3A%2F%2Furl.page%3AC_xO5sp56MglNem2Q4Q6x0wV5WE&amp;cuid=3321886" rel="nofollow noopener" title="url.page">url.page</a>, url.pagesize)&gt;<br>       	&lt;cfset encoded = serializeJSON(data)&gt;<br>       	&lt;cfcontent type="text/json" reset="true"&gt;&lt;cfoutput&gt;#encoded#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710860">15</a> by Raymond Camden
		posted on 6/28/2009 at 12:00 AM
		</div>
		<div class="comment_text"><p>Not sure what to tell you. Do you still get an error if you comment out everything in testit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710863">16</a> by Michael Sinaysky
		posted on 6/28/2009 at 4:44 AM
		</div>
		<div class="comment_text"><p>Never mind I figure out what is going on.</p><p>Gecko (and similar) browsers pass a reference to an event object as the first parameter when calling a function assigned to an intrinsic event handler this way. IE doesn't, it uses a global 'event' variable.<br>Local variable "event" here masks IE's global event variable. As soon as I Modified function as fallowing</p><p>function testit() <br>{<br> var e = e || window.event;<br>var myGrid = ColdFusion.Grid.getGridObject('entries');<br>myGrid.view.getFooterPanel().setVisible(false);<br>myGrid.view.refresh();<br>}<br>everything starts working.</p><p>I do have another question s about CFGRID</p><p>How I can change background color of the one sell (let say cell in column 3) depending of  cell value in column 2</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710864">17</a> by Michael Sinaysky
		posted on 6/28/2009 at 10:07 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>One more question. Is it possible to populate CFGRID through cfajaxproxy call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710866">18</a> by Raymond Camden
		posted on 6/29/2009 at 6:49 AM
		</div>
		<div class="comment_text"><p>Yea - you just have to ensure your JavaScript seeds the data right. I believe I did a blog entry on this before, but I can't remember the URL offhand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710865">19</a> by Michael Sinaysky
		posted on 6/29/2009 at 4:20 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>If you be able to find blog URL I will be very much appreciated.</p><p>Did you sow my question about changing background color on the grid cell depending of value in another grid cell?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710869">20</a> by Raymond Camden
		posted on 7/1/2009 at 6:42 AM
		</div>
		<div class="comment_text"><p>Not having any luck - may want to resort to Google.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710870">21</a> by Bill
		posted on 7/13/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the tip, it works great. The problem with hiding the paging toolbar is that it leaves the user without a way to scroll through the records in the grid when they exceed what's visible. Is there a way to make the vertical scrollbar visible while the paging footer is hidden?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710873">22</a> by Raymond Camden
		posted on 7/13/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>Um... I guess you would need to ensure you return all the rows. Do you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710874">23</a> by Bill
		posted on 7/15/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>Sort of. The grid is dynamically populated record by record, so at any given time there may be less records than would cause scrolling/paging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710875">24</a> by Ben Schwartz
		posted on 1/28/2010 at 8:49 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I was using the method you suggest to remove the footer of a cfgrid as such:<br>var myGridA = ColdFusion.Grid.getGridObject('gridname');<br>myGridA.view.getFooterPanel().setVisible(false);<br>It was working really well until i upgraded to CF9 - and i guess they upgraded the ext library as well - now i get the following error: <br>myGridA.view.getFooterPanel is not a function</p><p>Do you have any idea what i can replace this with - it's kinda weird that upgrading wasn't backwards compatible.</p><p>Thank you very much in advance for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710872">25</a> by Raymond Camden
		posted on 1/28/2010 at 9:38 PM
		</div>
		<div class="comment_text"><p>No idea - but where I'd start is the Ext docs. That's where I found the original info for the older version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710877">26</a> by Debbie G.
		posted on 3/16/2010 at 2:16 AM
		</div>
		<div class="comment_text"><p>Did you find a way to set the background color of a grid cell?  I don't want to hardcode the color because it differs from cell to cell.  The "color" is actually the value of the column.  I also want to set the text/font color to white if the background color is Red; otherwise, set text/font color to black.</p><p>I've tried the following without success:<br>&lt;cfgridcolumn name="StatusColor" header="Status" bgcolor="StatusColor"&gt;</p><p>&lt;cfgridcolumn name="StatusColor" header="Status" bgcolor="CX"&gt;</p><p>&lt;cfgridcolumn name="StatusColor" header="Status" bgcolor="(CX EQ Green?green:yellow)"&gt;</p><p>Appreciate your help.  In my search, I've found that several people have asked this question and no response has been given.  I'm using ColdFusion 8, with an HTML format for CFGrid using the bind (instead of query) to populate the data.</p></div>
	</div>
</div>
		