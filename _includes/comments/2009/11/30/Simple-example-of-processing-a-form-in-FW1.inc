
<div class="comment" id="c_1713720296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720296">1</a> by Baz
		posted on 12/1/2009 at 6:37 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for that Ray, it is definitely not obvious the first time you do it. I'm a huge fan of FW/1 in theory and will be building my first app using it soon, so I am keeping up with docs and posts until I do and this was really helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720289">2</a> by spills
		posted on 12/1/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>I use MG almost exclusively and find the "convention over configuration" philosophy of FW1 takes a little getting used to. I am beginning to appreciate FW1 and how fast you can get a skeleton app up and going though.  FW1 subsystems have a lot a promise and will probably make this a very extensible application in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720290">3</a> by Sean Corfield
		posted on 12/11/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>Your code omits the declaration of "rc" as an argument to the controller functions. A user on the FW/1 mailing list just followed your code and they are not seeing all the rc data preserved on the redirect (because your cfparam sets it as a component variables scope entry instead of part of the argument).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720293">4</a> by Raymond Camden
		posted on 12/11/2009 at 1:38 AM
		</div>
		<div class="comment_text"><p>I'll fix that up tonight and update the blog entry (and download). Thanks Sean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720295">5</a> by Spills
		posted on 2/22/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>&lt;cfargument name="rc" type="struct" required="true"&gt;  is missing from your functions in your code examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720291">6</a> by Raymond Camden
		posted on 2/22/2010 at 8:51 PM
		</div>
		<div class="comment_text"><p>I forgot to fix it last time @Sean commented on it. Added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720297">7</a> by Dane Pescaia
		posted on 4/2/2011 at 11:46 AM
		</div>
		<div class="comment_text"><p>I'm late to the party here but have a question.  And, I've used fusebox quite a bit when building CF apps (as opposed to MG or CB) and so am coming from that mindset - or at least how I've structured this sort of thing within my fusebox apps.</p><p>When you post a form, and run into errors in your form handler, and thus want to present that form back to the user, isn't the cleanest thing to do to "hijack" the view rendered rather than use a redirect?  If you redirect, you obviously have to persist (or pass) all of the relevant data.  Seems much more efficient and easier to code for if you simply re-render the same view that they saw when they posted the form.</p><p>So instead of...<br>&lt;cfset variables.fw.redirect("blog.entry", "id,comment_name,comment_email,comment_website,comment_comments,errors")&gt;</p><p>You'd use...<br>&lt;cfset variables.fw.setview("blog.entry")&gt;</p><p>...and just use the existing data (in the fc struct) to round things out without needing to make another round trip to the server and persist data that you already have available.</p><p>Is this not a valid approach?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720292">8</a> by Sean Corfield
		posted on 4/2/2011 at 11:48 PM
		</div>
		<div class="comment_text"><p>@Dane, yes, you can do that but then the URL in the browser is the form-processing action and if the user then reloads the page you may get a blank form submission (depending on the browser) which may not be a good situation. With the redirect, if the user reloads the page, they'll get the form again, pre-populated if appropriate. It's an edge case and therefore a trade off: some people prefer setView()  - and that's why it was added - and some people prefer the redirect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720294">9</a> by Dane Pescaia
		posted on 4/3/2011 at 7:01 AM
		</div>
		<div class="comment_text"><p>Thanks Sean, appreciate the feedback.</p></div>
	</div>
</div>
		