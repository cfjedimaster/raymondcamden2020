
<div class="comment" id="c_1713708912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708912">1</a> by Andy Sandefer
		posted on 10/2/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>You could also try experimenting with onMouseUp but I've never had to do this before so I'm not sure if any of the standard events will help you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708916">2</a> by David
		posted on 8/1/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am having a problem with the CF datepicker and FF 3.5.1.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.neale.ca%2Ftest.cfm%3AAraipmvPm3aRAi9DIN2klsVMsyI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.neale.ca/test.cfm">http://www.neale.ca/test.cfm</a></p><p>The datepicker will popup in IE but nothing happens in FF?</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708913">3</a> by David
		posted on 8/1/2009 at 3:40 AM
		</div>
		<div class="comment_text"><p>Ray this has been fixed. The cfform tags must reside outside the table tags for FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708917">4</a> by Scott Dyer
		posted on 12/2/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>Thank you for the cfform outside of the table tags tip.  I have spent 3 days with this problem and I could not figure out why it was not working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708918">5</a> by FALCONSEYE
		posted on 2/10/2010 at 9:11 PM
		</div>
		<div class="comment_text"><p>While searching the intrAWeb for a solution to utilize jquery validation plug-in with cfinput datefield and found this entry.</p><p>This is what I have:</p><p>&lt;script&gt; <br>...<br>isValid = function() {<br>	$("#popUpForm").validate({<br>				rules: { header: "required",<br>						 startDate: { required: true, date : true } ,<br>						 endDate: { required: true, date : true } <br>						},<br>				messages: { header: "&lt;br/&gt; &lt;span style='color:red;'&gt;Header is required!&lt;/span&gt;",<br>							startDate: "&lt;br/&gt; &lt;span style='color:red;'&gt;Start Date is required (MM/DD/YYYY)!&lt;/span&gt;",<br>							endDate: "&lt;br/&gt; &lt;span style='color:red;'&gt;End Date is required (MM/DD/YYYY)!&lt;/span&gt;"<br>						},<br>				errorPlacement: function(error, element) {<br>     				if (element.attr("name") == "startDate") {<br>      					error.appendTo("#err-startDate"); <br>					} else if (element.attr("name") == "endDate")	{<br>						error.appendTo("#err-endDate");<br>					} else {<br>       					error.insertAfter(element); <br>					}<br>    			 }						<br>		}).form();<br>		if ($("#popUpForm").valid()) { <br>			return true;<br>		} else {<br>			return false;<br>		}<br>	}</p><p>I run isValid() method when the user clicks on the form's submit button. Say, user didn't enter a date or entered something that is an invalid date format. The validation displays the error message. If the user hits the little datefield clicky, picks a date, the date field is populated with a correct date (format) and therefore the error message should go away. Well, it didn't go away.  As you mentioned, the clicky does not trigger the onChange() event.  So, this is how i get it to work. If you view the page source, you will see that ColdFusion created an image (startDatepopUpForm_cf_button) for the clicky. So, I addded this:</p><p>$("#startDatepopUpForm_cf_button").click(function() {<br>		$("#err-startDate").html('');					<br>	});</p><p>Of course, if the user closes the pop-up without picking up a date, then the next click to save button is going to catch the error.</p><p>I think the clicky functions are handled by /CFIDE/scripts/ajax/ext/build/util/Date-min.js. I guess the ultimate solution will be to put an onChange function somewhere here.</p><p>Hope this helps to others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708919">6</a> by Nick
		posted on 8/29/2013 at 4:12 AM
		</div>
		<div class="comment_text"><p>BEAUTIFUL!  Thanks a ton.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708924">7</a> by dwayne anderson
		posted on 4/12/2014 at 4:17 AM
		</div>
		<div class="comment_text"><p>I have a cf div bound to a CF datefield with native date picker. When I press the icon, the cfdiv reloads, AND when I select the date, the cfdiv reloads.</p><p>The problem is there is a lot of data loading in the cfdiv.</p><p>Seems like the same type of problem...hoping someone knows of a better solution as I can't imagine writing JS to replace my bound cfdiv.</p><p>&lt;cfinput class="form-control cfdatefield" readonly="yes" type="#ftype#"	id="dpStart" name="dpStart" value="#cookie.dpStart#"&gt;&lt;cfinput class="form-control cfdatefield" readonly="yes" type="#ftype#" id="dpEnd" name="dpEnd" value="#cookie.dpEnd#"&gt;</p><p>&lt;cfdiv bind="url:jobs_table.cfm?user=#getAuthUser()#&amp;dpStart={dpStart.value}&amp;dpEnd={dpEnd.value}&amp;search=#<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>#" ID="theDiv" &gt;&lt;/cfdiv&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708923">8</a> by Raymond Camden
		posted on 4/12/2014 at 7:47 PM
		</div>
		<div class="comment_text"><p>The UI control CF is using must be sending a change event even when you just click the control. Nothing you can do that about that as far as I know. I recommend *not* using cfdiv and cfinput nowadays - and yes - that means writing JavaScript.</p></div>
	</div>
</div>
		