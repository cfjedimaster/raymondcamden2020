
<div class="comment" id="c_1713676065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676065">1</a> by todd sharp
		posted on 1/9/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>Occasionally I'll just wrap all my random/util type UDF's into a CFC and throw that in the application scope like any other CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676067">2</a> by Raymond Camden
		posted on 1/9/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>Ditto Todd. I'll call it utils.cfc, and place it in the app scope for front end views that need it, and send a copy to CFCs that need it.</p><p>On reflection, I think that's kind of better - cuz sometimes you need those simple UDFs in CFCs.</p><p>Maybe. Still on the fence I guess. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676063">3</a> by Tony
		posted on 1/9/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>Thank you so much for answering my questions (and so quickly too)!  Those answers helped a great deal...I appreciate it.  I actually did end up finding the custom tag article you referenced just after I sent my initial questions, so I apologize for the repeats.</p><p>Thanks again!<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676074">4</a> by Tony
		posted on 1/9/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>Thanks for the additional input.  I'll definitely test out both methods to discover what I prefer.</p><p>Are there specific situations I should consider where one should consider one method over the other, or is it more a preference approach?</p><p>Thanks again!<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676066">5</a> by Raymond Camden
		posted on 1/9/2008 at 9:00 PM
		</div>
		<div class="comment_text"><p>In Todd's way, if a CFC needs the methods, it has access to it. You can pass the CFC into the other CFC. In my way, it wouldn't quite work. Technically a CFC method can use the Request scope, just like any other CF file, but you don't want to break encapsulation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676073">6</a> by Tom Mollerus
		posted on 1/9/2008 at 9:24 PM
		</div>
		<div class="comment_text"><p>@Ray-- while I also use the technique of using a custom tag to provide a layout "wrapper" for web pages, I have includes inside of the custom tag which call much of the layout (e.g. header and footer). The reason I don't include the layout code in the custom tag is to try to separate logic from presentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676057">7</a> by Will B.
		posted on 1/9/2008 at 9:50 PM
		</div>
		<div class="comment_text"><p>While I don't typically push frameworks, I've been thus far impressed with Coldbox's layout features.  I was easily able to transition a project I had started some time ago to ColdBox and take advantage of that feature, also using pure CSS layouts.  Here's a rundown on the layout stuff, specifically:<br>  TinyURL (Preview-style):<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fpreview.tinyurl.com%2F28qb6e%3ANDtyB3QPq_kaK-79EYv9FfbYhtE&amp;cuid=3321886" rel="nofollow noopener" title="http://preview.tinyurl.com/28qb6e">http://preview.tinyurl.com/...</a></p><p>Coldbox primary setup can be found here:<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.ColdboxFramework.com%3A7OMccJ1orH4OoH29mLp9PJRRB1Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ColdboxFramework.com">http://www.ColdboxFramework...</a></p><p>Neat stuff, gotta tell you.  One of my former bosses, Rob Gonda, is in on the project.  But Luis is the brains behind it, and it's pretty snappy for me, thus far.</p><p>And, honestly, I will *never* do a project again without Coldspring.  I am a Coldspring fanboy, no doubt.</p><p>- Will B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676062">8</a> by Joshua Curtiss
		posted on 1/9/2008 at 11:34 PM
		</div>
		<div class="comment_text"><p>:gasp!: Britney's IQ lower than Paris'? I'm sad. Britney will always have a soft spot in my heart, no matter how crazy she is. Lol! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676064">9</a> by Matt Bogdanovich
		posted on 1/12/2008 at 11:24 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am another person converting, better late then never.  In application.cfm, I have always reset path structure in every directory with an application.cfm.  Then refered to the balance of the applation with an include of the main application.cfm.  What is the cleanest way to handle this?</p><p>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676051">10</a> by Raymond Camden
		posted on 1/13/2008 at 12:06 AM
		</div>
		<div class="comment_text"><p>Matt, can you describe again what you are doing? I don't quite get it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676070">11</a> by Matt Bogdanovich
		posted on 1/13/2008 at 1:11 AM
		</div>
		<div class="comment_text"><p>In my old application.cfm I would have variables like:</p><p>&lt;cfset adminbase="../"&gt;<br>&lt;cfset basepath="../../"&gt;</p><p>Then of course as you go deeper into the site I would reset paths in the the application.cfm with a &lt;cfinclude template="application.cfm" above the resets, to reflect the correct path back to these locations.  How would I do this with application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676056">12</a> by Raymond Camden
		posted on 1/13/2008 at 1:28 AM
		</div>
		<div class="comment_text"><p>Um, well, if I get you right, you want to know what the base path of your current application. You can use this in your onApplicaitionStart:</p><p>&lt;cfset application.basepath = getDirectoryFromPath(getCurrentTemplatePath())&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676069">13</a> by Matt Bogdanovich
		posted on 1/13/2008 at 2:34 AM
		</div>
		<div class="comment_text"><p>That gives me a basis to start..thanks for the great article...Great stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676060">14</a> by Tony Piscotti
		posted on 1/15/2008 at 9:21 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Just wanted to check in on the issue of instantiating my model cfc's in Application.cfc.</p><p>I try what you suggested in terms of setting it in the onApplicationStart method of Application.cfc as such:</p><p>&lt;cffunction name="onApplicationStart" returnType="boolean" output="false"&gt;<br>  &lt;cfset application.dsn = "myDSN" /&gt;<br>  &lt;cfset application.userModel = createObject("component", "path.to.cfc.users") /&gt;<br>   &lt;cfreturn true&gt;<br>&lt;/cffunction&gt;</p><p>Then in my view template, I set a local variable to use the query from this model, for example:</p><p>&lt;cfset qry = application.userModel.getUsers() /&gt;</p><p>&lt;cfoutput query="qry"&gt;#output code here#&lt;/cfoutput&gt;</p><p>But this throws an error when I call the query to display results.</p><p>However, when I use the createObject() method to set it up directly in the template instead of Application.cfc (I did this just to test what would happen) it works fine.  Obviously though I do not want to instantiate the model in my view template, I want to set it in Application.cfc.  The site I'm working on is in my wwwroot folder, and I'm 99.9% certain I'm using the correct dot path to my cfc (unless I'm still missing something).</p><p>Any ideas what might be happening?  If you need additional code to see or clarification, just let me know.</p><p>Thank you!<br>- Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676055">15</a> by Raymond Camden
		posted on 1/15/2008 at 5:15 PM
		</div>
		<div class="comment_text"><p>The question is - what error is occurring?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676068">16</a> by Tony Piscotti
		posted on 1/15/2008 at 9:18 PM
		</div>
		<div class="comment_text"><p>Yes...the error...of course (sorry about that!)</p><p>Well, funny...now it is actually working.  I'm on a different computer now, but set everything up the exact same way (as far as I can tell) and now it works as initially expected.</p><p>However, the error I was receiving last night was:</p><p>"Element USERMODEL is undefined in a Java object of type class [Ljava.lang.String; referenced as..." (etc)</p><p>I'm not sure what I missed from my set up last night and how I set it up today on another machine (which is almost identical in all respects).  My guess is that I simply missed something in my Application.cfc file last night.</p><p>I'll copy the working version I have now and will bring it home for comparison to further investigate on my own.</p><p>Thanks!<br>-Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676071">17</a> by Raymond Camden
		posted on 1/15/2008 at 9:22 PM
		</div>
		<div class="comment_text"><p>I can tell you exactly what you did. I bet you modified your app.cfc AFTER you had run your code once. Your app was already loaded, so CF didn't rerun onApplicationStart. There are 3 simple ways around that.</p><p>1) Rename your application: &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "something new"&gt;<br>I don't like doing that as I like my names to make sense.</p><p>2) Restart CF. That's a bit slow though. And it's like using a flame thrower to kill a roach.</p><p>3) Add code to onRequestStart that does:<br>&lt;cfif isDefined("url.reinit")&gt;&lt;cfset onApplicationStart()&gt;&lt;/cfif&gt;</p><p>THen you just go to your site and add ?reinit=rayrocks to the URL. This will then rerun your onApplicationStart code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676076">18</a> by Tony Piscotti
		posted on 1/15/2008 at 9:44 PM
		</div>
		<div class="comment_text"><p>Ah!  I remember another developer explaining the re-init approach (option #3 on your list) some time ago now that you bring it up.  I will definitely implement that approach.</p><p>I realize this is basic stuff...I'm just trying to get ramped up as quickly as possible to get out of all my old bad habits and hacks.</p><p>Thanks again for all your help on this!</p><p>-Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676072">19</a> by Tony Piscotti
		posted on 1/16/2008 at 2:02 AM
		</div>
		<div class="comment_text"><p>I hate bugging you about this one again, especially after it all seemed to be working fine for a bit.</p><p>It seems now whenever I make a change to my Application.cfc file, the same errors keep coming back.  Either I get:</p><p>"Element USERMODEL is undefined in a Java object of type class [Ljava.lang.String; referenced as..." (etc)</p><p>...or I get:</p><p>"Could not find the ColdFusion Component..." (and I haven't moved any files or directories since it was working fine)</p><p>A couple of times just renaming the app (<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>) helped, but then the error got triggered again.</p><p>Per your suggestion, I added the following in my App.cfc as well:</p><p>&lt;cffunction name="onRequestStart" returnType="boolean" output="false"&gt;<br>  &lt;cfif isDefined("url.reinit")&gt;&lt;cfset onApplicationStart() /&gt;&lt;/cfif&gt;<br>  &lt;cfreturn true /&gt;<br>&lt;/cffunction&gt;</p><p>...and then I trigger that through the url as ?reinit=true</p><p>That helped once or twice but now it seems nothing is resetting the app for me.</p><p>I then took the flamethrower to the roach...to no avail.</p><p>Is there something that will keep from the App.cfc settings  getting cached?  It seems to happen so often I must have a setting wrong or something.</p><p>Thanks!<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676061">20</a> by Tony Piscotti
		posted on 1/16/2008 at 2:32 AM
		</div>
		<div class="comment_text"><p>In case the question comes up, I will also note that I changed my application timeout setting to a minute during the development phase:</p><p>&lt;cfset this.applicationTimeout = createTimeSpan(0,0,1,0) /&gt;</p><p>...to see if that would help.  Nothing though.</p><p>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676059">21</a> by Raymond Camden
		posted on 1/16/2008 at 4:05 AM
		</div>
		<div class="comment_text"><p>Well, it sounds like multiple issues there. Let's focus on one. What is the exact issue right now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676053">22</a> by Tony Piscotti
		posted on 1/16/2008 at 5:27 AM
		</div>
		<div class="comment_text"><p>I may have spoken too soon.  It seems once I changed the applicationtimeout time (and after I reset a couple other things...restarted CF server, did a reinit again) NOW it seems to be behaving consistently.</p><p>Thanks!<br>Tony</p></div>
	</div>
</div>
		