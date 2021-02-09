
<div class="comment" id="c_1713713836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713836">1</a> by Todd Rafferty
		posted on 3/20/2009 at 4:21 PM
		</div>
		<div class="comment_text"><p>Ray, have you looked into the awesomesause that is jQuery form plug-in? ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.malsup.com%2Fjquery%2Fform%2F%3AiE_zDlgFuEawC51bGaoQHYW2TyU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.malsup.com/jquery/form/">http://www.malsup.com/jquer...</a> )</p><p>~Todd</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713835">2</a> by Andy Sandefer
		posted on 3/20/2009 at 5:02 PM
		</div>
		<div class="comment_text"><p>@Ray<br>You kind of touched on it a bit in your post but I'm still confused as to what seasoned jQuery developers are using in comparison to CF's setErrorHandler and setCallbackHandler functions.  I totally see where you're building the callback into the one line submitter but how would this work if we were doing something more advanced than a form submit. For instance, calling a function that lives in a cfc to check for the existence of a conflicting primary key before we decided to even do the form submit.<br>Thanks for posting this, I may soon step outside of my comfort zone with CF's Ajax set and learn jQuery.  I haven't been convinced yet and the jQuery team may have to call me and sing "If you don't know me by now" before I'll climb aboard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713838">3</a> by Raymond Camden
		posted on 3/20/2009 at 5:26 PM
		</div>
		<div class="comment_text"><p>@Todd: Nope. I can put it on my list though. In general I'm trying to avoid plugins for these blog entries. I kinda feel like the plugins can be a bit overwhelming to new jQuery users. Having multiple ways to do X is good. Having 500 ways to do X is overwhelming at times. :)</p><p>@Andy: So as I said, you can't really handle the error with .post. You _always_ get success back. You could return data that means something. By that I mean, instead of just a string like I did, I could have returned 0, which would mean 'bad', or 1, which would mean 'good'.  Using the ajax() method gives you more fine grained control.</p><p>I'm still learning this stuff myself, so please keep that in mind. I'm not the expert here. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713850">4</a> by Todd Rafferty
		posted on 3/20/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>@Ray: I agree with you, but there's a handful of plugins I can't live without:</p><p>* form ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.malsup.com%2Fjquery%2Fform%2F%3AiE_zDlgFuEawC51bGaoQHYW2TyU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.malsup.com/jquery/form/">http://www.malsup.com/jquer...</a> )<br>* metadata ( <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Fproject%2Fmetadata%3AGW7PEaynwq8pbSP7ERJRRkC2Psc&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/project/metadata">http://plugins.jquery.com/p...</a> )<br>* validate (you discussed previously - <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FValidation%29%3Ap30Qvd7B5QGwVTvoC6jZpe7NWqY&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Validation)">http://docs.jquery.com/Plug...</a><br>* uiblock ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.malsup.com%2Fjquery%2Fblock%2F%3AU59rfdGNldvwRYdHRrHrLndr7kE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.malsup.com/jquery/block/">http://www.malsup.com/jquer...</a> )</p><p>That's about it. None of my project begin without me copying these base plug-ins and putting them in place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713852">5</a> by Matt Williams
		posted on 3/20/2009 at 8:13 PM
		</div>
		<div class="comment_text"><p>Regarding error handling... for client side errors you can catch those before the $.post is even called. For server side errors, like Ray said, you can return anything. Like Ray mentioned, you could return "Successful update" and then show the values. Or you could return "Update failed" and an error message.</p><p>You could also return a json object that has a success flag (0/1 or T/F), a message string, and the form values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713851">6</a> by Sean Ford
		posted on 3/22/2009 at 2:32 AM
		</div>
		<div class="comment_text"><p>I have a question that is somewhat related to this post.  I've been using a combination of JQuery and Coldfusion 8 for a while now and find them both indespensible.  For ease of use, I've got a form that I am submitting via AJAX through CF8.<br>I am using CFAJAXPROXY to bind to a CFC like this:</p><p>&lt;cfajaxproxy cfc="aqs3.contacts" jsclassname="CM"&gt;</p><p>Now, what I would like to do is access different methods of this CFC with information from several forms on the page.  I know I can use the XXX.SetForm("formname") syntax to bind ALL of the values on the form to the method using named attributes.  But what if I only wanted to call a method with a few of the form values?  I can use JQuery (or simple JS) to get the values I need, but I can;t find a way to pass them as named attributes.</p><p>Since the SetForm command seems to figure out a way to do this, it must be possible, but for the life of me I can;t figure out how.</p><p>Any ideas?</p><p>--Sean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713853">7</a> by Eric Lee
		posted on 3/22/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>That's a lot of code to do that. But it is what it is.  I've been using jquery a lot myself lately.</p><p>For my web forms I've been using these guys:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.formmailhosting.com%3AjiipVVNYdC1b-deU5zdN189B8jo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.formmailhosting.com">http://www.formmailhosting.com</a></p><p>They do the form to email processing for me, but I like the example you came up with.</p><p>ERIC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713854">8</a> by Raymond Camden
		posted on 3/22/2009 at 10:53 PM
		</div>
		<div class="comment_text"><p>Eric - you really think that's a lot of code? Looks pretty slim to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713865">9</a> by Travis
		posted on 3/23/2009 at 7:52 AM
		</div>
		<div class="comment_text"><p>Ray, love the blog, nice example here again.  I'm trying to upload a file using this technique.  I have the below inputs in my form, and when I read the data like you showed using CF, I'm able to get the title field slick as can be, however, the uploadfile field is undefined when trying to retrieve it.</p><p>&lt;input type="text" name="title"&gt;<br>&lt;input type="file" name="uploadfile"&gt;</p><p>Any advice?  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713863">10</a> by Raymond Camden
		posted on 3/23/2009 at 5:23 PM
		</div>
		<div class="comment_text"><p>@Sean: If you want to use some form fields but not all, you would need to do it manually, or bind using specific form fields:  {field1},{field2},{etc}. You really have to either take it all or do it manually one by one (which makes sense if you think about it).</p><p>@Travis: You can't do file uploads via Ajax. Period. You can only do it with iframe type hacks (which, for all intents and purposes ends up looking like normal Ajax). Please search my blog as I did an entry on this a few months ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713864">11</a> by Adam
		posted on 8/12/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>I would like to add error checking to a form that I've created using this method.  I have placed the error checking on the page that holds the form code (index.cfm) and have the form results post to another page (consultationPost.cfm).  However, no matter where I place the form validation code, it isn't processed and the form results simply post without being validated.</p><p>Do I need to use jquery validation in this instance or am I just doing something wrong.</p><p>Thanks for any help,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713860">12</a> by Shaun McCran
		posted on 8/13/2009 at 1:07 PM
		</div>
		<div class="comment_text"><p>This is a great post, I've been dipping my toe into this area much more recently, but I was missing the odd point here and there, and you've filled the gaps in for me. Hopefully one day the JQuery will 'roll off the tongue' like the CF does. until then I'll probably be stealing all your blogs on it :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713861">13</a> by Raymond Camden
		posted on 8/15/2009 at 3:41 PM
		</div>
		<div class="comment_text"><p>@Adam: This sounds like an error is occurring. Have you looked at Firefox's Error window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713859">14</a> by Adam
		posted on 8/25/2009 at 8:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>I've removed all error checking and have two forms.  One is similar to your test2.html:</p><p>	&lt;cfoutput&gt;</p><p>		&lt;cfform id="consultationForm"&gt;<br>			&lt;div id="consultations"&gt;<br>						 &lt;!--- Our form submission flag. ---&gt;<br>			 &lt;input type="hidden" name="submitted" value="1" /&gt;</p><p>				&lt;fieldset&gt;<br>					&lt;legend&gt;Consultations&lt;/legend&gt;				<br>						&lt;label for="client name"&gt;Client Username<br>							&lt;cfinput id="clientID" <br>									name="clientID" <br>									type="text" <br>									value="" <br>									maxlength="8" <br>									&lt;!---<br>									onClick="<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('userWin')" <br>									bind="{clientLookup.client}"---&gt;<br>									/&gt;</p><p>						&lt;/label&gt;<br>						&lt;label for="consultation date"&gt;Consultation Date<br>							&lt;input name="consultationDate" type="text" id="datepicker" /&gt;<br>						&lt;/label&gt;<br>						&lt;label for="consultation type"&gt;Consultation Type&lt;br /&gt;<br>							&lt;select name="consultationType"&gt;<br>								&lt;option value=""&gt;&amp;ndash; select &amp;ndash;&lt;/option&gt;<br>								&lt;option value="phone"&gt;Phone&lt;/option&gt;<br>								&lt;option value="email"&gt;Email&lt;/option&gt;<br>								&lt;option value="faceToFace"&gt;Face To Face&lt;/option&gt;<br>								&lt;option value="online"&gt;Online&lt;/option&gt;<br>							&lt;/select&gt;<br>						&lt;/label&gt;</p><p>						&lt;div class="clearer"&gt;&lt;/div&gt;</p><p>						&lt;label for="Instructional Technology"&gt;Instructional Technology<br>							&lt;select id="instructionalTechnology" name="instructionalTechnology"&gt;<br>								&lt;option value=""&gt;&amp;ndash; select &amp;ndash;&lt;/option&gt;<br>								&lt;option value="Oncourse"&gt;Oncourse&lt;/option&gt;<br>								&lt;option value="Eportfolio"&gt;Eportfolio&lt;/option&gt;<br>								&lt;option value="Web conferencing"&gt;Web conferencing&lt;/option&gt;<br>								&lt;option value="Podcasting"&gt;Podcasting&lt;/option&gt;<br>								&lt;option value="Video"&gt;Video&lt;/option&gt;<br>								&lt;option value="Audio"&gt;Audio&lt;/option&gt;<br>								&lt;option value="Turnitin"&gt;Turnitin&lt;/option&gt;<br>								&lt;option value="Learning Objects"&gt;Learning Objects&lt;/option&gt;<br>								&lt;option value="Web Development"&gt;Web Development&lt;/option&gt;<br>								&lt;option value="Student Response Systems"&gt;Student Response Systems&lt;/option&gt;<br>								&lt;option value="Collaborative web technology"&gt;Collaborative web technology&lt;/option&gt;<br>								&lt;option value="Technology (other)"&gt;Technology (other)&lt;/option&gt;<br>							&lt;/select&gt;<br>						&lt;/label&gt;<br>						&lt;label for="Instructional Design"&gt;Instructional Design<br>							&lt;select id="instructionalDesign" name="instructionalDesign"&gt;<br>								&lt;option value=""&gt;&amp;ndash; select &amp;ndash;&lt;/option&gt;<br>								&lt;option value="Classroom Observations"&gt;Classroom Observations&lt;/option&gt;<br>								&lt;option value="SGID"&gt;SGID&lt;/option&gt;<br>								&lt;option value="Course Design"&gt;Course Design&lt;/option&gt;<br>								&lt;option value="Syllabi"&gt;Syllabi&lt;/option&gt;<br>								&lt;option value="Teaching Portfolio Development"&gt;Teaching Portfolio Development&lt;/option&gt;<br>								&lt;option value="Assessment of Student Learning"&gt;Assessment of Student Learning&lt;/option&gt; <br>								&lt;option value="SoTL "&gt;SoTL&lt;/option&gt;<br>								&lt;option value="Classroom Management Issues"&gt;Classroom Management Issues&lt;/option&gt;<br>								&lt;option value="Academic Integrity"&gt;Academic Integrity&lt;/option&gt;<br>								&lt;option value="Inclusive Teaching"&gt;Inclusive Teaching&lt;/option&gt;<br>							&lt;/select&gt;<br>						&lt;/label&gt;<br>						&lt;div class="clearer"&gt;&lt;/div&gt;</p><p>						&lt;label for="tags"&gt;Tags<br>							&lt;input id="tag1" name="tag1" type="text" maxlength="50" value="" tabindex="8"/&gt;<br>							&lt;br /&gt;<br>							&lt;input id="tag2" name="tag2" type="text" maxlength="50" value="" tabindex="8"/&gt;<br>							&lt;br /&gt;<br>							&lt;input id="tag3" name="tag3" type="text" maxlength="50" value="" tabindex="8"/&gt;<br>							&lt;br /&gt;<br>							&lt;input id="tag4" name="tag4" type="text" maxlength="50" value="" tabindex="8"/&gt;<br>						&lt;/label&gt;<br>						&lt;label for="internal notes"&gt;Internal Notes&lt;br /&gt;<br>							&lt;textarea name="internalNotes" cols="20" rows="10" tabindex="7"&gt;&lt;/textarea&gt;<br>						&lt;/label&gt;	<br>						&lt;label for="notes to client"&gt;Notes to Client&lt;br /&gt;<br>								&lt;textarea name="clientNotes" cols="20" rows="10" tabindex="9"&gt;&lt;/textarea&gt;<br>						&lt;/label&gt;<br>						&lt;input type="hidden" value="#Now()#" /&gt;<br>				   &lt;input  class="submit"type="submit" value="Submit" /&gt; &lt;input class="reset" type="reset" value="Reset"&gt;<br>				   &lt;div id="clearer"&gt;&lt;/div&gt;<br>				&lt;div id="result"&gt;&lt;/div&gt;					<br>				&lt;/fieldset&gt;<br>			&lt;/div&gt;<br>		&lt;/cfform&gt;</p><p>My post.cfm is consultationPost.cfm and currently includes:</p><p>&lt;cfoutput&gt;</p><p> 		&lt;cfquery name="qAddConsultation" datasource="myDSN"&gt;</p><p>			INSERT INTO TEMPconsultations (submitDate,<br>									transID,<br>									weekOfYear,<br>									username,<br>									clientID,<br>									consultationDate,<br>									consultationType)</p><p>			VALUES ('#DateFormat(now(), "mm/dd/yyyy")#',<br>						'#transID#',<br>						'#theWeek#',<br>						'#trim(session.username)#', <br>						'#trim(clientID)#', <br>						'#trim(consultationDate)#', <br>						'#trim(consultationType)#')</p><p>		&lt;/cfquery&gt;</p><p>	&lt;strong&gt;Client&lt;/strong&gt;:  #form.clientID#&lt;br /&gt;<br>	&lt;strong&gt;Consultation Date&lt;/strong&gt;:  #form.consultationDate#&lt;br /&gt;<br>	&lt;strong&gt;Consultation Type&lt;/strong&gt;:  #form.consultationType#&lt;br /&gt;</p><p>	&lt;strong&gt;Instructional Technology&lt;/strong&gt;:  #form.instructionalTechnology#&lt;br /&gt;<br>	&lt;strong&gt;Instructional Design&lt;/strong&gt;:  #form.instructionalDesign#&lt;br /&gt;<br>	&lt;strong&gt;Tags&lt;/strong&gt;:  #form.tag1#,  #form.tag2#,  #form.tag3#,  #form.tag4#&lt;br /&gt;<br>	&lt;strong&gt;Internal Notes&lt;/strong&gt;:  #form.internalNotes#&lt;br /&gt;<br>	&lt;strong&gt;Notes to Client&lt;/strong&gt;:  #form.clientNotes#<br>&lt;/cfoutput&gt;</p><p>All works well until I include the query to write to the database.</p><p>I did not see an error window in Firefox and I'm not too familiar with the feature.  This conversation tells me I need to.</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713858">15</a> by Raymond Camden
		posted on 8/26/2009 at 6:33 PM
		</div>
		<div class="comment_text"><p>You should stop using cfform if you wish to use jQuery validation. cfform has it's own validation libraries and routines and they can interfere with custom code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713862">16</a> by Jose
		posted on 10/15/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>awesome! thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713868">17</a> by Bret
		posted on 12/4/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>Once again, you helped me find out what I was doing wrong.  Appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713869">18</a> by wen
		posted on 8/10/2010 at 11:02 PM
		</div>
		<div class="comment_text"><p>Hi, I am testing this code in IE7, but it seems like not working...Can you test to see if it works in your IE? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713953">19</a> by Raymond Camden
		posted on 8/10/2010 at 11:04 PM
		</div>
		<div class="comment_text"><p>I don't have IE7 myself. How does it appear to not be working? If you use a network monitoring tool like Charles do you see the post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713977">20</a> by wen
		posted on 8/10/2010 at 11:33 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, it works right now...i guess it's old CF version cause problem...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713965">21</a> by Mike Collins
		posted on 3/30/2011 at 5:25 PM
		</div>
		<div class="comment_text"><p>My forms post back to themselves and handle updates and deletes based on the button clicked.  I was also finding that the serialize method was not sending my submit input values.  So I added a few lines to the sample above and now it sends a formaction value based on the submit button.</p><p>&lt;script src="/jquery/jquery-1.4.4.min.js"&gt;&lt;/script&gt;<br>&lt;form id="testForm"&gt;<br>	&lt;input type="hidden" name="formaction"  id="formaction" value="noaction"&gt;<br>	Name: &lt;input type="text" name="name"&gt;&lt;br/&gt;<br>	Email: &lt;input type="text" name="email"&gt;&lt;br/&gt;<br>	Gender: <br>	&lt;select name="gender"&gt;<br>	&lt;option value="M"&gt;Male&lt;/option&gt;	<br>	&lt;option value="F"&gt;Female&lt;/option&gt;<br>	&lt;/select&gt;&lt;br/&gt; 	<br>	&lt;input type="submit" value="Save"  onClick="document.getElementById('formaction').value = 'saverecord';" /&gt;<br>    &lt;input type="submit" value="Delete"  onClick="document.getElementById('formaction').value = 'deleterecord';" /&gt;<br>&lt;/form&gt;</p><p>&lt;script&gt;<br>$(document).ready(function() {<br>	$("#testForm").submit(sendForm)<br>});</p><p>function sendForm() {<br>	$.post('testform.cfm',$("#testForm").serialize(),function(data,status){<br>		$("#result").html(data)<br>	});<br>	return false<br>}</p><p>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713963">22</a> by Raymond Camden
		posted on 3/30/2011 at 6:35 PM
		</div>
		<div class="comment_text"><p>I'd use event handlers for your buttons instead of onClick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713959">23</a> by Ron Goldberg
		posted on 7/1/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>This feature is excellent...thank you. It doesn't seem to display the results with I.E. but fully functional in FF. Any idea why? Am I missing something? The post.cfm page is processing the data as I can send an e-mail; only the result text is missing from I.E.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713960">24</a> by Raymond Camden
		posted on 7/1/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>Works for me in IE9. Are you an older one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713976">25</a> by Ron Goldberg
		posted on 7/1/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>I’m using IE8 and cross scripting with the latest FF.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713972">26</a> by Raymond Camden
		posted on 7/1/2011 at 9:42 PM
		</div>
		<div class="comment_text"><p>Um well. Not sure. Sometimes IE is picky when you don't specify a content type, but in our case, we aren't sending JSON or XML back. So - not sure what to tell you. Upgrade to IE9. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713958">27</a> by Andy Idema
		posted on 4/11/2013 at 8:52 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this Ray.  Problem for me... My html form is posting automatically so I am not able to fill out the form or click submit.  I'm using Chrome Version 26.0.1410.63.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713966">28</a> by Raymond Camden
		posted on 4/11/2013 at 9:24 PM
		</div>
		<div class="comment_text"><p>If the form is posting, it means it the form handler is not firing or throwing an error. Check in the console to see if an error its there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713962">29</a> by Conan Green
		posted on 4/17/2013 at 9:19 PM
		</div>
		<div class="comment_text"><p>I wanted to find an alternative to using iframes for displaying coldfusion forms on our pages and this was extremely useful!</p><p>No more iframes!  yay!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713956">30</a> by Andy Idema
		posted on 5/2/2013 at 12:04 AM
		</div>
		<div class="comment_text"><p>When I put the full URL path in the post section it returns the webpage inside the result div instead of the code from the post.cfm page. When I leave out the full path it works fine.</p><p>$.post('http://www.mysite/post.cfm', - does not work</p><p>$.post('post.cfm', - works</p><p>Why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713961">31</a> by Raymond Camden
		posted on 5/2/2013 at 1:46 AM
		</div>
		<div class="comment_text"><p>Is your site on <a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%3F%3AFeJRpsaAh0vpb8gcnyAcDYAZIGc&amp;cuid=3321886" rel="nofollow noopener" title="mysite.com?">mysite.com?</a> If not, it's the browser security blocking you. You have to be on the same site, subdomain, port, and protocol.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713971">32</a> by Andy Idema
		posted on 5/2/2013 at 4:17 AM
		</div>
		<div class="comment_text"><p>@Ray - I used <a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%3A2-kMGVD3SSL7zZuoKHcPI4DGYRE&amp;cuid=3321886" rel="nofollow noopener" title="mysite.com">mysite.com</a> as an example but the post.cfm file is in the same directory on the same server.  My thought was that I could take this example and apply it to native phone app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713957">33</a> by Raymond Camden
		posted on 5/2/2013 at 4:51 AM
		</div>
		<div class="comment_text"><p>Ok, so what do you see in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713978">34</a> by Andy Idema
		posted on 5/2/2013 at 5:15 AM
		</div>
		<div class="comment_text"><p>I'm sorry... What do you mean by console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713975">35</a> by Raymond Camden
		posted on 5/2/2013 at 5:20 AM
		</div>
		<div class="comment_text"><p>The Chrome Dev Tools console. It is *essential* for diagnosing issues. Start here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F3%2F21%2FNew-online-material-for-Chrome-DevTools%3A_6uyzTNYXhpLzeNf3riiasvSayQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/3/21/New-online-material-for-Chrome-DevTools">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713974">36</a> by Andy Idema
		posted on 5/2/2013 at 4:51 PM
		</div>
		<div class="comment_text"><p>It says nothing.  Just a right carrot.  What happens when I use the full URL path is that it loads the entire webpage into the result div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713969">37</a> by Andy Idema
		posted on 5/2/2013 at 4:59 PM
		</div>
		<div class="comment_text"><p>I need to stop drinking at work.  I was calling the original file in the full path.  Once I called the post.cfm file with the full path it worked exactly as expected.  Sheesh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713964">38</a> by Raymond Camden
		posted on 5/2/2013 at 5:55 PM
		</div>
		<div class="comment_text"><p>Dude, half of my blog posts are based on mistakes. Don't stress. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713973">39</a> by Andy Idema
		posted on 5/4/2013 at 2:11 AM
		</div>
		<div class="comment_text"><p>Hi Ray.  I've got DW CS6 and I want to see if I can deploy this as a Phonegap app.  Also, I'd like to test it on my phone (do I do that with Phonegap?) but am not sure what steps to take.  Can you help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713970">40</a> by Raymond Camden
		posted on 5/4/2013 at 8:34 PM
		</div>
		<div class="comment_text"><p>That's kind of a big question. :) So, I'm going to punt and take an easy way. I'd suggest you watch my video on PhoneGap as it talks about how to do this. It does NOT cover Dreamweaver per se, but it should still be helpful.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F5%2F2%2FRecording-and-Assets-from-my-PhoneGap-Presentation%3AETmKFbcmTuI3Z0A9V1nsh8YGck8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/5/2/Recording-and-Assets-from-my-PhoneGap-Presentation">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713968">41</a> by Andy Idema
		posted on 5/4/2013 at 9:39 PM
		</div>
		<div class="comment_text"><p>Great vid. Very helpful for me thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713967">42</a> by Andy Idema
		posted on 5/15/2013 at 7:09 AM
		</div>
		<div class="comment_text"><p>Hello again Ray.  After watching several of your Phonegap demos and reading several tutes I am getting up to speed quickly on Phonegap build.  Thus far I've waded through the initial config steps (config.xml, the ios key process, splash screens, icons, etc) and have a pretty lame test app up and running.  I tried to take it a step further and added the code from this tute into my index.html to see if I could get it to post to the same file that tested successfully.  When I fill out the form fields on my phone app and click save all that happens is that it clears out the fields.  I have phonegap.js, and jquery 1.9.1 as includes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713979">43</a> by Raymond Camden
		posted on 5/15/2013 at 2:56 PM
		</div>
		<div class="comment_text"><p>If the form fields clear, it typically means your form handling code is broken. You should test your code on the desktop first. The actual POST will fail as it is going to another server, but you can at least see if the form submit handler is running.</p><p>I assume you know how to use the Chrome console to help you debug this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713985">44</a> by Andy Idema
		posted on 5/15/2013 at 4:21 PM
		</div>
		<div class="comment_text"><p>Oh dude yer gonna get it.  I just threw my crumpled up notes at you.  As you suspected I get the XMLHttpRequest cannot load .. Origin null is not allowed by Access-Control-Allow-Origin when I try it locally in Chrome.  I'm going to use the iPhone Config Utility and see if it will tell me anything when I try it on the phone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713989">45</a> by Andy Idema
		posted on 5/15/2013 at 5:49 PM
		</div>
		<div class="comment_text"><p>Ok this is what the iPhone Configuration Utility is telling me...</p><p>May 15 07:45:41 Phone-of-Ides kbd[50] &lt;Warning&gt;: -[TIXPCDataTransport _handleForPurpose:withReplyBlock:] couldn't get data source for purpose=__TIRDTAB<br>May 15 07:45:45 Phone-of-Ides kernel[0] &lt;Debug&gt;: launchd[13840] Builtin profile: PasteBoard (sandbox)<br>May 15 07:45:51 Phone-of-Ides TestApp[13838] &lt;Warning&gt;: Resetting plugins due to page load.<br>May 15 07:45:51 Phone-of-Ides TestApp[13838] &lt;Warning&gt;: ERROR whitelist rejection: url='<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.9.1%2Fjquery.min.js%27%3Acfg_wYmvMAIKOWpG_XZsn18xcf0&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js'">http://ajax.googleapis.com/...</a><br>May 15 07:45:51 Phone-of-Ides TestApp[13838] &lt;Warning&gt;: ERROR whitelist rejection: url='<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.9.1%2Fjquery.min.js%27%3Acfg_wYmvMAIKOWpG_XZsn18xcf0&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js'">http://ajax.googleapis.com/...</a><br>May 15 07:45:51 Phone-of-Ides TestApp[13838] &lt;Warning&gt;: ERROR whitelist rejection: url='<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.9.1%2Fjquery.min.js%27%3Acfg_wYmvMAIKOWpG_XZsn18xcf0&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js'">http://ajax.googleapis.com/...</a><br>May 15 07:45:51 Phone-of-Ides TestApp[13838] &lt;Warning&gt;: Finished load of: file:///var/mobile/Applications/DA9CE3B1-92AC-455B-BBB1-AB942F34F03C/<a href="http://disq.us/url?url=http%3A%2F%2FTestApp.app%2Fwww%2Findex.html%3Fname%3DTest%26email%3DTest%40email.com%26gender%3DM%3AysG59K43YddNwZ1jcdfP4H56_dE&amp;cuid=3321886" rel="nofollow noopener" title="TestApp.app/www/index.html?name=Test&amp;email=Test@email.com&amp;gender=M">TestApp.app/www/index.html?...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713984">46</a> by Raymond Camden
		posted on 5/15/2013 at 5:52 PM
		</div>
		<div class="comment_text"><p>To your first comment, again, thats a good thing. It means, at least, that your form handler is running and trying to call the remote URL.</p><p>Second comment. Ah, whitelist rejection. You need to add your domain to the whitelist.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F2.7.0%2Fguide_whitelist_index.md.html%23Domain%2520Whitelist%2520Guide%3ALz9kqIUxGENHz3lfi5JXG-a4MH8&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/2.7.0/guide_whitelist_index.md.html#Domain%20Whitelist%20Guide">http://docs.phonegap.com/en...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713988">47</a> by Andy Idema
		posted on 5/15/2013 at 6:01 PM
		</div>
		<div class="comment_text"><p>The last line in the Util is promising... "<a href="http://disq.us/url?url=http%3A%2F%2FTestApp.app%2Fwww%2Findex.html%3Fname%3DTest%26email%3DTest%40email.com%26gender%3DM%3AysG59K43YddNwZ1jcdfP4H56_dE&amp;cuid=3321886" rel="nofollow noopener" title="TestApp.app/www/index.html?name=Test&amp;email=Test@email.com&amp;gender=M">TestApp.app/www/index.html?...</a>" but it's just not showing up in the result div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713986">48</a> by Raymond Camden
		posted on 5/15/2013 at 6:03 PM
		</div>
		<div class="comment_text"><p>Did you see my comment about white listing the domain?</p><p>The last line in the log happens because your Ajax portion failed and the form handler than returned to just submitting itself. Hence your app reloaded w/ form data. You can ignore that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713987">49</a> by Andy Idema
		posted on 5/15/2013 at 6:07 PM
		</div>
		<div class="comment_text"><p>Ok I will ignore.  I read through the phonegap doc and then double checked my config.xml... sure enough.  "&lt;access origin="http://127.0.0.1*"/&gt; &lt;!-- allow local pages --&gt;" so I'm going to add the domain of the server it's calling and see what that does.  Thanks for the tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713991">50</a> by Andy Idema
		posted on 5/15/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>Ok that was definitely it.  Working now.  Thanks Ray!  I whitelisted my server and google and just like that... it's working.  I'd like to thank you for this presentation as well: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F5%2F2%2FRecording-and-Assets-from-my-PhoneGap-Presentation%23c2F60D02D-C570-CC63-112274A7B1DAC7AF%3A9dhKk7mI-2C6B9-I87BFv7yGIpU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/5/2/Recording-and-Assets-from-my-PhoneGap-Presentation#c2F60D02D-C570-CC63-112274A7B1DAC7AF">http://www.raymondcamden.co...</a></p><p>I've combined the post on this page and the other I just referenced to get my first phonegap build app up and running (albeit hello worldish).  Thank you much.  There are so many details and the documentation isn't the best on the Phonegap site.  I may just need to put some help docs out there somewhere for beginners like myself.  Anyway... cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713992">51</a> by Andy Idema
		posted on 5/16/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>Ray, once the user posts the form, is there a way to have the result get returned to another div that doesn't contain the original form?  I have a few divs that are setup like this...</p><p>&lt;div data-role="page" id="descriptions"&gt;<br>	&lt;div data-role="header"&gt;<br>		&lt;h1&gt;Descriptions&lt;/h1&gt;<br>	&lt;/div&gt;<br>	&lt;div data-role="content" data-theme="c"&gt;	<br>	Results here please<br>	&lt;/div&gt;<br>	&lt;div data-role="footer"&gt;<br>		&lt;h4&gt;&amp;copy; MySite - 2013&lt;/h4&gt;<br>	&lt;/div&gt;<br>&lt;/div&gt;</p><p>So let's say I want the form post results to end up inside the descriptions div... how do I do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713990">52</a> by Raymond Camden
		posted on 5/16/2013 at 6:29 PM
		</div>
		<div class="comment_text"><p>If using jQuery, your success handler can take the result and write it out anywhere you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713997">53</a> by Andy Idema
		posted on 5/16/2013 at 6:30 PM
		</div>
		<div class="comment_text"><p>I'm wondering if I just point to descriptions id instead of result... No way it can be that easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713994">54</a> by Andy Idema
		posted on 5/16/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>So in this particular example, function(data,status{$("#descriptions").html(data)}); is indeed sending the result to the descriptions div which is what I want. What I'm wanting to do though is have the form navigate to that div after the data is submitted.  Do I put an action="#descriptions" in the form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713999">55</a> by Raymond Camden
		posted on 5/16/2013 at 9:25 PM
		</div>
		<div class="comment_text"><p>It depends on what you mean by 'navigate'. You can scroll to it. You can show it. Etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713993">56</a> by Andy Idema
		posted on 5/22/2013 at 2:20 AM
		</div>
		<div class="comment_text"><p>Hi Ray.  I have this code setup in my app so the results load into the div with a hyperlink to a different page.  The problem I'm having is that it is navigating to a different address than the full path I have as the hyperlink.  Example.  My link says &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fmobile%2Fdetails.cfm%3Fid%3D2731%3As54ungDTAaPItxceVjiI5KbktP0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/mobile/details.cfm?id=2731">http://www.mysite.com/mobil...</a>"&gt;Link&lt;/a&gt; But its navigating to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fmobile%2F%23%2Fmobile%2Fdetails.cfm%3Fid%3D2731%3AcL1vY2vXhg-7DEpelivr4KYSdh0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/mobile/#/mobile/details.cfm?id=2731">http://www.mysite.com/mobil...</a> and throwing an error.  I am guessing that I need to return something different than an html path on the hyperlinked result?  Do I need to do something other than just loading results into a div?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713998">57</a> by Andy Idema
		posted on 5/22/2013 at 4:34 AM
		</div>
		<div class="comment_text"><p>Found <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2009%2F3%2F17%2FSimple-example-of-loading-a-ColdFusion-query-with-jQuery%3A_3gxK9_IWspZ5D5VsCqj5NZddtc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2009/3/17/Simple-example-of-loading-a-ColdFusion-query-with-jQuery">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713996">58</a> by Andy Idema
		posted on 5/23/2013 at 1:07 AM
		</div>
		<div class="comment_text"><p>Also, how do you add a loading.gif to this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713995">59</a> by Raymond Camden
		posted on 5/23/2013 at 1:20 AM
		</div>
		<div class="comment_text"><p>@Andy (last comment): You could add a loading gif to your page that is hidden with CSS. Then use jQuery's show() command to show it, and hide to hide it, before and after the Ajax call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714000">60</a> by Andy Idema
		posted on 5/23/2013 at 11:08 PM
		</div>
		<div class="comment_text"><p>Ray I ended up using some of the logic from this post: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F12%2F21%2FColdFusion--jQuery-example%3Ayl4wA7ojw_I4Jz8D-D1b6E1Ah4A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/12/21/ColdFusion--jQuery-example">http://www.raymondcamden.co...</a>.  JQM's docs say you can use $.mobile.loading( "show" ); and hide but I couldn't get it to work.  I did however get it working using your example so thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714003">61</a> by Muskie
		posted on 8/27/2013 at 9:23 PM
		</div>
		<div class="comment_text"><p>I tried the demo and I tried to use this technique in development and neither seems to work in Firefox on Windows.  I'm not sure the exact version of either, but hitting the button doesn't load a new page showing the results of the form submission which is obviously what we both want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714001">62</a> by Raymond Camden
		posted on 8/27/2013 at 9:40 PM
		</div>
		<div class="comment_text"><p>When you open up Firebug, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714002">63</a> by Muskie
		posted on 8/28/2013 at 12:08 AM
		</div>
		<div class="comment_text"><p>I don't know why your demo doesn't work on my work machine, but on our actual website we are using jquery 1.6.something which might be an issue.  This is what I see on Firefox's javascript console.</p><p>[11:57:49.522] Use of attributes' specified attribute is deprecated. It always returns true.</p><p>I tried to post before and it seems to have vanished...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714005">64</a> by Muskie
		posted on 8/28/2013 at 12:10 AM
		</div>
		<div class="comment_text"><p>I just tried your demo code and this is what Firefox's JavaScript console said.  This is for loading the page and then after clicking the button too.</p><p>[13:23:48.556] ReferenceError: $ is not defined @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqform%2Ftest2.html%3A6%3A318uY4pCAggy9SmDt4bvXv6sR9g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqform/test2.html:6">http://www.coldfusionjedi.c...</a><br>[13:23:48.561] The character encoding of the HTML document was not declared. The document will render with garbled text in some browser configurations if the document contains characters from outside the US-ASCII range. The character encoding of the page must be declared in the document or in the transfer protocol. @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqform%2Ftest2.html%3A9YWa3N7REC1gTgNfA5RIj3uJT60&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqform/test2.html">http://www.coldfusionjedi.c...</a><br>--<br>[13:24:02.225] A form was submitted in the windows-1252 encoding which cannot encode all Unicode characters, so user input may get corrupted. To avoid this problem, the page should be changed so that the form is submitted in the UTF-8 encoding either by changing the encoding of the page itself to UTF-8 or by specifying accept-charset=utf-8 on the form element. @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqform%2Ftest2.html%3A9YWa3N7REC1gTgNfA5RIj3uJT60&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqform/test2.html">http://www.coldfusionjedi.c...</a><br>--<br>[13:24:07.236] ReferenceError: $ is not defined @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqform%2Ftest2.html%3Fname%3DAndrew%26email%3Dandrew%2540muschamp.ca%26gender%3DM%3A6%3AIjhf8dZiIAF3kQMmbwT15XxatT8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqform/test2.html?name=Andrew&amp;email=andrew%40muschamp.ca&amp;gender=M:6">http://www.coldfusionjedi.c...</a><br>[13:24:07.241] The character encoding of the HTML document was not declared. The document will render with garbled text in some browser configurations if the document contains characters from outside the US-ASCII range. The character encoding of the page must be declared in the document or in the transfer protocol. @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqform%2Ftest2.html%3Fname%3DAndrew%26email%3Dandrew%2540muschamp.ca%26gender%3DM%3A9upFzAXB-R0bViAOAHfcWyTrGCM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqform/test2.html?name=Andrew&amp;email=andrew%40muschamp.ca&amp;gender=M">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714004">65</a> by Raymond Camden
		posted on 8/28/2013 at 12:16 AM
		</div>
		<div class="comment_text"><p>Err, not sure what to say. $ is not defined means jQuery didn't load. When I run the demo, jQuery's library loads just fine. I'm using this URL for jQuery:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a></p><p>Try to open that in your browser and if it doesn't work, maybe your network is blocking it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714007">66</a> by Muskie
		posted on 8/28/2013 at 1:18 AM
		</div>
		<div class="comment_text"><p>It is possible my employer's firewall is messing with things, it wouldn't be the first time.  I don't think it is the most developer friendly company, but I thought my software development days were done, now I work on a legacy extranet written in ColdFusion.  I never started programming in ColdFusion until 2013 and I've been programming a long time.</p><p>I am trying to make your technique work on the extranet and I found this StackOverflow thread about the error I get so maybe it is the version of JavaScript that the extranet is using.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F8389841%2Fusing-jquery-to-determine-selected-option-causes-specified-attribute-is-depreca%2F%3AxMo8b7FBhqcssJfL_d4WSP1XyD0&amp;cuid=3321886" rel="nofollow noopener" title="stackoverflow.com/questions/8389841/using-jquery-to-determine-selected-option-causes-specified-attribute-is-depreca/">stackoverflow.com/questions...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714006">67</a> by Muskie
		posted on 8/28/2013 at 1:19 AM
		</div>
		<div class="comment_text"><p>I tried your link to jquery, and Firefox through up this message:</p><p>"Firefox has detected that the server is redirecting the request for this address in a way that will never complete."</p><p>Firefox and the firewall are definitely possible sources of problems, which is disappointing as I had a good idea on how I wanted to do the UI using jQuery/JavaScript, now I will have to do something less slick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714010">68</a> by Raymond Camden
		posted on 8/28/2013 at 1:20 AM
		</div>
		<div class="comment_text"><p>Oh, well for *that* issue, keep in mind my code here is 4 years old. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714013">69</a> by Raymond Camden
		posted on 8/28/2013 at 1:21 AM
		</div>
		<div class="comment_text"><p>Well, if you need it work, I'd ping IT. They are being stupid IMO to block you from loading jQuery. If you are learning on the job, I'd simply copy it to a USB stick at home and bring it to work. But still - I'd ping IT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714011">70</a> by Muskie
		posted on 8/28/2013 at 1:24 AM
		</div>
		<div class="comment_text"><p>If it makes you feel better it works in IE 8, the official corporate browser.  I'll never be a JavaScript guy because far too many times it will work in one browser and inexplicably not work in another browser, once again that seems to be the case.</p><p>I installed Firefox on my work machine specifically for debugging, it should be newer and superior to the official IE 8 browser, but clearly Firefox is stricter.  I also wanted to open a popup, I need to step back and think things through.  I may have to try my code in IE, but it appears I need a new technique, one that works in jquery 1.6.1 and Firefox...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714014">71</a> by Raymond Camden
		posted on 8/28/2013 at 1:33 AM
		</div>
		<div class="comment_text"><p>" I'll never be a JavaScript guy because far too many times it will work in one browser and inexplicably not work in another browser, once again that seems to be the case. "</p><p>I can promise you it gets better. :) Again - keep in mind this post is four years old. I may not have been doing things the best way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714012">72</a> by Sean
		posted on 10/24/2013 at 12:39 AM
		</div>
		<div class="comment_text"><p>Thanks  Raymond, your tutorial helped me submit the form to a database. Next I am trying to add  jquery function where once submitted, text fields get cleared onsubmit, so it can be quickly resubmitted with next user info.</p><p>This just shows on how to submit onto a database. <br>Form.cfm</p><p>&lt;html&gt;</p><p>&lt;head&gt;<br>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>$(document).ready(function() {<br>	$("#testForm").submit(sendForm)<br>});</p><p>function sendForm() {<br>	$.post('post.cfm',$("#testForm").serialize(),function(data,status){<br>		$("#result").html(data)<br>	});<br>	return false<br>}</p><p>&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;form id="testForm"&gt;<br>	Name: &lt;input type="text" name="name"&gt;&lt;br/&gt;</p><p>	&lt;input type="submit" value="Save" /&gt;<br>&lt;/form&gt;</p><p>&lt;div id="result"&gt;&lt;/div&gt;<br>&lt;/body&gt;</p><p>&lt;/html&gt;</p><p>post.cfm</p><p>&lt;cfquery datasource="MSSQLSERVER" result="mysqlresult"&gt;</p><p>	Insert Into fd_TABLE (fd_uid)<br>	values ('#<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>#')</p><p>&lt;/cfquery&gt;</p><p>&lt;cfoutput&gt;</p><p> #<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>#</p><p>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714016">73</a> by Raymond Camden
		posted on 10/24/2013 at 4:08 AM
		</div>
		<div class="comment_text"><p>In the result handler, just set the form field values to "".</p><p>Also, you really shouldn't use "naked" query values like that - use cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714015">74</a> by Sean
		posted on 10/24/2013 at 4:22 PM
		</div>
		<div class="comment_text"><p>Thanks again Raymond. I added the cfqueryparam and for form reset I used <br>$( '#testForm' ).each(function(){<br>    this.reset();</p><p>Does the job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714017">75</a> by Jan
		posted on 12/17/2013 at 5:38 PM
		</div>
		<div class="comment_text"><p>Hi there,</p><p>Love having found this - it is something I have searched for for a long time and it is so nice and simple!!</p><p>However - using your example in the validate article, I can't get that side and this to work together! Where would I be putting this validation code?</p><p>When I put ******* in:</p><p>$(document).ready(function() {<br>    $("#signup").submit(sendForm);<br>});</p><p>It just submits the form and reloads the page?!</p><p>Any further tutorials on putting the two together?</p><p>Many thanks for all your useful articles.</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714019">76</a> by Raymond Camden
		posted on 12/17/2013 at 6:02 PM
		</div>
		<div class="comment_text"><p>To do form validation in JavaScript, you need to prevent the normal form submission. You would do something like this</p><p>$("#signup").submit(function(e) {<br>e.preventDefault();<br>//do validation here<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714018">77</a> by Jan
		posted on 12/17/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>Thank you - I will take it for a spin and if I have any problems I will no doubt mine your mind for help!!</p><p>Nice that there is a place that actually gets replies - and so quickly.</p><p>You are a great help - thank you.</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714021">78</a> by Jan
		posted on 12/17/2013 at 10:04 PM
		</div>
		<div class="comment_text"><p>I am almost there...</p><p>Based on your Ajax submit and using the validate that you suggest in the other article, it works, but if you keep clicking submit it bypasses the validate.</p><p>My code is here:</p><p>&lt;form id="signup"&gt;</p><p>&lt;h5&gt;Newsletter&lt;/h5&gt;</p><p>&lt;input type="text" name="email" id="email" placeholder="Email address" /&gt;&lt;button id="testForm" class="btn btn-7 btn-7f btn-icon-only icon-heart"&gt;Like&lt;/button&gt;</p><p>&lt;small id="result"&gt;&lt;/small&gt;</p><p>&lt;small&gt;Enter your email address for updates of new properties&lt;/small&gt;</p><p>&lt;/form&gt;</p><p>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.jquery.com%2Fjquery-latest.js%3AQXt45BWXq9XVEqDok6DXHbL8rwc&amp;cuid=3321886" rel="nofollow noopener" title="http://code.jquery.com/jquery-latest.js">http://code.jquery.com/jque...</a>" type="text/javascript"&gt;&lt;/script&gt;<br>&lt;script src="js/jquery.validate.js"&gt;&lt;/script&gt;</p><p>&lt;script type="text/javascript"&gt;</p><p>$("#signup").validate({<br>	rules: {<br>		email: {<br>		  required: true,<br>		  email: true<br>			}<br>		},<br>	messages: {<br>		  email: {<br>      		required: "REQUIRED",<br>      		email: "INVALID"<br>    		}<br>	  },<br>  submitHandler: function(form) {<br>    $("#signup").submit(sendForm);<br>  }<br>});</p><p>function sendForm() {<br>    $.post('&lt;cfoutput&gt;#application.domain#&lt;/cfoutput&gt;post.cfm',$("#signup").serialize(),function(data,status){<br>        $("#result").html(data)<br>    });</p><p>    return false<br>}</p><p>&lt;/script&gt;</p><p>The handler is as follows:</p><p>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>" default=""&gt;</p><p>&lt;cfoutput&gt;<br>Thank you for signing up #<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>#<br>&lt;/cfoutput&gt;</p><p>&lt;script type="text/javascript"&gt;</p><p>$( '#signup' ).each(function(){<br>this.reset(); <br>});</p><p>&lt;/script&gt;</p><p>Sorry if I am asking too much of you as I am just some random asking for help!!!</p><p>Thank you very much in advance if you can help.</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714020">79</a> by Raymond Camden
		posted on 12/17/2013 at 10:43 PM
		</div>
		<div class="comment_text"><p>Are you saying that if you edit the form to make it invalid, when you click submit, it isn't rechecked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714022">80</a> by Jan
		posted on 12/18/2013 at 12:09 AM
		</div>
		<div class="comment_text"><p>Hi there</p><p>WhenI click submit with no entry it validates correctly - when I then try text which isnt an email it says invalid - so far so good!!</p><p>When I enter an email address and click submit after the above - it does nothing, then click submit again and it works.</p><p>THEN if I press submit once the form is processed it will just process the form every time I click submit, by passing validation until I refresh the page!</p><p>Does that make sense?</p><p>Thank you for your time.</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714029">81</a> by Raymond Camden
		posted on 12/18/2013 at 12:12 AM
		</div>
		<div class="comment_text"><p>Kinda. I think at this point it makes more sense for us to take this offline. Can you please ping me directly and also put this online where I can run it myself. My email address is in the header.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714028">82</a> by Jan
		posted on 12/18/2013 at 2:35 AM
		</div>
		<div class="comment_text"><p>Hi there,</p><p>No worries - I will do this tomorrow as the files are at work and I will upload them there to email you.</p><p>Many thanks</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714023">83</a> by ECL
		posted on 9/16/2014 at 9:26 PM
		</div>
		<div class="comment_text"><p>Howdy!  Good simple example, cept I seem to have trouble getting it to fire with some error authentication.  I am new to CF and JQuery but I have a simple textarea form and a send button which I would like an email sent out when they click.  Part of it though is I want to use this in a modal window so I don't want the page to disappear or the parent page to be wiped out.</p><p>But in this example it's just a single page form I am trying to get to work</p><p>This is all the code (not much anyway) but here is what my script looks like against yours.</p><p>Detail.cfm <br>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;</p><p>$(document).ready(function() { $("#frmSubmit").submit(sendForm)	});</p><p>function SubmitForm()<br>{<br>	Tbody = document.getElementById("txtBody");</p><p>	if(Tbody.value == '')<br>		alert('Please enter some text for your message.');<br>	else<br>		$("#frmSubmit").submit(sendForm);<br>		//frmSubmit.submit();				<br>}</p><p>	function sendForm() <br>	{<br>		$.post('Detail.cfm',$("#frmSubmit").serialize(),function(data,status){<br>			$("#result").html(data)<br>		});<br>		return false<br>	}		<br>&lt;/script&gt;</p><p>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Email Test&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;cfif isdefined("form.txtBody")&gt;<br>    	&lt;CFMAIL TO=someguy@place.com<br>         FROM= otherdude@place.com<br>         SUBJECT= "Thank you for submitting the information"&gt;Message below sent from user #Session.UserID# , the message is:</p><p>         #form.txtBody#</p><p>         &lt;/CFMAIL&gt; <br>&lt;cfelse&gt;</p><p>        &lt;form method="post" name="frmSubmit" id="frmSubmit" action="Detail.cfm" &gt;<br>                                &lt;table id="tblError" name="tblError" &gt;			<br>                                &lt;tr&gt;&lt;td colspan="2" class="ui-widget-content" align="center"&gt;Suggested Detail to Submit&lt;/td&gt;&lt;/tr&gt;<br>                                 &lt;tr&gt;&lt;td colspan="2" class="ui-widget-content"&gt;System does not recognize detail. Please provide a suggested name that you think should be associated with this detail in the boxes below.  Click Send when done.&lt;/td&gt;&lt;/tr&gt;<br>                                 &lt;tr&gt;&lt;td colspan="2" class="ui-widget-content" valign="top"&gt;Comments: &lt;/td&gt;&lt;/tr&gt;<br>                                 &lt;tr&gt;&lt;td class="ui-widget-content" &gt;&lt;textarea cols="75" rows="5" id="txtBody" name="txtBody" class="ui-widget-content"&gt;&lt;/textarea&gt;&lt;/td&gt;&lt;td class="ui-widget-content" &gt;&lt;input type="button" id="btnSubmit" value="Send" class="ui-widget-content" align="middle" onclick="SubmitForm();" /&gt;&lt;/td&gt;&lt;/tr&gt;<br>                           &lt;/table&gt;&lt;/form&gt;  <br>      &lt;/cfif&gt;                     <br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>So if you notice the one comment line in the JavaScript, if I use //frmSubmit.submit(); the email goes out, but then of course I lose the page.  If I use the other method nothing happens when I click send, meaning the page sits there but I don't get the email (I am just using my own email address for testing).</p><p>Not sure why it's not firing, any ideas?  Any help would be appreciated, as I am new to JQuery and CF.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714024">84</a> by Raymond Camden
		posted on 9/16/2014 at 9:58 PM
		</div>
		<div class="comment_text"><p>No, I don't see the commented out line. Please do not post code blocks here. As the form says, use a Gist or Pastebin.</p><p>You want to use e.preventDefault() where e is the argument you would add to your form submit handler, this stops the 'normal' form action and lets you handle it completely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714026">85</a> by Jan
		posted on 10/3/2014 at 3:43 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Is it possible to set a parameter with this and have the page where the form sits pick up on it? So of instance if I wanted to use this technique for a login form - so the form submits to the handler and that pushes back the fact that the user is logged in and then some funky things can fade in?!</p><p>Thanks</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714025">86</a> by Raymond Camden
		posted on 10/3/2014 at 3:46 PM
		</div>
		<div class="comment_text"><p>You mean work with the result? If so, the code already does that. The result is HTML and I use code to inject it into the DOM. If you wanted to return data, like in the form of JSON, you could just as easily do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714027">87</a> by Jan
		posted on 10/3/2014 at 3:52 PM
		</div>
		<div class="comment_text"><p>Hi Raymond - thanks for the speedy reply.</p><p>I am using Dreamweaver default login code (for this testing) and the login form is set up using this technique - the form is a full page overlay, and when the login is successful I wanted to fade out the login form as the session is now set - but wouldn't the page where the form sits need to be refreshed to pick up on the fact that the session is now in progress, thus negating the submission of the form without a page refresh?</p><p>I hope that makes sense - I feel I am gibbering...</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714030">88</a> by Jan
		posted on 10/3/2014 at 5:20 PM
		</div>
		<div class="comment_text"><p>Ignore my last gibberish - I have got it working and now have a far better understanding of how this world!!</p><p>Cheers</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1709490646">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FKCEBJYRLB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1709490646">89</a> by Dave
		posted on 11/24/2014 at 9:26 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond! I have been looking for a simple example of this with Coldfusion for weeks now!</p></div>
	</div>
</div>
		