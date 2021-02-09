
<div class="comment" id="c_1713712742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712742">1</a> by Tony Nelson
		posted on 2/11/2009 at 9:19 AM
		</div>
		<div class="comment_text"><p>I think it's worth mentioning Brian Kotek's Form Utilities CFC for those that haven't checked it out yet.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fformutils.riaforge.org%2F%3AgPkG8HfM98tk3XsVSQnYnbeT_u8&amp;cuid=3321886" rel="nofollow noopener" title="http://formutils.riaforge.org/">http://formutils.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712744">2</a> by Tom K
		posted on 2/11/2009 at 2:43 PM
		</div>
		<div class="comment_text"><p>Is there a reason you didn't put the loop within the CFQuery tag?</p><p>Presumably your current code will hit the database per round on the loop, whereas I tend to loop within the INSERT/UPDATE statement, which would hit the database only once.</p><p>(or was just to a) keep it simple, b) Access probably doesn't support it or something?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712740">3</a> by Joel Cox
		posted on 2/11/2009 at 7:12 PM
		</div>
		<div class="comment_text"><p>I do this kind of thing in much the same way as you have described. I ran into a situation where two users had the same form open and both updated at different times. Obviously, the second user wins. This can occur on a single-row edit, too, of course, but is more likely when multiple updates are done.</p><p>I generate a current timestamp in the query that creates the form and add it to each row in a hidden field. (When a record is updated, I update the timestamp column for that row.) Before updating I compare the timestamp in the row to be updated with the timestamp sent with the form data. If the timestamp in the database table is newer than that passed in with the form data, then another user has updated the data behind your back. In this case, I refuse the update, save the key value in a struct, then highlight the form rows in red (based upon the key) that could not be updated.</p><p>This has saved me from receiving confused-user phone calls about why the data they had entered "came out wrong".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712741">4</a> by Raymond Camden
		posted on 2/11/2009 at 7:15 PM
		</div>
		<div class="comment_text"><p>@TomK: Yes, just trying to keep it as simple as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712743">5</a> by Joe DuVall
		posted on 2/11/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>Since you're running a bunch of cfquery blocks, wouldn't it be a good idea to wrap a cftransaction tag around the loop? :)</p><p>Nice example, though. I wouldn't have thought to do it that way initially.</p><p>Also, thanks for the link, Tony. I didn't know that utility existed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712754">6</a> by JC
		posted on 2/11/2009 at 8:00 PM
		</div>
		<div class="comment_text"><p>Depending on what you're actually doing, the easiest way to do this could just be cfgrid &amp; cfgridupdate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712749">7</a> by Raymond Camden
		posted on 2/11/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>I'd disagree - at least for the newbie user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712752">8</a> by JC
		posted on 2/11/2009 at 8:48 PM
		</div>
		<div class="comment_text"><p>*shrug*<br>cfgridupdate grid="artGrid" datasource="cfartgallery" tablename="art"</p><p>One line to update any number of rows, as long as you're sticking to a single table. And the syntax for CFGRID itself isn't that bad. It looks cluttered typed out because there are so many options, but once you've done one of them you can pretty much copy/paste them for any simple CRUD you need, just adding cfgridcolumn tags as need</p><p>I use it for stuff like updating tables of interest rates/terms, stock &amp; weather lookups and custom links on our intranet; I also use cfgrid for a fairly complicated payroll pre-processing system, but not cfgridupdate there, because the data has to have lots of validation run against it and then it's inserted into multiple tables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712748">9</a> by Raymond Camden
		posted on 2/11/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>Heh, would you believe I forgot about cfgridupdate? I get a bit worried when the SQL is done all 'automagically', but yeah, that would be pretty easy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712753">10</a> by Pema
		posted on 2/11/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond. It is awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712750">11</a> by Chris
		posted on 2/26/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>What about updating multiple records with multiple fields, like ARTNAME and DESCRIPTION?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712746">12</a> by Raymond Camden
		posted on 2/27/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>You would need a second set of form fields for description. This would make the code a bit more complex. You couldn't just loop over each field since now you have 'sets' of fields for each record. Would you like an example of this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712745">13</a> by Chris
		posted on 2/27/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>Yeah, I figured that's how you would have to do it.  If you don't mind giving an example, that would be great!  Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712747">14</a> by Raymond Camden
		posted on 2/27/2009 at 9:37 PM
		</div>
		<div class="comment_text"><p>I've added it to my list of blog ideas. So it is recorded and will be eventually written.... one day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712751">15</a> by PC
		posted on 9/28/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>I wouldn't mind seeing the code for updating one record with multiple fields (ie. artname, description, date). I been trying to use your code for this but alas , days later I'm still struggling....any help would be fantastic!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712756">16</a> by Raymond Camden
		posted on 9/28/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>Here is the followup:  <a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Fyb34z3o%3A89-9uUon-mbyFImENRY4BB42cxM&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/yb34z3o">http://tinyurl.com/yb34z3o</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712755">17</a> by PC
		posted on 9/30/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>So how would I update my table with the current date if I use:<br>RegDate = &lt;cfqueryparam  cfsqltype="cf_sql_date" value="#Now()#" /&gt; (it outputs current date in every record)<br>OR<br>&lt;cfset form.RegDate to #Now()#&gt;<br>&lt;cfset RegDate = form["RegDate_" &amp; ID]&gt;<br>RegDate = &lt;cfqueryparam  cfsqltype="cf_sql_date" value="#RegDate#" /&gt; (I get error "Element RegDate_24 is undefined in a Java object of type class coldfusion.filter.FormScope referenced as ....")</p><p>Not sure how to handle dates in your example.</p><p>Thanks for any help you can give.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712757">18</a> by Raymond Camden
		posted on 10/1/2009 at 5:26 AM
		</div>
		<div class="comment_text"><p>I'd have to see your code. I assume you made a new INPUT field with the name regdate_#id#.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712758">19</a> by PC
		posted on 10/2/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>Here's my code:</p><p>&lt;cfif structKeyExists(form, "submit")&gt;<br>	&lt;cfloop item="field" collection="#form#"&gt;<br>		&lt;cfif findNoCase("Name_", field)&gt;<br>			&lt;cfset ID = listLast(field, "_")&gt;<br>			&lt;cfset Phone = form["Phone_" &amp; ID]&gt;<br>			 &lt;!--- &lt;cfset RegDate = form["RegDate_" &amp; ID]&gt; ---&gt; <br>			&lt;cfquery datasource="#application.dsn#"&gt;<br>				Update    EventRegistration<br>				Set        Name = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[field]#"&gt;,<br>				              Phone = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#Phone#"&gt;<br>							  &lt;cfif #form[field]# is not ''&gt;<br>				              ,RegDate = &lt;cfqueryparam  cfsqltype="cf_sql_date" value="#Now()#" /&gt;<br>							  &lt;/cfif&gt;<br>				Where ID = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#ID#"&gt;<br>			&lt;/cfquery&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfquery name="getRecords" datasource="#application.dsn#" maxrows="32"&gt;<br>select   *<br>from EventRegistration<br>&lt;/cfquery&gt;</p><p>&lt;form action="" method="post"&gt;<br>&lt;input type="hidden" name="RegDate"&gt; <br>&lt;TABLE   style="font-family: Verdana, Arial, sans-serif; font-size: 12px;" align="center" border="0" cols="5"&gt;<br>&lt;h1&gt;Event Registration&lt;/h1&gt;<br>&lt;TR style="color: darkblue;" VALIGN="top" ALIGN="left"&gt;<br>	&lt;TH bgcolor="#FFFFCC" width="10%"&gt;Event Date&lt;/TH&gt;<br>	&lt;TH bgcolor="#FFFFCC" width="10%"&gt;Event Time&lt;/TH&gt;<br>	&lt;TH bgcolor="#FFFFCC" width="10%"&gt;Name&lt;/TH&gt;<br>	&lt;TH bgcolor="#FFFFCC" width="10%"&gt;Phone&lt;/TH&gt;<br>	&lt;TH bgcolor="#FFFFCC" width="10%"&gt;Registration Date&lt;/TH&gt;<br>&lt;/TR&gt;</p><p>&lt;cfloop query="getRecords"&gt;<br>&lt;tr valign="top"&gt;<br>&lt;cfoutput group="EventDate"&gt;<br>&lt;TR style="color: darkblue;" VALIGN="top" ALIGN="left"&gt;<br>&lt;TD width="10%"&gt;#GetRecords.EventDate#&lt;/TD&gt;<br>&lt;TD width="10%"&gt;#GetRecords.EventTime#&lt;/TD&gt;<br>&lt;TD width="10%"&gt;&lt;input type="text" id="Name_#ID#" name="Name_#ID#" value="#Name#" &lt;cfif  Name is not ''&gt; disabled &lt;/cfif&gt; /&gt;&lt;/TD&gt;<br>&lt;TD width="10%"&gt;&lt;input type="text" id="Phone_#ID#" name="Phone_#ID#" value="#Phone#" &lt;cfif  Phone is not ''&gt; disabled &lt;/cfif&gt; /&gt;&lt;/TD&gt;<br>&lt;TD width="10%"&gt;#DateFormat(GetRecords.RegDate,"dd-mmm-yyyy")#&lt;/TD&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;&lt;td colspan="5"&gt; &lt;/td&gt;&lt;/tr&gt;<br>&lt;/cfoutput&gt;<br>&lt;/tr&gt;<br>&lt;/cfloop&gt;<br>&lt;/table&gt;<br>&lt;input  align="middle" type="submit" name="submit" value=" Submit " /&gt; &lt;input type="button" value=" Cancel  " onClick="window.opener=null; window.close(); return false" /&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712759">20</a> by Raymond Camden
		posted on 10/2/2009 at 1:57 AM
		</div>
		<div class="comment_text"><p>Please do not post entire files. :) Next time, use Pastebin.</p><p>So I do not see a form field named regdate_ID. Do you? Notice that you have one for name_id, and phone_id. You _display_ the date but it's not a form input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712760">21</a> by PC
		posted on 10/3/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>Sorry for posting the entire code.</p><p>I've tried:<br>&lt;input type="hidden" name="RegDate"&gt;<br>&lt;input type="hidden" name="RegDate_ID"&gt;<br>&lt;input type="hidden" name="RegDate_#ID#"&gt;</p><p>Still get error message....</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712761">22</a> by Raymond Camden
		posted on 10/3/2009 at 12:17 AM
		</div>
		<div class="comment_text"><p>You definitely want RegDate_#ID#. This marks the field as being related to an ID. Then this should work:</p><p>&lt;cfset RegDate = form["RegDate_" &amp; ID]&gt;</p><p>Please also read my followup linked to above under Related Blog Entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712763">23</a> by Jim H
		posted on 10/24/2009 at 9:46 PM
		</div>
		<div class="comment_text"><p>Thank you Ray!  This just saved me hours....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712762">24</a> by Marc Cerabona
		posted on 8/12/2011 at 12:04 AM
		</div>
		<div class="comment_text"><p>I am trying to use this code on my site. I think that I have copied it over, but something does not seem to be working. anyone see what I am missing.</p><p>&lt;cfif structKeyExists(form, "save")&gt;<br>&lt;cfloop item="field" collection="#form#"&gt;<br>&lt;cfif findNoCase("lab_", field)&gt;<br>&lt;cfset volactionnumber = listLast(field, "_")&gt;<br>&lt;cfquery datasource="fieldtool"&gt;<br>update volaction<br>Set volaction_label = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[field]#"&gt;<br>Where volactionnumber = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#volactionnumber#"&gt;<br> &lt;/cfquery&gt;<br> &lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfif&gt;<br>&lt;cflocation url="metrics.cfm"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712764">25</a> by Marc Cerabona
		posted on 8/12/2011 at 12:36 AM
		</div>
		<div class="comment_text"><p>Please disregard the question above. Problem between the keyboard and the chair.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712766">26</a> by Ty Whalin
		posted on 1/18/2013 at 4:49 AM
		</div>
		<div class="comment_text"><p>Okay, this is a good one. Found out how I should send the entire file pertaining to the other post surrounding the cffeed conversation we have been having. This one is for updating the same looped fields in a form to the SQL update. Very tricky, going to try out some of these ideals. THX Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712768">27</a> by Cassi Bassolino
		posted on 12/4/2013 at 12:02 AM
		</div>
		<div class="comment_text"><p>Newbie here.<br>This form is perfect for me, however I can't get it to work.  Please advise what I've missed in my code:</p><p>&lt;cfif structKeyExists(form, "save")&gt;<br>    &lt;cfloop item="field" collection="#form#"&gt;<br>        &lt;cfif findNoCase("members_", field)&gt;<br>            &lt;cfset id = listLast(field, "_")&gt;<br>            &lt;cfquery datasource="#datasource#"&gt;<br>            update    members<br>            set       tee = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[field]#"&gt;<br>            where     id = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#id#"&gt;<br>            &lt;/cfquery&gt;<br>        &lt;/cfif&gt;<br>    &lt;/cfloop&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712765">28</a> by Cassi Bassolino
		posted on 12/4/2013 at 12:09 AM
		</div>
		<div class="comment_text"><p>On second thought, maybe I should include all three blocks of code.  Please advise and thanks in advance.</p><p>&lt;cfif structKeyExists(form, "save")&gt;<br>    &lt;cfloop item="field" collection="#form#"&gt;<br>        &lt;cfif findNoCase("members_", field)&gt;<br>            &lt;cfset id = listLast(field, "_")&gt;<br>            &lt;cfquery datasource="#datasource#"&gt;<br>            update    members<br>            set       tee = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[field]#"&gt;<br>            where     id = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#id#"&gt;<br>            &lt;/cfquery&gt;<br>        &lt;/cfif&gt;<br>    &lt;/cfloop&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfquery name="gettees" datasource="#datasource#"&gt;<br>   SELECT id,tee<br>   FROM members <br>   WHERE tee &lt;&gt; 0<br>&lt;/cfquery&gt;</p><p>&lt;form action="teeassignments1.cfm" method="post"&gt;<br>&lt;cfloop query="gettees"&gt;<br>        &lt;cfoutput&gt;&lt;input type="hidden" name="members_#id#" value="#tee#" /&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;<br>&lt;input type="submit" name="save" value="Clear ALL Tee Assignments" /&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712767">29</a> by Raymond Camden
		posted on 12/4/2013 at 3:12 AM
		</div>
		<div class="comment_text"><p>You didn't say *how* it failed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712772">30</a> by Cassi Bassolino
		posted on 12/4/2013 at 9:11 AM
		</div>
		<div class="comment_text"><p>Oh, well, no errors were displayed - the page just refreshed on submission but with no change to the database.   webpage source shows the records displaying properly prior to submission.  Anything else I can tell you that might help?  thanks so much - really appreciate the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712770">31</a> by Raymond Camden
		posted on 12/4/2013 at 4:11 PM
		</div>
		<div class="comment_text"><p>I'd begin by debugging the clause on top. For example, after this:</p><p>&lt;cfif findNoCase("members", field)&gt;</p><p>add:</p><p>Yes, running for #field#&lt;br/&gt;</p><p>And confirm it is being displayed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712771">32</a> by Cassi Bassolino
		posted on 12/5/2013 at 7:55 AM
		</div>
		<div class="comment_text"><p>got this: Variable FIELD is undefined. So I changed all instances of "field" to "tee" and got the same error.</p><p>This is what I have now:<br>&lt;cfif structKeyExists(form, "save")&gt;<br>    &lt;cfloop item="tee" collection="#form#"&gt;<br>        &lt;cfif findNoCase("members_", tee)&gt;<br>            &lt;cfset id = listLast(tee, "_")&gt;<br>            &lt;cfquery datasource="#datasource#"&gt;<br>            update    members<br>            set       tee = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[tee]#"&gt;<br>            where     id = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#id#"&gt;<br>            &lt;/cfquery&gt;<br>        &lt;/cfif&gt;<br>    &lt;/cfloop&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712769">33</a> by Raymond Camden
		posted on 12/5/2013 at 8:39 AM
		</div>
		<div class="comment_text"><p>Where is the error being thrown? What line exactly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712774">34</a> by Cassi Bassolino
		posted on 12/6/2013 at 8:12 AM
		</div>
		<div class="comment_text"><p>Yes, running for [error]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712775">35</a> by Cassi Bassolino
		posted on 12/6/2013 at 8:21 AM
		</div>
		<div class="comment_text"><p>here's my code at that point of the error: <br>Yes, running for &lt;cfoutput&gt;#field#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712778">36</a> by Cassi Bassolino
		posted on 12/6/2013 at 8:33 AM
		</div>
		<div class="comment_text"><p>It just occurred to me that I have another form running on this page. If I name this one clear_tees can that be used to differentiate from the other form?</p><p>&lt;form name="clear_tees" action="teeassignments1.cfm" method="post"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712776">37</a> by Raymond Camden
		posted on 12/6/2013 at 6:21 PM
		</div>
		<div class="comment_text"><p>field won't work anymore because you changed the cfloop. Do you know what this code does?</p><p>&lt;cfloop item="tee" collection="#form#"&gt;</p><p>It says - for every key in Form, assign it to the variable tee and loop.</p><p>So when you changed my code from item="field" to item="tee", it means "field" as a variable no longer exists. My debug code should be changed to output tee.</p><p>To your final comment, the name of the form has nothing to do with how CF processes stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712773">38</a> by Cassi Bassolino
		posted on 12/9/2013 at 7:29 AM
		</div>
		<div class="comment_text"><p>I changed back to exactly what I had in my post above on 12-03-2013 at 1:09 PM and I still get the error "Variable FIELD is undefined" at the debug code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712779">39</a> by Cassi Bassolino
		posted on 12/9/2013 at 7:34 AM
		</div>
		<div class="comment_text"><p>Wait - that was my mistake.  Now the debug codes gives me this:<br>Yes, running for FIELDNAMES<br>and the database does not update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712777">40</a> by Cassi Bassolino
		posted on 12/9/2013 at 7:39 AM
		</div>
		<div class="comment_text"><p>I submitted the form again and got this:<br>MEMBERS_119 - each time I submit it alternates between "fieldnames" and Members_(some id).  Please advise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712780">41</a> by Cassi Bassolino
		posted on 12/9/2013 at 7:44 AM
		</div>
		<div class="comment_text"><p>Wait, I'm sorry - it's alternating between the records that are looped in the form - the 2 records that still have not cleared.  Here's the html source - but the records do not return the value to "0" which is what I need.</p><p>&lt;form name="cleartees" action="teeassignments1.cfm" method="post"&gt;</p><p>        &lt;input type="hidden" name="members_117" value="1" /&gt;</p><p>        &lt;input type="hidden" name="members_119" value="1a" /&gt;</p><p>&lt;input type="submit" name="save" value="Clear ALL Tee Assignments" /&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712781">42</a> by Cassi Bassolino
		posted on 12/9/2013 at 7:50 AM
		</div>
		<div class="comment_text"><p>Wait (again) - I figured it out.  sheesh.  thanks for hanging in there with me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712785">43</a> by Raymond Camden
		posted on 12/10/2013 at 2:03 AM
		</div>
		<div class="comment_text"><p>Glad you got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2157677851">
	<div>
		<img src="https://disqus.com/api/users/avatars/john_spellman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2157677851">44</a> by john spellman
		posted on 7/26/2015 at 2:00 PM
		</div>
		<div class="comment_text"><p>Thanks for the information and sample. One more questiion if you dont mind. What about multiple fields in same table row?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2159255142">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2159255142">45</a> (In reply to <a href="#c_2157677851">#44</a>) by Raymond Camden
		posted on 7/27/2015 at 1:35 PM
		</div>
		<div class="comment_text"><p>That's possible too. You would just add the additional fields and update the code. Give it a shot first, and if you have trouble, share the code (via a Gist) along with any error you got.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2433589950">
	<div>
		<img src="https://disqus.com/api/users/avatars/dangregorio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2433589950">46</a> (In reply to <a href="#c_1713712747">#14</a>) by Dan Gregorio
		posted on 12/31/2015 at 1:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray I seem to have an issue when updating 100 or over form fields. I get a 500 error. Works fine if less than 100 fields. I read a blog that said ColdFusion added a hot fix pin cf9 and above to accept up to 100 fields only. This is stored in the cal files in the library. Is there any solution without touching the xml file since i do not have access</p><p>Dsn</p></div>
	</div>
</div>
		
<div class="comment" id="c_2433695574">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2433695574">47</a> (In reply to <a href="#c_2433589950">#46</a>) by Raymond Camden
		posted on 12/31/2015 at 3:23 PM
		</div>
		<div class="comment_text"><p>Not as far as I know. If you don't have access to disable that setting than you need to change hosts to one that will modify it for you or let you do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2433773869">
	<div>
		<img src="https://disqus.com/api/users/avatars/dangregorio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2433773869">48</a> (In reply to <a href="#c_2433695574">#47</a>) by Dan Gregorio
		posted on 12/31/2015 at 4:25 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. Too bad they took away this ability. Do you think using cfgrid would have the same issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2433780895">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2433780895">49</a> (In reply to <a href="#c_2433773869">#48</a>) by Raymond Camden
		posted on 12/31/2015 at 4:30 PM
		</div>
		<div class="comment_text"><p>Well technically, I think it is assumed that most folks are using CF where they have access to the Admin. I think folks on hosts are becoming more and more rare. But thats just my 2 cents. ;)</p><p>I would avoid CFGRID like the plague. I've explained why in the past but let me know if you need a link. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3880655405">
	<div>
		<img src="https://disqus.com/api/users/avatars/jonathanikechukwu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3880655405">50</a> by Jonathan Ikechukwu
		posted on 5/1/2018 at 11:27 AM
		</div>
		<div class="comment_text"><p>Thanks really helped me solved a complex task.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3880770823">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3880770823">51</a> (In reply to <a href="#c_3880655405">#50</a>) by Raymond Camden
		posted on 5/1/2018 at 1:25 PM
		</div>
		<div class="comment_text"><p>I'm glad this old post helped. I'm going to fix the formatting right now.</p></div>
	</div>
</div>
		