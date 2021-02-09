
<div class="comment" id="c_1713713426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713426">1</a> by Chris H
		posted on 2/27/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>good options, but i usually just go with &lt;cfif NOT isStructEmpty( Form )&gt;. then i don't have to worry about giving my submit button a certain name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713430">2</a> by Marc
		posted on 2/27/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>You can also pick the request method (GET or POST) out of the cgi scope: cgi.REQUEST_METHOD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713432">3</a> by Timothy Farrar
		posted on 2/27/2009 at 8:39 PM
		</div>
		<div class="comment_text"><p>@Andrew,</p><p>You should really check out the coop library found at <br><a href="http://disq.us/url?url=http%3A%2F%2Fcoop.riaforge.org%3AKFvt5GCxQclOnuB5fQRIz7wiaKs&amp;cuid=3321886" rel="nofollow noopener" title="coop.riaforge.org">coop.riaforge.org</a></p><p>John Farrar created this library and one of the things we support<br>is callbacks so you can set blocks of code to run (1) when the page<br>first loads,(2) every time the page loads, and (3) OnPostBack which<br>is fired whenever a form submission occurs.</p><p>We also support a style of coding with COOP that is somewhat similar to the codebehind pages in .net.</p><p>You can contact me at the following email with more questions, or for an updated copy of the library which we are saving to publicly release at CFUnited, and we are very glad to give people a walkthrough demo of COOP if you are interested:<br>timothyfarrar at <a href="http://disq.us/url?url=http%3A%2F%2Fsosensible.com%3AHiwbJ2G5SrL1h5bnKj_TIzaJyIk&amp;cuid=3321886" rel="nofollow noopener" title="sosensible.com">sosensible.com</a></p><p>Hope you find this helpful,</p><p>Timothy Farrar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713433">4</a> by Luke
		posted on 2/27/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>wish i was coming from a .NET backround :-) it would be like learning the greatest web language all over again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713427">5</a> by Raymond Camden
		posted on 2/27/2009 at 9:13 PM
		</div>
		<div class="comment_text"><p>@ChrisH - I will often use both a save and a cancel button on a form, so I need to check for the name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713436">6</a> by JC
		posted on 2/27/2009 at 9:31 PM
		</div>
		<div class="comment_text"><p>I always use structkeyexists(form,"fieldnames") -- that one will always be there and it won't puke if someone loads the page directly so no form var exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713428">7</a> by Dan Sorensen
		posted on 2/27/2009 at 9:35 PM
		</div>
		<div class="comment_text"><p>For readability I generally use the StructKeyExists method you mentioned:</p><p>&lt;cfif structKeyExists(form, "submit")&gt;<br>&lt;!--- Process Form ---&gt;</p><p>&lt;cfelse&gt;<br>&lt;!--- On First Load ---&gt;</p><p>&lt;/cfif&gt;</p><p>It's simple, short and reliable.</p><p>I name my submit button "submit" for consistency, even if the button value is something different like "save" or "update".</p><p>(Just remember not to cfparam the submit button when you're param'ing default values for the form.)</p><p>BTW, Thanks having the refresher every once in a while. Helps new folks and reminds us of the alternative ways to get the job done. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713429">8</a> by Dean
		posted on 2/27/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>I almost never use the submit button as the tested field value, as some browser do not send that value unless you specifically click on the submit button. So, if someone fills in a text field and hits their return key, the form submits, but your logic is never triggered because your submit button name is not part of the form structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713431">9</a> by Dan Sorensen
		posted on 2/27/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Dean: Which browsers? I'd like to do some testing on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713434">10</a> by Dean
		posted on 2/27/2009 at 10:29 PM
		</div>
		<div class="comment_text"><p>Specifically, IE. I just ran this test on IE 7 and if you just click in the test field and hit return, the form scope does not contain the button value. Hopefully, my code will go through.</p><p>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"&gt;</p><p>&lt;html&gt;<br>&lt;head&gt;<br>	&lt;title&gt;Form Submit Test&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;form action="formtest.cfm" id="formtest" name="formtest" method="POST"&gt;<br>	&lt;label for="textField"&gt;This is a text field&lt;/label&gt;&lt;br /&gt;<br>	&lt;input type="text" id="textField" name="textField" /&gt;&lt;br /&gt;<br>	&lt;input type="submit" id="btnSubmit" name="btnSubmit" value="Click Me!" /&gt;<br>&lt;/form&gt;</p><p>&lt;cfdump var="#form#"&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713437">11</a> by Mark Jones
		posted on 2/27/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>Re: naming submit buttons, I don't do it either for reasons similar to Dean's.  I recently got burned by that:</p><p>&lt;input type="image" name="submit"&gt; in IE does NOT result in a form.submit variable.  IE sends data as "submit.x" and "submit.y" for the location of the click, but does not send a normal "submit" variable.</p><p>I know in the past I've run into other situations like Dean mentions where hitting "enter" wouldn't send the var.  Don't remember specifics; I found my solution back in the 4.0 browser days and haven't had to deal with it since.</p><p>My solution is to always have a hidden form field "act" that identifies the form being submitted, and I check for that.</p><p>Of the solutions outlined so far, Ray's original form.fieldnames and isStructEmpty( Form ) are the most "built-in" and don't require changing your forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713435">12</a> by Raymond Camden
		posted on 2/27/2009 at 10:38 PM
		</div>
		<div class="comment_text"><p>Good points on the 'missing' and .x .y stuff. That has burned me before as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713438">13</a> by Dan Sorensen
		posted on 2/27/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>I'm not sure why I asked... It's ALWAYS IE. :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713444">14</a> by Dan Sorensen
		posted on 2/28/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>I just noticed a typo: StructIsEmpty(form) rather than isStructEmpty(form).</p><p>---<br>I tested the methods above in IE 6, IE 7, Firefox 3, Chrome 1, and Safari 4 for Windows:</p><p>1) structFormEmpty(form) fails IF you cfparam any form fields.</p><p>2) To my dismay, IE 6 &amp; 7 fails structKeyExists(form, "submit") if you press enter.</p><p>3) isDefined("form.fieldNames") works in all tested browsers with both enter and click submit. It appears to be the least intrusive method.</p><p>4) Testing for a known field other than submit, that was not cfparam'd also works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713443">15</a> by trent
		posted on 2/28/2009 at 12:56 AM
		</div>
		<div class="comment_text"><p>Yes what Dean mentioned has caught me before too.</p><p>Also when just checking for form submission take into account the number of forms on a page.  Maybe a search form and an email news letter subscribe form.  Both of these forms can commonly be found on the same page.  A good rule of thumb there is never make them submit to the same page.  But when working on older sites you never know what you may run into..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713446">16</a> by Matthew Abbott
		posted on 2/28/2009 at 1:31 AM
		</div>
		<div class="comment_text"><p>I know ive dealt in IE with a form with one field and a submit button and the fields arent sent when you click the enter key to submit the form.  if i have more than one field in the form, and click enter, then the submit button passes.</p><p>FF doesnt have this problem in my quick tests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713445">17</a> by Don
		posted on 3/4/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>Another way is to just check the request method.  This is what we use in our form post backs, something like:</p><p>&lt;cfif CGI.Request_Method EQ "POST" &gt;</p><p>    ... do post stuff here ...</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		