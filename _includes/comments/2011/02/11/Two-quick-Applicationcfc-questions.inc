
<div class="comment" id="c_1713729657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729657">1</a> by Chris Tierney
		posted on 2/11/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for these two Q/A's. Your first answer brought to light something I didn't know. However I'm not sure exactly what that means. Can you provide an example of the differences? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729656">2</a> by Raymond Camden
		posted on 2/11/2011 at 7:48 PM
		</div>
		<div class="comment_text"><p>The differences between what? The This Scope and the Application Scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729659">3</a> by Chris Tierney
		posted on 2/11/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>Yes - the this scope and the application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729658">4</a> by Raymond Camden
		posted on 2/11/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>I feel like I failed in my explanation. :) In terms of Application.cfc, the This scope expresses the _behavior_ of the Application. What's the name - what are custom tags paths - whats the common datasource name. Etc.</p><p>Application scope variables are simple name/value pairs. <a href="http://disq.us/url?url=http%3A%2F%2FApplication.foo%3A1SOzmxkeZb-noMyM-y6q_zaW1q8&amp;cuid=3321886" rel="nofollow noopener" title="Application.foo">Application.foo</a> = "goo". Etc. They do not impact how the application behaves at the server level. (Technically they can impact your app if your app does different things based on application variables, but I'm talking about _built in_ behavior.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729660">5</a> by Carlos
		posted on 2/11/2011 at 8:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I have a (dumb?) question related to this:</p><p>Back when there was no Application.cfc. only Application.cfm, there were occasions when it was proper to cfinclude – in Application.cfm – another  Application.cfm that was higher up in the directory hierarchy. Can this somehow be done when using Application.cfc?</p><p>I have not been able to figure out how to do this, the result being that I have separate Application.cfc’s in different folders, but sometimes one is practically a duplicate of the other.</p><p>I hope I am making myself clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729666">6</a> by Bill King
		posted on 2/11/2011 at 8:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>For the second question about looking for a session variable within a module, would it not be a better practice to send in the session var as an attribute of the cfmodule as follows?</p><p>&lt;cfmodule template="myapp/default.cfm" lhm="#session.lhn#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729668">7</a> by Raymond Camden
		posted on 2/11/2011 at 8:52 PM
		</div>
		<div class="comment_text"><p>@Bill King: If we assume that you build some custom tag API for the App, then yes, you would want to pass the session var like that. The other app cannot/should not know about your session vars.</p><p>@Carlos: App.cfc _can_ extend other App.cfcs. I know Ben Nadel just recently did a blog post on this and Sean Corfield also has. Personally - I've never really needed the functionality myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729667">8</a> by Carlos
		posted on 2/11/2011 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, exactly what i was looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729665">9</a> by Brian O.
		posted on 2/12/2011 at 3:29 AM
		</div>
		<div class="comment_text"><p>Perhaps Ken, your second questioner, just needs to define his variable as a session or application variable (depending on variable's lifespan needs) in a root level Application.cfc. I use the extends attribute to 2 levels (its limit at least in CF8) in my main work application web portal of a couple dozen systems/applications that I help to develop/manage. It works great and I'm able to inherit or override (using 'super') the methods and properties 1 to 2 levels up as needed depending on the system. I have not tried to go in the other direction, but I suppose it would be possible. I'm not saying Ken should do it this way, but it is probably an option. I have a root level application.cfc that we'll say exists at a mapping of 'webroot'. In the first lower level folder like Ken we'll call myapp, I have an Application.cfc with &lt;cfcomponent extends="webroot.Application" ... &gt; . I also have an application with a subfolder we'll say called mysubapp with an Application.cfc with &lt;cfcomponent extends="webroot.myapp.Application" ... &gt; . Using these I'm able to reduce the duplication of methods and properties and take advantage of OO inheritance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729671">10</a> by Gary Funk
		posted on 2/12/2011 at 5:14 AM
		</div>
		<div class="comment_text"><p>Here is a follow up question. Is there wa way for application A to share application variables with application B?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729670">11</a> by Brian O
		posted on 2/12/2011 at 5:59 AM
		</div>
		<div class="comment_text"><p>I would look at using cfinterface, which I have yet to need, if you are talking a 2-way transaction, which I assume. One way could be done many different ways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729661">12</a> by ppshein
		posted on 2/13/2011 at 4:17 PM
		</div>
		<div class="comment_text"><p>Here is application.cfc<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "MyFancyName" /&gt;</p><p>Here is index.cfm in the same root<br>&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>#&lt;/cfoutput&gt;</p><p>Got error. I cannot convince why. So, I've tried the another way like in index.cfm<br>&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.name%3Ai8aeVM7xNZRAw0zYhgFVu15QHAg&amp;cuid=3321886" rel="nofollow noopener" title="application.name">application.name</a>#&lt;/cfoutput&gt;</p><p>Got error also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729663">13</a> by ppshein
		posted on 2/13/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Sorry, Ray. I got the answer.</p><p>Another question is when I defined &lt;cfset this.datasource = "PPShein" /&gt; in application.cfc, how can I get this.datasource value in index.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729664">14</a> by Ken Caldwell
		posted on 2/14/2011 at 3:21 AM
		</div>
		<div class="comment_text"><p>@Ray:  Thank you for your help.  In the end I just needed to ensure that the session variable was defined.</p><p>@Bill King:  I did pass through the lhm, but it is a hard coded value.  As there is no Application.cfc (in fact there is only one cfm page) at this level there is no session scope so you can not pass through a session var.</p><p>@Brian O:  This is two distinct applications, well really a base level Intranet home section.  That is menu, banner footer and home page.  with the home page containing the other application. It's a notice board.</p><p>On another note, the reason I used cfmodule in the first place was because using cfdiv with bind the spry dataset would not load.</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729662">15</a> by Raymond Camden
		posted on 2/14/2011 at 4:57 AM
		</div>
		<div class="comment_text"><p>@PPshein: Unfortunately, there is no way to get the datasource value set in the DSN. The whole point of that feature (normally) is to set it so you don't need it elsewhere. If you need it, I'd just set it in the app scope as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729672">16</a> by Peter Hoopes
		posted on 2/14/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>For Ken, aside from creating another level of application.cfc (which another poster posited), another option is to simply pass the session variable you need as an argument in the cfmodule tag. Then the myapp/default.cfm can read from the arguments struct and go from there.</p><p>That is, unless I missing something here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729675">17</a> by Ken Caldwell
		posted on 2/15/2011 at 3:14 AM
		</div>
		<div class="comment_text"><p>@Peter Hoopes:  The session variables are created when a user/admin logs into the system.  Because of the nature of the system I would have to create a structure with default values and pass that through as an argument.  It is easier just to check that the session vars are defined.  Initially I just assumed that cfmodule would invoke the application.cfc, which I now know it will not.</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729677">18</a> by Misty
		posted on 2/21/2012 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I have a question here,</p><p>we are on colfusion 9 but not using the Application.cfc, we are still using Application.cfm</p><p>Now the thing is we have cfmails defined everywhere and i do not know at how many places, we want to use the this.smtpserversettings feature of cf9 in application.cfm file, how will i declare this in application.cfm file</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729678">19</a> by Raymond Camden
		posted on 2/21/2012 at 6:03 PM
		</div>
		<div class="comment_text"><p>You can't do it. I'd recommend just simply switching to Application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729681">20</a> by Misty
		posted on 2/21/2012 at 6:15 PM
		</div>
		<div class="comment_text"><p>u mean to say simply there is no other way</p><p>if i can create application.cfc and onrequeststartmethod call my application.cfm, will that work and will it have any side effects</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729679">21</a> by Raymond Camden
		posted on 2/21/2012 at 7:25 PM
		</div>
		<div class="comment_text"><p>You should be able to. Don't forget to remove the cfapplication tag from application.cfm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729685">22</a> by Misty
		posted on 2/21/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>ok, so like the above i an do the &lt;cffunction name="onrequestStart()"&gt;</p><p>&lt;cfinclude template="application.cfm"&gt;</p><p>&lt;/cffunction&gt;</p><p>thopugh this will not effect the sessions and other variables defined in the website</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729686">23</a> by Raymond Camden
		posted on 2/22/2012 at 9:34 AM
		</div>
		<div class="comment_text"><p>Well, sure, that may work. It really depends on whats in your file, but it may work. Again, remove the &lt;cfapplication&gt; tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729684">24</a> by Pankaj
		posted on 2/14/2013 at 4:51 PM
		</div>
		<div class="comment_text"><p>@ppshein In Cf9 you can get this.datasource value in index.cfm via #application.getApplicationSettings().datasource#</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635325019">
	<div>
		<img src="https://disqus.com/api/users/avatars/gordonfrobenius.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635325019">25</a> by Gordon Frobenius
		posted on 4/21/2016 at 1:57 PM
		</div>
		<div class="comment_text"><p>"Not to make things confusing - but when you name your application, ColdFusion copies the name to the Application scope in a key called applicationname."</p><p>So I'm assuming they are not consistent about this.  For example: I want to use this.secureJSON and this.secureJSONPrefix.  But when I do, in my protection function which actually does the check, I cannot access application.secureJSON or application.secureJSONPrefix.  So I'm going to have to create both sets of variables (this &amp; application) and set the identically.  Do you know of a better way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635384051">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635384051">26</a> (In reply to <a href="#c_2635325019">#25</a>) by Raymond Camden
		posted on 4/21/2016 at 2:30 PM
		</div>
		<div class="comment_text"><p>If you are talking about reading application settings like this, ColdFusion added GetApplicationMetadata just for that purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635535696">
	<div>
		<img src="https://disqus.com/api/users/avatars/gordonfrobenius.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635535696">27</a> (In reply to <a href="#c_2635384051">#26</a>) by Gordon Frobenius
		posted on 4/21/2016 at 3:54 PM
		</div>
		<div class="comment_text"><p>Just what I needed.  I need to keep up with new crap like this better.  You da man.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635562462">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635562462">28</a> (In reply to <a href="#c_2635535696">#27</a>) by Raymond Camden
		posted on 4/21/2016 at 4:10 PM
		</div>
		<div class="comment_text"><p>No problem. To be fair, I think this was added in CF10, so not terribly new.</p></div>
	</div>
</div>
		