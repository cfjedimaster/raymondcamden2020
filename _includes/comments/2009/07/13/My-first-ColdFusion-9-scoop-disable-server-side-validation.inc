
<div class="comment" id="c_1713716933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716933">1</a> by Simon
		posted on 7/13/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>I would rather see it as a global setting in the administrator. If you want it you can enable it via your application.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716946">2</a> by Raymond Camden
		posted on 7/13/2009 at 5:42 PM
		</div>
		<div class="comment_text"><p>I'm more of a fan of application settings. To me, it makes it more obvious what options are enabled/disabled for my application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716942">3</a> by Martin
		posted on 3/1/2012 at 10:15 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>It seems as if my CF Box 9,0,1,274733 does not obey to this setting done in application.cfc as this (even after restart of server):</p><p>   this.serverSideFormValidation = false;</p><p>Other settings like this, for exmaple this.datasource, are observed.</p><p>I have a form field APP_SA_PERMIT_DATE ... this gets swallowed. There is no APP_SA_PERMIT alone. If I rename it to german _DATUM, it appears in the form scope.</p><p>a bug? Any hints?</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716948">4</a> by Raymond Camden
		posted on 3/1/2012 at 10:16 PM
		</div>
		<div class="comment_text"><p>By swollowed you mean the implicit form handling kicks in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716949">5</a> by Martin
		posted on 3/1/2012 at 10:30 PM
		</div>
		<div class="comment_text"><p>yes. it is not present in the form scope</p><p>In a service (i use fw/1) i have this code</p><p>...<br>var afld = ListToArray (arguments.Data.Fieldnames);<br>...<br>for (fld in afld) {  }<br>...</p><p>the function's argument Data is provided with form ... despite fw/1, i want to protect against all ambiguities .. to i call this fw/+ service with  { data = form }</p><p>I now checked the form scope without fw/1 service ... and to my surprise, it is there ... hmmmm</p><p>I will go and clear any of CF's caches I can find ...</p></div>
	</div>
</div>
		