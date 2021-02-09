
<div class="comment" id="c_1713656414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656414">1</a> by todd
		posted on 8/17/2006 at 11:05 PM
		</div>
		<div class="comment_text"><p>Good tips here. It would be nice to have a quick guide for custom tags.  Does one exist somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656415">2</a> by Raymond Camden
		posted on 8/17/2006 at 11:09 PM
		</div>
		<div class="comment_text"><p>I could hit the little Print button and add ot my guides. Actually, I can just add the link. Count to ten and it will be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656417">3</a> by Terrence Ryan
		posted on 8/17/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray.  This is really valuable to those of us that are considering reevaluating the way they do encapsulation.</p><p>I do have one question though. It's about CFmodule Here (CFMX Coding Standards if the link doesn't come through)  <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fwtg%2Fpublic%2Fcoding_standards%2Fperformance.html%3AWo-Uk78QVG_NXvYd9D-smfmOzN0&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/wtg/public/coding_standards/performance.html">http://livedocs.macromedia....</a> Adobe says Don't use CFmodule.</p><p>Now this was written By Sean Corfield I believe.  If the two of you disgree, I don't know who to believe. :)</p><p>In a more answerable question, wouldn't using cfimport achieve your goals without using cfmodule?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656420">4</a> by Raymond Camden
		posted on 8/17/2006 at 11:59 PM
		</div>
		<div class="comment_text"><p>In general I rank Sean's skills over mine, but I'll disagree here. I believe he was worried about the performance. Custom tags are DEFINITELY slower than UDFs/CFCs. However, I don't think they are a cause for concern for 95% of you (you being my readers), and like anything, if performance is a concern, you want to be careful about _all_ the code you write.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656421">5</a> by Terrence Ryan
		posted on 8/18/2006 at 12:04 AM
		</div>
		<div class="comment_text"><p>So if you're already taking the performance hit for Custom tags in the first place, you might as well go whole hog, and use less ambigous code.</p><p>That makes sense to me.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656418">6</a> by Raymond Camden
		posted on 8/18/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>Less amigous? Sorry - can you restate that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656423">7</a> by Terrence Ryan
		posted on 8/18/2006 at 12:12 AM
		</div>
		<div class="comment_text"><p>I meant of course "ambiguous."</p><p>Being ambiguous on the other hand, was unintented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656426">8</a> by Steve Bryant
		posted on 8/18/2006 at 12:13 AM
		</div>
		<div class="comment_text"><p>I believe Sean argues for cf_ or cfimport syntax over cfmodule.</p><p>For my part, it depends on the application.</p><p>When using global custom tags for applications that have a relatively permanent home, I prefer to call custom tags from the custom tags directory using cf_ format.</p><p>If I am developing an application with an eye on distribution, I prefer cfimport so that I can specify the location of the tags more precisely.</p><p>The main advantage that I see of cfimport over cfmodule is readability and clarity when nesting tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656425">9</a> by Ben Nadel
		posted on 8/18/2006 at 12:14 AM
		</div>
		<div class="comment_text"><p>I have some issues with the whole return variable for custom tags... my feeling is that if it has a return variables, but not just make it UDF, that way you can explicitly use or not use the return value. In my head (which has issues of its own), custom tags are more for page output and the idea of a return variable seems a bit odd. I can understand it for backwards compatibility, but going forward in all the MX stuff and the OOP and the frameworks, does it really make sense to have custom tags that have return variables?</p><p>(ps. I am not attacking, I am geninuingly interested in this idea)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656427">10</a> by Raymond Camden
		posted on 8/18/2006 at 12:22 AM
		</div>
		<div class="comment_text"><p>Steve: My concern is that I may not know if the app will go to a single server or a hosted server. THerefore, I never trust cf_ syntax.</p><p>cfimport: I don't know why, but it never really turned me on. Maybe it's the fact that you must use the import on EVERY file that needs it.</p><p>Ben: I can definitely say that non-display custom tags and UDFs are pretty blurred (I mean the differences between them). I tend to keep my UDFs for shorter blocks of logic, while a more advanced logic block would go into a custom tag. Again though, I do -not- have hard rules for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656424">11</a> by Steve Bryant
		posted on 8/18/2006 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ben,</p><p>I don't know about Ray, but I have had custom tags that are primarily for output (a function well suited for a custom tag) but also need to return variable.</p><p>Ray,</p><p>I actually felt the same about cfimport until a recent project (that I finished up around the end of the month...) where I wanted to use some custom tags but cf_ syntax didn't have the flexibility.</p><p>I tried cfmodule, but it was just ugly as heck. I tried cfimport and found that I didn't like including it on every page, but it was still well worth the trouble (a surprising change of a long-held opinion for me).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656429">12</a> by John Farrar
		posted on 8/18/2006 at 12:32 AM
		</div>
		<div class="comment_text"><p>Are you sure that when someone calls CFC's in the taggy way of not actually creating an object and accessing it that custom tags are slower? I was thinking they were only faster, but not sure, when you actually create an instance and use the methods rather than &lt;cfinvoke...&gt; the CFC like it was a custom tag. (Please, guys who like CF Invoke... don't get heated... just trying to get a techincal answer, not start a flame war.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656431">13</a> by Ben Nadel
		posted on 8/18/2006 at 12:32 AM
		</div>
		<div class="comment_text"><p>I happen to love CFImport. I love that you can use good directory paths and it makes grouping tags sooo freakin' nice. For instance, I have a bunch of FORM tags that all have the prefix FORM:</p><p>&lt;form:tag disableonsubit="true"&gt;<br>  &lt;form:doubleselect name="" value="" .... /&gt;<br>  &lt;form:dateselectcalendar name="" ... /&gt;<br>&lt;/form:tag&gt;</p><p>I just think it makes reading and understanding the code soo much clearer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656432">14</a> by Raymond Camden
		posted on 8/18/2006 at 12:32 AM
		</div>
		<div class="comment_text"><p>Steve, what do you mean by flexibility? Whether you use cfimport, cf_, or cfmodule, you have the exact same features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656433">15</a> by Steve Bryant
		posted on 8/18/2006 at 12:37 AM
		</div>
		<div class="comment_text"><p>Sorry I was clear. I meant that cfmodule and cfimport are both are more flexible than cf_ inasmuch as I can specify the exact location of the file I want to use.</p><p>With cf_, ColdFusion has a set pattern it follows to find the file. I can't direct it to look where I want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656434">16</a> by Raymond Camden
		posted on 8/18/2006 at 12:38 AM
		</div>
		<div class="comment_text"><p>John, I'm not sure I read you right. CFINVOKE isn't slower if you use an instance. Ie</p><p>&lt;cfinvoke component="#fooo#"&gt;</p><p>versus</p><p>&lt;cfinvoke component="foo"&gt;</p><p>The second method will make a new CFC. The first one will use an existing CFC and won't have the startup cost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656436">17</a> by John Farrar
		posted on 8/18/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>I still like custom tags also... in fact we are working on some custom tags with spry. To me there is "more" power for nested attributes of nested tags in custom tags than there is with CFCs. It's not a case either one being the overall best... but rather which one is best for the task at hand. I like and use them both!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656438">18</a> by John Farrar
		posted on 8/18/2006 at 12:41 AM
		</div>
		<div class="comment_text"><p>Guess we are posting back to back Ray! LOL</p><p>That is kinda cool, might have used that tag more but I am one of those guys who likes to do CFScript... so I missed that implementation technique. THANKS!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656441">19</a> by Raymond Camden
		posted on 8/18/2006 at 12:41 AM
		</div>
		<div class="comment_text"><p>Steve: Gotcha.</p><p>John: Cool. You love Spry too, right?</p><p>I agree - nested tagd are very powerful if used correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656437">20</a> by John Farrar
		posted on 8/18/2006 at 12:42 AM
		</div>
		<div class="comment_text"><p>OK... how do we make the gravitars work Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656443">21</a> by Raymond Camden
		posted on 8/18/2006 at 1:26 AM
		</div>
		<div class="comment_text"><p>You have to register at <a href="http://disq.us/url?url=http%3A%2F%2Fgravatar.com%3AqgucOaVb_wSTka7rDcgIRlr8ETM&amp;cuid=3321886" rel="nofollow noopener" title="gravatar.com">gravatar.com</a>. GOod luck. It took me 2 months.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656448">22</a> by Alan
		posted on 8/18/2006 at 6:34 PM
		</div>
		<div class="comment_text"><p>It wasn't quite two months ago that I registered at Gravatar.  I got the email saying mine was rated G, obviously, if you can actually see it here.  Cool idea.  (Looking forward to the day we can all pick which comments to skip by glancing at the icons next to them...j/k)<br>Alan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656444">23</a> by Mark Drew
		posted on 8/18/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>Ahh, yes.. good posting Ray, I had forgotten about those pesky custom tags (after doing lots of spectra, I am glad to be away from them!) but yes, it reminded me that I need to add some functionality to &lt;cfmodule to give you the attributes of the custom tag that you have defined.</p><p>I shall look into this as a future feature</p><p>MD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656442">24</a> by Nick
		posted on 8/19/2006 at 7:56 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>What would you say about referencing request or application variables within the custom tag?</p><p>Should all variables used in the custom tag be passed in as attributes?</p><p>Nick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656447">25</a> by Steve Bryant
		posted on 8/19/2006 at 10:25 PM
		</div>
		<div class="comment_text"><p>Nick,</p><p>I can't speak for Ray, but I would say that using any shared-scope variables from within a custom tag is generally bad form as it break encapsulation.</p><p>If you pass them in as attributes, of course, that is OK.</p><p>You will find some exceptions. For example, I sometimes use request variables to set defaults for attributes. I do make sure that my custom tags work if none of the request variables exist. I also make sure to name the request variables such that it is unlikely to cause a name conflict (I name put the variables in a structure named for the custom tag).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656446">26</a> by Nick
		posted on 8/19/2006 at 11:28 PM
		</div>
		<div class="comment_text"><p>Hi Steve,</p><p>Thanks for the comments... I typically do the same thing. I like to make sure all variables referenced within the tag are declared and in the attributes scope -- but sometimes will use request variables as defaults.</p><p>I'm curious as to what some others think about this and whether it's considered good practice or not.</p><p>Nick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656449">27</a> by John Farrar
		posted on 8/20/2006 at 12:29 AM
		</div>
		<div class="comment_text"><p>Ray... if you use cfimport and reference the root directory of your site as your base it works great! (You can of course also put an application.cfm in the directory with your custom tags to keep malicious security hazards away.) What you get is a directory like "shared" off the root that houses your custom tags in a nested directory.</p><p>/shared/tags/security<br>/shared/tags/forms</p><p>&lt;cfimport ...&gt;</p><p>Then your code is no problem. (The benefit of easy to read code compared to CFModule is worth it. You also don't run into conflicts where the extra attributes of CFModule get in the way of your custom tag attributes. Lastly, it works perfect with shared hosting!)</p><p>My hope is that they allow us to map some of these things in the next version of CF. Then we can map the tags in our application page, and you and I won't have to do it page by page. We will see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656452">28</a> by Raymond Camden
		posted on 8/20/2006 at 4:22 AM
		</div>
		<div class="comment_text"><p>I still don't like cfimport. Period. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656455">29</a> by Raymond Camden
		posted on 8/20/2006 at 4:25 AM
		</div>
		<div class="comment_text"><p>I concur with Steve. You shouldn't break encapsulation when it comes to custom tags... but I've done it myself every now and then. For example with DSNs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656457">30</a> by Javier Julio
		posted on 8/21/2006 at 11:15 PM
		</div>
		<div class="comment_text"><p>Finally you are posting about custom tags! Today is my lucky day then because I've been meaning to ask you this question for awhile now Ray but first you should be punished for not using cfimport. ;) I find CJ's CF Best Practices on easycfm as a great set to follow. One that I'm very vocal about is to always scope your variables. Is it necessary to scope your variables in custom tags?? By variables I mean regular variables that should only exist in that custom tag, meaning should I just do:</p><p>&lt;cfset myName = "Javier Julio"&gt;</p><p>Or</p><p>&lt;cfset Variables.myName = "Javier Julio"&gt;</p><p>Is there any benefit with either approach?? Or is it more of unneccessary in a custom tag as maybe a custom tag only defaults to the Variables scope whenever you set a simple var?? A great post with some real useful tips. Keep it up!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656451">31</a> by Raymond Camden
		posted on 8/22/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>I would say no, you do not need to variable scope your variables inside a custom tag.</p><p>As for your notice of me doing a post on CTs - I was a huge fan of CTs for many years. I truly do love em. One of the changes to CFLib will be to support CTs, since the Macromedia Exchange has lots of commercial stuff on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656453">32</a> by Javier Julio
		posted on 8/22/2006 at 12:13 AM
		</div>
		<div class="comment_text"><p>Thats a brilliant idea Ray as I don't dig a lot of the commercial stuff on the MMExchange so it would be great to see cflib support custom tags as well. If you need contributions I will have several for you. One of them being by own version of your data table and column tags. With the neat getMetaData() function thinking about using it to determine column datatypes so you don't have to specify it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656450">33</a> by Carry
		posted on 9/25/2006 at 10:42 PM
		</div>
		<div class="comment_text"><p>What's up with using CFPARAM within a custom tag?</p><p>Never saw this anywhere else, but I just ran across this tip in the CFMX7 Documentation:</p><p>"Tip: To improve performance, avoid using the cfparam tag in ColdFusion functions, including in CFC methods. Instead, place the cfparam tags in the body of the CFML pages."</p><p>No problem, I'd never use CFPARAM in a function.  But what about custom tags?  When this tip says "place the cfparam tags in the body of the CFML pages" is it just referring to simple CFML pages that display output?</p><p>I have a custom tag that performs some data validation.  I send in the form scope as an attribute collection.  Within the body of the custom tag, some of the validation is implemented with CFPARAM.</p><p>This tip concerning functions now has me second-guessing that usage.  What's the truth concerning perfomance and using CFPARAM within a custom tag?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656454">34</a> by Raymond Camden
		posted on 9/25/2006 at 10:45 PM
		</div>
		<div class="comment_text"><p>I haven't done speed tests on cfparam versus a cfif block. To be honest I don't think most (not all!) speed tests are really worth your time.</p><p>That being said - I personally don't think there is anything wrong with it - however - I tend to NOT like it when the default value is complex, like a struct:</p><p>cfparam name="foo" default="#structnew()#"</p><p>The reason is that CF has to run the structNew even if foo already exists. Again though, that should be a very minor speed hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656456">35</a> by Carry
		posted on 9/25/2006 at 10:51 PM
		</div>
		<div class="comment_text"><p>Wow! Expert advice in real time!</p><p>I always confuse myself when I read too much.</p><p>Thank you :^)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656458">36</a> by Raymond Camden
		posted on 9/25/2006 at 10:56 PM
		</div>
		<div class="comment_text"><p>Remember that my opinion may not be shared by others - especially the "don't worry about speed" comment (which, to be clear, I'm saying to not worry at a very low level). Anyway - just warning you that you may see a bunch of folks chiming in to say I'm wrong. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656460">37</a> by praman
		posted on 10/3/2006 at 10:45 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Could any body confirm whether using &lt;cfmodule&gt; will physically include the whole file in to the parent file.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656461">38</a> by Raymond Camden
		posted on 10/8/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>"Include" is the wrong word. The entire file is used - but it isn't "included" as the code has it's own variable space. Therefore it is NOT the same as a cfinclude call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656465">39</a> by Russ Michaels
		posted on 11/2/2007 at 3:22 AM
		</div>
		<div class="comment_text"><p>In general CFC's are actually not faster than custom tags, they are slower.<br>The only way a CFC is faster is if you have cached it in a persistent scope, such as application scope so that it remains in memory. Or if you are calling multiple methods on that CFC after it has instantiated within the same request, then it may turn out to be quicker than calling the same custom tag the same number of times.<br>The slowness of CFC's is caused by the initial instantiation of it, so this is where you need to calculate if any improvements are gained if you are not goign to cache the CFC.</p><p>So to be clear.</p><p>&lt;cfinvoke component="foo"...&gt;<br>is slower than<br>&lt;cf_foo...&gt;</p><p>but</p><p>&lt;cfinvoke component="#<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a>#"...&gt;<br>would be faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656463">40</a> by Raymond Camden
		posted on 11/2/2007 at 4:50 AM
		</div>
		<div class="comment_text"><p>I'm not so sure that is true in CF8, where CFC creation was improved dramatically.</p><p>Frankly - you (developer) need to make the choice between CFC versus custom tag based on what you are doing - not which one is 0.001% faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656468">41</a> by Russ Michaels
		posted on 11/2/2007 at 5:20 AM
		</div>
		<div class="comment_text"><p>Yes I have heard that about CF8 too, but I have not yet tested it. I would hope it is true because it would certainly make things a lot easier on our hosting servers which are full of badly written code :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656469">42</a> by Arowolo M.A
		posted on 4/20/2008 at 4:47 AM
		</div>
		<div class="comment_text"><p>at first i didn't really like using cfimport, but it was the only clean option available</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656467">43</a> by Richard
		posted on 9/9/2008 at 3:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am not sure whether I am missing something but have you posted the link to the Custom tags guide?  I would grateful if you can guide me to where it is.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656470">44</a> by Raymond Camden
		posted on 9/9/2008 at 5:17 PM
		</div>
		<div class="comment_text"><p>Eh? What guide?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656471">45</a> by Frank
		posted on 7/16/2010 at 12:01 AM
		</div>
		<div class="comment_text"><p>Typo: line reads "&lt;cfexit method="exitTag"%gt;" where it should read "&lt;cfexit method="exitTag"&gt;".  In case this comment processor does something unexpected, the line ends with the entity &amp; GT ; rather than the right angle character.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656472">46</a> by Raymond Camden
		posted on 7/16/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>Fixed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656473">47</a> by Greg
		posted on 8/26/2010 at 1:15 AM
		</div>
		<div class="comment_text"><p>Here we are in August 2010, a full 4 years after this article came into being and I wonder what everyone's opinions are now for using CFCs, UDFs, and Custom Tags.</p><p>I have seen much that talks about encapsulation and separation of logic/data and display/html. I have seen people advocate using CFCs and UDFs for data only and others to display content as well.</p><p>What i want to know is does anyone have a reason that the following is a less than optimal choice in using these options:</p><p>1. CFC instantiated in application scope which holds small core functions that are used on 99% of all pages of the site (none of which include any display and are purely data get/set) which also holds core set of variables specific to this application for use on any/all pages (like dsn).</p><p>2. Additional CFCs for objects in the application which hold functions specific to the object and/or data specific to the object.</p><p>3. Custom Tags for display code that is used frequently like table display, widgets, etc.</p><p>4. Included UDF library (is this even needed with the use of the others? if so, when or why? )</p><p>Thanks in advance -- i an eager to read everyone's take on this in the here and now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656474">48</a> by John Farrar
		posted on 8/26/2010 at 4:04 PM
		</div>
		<div class="comment_text"><p>To start off let me say that I have created a framework that does much of what you describe, a couple of frameworks in fact. When we code on the web our "MVC" is actually what is called Model-2. We have an application framework that works as a 'front controller' for all connections to the site. It delegates control of the request to a request controller. In nearly every framework out there this means CFCs acting as controllers and providing an API for interacting with the application framework.</p><p>Now about your mixing tags with CFCs question. Take a look at our COOP framework. This is primarily a coding methdology and we are in beta getting closer to release. We are working on our documentation and will be releasing another beta soon when we complete basic tests for these tags. Here is the docs. <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fcfcoop%2Fwiki%2FCOOP%3A_WYFidaRF9z6qk294C49j5PYgrg&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/cfcoop/wiki/COOP">http://code.google.com/p/cf...</a></p><p>I will also be doing a session at BFlex/BFusion on Custom AJAX tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656477">49</a> by Raymond Camden
		posted on 8/26/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>In general, I only use CFCs for data operations. For layout stuff I'll use custom tags. UDFs are rarely used. I do normally have a set of methods that don't fit in my model and are just generic utilities. For example, I may have a UDF for displayDateTime (to wrap up dateFormat and timeFormat calls into one). In cases like that, I'll create a generic "util" CFC and stuff it in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656475">50</a> by todd sharp
		posted on 8/26/2010 at 7:11 PM
		</div>
		<div class="comment_text"><p>What Ray said.  Seriously - that's the same thing I do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656478">51</a> by Josh Curtiss
		posted on 8/26/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>I'll always use custom tags for layout and HTML output.</p><p>I'm a fan of "util" CFCs too. A couple advantages: (1) It makes it clean and easy to use those same methods in a legitimate CFC -- just inject the util CFC in! (2) Sometimes I have functions that may need some configuration. I can have the config data passed into the util CFC once, and it's a clean approach to that issue. (3) It's a common way the Java community handles it, so you're familiarizing yourself with an approach that is common in other circles.</p><p>If I'm writing something quick and dirty, throwing a couple UDFs in there, old-school like, is not beyond me. :-) But typically that's short scripts that I'm just throwing together in an hour or two.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656480">52</a> by Steini Jonsson
		posted on 8/26/2010 at 7:26 PM
		</div>
		<div class="comment_text"><p>What Todd said :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656476">53</a> by Greg
		posted on 8/27/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>Thank you very much to John, Ray, Todd, Josh, and Steini who chimed in! I really appreciate your having taken the time to answer my post. You have confirmed my thoughts on the matter, and we are proceeding in that direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656479">54</a> by Ati
		posted on 7/19/2012 at 6:13 AM
		</div>
		<div class="comment_text"><p>&lt;cfparam name="attributes.result" default="result" type="variableName"&gt;<br>&lt;cfset caller[attribute.result] = now()&gt;</p><p>BEST code snippet ever...</p><p>(ps I believe it should be you are missing a trailing "s" with attribute.result in the last line.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656482">55</a> by Raymond Camden
		posted on 7/19/2012 at 6:21 AM
		</div>
		<div class="comment_text"><p>Thanks Ati - corrected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3515265852">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515265852">56</a> by Charles Robertson
		posted on 9/13/2017 at 11:17 AM
		</div>
		<div class="comment_text"><p>Ray. What scope can I use for local variables inside a custom tag. Rather than the attributes scope, which is generally used as an input scope, could I use &lt;cfset local="StructNew()"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3515437953">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515437953">57</a> (In reply to <a href="#c_3515265852">#56</a>) by Raymond Camden
		posted on 9/13/2017 at 1:50 PM
		</div>
		<div class="comment_text"><p>In a custom tag, the variables scope is local to it, so you can just do x=1 or variables.x=1 to keep it scoped to the custom tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3515546681">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515546681">58</a> by Charles Robertson
		posted on 9/13/2017 at 3:02 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. Thats exactly what I wanted to know!</p></div>
	</div>
</div>
		