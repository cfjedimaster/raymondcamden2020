
<div class="comment" id="c_1713742306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742306">1</a> by Sharon
		posted on 7/30/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>Ah...jQuery validate(). I love you so. Although I always get tripped up at the same point: errorPlacement styles. My solution was for a tightly styled form that couldn't expand vertically:</p><p>[code]<br>    errorPlacement: function(error, element) {<br>        // I wanted my errors to prepend the label with a simple *required*<br>        error.prependTo(element.parent());</p><p>        // this was for a checkbox field that sits all on one line, didn't have a label to append to.<br>        if (error.attr('htmlfor') == 'interest') {<br>            $(element.parent()).addClass('highlightError');<br>        }<br>    },<br>    // because I was doing my own custom highlight function, I had to add my own "unhighlight"<br>    unhighlight: function(element, errorClass) {<br>        $(element).removeClass(errorClass);</p><p>        if ($(element).attr('name') == 'interest') {<br>            $($("#interest").parent()).removeClass('highlightError');<br>        }<br>    },<br>[/code]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742305">2</a> by Kevin Schmidt
		posted on 7/30/2012 at 8:20 PM
		</div>
		<div class="comment_text"><p>Like it Ray.  I'm doing some jQM sites now and I've just been rolling my own and using a dialog to pop up what the errors in the form are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742313">3</a> by Raymond Camden
		posted on 7/30/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>@Kevin: In theory, you could use the plugin to handle the 'check' work and then just write a custom function for the popup. I mean if you were interested in using the plugin for it's validation logic and having REALLY custom UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742310">4</a> by Misty
		posted on 7/30/2012 at 9:27 PM
		</div>
		<div class="comment_text"><p>Good One ray, Btw i prefer Validation to be done on server side and show with timeout to come &amp; go :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742311">5</a> by Raymond Camden
		posted on 7/30/2012 at 9:45 PM
		</div>
		<div class="comment_text"><p>Every time I talk about client side validation I try like hell to ensure I remind folks that they must ALWAYS do server side validation as well. It is CRITICAL. And I forgot this time. Thanks Misty!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742308">6</a> by jlig
		posted on 10/26/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>Ray, since you are looking at Form Validation in JQM (jquerymobile), can you answer the following question:</p><p>- Why won't Spry Validation work with JQM?<br>- See this post: <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F4660779%3AHft_ErbFl6TLJUs4bGNtR4XvdEk&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/4660779">http://forums.adobe.com/mes...</a><br>- Can you work up an example of JQM &amp; Spry that works when using a Form Submit?</p><p>I find it curious that Dreamweaver includes both JQM &amp; Spry but I have yet to see an example or post anywhere.</p><p>Thanks..</p><p>ps: thanks for the simple captcha.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742314">7</a> by Raymond Camden
		posted on 10/26/2012 at 12:56 AM
		</div>
		<div class="comment_text"><p>As far as I know, Spry is no longer being worked on and I do not recommend people use it. I loved it back in the day, but as a framework, it isn't viable anymore and shouldn't be used. To be clear, this is my opinion and not the company's opinion, but I think even "officially" we can say that Spry is no longer in active development.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742307">8</a> by jlig
		posted on 10/26/2012 at 1:19 AM
		</div>
		<div class="comment_text"><p>Sounds good.. regarding that post about Spry, since I could not get it to work back then, I went ahead and used the jquery validation plugin.</p><p>One question: <br>- Here is my form: <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fvalidation_02.jpg%3AON9Uc_txoetazr2dIP1eLvSxsoo&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/validation_02.jpg">http://cerberus.clearwave.c...</a><br>- Since I'm using JQM collapsible panels, how do I get validation to pop-up a nice box saying "The following fields are required" and then have it take to me to the first required field? as it is now, if the panel is collapsed, you have to go find the required fields..?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742309">9</a> by Raymond Camden
		posted on 10/26/2012 at 4:37 PM
		</div>
		<div class="comment_text"><p>"how do I get validation to pop-up a nice box saying "The following fields are required"</p><p>check out jQM's new popups.</p><p>"and then have it take to me to the first required field? as it is now, if the panel is collapsed, you have to go find the required fields.."</p><p>This would be more complex. If you know which is your first 'bad' field, you could use jQuery to get the parent() which should be the collapsible div and check it's status. I can't remember offhand the exact API, but check the docs. There is a way to see if a div is collapsed or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742312">10</a> by Ivan
		posted on 12/23/2012 at 11:26 AM
		</div>
		<div class="comment_text"><p>Thank you so much for this tutorial.</p><p>There seems to be a new feature in validator called equalTo</p><p>An alternative to check for same password being typed,</p><p>In HTML<br>&lt;input type="password" name="password2" id="password2" equalTo="password" &gt;</p><p>In Javascript (if we want to override default error message)<br>$("#registerForm").validate({<br>	messages: {<br>		password2: {<br>			equalTo: "Confirmation password must match."<br>		}</p><p>....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742316">11</a> by Raymond Camden
		posted on 12/23/2012 at 8:48 PM
		</div>
		<div class="comment_text"><p>I don't believe you are right. I tested this in Firefox and Firefox and it didn't work I also checked the HTML5 Spec and it isn't listed there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742315">12</a> by Ivan
		posted on 12/23/2012 at 9:05 PM
		</div>
		<div class="comment_text"><p>Oh, this is not HTML5 tag, it is part of the validation plugin, please see here.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FValidation%2FMethods%2FequalTo%23other%3An9WFNIypLM9xMULH4U7ExZg4jIQ&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Validation/Methods/equalTo#other">http://docs.jquery.com/Plug...</a></p><p>I am just using the inline way of "calling" equalTo, that's all</p><p>It works, I am using it in my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742317">13</a> by Raymond Camden
		posted on 12/23/2012 at 9:07 PM
		</div>
		<div class="comment_text"><p>Ah, sorry, I thought I had focused on *just* html5 validation in this post, but I did not - I used a plugin. Sorry! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742318">14</a> by Pitto
		posted on 4/13/2013 at 11:12 PM
		</div>
		<div class="comment_text"><p>Hi Raymond!</p><p>Thank you for the article...</p><p>I'm moving some tiny steps into jQuery Mobile but validation is truely driving me crazy.</p><p>I've tried 200.000 tutorials and methods but the main problem is that if I get in the form page with a link that uses data-ajax=false everything works.<br>If I do it in ajax the form is sent without any kind of validation.<br>Probably I didn't understand much about where to put the script that should handle validation?</p><p>Right now I put in &lt;head&gt; and I've tried this:</p><p>&lt;script type="text/javascript"&gt;<br>$(document).bind('pageinit', function () {<br> $(insert).validate({ // or form #id<br>  rules: {<br>   field: "nick" // field name not #id and has class="required<br>   },<br>   submitHandler: function (form) {<br>    alert('data submitted');<br>    return false;<br>   }<br> });<br>});<br>&lt;/script&gt;</p><p>But it's not working :(</p><p>Can you please help? It is becoming my nightmare.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742392">15</a> by Raymond Camden
		posted on 4/13/2013 at 11:40 PM
		</div>
		<div class="comment_text"><p>Well, I'd begin by ensuring your pageinit code is actually running. If you add console.log('pageinit fired'), do you see it in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742393">16</a> by Pitto
		posted on 4/14/2013 at 5:26 AM
		</div>
		<div class="comment_text"><p>Thank you for your answer, Raymond!</p><p>I've tried every kind of tutorial in the internet and I got to this final resolution:</p><p>if I use a link to get to the form's page the link has to have or ajax-data=false or rel="external" (but this way I'd lose the cool transitions) otherwise the form validation will not work (but it'll work on reload).</p><p>Your suggestion cleverly got to the point: my pageinit is fired _only_ if I modify the incoming link to disable ajax.</p><p>I want to pull all my hairs!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742383">17</a> by Raymond Camden
		posted on 4/14/2013 at 9:35 PM
		</div>
		<div class="comment_text"><p>Err, not exactly. pageinit will fire when a JQM page is set up initially. I'd argue that while you have your stuff working now, it is incorrect still. If you want to return to your original code and share it (via Gists) I'd like to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742385">18</a> by Pitto
		posted on 4/14/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>God bless you! :D</p><p>Here's my "vanilla" pages:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fanonymous%2F0c33b152bab6135c7c2a%3AuCWTR3FCW7_d-DIykjeljwBI7VE&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/anonymous/0c33b152bab6135c7c2a">https://gist.github.com/ano...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742389">19</a> by Raymond Camden
		posted on 4/15/2013 at 5:18 AM
		</div>
		<div class="comment_text"><p>Where is the JS? Keep in mind that JQM, by default, creates a "SIngle Page Architecture" type app. So when you go from your first page to your second, unless you override it (as you did), JQM fetches the second page and injects it in the DOM.</p><p>Therefore, if you want to have code that runs on a page being created, your current code may need to get more specific.</p><p>For example: $(document).bind('pageinit', function () {</p><p>Says to listen to ALL pageinit calls. You probably want the one for your specific page. Imagine that page has a &lt;div data-role="page" id="second"&gt;. You could do this instead:</p><p>$(document).on('pageinit', '#second', function () {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742382">20</a> by Pitto
		posted on 4/15/2013 at 2:21 PM
		</div>
		<div class="comment_text"><p>Oh, sorry!</p><p>The js comes from standard google liks for jquery and jquery mobile (of course jquery is before jquery mobile in the head section).</p><p>So, excuse me again, if I have simple code like this:<br>(insert is my form's id)</p><p>$('#insert').submit(function() {<br>  alert('Hey, you pressed the button!');<br>  return false;<br>});</p><p>What should I change?</p><p>It's related to a very specific form and, again, it works if I reload the page.</p><p>Probably I simply have bad basic understanding of how jquery works but official documentation seems to be not sufficient for me...<br>I think it's time to buy a book :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742380">21</a> by Raymond Camden
		posted on 4/15/2013 at 3:00 PM
		</div>
		<div class="comment_text"><p>Well, first, you can use that, but it isn't the same as the jQuery validation plugin. Did you try the code I suggested? It goes into your own JS file that should be included in the &lt;head&gt; of your main HTML file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742394">22</a> by Pitto
		posted on 4/15/2013 at 6:33 PM
		</div>
		<div class="comment_text"><p>It works! :D</p><p>I've simply switched to multi-page and now it works gracefully!</p><p>Here's info for anybody who suffered like me:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdemos%2F1.2.0%2Fdocs%2Fpages%2Fpage-anatomy.html%3Av5oVwyMcTsBjxwchBoZ-r2Oo3fI&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/demos/1.2.0/docs/pages/page-anatomy.html">http://jquerymobile.com/dem...</a></p><p>:)</p><p>Thanks for you help and your precious blog, Raymod :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742384">23</a> by Raymond Camden
		posted on 4/15/2013 at 6:39 PM
		</div>
		<div class="comment_text"><p>You are welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742390">24</a> by Pitto
		posted on 4/21/2013 at 10:28 PM
		</div>
		<div class="comment_text"><p>Hi there, it's me again...</p><p>I'm trying to solve a small but annoying issue on jquery form: my form gets submitted every time an user press "go" on android keyboard or enter on the pc.</p><p>How can this be solved in the correct way?</p><p>Thanks a lot and excuse me for bothering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742395">25</a> by Raymond Camden
		posted on 4/21/2013 at 11:37 PM
		</div>
		<div class="comment_text"><p>Is this online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742391">26</a> by Pitto
		posted on 4/21/2013 at 11:48 PM
		</div>
		<div class="comment_text"><p>Silly me!</p><p>Here's the way I've found (correctly working for my tests):</p><p>function DisabilitaSubmit()<br>{<br>$('input,select').keypress(function(event) { return event.keyCode != 13; });<br>}</p><p>You think this is a good method or a bad one?</p><p>Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742378">27</a> by Raymond Camden
		posted on 4/22/2013 at 10:40 PM
		</div>
		<div class="comment_text"><p>Seems fine to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742387">28</a> by Eric Burnley
		posted on 4/30/2013 at 2:08 AM
		</div>
		<div class="comment_text"><p>Hi Raymond- sorry to post to an old thread, but thought I'd ask since this is related.<br>With the new markup format of text inputs in &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fview.jquerymobile.com%2F1.3.1%2Fdemos%2Fwidgets%2Ftextinputs%2F%3AsNbv3az1Lfxze61zFFCbkqRAUaQ&amp;cuid=3321886" rel="nofollow noopener" title="http://view.jquerymobile.com/1.3.1/demos/widgets/textinputs/">http://view.jquerymobile.co...</a>"&gt;jQM 1.3.1&lt;/a&gt;, it seems error placement in jQuery Validation gets thrown off- jQM 1.3.1 adds a div wrapper around the input, so that div is now what I need to style rather than the input, and the .valid class applied to the input as well needs to be on that parent div.  I know I can control this via errorPlacement, but it seems like there should be a quicker solution to this - before I update all my errorPlacement calls.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742381">29</a> by Raymond Camden
		posted on 5/1/2013 at 1:28 AM
		</div>
		<div class="comment_text"><p>Um... no, outside of the errorPlacement idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742396">30</a> by Eric Burnley
		posted on 5/1/2013 at 9:56 PM
		</div>
		<div class="comment_text"><p>No problem, thanks for looking.  Here's my initial solution, which shows the css and js to change for the new markup format.<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Fericburnley%2FzeTa3%2F26%2F%3AhJ9gcC4wa9D6-Z0oX76-65-x5W0&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/ericburnley/zeTa3/26/">http://jsfiddle.net/ericbur...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742377">31</a> by Steve Oldner
		posted on 5/15/2013 at 10:19 PM
		</div>
		<div class="comment_text"><p>Very nice and easy to follow.<br>Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742400">32</a> by Steve Kemp
		posted on 6/24/2013 at 3:21 AM
		</div>
		<div class="comment_text"><p>HI Ray,</p><p>I'm working on my first jQuery Mobile site with form validation and found this great post. My target audience is iPad users only - as you noted in your post the positioning of the errors appears on the left of the labels for input fields, not under the fields themselves.</p><p>Is there a way to change this so they appear under the fields, just like on an iPhone?</p><p>thanks,<br>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742401">33</a> by Raymond Camden
		posted on 7/3/2013 at 6:38 PM
		</div>
		<div class="comment_text"><p>Steve - all I can suggest is messing w/ errorPlacement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742386">34</a> by Mario Mata
		posted on 7/6/2013 at 2:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>i hope you can solve my problem, i have a form that uses your example... but everytime I try the validation, it doesn`t work... I have to regresh the page and then it works perfectly, but only if I refresh...</p><p>Blessings.</p><p>Mario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742399">35</a> by Mario Mata
		posted on 7/6/2013 at 2:55 AM
		</div>
		<div class="comment_text"><p>i forgot.. i use this to call the validation:</p><p>$(document).ready(function() {<br>$("#form").validate();<br>});</p><p>Regards.</p><p>Mario</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742397">36</a> by Raymond Camden
		posted on 7/6/2013 at 6:09 AM
		</div>
		<div class="comment_text"><p>You can't use it in document.ready as the form may not be loaded then in jQM. Look at my examples - I use the pageshow event instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742398">37</a> by Mario Mata
		posted on 7/6/2013 at 10:06 PM
		</div>
		<div class="comment_text"><p>Alright! Raymond...  also i want to share one point... maybe most of people knows it, but I forgot than Jquery mobile at the time of changuing pages, it just load the &lt;BODY&gt; of the next page...</p><p>also change the script to pageshow solve the problem.</p><p>Thank you so much Raymond!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742403">38</a> by Raymond Camden
		posted on 7/6/2013 at 10:09 PM
		</div>
		<div class="comment_text"><p>To be anal, jQM is loading the &lt;div data-role="page"&gt; aspect of the page, not just everything inside &lt;body&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742406">39</a> by Mario Mata
		posted on 7/7/2013 at 7:36 AM
		</div>
		<div class="comment_text"><p>oh.. well.. good to know master hehe <br>thank you for all the help.</p><p>you really save my ass.</p><p>Mario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742409">40</a> by joan
		posted on 7/23/2013 at 12:15 PM
		</div>
		<div class="comment_text"><p>Just for the record, in the errorReplacement function, instead of using:<br>if (element.attr("name") === "favcolor") {</p><p>it's nicer and more portable this way:<br>if ($(element).is("select")) {</p><p>don't u think?<br>Cheers<br>Joan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742408">41</a> by Raymond Camden
		posted on 7/23/2013 at 3:40 PM
		</div>
		<div class="comment_text"><p>Agreed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742411">42</a> by Arun.s
		posted on 8/5/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>very nice</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742412">43</a> by Daniel
		posted on 9/17/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Thanks for this useful example, Raymond. It's really helpful!</p><p>I've got all the files (index.html, register.html, some.html, main.js and app.css) in the same directory (as you do in demos/2012/jul/30/round3) but for some reason I get 'Error Loading Page' when submitting the form and the validation doesn't happen.</p><p>I've downloaded the jQuery Validation plugin (<a href="http://disq.us/url?url=http%3A%2F%2Fjquery-validation-1.11.1.zip%3AARhK0aDv7iQs2uiyf1CEjTenpvc&amp;cuid=3321886" rel="nofollow noopener" title="jquery-validation-1.11.1.zip">jquery-validation-1.11.1.zip</a>), unzipped it and copied it into the same directory, but it still doesn't work.</p><p>Please I'd appreciate if you could help me solve this little issue. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742410">44</a> by Raymond Camden
		posted on 9/19/2013 at 6:09 PM
		</div>
		<div class="comment_text"><p>FYI, Daniel and I worked it out in email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742413">45</a> by Daniel
		posted on 9/19/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>:) I know, Raymond. Thanks for that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742415">46</a> by Simon
		posted on 10/24/2013 at 7:23 PM
		</div>
		<div class="comment_text"><p>Thanks , im quite surprised JQM haven't implemented a basic validation into the core files as most people only require the basic submit / validation functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742414">47</a> by saboor
		posted on 2/14/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>nice article, did'nt knew the abc of jquery validation but after reading this article, i have use it in my project. thanks author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742418">48</a> by Jack
		posted on 5/26/2014 at 11:34 AM
		</div>
		<div class="comment_text"><p>Hi Raymond. Excellent article!</p><p>I have the same problem with Daniel, for some reason I do not know I get 'Error Loading Page' when submitting the form and the validation doesn't happen.</p><p>I am using google chrome for testing.</p><p>I would be grateful if you could help me solve this little issue. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742416">49</a> by Raymond Camden
		posted on 5/26/2014 at 6:09 PM
		</div>
		<div class="comment_text"><p>If you can share the URL with me, I can take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742421">50</a> by Jack
		posted on 5/26/2014 at 9:12 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply.</p><p>Actually I am trying to test your sample. When I submit the form without any input, validation is not triggering. It is trying to load form action. As I said I am testing the html page in chrome on desktop computer.</p><p>I uploaded the html page to this location:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fileconvoy.com%2Fdfl.php%3Fid%3Dg291ff364baa2ffd0999507741d6c05bb8f1797ef8%3AscptzQ7jDbCf-TF_GRFYaIuMERo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fileconvoy.com/dfl.php?id=g291ff364baa2ffd0999507741d6c05bb8f1797ef8">http://www.fileconvoy.com/d...</a></p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742419">51</a> by Raymond Camden
		posted on 5/26/2014 at 9:19 PM
		</div>
		<div class="comment_text"><p>If you run my code as is, it is trying to post to a ColdFusion script. If you don't have that installed, it will not work. You mentioned "chome on desktop computer" - you should also have a local web server installed too. You can then change the action value to something.html. Your form data won't be shown on the other page, but you can test the JS code at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742423">52</a> by Jack
		posted on 5/26/2014 at 9:58 PM
		</div>
		<div class="comment_text"><p>If I just set</p><p>&lt;form action="#" method="post" id="registerForm"&gt;</p><p>should this not show validation errors in the page?</p><p>I was expecting the js code work before form action but it still does not...</p><p>These all may be naive questions since I am still html , js newbie....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742422">53</a> by Raymond Camden
		posted on 5/26/2014 at 10:55 PM
		</div>
		<div class="comment_text"><p>It should work, yes, but if you can't put it on a web server that I can see, I can't help more. You can try using your browser devtools. It may show a better error message.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742424">54</a> by Tim
		posted on 6/29/2014 at 8:22 AM
		</div>
		<div class="comment_text"><p>This is a really cool jump start on the validation plugin. I got it up and running in just a few minutes.</p><p>Is there a clean way to tell when there has been a validation problem so that I can stop the submit of the form (not really a submit but the processing of the click event behind a button)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742425">55</a> by Raymond Camden
		posted on 6/29/2014 at 7:52 PM
		</div>
		<div class="comment_text"><p>Hmm - are you saying the form post is still going through even when an error occurs? It should be stopping automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2078313681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2078313681">56</a> by Saurabh
		posted on 6/14/2015 at 10:29 AM
		</div>
		<div class="comment_text"><p>Hi, can you post similar workout for date and time field for jquery mobile with jquery validation.<br>Validation error doenst show up for date fields as they are hidden and wrapped by another display div over.<br>As the field is hidden, so the validation plugin doesnt work.<br>Any help would be great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2092833904">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2092833904">57</a> (In reply to <a href="#c_2078313681">#56</a>) by Raymond Camden
		posted on 6/22/2015 at 2:49 PM
		</div>
		<div class="comment_text"><p>Sorry - haven't worked on this one in quite a few years.</p></div>
	</div>
</div>
		