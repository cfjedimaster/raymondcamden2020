
<div class="comment" id="c_1713617296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617296">1</a> by Seth
		posted on 2/26/2005 at 11:43 AM
		</div>
		<div class="comment_text"><p>Another problem I’ve run into with cfgrid is with the cfgridcolumn type Boolean. It has a default of true(checked), but if a new row is inserted then submitted without the checkbox being rechecked it submits that value as [empty] instead of True</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617295">2</a> by Roland
		posted on 2/26/2005 at 12:58 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Are you storing the values as floats in the DB?  That could explain the odd looking results.  That doesn't explain why they're not being formatted properly though :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617297">3</a> by Doug Hughes
		posted on 2/26/2005 at 10:41 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've been doing extensive work with CFgrid.  Unfortunately, the flash version of CFgrid is quite broken.  (That’s not to say unusable, but requiring a large number of work-arounds.)  I there are numerous issues with the data being sent correctly on post.  This is particularly prevalent when allowing your users to delete and add rows.</p><p>I created a form where a set of data was listed in a flash cfgrid.  The user could select rows to edit them using bound text controls or delete them.  They could also add new rows.</p><p>Now, image that you have a table populated with two rows.  Your users comes to the form and deletes both rows and adds two new rows.  The data that is received on post does not correctly represent the changes to the form state.  I’ve also had problems with “phantom” rows appearing on submit or sorting.  (I think this is related to how the cfgridrow column is numbered.)</p><p>Oh, another fun one is that your users can delete more rows than exist.  Try having 3 rows in a grid and buttons for adding/deleting rows.  Click delete 8 times.  You have to then click add 6 times before you will see another row show up in your table.</p><p>Other fun issues…. Let’s see, if you have a column of type Boolean, but the column is not visible, the checkbox still shows up.</p><p>If you have a text box or textarea bound to a selected row in a CFgrid, even if the cell is empty you will have a space in your text area.  Also, if your users delete all the rows from the table your will have the text ‘undefined’ show up in the bound text box.</p><p>Those are all the issues I can think of at the moment.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617299">4</a> by Doug Hughes
		posted on 2/26/2005 at 10:41 PM
		</div>
		<div class="comment_text"><p>"there are numerous issues with the data being sent correctly on post." -- should read that the data is incorrect ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617300">5</a> by Mike Nimer
		posted on 2/27/2005 at 8:04 AM
		</div>
		<div class="comment_text"><p>Doug,</p><p>were these issues with the beta or the final release. The first issue you mentioned about the submitted data from grid not being right sounds like a bug we had in beta.</p><p>Can you email me directly, I want to make sure I know about all the issues you've found. This way I can make sure they are all submitted as bugs so we can get them fixed. I haven't heard of some of the issues you mentioned.</p><p>thanks,<br>---nimer<br>mnimer@macromedia.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617302">6</a> by Brett Liotta
		posted on 2/27/2005 at 9:07 AM
		</div>
		<div class="comment_text"><p>Ray, make sure you are using a DECIMAL(x,2) data type for currency, instead of FLOAT OR DOUBLE.  One of those MySQL workarounds.</p><p>-Brett<br>brett@clearrocksolutions.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617303">7</a> by pim
		posted on 2/28/2005 at 5:39 PM
		</div>
		<div class="comment_text"><p>I found another weirdness, if you have a column of type 'image', it will render the picture well first, then if you scroll the image out and come back it has disapeared ;)<br>I have seen this bug before in flash, it was fixed by adding &amp;amp;lt;p&amp;amp;gt; around the image tag.</p><p>Does anybody know how to have the datagrid displaying more than one line of text per row, if you change the rowHeight attribute, it won't do it.<br>I found the way to do it for the Tree:<br>myTree.variableRowHeight=true;<br>myTree.wordWrap=true;<br>but this code doesn't apply to the datagrid (cfgrid)</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617301">8</a> by Michael
		posted on 2/28/2005 at 6:09 PM
		</div>
		<div class="comment_text"><p>Another thing that is bothering me, is the fact that you CAN insert a new line in the datagrid by doing, GridData.insertRow(myGrid);. But it doesn't give you any option to insert a new line WITH specific data. I've been searching in AS and Flex docs a few nights, but I can't get it work properly :-S.</p><p>The Flash Forms is nice, but just not really feature finished if you ask me.</p><p>Just my 0.02 about cfgrid/flash forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617298">9</a> by Mike Nimer
		posted on 3/1/2005 at 1:46 AM
		</div>
		<div class="comment_text"><p>Michael, <br>There is no way to insert data when you insert the row, but you can do it right after. with this</p><p>mygrid.dataProvider.editField(mygrid.selectedIndex, 'state', 'my new text');</p><p>hth,<br>---nimer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617304">10</a> by pim
		posted on 3/3/2005 at 3:37 PM
		</div>
		<div class="comment_text"><p>Another issue:</p><p>If you insert a CFGRID in a CFFORM, posting the form with a row selected will produce a param called GRID.CFGRIDROWINDEX with the selectedIndex number + all the columns values for the selected row.</p><p>I noticed that it doesn't work if you don't have an ONCHANGE attribute for CFGRID, if you dump the form, all values (GRID.CFGRIDROWINDEX ..) will be empty arrays :((</p><p>Juste adding onChange="" in the CFGRID works fine ;))</p><p>Cheers<br>Philippe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617305">11</a> by aidan
		posted on 8/25/2005 at 1:52 PM
		</div>
		<div class="comment_text"><p>thanks for the myTree.wordWrap=true; hint - works great in cfgrid as well.  you're a lifesaver!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617307">12</a> by Mitch
		posted on 9/28/2005 at 11:16 PM
		</div>
		<div class="comment_text"><p>Hey, good news, looks like the CFMX 7.01 updater fixes some (if not all - heck i just downloaded it heehee) issues with some CFGrid processing - at least the checkboxes come up empty when initially inserting a row.</p><p>Thanks Nimer :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617309">13</a> by Sami Hoda
		posted on 12/10/2005 at 1:29 AM
		</div>
		<div class="comment_text"><p>Doug said: 'there are numerous issues with the data being sent correctly on post. -- should read that the data is incorrect ;)'</p><p>Doug, and All,</p><p>I developed a CF custom tag to parse through the flash form grid post results, and pick out what was really 'edited' using the checked method that asfusion prescribes. Essentially, you get a list back of the primary keys of the rows that were truly checked versus 'edited'.</p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617311">14</a> by Harkirat Singh
		posted on 10/17/2006 at 11:07 PM
		</div>
		<div class="comment_text"><p>Hi!<br>  I am having an issue with sorting the CFGRID. It only happens when I set the type attribute specifically and also when the data set in the grid is a bit large e.g. 1800 rows. I have a zip code field that I set to numeric however when I sort the field it works fine the first time but the next time I try to sort it it makes the flash player hang up. It always happens on the second attempt. It pops up a warning message saying that a script in the movie is making it run slow and asks me if I want to kill the script. When I kill it I can not reuse the form without reloading it. If I remove the type attribute I can sort without any problems. My guess is that it has something to do with flash doing some type conversions before sorting.</p><p>Does anyone know of any workarounds to make the grid recognize and sort a number correctly. Btw  I am populating the grid via flash remoting.</p><p>Thanks a heap in advance !</p><p>Harkirat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617310">15</a> by Harkirat Singh
		posted on 10/17/2006 at 11:08 PM
		</div>
		<div class="comment_text"><p>P.S. I am using CF MX 7.0.2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617308">16</a> by Cherrio
		posted on 5/28/2008 at 1:39 PM
		</div>
		<div class="comment_text"><p>hi, please can you kindly assist me, i am trying to mask the date using CfGrid and its not working, its displaying the default format eg 2008-05-01 00:00:00.0<br>Below is my code:</p><p>&lt;cfform action="test.cfm" method="post"&gt;<br>&lt;cfgrid name="listMyContracts" width="100%" align="value" appendKey="yes" bgColor="white" autoWidth="no" colHeaders="yes" colHeaderTextColor="black" delete="no" query="listContracts"&gt;</p><p> &lt;cfgridcolumn name = "commencementDate" header = "Commencement Date" width="182" mask="yyyy/mm/dd"&gt;<br>&lt;/cfgrid&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617315">17</a> by Raymond Camden
		posted on 5/28/2008 at 2:49 PM
		</div>
		<div class="comment_text"><p>Mask is only valid with the Flash Form version of the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617314">18</a> by Francesco
		posted on 12/21/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>how can I update a cfgridcolumn type boolean?</p></div>
	</div>
</div>
		