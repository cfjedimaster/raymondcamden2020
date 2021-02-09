
<div class="comment" id="c_1713718916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718916">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 10/15/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>You beat me to it. Actually, I was writing an entry on this topic this weekend, but since I'm here...</p><p>You can no longer get the top toolbar. Why? Well, because it doesn't exist. ExtJs 3.x changed their implementation of the grid, and the grid config would require an entry to include the top toolbar (even an empty config that didn't display). I posted to the beta about this, but it doesn't look like it made it into the final version. I hope to do some more testing this weekend, after my preso at Barcamp Nashville. If I find a way around this I'll post something for everyone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718929">2</a> by Andy Sandefer
		posted on 10/15/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>I'm a big user of these UI controls and I like the enhancements to the cfgrid but the tabs and cfwindow look, and in some cases, act worse then they did in CF8.  I'll be moving a lot of the UI in my apps to jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718935">3</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 10/15/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>@Andy</p><p>While I can understand your frustration, I have to mirror something Ray mentioned in his post: if you go 'off the ranch', you should use the library itself.</p><p>The cfform functionality has always been a "quick fix" solution, for those without the skills or to just rapidly prototype something.</p><p>ExtJs is still, by far, the largest consistent component library available, and 3.x brought greater cohesion and extended functionality. For anyone looking to maintain that ability of rapid prototyping, I would suggest that you seriously look at what's available to you within a full ExtJs implementation.</p><p>Incidentally, it's been previously stated that the ExtJs license carries over for your use, as long as it's in conjunction with ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718947">4</a> by Kumar
		posted on 10/15/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>getBottomToolbar() and getTopToolbar() will take care of getting the relevant toolbars and and you can then add buttons to them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718933">5</a> by Henry Ho
		posted on 10/16/2009 at 12:16 AM
		</div>
		<div class="comment_text"><p>see: Use cfajaximport to help with CF8 to CF9 migration<br><a href="http://disq.us/url?url=http%3A%2F%2Fsamfarmer.instantspot.com%2Fblog%2F2009%2F08%2F14%2FUse-cfajaximport-to-help-with-CF8-to-CF9-migration%3AHeWwHzvw2UecHnAhfLuuZ-Kh5Jg&amp;cuid=3321886" rel="nofollow noopener" title="http://samfarmer.instantspot.com/blog/2009/08/14/Use-cfajaximport-to-help-with-CF8-to-CF9-migration">http://samfarmer.instantspo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718934">6</a> by Aaron
		posted on 10/16/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>We're using CF8 right now and I just got into CFAJAXPROXY, but we had to scrap it because it seems that the code CF8 outputs invalidates our XHTML 1.0.  I'm both surprised at Adobe for not adhering to XHTML output (for those who value it like myself) and upset that they never released a hotfix to address this.  I really like the features CFAJAXPROXY had to offer, but if it invalidates me code, it goes out the door.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718938">7</a> by Chris
		posted on 10/16/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>I'm with Andy.  I've jumped on the jQuery bandwagon and have foregone all CF Ajax UI built in functions.  Makes life easier for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718945">8</a> by Raymond Camden
		posted on 10/16/2009 at 3:10 AM
		</div>
		<div class="comment_text"><p>@Aaron: Interesting - what exactly does cfajaxproxy output that is invalid? It should be just outputting JavaScript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718939">9</a> by Brad Wood
		posted on 10/16/2009 at 3:35 AM
		</div>
		<div class="comment_text"><p>@Aaron:  If your output doesn't have a &lt;head&gt; tag ColdFusion will stick the output of the CFAjaxProxy tag at the top of the page.  Is that your problem with the invalid XHMTL?</p><p>Like Ray said, all that tag outputs is four &lt;script type="text/javascript"&gt; tags so I'm not sure how that would invalidate your XHTML.</p><p>~Brad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718931">10</a> by Curt Gratz
		posted on 10/28/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>You can replace your code that is something like this</p><p>	var gridHead = grid.getView().getHeaderPanel(true);<br>	var tbar = new Ext.Toolbar(gridHead);</p><p>With just this...</p><p>var tbar = grid.getBottomToolbar(); OR var tbar = grid.getTopToolbar(); depending on which one your adding buttons too.</p><p>Another change to note is that you will need to change</p><p>var record = grid.getSelections();</p><p>to...</p><p>var record = grid.getSelectionModel().getSelected();</p><p>to get the selected row.</p><p>Because of this change.  You can now reference the data directly and don't need the array notation as before  IE...</p><p>var ID = record[0].data.ID</p><p>becomes just</p><p>var ID = record.data.ID</p><p>Hope this helps anyone who has this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718943">11</a> by Mark
		posted on 11/7/2009 at 1:21 AM
		</div>
		<div class="comment_text"><p>It would appear that getTopToopbar() does not work, but getBottomToolbar does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718932">12</a> by Ben Andersen
		posted on 2/4/2010 at 3:01 AM
		</div>
		<div class="comment_text"><p>After much frustration and hair pulling, I found a solution that will give you the same look as the custom toolbars available in CF8, including matching the width of the grid.</p><p>I created a div called 'aboveGrid' right before the cfgrid, and then put this in my javascript:</p><p> grid = ColdFusion.Grid.getGridObject("userGrid");</p><p>var tb = new Ext.Toolbar({<br>    renderTo: document.getElementById('aboveGrid'),<br>	width: document.getElementById(<a href="http://disq.us/url?url=http%3A%2F%2Fgrid.id%3AhAZO-t4BqLzSNKa1IhoFIVLZOqU&amp;cuid=3321886" rel="nofollow noopener" title="grid.id">grid.id</a>).width,<br>    items: [<br>        { text:"Add User", cls:"x-btn-text-icon", icon:"images/add.png", handler:addU },'-',<br>		{ text:"Delete User", cls:"x-btn-text-icon", icon:"images/del.png", handler:delU },'-',<br>		{ cls:"x-btn-text-icon", icon:"images/refresh.png", handler:refreshUserGrid }<br>    ]<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718937">13</a> by Steve Caldwell
		posted on 2/9/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>I think I found another Ext change that breaks some existing blog posts.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.danvega.org%2Fblog%2Findex.cfm%2F2008%2F3%2F20%2FCFGrid-Event-Listeners%3ApG8Ic5-tRoa50V2oZLpiGarq3As&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danvega.org/blog/index.cfm/2008/3/20/CFGrid-Event-Listeners">http://www.danvega.org/blog...</a></p><p>Above post describes using the grid.getDataSource() function, but when I try it on my CF9 install, I get a js error <br>'Error: Object doesn't support this property or method'</p><p>Looking at the Ext docs for 3.1, the grid.getDataSource is gone.</p><p>gridOptions = function() {<br>	grid = ColdFusion.Grid.getGridObject('docs_grid'); //which grid?<br>	grid.addListener("rowclick", showInfo);<br>	}</p><p>showInfo = function(grid, rowIndex, e) {<br>   var record = grid.getDataSource().getAt(rowIndex);<br>   $("#info").show();<br>	};</p><p>Haven't dug in to find an alternative yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718949">14</a> by Ron Lebfrom
		posted on 2/18/2010 at 5:36 AM
		</div>
		<div class="comment_text"><p>getDataSource() has been changed to getStore()</p><p>EXT 1.1<br>var row = grid.getDataSource().getAt(rowIndex);<br>EXT 3.x<br>var row = grid.getStore().getAt(rowIndex);</p><p>Full Example:<br>var GetImageInfo = function(grid,rowIndex,e){<br>var row = grid.getStore().getAt(rowIndex);</p><p>            var imageID = row.data.IMAGE_ID;</p><p>	  }</p><p>Hope this helps</p><p>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718946">15</a> by Shawn
		posted on 3/10/2010 at 1:44 AM
		</div>
		<div class="comment_text"><p>I have a combo box location in the top toolbar that I would like to get working with the most recent update.</p><p>Unfortunately after the line, "var tbar = grid.getTopToolbar();"  tbar is coming back as "undefinded"</p><p>What am I missing (Thanks!)?</p><p>function init(){<br>      var grid = ColdFusion.Grid.getGridObject("grdProviderList");<br>      //var gridHead = grid.getView().getHeaderPanel(true);<br>      //var tbar = new Ext.Toolbar(gridHead);<br>       var tbar = grid.getTopToolbar();</p><p>cb = new Ext.form.ComboBox({<br>   id:"titleFilter",<br>   emptyText:"Filter Page By Title",<br>   mode:"local",<br>   triggerAction:"all",<br>   displayField:"text",<br>   valueField:"value",<br>         store:new Ext.data.SimpleStore({<br>            fields: ["value", "text"],<br>            data: [<br>               ["DDS","DDS"],<br>               ["DMD","DMD"],<br>               ["RDH","RDH"]<br>            ]<br>   })<br>});</p><p>      cb.addListener("select",function(combo,record,index){<br>         var state = record.data.value;<br>         //filter the records          <br>		 grid.getDataSource().filter("DOCTORTITLE",state);<br>      });</p><p><a href="http://disq.us/url?url=http%3A%2F%2FExt.fly%3AUdU7Ly3IfRkZxKQldi1m-7WLvPk&amp;cuid=3321886" rel="nofollow noopener" title="Ext.fly">Ext.fly</a>(tbar.addSpacer().getEl().parentNode).setStyle('width', '100%');<br>tbar.addButton({<br>   text:"Remove Filter",<br>       icon:"plugin.png",<br>       cls:"x-btn-text-icon",<br>       tooltip:"Remove Filter",<br>       handler:removeFilter<br>      });<br>      tbar.add(new Ext.Toolbar.Separator());<br>      tbar.add(cb);<br>}<br>   function removeFilter(){<br>      store = grid.getDataSource()<br>      //remove the data filter      <br>	   store.clearFilter();<br>      //clear the value of the combo box       <br>	  cb.clearValue();<br>      //reset it so empty text shows up       <br>	  cb.reset();<br>   }<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718941">16</a> by Raymond Camden
		posted on 3/10/2010 at 1:48 AM
		</div>
		<div class="comment_text"><p>When you checked the most recent Ext docs, what did it say to use in order to get the toolbar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718944">17</a> by Shawn
		posted on 3/10/2010 at 2:03 AM
		</div>
		<div class="comment_text"><p>In 3.1.1 I see getTopToolbar(); but I do not see where the doc say "do this" to get the top toolbar.</p><p>Am I missing something obvious?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718942">18</a> by Raymond Camden
		posted on 3/10/2010 at 2:34 AM
		</div>
		<div class="comment_text"><p>Could this be it?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.extjs.com%2Fforum%2Fshowthread.php%3Fp%3D407991%3AG8smuzDLsZgIT3Dw0HZikDiM1BI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.extjs.com/forum/showthread.php?p=407991">http://www.extjs.com/forum/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718930">19</a> by Ben Andersen
		posted on 3/10/2010 at 3:44 AM
		</div>
		<div class="comment_text"><p>I could be incorrect (maybe it was added back in for 3.1.1), but I believe the top toolbar has been removed from the Ext grid, and is no longer available.  The getTopToolbar function is still in the Ext 3.0 documentation, but I could never get it to work and found many examples of other people not being able to get it to work.</p><p>I found a way around this by creating a standalone toolbar that sits on top of the grid, that will for all visual and functional purposes be the same as the one previously provided by grid.getTopToolbar().  I provided some code back in comment 12, but failed to provide a good explanation.  Let me know if you have any questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718936">20</a> by Ron Lebfrom
		posted on 3/23/2010 at 1:21 AM
		</div>
		<div class="comment_text"><p>There is a bug with the getTopToolbar();  <br>The bug is 82064</p><p>You will have to work with getBottomToolbar();</p><p>Here is an example:<br>var initcssgrid = function(){          <br>          grid = ColdFusion.Grid.getGridObject("SiteCSSGrid");<br>          grid.addListener("rowclick",showattachedwebpages);	<br>	//getTopToolbar is broken per Adobe bug 82064  <br>          var tbar = grid.getBottomToolbar();</p><p>tbar.addButton({<br>   text:"Add File To Webpage",<br>       icon:"images/icons/add.png",<br>       cls:"x-btn-text-icon",<br>       tooltip:"Add File To Webpage",<br>       handler:AddCSSFILE<br>      });<br>tbar.add(new Ext.Toolbar.Separator());<br>tbar.addButton({<br>   text:"Remove CSS File",<br>       icon:"images/icons/delete.png",<br>       cls:"x-btn-text-icon",<br>       tooltip:"Remove CSS File",<br>       handler:deleteSiteCSSFile<br>      });<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718940">21</a> by Ron Lebfrom
		posted on 3/23/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>getTopToolbar(); Bug 82064 FIXED</p><p>The bug entered on Thursday, February 11, 2010 has been marked fixed by Adobe ColdFusion development.</p><p>(If this email is addressed to you directly, you've logged this bug.  Otherwise, you've subscribed to this bug through the Adobe ColdFusion beta site and are receiving a BCC.)</p><p>Product Area:  AJAX UI Components<br>Severity: 6 - Low (Easy workaround &amp; only affects small group)</p><p>Fixed In: ColdFusion 9.0.1 ,Beta 1, Build 270832</p><p>Description:  Using the HTML cfgrid  the getTopToolbar() does not workvar tbar = grid.getTopToolbar(); //  returns undefinedvar bbar = grid.getBottomToolbar(); //WorksA lot of developers are having problems:<a href="https://disq.us/url?url=https%3A%2F%2Fwww.extjs.com%2Fforum%2Fshowthread.php%3Fp%3D407991Comment%3Ac-NEG9sOII7I7K3GtS71ctcQMKM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.extjs.com/forum/showthread.php?p=407991Comment">https://www.extjs.com/forum...</a> 11:<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F10%2F15%2FWarning-to-Ajax-uses-in-ColdFusion-9%3AnZl2BUtLdeMT_1FqWcSx6nhx4Zo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/10/15/Warning-to-Ajax-uses-in-ColdFusion-9">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718952">22</a> by Jeff Sorte
		posted on 4/7/2010 at 10:16 PM
		</div>
		<div class="comment_text"><p>Thanks for this article and the updates on the bug fix.  A couple of questions:</p><p>1) Is the fix available yet?  If so, where can I get it?</p><p>2) What is the site/url for Adobe's CF bug tracking so I can subscribe to bugs and get updates?</p><p>Thanks for any assistance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718948">23</a> by Raymond Camden
		posted on 4/7/2010 at 10:40 PM
		</div>
		<div class="comment_text"><p>You can view Adobe's public CF bug tracker here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718951">24</a> by Daniel Fredericks
		posted on 5/5/2010 at 8:40 PM
		</div>
		<div class="comment_text"><p>anyone have any ideas where I can find examples of CFGrid and various things you can do with the grid? I am working with Checkboxes in a column, and I need to create a separate select all, select none button (can't figure out how to reference the value of each checkbox). With these new changes, I have no idea if the code I am finding by looking up EXTJS grid exmples are right or if they were created in an older version.<br>Any help with examples or my issue would be great...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718956">25</a> by Raymond Camden
		posted on 5/6/2010 at 9:04 PM
		</div>
		<div class="comment_text"><p>Try searching for cfgrid on <a href="http://disq.us/url?url=http%3A%2F%2Fcfbloggers.org%3AUSfw42IcIua5BdZyEnI9gfKMcRU&amp;cuid=3321886" rel="nofollow noopener" title="cfbloggers.org">cfbloggers.org</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718958">26</a> by Laurens
		posted on 7/6/2010 at 12:22 PM
		</div>
		<div class="comment_text"><p>@Curt Gratz:<br>Thanks, this solves exactly the problem I had with a grid I used in CF8 that broke in CF9. Great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718957">27</a> by Stephen Cozzolino
		posted on 10/1/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>This appears to be related to this article.  I found this piece of code that I have been using in CF8 successfully.  Now that I moved to CF9, I'm getting a javascript error.  Apparently, I cannot just reference Ext. as I was in CF8.  Does anyone know how I'm supposed to instantiate the Ext object to make this function work?</p><p>function sessionEnd() {<br>	ColdFusion.Window.hide('winSession');<br>	<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('winSessionEnd');<br>	var wob = ColdFusion.Window.getWindowObject('winSessionEnd');<br>	Ext.DialogManager.bringToFront(wob);<br>}</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718961">28</a> by Jenny Mostert
		posted on 10/21/2010 at 1:00 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, Curt and Ben. I'm in the middle of migrating our sites to SQL 2008 and CF 9. This was one of the few issues I've run into during the move. I was really excited to find all of the answers to my grid questions on one page. Thanks again for taking the time to post your findings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718959">29</a> by David
		posted on 9/19/2012 at 11:52 PM
		</div>
		<div class="comment_text"><p>Shawn or Raymond, did you ever find a comobobox that would work with CF9's cflayout? All my CMS features utilizing cflayout &amp; cflayoutarea fell apart when I upgraded from CF8 to CF9. I am still looking for answers. For that fact, has anyone found a combobox that will work or a way to reverse the Ajax from CF9 to function like it did with CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718962">30</a> by Raymond Camden
		posted on 9/20/2012 at 1:41 AM
		</div>
		<div class="comment_text"><p>You would need - afaik - to use Ext 'naked', ie, without cflayout, to use an earlier version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718960">31</a> by Richard Migambi
		posted on 10/18/2012 at 3:09 PM
		</div>
		<div class="comment_text"><p>@Ben Andersen - this helped me...your solution works great! Adobe should really make these things much clearer!!!</p></div>
	</div>
</div>
		