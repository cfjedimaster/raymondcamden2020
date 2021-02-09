
<div class="comment" id="c_1713682553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682553">1</a> by Steve Walker
		posted on 7/2/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>I have found that the mask doesn't work very well except in the Flash forms and even then it is tricky.  I set the value of the date input DateFormat(Now(),"mm/dd/yyyy") and it works beautifully.  My CFC knows it is a date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682554">2</a> by Andy Sandefer
		posted on 7/2/2008 at 8:36 PM
		</div>
		<div class="comment_text"><p>Be careful if you're doing and insert and the datefield on the form is optional.  Handling of this can vary from one RDBMS to another.  With a CF/MySQL setup you can handle this by checking the submitted form's datefield value and then controlling what to send to your SQL statement.</p><p>An example would be...</p><p>&lt;cfif (FORM.myDateField NEQ "")&gt;<br>  &lt;cfset datefieldVariable = DateFormat(FORM.myDateField,"MM/DD/YYYY")&gt;<br>&lt;cfelse&gt;<br>  &lt;cfset datefieldVariable = "null"&gt;<br>&lt;/cfif&gt;</p><p>Then in your SQL statement just insert the value of datefieldVariable.  I can't remember if I had to do anything like this in SQL Server - I probably didn't and was just able to pass the blank string from the form.</p><p>Andy Sandefer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682555">3</a> by Raymond Camden
		posted on 7/2/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>I'd probably do that all in the cfqueryparam:</p><p>&lt;cfif form.mydatefield neq ""&gt;<br>&lt;cfqueryparam cfsqltype="cf_sql_date" value="#dateformat(etc)#"&gt;<br>&lt;cfelse&gt;<br>&lt;cfqueryparam cfsqltype="cf_sql_date" null="true"&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682562">4</a> by Andy Sandefer
		posted on 7/2/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>My bad, I should've just told you to use</p><p>&lt;cfif&gt;<br>  &lt;cfset datefieldVariable = CreateODBCDate(FORM.myDateField)&gt;<br>&lt;cfelse&gt;<br>  &lt;cfset datefieldVariable = "null"&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682561">5</a> by Andy Sandefer
		posted on 7/2/2008 at 8:41 PM
		</div>
		<div class="comment_text"><p>Yeah - he's right - just use the queryparam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682559">6</a> by Neil Grimes
		posted on 10/14/2009 at 12:30 PM
		</div>
		<div class="comment_text"><p>best way to get around this is to use something like CONVERT(nvarchar(10), MP.master_page_expire_date, 3) in your db query to only pull out the bits of the date you need. My problem was the db : when I queried it the date was being returned in this format 10/12/2009 12:00:00:000</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682560">7</a> by Jessica
		posted on 2/24/2010 at 11:38 PM
		</div>
		<div class="comment_text"><p>I'm not certain that this is the same problem, however, when the cfinput/datefield value is passed (thru a CFAJAXPROXY call) to a JavaScript function, the creation of a new date object fails. The cfinput datefield is masked as DD-MMM-YYYY so it's sending the month text equivalent to the script. Is the best way to use JavaScript date functions to rewrite the string value back into a numeric format? Is there an easier way to manage this using built-in CF functionality? Thanks...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682563">8</a> by Raymond Camden
		posted on 2/27/2010 at 7:17 AM
		</div>
		<div class="comment_text"><p>Not sure - do you have an example set up I could run locally?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682566">9</a> by Richard
		posted on 3/14/2010 at 3:59 AM
		</div>
		<div class="comment_text"><p>Hi Ray, we have been using date mask in form on CF7 like:<br>&lt;cfinput type="text" name="test" validate="eurodate" mask="99/99/9999" .../&gt;<br>Then we upgraded to CF9, and the mask stopped working! I have tried a few things but cannot see why it should not and could not see anything from the adobe site or anywhere else...do you have any clues?</p><p>Many thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682564">10</a> by Raymond Camden
		posted on 3/15/2010 at 3:39 PM
		</div>
		<div class="comment_text"><p>This worked for me, CF9:</p><p>&lt;cfform name="foo"&gt;<br>&lt;cfinput type="text" name="test" validate="eurodate" mask="99/99/9999" validateat="onblur" /&gt;<br>&lt;input type="submit"&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682565">11</a> by Richard
		posted on 3/16/2010 at 2:58 AM
		</div>
		<div class="comment_text"><p>not luck...must something in our app/server<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682567">12</a> by Gov
		posted on 5/19/2010 at 7:58 PM
		</div>
		<div class="comment_text"><p>Thanks, just ran into this issue '... is an invalid date or time string' using a cfinput type 'datefield'.</p></div>
	</div>
</div>
		