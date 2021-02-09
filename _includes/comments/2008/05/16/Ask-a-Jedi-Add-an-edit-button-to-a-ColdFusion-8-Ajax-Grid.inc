
<div class="comment" id="c_1713681031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681031">1</a> by todd sharp
		posted on 5/16/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>I'm not sure on the 'proper' part either, but you could _probably_ also do it by rolling your own renderer.</p><p>For inspiration see Ray's post on renderers or mine:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2008%2F4%2F7%2FCFGrid-Date-Picker-Editor%3A_3XTpoeT4Pzxiwg1WxQnZpzhvwI&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2008/4/7/CFGrid-Date-Picker-Editor">http://cfsilence.com/blog/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681038">2</a> by Michael White
		posted on 5/16/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p>when you switch from html tables to ajax grids, sometimes you have to rethink the way you do things. You could have just one edit button (that only appears when a grid item is selected) and pass the id of the selected grid item.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681035">3</a> by Andy Sandefer
		posted on 5/16/2008 at 11:11 PM
		</div>
		<div class="comment_text"><p>I personally feel that having an edit button on each row is redundant from a display point of view and I have add, edit and delete buttons beneath my cfgrid.  When the user clicks on the edit button it invokes a javascript function to get the primary key of the selected grid record and then it creates a cfwindow with the edit form for that record.  The user then makes their edits and clicks a Save button on the cfwindow's cfform which handles the database changes, closes the cfwindow and refreshes the underlying cfgrid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681036">4</a> by Scott Emery
		posted on 5/22/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>How about using a double-click event to launch a popup or cfwindow to do the edit. After the edit, how would you close the popup and do a refresh of the grid to show the change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681037">5</a> by Andy Sandefer
		posted on 5/23/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>Scott,<br>First off, sorry it took me a while to get back to you on this - I've been really busy with some client projects.  At any rate, here's how I would handle this - say that productgroups.cfm is the page with the cfgrid...</p><p>&lt;cfinclude template="AppHeader.cfm"&gt;</p><p>&lt;cfajaximport tags="cfwindow, cfform"&gt;<br>&lt;cfajaxproxy cfc="cfc.product" jsclassname="proxyProduct"&gt;</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;<br>&lt;title&gt;&lt;cfoutput&gt;#REQUEST.titleText#&lt;/cfoutput&gt;&lt;/title&gt;<br>&lt;link href="../css/main.css" rel="stylesheet" type="text/css"&gt;</p><p>&lt;script&gt;</p><p>	function showProductGroup(recordAction) {		<br>		if (recordAction == 'Update') {<br>			var selectedProductGroupID = ColdFusion.getElementValue('gridProductGroups','productGroups','ProductGroupID');<br>		}<br>		else {<br>			var selectedProductGroupID = '';<br>		}<br>		//alert('ID is ' + selectedProductGroupID);		<br>		day = new Date();<br>		productGroupWindowID = 'productGroup' + day.getTime();		<br>		var windowOptions = new Object();<br>		windowOptions.width = 550;<br>		windowOptions.height = 270;<br>		<a href="http://disq.us/url?url=http%3A%2F%2FwindowOptions.center%3AM3zvgKYLTXbMMzMkH7n0kyTfNAU&amp;cuid=3321886" rel="nofollow noopener" title="windowOptions.center">windowOptions.center</a> = true;<br>		windowOptions.modal = true;<br>		windowOptions.resizeable = true;<br>		windowOptions.initshow = true;<br>		windowOptions.draggable = true;<br>		windowOptions.closeable = true;<br>		windowOptions.headerstyle = 'font-family: verdana; background-color: #0066FF;';</p><p>		ColdFusion.Window.create(productGroupWindowID,'Product Group','editproductgroup.cfm?formName=' + productGroupWindowID + '&amp;productGroupID=' + selectedProductGroupID + '&amp;runMode=' + recordAction, windowOptions);<br>	}</p><p>	function closeEditWindow() {<br>		ColdFusion.Window.hide(productGroupWindowID);<br>		ColdFusion.Grid.refresh('gridProductGroups', true);<br>	}</p><p>	function productGroupDeleteCallback(callbackMsg) {<br>		alert('The selected Product Group record has been Deleted.');<br>		ColdFusion.Grid.refresh('gridProductGroups', true);<br>	}</p><p>	function errorHandler(code,msg) {<br>		alert('Error ' + code + ': ' + msg);<br>	}</p><p>	function deleteProductGroup() {<br>		var proxyDeleteProductGroup = new proxyProduct();<br>		proxyDeleteProductGroup.setErrorHandler(errorHandler);<br>		proxyDeleteProductGroup.setCallbackHandler(fileCollectionGroupDeleteCallback);</p><p>		var selectedProductGroupID = ColdFusion.getElementValue('gridProductGroups','productGroups','ProductGroupID');<br>		//alert(selectedProductGroupID);<br>		confirmDelete = confirm('Are you absolutely certain that you want to Delete the selected Product Group record?');<br>		if (confirmDelete == true) {<br>			var recDeleted = proxyDeleteProductGroup.deleteProductGroup(selectedProductGroupID);<br>		}<br>	}</p><p>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;<br>	&lt;cfform name="productGroups" format="html"&gt;<br>	&lt;table&gt;<br>		&lt;tr&gt;&lt;td&gt;&lt;h1&gt;Product Groups&lt;/h1&gt;&lt;/td&gt;&lt;/tr&gt;<br>		&lt;tr&gt;<br>			&lt;td&gt;<br>					&lt;cfgrid name="gridProductGroups" format="html" width="600" height="220" pageSize="10" colheaderfont="Verdana" font="Verdana" fontsize="11"<br>					bind="cfc:cfc.product.getProductGroupsForGrid(<br>			                                                                                           	page={cfgridpage},<br>			                                                                                           	pageSize={cfgridpagesize},<br>			                                                                                           	gridSortColumn={cfgridsortcolumn},<br>			                                                                                           	gridSortDir={cfgridsortdirection})"&gt;<br>						&lt;cfgridcolumn name="ProductGroupID" header="File Collection Group ID" width="190"&gt;<br>						&lt;cfgridcolumn name="LongDesc" header="Description" width="390"&gt;<br>					&lt;/cfgrid&gt;													<br>			&lt;/td&gt;<br>		&lt;/tr&gt;<br>		&lt;tr&gt;<br>			&lt;td align="right"&gt;<br>				&lt;cfinput type="button" name="btnAdd" value="Add" onclick="showProductGroup('Create')"&gt;<br>				&lt;cfinput type="button" name="btnEdit" value="Edit" onclick="showProductGroup('Update')"&gt;<br>				&lt;cfinput type="button" name="btnDelete" value="Delete" onclick="deleteProductGroup()"&gt;<br>			&lt;/td&gt;<br>		&lt;/tr&gt;<br>	&lt;/table&gt;<br>	&lt;/cfform&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Now you've got the edit page that the cfwindow loads to handle adding new records and updating existing records.  You'll notice that I have to give the edit page (editproductgroup.cfm) a dynamically named unique form id.    If you built this app without doing so you'd notice that once you edit, close the cfwindow and return to the grid and then try to pick a new record and edit again, the cfwindow seems to hold on to form variables and you'll actually update the previous record you were working with when you call the form submitter.  You get around this by making the edit page's form have a unique id that get's generated when the cfwindow is invoked.  Here's code for the edit page...</p><p>&lt;cfparam  name="productGroupID" default=""&gt;<br>&lt;cfparam  name="longDesc" default=""&gt;</p><p>&lt;cfset formName = URL.formName&gt;<br>&lt;cfset runMode = URL.runMode&gt;<br>&lt;cfif runMode EQ "Update"&gt;<br>	&lt;cfinvoke component="cfc.product" method="getProductGroups" productGroupID="#URL.productGroupID#" returnvariable="qryProductGroup"&gt;<br>	&lt;cfset productGroupID = qryProductGroup.ProductGroupID&gt;<br>	&lt;cfset longDesc = qryProductGroup.LongDesc&gt;<br>&lt;/cfif&gt;</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;<br>&lt;title&gt;&lt;cfoutput&gt;#REQUEST.titleText#&lt;/cfoutput&gt;&lt;/title&gt;<br>&lt;link href="../css/main.css" rel="stylesheet" type="text/css"&gt;</p><p>&lt;script&gt;<br>	submitForm = function() {<br>		var dataIsValid = _CF_check&lt;cfoutput&gt;#formName#&lt;/cfoutput&gt;(&lt;cfoutput&gt;#formName#&lt;/cfoutput&gt;);<br>		if (dataIsValid == true) {<br>			ColdFusion.Ajax.submitForm(&lt;cfoutput&gt;#formName#&lt;/cfoutput&gt;, 'formprocs/proceditproductgroup.cfm', callback, errorHandler);<br>		}	<br>	}</p><p>	function callback(callbackMsg) {<br>		alert('The Product Group record has been Saved.');<br>		closeEditWindow();		<br>	}</p><p>	function errorHandler(code,msg) {<br>		alert('Error ' + code + ': ' + msg);<br>	}<br>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;<br>	&lt;cfoutput&gt;<br>	&lt;cfform name="#formName#" format="html"&gt;<br>		&lt;cfinput type="hidden" name="runMode" value="#runMode#"&gt;<br>		&lt;cfif runMode EQ "Update"&gt;<br>			&lt;cfinput type="hidden" name="originalProductGroupID" value="#productGroupID#"&gt;<br>		&lt;/cfif&gt;<br>		&lt;table&gt;<br>			&lt;tr&gt;<br>				&lt;td class="formFieldLabel"&gt;Product Group ID&lt;/td&gt;<br>				&lt;td&gt;<br>					&lt;cfinput type="text" name="productGroupID" maxlength="20" value="#productGroupID#" required="true" message="You must enter a valid Product Group ID."&gt;<br>				&lt;/td&gt;<br>			&lt;/tr&gt;<br>			&lt;tr&gt;<br>				&lt;td class="formFieldLabel"&gt;Description&lt;/td&gt;<br>				&lt;td&gt;<br>					&lt;cfinput type="text" name="longDesc" maxlength="255" size="56" value="#longDesc#" required="true" message="You must enter a valid Description."&gt;<br>				&lt;/td&gt;<br>			&lt;/tr&gt;<br>			&lt;tr&gt;<br>				&lt;td colspan="2" align="right"&gt;<br>					&lt;cfinput type="button" name="btnClose" value="Close" onclick="closeEditWindow()"&gt;<br>					&lt;cfinput type="button" name="btnSave" value="Save" onclick="submitForm()"&gt;<br>				&lt;/td&gt;<br>			&lt;/tr&gt;<br>		&lt;/table&gt;<br>	&lt;/cfform&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/body&gt;</p><p>&lt;/html&gt;</p><p>The drill down page, editproductgroup.cfm, which inhabits the cfwindow submits to a page named proceditproductgroup.cfm which can handle either an update or insert into the database.  You'll notice that the first page uses a remote call to a function held in a cfc to handle a delete.</p><p>Good luck!<br>-Andy Sandefer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681043">6</a> by Gavy
		posted on 10/28/2008 at 10:14 AM
		</div>
		<div class="comment_text"><p>Hi Andy, I was following you cfgrid code, very cool enough and easy.</p><p>But I have problem when i try to delete the record. The following code creates Problem:</p><p>   function productGroupDeleteCallback(callbackMsg) {<br>      alert('The selected Product Group record has been Deleted.');<br>      ColdFusion.Grid.refresh('gridProductGroups', true);<br>   }<br> function deleteProductGroup() {<br>      var proxyDeleteProductGroup = new proxyProduct();<br>      proxyDeleteProductGroup.setErrorHandler(errorHandler);<br>      proxyDeleteProductGroup.setCallbackHandler(fileCollectionGroupDeleteCallback);</p><p>      var selectedProductGroupID = ColdFusion.getElementValue('gridProductGroups','productGroups','ProductGroupID');<br>      //alert(selectedProductGroupID);<br>      confirmDelete = confirm('Are you absolutely certain that you want to Delete the selected Product Group record?');<br>      if (confirmDelete == true) {<br>         var recDeleted = proxyDeleteProductGroup.deleteProductGroup(selectedProductGroupID);<br>      }<br>   }</p><p>Also function productGroupDeleteCallback is Different from what you called in fileCollectionGroupDeleteCallback, when i made there name same the javascript popup appared then.</p><p>when i clicked ok to delete, i encountered an error;</p><p>proxyDeleteProductGroup.deleteProductGroup is not a function<br>deleteProductGroup()modules....fm?part=3 (line 462)<br>onclick(click clientX=387, clientY=409)modules....Xmg%3D%3D (line 2)<br>[Break on this error] var recDeleted = proxyDeletePok...up.deleteProductGroup(selectedProductGroupID);</p><p>So well i think something is wrong in the code as i am trying to figure what could be the cause?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681051">7</a> by Andy Sandefer
		posted on 10/28/2008 at 5:13 PM
		</div>
		<div class="comment_text"><p>Well I modified code from an existing project for this example so the callback handler should've been set to productGroupDeleteCallback, the other reference was a find and replace mishap so sorry about the confusion.<br>Also this line is wrong...</p><p>var recDeleted = proxyDeleteProductGroup.deleteProductGroup(selectedProductGroupID);</p><p>You don't need recDeleted because the result is actually going to go to the callback.</p></div>
	</div>
</div>
		