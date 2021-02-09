
<div class="comment" id="c_1713712847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712847">1</a> by Dave Phipps
		posted on 2/12/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>You should now take a look at the jquery form plugin (<a href="http://disq.us/url?url=http%3A%2F%2Fsnipurl.com%2Fbr5hq%29%3AnQeKy8WjsNRKlO5fUkVVO3sUWhQ&amp;cuid=3321886" rel="nofollow noopener" title="http://snipurl.com/br5hq)">http://snipurl.com/br5hq)</a>. I had some issues initially linking this plugin with the validation plugin and went for using the validationaide plugin instead, but after reading your last couple of entries and having got a form working correctly I am converted! By the way, here is a snippet of how to get the form plugin and validate plugin working together (in $(document).ready()):</p><p>var v = $("#myformid").validate({<br>						submitHandler: function(form) {<br>							$(form).ajaxSubmit(frm_options);<br>}, <br>rules {rules here},<br>messages {messages here}<br>});</p><p>I also use the BlockUI plugin to give some user feedback while the form is submitting and any errors that are returned. If you want to see some code give me a shout.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712846">2</a> by Raymond Camden
		posted on 2/12/2009 at 8:14 PM
		</div>
		<div class="comment_text"><p>@David Phipps - I'd like to see that - can you post the URL to a sample online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712851">3</a> by Dave Phipps
		posted on 2/13/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>Here's a very rough demo:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.chapel-studios.co.uk%2Fjqvalidate%2F%3AEaAzu39kxI8PoUIwA4KhM_8dvDg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.chapel-studios.co.uk/jqvalidate/">http://www.chapel-studios.c...</a></p><p>Change the Show Error radio button to see the success and error messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712852">4</a> by Raymond Camden
		posted on 2/13/2009 at 12:45 AM
		</div>
		<div class="comment_text"><p>Nice. Thanks for sharing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712849">5</a> by shag
		posted on 2/13/2009 at 9:07 PM
		</div>
		<div class="comment_text"><p>@ray, maybe i'm reading something wrong, but what are you calling your back end validation?  perhaps i should ask would you consider back end and server side the same?  i guess i am missing where you actually validate when the data posted from the/any form is actually validated.  i see where you call the remote process that validates the uri is working, but if i'm not mistaken, that is before the form is submitted?  what's to stop someone from creating their own form and submitting it, or stopping the transaction after form submission and changing what is sent after your client/server validation calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712850">6</a> by Raymond Camden
		posted on 2/13/2009 at 9:16 PM
		</div>
		<div class="comment_text"><p>Shag - the back end validation is two fold. One, we have basic back end stuff for when JS is turned off. Do you see that in the very first code sample? The second style is specifically to be used with jQuery and the Validation plugin. That's the last few code samples.</p><p>The 'no JS' validation does NOT do the HTTP/RSS check. It DOES check for basic validation (must be a value and must be a url). I do NOT repeat the 'check URL for existence' and 'check RSS feed' for non-JS folks, but they still get some validation.</p><p>So - worst case - I get an email with proper formatted URLs that aren't pointing to a real domain or rss feed. I could add that logic if I wanted to though. I did not because I didn't want to repeat the network calls on the submission for people who have JS turned on. I could get around that by submitting elsewhere (via an Ajax submission), or simply using jQuery to add a quick flag ('if form.ivalidatedclientside=1 then dont repeat). But I didn't think that would be worth the effort.</p><p>Let me know if that doesn't make sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712856">7</a> by shag
		posted on 2/13/2009 at 9:50 PM
		</div>
		<div class="comment_text"><p>@ray, i was thinking more in terms of db input rather than mail.  i would have been much more restrictive regarding the blog name regarding how long it could be, special characters... etc.  i tend to think of server side validation as protecting from the bad stuff, and maybe this particular example is more checking to make sure the form is filled out.  with less concern on is the data that is going to enter the application going to be destructive.</p><p>i wouldn't consider your server side validation enough for inputting to a db, and didn't want anyone trying to learn something about validation from your site to think it was.</p><p>im in a glass half empty state today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712855">8</a> by Raymond Camden
		posted on 2/13/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>Err, well, everyone has different requirements for their logic. My point here was to demonstrate both client side and server side doing _something_. What CF does is to ensure the value is not empty and that, for the URLs, the pattern is right. Obviously a person could have more 'rules' for their logic. I do not agree that my code is not 'enough', especially in regards to the main point of this blog entry. Then again, I'm probably being a bit defensive. (I'll admit to that.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712853">9</a> by David
		posted on 4/19/2010 at 8:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>thanks for the tutorial! Still having a hard time getting it to work though. Any chance you can take a peek here and see what i'm doing wrong?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.getmura.com%2Fforum%2Fmessages.cfm%3Fthreadid%3D5FA20107-ADFA-439D-8F41D93A218FB32B%26page%3D1%26%233%3AUEqmOrsKMqy-c88y7FPBNTAR2YU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.getmura.com/forum/messages.cfm?threadid=5FA20107-ADFA-439D-8F41D93A218FB32B&amp;page=1&amp;#3">http://www.getmura.com/foru...</a></p><p>Thanks,<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712854">10</a> by Dave Phipps
		posted on 4/19/2010 at 12:33 PM
		</div>
		<div class="comment_text"><p>Try changing the remote rule to something like this:</p><p>remote: {<br>        url: "checkUser.cfm",<br>        type: "post"<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712857">11</a> by Raymond Camden
		posted on 4/19/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>@David - did Dave Phipps' tip help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712859">12</a> by David
		posted on 4/19/2010 at 7:15 PM
		</div>
		<div class="comment_text"><p>Still won't work.</p><p>this is the following of what i have:<br>username: {<br>  required: true, remote: "checkUser.cfm", type: "post"<br>}</p><p>and my checkUser.cfm is set to:<br>&lt;cfsetting enablecfoutputonly="true"&gt;<br>&lt;cfset userBean=application.userManager.readByUsername(url.username,"default")&gt;<br>&lt;cfif userBean.getIsNew()&gt;<br>	&lt;cfoutput&gt;false&lt;/cfoutput&gt;<br>&lt;cfelse&gt;<br>	&lt;cfoutput&gt;true&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712858">13</a> by Raymond Camden
		posted on 4/19/2010 at 7:33 PM
		</div>
		<div class="comment_text"><p>So what does Firebug tell you? Or the Chrome developer tools. Do you see the network request? What is the response?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712860">14</a> by Dave Phipps
		posted on 4/19/2010 at 7:35 PM
		</div>
		<div class="comment_text"><p>Try changing your rule to look like this:</p><p>username: {<br>  required: true, remote: {url: "checkUser.cfm",type: "post"}<br>}<br>note the extra curly brackets around the remote properties/arguments</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712862">15</a> by David
		posted on 4/19/2010 at 8:02 PM
		</div>
		<div class="comment_text"><p>ok so i've got some requests going in and out via firebug. Sorry Ray, still really new to Jquery :). Seems that things are working, but intermittently. If i type in a password that is already taken or not, the first time i type in anything in the username, it does nothing. However, once i change that value, then it seems the validation starts kicking in. However, the message will always stay even when the username is good.</p><p>You can see exactly what i mean here: <a href="http://disq.us/url?url=http%3A%2F%2Fsbiwd3.kattare.com%2Fgo%2Fget-involved%2Fjoin-our-initiative%3AVCcRodKvZGWl3336NWCMK30M7Hc&amp;cuid=3321886" rel="nofollow noopener" title="http://sbiwd3.kattare.com/go/get-involved/join-our-initiative">http://sbiwd3.kattare.com/g...</a></p><p>Thanks guys,<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712866">16</a> by Raymond Camden
		posted on 4/19/2010 at 8:12 PM
		</div>
		<div class="comment_text"><p>Can you tell me a value for password that is good and one that is bad?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712865">17</a> by Dave Phipps
		posted on 4/19/2010 at 8:16 PM
		</div>
		<div class="comment_text"><p>in addition to what Ray just asked, checkUser.cfm seems to be returning a full html page. It should just return true or false right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712867">18</a> by David
		posted on 4/19/2010 at 8:17 PM
		</div>
		<div class="comment_text"><p>By Password i'm assuming you mean username? :) one that is good is test and one that is bad is tests (ie. test is a valid username that should be taken). Do you happen to have a messenger that we can just chat on for a few minutes if you have time? If so, just email me it, otherwise we can just continue dialogue here.</p><p>Thanks again Ray,<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712869">19</a> by Dave Phipps
		posted on 4/19/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>In fact something weird is happening try going to checkUser.cfm directly:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsbiwd3.kattare.com%2Fgo%2Fget-involved%2Fjoin-our-initiative%2FcheckUser.cfm%3AqvH0O1wNlLjl4hrSl-mKGdCjs00&amp;cuid=3321886" rel="nofollow noopener" title="http://sbiwd3.kattare.com/go/get-involved/join-our-initiative/checkUser.cfm">http://sbiwd3.kattare.com/g...</a><br>then try<br><a href="http://disq.us/url?url=http%3A%2F%2Fsbiwd3.kattare.com%2Fgo%2Fget-involved%2Fjoin-our-initiative%2Fiamawalrus.cfm%3APF7i3NBEQ5saggeqifH0fcJp1RY&amp;cuid=3321886" rel="nofollow noopener" title="http://sbiwd3.kattare.com/go/get-involved/join-our-initiative/iamawalrus.cfm">http://sbiwd3.kattare.com/g...</a></p><p>They return the same page, yet the second clearly shouldn't exist!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712871">20</a> by David
		posted on 4/19/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>@Dave, <br>That is correct. I was wondering the same thing. I'll see if Matt Levine can confirm why that would be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712872">21</a> by Raymond Camden
		posted on 4/19/2010 at 8:19 PM
		</div>
		<div class="comment_text"><p>Dave got it - your checkUser.cfm is returning an entire page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712870">22</a> by Raymond Camden
		posted on 4/19/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>onMissingTemplate maybe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712873">23</a> by David
		posted on 4/19/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>Yup.. not sure why that is, but i'm assuming its something to do with Mura. It seems to return the page that i'm on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712874">24</a> by David
		posted on 4/19/2010 at 8:28 PM
		</div>
		<div class="comment_text"><p>BINGO!!!! Thanks guys!! Figured it out. I had to move the checkUser.cfm out of a particular directory and then set a path to it. Works like a charm now! <br>Thanks again,<br>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712876">25</a> by Neal
		posted on 5/10/2010 at 8:15 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>If rather than having 'remote:' point to a cfm I want to have 'remote:' point to a function called "process()" within rss.cfc, how would I do that?<br>In other words, how can we use a cfc rather than a cfm?</p><p>Thanks in advance.  I've been reading your blog a lot lately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712877">26</a> by Dave Phipps
		posted on 5/10/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>You just need to point to rss.cfc?method=process</p><p>then change the process function access to remote</p><p>The function should return either true or false IIRC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712887">27</a> by Neal
		posted on 5/10/2010 at 8:28 PM
		</div>
		<div class="comment_text"><p>Perfect, thanks Dave.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712880">28</a> by keong
		posted on 6/1/2011 at 2:34 PM
		</div>
		<div class="comment_text"><p>The remote attribute = data: , it only can pass one value,  I need to used a long list when i want to pass in more than one value, then split it via server scrip.</p><p>Is that any other way i can set more than one form/url variable in DATA?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712878">29</a> by Dave Phipps
		posted on 6/1/2011 at 2:46 PM
		</div>
		<div class="comment_text"><p>@keong Just pass data as an object:</p><p>data: {<br>          username: function() {<br>            return $("#username").val();<br>          },<br>          email: function(){<br>            return $("#email").val();<br>          }<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712881">30</a> by keong
		posted on 6/2/2011 at 5:21 AM
		</div>
		<div class="comment_text"><p>Hi Dave</p><p>   I try to used this way but it seem not worked..</p><p>   I also try to used firebug but have no idea how to used it.. will need some time to study how to used firebug too~ &gt;&lt;</p><p>   Anyway.. thank for your reply, will try you suggestion later.</p><p>Regard<br>keong</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712888">31</a> by Raymond Camden
		posted on 6/2/2011 at 5:25 AM
		</div>
		<div class="comment_text"><p>Video on how to use Firebug: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.developria.com%2F2009%2F06%2Fquick-video-example-of-firebug.html%3A2Z7d9MEt3xq2qW1w_BZvv2lzAFU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.developria.com/2009/06/quick-video-example-of-firebug.html">http://www.developria.com/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712884">32</a> by Bri Garrett
		posted on 6/10/2011 at 8:13 PM
		</div>
		<div class="comment_text"><p>So, I've been trying desperately to get this to work...</p><p>This is my jquery:</p><p>$("#addForm").validate({<br>	   errorContainer: "#error",<br>	  rules: {<br>		  faculty: {<br>			remote:  "management_val.cfm"	<br>		  }<br>         },<br>	 messages: {<br>		 faculty: "x" 	 <br>	 }</p><p>   });</p><p>I've been looking at it in firebug and it doesn't seem to be sending anything...but I can't figure out why it's not sending anything. All the names are correct, jquery.validate and jquery are included, and it's in a $(document).ready(function).</p><p>Any insight would be great! :)<br>(I'm kind of a rookie with jquery)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712882">33</a> by Bri Garrett
		posted on 6/10/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>Update: I tested it on a normal form and it works, so I think the fact that I have the field using autosuggest might be what's conflicting. It's bound to a query that identifies valid names for the field...<br>(The form is used to add registered faculty to a department.)</p><p>Do you think that is problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712883">34</a> by Raymond Camden
		posted on 6/11/2011 at 1:37 AM
		</div>
		<div class="comment_text"><p>Possibly. Is it online where we can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712885">35</a> by keong
		posted on 6/15/2011 at 1:52 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>Thank for your firebug video. Very usefully for me.</p><p>btw, do you have time take a look for my jquery form validation issue ?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforum.jquery.com%2Ftopic%2Fjquery-form-validation-plugin-issue-please-help%3AOjX87BO_XJnh2RgVZpVvZB3afP4&amp;cuid=3321886" rel="nofollow noopener" title="http://forum.jquery.com/topic/jquery-form-validation-plugin-issue-please-help">http://forum.jquery.com/top...</a></p><p>I try to figure out this few days but no luck.</p><p>Anyway, thank for your time and have a nice day..</p><p>Regard<br>keong</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712889">36</a> by keong
		posted on 6/16/2011 at 2:08 PM
		</div>
		<div class="comment_text"><p>Bri Garrett</p><p>  Maybe you can try below code :</p><p> remote: {<br>              url: "&lt;cfoutput&gt;#application.http#&lt;/cfoutput&gt;app/excel_upload/act_check_manager_respond_time.cfm",<br>              type: "post",<br>              data: { //3<br>                key: function() {<br>                  var date1 = $("#CFB_Date_Sub").val();<br>  		            var date2 = $("#Date_Resolved").val();<br>                  var action_reason = $("#lastname").val();<br>                  if (action_reason == ''){<br>                    jsaction_reason_check = "Yes"<br>                  }else{<br>                    jsaction_reason_check = "No"<br>                  }<br>                  var jointValue = jsaction_reason_check  + "|" + date1  + "|" + date2;<br>                  return jointValue ;<br>                }<br>              }//3<br>            }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712890">37</a> by dmitry
		posted on 8/2/2011 at 1:37 AM
		</div>
		<div class="comment_text"><p>If you have a form with lots of form elements, it seems like double work asking a user "Please Select Credit Card Type" in both coldfusion and jquery. I wonder if it's possible to fuse jquery validation into coldfusion logic so as to avoid repeating yourself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712891">38</a> by Raymond Camden
		posted on 8/2/2011 at 1:41 AM
		</div>
		<div class="comment_text"><p>cfform does that a bit (it's not jquery though) but at the end of the day, you're going to be doing both. I think it's ok though to have "good" errors in jQuery, and "ugly" errors server side. Ie, if you want to demand JavaScript support, you can/should still validate server side, but you can have simpler uglier output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712892">39</a> by Matthew
		posted on 10/26/2011 at 7:51 PM
		</div>
		<div class="comment_text"><p>I used jQuery Validation for a form with the silly assumption nobody would have javascript disabled. I like your method and want to implement it in my form which saves to a database.<br>Currently my form action goes to a second 'processing.cfm' page for db insert. Do you think there is a way to get your method working with a separate processing page? Or do I just need to move my db insert script onto the form page and replace your cfmail script?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712893">40</a> by Raymond Camden
		posted on 10/27/2011 at 4:53 AM
		</div>
		<div class="comment_text"><p>"Do you think there is a way to get your method working with a separate processing page? " Errr... well, the whole point of this is for _client_ side validation. It's easy to do validation server side with CF, but it's a different topic really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712896">41</a> by Matthew
		posted on 10/27/2011 at 4:34 PM
		</div>
		<div class="comment_text"><p>I guess my question should have been, "In your example how would you add that form data to a database once it has passed the client side validation?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712895">42</a> by Raymond Camden
		posted on 10/27/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>Once client side validation is done, the form submits as normal. So at that point... it's just a regular form post to ColdFusion. Makes sense, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712900">43</a> by Matthew
		posted on 10/28/2011 at 12:08 AM
		</div>
		<div class="comment_text"><p>I'm obviously missing something because the form would not submit as normal. The form action takes the client back to that form page where it checks if there are no errors, then sends an email and redirects to the thanks page. But that redirect doesn't pass any form variables. So any db insert would have to take place within the cfif where the email is sent. Right?</p><p>At least that is what I did and it is working with JavaScript enabled or disabled. So thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712901">44</a> by Raymond Camden
		posted on 10/28/2011 at 1:51 AM
		</div>
		<div class="comment_text"><p>A cflocation can't pass form vars - you are right. Why not do the db insert before the redirect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712898">45</a> by Chris Bowyer
		posted on 4/5/2014 at 4:35 PM
		</div>
		<div class="comment_text"><p>Very cool! Never knew about the remote method before. Only issue is, it doesn't work for optional fields - even if no length is true e.g.</p><p>&lt;cfif structKeyExists(url, "telephone")&gt;<br>  &lt;cfif not len(url.telephone) or reFind("^[0][2378]\d{8}$", url.telephone)&gt;<br>    &lt;cfoutput&gt;true&lt;/cfoutput&gt;<br>    &lt;cfelse&gt;<br>    &lt;cfoutput&gt;false&lt;/cfoutput&gt;<br>  &lt;/cfif&gt;<br>&lt;/cfif&gt;</p><p>Would love to be able to get around this. Can you or anyone else help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712899">46</a> by Raymond Camden
		posted on 4/5/2014 at 4:40 PM
		</div>
		<div class="comment_text"><p>I'm confused - so you are saying that if the field is optional, but you are using remote logic to validate it, the remote check never fires?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712903">47</a> by Chris Bowyer
		posted on 4/5/2014 at 6:11 PM
		</div>
		<div class="comment_text"><p>If required is true, everything fires and functions as expected, but required true will not accept an empty value even when validated as true (as sort of expected), so the empty option remains required.</p><p>If required is false or not stipulated, no validation fires when clicking the submit button immediately after loading the form, although it does fire and function correctly when clicking in each individual field. In addition, successive submissions turn validation on and off like switch. In short, like a bit of a traffic jam.</p><p>Hope that is enough to go on, it's a bit of a brain hemorrhage I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712897">48</a> by Raymond Camden
		posted on 4/7/2014 at 4:26 AM
		</div>
		<div class="comment_text"><p>"but required true will not accept an empty value even when validated as true"<br>I'm sorry, but I have no idea what this means. You said, if required is true, it won't accept an empty value... which is obvious, right? I'm totally not getting it.</p><p>Can you rephrase this whole thing? :) (Or maybe someone else in the thread groks it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712904">49</a> by Chris Bowyer
		posted on 4/7/2014 at 4:55 PM
		</div>
		<div class="comment_text"><p>I was pretty tired the other morning, so it was difficult to see the forest for the trees. In short, however, the standard seems that remote validation must be required and the string must have length. Mind you, I am led to believe there is a way around this, but not being a jQuery guru doesn't help. What I was trying to do at the time, was run a regular expression, however, I have since found you can add methods with additional-methods.js included in the download, or write your own e.g.</p><p>jQuery.validator.addMethod("telephoneAU", function(value, element) {<br>return this.optional(element) || /^[0][2378]\d{8}$/.test(value);<br>}, "Please specify a valid Australian telephone number.");</p><p>Anyway, my problem is now solved.</p><p>Thanks for all the cool tutorials.</p></div>
	</div>
</div>
		