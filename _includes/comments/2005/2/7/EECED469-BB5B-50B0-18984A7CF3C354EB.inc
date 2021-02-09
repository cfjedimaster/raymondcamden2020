
<div class="comment" id="c_1713616988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616988">1</a> by Karolis R.
		posted on 2/13/2005 at 1:39 AM
		</div>
		<div class="comment_text"><p>There is one problem with this code! What if related values have two differen selectedIndex values? What I am trying to say this code does not bind database data directly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616990">2</a> by Raymond Camden
		posted on 2/13/2005 at 8:06 AM
		</div>
		<div class="comment_text"><p>My example was assuming both selects had the same data. Obviously you would modify for other situations - but the point is - that is the base code you can use to work with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616989">3</a> by Karolis R.
		posted on 2/13/2005 at 9:38 PM
		</div>
		<div class="comment_text"><p>The only problem is, I nor many people I've talked to know a way that actionscript could be used to select by OPTION's VALUE="".</p><p>If I was to populate the CFSELECT from a query, say there is thirty people in the list. The list is continually updated, people get added and deleted. ID associated with people names will NOT match INDEX value which always goes from 0 to RECORDCOUNT - 1. So if my grid would say USERID = 209, this code would look for selectedIndex value!!! But there is only 30 people in the list, so...</p><p>I think people at Macromedia released CF7 as a nice BETA version, since so many obvious functionalities, implied by their own design, are missing.</p><p>IF SOMEONE CAN FIGURE IT OUT, PLEASE POST IT, IT WOULD BE GREATLY APPRECEATED!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616991">4</a> by Raymond Camden
		posted on 2/14/2005 at 3:48 AM
		</div>
		<div class="comment_text"><p>Are you asking if is possible to get the VALUE attribute? If so - there is. You can get both the value and text of a particular OPTION item. So in your drop down, if VALUE was the primary key of the user and the TEXT was the username, you can access the value like so:</p><p>this.options[selectedIndex].value</p><p>This is inside an onChange for the select so obviously THIS refers to the select box itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616993">5</a> by Karolis R.
		posted on 2/14/2005 at 4:05 AM
		</div>
		<div class="comment_text"><p>What I am trying to do is to make changing CFGRID data change SELECTED VALUE in &amp;lt;SELECT&amp;gt;.</p><p>"this.options[selectedIndex].value" gives you selected value of &amp;lt;SELECT&amp;gt; instance, you cannot use it to change selection!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616994">6</a> by Raymond Camden
		posted on 2/14/2005 at 4:11 AM
		</div>
		<div class="comment_text"><p>Eh? To change the selected index of a select box, let's say named ccyear, you can simply do this:</p><p>ccyear.selectedIndex=4;</p><p>Obviously real code will be a bit more complex, but the important part is on the left side of the equation above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616992">7</a> by Karolis R.
		posted on 2/14/2005 at 4:14 AM
		</div>
		<div class="comment_text"><p>What I meant was... How to change the selected value by NOT KNOWING selectedINDEX, only the actual value of the record.</p><p>read my 10:38AM post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616997">8</a> by Raymond Camden
		posted on 2/14/2005 at 5:14 AM
		</div>
		<div class="comment_text"><p>Oh - well use the code I described above to loop over  all the items. Ie, loop from i=0 to the number of items in the drop down and check the foo.options[i].value property.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616999">9</a> by Bill King
		posted on 3/11/2005 at 1:10 AM
		</div>
		<div class="comment_text"><p>I am havnig trouble executing the loop statement.  Here is what I have:</p><p>I am using an invisible field to work between my select box and my grid.  Then when the gridrow is selected my hidden field value is updated.  That works with bind.</p><p>Then when I change selections from my select box the onClick changes the hidden field therefore updating the grid.</p><p>Problem is when I select a grid item I cannot match the id in my hidden textbox to the VALUE.  I tried adding this to the onChange of the text box:</p><p>for (i=0; i&amp;lt;clientListSelect.length; i++)<br>{if (Client_id.text == clientListSelect.getItemAt[i].data) clientListSelect.selectedIndex = i}</p><p>Can't get any response from the browser.  Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616996">10</a> by Bill King
		posted on 3/11/2005 at 2:39 AM
		</div>
		<div class="comment_text"><p>I am havnig trouble executing the loop statement.  Here is what I have:</p><p>I am using an invisible field to work between my select box and my grid.  Then when the gridrow is selected my hidden field value is updated.  That works with bind.</p><p>Then when I change selections from my select box the onClick changes the hidden field therefore updating the grid.</p><p>Problem is when I select a grid item I cannot match the id in my hidden textbox to the VALUE.  I tried adding this to the onChange of the text box:</p><p>for (i=0; i&amp;lt;clientListSelect.length; i++)<br>{if (Client_id.text == clientListSelect.getItemAt[i].data) clientListSelect.selectedIndex = i}</p><p>Can't get any response from the browser.  Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617000">11</a> by Jeff Bouley
		posted on 9/23/2005 at 2:27 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm getting errors with your recommendation of "this.options[selectedIndex].value" in onChange, error states no property with the name 'options'.  I too would like to retrieve value and text from a select box that has size. Data is great, fo r retrieving value and not text, but text seems to only work with selectedItem when there is no size to the select.  Any info. appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617003">12</a> by Jeff Bouley
		posted on 9/23/2005 at 2:45 PM
		</div>
		<div class="comment_text"><p>Got it...  To access data in a flash cfselect, to get id information you'd use <a href="http://disq.us/url?url=http%3A%2F%2FmySelect.selectedItem.data%3AKnpRyKoDwV1Clq7A4NKgMecN-cM&amp;cuid=3321886" rel="nofollow noopener" title="mySelect.selectedItem.data">mySelect.selectedItem.data</a>, but to get the display value you'd use mySelect.selectedItem.label.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617002">13</a> by Raymond Camden
		posted on 9/23/2005 at 3:44 PM
		</div>
		<div class="comment_text"><p>So you are all good Jeff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617005">14</a> by Thomary
		posted on 12/13/2005 at 12:06 AM
		</div>
		<div class="comment_text"><p>I've got two cfselects and this actionscript is on the onChange of the grid that works for me.</p><p>&lt;cfgrid name="gridname" query="getArtists" height="155" width="755" rowheaders="false"<br>onchange="for(var i:Number = 0; i&lt;cfselect.length; i++) {if(cfselect.getItemAt([i]).data==gridname.selectedItem.columnname)cfselect.selectedIndex=i}<br>	  for(var i:Number = 0; i&lt;cfselect2.length; i++) {if(cfselect2.getItemAt([i]).data==gridname.selectedItem.columnname2)cfselect2.selectedIndex=i}"&gt;</p><p>My problem:  These cfselect fields are not required.  So in the database sometimes there is data and sometimes it's null.<br>When the grid selection is made - and there is data the cfselects are filled in.  Great!.<br>But the next grid selection - there is no data the cfselects keep the last data (until another grid change with data)</p><p>I need to clear the cfselects at the begining of the actionscript and then pick up the grid selection.  Any help would be great!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617004">15</a> by corey
		posted on 1/24/2006 at 3:20 AM
		</div>
		<div class="comment_text"><p>Thomary</p><p>not sure if your question was answered yet, but you can reset the select value everytime during the onChange so the previous value is not there when an empty value is selected. Just set the index value to 0 (assuming you have an option like "Select" with an empty value) in the begining of your onChange statment:</p><p>old way:<br>onchange="for(var i:Number = 0; i&lt;cfselect.length; i++) {if(cfselect.getItemAt([i]).data==gridname.selectedItem.columnname)cfselect.selectedIndex=i}<br>    for(var i:Number = 0; i&lt;cfselect2.length; i++) {if(cfselect2.getItemAt([i]).data==gridname.selectedItem.columnname2)cfselect2.selectedIndex=i}"&gt;</p><p>new way:<br>onchange="{cfselect.selectedIndex=0}{cfselect2.selectedIndex=0}for(var i:Number = 0; i&lt;cfselect.length; i++) {if(cfselect.getItemAt([i]).data==gridname.selectedItem.columnname)cfselect.selectedIndex=i}<br>    for(var i:Number = 0; i&lt;cfselect2.length; i++) {if(cfselect2.getItemAt([i]).data==gridname.selectedItem.columnname2)cfselect2.selectedIndex=i}"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617006">16</a> by Thomary
		posted on 1/27/2006 at 2:20 AM
		</div>
		<div class="comment_text"><p>Absolutely fantastic. You saved me again.  <br>Entering data in every record was my work around (lucky I was only using sample data until I finish the form).  Thanks very much!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617008">17</a> by thomary
		posted on 9/1/2006 at 6:13 PM
		</div>
		<div class="comment_text"><p>I'm trying to use a cfSelect to fill other cfinput fields.  Inventory is too large to fill a grid.  It takes too long to open the form.<br>So when someone selects Inventory tag number = 123456<br>I can then set the type, model, location from my inventory database.  <br>I tried the code below but I keep getting undefined in the cfinput fields on select.</p><p>Cfquery  datasource=”tableinv” name=”myinv”<br>SELECT tagnum, type, model, location<br>FROM myinvtable<br>/cfquery</p><p>cfsavecontent variable="autofillinv"<br>    type.text = myselect.selectedItem.type;<br>   selecttype.text = myselect.selectedItem.model;<br>   selectitem.text = myselect.selectedItem.location;<br>/cfsavecontent</p><p>Cfform….<br>cfSelect query="myinv" name=”myselect” label="Inv Tag Num" onchange=”#autofillinv#” value="tagnum" display="tagno" queryPosition="below" width="185"<br>      option value="" /option<br>/cfSelect<br>  cfinput type="text" name="type" label="Type" size="12" /<br>  cfinput type="text" name="model" label="Model"size="25"/<br>  cfinput type="text" name="location" label="Location" size="40" /</p><p>/cfform</p><p>Is something like this possible? <br>Is there something else I should look into?<br>I’d appreciate any direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617009">18</a> by Raymond Camden
		posted on 9/1/2006 at 6:46 PM
		</div>
		<div class="comment_text"><p>You set selecttype and selectitem - but I don't see them. I see type, model, and location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617007">19</a> by thomary
		posted on 9/6/2006 at 5:42 PM
		</div>
		<div class="comment_text"><p>I'm sorry, I was using the code from another area that works and just changed it to the new code I'm trying to get working.  The code that works are all cfselects.  <br>The code doesn't work for cfinputs.</p><p>Cfquery datasource=”tableinv” name=”myinv”<br>SELECT tagnum, type, model, location<br>FROM myinvtable<br>/cfquery</p><p>cfsavecontent variable="autofillinv"<br>type.text = myselect.selectedItem.type;<br>model.text = myselect.selectedItem.model;<br>location.text = myselect.selectedItem.location;<br>/cfsavecontent</p><p>Cfform….<br>cfSelect query="myinv" name=”myselect” label="Inv Tag Num" onchange=”#autofillinv#” value="tagnum" display="tagno" queryPosition="below" width="185"<br>option value="" /option<br>/cfSelect</p><p>cfinput type="text" name="type" label="Type" size="12" /<br>cfinput type="text" name="model" label="Model"size="25"/<br>cfinput type="text" name="location" label="Location" size="40" /</p><p>/cfform</p><p>Can this be used on cfinputs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617011">20</a> by Rio
		posted on 10/10/2006 at 4:42 AM
		</div>
		<div class="comment_text"><p>Hi Ray and all,<br>   I´m trying to put a simple cfselect into a cfform but getting confused. I´m very new to actionscript and cf.<br>My cfinputs work fine outputting in the cfgrid:</p><p>&lt;cfinput type="DateField" name="DTLEAVE" label="ACTION DATE:"<br>bind="{companyGrid.dataProvider[companyGrid.selectedIndex]['DTLEAVE']}" onChange="companyGrid.dataProvider.editField(companyGrid.selectedIndex, 'DTLEAVE', DTLEAVE.text);"&gt;</p><p>The problem is here when I have tried to incorporate the comments in this thread and it doesn´t throw an error but doesn´t output the db entries as the cfinputs do. I am a bit out of my depth-please help!! Thanks:</p><p>&lt;cfselect name="NEXTSTEP" label="Next" <br>onChange="NEXTSTEP.selectedIndex=NEXTSTEP.selectedIndex"&gt;<br>&lt;option value="SEND FAX"&gt;SEND FAX&lt;/OPTION&gt;<br>&lt;option value="SEND EMAIL"&gt;SEND EMAIL&lt;/OPTION&gt;<br>&lt;option value="CALL AND EMAIL"&gt;CALL AND EMAIL&lt;/OPTION&gt;<br>&lt;option value="CALL"&gt;CALL&lt;/OPTION&gt;<br>&lt;option value="NO"&gt;NO&lt;/OPTION&gt;        <br>&lt;option value="MEETING"&gt;MEETING&lt;/OPTION&gt;<br>&lt;/cfselect&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617012">21</a> by aubry
		posted on 11/9/2006 at 9:47 PM
		</div>
		<div class="comment_text"><p>hello <br>I'm trying to change the value of a cfselect when I click on my cfgrid</p><p>my cfselect options are from a query</p><p>Thanks for your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617013">22</a> by ed
		posted on 11/10/2006 at 10:20 PM
		</div>
		<div class="comment_text"><p>Have a look at this this is for more than one select binding. Works the same as for one.</p><p>To have more than one select binding to a cfgrid just add actionscript to the cfgrid. By trial and error I worked out that you do the following:<br>On the cfgrid(this uses three cfselects):<br>   &lt;cfgrid name="UsersGrid" format="Flash"<br>         query="qNames" rowheaders="No"<br>         onchange="for (var i:Number = 0; i&lt;state.length; i++) {if <br>(state.getItemAt([i]).data == UsersGrid.selectedItem.state) <br>state.selectedIndex = i} for (var i:Number = 0; i&lt;meetingtime.length; i++) <br>{if (meetingtime.getItemAt([i]).data == UsersGrid.selectedItem.meetingtime) <br>meetingtime.selectedIndex = i}<br>for (var i:Number = 0; i&lt;dept.length; i++) {if (dept.getItemAt([i]).data == <br>UsersGrid.selectedItem.dept) dept.selectedIndex = i}<br>for (var i:Number = 0; i&lt;city.length; i++) {if (city.getItemAt([i]).data == <br><a href="http://disq.us/url?url=http%3A%2F%2FUsersGrid.selectedItem.city%3ANV-b_NQ9Zgi77LDguXFJTZViYIw&amp;cuid=3321886" rel="nofollow noopener" title="UsersGrid.selectedItem.city">UsersGrid.selectedItem.city</a>) city.selectedIndex = i}"&gt;</p><p>On the cfselect:<br>&lt;cfselect name="dept" width="200" size="1" label="Dept." <br>onchange="UsersGrid.dataProvider.editField(UsersGrid.selectedIndex, 'dept', <br><a href="http://disq.us/url?url=http%3A%2F%2Fdept.selectedItem.data%3AUzx_lm6TV7Dis5ZYIweKG2ZzX8s&amp;cuid=3321886" rel="nofollow noopener" title="dept.selectedItem.data">dept.selectedItem.data</a>);"&gt;<br>&lt;option value="None"&gt;None&lt;/OPTION&gt;<br>&lt;option value="Cundinamarca"&gt;Cundinamarca&lt;/OPTION&gt;<br>&lt;option value="Antioquia"&gt;Antioquia&lt;/OPTION&gt;<br>&lt;option value="Boyaca"&gt;Boyaca&lt;/OPTION&gt;<br>&lt;option value="Sucre"&gt;Sucre&lt;/OPTION&gt;<br>&lt;option value="Atlantico"&gt;Atlantico&lt;/OPTION&gt;<br>&lt;/cfselect&gt;</p><p>Explanation:<br>To add a new cfselect  just add in the onchange between the "" the <br>following:</p><p>for (var i:Number = 0; i&lt;state.length; i++) {if (state.getItemAt([i]).data <br>== UsersGrid.selectedItem.state) state.selectedIndex = i}</p><p>change the field in this example "state" to your field name.</p><p>Watch out for upper and lower case-actionscript is case sensitive although <br>cf isn´t. Try to have your field names all uppercase and put all of the references in upper case as well then you won´t get problems. good luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617010">23</a> by aubry
		posted on 11/11/2006 at 1:16 AM
		</div>
		<div class="comment_text"><p>Thanks a lot it works for me now but I've a second problem<br>-&gt; <a href="http://disq.us/url?url=http%3A%2F%2Fwww.asfusion.com%2Fblog%2Fentry%2Fcoldfusion-flash-forms-macromedia-2%3Ae0NFrQwdVhDUQQ-UG70J1C952D0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.asfusion.com/blog/entry/coldfusion-flash-forms-macromedia-2">http://www.asfusion.com/blo...</a></p><p>post n° 127 ;-)</p><p>Have a nice week !<br>&amp;thanks again !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617014">24</a> by Ed
		posted on 11/14/2006 at 9:55 PM
		</div>
		<div class="comment_text"><p>Instead of using an input meaning that users can change things how can I just output the value in  a cfform? I imagine I am trying to do something that cfform flash format can´t do. What I want to do is output the value below and keep it binding to the grid. Any ideas or impossible? Thanks a lot</p><p>&lt;cfinput type="DateField" name="DTLEAVE" label="ACTION DATE:"<br>bind="{companyGrid.dataProvider[companyGrid.selectedIndex]['DTLEAVE']}" onChange="companyGrid.dataProvider.editField(companyGrid.selectedIndex, 'DTLEAVE', DTLEAVE.text);"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617015">25</a> by sharon212
		posted on 12/1/2006 at 12:53 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>How can I bind values from select box to display those into text box? Please help me out..</p><p>Here is my code:</p><p>&lt;cfform name="form" METHOD="POST" action="Faccdte.cfm" skin ="#skin#" format="flash" width="900" height="300"&gt;</p><p>&lt;cfformgroup type="horizontal" &gt;  <br>	&lt;cfselect name = "thisselect" <br>		label = "AccNo"  <br>		required="yes"<br>		width="170"&gt;<br>		&lt;cfloop query="getAccNo"&gt; <br>		&lt;option value = #getaccno.prdtyd#, #getaccno.accno#, #getaccno.acccud#, #getaccno.bookbal#,#getaccno.vdbbal# &gt; #getaccno.ACCNO#             &lt;/option&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfselect&gt;	<br>&lt;/cfformgroup&gt;</p><p>	&lt;cfinput type="text" name="prdtyd" width="200" label="Account Type" bind="{<a href="http://disq.us/url?url=http%3A%2F%2Fselect.selectedItem.data%3Ad4neEf7odI2MQfcwk8SI1mu6oQc&amp;cuid=3321886" rel="nofollow noopener" title="select.selectedItem.data">select.selectedItem.data</a>}"&gt;<br>	&lt;cfinput type="text" name="Accno" width="200"...&gt;<br>	&lt;cfinput type="text" name="Acccud" width="200"...&gt;<br>	&lt;cfinput type="text" name="bookbal" width="200"...&gt;<br>	&lt;cfinput type="text" name="vdbbal" width="200"...&gt;</p><p>&lt;/cfform&gt;	<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617016">26</a> by Howrad
		posted on 12/19/2007 at 3:17 AM
		</div>
		<div class="comment_text"><p>Do you know if you still can not bind to cfselect in CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617017">27</a> by Thomary
		posted on 12/26/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>I think if you use the name of the cfselect<br>{<a href="http://disq.us/url?url=http%3A%2F%2Fthisselect.selectedItem.data%3ALw2vS83hpeZME_hytdCbit0R3tI&amp;cuid=3321886" rel="nofollow noopener" title="thisselect.selectedItem.data">thisselect.selectedItem.data</a>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617018">28</a> by Simon
		posted on 2/26/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>Hi, I am using</p><p>&lt;cfselect name="status" size="1" id="status" label="Status" multiple="No" width="160" required="Yes" message="Please select the status" bind="{data.dataProvider[data.selectedIndex]['status']}" onChange="data.dataProvider.editField(data.selectedIndex, 'status', status.text)"&gt;<br>&lt;option value = ""&gt;Select Status&lt;/option&gt;<br>&lt;option value = "Pending"&gt;Pending&lt;/option&gt;<br>&lt;option value = "Won"&gt;Won&lt;/option&gt;<br>&lt;option value = "Lost"&gt;Lost&lt;/option&gt;<br>&lt;option value = "Requoted"&gt;Requoted&lt;/option&gt;<br>&lt;/cfselect&gt;</p><p>whidch is the same technique I am using to bind my text fields to my cfgrid.  However, when I select a row on the grid the cfselect does not show the value.  The grid will change if I choose an option from the cfselect, but the cfselect just does not show the relevant value when i click on a row....any thoughts please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617023">29</a> by thomary
		posted on 2/26/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>cfselects are different.</p><p>You must update the select field on the onChange of the Grid.</p><p>First set the select to null with:<br>{status.selectedIndex=0}</p><p>Then set the select with your data<br>for(var i:Number = 0; i&lt;status.length; i++) <br>{if(status.getItemAt([i]).data==data.selectedItem.status)status.selectedIndex=i}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617019">30</a> by Simon
		posted on 2/26/2008 at 7:11 PM
		</div>
		<div class="comment_text"><p>Thanks for the prompt reply,</p><p>so the two lines of code you specified, where do they reside in my code?  sorry, just trying to get to grips with grids, and its my first time binding!</p><p>thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617020">31</a> by thomary
		posted on 2/26/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p>&lt;cfgrid name="data" onChange="{status.selectedIndex=0}<br>    for(var i:Number = 0; i&lt;status.length; i++) <br>{if(status.getItemAt([i]).data==data.selectedItem.status)status.selectedIndex=i}"</p><p>I got this off Ben Forta's blog a while back.  It's great help for all of us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617022">32</a> by Simon
		posted on 2/26/2008 at 7:24 PM
		</div>
		<div class="comment_text"><p>Thanks again, but it hasn't changed anything...?</p><p>so my grid code:</p><p>&lt;cfgrid name="data" height="300" query="agent"  format="flash"  onChange="{status.selectedIndex=0}<br>for(var i:Number = 0; i&lt;status.length; i++)<br>{if(status.getItemAt([i]).data==data.selectedItem.status)status.selectedIndex=i}" &gt;</p><p>my cfselect code:</p><p>&lt;cfselect name="status" size="1" id="status" label="Status" multiple="No" width="160" onChange="data.dataProvider.editField(data.selectedIndex, 'status', status.text)"&gt;<br>&lt;option value = ""&gt;Select Status&lt;/option&gt;<br>&lt;option value = "Pending"&gt;Pending&lt;/option&gt;<br>&lt;option value = "Won"&gt;Won&lt;/option&gt;<br>&lt;option value = "Lost"&gt;Lost&lt;/option&gt;<br>&lt;option value = "Requoted"&gt;Requoted&lt;/option&gt;<br>&lt;/cfselect&gt;</p><p>So at the moment, if I change the cfselect the relevant column in the grid changes.  But, when I first click on the grid row, my text fields populate with the data, but the cfselect field just stays as "Select Status"</p><p>Sorry...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617021">33</a> by Simon
		posted on 2/27/2008 at 4:45 PM
		</div>
		<div class="comment_text"><p>sorry, Am I not making any sense?</p></div>
	</div>
</div>
		