
<div class="comment" id="c_1713721884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721884">1</a> by Devin
		posted on 2/9/2010 at 4:28 AM
		</div>
		<div class="comment_text"><p>Ray, that might be related to CF supressing compilation errors in CFCs when it's searching for persistent entities. If that weren't the case, we wouldn't be allowed to have any unfinished (with known errors) CFCs in our application even if they had nothing to do with the operation being tested.</p><p>I'm assuming the "Skipping file c:\yada\yada\yada\event.cfc as it has errors" log entry was written when the event.cfc was being checked to see if it were a persistent entity. Since it couldnt compile (and therefore pull the metadata), it was skipped just in case it wasn't relevant to the current request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721885">2</a> by Raymond Camden
		posted on 2/9/2010 at 4:31 AM
		</div>
		<div class="comment_text"><p>I'd argue that hiding the error causes more problems than ignoring it. Your example - of saving an incomplete file - is probably much more rare than an honest to goodness error. And imagine if it did throw an error. So for you, it would be annoying once. You would comment out your file, rename it, whatever. But for me - I was completely lost. I was never told I had an error and had no idea where to go. I -really- feel that CF should err on the side of being more vocal here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721889">3</a> by Devin
		posted on 2/9/2010 at 4:57 AM
		</div>
		<div class="comment_text"><p>I disagree. Imagine not being able to run an app because of some invalid orphaned CFC. You're saying that CF should throw an exception because it wasn't able to parse a file that is never executed (just happens to be laying around in the web root somewhere) ? Or what about other sections of the web site that are a work-in-progress. We can't even test out the finished modules because our work-in-progress sections have errors?  You'd also have to remove any TDD CFCs that happen to be in the web root because they'll error if the real CFC hasn't been written yet.</p><p>The fact of the matter is, you shouldn't be stopped from running the app because of an error'd file that's not even part of the request... that'd be very confusing and frustrating.</p><p>In any case, you're a bit late, for this was discussed quite a bit in beta...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721888">4</a> by Raymond Camden
		posted on 2/9/2010 at 5:08 AM
		</div>
		<div class="comment_text"><p>Yes, I do think the app should come to a halt. At least you _know_ why it came to a halt. Don't you think that is preferable then _not_ knowing? I mean consider someone learning ORM. Where is this feature documented? Nowhere, right? So all of a sudden he can't use a CFC and he has no idea why. I find that to a much worse situation then you not being able to store 'works in progress'. If I had a file like that and it was in the way - the solution would be simple. Just comment it out. I'd remove the comments later when I have time to fix it.</p><p>As for TDD CFCs - are they persistent="true"? I'd be surprised if so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721899">5</a> by Raymond Camden
		posted on 2/9/2010 at 5:09 AM
		</div>
		<div class="comment_text"><p>p.s. As to it being discussed in beta - I have some vague memory - but again - consider the _normal_ developer. S/he is going to have no idea why his entity doesn't work. Zip. I think I got lucky by noticing the message in application.log. Do you think everyone will be that lucky?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721883">6</a> by Gary Funk
		posted on 2/9/2010 at 5:55 AM
		</div>
		<div class="comment_text"><p>Well, for what it is worth, Devin the anonymous, has pretty much sealed his argument with this statement:</p><p>"The fact of the matter is, you shouldn't be stopped from running the app because of an error'd file that's not even part of the request... that'd be very confusing and frustrating.</p><p>In any case, you're a bit late, for this was discussed quite a bit in beta..."</p><p>Seems to me, your file is part of your application and the part about being discussed in beta, is totally without merrit. That is as childish as saying 'My dad can write better code than your dad.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721886">7</a> by Devin
		posted on 2/9/2010 at 6:52 AM
		</div>
		<div class="comment_text"><p>"As for TDD CFCs - are they persistent="true"? I'd be surprised if so."</p><p>Ray, It doesn't matter. I'm saying that ANY CFC (persistent or not) with an error would cause the entire app to not run at all. The CFC must be compiled in order to pull the metadata to even check if it's persistent or not. If it compile it to make that check, and doesn't skip it, it should bring down everything else?</p><p>"consider the _normal_ developer. S/he is going to have no idea why his entity doesn't work"</p><p>That's what the logs are for, right? Is it not standard practice to check the logs when you can't figure something out? Do you think a _normal_ developer will understand why running index.cfm throws an exception because SomeOrphaned.cfc (which is never executed anyway) has an error?</p><p>@Gary: If you believe that every file would be part the application, then my dad probably can write better code than your dad.</p><p>The file may or may not be part of the application. If you don't make use of the Application's cfclocation setting, then it scans the entire web root for persistent CFCs. Many people run multiple applications in the same web root (especially when you have no choice, like in shared hosting).</p><p>Think of these situations:</p><p>You're running your main site as well as BlogCFC, Lighthouse Pro, and a few other mini apps in your webroot. BlogCFC happens to have a syntacticly bad CFC in there somewhere,  which rarely gets executed, and therefore wasn't an obvious bug to catch (not that Ray ever writes bugs). Because of that, it brings down the main web site, the bug tracker, and everything else you have running in that webroot.</p><p>A lot of people use their CF account to host test scripts, demos and even a playground area. Their production apps would probably all be toast in that situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721901">8</a> by Devin
		posted on 2/9/2010 at 7:02 AM
		</div>
		<div class="comment_text"><p>P.S. to Gary,</p><p>I wasn't trying to be anonymous. Ray has my email, and I'm assuming he knows who I am (maybe not).  I think I met you at the Denver Flex User Group awhile back (I'm the co-manager). Or was it the Denver CFUG...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721902">9</a> by Gary Funk
		posted on 2/9/2010 at 7:29 AM
		</div>
		<div class="comment_text"><p>Oh, that Devin. Yes, It was the Flex group and I need to attend more so I can someday write other than CF code. On a side note, I'm not a fan of ORM. I view it the same as Front Page was to HTML, as ORM is to SQL. It will never, ever, ever write SQL code as well as I do.</p><p>And maybe I am wrong, but I would prefer it throw an error and let me comment it out or fix the error. And let us not forget that a lot of programmers don't have access to the logs on production servers, even test servers. At my shop, I am the only one that has access to the logs for security reasons. I'm not saying that is the corredt way, just the way it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721894">10</a> by Raymond Camden
		posted on 2/9/2010 at 8:43 AM
		</div>
		<div class="comment_text"><p>@Devin: I only checked the logs out of desperation though. The error said that Foo wasn't an entity. It said _nothing_ about it having bad syntax. For all I knew, I was misspelling Foo, or doing something otherwise dumb.</p><p>When I use ORM, yes, I'd be willing for any 'bad' CFC to break the app. Yes, I would. :)</p><p>To your example - how would a bad BlogCFC bring down a bad LHP? By default, ORM apps check the current folder and subfolders under it. So subfolder A would not bring down subfolder B. And guess what - if subfolder A killed parent folder X, and if it was obvious, I'd know immediately how to fix it. I'd comment out the CFC. Problem solved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721895">11</a> by Devin
		posted on 2/9/2010 at 9:42 AM
		</div>
		<div class="comment_text"><p>" how would a bad BlogCFC bring down a bad LHP? By default, ORM apps check the current folder and subfolders under it."</p><p>Imagine this filesystem structure:</p><p>shinynet (webroot)<br>-- Application.cfc (for main site - ormEnabled)<br>-- index.cfm (and rest of main site files)<br>-- blog<br>---- Application.cfc (for blogcfc)<br>---- BadFile.cfc (can't be compiled due to error)</p><p>Requests to <a href="http://disq.us/url?url=http%3A%2F%2Fshinynet.com%2Findex.cfm%3ARXpJc6I8rj8YSvt-yHjC_a4DOjw&amp;cuid=3321886" rel="nofollow noopener" title="shinynet.com/index.cfm">shinynet.com/index.cfm</a> (or any request to the main site) would throw an error because of the blog.BadFile CFC, even though a request wasn't being made to the blog.</p><p>I know you believe that it'd be quicker to just fix any problems that are unrelated to the code you're trying to run, but the idea of having a piece of logic so dependant on other files that have absolutely no relation to it, and not even part of the same request, smells horribly, horribly wrong.</p><p>Just my opinion and I'm glad things were changed to work the way they do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721890">12</a> by Raymond Camden
		posted on 2/9/2010 at 6:02 PM
		</div>
		<div class="comment_text"><p>I'm not denying that child folder A would break /, I had thought you were arguing it would also break child folder B. So let's skip past that.</p><p>At this point - I'm done. I'm right. You're wrong. I'm rubber. You're glue. Etc. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721892">13</a> by Gary Funk
		posted on 2/9/2010 at 6:06 PM
		</div>
		<div class="comment_text"><p>Regardless... this is an interesting debate and I have more knowledge now. Just another reason, for me, not to use or trust, ORM.</p><p>Thanks to both of you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721898">14</a> by Raymond Camden
		posted on 2/9/2010 at 6:07 PM
		</div>
		<div class="comment_text"><p>Woah now. As much as this bug ticked me off, I'd _definitely_ recommend using ORM. It is one of the most significant features ever added to CF - right after CFCs. I'd _strongly_ urge you to reconsider.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721876">15</a> by Rupesh Kumar
		posted on 2/9/2010 at 6:13 PM
		</div>
		<div class="comment_text"><p>Though it was discussed in beta and we made the change considering so many folks wanted it to be the way it is, I agree that it is causing more debugging issues than helping. In fact lot of folks including Ray and *me* have been bitten :-)<br>So this is something that is worth re-consideration. We might just take a middle ground instead of reverting it completely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721887">16</a> by Gary Funk
		posted on 2/9/2010 at 6:33 PM
		</div>
		<div class="comment_text"><p>Well, okay, I will reconsider. However, I do not see myself EVER letting an application write hidden SQL code for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721879">17</a> by Raymond Camden
		posted on 2/9/2010 at 6:34 PM
		</div>
		<div class="comment_text"><p>You must like writing SQL then. ;) Personally I hate it. I also hate having to update table structures while working on a new site.</p><p>Also don't forget you can enable logging for Hibernate. That will "unhide" the SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721878">18</a> by Devin
		posted on 2/9/2010 at 10:30 PM
		</div>
		<div class="comment_text"><p>Maybe a good middle ground, as Rupesh mentions, would be an application setting that either skips malformed CFCs or throws an error when encountered.</p><p>However, doing the some bare minimum testing of the CFC, such as running a quick CreateObject() on to make sure it's able to be instantiated would avoid this type of problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721881">19</a> by Gary Funk
		posted on 2/10/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>@Ray: As you know, the database and SQL code can make or break the application. With todays applications SQL is an extreamly important part and letting some some other code write the SQL code is not a wise decission.</p><p>I liek the fact that ORM can handle much of the database work, but let me tell it what to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721882">20</a> by John Allen
		posted on 2/10/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>I couldn't agree more. This has bitten me a couple of times. It  is wak behavior. If my code is broken... please tell me my code is broken. Good post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721891">21</a> by richard
		posted on 2/10/2010 at 1:59 PM
		</div>
		<div class="comment_text"><p>@gary. I'm wonder why a lot of people seem to regard ORM as a 'replacement' for SQL? For me we will always have to write complex queries, mainly for reporting and let's face it that's what SQL is mostly about. Some reporting queries are among the most complex programming constructs I've ever had to get my head around (go to Joe Celko if you want to see what I mean). For CRUD activities though SQL is pretty repetitive, even with multiple table joins, and it's here that ORM is doing most of it's stuff. I'm glad I don't have to change a swathe of INSERT/UPDATE/SELECT queries everytime a new property / column is required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721900">22</a> by Gary Funk
		posted on 2/10/2010 at 6:36 PM
		</div>
		<div class="comment_text"><p>@Richard: How do maintain that balance between letting ORM write the SQL and yet, take over the SQL from ORM? I have several queires that ORM would blow up on if it tried to write them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721893">23</a> by richard
		posted on 2/10/2010 at 6:55 PM
		</div>
		<div class="comment_text"><p>@gary: I let ORM handle entities and I've never found the need for exotic SQL to return an entity or an array of entities. Where the SQL gets funky is when you need a recordset with correlated sub-queries and aggregation functions for example. That's not even a job for ORM which as far as I know doesn't return records sets. I just use cfquery as normal in a service method or wherever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721897">24</a> by Gary Funk
		posted on 2/10/2010 at 8:04 PM
		</div>
		<div class="comment_text"><p>Thank you Richard. This entire post gives me a lot to think about.</p></div>
	</div>
</div>
		