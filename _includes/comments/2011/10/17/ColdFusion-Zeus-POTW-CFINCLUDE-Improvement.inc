
<div class="comment" id="c_1713735765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735765">1</a> by Vole
		posted on 10/17/2011 at 5:58 PM
		</div>
		<div class="comment_text"><p>Is there an option yet to cfinclude a file without parsing it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735768">2</a> by Raymond Camden
		posted on 10/17/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Interesting. Why? If you include something that has no CFML in it, it will still be _checked_, but obviously will execute instantly. I don't know about the Java byte code generated, but I'd have to assume it would be generated as a simple string to be included or somesuch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735771">3</a> by Andrew Scott
		posted on 10/17/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>I am going to assume this new feature is going to be similar to PHP's include once?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735772">4</a> by Raymond Camden
		posted on 10/17/2011 at 6:28 PM
		</div>
		<div class="comment_text"><p>As I don't use PHP, I can't comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735767">5</a> by Andrew Scott
		posted on 10/17/2011 at 6:31 PM
		</div>
		<div class="comment_text"><p>I'll be honest I really can't see a use case for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735766">6</a> by inj
		posted on 10/17/2011 at 8:04 PM
		</div>
		<div class="comment_text"><p>Runonce added only on for cfinclude tag or will be and on cfscript version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735769">7</a> by Raymond Camden
		posted on 10/17/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>@inj - it should be in both. I'll confirm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735770">8</a> by Raymond Camden
		posted on 10/17/2011 at 8:34 PM
		</div>
		<div class="comment_text"><p>It breaks - I'll log it internally and make sure it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735774">9</a> by Nic Tunney
		posted on 10/17/2011 at 8:39 PM
		</div>
		<div class="comment_text"><p>How about we deprecate cfinclude and teach people to use custom tags instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735773">10</a> by Raymond Camden
		posted on 10/17/2011 at 8:42 PM
		</div>
		<div class="comment_text"><p>Because that doesn't make sense Nic. An include is different than a custom tag. And while I use includes much less now that I've got CFCs, I certainly still use includes from time to time. There is no reason one should deprecate the other.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735775">11</a> by Nic Tunney
		posted on 10/17/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>I'll betcha I haven't used a cfinclude since 2005.  Between CFCs and custom tags, the architecture makes so much more sense than including snippets via includes.  Now this is just my opinion of course, but I can't think of a single reason why I would opt for an include.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735776">12</a> by Andrew Scott
		posted on 10/17/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>Custom tags DO NOT work in CFSCRIPT, currently in some of my applications I use include to include templates for my emails, a custom tag is way over kill for this situation and an include is just the ticket.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735778">13</a> by Raymond Camden
		posted on 10/17/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Personally, I only use custom tags for layout now. &lt;cf_layout&gt;foo&lt;/cf_layout&gt; Their ability to be 'wrapped' like that is nice.</p><p>I think Andrew's point about 'templates' is a great one. While I try to avoid HTML/layout/etc in CFCs, email templates are a good example of when I break that rule. In my script based CFC I'll include in a template that makes use of tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735777">14</a> by Andrew Scott
		posted on 10/17/2011 at 8:49 PM
		</div>
		<div class="comment_text"><p>@Ray and @Nic I use includes all the time with styling emails in all my cfc's, within a CMS that allows me to create a template for different emails. I can just include this template into my MVC framework, and if the client so desires they can change the look and feel of that template at any time.</p><p>All I do is educate them that there is a set of tokens they can use, to customize the email template.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735779">15</a> by Andrew Scott
		posted on 10/17/2011 at 8:51 PM
		</div>
		<div class="comment_text"><p>I should also point out that some people also use include to include extra methods into Components as well. I don't like that idea, but that doesn't mean others can't do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735782">16</a> by Raymond Camden
		posted on 10/17/2011 at 8:52 PM
		</div>
		<div class="comment_text"><p>Btw - I'm doing a presentation in 2 weeks on 'extending CF', and I talk about all of this. Thanks Andrew for good examples of cfinclude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735783">17</a> by Matt Gersting
		posted on 10/17/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>Is it just me or does this seem like it would only affect people writing poor code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735781">18</a> by Raymond Camden
		posted on 10/17/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>I think that's a bit much Matt. In a large system with lots of developers, something like this could come about by accident.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735780">19</a> by Matt Gersting
		posted on 10/17/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>Let me rephrase - it sounds like this is built to prevent something from happening that should be designed out, rather than worked around.  If it's a large system and it's already happening by accident shouldn't the answer be to, you know, actually fix the logic that causes the unwanted repetition?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735786">20</a> by Jeff Greenwell
		posted on 10/17/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>@ Andrew .. "Custom tags DO NOT work in CFSCRIPT" .. actually you can script custom tags, in fact, that is the only way I write custom tags. I can present example if you like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735792">21</a> by Andrew Scott
		posted on 10/17/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>@Matt, I have to agree I don't see a use case for this either. And the only use case would be if you chose to use Application.cfm over Application.cfc, unless someone can show me a really good use case, I am not convinced this is something CF needs either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735791">22</a> by Jeff Greenwell
		posted on 10/17/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>@ Matt .. on the surface, I am in agreement. I am still trying to think of a use for this, and about all I can come up with is that it would prevent and infinite loop (ie: including the parent in a child), otherwise, I am at a loss as to the usefulness, but perhaps something will come to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735793">23</a> by Jon Cavanaugh
		posted on 10/17/2011 at 10:01 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, I'm excited for this new series!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735796">24</a> by Andrew Scott
		posted on 10/17/2011 at 10:02 PM
		</div>
		<div class="comment_text"><p>@Jeff, I think you are confusing writing custom tags in cfscript with writing custom and using them in cfscript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735794">25</a> by Jeff Greenwell
		posted on 10/17/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>@Andrew, ah, my misunderstanding, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735795">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735795">26</a> by Aaron Longnion
		posted on 10/17/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Others have eluded to it, but I wanted to ask directly?</p><p>@Ray - from you, or others at Adobe, what is the use case(s) for this feature, other than "situations where they've accidentally included the same template twice."?</p><p>(sounds like a mistake/bug/design problem, not a real use case)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735798">27</a> by Me
		posted on 10/17/2011 at 11:51 PM
		</div>
		<div class="comment_text"><p>I love how people feel something is useless just because they don't use it or can't find a use for it (while at the same time pointing out that it's already in PHP).  You may be too good for this minor feature enhancement, but let's not be so arrogant as to think no one else will benefit from it (even if it is just a nice way of helping people work around their own sloppy code).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735797">28</a> by Matt Gersting
		posted on 10/18/2011 at 12:05 AM
		</div>
		<div class="comment_text"><p>"I love how people feel something is useless just because they...can't find a use for it" - wouldn't that loosely be the definition of useless?</p><p>I think there are two things here: First, if you really look back most of are saying we don't see the use case, but we're asking what it is.  If a worthwhile one exists, awesome! I'd love to hear about it.</p><p>Secondly, yes, I think there may actually be some weird suspicion on this one and my guess is that it goes back a long time to the deep-seated hurt we CF developers have endured as second-class citizens of the "real" programming world. I think many of us would consider it, well, questionable, to add in features that could be considered to promote lazy programming.</p><p>I'm probably over-thinking it though.  New features yay!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735799">29</a> by Raymond Camden
		posted on 10/18/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>Nice to know my first entry on Zeus is causing such fun discussion. ;)</p><p>I agree - in general - that the 'problem' here is something that could be solved other ways. However, you can say that about almost anything. Shoot, even cfquery solves a problem that could be solved in Java. ;)</p><p>I fully expect that not everything I cover in my blog series will be useful to everyone. I think that's ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735800">30</a> by Matt Williams
		posted on 10/18/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>Dang it Ray! If at least 60% or your readers don't want the feature, please don't blog about it!</p><p>And please include a poll so we can vote for the features you are presenting, regardless of the fact that they are *already* in there.</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735801">31</a> by Devin
		posted on 10/18/2011 at 1:07 AM
		</div>
		<div class="comment_text"><p>As is usually the case, people don't understand a use for something until they need it. :)</p><p>Let's say you had a template that could be executed in a "standalone" mode or in the context of a larger application. In either case it needs access to some external logic (be it UDF's, email templates, whatever... doesn't matter).</p><p>This external code is already "included" in the larger application (because other parts of the app need it as well), but the template still needs to "include" it for when it's run in standalone mode. So, I'm sure you can see how the external code would end up included twice when the template is executed as part of the application.</p><p>You could, of course, setup some flags to determine wether it's already been included, but now you don't have to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735806">32</a> by Devin
		posted on 10/18/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>You have an application in which your framework is includeding external code into the request most of the time, but not all the time (maybe it's admin-level code based login permissions). A particular template needs that external code included no matter what. It can do it's own include to guarantee it's available using runonce to make sure it wasn't included twice.</p><p>I can think of many more uses off the top of my head. Should I add them?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735802">33</a> by Felix
		posted on 10/18/2011 at 1:32 AM
		</div>
		<div class="comment_text"><p>Wow nice disscussion. I think many of you are professionals, but  there are still beginners or other user who are not familiar in deep OO programming or Java and so on. So i like to see such features! And i think it makes really no sence to integrate a poll here. Sorry guys you are not reflecting the whole CF community. I'm sure there are many CF developers who are not blogging or commenting threats :-).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735804">34</a> by Edward Trudeau
		posted on 10/18/2011 at 6:16 AM
		</div>
		<div class="comment_text"><p>Possible use case: you have a CMS that assembles pages from content blocks.  Each block may or may not need specific pieces of JavaScript code (e.g., jQuery plugins, etc.), but you'd like to not only ensure you include each only once, but you'd like to concatenate them into a single .js file to make your site blazingly fast. You could set up dozens of flags for every possible plugin, but now you don't have to - you can just let CF remember for you, and let each content block contribute the code it needs via a cfinclude with runonce=true. Contrived? Mebbe.</p><p>/ejt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735803">35</a> by Andrew Scott
		posted on 10/18/2011 at 6:21 AM
		</div>
		<div class="comment_text"><p>Now that is a very good use case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735805">36</a> by Michael
		posted on 10/18/2011 at 12:32 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this enhancements.</p><p>While runonce is definitly a good idea I think it should go a bit farther:<br>RUNONCE="application|request|function|loop ..."<br>So the include is only made once per application (until onApplicationEnd) or once per request or once per function call (if inside a CFFUNCTION tag it'll be included again next time the function is called), or only once in a CFLOOP so you don't have to CFIF around</p><p>There are other arguments/attributes I'd like to see for CFINCLUDE:<br>- ARGUMENTCOLLECTION (or similar): the included file gets the arguments in attributes or caller scope so you don't have to use variables from the caller (same principles as for custom tags)<br>- timeout (ms): When including a custom template in my software I don't want my software to be bogged down by messy code in an include<br>- savecontent="var": to save the output in a variable which is a shorthand of a SAVECONTENT tag around the Include<br>- silent="yes|no": Any output made by the include is suppressed</p><p>M.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735808">37</a> by Raymond Camden
		posted on 10/18/2011 at 2:54 PM
		</div>
		<div class="comment_text"><p>Hmm, well, I'm not sure some of your ideas here make sense.</p><p>runonce=application: If you do the include in onApplicationStart, then that works already. Ditto for onRequestStart.</p><p>argumentcollection: cfinclude does not do any black boxing. There are no attributes or caller scope.</p><p>I could see savecontent/silent being used though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735807">38</a> by JP
		posted on 10/18/2011 at 9:20 PM
		</div>
		<div class="comment_text"><p>Interesting comments! Here's a use:</p><p>I've got about 5 .cfm files (written in cfscript) that contain a bunch of utility functions for my application framework. I call cfinclude when I need to include these functions in my code. For example... appUtils.cfm... contains a bunch of stuff that almost all my code needs (like getAppFSRoot ()... which I need when I'm writing files to the server)</p><p>I'm currently very careful where I include these files. But there have been times when one of those files is already included, but another piece of code tries to include it again. CF throws an error at this point, and then I have to go in and remove that cfinclude call. Pain in the ass, and I wish I didn't have to worry about it. Now I can use this attribute and not worry about it.</p><p>I see this feature very much like using conditional includes when writing in code in C so that when you include a library it won't get included again in another part of your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735811">39</a> by Jeff Greenwell
		posted on 10/19/2011 at 12:36 AM
		</div>
		<div class="comment_text"><p>@Edward ... hey, that could be a good use.  I already do that sort of thing, but I manage it will a simple stack attached to the request scope that manages all JS and CSS that is automatically combined into single compressed format blocks. At the end of each request, one of the final steps is to gather up all JS and CSS in each stack, combine them into a single JS or CSS block, and minify before sending to the browser.  The application framework handles this all automatically.</p><p>I suppose this new CF feature could be used as you suggest however, achieving similar results perhaps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735809">40</a> by Michael
		posted on 10/19/2011 at 12:46 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Its not that the include is in application.cfc but in some component. The first time this component or custom tag is called the include works, that could be hours or days after the application started. But, okay, request or function is the main usage.</p><p>argumentcollection is not meant for black boxing. Its just to avoid the usage of variables from the caller (if the name or value changes and all that) just provides a sort of interface that won't change. It would be incredible easier to find attributes.lang in cfm files than simply "lang" or even "variables.lang".<br>I think the attributes scope would do best, the mention of caller scope was completely wrong - sorry I need a sleep ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735812">41</a> by Raymond Camden
		posted on 10/19/2011 at 2:31 PM
		</div>
		<div class="comment_text"><p>You are wrong about argumentCollection. The only thing it is for is to provide another way to pass arguments to a tag or udf. Since CF does not allow for</p><p>&lt;cf_foo x=1 &lt;cfif something is true&gt;y=2&gt;&gt;</p><p>We allow you to create a structure instead:</p><p>&lt;cfset s = {}&gt;<br>&lt;cfset s.x = 1&gt;<br>&lt;cfif something&gt;<br>  &lt;cfset s.y = 2&gt;<br>&lt;/cfif&gt;<br>&lt;cf_something attributeCollection=s&gt;</p><p>UDFs/CFC methods support the same (although it's argument collection).</p><p>You can use this right now with the cfinclude tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735810">42</a> by Michael
		posted on 10/19/2011 at 5:47 PM
		</div>
		<div class="comment_text"><p>Sorry, my explanation was very unclear.</p><p>Here's an example:<br>&lt;cfinclude template="test.cfm" myvar="111"&gt;</p><p>At the moment you get "Attribute validation error for tag CFINCLUDE. It does not allow the attribute(s) MYVAR. The valid attribute(s) are TEMPLATE. "</p><p>I don't want to "expose" my variables (names) to an included (custom) template (I know, the template has access to it and can dump it).<br>All I wanted is "myvar" in the attributes scope in test.cfm - so next time my variable name changed, the included template mustn't be changed also if it uses the attribute instead.</p><p>(Sorry if this is a bit off topic to "runonce")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735815">43</a> by Raymond Camden
		posted on 10/19/2011 at 5:49 PM
		</div>
		<div class="comment_text"><p>Michael, you are _not_ talking about an include. You are talking about a custom tag. An include is not meant to be black boxed. An include runs in context of the file that includes it. If you want black boxing, just use a custom tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735814">44</a> by Andrew Scott
		posted on 10/19/2011 at 5:51 PM
		</div>
		<div class="comment_text"><p>@Michael, you need to be thinking about Custom Tags there and not cfinclude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735813">45</a> by Patrick Heppler
		posted on 10/19/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>bit offtopic<br>A function / tag to run CFML from a query would be nice. <br>&lt;cfquery name="storedCode"&gt;<br>SELECT cfml FROM table LIMIT 1<br>&lt;/cfquery&gt;<br>&lt;cfset runCFML(storedCode.cfml[1])&gt;</p><p>*hint* You can do something similar in PHP by the way ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735818">46</a> by Raymond Camden
		posted on 10/19/2011 at 10:24 PM
		</div>
		<div class="comment_text"><p>You can do that a bit slowly using the VFS. Take the code - save it - cfinclude it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735816">47</a> by Mike Oliver
		posted on 10/20/2011 at 8:30 PM
		</div>
		<div class="comment_text"><p>This is slightly off-topic, so I apologize, but Michael's idea about savecontent or silent added to the cfinclude (combined with the discussion of runonce) made me wonder.</p><p>I know we have the bug reporting/tracking site for ColdFusion, but is there/could there be an enhancement request/discussion site?</p><p>Something where someone requests something like the savecontent and silent added to cfinclude with whatever possible use cases they think it would have.  The rest of the community could comment/discuss/expand that request.  If you allowed some kind of voting structure, it could give Adobe an idea of what enhancements to ColdFusion would be popular among the community.  That way, when Adobe was planning what changes to make for a future release (11,12,etc), they could see "hey, everybody would really like to see X".</p><p>If there is already a good way to do that, what is it?  I'm admittedly not as involved in the CF community as I would like to be, so I may just not know of it.  It also may not be a big deal, but I'm curious none the less.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735817">48</a> by Raymond Camden
		posted on 10/20/2011 at 8:31 PM
		</div>
		<div class="comment_text"><p>The public bug tracker _does_ let you post ideas. Just mark your item as an Enhancement Request.</p></div>
	</div>
</div>
		