
<div class="comment" id="c_1713713014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713014">1</a> by Sebastiaan
		posted on 2/16/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>I've been using Prototype for a while now, but seeing all the excellent examples you've come up with recently, I think I'll make the switch to jQuery when I rework n number of forms for a client during the next couple of weeks. This is really deadsimple (I say before having ventured into my task!) ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713011">2</a> by salvatore fusto
		posted on 2/16/2009 at 8:14 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>may be i've not understood requirements; if you set the job select as required, form is validated only if you select a job: your test4.html works this way.<br>but i think that your reader wants that jobs select in not a required field, but he wants that, if no job is selected, other job field became required: to do so you have not to validate job field, and validate other job field as you have done.<br>do you agree?<br>regards<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713024">3</a> by Raymond Camden
		posted on 2/16/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>Um, I'm having a real hard time parsing your English. If you mean, "he wanted the other field required if you selected other, but no other validation", then just remove required from job. That's it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713031">4</a> by salvatore fusto
		posted on 2/16/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>Hey Ray, <br>first of all, excuse my poor English.<br>What i mean is:<br>1)The "Name" field is rquired;<br>2)The "Other job" field is required if, and only if, user does not select any job from this select<br>so the rules are:<br>rules: {<br>name: {<br>   required: true,<br>   minlength: 2<br>}</p><p>,otherjob: {<br>   required: function(element) {<br>   return $("#cjob").val() == 'other'<br>   }<br>}<br>}<br>are these the required rules ?<br>regards<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713025">5</a> by Raymond Camden
		posted on 2/16/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>Right. My example goes a bit too far probably. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713021">6</a> by Jörn Zaefferer
		posted on 2/16/2009 at 9:26 PM
		</div>
		<div class="comment_text"><p>Your implementation is pretty much the way to go. You could probably replace the callback with a selector: required: "#cjob[value=other]".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713027">7</a> by Raymond Camden
		posted on 2/16/2009 at 9:29 PM
		</div>
		<div class="comment_text"><p>Wow, didn't know that style of selector worked. Nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713020">8</a> by Chris
		posted on 2/18/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!  Worked like a charm!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713026">9</a> by Patrick Flynn
		posted on 2/26/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>What if you want to set a default message for all required fields, would you have to specify the message for each individual field or is there a way to change the overall message for a required field? Essentially I prefer having a an asterisk show up upon validation rather than the message.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713032">10</a> by Raymond Camden
		posted on 2/27/2009 at 1:53 AM
		</div>
		<div class="comment_text"><p>Not sure if this is documented/supported/whatever, but you can manually set it at the plugin level:</p><p>jQuery.validator.messages.required = "*";</p><p>That would set the message for required. You would need to repeat it for email, url, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713022">11</a> by Byron Raines
		posted on 3/4/2009 at 9:04 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Enjoying these write-ups.  I've have the select validation working from your example.  If the "other" field is left blank as per the validation rules, it shows my error message, however the select box reverts back to (in my case) "Choose One".  So I have to reselect "Other".  Is this the correct behavior.  I can't seem to find anything about this in the docs.</p><p>Thanks</p><p>byron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713030">12</a> by Raymond Camden
		posted on 3/4/2009 at 9:08 AM
		</div>
		<div class="comment_text"><p>What browser? I'm not seeing that in OSX FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713023">13</a> by Byron Raines
		posted on 3/4/2009 at 10:13 AM
		</div>
		<div class="comment_text"><p>OK.  I just checked again and things are behaving properly.  Maybe I've been just staring at the screen to long or might have been refreshing the screen or something.</p><p>Anywho, thanks for getting back to me, and again for all your write-ups.  They are informative and helpful.</p><p>jQuery is very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713029">14</a> by Byron Raines
		posted on 3/4/2009 at 10:24 AM
		</div>
		<div class="comment_text"><p>Oh, by the way.  I have a situation where I have a list of yes/no questions.  If they answer 'yes' to a question, they must answer another question for the field.  Like:</p><p>var1:  yes/no  var1comment: text<br>var2:  yes/no  var2comment: text</p><p>on so</p><p>I know how to enable and validate the comment box.  Do I have to have a separate $('var1'), $('var2') for each one (I have many), or is there someway to consolidate that.  I was think there maybe someway using a "for each" type method, but not sure it works that way.</p><p>I guess a could do it with "regular" javascript functions with onClick on the &lt;input&gt;, but would like to try it with jQuery.</p><p>Maybe a write up if it can be done??</p><p>Thanks again</p><p>Byron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713028">15</a> by Raymond Camden
		posted on 3/4/2009 at 8:16 PM
		</div>
		<div class="comment_text"><p>I believe - stress believe - that the the rules portion must point to precise field sets, so you couldn't match _any_ yes/no block. I believe you would need to do this then with one of the events the plugin requires. I haven't dug into this yet, but I know you can do really customized stuff on submit. This is a great example. My time is a bit short this week, but I'll try to work up a demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713035">16</a> by Byron Raines
		posted on 3/5/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray.  Will look forward to it. I'll keep poking around to see what I can figure out.</p><p>Byron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713034">17</a> by Mark
		posted on 4/15/2009 at 4:28 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Thanks for the tutorial, its helped me a lot! I just want to know how to remove on submit validation. i just need on blur and key up.<br>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713033">18</a> by Mark
		posted on 4/15/2009 at 4:39 PM
		</div>
		<div class="comment_text"><p>Sorry I never looked around properly first<br>onsubmit:false does the trick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713038">19</a> by vandy
		posted on 6/8/2009 at 9:33 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have a user control on a page. In user control some fields have validation. I did the validations by using class properties, but I want to call some method on onsubmit of form. Since the validation occurs on onsubmit event of form, I am scared that the method I want to call may not be called. I can use submit behavior at the form level but I dont know what to do at the control level, I mean how to add methods to form's submit event from a control if we are using for validation of jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713040">20</a> by Gustavo
		posted on 8/11/2009 at 9:17 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, simple solution for forcing one selection.. by Jquery,  minlength: 1 is enought-</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713044">21</a> by Kevin
		posted on 9/22/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>Great code! I used your example and modified it to use checkboxes instead. Im new to jQuery dev, it took me forever to get it to work! Im sure it can be done simpler.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpsylicyde.com%2Fmisc%2Fjquery-validate%2Fdemo%2Ftest.html%3Ar_4jEgq-LsCL0ZK3tYTCQm3KeV0&amp;cuid=3321886" rel="nofollow noopener" title="http://psylicyde.com/misc/jquery-validate/demo/test.html">http://psylicyde.com/misc/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713049">22</a> by Aloel
		posted on 11/17/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>Is there a different format for validation of radio buttons? I think Kevin's example showed that checkboxes validate the same as text inputs. Am I correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713047">23</a> by Raymond Camden
		posted on 11/17/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>As far as I know, it should be the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713048">24</a> by Aloel
		posted on 11/18/2009 at 6:56 PM
		</div>
		<div class="comment_text"><p>Thanks! I finally got 8 forms all validated and working as expected!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713050">25</a> by Jeff Self
		posted on 9/16/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>Wow!  This is exactly what I was looking for. Great job posting this, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713051">26</a> by P.
		posted on 10/27/2010 at 12:19 PM
		</div>
		<div class="comment_text"><p>For radio buttons, I used this:</p><p>,otherjob: {<br>    		required: function(element) {<br>				return ($("input[name='job']:checked").val()) == 'other';<br>			}<br>		}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713053">27</a> by Jeff
		posted on 11/19/2012 at 2:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Im using the latest jquery 1.8, im trying to validate my select using your example, I couldnt get it to work. is it compatible  with jquery mobile?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713056">28</a> by Raymond Camden
		posted on 11/19/2012 at 7:53 PM
		</div>
		<div class="comment_text"><p>jQuery Mobile updates the DOM quite a bit, so while you _can_ do validation with JQM (I've got another blog post on it - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F7%2F30%2FExample-of-form-validation-in-a-jQuery-Mobile-Application%29%3AVMCFMyl-mC2Wfu1NIWC6RD32AAY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/7/30/Example-of-form-validation-in-a-jQuery-Mobile-Application)">http://www.raymondcamden.co...</a> you would need to modify the code you see here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713052">29</a> by mj
		posted on 1/22/2014 at 8:02 PM
		</div>
		<div class="comment_text"><p>hi raymond, i'm doing a form validation, pretty much alike yours. Difference is that I put an ok green icon when option is selected. Suppose I choose an option from the drop down menu. Because it is a required field an ok green icon appears. Then I change it to the default option (like "select an option") but the ok green icon is still there when it should be in red saying "please select an option". What am I missing? Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713057">30</a> by Raymond Camden
		posted on 1/22/2014 at 10:04 PM
		</div>
		<div class="comment_text"><p>I honestly don't remember how the plugin handles selects, but it should be possible to tell it the first option is not valid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713055">31</a> by Raymond Camden
		posted on 1/22/2014 at 10:05 PM
		</div>
		<div class="comment_text"><p>mj: I went to the demo page I linked to (the plugin demo, not mine) and his select does exactly that. If you select the first (empty) option it considers it an error. Please see his demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713058">32</a> by mj
		posted on 1/24/2014 at 7:46 PM
		</div>
		<div class="comment_text"><p>@RaymondCamden thank you Raymond, I could make it work, I was just missing this part of the code:</p><p>$('.chosen, .chosen-with-diselect', form2).change(function () {<br>   form2.validate().element($(this)); <br>            });<br>    }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713054">33</a> by Zad Imam
		posted on 4/17/2014 at 7:36 PM
		</div>
		<div class="comment_text"><p>Ray, I know this post is a bit outdated, but somewhere along the line your jquery library files got lost and your demos no longer work :-(.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713059">34</a> by Raymond Camden
		posted on 4/17/2014 at 7:38 PM
		</div>
		<div class="comment_text"><p>Yeah - I ran into this with another post a bit ago. Hopefully folks will just download. :)</p></div>
	</div>
</div>
		