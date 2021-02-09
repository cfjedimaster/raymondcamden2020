
<div class="comment" id="c_1713619805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619805">1</a> by AndyC
		posted on 8/8/2005 at 7:21 AM
		</div>
		<div class="comment_text"><p>Ray<br>There have been a few as yet (but hey it's the w/e) unanswered<br>queries on a similar blog at as fusion.<br>Re your onChange="#onChange#". Is there any way of effecting more than one action so there would be a say #onChange2# as well<br>when selecting the grid row<br>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619803">2</a> by Raymond Camden
		posted on 8/8/2005 at 7:36 AM
		</div>
		<div class="comment_text"><p>Andy - I may not know what you mean. If you wanted to do X, Y, and Z in your onChange, just add more code. In fact, in my example, I do two things, change the gender and change the department, so you could just add more stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619804">3</a> by Michael White
		posted on 8/8/2005 at 8:14 AM
		</div>
		<div class="comment_text"><p>Thank You so much for the update... I'm gonna put it to the test right away!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619802">4</a> by Michael White
		posted on 8/8/2005 at 9:27 AM
		</div>
		<div class="comment_text"><p>Ok, it works great! I don't have to do anything to the cfselect statements at all, I just add a new line in the &lt;cfsavecontent&gt; section for each select box I have. I have been using a different variable for each line because I wasn't sure how "local" the var statement is in this context.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619811">5</a> by Chris Brandt
		posted on 8/8/2005 at 9:40 AM
		</div>
		<div class="comment_text"><p>Is it possible to have an additional item in the grid that doesn't exist in the query?</p><p>Say you wanted to have a list of inventory items and have the user modify how many of X were purchased... Is the best way to modify the query to artificially add qty=0? What happens when you want to use the same code to edit an existing invoice? An outer join on the inventory and invoice tables?</p><p>Or is there a better way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619813">6</a> by AndyC
		posted on 8/8/2005 at 4:45 PM
		</div>
		<div class="comment_text"><p>Ray - thanks for the late reply<br>Sorry I didn't make it very clear. Not sure this will help<br>cf your example if I want the onChange="#onChange#" to invoke a query I have something along the lines - sorry cannot get at actual code</p><p>&lt;cfsavecontent variable="onChange"&gt;<br>// set up flash remoting<br>// set up response handler<br>var responseHandler = {};</p><p>   responseHandler.onResult = function( results: Object ):Void {<br>          battingGrid.dataProvider = results;<br>// call service<br>myService.getBatting<br>&lt;/cfsavecontent&gt;<br>This works fine as you can see at<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.majorleaguecharts.com%2Fmlc%2Fmycfgrid-remoting.cfm%3A-gA_cX-xFo-7UZMwe7mCxqXjv4U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.majorleaguecharts.com/mlc/mycfgrid-remoting.cfm">http://www.majorleaguechart...</a></p><p>However, with the onchange I also want to call pitching stats with<br>myService.getPitching<br>pitchingGrid.dataProvider = results2;</p><p>In Flash you just have two seperate functions to handle the seperate resultsets but in the adapted asfusion version I'm not sure how this can be done</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619808">7</a> by Raymond Camden
		posted on 8/8/2005 at 6:00 PM
		</div>
		<div class="comment_text"><p>Chris:<br>2 ways. One, you can modify an existing query using queryAddColumn. You would then populate the data using querySetCell. Or - you can remove the query value from cfgrid, and use cfgridrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619807">8</a> by Todd
		posted on 8/8/2005 at 6:11 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>I can't thank you enough - following your new post I finally got my page to work as planned.  I'm simply amazed that I can dynamically populate a select list based on the grid row chosen by calling a cfc via flash remoting and then bind that grid row to the select to show the proper item in the select.  CF is beautiful!</p><p>On another note Ray, do you play Socom at all on PS2?  I've seen some mentions of Halo - just wondering if you ever tried Socom?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619809">9</a> by Raymond Camden
		posted on 8/8/2005 at 6:22 PM
		</div>
		<div class="comment_text"><p>Todd: Nope. I don't play the ps2 much anymore since I got the xbox. I still have it around, and will be playing GTA:SA soon, but I don't play it very often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619810">10</a> by Todd
		posted on 8/8/2005 at 6:25 PM
		</div>
		<div class="comment_text"><p>A lot of my buddies say the same thing about the PS2 after they get an XBOX.  I guess I have the whole Microsoft chip-on-the-shoulder thing when it comes to gaming.  Don't know how long I can hold out though, with talks of the PS3 being in the $400 range before adding all the peripherals (such as external only hdd, etc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619814">11</a> by Raymond Camden
		posted on 8/8/2005 at 9:35 PM
		</div>
		<div class="comment_text"><p>Andy - ah - sorry. I haven't done any remoting with flash forms yet. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619812">12</a> by Todd
		posted on 8/8/2005 at 9:40 PM
		</div>
		<div class="comment_text"><p>Andy:</p><p>Not sure this is the most efficient way, but it works.  Create two variables (via cfsavecontent) which contain two separate remoting calls.  In the onchange, simply reference both variables, for example:</p><p>onchange="#onchange1##onchange2#"</p><p>If anyone has a more efficient way, feel free to correct me, but I know that works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619815">13</a> by AndyC
		posted on 8/9/2005 at 4:21 AM
		</div>
		<div class="comment_text"><p>Todd<br>Thanks works fine. I'd tried with a comma between and then googled without success<br>Ray<br>Look forward to incorporating your cfcharts as well in a week or so</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619816">14</a> by Michael White
		posted on 8/9/2005 at 7:29 AM
		</div>
		<div class="comment_text"><p>Between you as ASFusion I have a great form that I can filter by a text box and synchronize my cfselects... now I have a dumb question about the cfgrids. I would like to maintain the Flash Form look and feel throughout my ColdFusion Application and give users some cool features too. I would like to use CFGRID to allow a user to preview report data (say a list of orders) and either Print a pre-made Report, Export the list to excel/plain text or jump the the record details edit page (if they have rights). to make a long story short, what's the easiest way to link to another form from a data grid, passing the selected item?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619817">15</a> by michael White
		posted on 8/11/2005 at 2:21 AM
		</div>
		<div class="comment_text"><p>Ok, here I am merrily Synching my text and select boxes on a form to a datagrid and everything is fine until I get to a date field... The date field was not originally in the grid so when the bind command pulled from SQL I got the full date. Adding the mask attribute to the text box did nothing. I finally added the dates to the grid and set display="no" and then they showed up fine on the "edit" form. I don't suppose there's anyway to mask the Bind output for a particular date format?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619819">16</a> by Raymond Camden
		posted on 8/11/2005 at 2:25 AM
		</div>
		<div class="comment_text"><p>I don't think so. I think you could perhaps use onClick and ActionScript to format the date nicely. You can also use QofQ and make a copy of the original date into something a bit simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619818">17</a> by Raymond Camden
		posted on 8/11/2005 at 2:33 AM
		</div>
		<div class="comment_text"><p>mwhite: your question on passing the 'selected item', when you submit a form that has a grid in it, you get the selected item. Do a cfdump on form and you will see. If the grid was named foo, it will be form.foo.SOMETHING. I always forget and do a dump myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619821">18</a> by Michael White
		posted on 8/14/2005 at 1:16 AM
		</div>
		<div class="comment_text"><p>you were right again, I dumped the form and found the field (I forgot you could dump a form). I added the date columns into the datagrid with display=no and the date thing is working so now onto the next problem... I have the orders cfgrid on the left and the edit form for the order itself on the right. They synchronize nicely will all the fields, etc. but now I need to show the line items in another cfgrid below the other two panels and keep it synchronized with the selected order in the grid above. Is there a handy one-line "onChange" actionscript thingy I can do to requery the line items grid below? I have a component that has a query to pull the line items for a given orderID initially but then I'm stuck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619822">19</a> by Michael White
		posted on 8/14/2005 at 7:01 PM
		</div>
		<div class="comment_text"><p>nice article by Leo Schuman on the basics of actionscript in coldfusion flash forms:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fdevnet%2Fcoldfusion%2Farticles%2Fadv_flashforms.html%3ANwAXdz-S33fFGCXrtZOT_udAUFU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/devnet/coldfusion/articles/adv_flashforms.html">http://www.macromedia.com/d...</a><br>This will help me take my flash forms to the next level (and maybe I won't have to ask you so many questions!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619823">20</a> by Michele
		posted on 9/13/2005 at 8:19 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thank you for the example. I'm new to CF and learning a lot! Is it possible to bind a datagrid to radio buttons? I'm modifying the asfusion address book example. I have a grid on the left and edit form on the right. I was able to bind to one radio button that changes values but I need to bind the same grid row to multiple radio buttons. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619824">21</a> by Raymond Camden
		posted on 9/13/2005 at 5:45 PM
		</div>
		<div class="comment_text"><p>Michele, a Ask a Jedi question came in concerning this (maybe from you?), so I plan on showing an example. It may be a few days, but it is in my queue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619826">22</a> by David Brannan
		posted on 9/15/2005 at 2:37 AM
		</div>
		<div class="comment_text"><p>I have two cfselects populated by a query via remoting.</p><p>I want to click one button and have both cfselect values be submitted (onclick) to the &lt;cfsavecontent&gt; area and push them on to my .cfc using action script.</p><p>I am doing this with cfgrids, but am wondering how to do this  with regular cfform values.</p><p>Does anyone have an example of this to look at?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619827">23</a> by David Brannan
		posted on 9/15/2005 at 2:44 AM
		</div>
		<div class="comment_text"><p>I have two cfselects populated by a query via remoting.</p><p>I want to click one button and have both cfselect values be submitted (onclick) to the &lt;cfsavecontent&gt; area and push them on to my .cfc using action script.</p><p>I am doing this with cfgrids, but am wondering how to do this  with regular cfform values.</p><p>Does anyone have an example of this to look at?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619828">24</a> by David Brannan
		posted on 9/15/2005 at 3:18 AM
		</div>
		<div class="comment_text"><p>I have two cfselects populated by a query via remoting.</p><p>I want to click one button and have both cfselect values be submitted (onclick) to the &lt;cfsavecontent&gt; area and push them on to my .cfc using action script.</p><p>I am doing this with cfgrids, but am wondering how to do this  with regular cfform values.</p><p>Does anyone have an example of this to look at?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619832">25</a> by David
		posted on 12/1/2005 at 3:10 AM
		</div>
		<div class="comment_text"><p>Tried to get this to work, but i'm not doing very well :(.  I have a query which populates my cfelect, which i store a display name (WineryName) and the ID (WineryID) as the value. In my grid, i don't want to display the WineryID, just the WineryName. I've tried the following:</p><p>	function updateWinerySelect(){<br>		for(var i=0;i &lt; WineryName.getLength();i++)<br>		if(WineryName.getItemAt(i).data == Wine_Grid.dataProvider[Wine_Grid.selectedIndex]['WineryName']) {WineryName.selectedIndex=i }</p><p>			&lt;cfgrid name="Wine_Grid" rowheaders="no"&gt;<br>				&lt;cfgridcolumn name="VarietalClass" header="Type" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="Varietal" header="Varietal" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="WineryName" header="Winery" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="WineName" header="Name" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="Vintage" header="Vintage" width="60" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="Appellation" header="Appellation" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="UseName" header="Use" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="WineActive" header="Active" width="50" type="boolean" dataalign="center"&gt;<br>			&lt;/cfgrid&gt;</p><p>					&lt;cfselect name="WineryName" label="Winery" query="qWinery" display="WineryName" value="WineryID" queryPosition="below" required="yes" width="300"&gt;&lt;option value=""&gt;Choose a Winery&lt;/option&gt;&lt;/cfselect&gt;</p><p>But no luck. Any suggestions? I have 5 selects in all that i want to bind. <br>Thanks for your time,<br>David</p><p>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619833">26</a> by todd
		posted on 12/1/2005 at 6:53 PM
		</div>
		<div class="comment_text"><p>David:</p><p>I'd caution against using the query attribute of a cfselect within a flash form.  Doing so will cause a recompile on your flash form which leads to much slower load times.  Instead try:</p><p>&lt;cfselect name="WineryName" label="Winery" required="yes" width="300"&gt;<br>&lt;option value=""&gt;Choose a Winery&lt;/option&gt;<br>&lt;cfoutput query="qWinery"&gt;<br>&lt;option value="#qWinery.WineryID#"&gt;#qWinery.WineryName#&lt;/option&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfselect&gt;</p><p>To bind the select to the grid you'll need two parts - one is a function that binds FROM the grid TO the select - which you have done - but you need to add a call to that function in the onchange of your grid.<br>Part two is an onchange event in your select - which will bind FROM the select TO the grid.  In your case you say you'd like to display the text, not the value.  Are you going to be saving changes from the grid?  If so, you'll likely want to save BOTH the value and the text.  The text will be for display purposes, and the value will be for the database updating.  So it's probably a good idea to bring both elements into the grid and add a display="no" to the value.  You'll technically only have to bind one of these columns to the select (since doing both would just be redundant) which you already have...Now onto the onchange event for the select:</p><p>&lt;cfselect name="WineryName" label="Winery" required="yes" width="300"<br>onchange="<br>//remove these comments <br>//this event will bind the WineryName from this select back<br>//to the grid - note that i'm calling selectedItem.text<br>Wine_Grid.dataProvider.editField(Wine_Grid.selectedIndex, 'WineryName', WineryName.selectedItem.text);</p><p>//remove these too<br>//this will bind the value to the grid<br>//as i said, you should add a column to your grid for the ID<br>Wine_Grid.dataProvider.editField(Wine_Grid.selectedIndex, 'WineryID', <a href="http://disq.us/url?url=http%3A%2F%2FWineryID.data%3AAApwGz3kchuf8YRwejlEbo0Elgc&amp;cuid=3321886" rel="nofollow noopener" title="WineryID.data">WineryID.data</a>);<br>"&gt;<br>&lt;option value=""&gt;Choose a Winery&lt;/option&gt;<br>&lt;cfoutput query="qWinery"&gt;<br>&lt;option value="#qWinery.WineryID#"&gt;#qWinery.WineryName#&lt;/option&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfselect&gt;</p><p>One last thing - make sure your bind function is correct:</p><p>function updateWinerySelect(){<br>      for(var i=0;i &lt; WineryName.getLength();i++)<br>      if(WineryName.getItemAt(i).data == Wine_Grid.dataProvider[Wine_Grid.selectedIndex]['WineryID']) {WineryName.selectedIndex=i }</p><p>--OR--</p><p>function updateWinerySelect(){<br>      for(var i=0;i &lt; WineryName.getLength();i++)<br>      if(WineryName.getItemAt(i).text == Wine_Grid.dataProvider[Wine_Grid.selectedIndex]['WineryName']) {WineryName.selectedIndex=i }</p><p>Notice I'm checking for WineryName.blah.text = the WineryName OR <a href="http://disq.us/url?url=http%3A%2F%2FWineryName.blah.data%3AEUUns_K58V1SNh0mcHa8T2HZ_eQ&amp;cuid=3321886" rel="nofollow noopener" title="WineryName.blah.data">WineryName.blah.data</a> = the WineryID.  Either one should work.</p><p>Sorry for the LONG winded response - HTH. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619831">27</a> by David
		posted on 12/1/2005 at 11:36 PM
		</div>
		<div class="comment_text"><p>Hi todd,<br>Thanks a million for getting back to me on this. I tried the code for the binding the select to the grid, as i'll be updating from my fields and not my grid (so i'm assuming seeing all of this is taken from the realestate application on asfusion, but part 2 with all update info is not out yet so i'm guessing here :) ), but i'm getting something funky. If i decide to use the text route, when i select on an item from the grid, i get the very last record in the grid binding to my select. If i use data, i dont' get anything. My function looks correct:<br>	function updateWinerySelect(){<br>		for(var i=0;i &lt; WinerySelect.getLength();i++)<br>			if(WinerySelect.getItemAt(i).text == Wine_Grid.dataProvider[Wine_Grid.selectedIndex]['WineryName']) <br>				{WinerySelect.selectedIndex=i}<br>	}<br>I've renamed the select to WinerySelect for easier reading. I added WineryID as a column in the grid as follows:<br>			&lt;cfgrid name="Wine_Grid" rowheaders="no" onchange="{updateWinerySelect();}"&gt;<br>				&lt;cfgridcolumn name="WineryID" display="no"&gt;<br>				&lt;cfgridcolumn name="VarietalClass" header="Type" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="Varietal" header="Varietal" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="WineryName" header="Winery" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="WineName" header="Name" type="string_nocase" dataalign="left"&gt;<br>				&lt;cfgridcolumn name="Vintage" header="Vintage" width="60" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="Appellation" header="Appellation" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="UseName" header="Use" type="string_nocase" dataalign="center"&gt;<br>				&lt;cfgridcolumn name="WineActive" header="Active" width="50" type="boolean" dataalign="center"&gt;<br>			&lt;/cfgrid&gt;</p><p>And changed my Select statement as the following:<br>					&lt;cfselect name="WinerySelect" label="Winery" required="yes" width="300"&gt;						<br>						&lt;option value=""&gt;Choose a Winery&lt;/option&gt;<br>						&lt;cfoutput query="qWinery"&gt;<br>						&lt;option value="#qWinery.WineryID#"&gt;#qWinery.WineryName#&lt;/option&gt;<br>						&lt;/cfoutput&gt;<br>					&lt;/cfselect&gt;	<br>Again, if i'm not using the bind from the select TO the grid, then i won't need anything in my onchange of my select correct? as that will make it so that if i select something then it automatically changes it in the grid. Its only after i update or add a new record that i want it to appear in the grid. Any suggestions?<br>Thanks for taking so much of your time! :)<br>Much appreciation,<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619834">28</a> by todd
		posted on 12/1/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>You're correct - if you're don't need to bind back, leave out the onchange of the select.</p><p>Remove the squiggly brackets from the onchange in your grid - it should be:<br>&lt;cfgrid name="Wine_Grid" rowheaders="no" onchange="updateWinerySelect();"&gt;</p><p>Try using this for your function:</p><p> function updateWinerySelect(){<br>for(var i=0;i &lt; WinerySelect.getLength();i++)<br>{<br>if(WinerySelect.getItemAt(i).text.toLowerCase() == Wine_Grid.selectedItem.WineryName.toLowerCase()) <br>WinerySelect.selectedIndex=i<br>}<br>//i like to throw an else in to select the first item if all else<br>//fails but you don't have to<br>else<br>{<br>WinerySelect.selectedIndex = 0;<br>}<br>}</p><p>I'm thinking that should work - but it's untested (obviously).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619837">29</a> by todd
		posted on 12/1/2005 at 11:47 PM
		</div>
		<div class="comment_text"><p>I just noticed something else:<br>in your for loop, use .length, not getLength()</p><p>like this:</p><p>function updateWinerySelect(){<br>for(var i=0;i &lt; WinerySelect.length; i++)<br>{<br>if(WinerySelect.getItemAt(i).text.toLowerCase() == Wine_Grid.selectedItem.WineryName.toLowerCase()) <br>WinerySelect.selectedIndex=i<br>}<br>//i like to throw an else in to select the first item if all else<br>//fails but you don't have to<br>else<br>{<br>WinerySelect.selectedIndex = 0;<br>}<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619841">30</a> by David
		posted on 12/2/2005 at 12:10 AM
		</div>
		<div class="comment_text"><p>Todd,<br>Just tried too.. no go. I even tried it on another select to maybe if it had to do with my data in the grid, but it does the same thing on Varietals. Just goes straight to the last record in the list, which makes me think it has something to do with the for loop. If you want to see the whole page (maybe there is something else i'm doing but not being able to see), send me an email Dpanzarella@hotmail.com and i'll attach it for you. Just don't want to clutter this blog with unnecessary code :).<br>thanks again.. You rock! :)<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619846">31</a> by David
		posted on 12/2/2005 at 1:59 PM
		</div>
		<div class="comment_text"><p>OK.. its official.. this thing is clearly driving me insane! :) Can't figure out why this for loop just goes straight to the end of the select list. Especially when there is an else statement setting it to 0 when there is no match. When i try to use data nothing even happens but i know the value is in the grid because i have it in a cffitem bind that shows the WineryID.</p><p>      for(var i=0;i &lt; WinerySelect.length; i++){<br>         if(WinerySelect.getItemAt(i).text == WineGrid.dataProvider[WineGrid.selectedIndex]['WineryName'])<br>            {WinerySelect.selectedIndex = i;}<br>         else<br>			{WinerySelect.selectedIndex = 0;}<br>		}</p><p>Here is the loop again. I think i'm right by saying that the above loop starts by iterating through each item in the WinerySelect dropdown:</p><p>					&lt;cfselect name="WinerySelect" label="Winery" required="yes" width="300"&gt;						<br>						&lt;option value="0"&gt;Choose a Winery&lt;/option&gt;<br>						&lt;cfoutput query="qWinery"&gt;<br>						&lt;option value="#qWinery.WineryID#"&gt;#qWinery.WineryName#&lt;/option&gt;<br>						&lt;/cfoutput&gt;<br>					&lt;/cfselect&gt;</p><p>It then asks: if the current iteration of the select matches the current item Selected (indexed) in the grid, then show that current iteration as selected in the WinerySelect. Otherwise, set the WinerySelect to 0 (the value of choose a winery.</p><p>Am i wrong? or just Mad!!?!<br>Anyone? <br>Thanks :)<br>david</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619839">32</a> by Thomary
		posted on 3/14/2006 at 1:34 AM
		</div>
		<div class="comment_text"><p>Someone gave me this to bind my status selection field to the grid.  You have to have a blank option on the cfselect.</p><p>status is the form field<br>Status is the query field</p><p>Add the onChange to the cfgrid.  <br>onchange="{status.selectedIndex=0}<br>	for(var i:Number = 0; i&lt;status.length; i++) <br>{if(status.getItemAt([i]).data==data.selectedItem.Status)status.selectedIndex=i}"<br>hth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619840">33</a> by RLS
		posted on 8/11/2006 at 10:03 AM
		</div>
		<div class="comment_text"><p>I feel so far behind you all, but I just haven't had time to tackle Flash Forms until now. Hope someone is still monitoring this thread!</p><p>I have the standard Flash form dealie with the grid on top and the input fields below. It's set to keep the input/update fields disabled until someone click on an item in the grid (in order to prevent someone from typing away thinking they're updating a field; I never did see a post on how to auto-select the first item in the grid, so if there's a solution for that, I'm all ears!)</p><p>Anyway, my problem is with the date field. ALL the other fields merrily update and bind and reflect their updates, but not my three date fields. Aarrgh!</p><p>In the grid, here is how one of the date fields are defined:</p><p>&lt;cfgridcolumn name="paidthrough" header="Paid Thru" mask="M/D/YYYY" headerAlign="center" dataAlign="center" width="80" font="Verdana" fontSize="10" bold="no" italic="no" select="no" display="yes" headerFontSize="9" headerBold="no" headeritalic="no"&gt;</p><p>In the input field, it looks like this: <br>&lt;cfinput type="DateField" name="paidthrough" value='#DateFormat(sqlMembers.paidthrough,"m/d/yyyy")#' width="100" label="Paid Through:" bind="{gridMembers.dataProvider[gridMembers.selectedIndex]['paidthrough']}" mask="M/D/YYYY" enabled="false" selectedDate='#DateFormat(sqlMembers.paidthrough,"m/d/yyyy")#' <br>onChange="gridMembers.dataProvider.editField(gridMembers.selectedIndex,'paidthrough',paidthrough.value);"&gt;</p><p>So for crying out loud, why won't the date populate?  Once upon a time I did get it to populate, but it kept changing the date on me to the previous day.</p><p>Thanks for the help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619844">34</a> by todd
		posted on 8/11/2006 at 3:47 PM
		</div>
		<div class="comment_text"><p>RLS:</p><p>Try changing your datefield to access the selectedDate property of the datefield in the onchange (i'm assuming that is what is not binding back to the grid).</p><p>Like this:</p><p>&lt;cfinput type="DateField" ... <br>onChange="gridMembers.dataProvider.editField(gridMembers.selectedIndex,'paidthrough',paidthrough.selectedDate);"&gt;</p><p>Also, to select a grid row by default add this script and call it onload of the form.  Replace contactList in this example with the name of your grid.  This basically creates an event listener for the grid which will wait for the query data to load and then select the first item when it is complete.</p><p>&lt;code&gt;<br>   function onFormLoad(){<br>      var listener:Object = {};</p><p>      //put the controls in scope to avoid calling _root</p><p>      var contactList:mx.controls.DataGrid = contactList;</p><p>      listener.modelChanged = function(evt):Void {<br>         alert('Data loaded... select first item');<br>         &lt;!--- remove listener, so that we are not longer notified of model changes ---&gt;<br>         contactList.removeEventListener('modelChanged',listener);<br>         &lt;!--- select first item ---&gt;<br>         if (contactList.dataProvider.length){<br>            contactList.selectedIndex = 0;<br>         }<br>      }</p><p>      contactList.addEventListener('modelChanged',listener);<br>   }<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619842">35</a> by RLS
		posted on 8/11/2006 at 5:25 PM
		</div>
		<div class="comment_text"><p>Thank you - we're close with that!</p><p>First, on the listener code. If I use cfscript, I get "Local variables must be initialized.".  If I use script language= javascript, I get a ton of errors, most yelling at me about things like "The  statement 'javascript' is incomplete." and "ActionScript 2.0 class scripts may only define class or interface constructs." (javascript is not a real strong suit for me. Can you tell?)</p><p>On the date -- it's really weird. EVERY date I select, no matter whether it's the first, the end of the month, or in the middle, they back up one day when I go through the update process.  I'm not doing any variable gymnastics, either.  Here's an example of the start of the code (snipped to the relevant parts, of course), which is followed by a simply SQL Update command of all fields:</p><p>&lt;CFLOOP INDEX="UpdateNumber" FROM="1" TO="#ArrayLen(<a href="http://disq.us/url?url=http%3A%2F%2FgridMembers.id%3A4NHzvb_uakhOliXf-RxpnZ2S52A&amp;cuid=3321886" rel="nofollow noopener" title="gridMembers.id">gridMembers.id</a>)#"&gt;<br>&lt;CFSET varpaidthrough=gridMembers.paidthrough[#UpdateNumber#]&gt;<br>(then update that record and loop back for the next grid line)<br>... &lt;/CFLOOP&gt;</p><p>I feel I'm right on the verge of success. I could even live without the listener object no problem as my disabled-until-clicked looks fine to the customer. But the date backup is weird city.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619845">36</a> by todd
		posted on 8/11/2006 at 5:36 PM
		</div>
		<div class="comment_text"><p>I know exactly what's happening - I'll hit you offline in a little bit (just had to jump on a conference call) - unless Ray doesn't mind me clogging up his comments here....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619843">37</a> by RLS
		posted on 8/11/2006 at 5:48 PM
		</div>
		<div class="comment_text"><p>Thanks, Todd. I can only imagine, though, that there is someone out there looking for this answer like I have been and they will shower you with praise and adulation.</p><p>For the date issue, I hope you have a clue. I looked in the database afterward and the dates are being stored correctly; it's when the grid displays them that they end up back-a-day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619836">38</a> by todd
		posted on 8/11/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>Here's half your answer - for the script - put it inside a cfformitem, type = script...</p><p>see this post over at asfusion for clarification:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.asfusion.com%2Fblog%2Fentry%2Fknowing-when-the-cfform-data-arrives%3Ao2wT7hY4T2ABik8lW0PIT13iKc8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.asfusion.com/blog/entry/knowing-when-the-cfform-data-arrives">http://www.asfusion.com/blo...</a></p><p>As for the date issue, Yes, I know what's happening, and I think I'll blog it later today when i'm off these calls.  I will follow up here with a link when I post it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619838">39</a> by todd
		posted on 8/11/2006 at 7:27 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2006%2F8%2F11%2FCFGRID-Date-Display-Issues%3AwU2EL01PeR6X5GNot5yl3sc4S1s&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2006/8/11/CFGRID-Date-Display-Issues">http://cfsilence.com/blog/c...</a></p></div>
	</div>
</div>
		