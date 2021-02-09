
<div class="comment" id="c_1713669679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669679">1</a> by John Ramon
		posted on 8/6/2007 at 3:46 AM
		</div>
		<div class="comment_text"><p>Cool Ray, quick question, a little off topic but I want to move to a CF 8 server you have any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669676">2</a> by Raul Riera
		posted on 8/6/2007 at 4:29 AM
		</div>
		<div class="comment_text"><p>Why not use the cfinput tags?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669680">3</a> by Raymond Camden
		posted on 8/6/2007 at 4:56 AM
		</div>
		<div class="comment_text"><p>No reason. I don't normally use cfform as I don't like to rely on JS checking when I have to do server side anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669677">4</a> by Raymond Camden
		posted on 8/6/2007 at 3:41 PM
		</div>
		<div class="comment_text"><p>John, I used to use <a href="http://disq.us/url?url=http%3A%2F%2Fhosting.com%3Aw5oZQdXiLFrb3Jzem6vP8ElxP6c&amp;cuid=3321886" rel="nofollow noopener" title="hosting.com">hosting.com</a>, and was very happy with them. I have a new host now, but I don't name him as he isn't quite ready yet for new business.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669690">5</a> by Brian Swartzfager
		posted on 8/6/2007 at 3:49 PM
		</div>
		<div class="comment_text"><p>I never liked the cfinput JS validations either.  And now with CF8, you can write your server-side validation code in a CFC and leverage that same code client-side using cfajaxproxy, so you only have to maintain one set of validation scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669678">6</a> by DK
		posted on 8/6/2007 at 5:57 PM
		</div>
		<div class="comment_text"><p>cool, when you don't specify it does cfform use the ColdFusion.Ajax.submitForm on its own?</p><p>I ask because another good 'oh yeah' is ColdFusion.Ajax.submitForm cannot handle file fields. I'm currently re-working some prototyping because of that :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669683">7</a> by Raymond Camden
		posted on 8/6/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>I haven't tried. You try and post back. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669687">8</a> by JC Anderson
		posted on 8/13/2007 at 7:50 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I'm trying to use a checkbox that submits using onclick inside the code you provide.</p><p>&lt;cfinput type="checkbox" name="test" onClick="form.submit();" value="1"&gt;test</p><p>Unfortunately, the page reloads.  How do you get it to load inside the tab?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669689">9</a> by todd sharp
		posted on 8/13/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>JC:  An explanation as to why that doesn't work:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2007%2F8%2F13%2FAjax-Form-Submission-Revisited-And-Advice-Needed%3AX5vi79ggVEQZ1zhQFvUhaub0POc&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2007/8/13/Ajax-Form-Submission-Revisited-And-Advice-Needed">http://cfsilence.com/blog/c...</a></p><p>Is it absolutely necessary to submit the form that way?  It could be hacked but IMO it would get ugly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669691">10</a> by JC Anderson
		posted on 8/13/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>Todd - Nope, not absolutely necessary, but something I stumbled across.  Thanks for the detailed explanation.</p><p>I also have a CFC with a function that contains dynamically generated JScript.  If I use it in an AJAX container, it fails miserably, too.</p><p>Gotta keep in mind that those containers are limited and keep it simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669684">11</a> by Michael White
		posted on 8/24/2007 at 6:45 PM
		</div>
		<div class="comment_text"><p>I'm having a little trouble figuring out navigation after submitting a form. usually, the page I start with stores a variable in the session scope (#Session.Source#) so that when the processing page is done it knows where to return me. I have a "content" cfdiv that has a form where I choose a customer, when I submit that the processing page checks to see if that customer has more than one business unit. If they do, I use a cflocation to go to go to the business unit form. So far so good, still in the same cfdiv content container. But when I submit that form to its processing page and it uses the same cflocation URL="#Session.Source#") to return me whence I came the entire page is replaced instead of the cfdiv content. so my question is, how do I need to manipulate the #Session.Source# variable to always update the cfdiv? I tried using &lt;cfset Session.Source = "javascript:ColdFusion.navigate('/Dashboard.cfm','content');"&gt;<br>but cflocation doesn't seem to like that. maybe the syntax is wrong or maybe there's another way besides cflocation to send me on my way after the processing is done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669682">12</a> by Raymond Camden
		posted on 8/24/2007 at 7:05 PM
		</div>
		<div class="comment_text"><p>I read your comment twice and I don't get it. You said it works - then you said it didn't. Can you explain this again? I can't figure out the difference between your first case (which works) and your second case (which does not work).</p><p>And yes - you can't put anything but a valid URL (absolute or relative) in a cflocation.</p><p>Also - don't forget you can just post the form using ColdFusion.Ajax.SubmitForm(). No need to go anywhere really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669688">13</a> by Michael White
		posted on 8/24/2007 at 8:10 PM
		</div>
		<div class="comment_text"><p>the difference is whether there is a second level. if a customer has more than one business unit, I cflocation to the business unit form which only replaces the cfdiv contents (which is as expected), but when i return from the second form, the cflocation url="#Session.Source#" replaces the whole page. If the customer has only one business unit, i never go to the business unit form and the cflocation url="#Session.Source" returns me where I was and only replaces the cfdiv content (not the whole page)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669681">14</a> by Raymond Camden
		posted on 8/24/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>SO let me see if I get this right. In your div you load foo.cfm lets say. If foo.cfm sees you have one BU, it uses cflocation to send you to edit.cfm, which works fine.</p><p>If you have N BUs, you cflocate to a page where you ask a person to pick the BU. When they leave THAT page, you break out of the cfdiv.</p><p>SO my question is - on the page that displays the BUs, how do you let them pick a BU? Is it an HTML link? If so - you need to use AjaxLink to keep stuff inside the div. If it is a form, you need to use cfform to keep them in the div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669686">15</a> by Michael White
		posted on 8/24/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>I start at the dashboard. the layout has a cfdiv for cfmenu, cfdiv for header, cfdiv for content. I choose change customer from the cfmenu and the ColdFusion.navigate updates the content cfdiv with the customer form with a cfselect to choose customer, that submits to processing page which saves the selection and counts bu for that customer; if &gt;1 cflocation to bu form with cfselect. this submits to processing page, then cflocation to #Session.Source# to go back to original dashboard (hopefully all within the content cfdiv</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669692">16</a> by Raymond Camden
		posted on 8/24/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ok but in your "bu form with cfselect", are you sure it is "cfselect" and therefore a cfform?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669685">17</a> by Michael White
		posted on 8/24/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>that is all I ever use: cfform, cfinput, cfselect, etc.<br>on the cfmenu I also have a "Change Business Unit" menuitem that takes me directly to the BU form. I can change BU and come back to the dashboard all within the cfdiv. same BU form, just skip the customer form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669694">18</a> by Raymond Camden
		posted on 8/24/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>Truly odd. So your first form works, your second form does not. All I can suggest is poring over that form and being super-anal to make sure you aren't missing something obvious like a target= on the form.</p><p>Also consider maybe temporarily removing the form and replacing it with a ajaxlink to see if a GET op works ok. (ie, hard coded the BU)</p><p>Lastly, you can use COldFusion.Ajax.submitForm instead as I mentioned earlier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669695">19</a> by Michael White
		posted on 8/26/2007 at 12:06 AM
		</div>
		<div class="comment_text"><p>supposedly you can use ColdFusion.navigate to submit a form and direct the results to a container but I can't find any examples and I can't get that to work either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669697">20</a> by Michael White
		posted on 8/26/2007 at 1:06 AM
		</div>
		<div class="comment_text"><p>Here is another gotcha... suppose you have a form with three submit buttons on a cfform in a cfdiv named deleteMe,cancelMe,submitMe. if you make a change on the form and and click the "submitMe" button, which button gets saved to the form scope? well if you have a plain cfform and it's not part of a cfdiv layout, you get submitMe, but no matter which button I pressed on my cfdiv form I got deleteMe. the delete button was first on the form and it was inside a cfif tag to test if it was a new record or an edit. if it was a new record, the deleteMe button didn't exist so when I dumped the form I got cancelMe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669696">21</a> by Michael White
		posted on 8/26/2007 at 6:32 AM
		</div>
		<div class="comment_text"><p>I found a little thing buried in the dev guide that said when you are using a javascript function in a dynamic page like a cfdiv that you ColdFusion.navigate, you have to construct your javascript function declaration a little backwards. All the examples I was looking at had the common syntax: function functionName(arguments){code} but in my case I needed to do something like functionName = function(arguments){code}. now I'm able to get the ColdFusion.Ajax.submitForm and ColdFusion.naviagate to work in javascript functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669698">22</a> by Raymond Camden
		posted on 8/26/2007 at 7:45 PM
		</div>
		<div class="comment_text"><p>I wouldn't say "in a dynamic page" - but more, if you are writing JS code in a file that will be included via Ajax by another CF control, then you need ot use that format. I've blogged about this already I think. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669709">23</a> by Mike Sprague
		posted on 10/9/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>Has anyone discovered a way to DISABLE the feature that forces a CFFORM to submit an Ajax request when used inside a CFDIV or CFLAYOUTAREA?  I've run into multiple situations now where I do not want the submit/results to stay within the DIV or tab, especially with a CFDIV.  Other than changing the CFFORM to a FORM, and writing all my own validation, I can't find a way to stop it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669701">24</a> by Raymond Camden
		posted on 10/9/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Not that I know of - but you can use onSubmit and do the POST in the outer window. That should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669703">25</a> by joe
		posted on 5/5/2008 at 9:51 PM
		</div>
		<div class="comment_text"><p>This is a total hack job but, to get the select submit the form within the cflayout I used this on the select</p><p>onchange="<a href="http://disq.us/url?url=http%3A%2F%2Fdocument.yourFormID.yourSubmitID.click%3AiMDstjPUdo2JDPhAxROVD-6lPMs&amp;cuid=3321886" rel="nofollow noopener" title="document.yourFormID.yourSubmitID.click">document.yourFormID.yourSub...</a>();"</p><p>and I made my submit button hidden</p><p>input type="submit" name="yourSubmitID" id="yourSubmitID" value="Submit" style="visibility:hidden"</p><p>Is there a better way to submit a form on event without actually clicking a submit button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669710">26</a> by TD
		posted on 6/12/2008 at 8:12 PM
		</div>
		<div class="comment_text"><p>Are you able to set/reset your focus with this form inside a cflayout?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669707">27</a> by Melvin Taclibon
		posted on 4/22/2009 at 11:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Quick question regarding session variables on CFPOD.</p><p>1. I have a button that grabs the of a selected CFGRIDROW.-<br>2. The button execute an onclick function, and the function looks like this:<br>x = ColdFusion.getElementValue('FileGrid','myGrid','Directory');<br>ColdFusion.navigate('test_LoadFile.cfm?Directory=' + x + '&amp;' + 'Name=' + y + '&amp;' + 'Path=' + z,'DevContainer');</p><p>Here's my issue:</p><p>1. I tried to create a session table inside 'test_LoadFIle.cfm'. The code somewhat looks like this:</p><p>&lt;cfif isDefined('session.PlaceHolder')&gt;<br>&lt;cfset QueryAddRow(session.PlaceHolder,1)/&gt;<br>&lt;cfset QuerySetCell(session.PlaceHolder,"name","#<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>#")/&gt;</p><p>..... (and some other querySetCell)</p><p>&lt;cfelse&gt;</p><p>&lt;cfset session.PlaceHolder = QueryNew("name,path,directory")&gt;<br>&lt;cfset QueryAddRow(session.PlaceHolder,1)/&gt;<br>&lt;cfset QuerySetCell(session.PlaceHolder,"name","#<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>#")/&gt;<br>..... (and some other querySetCell)<br>&lt;/cfif&gt;</p><p>2. It looks like the 'session' table gets lost when I pick another value from my grid and add it to my session table. It will always execute the condition after &lt;cfelse&gt; in test_LoadFIle.cfm</p><p>I tried to create the session table in the main page, before CFPOD gets created. Same deal. It looks like everytime you use ColdFusion.navigate, it breaks the session.</p><p>Question is:</p><p>Do you know if there is any issue of session varaible break when using ColdFusion.navigate?</p><p>Thanks.</p><p>Melvin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669704">28</a> by Raymond Camden
		posted on 4/24/2009 at 4:34 PM
		</div>
		<div class="comment_text"><p>Did you perhaps disable cookies in your app? That is the only way I can think of the session being recreated. What happens if you use onSessionStart in your Application.cfc to set some random #? Do that, output it in test_loadFile, and see if it is changing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669705">29</a> by Melvin
		posted on 5/4/2009 at 6:25 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Your reply lead me to the solution to my issue. What I was doing initially was that I have a testing folder with all of my experiments. And this has no APPLICATION.CFC... jeeeeez!</p><p>So I created one, and tested it back. Session variables are retained using ColdFusion.navigate.</p><p>Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669708">30</a> by Tim
		posted on 11/10/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Can you use &lt;cfinput type=file&gt; inside a cfpod?  After posting, the file element is never in the form variable.<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669702">31</a> by Raymond Camden
		posted on 11/10/2009 at 2:30 AM
		</div>
		<div class="comment_text"><p>You can't - because cfpod loads it's content via Ajax, and you can't do (regular) file uploads via Ajax. Remember, all forms inside Ajax UI items like that try to post via Ajax, not a normal HTTP POST.</p><p>Well if I remember right, all CFFORMs do. A regular &lt;form&gt; may post to the entire window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669706">32</a> by GP
		posted on 10/14/2013 at 4:19 AM
		</div>
		<div class="comment_text"><p>I know this is a very dated response/question to this thread, but I am currently using CF8 and having a little trouble in a similar area as this topic covers.</p><p>Is it possible to have a CFFORM in one CFDIV but have it target a different CFDIV?</p><p>Basically I have a search form in the top CFDIV where people can input various criteria in various categories. I want the results of the search to show in the bottom CFDIV. I could get a similar effect by just processing the whole page, but I thought this would be slicker for users.</p><p>I have tried various ways to bind and then send the data using ColdFusion.Navigate to the second CFDIV, but none of those attempts have been successful thus far.</p><p>Thanks for any help or insight you could provide.</p><p>_I have access to CF9 if that version may have better functionality for this._</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669711">33</a> by Raymond Camden
		posted on 10/14/2013 at 4:26 AM
		</div>
		<div class="comment_text"><p>First: Please note that I *strongly* urge you to move away from cfdiv and cfform. That being said - here is an idea.</p><p>Simply remove the submit button from the top form, and make your second cfdiv bound to the form fields of the first. See the form binding stuff in the docs for more info.</p></div>
	</div>
</div>
		