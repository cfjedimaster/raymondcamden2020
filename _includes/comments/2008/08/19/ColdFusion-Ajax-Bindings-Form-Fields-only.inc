
<div class="comment" id="c_1713685152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685152">1</a> by todd sharp
		posted on 8/19/2008 at 5:49 PM
		</div>
		<div class="comment_text"><p>Make sure to be careful when working with this method.  Might be best to jsStringFormat the variable to make sure you don't 'break' the JavaScript if it contains funky chars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685143">2</a> by Justin
		posted on 8/19/2008 at 5:59 PM
		</div>
		<div class="comment_text"><p>I wish there was some sort of guide or "how-to" for getting started with cf8 Layout/Ajax while remaining 508 compliant. The little things you can do and the tags you should avoid. The workarounds you can do.</p><p>Nic Tunney was supposed to do a 508 compliant preso at CFUnited, but I wasn't clear what happened there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685148">3</a> by Gary Gilbert
		posted on 8/19/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>508 compliance is a touchy issue with any Ajax stuff.  I haven't had a chance to play with the most modern screen readers but are they even able to read dynamically generated content via ajax calls?</p><p>If you follow the web accessibility guidelines the website should function with javascript turned off so that puts a big no no on Ajax.  With 508 compliance accessibility means accessible with assistive technology (screen reader).  But that brings us back to the problem of getting hold of a copy of JAWS and seeing if it can handle the EXT UI stuff in CF8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685149">4</a> by Justin
		posted on 8/19/2008 at 6:47 PM
		</div>
		<div class="comment_text"><p>That's why I was especially interested in Nic's preso. He said you can mock up with cflayout stuff and then switch to Ext/YUI to make them compliant.</p><p>I thought that some readers supported Ajax calls, as long as the layout degraded gracefully. Ext 3.0 is supposedly going to improve 508 quite a bit, so we'll see.</p><p>I've used the CF8 layouts and what not pretty extensively and find them to be :mostly: a time saver. Due to the way CF processes the tags and tries to autoinject all the js, that can the source of a headache or two.</p><p>One thing is for sure CF8 has got me back on the javascript bandwagon by initiating my baby steps. Other than jQuery for validation, I had my nose turned up to JS pre-CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685150">5</a> by Andy Sandefer
		posted on 8/19/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>@Jose<br>A while back Ray blogged about something else that's pretty handy where you can use a cfdiv bound to a URL and then use a simple IsDefined test on the page that's looking for the URL variable.  If it doesn't exist then set it (as in to keep your grid that's looking for the URL var so that it doesn't explode).  Here's a some code that I wrote for a client recently (a file manager) that shows a listing of files in a cfgrid that is bound to a cftree.  The automatic handling of listeners in CF8 is a very powerful feature and if you look very closely at my grid you'll see how I'm pulling of some fast find aka filter as you type voodoo in the searchFilter control above my cfgrid.  This let's the user quickly filter down a big list of files that exist within the folder that they're clicking on in the cftree.  At any rate, bindings are awesome and I'm pretty convinced that if you can dream it you can build it with CF8!</p><p>&lt;cfajaximport tags="cfwindow, cfform"&gt;</p><p>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;&lt;cfoutput&gt;#APPLICATION.titleText#&lt;/cfoutput&gt;&lt;/title&gt;<br>&lt;link rel="stylesheet" type="text/css" href="../css/main.css" /&gt;</p><p>&lt;script&gt;<br>	function getSelectedTreeVal() {<br>		var selectedTreeVal = ColdFusion.getElementValue('userFileTree','fileManager','node');<br>		return(selectedTreeVal);<br>	}</p><p>	function invokeUploader() {<br>		var selectedVal = ColdFusion.getElementValue('userSelected','fileManager');<br>		if (selectedVal == '') {<br>			alert("You Must Select the Customer Folder that you wish to Upload Files to...");<br>		}<br>		else {	<br>			day = new Date();<br>			windowID = day.getTime();			<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>('uploader.cfm', windowID, 'directories=no, location=no, menubar=no, resizable=no, scrollbars=yes, status=no, titlebar=no, toolbar=no, height=550, width=700'); <br>		}		<br>	}</p><p>	function refreshFileTree() {<br>		ColdFusion.Tree.refresh('userFileTree');<br>	}</p><p>	function showRenameFile() {<br>		day = new Date();<br>		renameFileWindowID = 'renameFile' + day.getTime();<br>		selectedFilename = ColdFusion.getElementValue('gridFilestoreDisplay', 'fileManager', 'CompleteFilename');<br>		var targetURL = 'renamefile.cfm?formName=' + renameFileWindowID + '&amp;currentFilename=' + selectedFilename;</p><p>		var windowOptions = new Object();<br>		windowOptions.width = 480;<br>		windowOptions.height = 360;<br>		<a href="http://disq.us/url?url=http%3A%2F%2FwindowOptions.center%3AM3zvgKYLTXbMMzMkH7n0kyTfNAU&amp;cuid=3321886" rel="nofollow noopener" title="windowOptions.center">windowOptions.center</a> = true;<br>		windowOptions.modal = true;<br>		windowOptions.resizeable = true;<br>		windowOptions.initshow = true;<br>		windowOptions.draggable = true;<br>		windowOptions.closeable = true;<br>		windowOptions.headerstyle = 'font-family: verdana; background-color: #0066FF;';</p><p>		ColdFusion.Window.create(renameFileWindowID, 'Rename File', targetURL, windowOptions);</p><p>		//alert(targetURL);<br>		//window.location = targetURL;<br>	}</p><p>	function closeFileRenameWindow() {<br>		ColdFusion.Window.hide(renameFileWindowID);<br>		ColdFusion.Grid.refresh('gridFilestoreDisplay', true);<br>	}</p><p>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;cfinclude template="appmenu.cfm"&gt;</p><p>&lt;body&gt;<br>	&lt;cfoutput&gt;<br>    &lt;cfform name="fileManager" format="html" style="font-family:Verdana; font-size:11px;"&gt;<br>	&lt;div align="center" style="border:medium; border-color:black;"&gt;<br>	&lt;cflayout type="HBox" style="width:980px; background-color:##FFFFFF;"&gt;<br>		&lt;cflayoutarea style="width:320px; height:526px; background-color:##FFFFFF;" overflow="AUTO" align="LEFT"&gt;<br>            &lt;cftree name="userFileTree" format="html" font="Verdana" fontsize="11px"&gt;<br>				&lt;cftreeitem bind="cfc:#APPLICATION.fileMgmtLib#.getFileTree({cftreeitempath}, {cftreeitemvalue})"&gt;<br>            &lt;/cftree&gt;<br>            &lt;cfinput type="hidden" name="userSelected" bind="{fileManager:userFileTree.node}"&gt;<br>		&lt;/cflayoutarea&gt;<br>		&lt;cflayoutarea&gt;<br>			&lt;table style="background-color:##FFFFFF;"&gt;<br>				&lt;tr&gt;<br>					&lt;td class="fieldLabel"&gt;Search Filter<br>						&lt;cfinput type="Text" maxlength="255" size="40" name="searchFilter" onkeyup="ColdFusion.Grid.refresh('gridFilestoreDisplay', true)"&gt;<br>					&lt;/td&gt;<br>				&lt;/tr&gt;<br>				&lt;tr&gt;<br>					&lt;td&gt;<br>						&lt;cfgrid name="gridFilestoreDisplay" format="HTML" font="Verdana" fontsize="11px" striperows="Yes" <br>						width="650" height="470" pagesize="40" colheaderfont="Verdana" colheaderfontsize="11px" bindonload="No"<br>						bind="cfc:#APPLICATION.fileMgmtLib#.getFilestoreForGrid(<br>																											searchDir={userFileTree.node},<br>																											typeFilter='File',<br>																											searchFilter={searchFilter},<br>					                                                                                        page={cfgridpage},<br>					                                                                                        pageSize={cfgridpagesize},<br>					                                                                                        gridSortColumn={cfgridsortcolumn},<br>					                                                                                        gridSortDir={cfgridsortdirection})"&gt;<br>							&lt;cfgridcolumn name="CompleteFilename" display="No"&gt;																				<br>					        &lt;cfgridcolumn name="Name" header="Filename" width="350"&gt;<br>							&lt;cfgridcolumn name="SizeDisplay" header="Size KB" width="80"&gt;<br>							&lt;cfgridcolumn name="TypeImageName" header="Type" width="50"&gt;<br>							&lt;cfgridcolumn name="DateTimeDisplay" header="Date Modified" width="150"&gt;<br>						&lt;/cfgrid&gt;	<br>					&lt;/td&gt;<br>				&lt;/tr&gt;<br>				&lt;tr&gt;<br>					&lt;td align="right"&gt;<br>						&lt;cfinput type="Button" name="btnDelete" value="Delete"&gt;<br>						&lt;cfinput type="Button" name="btnRename" value="Rename" onClick="showRenameFile();"&gt;<br>						&lt;cfinput type="Button" name="btnUpload" value="Upload" onClick="invokeUploader();"&gt;<br>						&lt;cfinput type="Button" name="btnDownload" value="Download"&gt;<br>					&lt;/td&gt;<br>				&lt;/tr&gt;<br>			&lt;/table&gt;<br>		&lt;/cflayoutarea&gt;<br>	&lt;/cflayout&gt;<br>	&lt;/div&gt;<br>    &lt;/cfform&gt;    		<br>	&lt;/cfoutput&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		