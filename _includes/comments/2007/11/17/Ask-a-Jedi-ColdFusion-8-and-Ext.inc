
<div class="comment" id="c_1713674460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674460">1</a> by Christopher Wigginton
		posted on 11/17/2007 at 8:38 PM
		</div>
		<div class="comment_text"><p>Since EXT JS is part of CF 8, you have the advantage of using a fairly heavyweight js framework on a ColdFusion 8 server without having to worry about any expensive license issues and a js framework being available using the cfajaximport tag, assuming the site has access to the CFIDE/scripts folder.</p><p>Check out some of the grid examples on <a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%3AYyXL5_ckvL5N_rTOisZEHsy8bXU&amp;cuid=3321886" rel="nofollow noopener" title="extjs.com">extjs.com</a>.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%2Fdeploy%2Fdev%2Fexamples%2Fgrid%2Fpaging.html%3A7Kc1kX6yJoqCeNvRmrbmwmkSzH8&amp;cuid=3321886" rel="nofollow noopener" title="http://extjs.com/deploy/dev/examples/grid/paging.html">http://extjs.com/deploy/dev...</a></p><p>The usage examples on the <a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%3AYyXL5_ckvL5N_rTOisZEHsy8bXU&amp;cuid=3321886" rel="nofollow noopener" title="extjs.com">extjs.com</a> site will also help you to understand how the extjs framework works.  Just be prepaired to have a bit of a brain freeze when you look at the Ext JS code and then look at the auto-generated CFFORM/CFGRID code.</p><p>The only bummer is that the version of Ext JS included in CF 8 is at 1.0 and version 2.0 is available.   One of these days I'll have to try upgrading to 2.0 and seeing what breaks in the form ui's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674464">2</a> by Mikkel Johansen
		posted on 11/17/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>Ray. Thanks for clearing it out.</p><p>I knew about the AJAX functions, but did not know that back-end was Ext. I just hoped that Ext was an official part of CF8. And I could make use of all the nice features/functions in the Ext JS, as for example "Drag'n'Drop".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674462">3</a> by Raymond Camden
		posted on 11/17/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>I disagree with you Chris. Notice you mention that the version in CF8 is older. Doesn't that right there say you should download Ext yourself if you want to use it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674463">4</a> by Raymond Camden
		posted on 11/17/2007 at 9:20 PM
		</div>
		<div class="comment_text"><p>@Mikkel - well since Ext itself is free, nothing stops you from downloading it and using it. Don't forget too that CF has some very cool ways to help you serve up stuff for Ajax as well, including native JSON support. Did you know that you can take a CFC with a remote method, one that returns query data, and tell it to return the query as JSON by just passing returnformat=json in the url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674466">5</a> by Rob Gonda
		posted on 11/17/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>At the time Adobe started using Ext as CF's Ajax library, it was actually an extension for YUI, hence why YUI is also included; it used to be called YUI-EXT. Jack then abstracted the API and wrote adapters for various libraries such as jQuery and Prototype. Later, EXT became a standalone library as well, allowing you to extend your existing ones or use it by itself. EXT 2.0 is a huge step and very different than the previous versions.</p><p>So here's a suggestion. If you want the quick Ajax functionality for your sites writing very little JavaScript, use CF8. ColdFusion has always allowed to rapid application development. However, if you need to write a desktop-like looking application, and you don't know Flex, then use EXT 2.0.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674461">6</a> by Christopher Wigginton
		posted on 11/18/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Sure, using the latest library is the right thing to in most cases (bug fixes, speed improvement),  but if what you need is in the older library, it's perfectly OK to use that library.</p><p>The problem using the latest library in conjunction with cfform is that the new library isn't guaranteed to be completely compatible with existing cfform and cfajax tags if it hasn't been blessed by Adobe.</p><p>Using both libraries is a pain, since in most cases, the last loaded overwrites unless you either rip through the library and fix/adjust the scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674465">7</a> by Mark Ireland
		posted on 11/19/2007 at 1:35 PM
		</div>
		<div class="comment_text"><p>The first Ext thing that I went for was the Tree. It has drag and drop. Unfortunately, while you can drag and drop within the tree, saving the order of the leafs is not really what the Tree is for. There is a treeSerializer class but it was added by a user and is not official. So even Ext 2.0 will have trying to decide between using the really new stuff and staying with the library that has already been integrated. . ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674467">8</a> by knk
		posted on 10/17/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>Ok I need help. I modified the code so I can use paging. I couldn't figure out how to pass paging in the struct so I created a cfc. So I have 3 files now that consist of the JS, form and the component. The grid is working and filtering but it's only filtering the data on that page. It's not filtering all the data. How can I fix this? Here's my code:</p><p>JS:</p><p>function init(){</p><p>	  grid = ColdFusion.Grid.getGridObject("MemberGrid");<br>	   //var gridFoot = grid.getView().getFooterPanel(true); //make the footer <br>       var gridHead = grid.getView().getHeaderPanel(true); //make the header so I can add button and CB</p><p>      	var tbar = new Ext.Toolbar(gridHead);</p><p>cb = new Ext.form.ComboBox({<br>   id:"AccountFilter",<br>   emptyText:"Filter By Account Status",<br>   mode:"local",<br>   triggerAction:"all",<br>   displayField:"text",<br>   valueField:"value",<br>         store:new Ext.data.SimpleStore({<br>            fields: ["value", "text"],<br>            data: [<br>               ["Active","Active"],<br>               ["Inactive","Inactive"],<br>			   ["Historical","Historical"],<br>			   ["Guest","Guest"],</p><p>            ]<br>   })<br>});</p><p>      cb.addListener("select",function(combo,record,index){<br>var AccountStatus = record.data.value;<br>var AccountStatus2 = record.data.text;</p><p>   grid.getDataSource().filter("ACCOUNTSTATUS",AccountStatus); //fi</p><p>});<br><a href="http://disq.us/url?url=http%3A%2F%2FExt.fly%3AUdU7Ly3IfRkZxKQldi1m-7WLvPk&amp;cuid=3321886" rel="nofollow noopener" title="Ext.fly">Ext.fly</a>(tbar.addSpacer().getEl().parentNode).setStyle('width', '100%');<br>tbar.addButton({<br>   text:"Remove Filter",<br>       icon:"plugin.png",<br>       cls:"x-btn-text-icon",<br>       tooltip:"Remove Filter",<br>       handler:removeFilter<br>      });<br>      tbar.add(new Ext.Toolbar.Separator());<br>      tbar.add(cb);<br>      console.log(Ext);<br>}<br>   function removeFilter(){<br>      store = grid.getDataSource()<br>           store.clearFilter();<br>       cb.clearValue(); //clear the value of the combo box      <br>            cb.reset(); //reset it so empty text shows up <br>   }</p><p>CFFORM:</p><p>&lt;cfform&gt;<br>      &lt;cfgrid format="html" striperows="yes" selectcolor="##D9E8FB" sort="true" width="500" name="MemberGrid" pagesize="500" bind="cfc:#Request.Config.CustomComponentDir#.Members.getMembers({cfgridpage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection})"&gt;<br>         &lt;cfgridcolumn name="ID" display="false"/&gt;<br>		 &lt;cfgridcolumn name="STATUSID" display="false"/&gt;<br>		 &lt;cfgridcolumn name="POSITIONAME" header="Role" &gt;<br>         &lt;cfgridcolumn name="FULLNAME" header="Full Name" &gt;<br>         &lt;cfgridcolumn name="COMPANYNAME" header="Company" &gt;<br>         &lt;cfgridcolumn name="EMAILADDRESS" header="Email Address" &gt;<br>         &lt;cfgridcolumn name="ACCOUNTSTATUS" header="Status" &gt;<br>      &lt;/cfgrid&gt;<br>   &lt;/cfform&gt;</p><p>   &lt;cfset ajaxOnLoad("init")&gt;</p><p>CFC:<br>&lt;cfcomponent&gt;<br>	&lt;cffunction name="getMembers" access="remote"&gt;<br>		&lt;cfargument name="page" required="yes"&gt;<br>		  &lt;cfargument name="pageSize" required="yes"&gt;<br>		  &lt;cfargument name="gridsortcolumn" required="yes"&gt;<br>		  &lt;cfargument name="gridsortdirection" required="yes"&gt;<br>		   &lt;cfquery name="ListAllContent" datasource="#Request.Config.DSN.Primary#" &gt;<br>			SELECT     <br>				m.Id AS id, <br>				m.LastName + ', ' + m.FirstName AS FullName, <br>				m.CompanyId, <br>				m.EmailAddress, <br>				m.WorkPhone, <br>				c.Name AS CompanyName, <br>                p.Name AS PositionName, <br>				acstat.Name AS AccountStatus,<br>				<a href="http://disq.us/url?url=http%3A%2F%2Facstat.id%3A9w1JKm6QtlP2tGAUuba9TC7OkNQ&amp;cuid=3321886" rel="nofollow noopener" title="acstat.id">acstat.id</a> as StatusID,<br>				getdate() as currenttime</p><p>			FROM         <br>				nma_Members AS m INNER JOIN<br>				nma_Companies AS c ON m.CompanyId = c.Id INNER JOIN<br>				nma_AccountStatuses AS acstat ON m.AccountStatusId = acstat.Id INNER JOIN<br>				nma_Positions AS p ON m.PositionId = p.Id<br>				&lt;cfif gridsortcolumn neq ''&gt;<br>				  order by #gridsortcolumn# #gridsortdirection#<br>				&lt;/cfif&gt;</p><p>		&lt;/cfquery&gt;<br>		&lt;cfreturn queryconvertforgrid(ListAllContent,page,pagesize)/&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		