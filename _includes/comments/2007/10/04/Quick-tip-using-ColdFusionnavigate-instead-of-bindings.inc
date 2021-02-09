
<div class="comment" id="c_1713672792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672792">1</a> by Scott Stroz
		posted on 10/5/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>I have come to really like ColdFusion.navigate() and ColdFusion.AJAX.submitForm()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672791">2</a> by James Edmunds
		posted on 10/5/2007 at 6:18 PM
		</div>
		<div class="comment_text"><p>ColdFusion.navigate() is very, very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672796">3</a> by Victor
		posted on 10/6/2007 at 11:11 PM
		</div>
		<div class="comment_text"><p>When I run the code it complains about:<br>Attribute validation error for tag CFDIV.  <br>The tag requires the attribute(s): BIND.  <br> even though the BIND attribute is not mandatory</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672790">4</a> by Raymond Camden
		posted on 10/7/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>Victor, are you running the FINAL version of CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672794">5</a> by Victor
		posted on 10/8/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>As far as I know yes. I have version: 8,0,0,171647</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672797">6</a> by Raymond Camden
		posted on 10/8/2007 at 5:41 PM
		</div>
		<div class="comment_text"><p>I don't think so. My v is:</p><p>8,0,0,176276</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672795">7</a> by Victor
		posted on 10/8/2007 at 6:05 PM
		</div>
		<div class="comment_text"><p>Did you apply the last hot fix?<br>I did but I had an error and had to reverse back to the original installation. I will try to re-install it and see if it fixes the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672798">8</a> by Raymond Camden
		posted on 10/8/2007 at 6:11 PM
		</div>
		<div class="comment_text"><p>Not yet, but my V is higher than yours. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672799">9</a> by Victor
		posted on 10/9/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>Indeed it was.</p><p>I had to re-install CF8 and now my V is like yours :)</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672800">10</a> by Don
		posted on 9/1/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>So once a cfform is submitted, how do I get the original cfform to show and not just the return back from the form handler? And how do I navigate to any specific tab in a cflayout? AND is this the right place to ask this? (Sorry, been all over the net and can't find answers to these questions)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672801">11</a> by Raymond Camden
		posted on 9/2/2009 at 4:32 AM
		</div>
		<div class="comment_text"><p>The second question is the easiest. You don't navigate _to_ a tab. You can select a tab. Check the CF AJAX reference docs for that API. If you want a tab with a form to post to itself, it should be pretty easy. If I remember right, a CFFORM based form inside a tab will perform an ajax based post to itself. Have you tried it yourself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672802">12</a> by Ranga
		posted on 6/17/2010 at 5:34 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing the code. I was using &lt;CFDIV BIND="source.cfm?hid={hiddenid}" /&gt;. The problem was the DIV never refreshed when the hidden field was updated. CFDIV refreshes with no issues when the same field was changed to a text field. So, instead of cfdiv bind, I used the approach in this page and was able to refresh contents of the CFDIV tag.</p><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672803">13</a> by Mik Muller
		posted on 9/4/2010 at 1:21 AM
		</div>
		<div class="comment_text"><p>Here's a funky one... how would you use ColdFusion.navigate() to refresh a CFDIV if you don't know what was currently *in* the CFDIV?</p><p>For example. You may have a CFDIV you use as a generic container to display messages from various feeds by stuffing a variety of CFM files into a singular ID:</p><p>ColdFusion.navigate('/feedOne.cfm','divGeneric');<br>ColdFusion.navigate('/feedTwo.cfm','divGeneric');<br>ColdFusion.navigate('/feedTwo.cfm?mode=hoohah','divGeneric');</p><p>If you needed to refresh 'divGeneric' with whatever was last used... would you use something like this...?</p><p>ColdFusion.navigate(document.getElementById("divGeneric").value,'divGeneric');</p><p>My guess is no, since the DOM doesn't know what CFM file was used to create the current content.</p><p>Hmm... keep a variable in the SESSION scope?</p><p>It would be extremely handy if the CFDIV remembered what last went into it so we had a ColdFusion.navigate.(last,'divGeneric');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672804">14</a> by Raymond Camden
		posted on 9/4/2010 at 1:25 AM
		</div>
		<div class="comment_text"><p>I'd just store it a JS variable. Every time you want to change dix X to url Y, use a simple function that remembers Y and does the ColdFusion.navigate for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672805">15</a> by CJ
		posted on 3/31/2011 at 6:24 PM
		</div>
		<div class="comment_text"><p>I am trying to make a registration form and check Username availability on the fly. I have it working with ColdFusion.navigate, but I want the colorize the result. If it is available, I want the text to display green, if already used then display red.  Any ideas on how to do this?</p><p>Here is my code:</p><p>From the form:<br>&lt;cfinput type="Text" name="Username" style="width:125px;" maxlength="25" required="Yes" message="You Must Enter a User Name" onFocus="this.value='';"&gt;&lt;cfdiv id="AvailabilityDiv" /&gt;&lt;cfajaxproxy bind="javascript:loadDiv({Username})"&gt;&lt;/div&gt;</p><p>cfc call:<br>&lt;script&gt;<br>				    	function loadDiv(value) {<br>				            // Change the contents of the CFDIV<br>				            ColdFusion.navigate('live-checkuseravailability.cfc?method=getData&amp;UserAvail='+ value, 'AvailabilityDiv');<br>				    	}<br>					&lt;/script&gt;</p><p>And my CFC:<br>&lt;cfcomponent&gt;<br>      &lt;cffunction name="getData" returnType="string" access="remote"&gt;<br>            &lt;cfargument name="UserAvail" type="string" /&gt;</p><p>			 &lt;cfquery name="chkUsername" datasource="#application.DSNName#"&gt;<br>				SELECT * <br>				FROM UserAvail<br>				WHERE Username = '#UserAvail#'<br>	        &lt;/cfquery&gt;</p><p>			&lt;cfif chkUsername.RecordCount GTE 1&gt;<br>            	&lt;cfreturn "Username Already exists"&gt;<br>			&lt;cfelse&gt;<br>				&lt;cfreturn "Username available to register"&gt;<br>			&lt;/cfif&gt;<br>      &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>Any help would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672807">16</a> by Raymond Camden
		posted on 4/1/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>Not the most elegant, but in your return just wrap the string in a class.</p><p>&lt;cfreturn "&lt;span class='green'&gt;Username available&lt;/span&gt;"&gt;</p><p>This assumes you have a class for green (and red, etc) in your template.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672809">17</a> by CJ
		posted on 4/1/2011 at 1:34 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>But when I do that line of code like this:<br>&lt;cfreturn "&lt;span class='green'&gt;Username available to register"&lt;/span&gt;&gt;</p><p>I get this error:</p><p> Error retrieving markup for element AvailabilityDiv : Invalid CFML construct found on line 14 at column 95. [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672810">18</a> by Raymond Camden
		posted on 4/1/2011 at 1:37 AM
		</div>
		<div class="comment_text"><p>You out the closing span outside of the string. Move your last quote to after the end of the span.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672808">19</a> by CJ
		posted on 4/1/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>thanks, guess another set of eyes are good. But now I have another issue. It displays the whole string 	<br>&lt;span class='green'&gt;Username available to register&lt;/span&gt; in the div area, not the "Username available to register" in green</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672806">20</a> by Raymond Camden
		posted on 4/1/2011 at 1:49 AM
		</div>
		<div class="comment_text"><p>Well that's odd - you should be able to return HTML to the div. Let me test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672811">21</a> by Raymond Camden
		posted on 4/1/2011 at 1:51 AM
		</div>
		<div class="comment_text"><p>Oh, I think I know your issue. Before I get into it, try this test for me and then I'll explain. change</p><p> ColdFusion.navigate('live-checkuseravailability.cfc?method=getData&amp;UserAvail='+ value, 'AvailabilityDiv');</p><p>to</p><p> ColdFusion.navigate('live-checkuseravailability.cfc?method=getData&amp;returnformat=plain&amp;UserAvail='+ value, 'AvailabilityDiv');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672813">22</a> by CJ
		posted on 4/1/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>Awesome... That works. So what does this mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672814">23</a> by Raymond Camden
		posted on 4/1/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p>Your code said, in English:</p><p>"ColdFusion, I want you to navigate, ie, load, the result of calling this CFC method."</p><p>By default, when you run a CFC method remotely, it returns WDDX, an XML version of the result. If you were to open that URL in your browser and view source, you woulda seen an XML version of the string.</p><p>When I had you add "returnformat=plain", it was telling ColdFusion to not do ANYTHING with the result, but rather just return it as is.</p><p>This only works with simple results. You couldn't return an array like that.</p><p>You can stop reading now - what follows is sermon. ;)</p><p>Typically though you don't return layout in a CFC. I'd have called the CFC method and have it return 0 or 1, with 0 being the bad result, and 1 the good, and your front end code would handle displaying the appropriate message. Your CFC - typically - should be a black box of business logic: "If this username OK? YES OR NO - Period." Stuff like "what class do I use to render a good output" would be a concern of the front end.</p><p>End of Sermon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672815">24</a> by CJ
		posted on 4/1/2011 at 2:23 AM
		</div>
		<div class="comment_text"><p>Thank you very much and thank you for the explanation and your time.</p><p>I see what you are saying and I actually tried a few things and that seems to be what I got working. What I was struggling with was where I get the result, I guess what variable holds the result. I tried a few things and kept getting errors, so that Is when I did it the "wong" way, but it worked. I see what you are saying and that would be a lot better. I just did not know how to do it.</p><p>I have done CF for many years, but some areas I still have a ton to learn. Again, Thanks for your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672817">25</a> by Raymond Camden
		posted on 4/1/2011 at 2:30 AM
		</div>
		<div class="comment_text"><p>You should not feel like you did it the "wrong" way- and sorry if I came off too strongly. I'd just say "Not recommend normally" instead of "wrong". Your code is working now - that's the critical thing. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672819">26</a> by CJ
		posted on 4/1/2011 at 2:50 AM
		</div>
		<div class="comment_text"><p>No problem, I did not take offense and I agree. If I can ask you one more question, now that I have been thinking about it since I wrote my last comment, how would I find the value of Yes or No passed back from the CFC the way you said to do it? Sorry for taking up so much of your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672818">27</a> by Raymond Camden
		posted on 4/1/2011 at 5:39 PM
		</div>
		<div class="comment_text"><p>Well, ColdFusion.navigate is basically doing a "Load this crap into a div". In order to call a CFC and "work" with the result, you would need to do something a bit different.</p><p>1) If you want to stick with CF's Ajax stuff, you can look at cfajaxproxy. It allows you to turn a CFC into a JavaScript object. You would then be able to make calls on methods and work with the results directly.</p><p>2) Myself - I don't make use of CF's front end Ajax stuff. I use jQuery instead. I'd use jQuery's ability to run a HTTP request and work with the response.</p><p>Obviously I'm talking high level here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672816">28</a> by CJ
		posted on 4/2/2011 at 5:21 PM
		</div>
		<div class="comment_text"><p>Thanks for the response.</p><p>I will have to do some studying on what you said. I appreciate the feedback and direction. Got some learning to do.</p></div>
	</div>
</div>
		