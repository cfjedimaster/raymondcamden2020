
<div class="comment" id="c_1713710263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710263">1</a> by Neil Bailey
		posted on 11/29/2008 at 9:54 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>just a quick note to save you a bit of typing (if you have dozens/hundreds of fields, it can add up), you don't need the !=null - its implied.</p><p>I usually do something like the following:</p><p>var $get=document.getElementById;</p><p>if ($get('SomeFieldName')) do something;</p><p>you can also do the opposite:</p><p>if (!$get('SomeFieldName')) do something....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710262">2</a> by Raymond Camden
		posted on 11/29/2008 at 10:08 AM
		</div>
		<div class="comment_text"><p>Good point. And not that it was intended, but thanks for the shortcut with $get. When I'm not using jQuery and just doing CF8 Ajax stuff, I think Ill start using that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710264">3</a> by Neil Bailey
		posted on 11/29/2008 at 10:52 AM
		</div>
		<div class="comment_text"><p>I always use little shortcuts like that - I usually have literally hundreds of fields, and it can be a REAL pain in the behind.</p><p>I also use var $form=document.SomeFormName; to shortcut the form...  but $get has saved me literally THOUSANDS of typed chars...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710266">4</a> by Regina
		posted on 4/11/2009 at 2:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I have 2 sets of CFLAYOUT tabs. The first had inline code. The other had had a source attributes. I do know why it takes forever for the screen to load. Help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710265">5</a> by Raymond Camden
		posted on 4/11/2009 at 5:07 PM
		</div>
		<div class="comment_text"><p>Could be anything. Hard to say with the information you've given so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710268">6</a> by Regina
		posted on 4/12/2009 at 4:09 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Here's my code: It take about 5-10 seconds for the whole thing to load. I have just upgraded my JRE but I have not seen any significant change in loading time.</p><p>&lt;cfajaximport tags = "cfform,cfgrid"&gt;<br>&lt;cfform method="post" name="myform" action="index.cfm" enctype="multipart/form-data" onsubmit="return chkFields();"&gt; <br>&lt;table width="100%"&gt;<br>	&lt;tr&gt;<br>		&lt;td&gt;&lt;label&gt;Field 1&lt;/label&gt;&lt;/td&gt;<br>		&lt;td&gt;<br>			&lt;cfselect name="field1"&gt;<br>				&lt;option value=""&gt;&lt;/option&gt;<br>				&lt;cfoutput query="getFieldList"&gt;<br>					&lt;option value="#optionvalue#"&gt;#optiondesc#&lt;/option&gt;<br>				&lt;/cfoutput&gt;<br>			&lt;/cfselect&gt;			<br>		&lt;/td&gt;</p><p>		&lt;td&gt;&lt;label&gt;Field 2&lt;/label&gt;&lt;/td&gt;<br>		&lt;td&gt;<br>	   			&lt;cfselect <br>				name="field2" <br>				value="field2_id" <br>           		bind="cfc:getField2({field1})" <br>				display="field2_desc"<br>				bindonload="true" <br>				style="width:350px;"<br>				&gt;<br>				&lt;option value=""&gt;&lt;/option&gt;<br>				&lt;/cfselect&gt;								<br>		&lt;/td&gt; 		   <br>    &lt;/tr&gt;	<br>	&lt;tr&gt;<br>		&lt;td&gt;&lt;label&gt;Type&lt;/label&gt;&lt;/td&gt;<br>		&lt;td&gt;	 <br>	   			&lt;cfselect <br>				name="field3" <br>				value="field3_id" <br>           		bind="cfc:getField3({field1},{field2})" <br>				display="field3_desc"				<br>				&gt;<br>				&lt;option value=""&gt;&lt;/option&gt;<br>				&lt;/cfselect&gt;							<br>		&lt;/td&gt;<br>		&lt;td&gt;&lt;label&gt;Field 4&lt;/label&gt;&lt;/td&gt;<br>		&lt;td&gt;<br>	   			&lt;cfselect <br>				name="field4" <br>				value="field4_id" <br>           		bind="cfc:getField4({field3})" style="width:350px;"<br>				display="field4_desc"</p><p>				&gt;<br>				&lt;option value=""&gt;&lt;/option&gt;<br>				&lt;/cfselect&gt;						<br>		&lt;/td&gt;       <br>    &lt;/tr&gt;		<br>	&lt;tr&gt;<br>       &lt;td&gt;<br>	   &lt;label&gt;Field 5&lt;/label&gt;&lt;/td&gt;<br>	   &lt;td style="z-index:20000; position:relative;"&gt;<br>			&lt;cfinput type="text" name="field5" autosuggest="cfc:getField5({field1},{cfautosuggestvalue})" size="50" &gt;		<br>		&lt;/td&gt;<br>       &lt;td&gt;&lt;label&gt;Field 6&lt;/label&gt;&lt;/td&gt;<br>	   &lt;td  style="z-index:0; position:relative;" colspan="3"&gt;	<br>			 &lt;cfselect name="field6"<br>				 value="field6_id"<br>				 display="field6_desc"<br>				 bind="cfc:getField6({field1},{field3},{field5})"</p><p>				 style="width:350px;"</p><p>				 &gt;<br>				 &lt;option value=""&gt;&lt;/option&gt;<br>				&lt;/cfselect&gt;					<br>	   &lt;/td&gt;		<br>	&lt;/tr&gt;</p><p> &lt;/table&gt;</p><p>	&lt;cflayout type="tab" name="formTab" tabHeight="170" &gt;<br>		&lt;cfif request.ActiveFormTab eq "tab1a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 1" name = "tab1a" selected="#isSelected#"&gt;<br>			&lt;cftextarea richtext="true" name="richText1" toolbar="Basic" height="100" validate="noblanks"/&gt;<br>		&lt;/cflayoutarea&gt;<br>		&lt;cfif request.ActiveFormTab eq "tab2a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 2" name = "tab2a" selected="#isSelected#"&gt;<br>			&lt;cftextarea richtext="true" name="richText2" toolbar="Basic" height="100" validate="noblanks"/&gt;<br>		&lt;/cflayoutarea&gt;<br>		&lt;cfif request.ActiveFormTab eq "tab3a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 3" name = "tab3a" selected="#isSelected#"&gt;<br>			&lt;cfinclude template="tab3.cfm"&gt;<br>		&lt;/cflayoutarea&gt;			  <br>		&lt;cfif request.ActiveFormTab eq "tab4a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 4" name = "tab4a" selected="#isSelected#"&gt;<br>			&lt;cfinclude template="tab4.cfm"&gt;<br>		&lt;/cflayoutarea&gt;			  <br>		&lt;cfif request.ActiveFormTab eq "tab5a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 5" name = "tab5x" selected="#isSelected#"&gt;<br>			&lt;cfinclude template="tab5.cfm"&gt;<br>		&lt;/cflayoutarea&gt;			  <br>		&lt;cfif request.ActiveFormTab eq "tab6a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 6" name = "tab6a" selected="#isSelected#" &gt;<br>			&lt;cfinclude template="tab6.cfm"&gt;<br>		&lt;/cflayoutarea&gt;			  <br>		&lt;cfif request.ActiveFormTab eq "tab7a"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		&lt;cflayoutarea title="Tab 7" name = "tab7a" selected="#isSelected#"&gt;<br>			&lt;cfinclude template="tab7.cfm"&gt;<br>		&lt;/cflayoutarea&gt;				<br>	&lt;/cflayout&gt; <br>	&lt;cfinput type = "submit" name="btnSubmit" value="Update"&gt;<br>	&lt;cfinput type = "button" name="btn1" value="Button 1"&gt;<br>	&lt;cfinput type = "button" name="btn2" value="Button 2"&gt;<br>	&lt;cfinput type = "button" name="btn3" value="Button 3"&gt;</p><p>&lt;/cfform&gt;</p><p>		&lt;cflayout type="tab" name="MyTabLayout"&gt;<br> 		  &lt;cfif request.ActiveTab eq "tab1"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 1" name = "tab1" selected="#isSelected#" source="index.cfm?fuseaction=tab1" refreshonActivate="true" /&gt;<br> 		  &lt;cfif request.ActiveTab eq "tab2"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 2" name = "tab2" selected="#isSelected#" source="index.cfm?fuseaction=tab2" refreshonActivate="true" /&gt;<br>		  &lt;cfif request.ActiveTab eq "tab3"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 3" name = "tab3" selected="#isSelected#" source="index.cfm?fuseaction=tab3" refreshonActivate="true" /&gt;<br>		  &lt;cfif request.ActiveTab eq "tab4"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 4" name = "tab4" selected="#isSelected#" source="index.cfm?fuseaction=tab4" refreshonActivate="true" /&gt;<br>		  &lt;cfif request.ActiveTab eq "tab5"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 5" name = "tab5" selected="#isSelected#" source="index.cfm?fuseaction=tab5" refreshonActivate="true" /&gt;<br> 		  &lt;cfif request.ActiveTab eq "tab6"&gt;&lt;cfset isSelected = "true"&gt;&lt;cfelse&gt;&lt;cfset isSelected="false"&gt;&lt;/cfif&gt;<br>		  &lt;cflayoutarea title="Tab 6" name = "tab6" selected="#isSelected#" source="index.cfm?fuseaction=tab6" refreshonActivate="true" /&gt;		  <br>		&lt;/cflayout&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710267">7</a> by Raymond Camden
		posted on 4/13/2009 at 5:54 AM
		</div>
		<div class="comment_text"><p>I assume you have timed the various parts of the page? I assume you have used Firebug to look at the Ajax based requests to see if one is slower than the others? If not - you know what to do. :)</p></div>
	</div>
</div>
		