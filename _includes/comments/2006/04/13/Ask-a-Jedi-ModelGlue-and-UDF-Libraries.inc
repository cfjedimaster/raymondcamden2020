
<div class="comment" id="c_1713651833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651833">1</a> by Justice
		posted on 4/13/2006 at 10:33 PM
		</div>
		<div class="comment_text"><p>Expanding on Ray's idea, you could always append a validation type to the end of your variable names, something like form.social_ssn or form.homephone_phone.  Then write something in the onRequestStart to check the incoming variable names for _ssn, _email, _phone, and validate at that point.</p><p>Just a thought ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651845">2</a> by Raymond Camden
		posted on 4/13/2006 at 10:38 PM
		</div>
		<div class="comment_text"><p>Justice I'd have to disagree with you. I don't think the onRequestStart should be doing random validations of stuff. That should only be done in specific handlers, like AddFooEvent or some such.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651846">3</a> by Justice
		posted on 4/13/2006 at 11:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Would you then have to write some type of event for each form that needed to be validated?  It would just seem to me far easier to somehow format the variable name so that your code can catch any variable that needed validation and validate it auto-magically?  If you had 6 different forms, would you trigger 6 different validation forms?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651849">4</a> by Sami Hoda
		posted on 4/14/2006 at 12:01 AM
		</div>
		<div class="comment_text"><p>In case you wanted to do the same with Mach II, you can use Peter Farrell's udfsPlugin v1.2. It stored your UDFs so that they are available across your app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651847">5</a> by Raymond Camden
		posted on 4/14/2006 at 12:19 AM
		</div>
		<div class="comment_text"><p>Yes. I do write an event for each form, since each form is normally very unique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651848">6</a> by Rob Cameron
		posted on 4/14/2006 at 1:49 AM
		</div>
		<div class="comment_text"><p>Not to toot my own horn too much, but with ColdFusion on Wheels all you need to do is add a little declaration to the top of your model (which works for anything, not just emails):</p><p>&amp;lt;cfset validatesFormatOf("field","REGEX")&amp;gt;</p><p>Where "field" is the field in the model you want to look at and "REGEX" is a regular expression you want to match the field against.  It handles the validation for you when you save the model and keeps track of any errors that occurred as a result of failing the validation.  If you want to use the default error notices that Wheels provides, just add #errorMessagesFor("model")# to the top of your form (where "model" is whatever model you want to get error messages for) and it'll output a nice message telling you which fields failed validation and even highlight those fields in the form for you!</p><p>(There are a couple other validation methods as well:  validatesUniquenessOf() makes sure there are no other records in the database with this same value, validatesPresenceOf() makes sure the field contains a value and validatesNumericalityOf() makes sure the value is a number.)</p><p>Sorry, couldn't resist. :)</p></div>
	</div>
</div>
		