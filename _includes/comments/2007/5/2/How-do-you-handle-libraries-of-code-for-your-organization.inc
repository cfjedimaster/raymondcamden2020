
<div class="comment" id="c_1713664633">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664633">1</a> by Aaron Longnion
		posted on 5/2/2007 at 8:29 PM
		</div>
		<div class="comment_text"><p>I'm not sure exactly what you're going for here because at first I was thinking you were asking about a central place (library) that all your tags and CFCs that could be used by multiple apps on a single server (or even perhaps using a NAS that point to reusable code, with mapped drives to your app servers).  Obviously, this could be done with the CustomTags path or CF mappings in your CF Admin, but I'm not sure if this helps with the .sql files (ideally, the DBA, which could be yourself, would keep those SQL scripts in a central place... and hopefully use source control of some type for those files).</p><p>But then you mentioned cfLib and Kyle mentioned sharepoint, so I'm thinking maybe you meant something totally different: a place to privately or publicly share code that isn't even necessarily specific to your organization or apps.  For this type of "library", I've found codeshare (<a href="http://disq.us/url?url=http%3A%2F%2Fcodeshare.ulatu.com%2F%29%3AImHARu3mgsKMaYOyTAzy3DJupRw&amp;cuid=3321886" rel="nofollow noopener" title="http://codeshare.ulatu.com/)">http://codeshare.ulatu.com/)</a> nice for CF code, and then I post code that anyone could use on their apps at <a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2Findex.cfm%2FColdFusion%3AToX5ruCY4RqbgPpSssYqUVVX3Z4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/index.cfm/ColdFusion">http://cfzen.instantspot.co...</a> (shameless plug ;-)  And of course the Adobe Exchange has tons of stuff...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664639">2</a> by Terrence Ryan
		posted on 5/2/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>We have a two pronged approach. There's source code that we share, and code that we allow people to use.</p><p>We have a file share for the source that we share, that is read by our Developer's Center.  It reads in all of the projects, makes the source available for viewing and zips it up for easy download.</p><p>For code that we allow people to use; (think central resources, with restricted passwords) we give our developers access to the automatic documentation.  We then also allow developers to look at the source code with privileged information stripped out.  Also through our Developer's Center. <a href="http://disq.us/url?url=http%3A%2F%2Fseven-dev.wharton.upenn.edu%2Fdevcenter%3A1eb2d_EzOyr3UVQ76N8IkzmBI2g&amp;cuid=3321886" rel="nofollow noopener" title="http://seven-dev.wharton.upenn.edu/devcenter">http://seven-dev.wharton.up...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664642">3</a> by Russ Johnson
		posted on 5/3/2007 at 7:06 PM
		</div>
		<div class="comment_text"><p>We simply use a tool that we are already using in house for storing all of our other code. Subversion.</p><p>We just created a repository called CodeShare and under that we have subfolders for custom tags, snippets, cfcs, sql, etc... and the code files are stored there via a descriptive name.</p><p>This way you get the added benefit of versioning that code as well when you find new ways to improve it in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664640">4</a> by Boyan
		posted on 5/3/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>I have a few of things in mind:</p><p>1. SVN - it could be great for static templates or just files with code.</p><p>2. A web app (in CF of course) that I had written specifically to store code snippets.</p><p>3. A code repository with a something like "Source Code Library": <a href="http://disq.us/url?url=http%3A%2F%2Fwww.highdots.com%2Fsource-code-library%2F%3ALWaWV0hCdmJ7HzlrULnu3S_e6kM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.highdots.com/source-code-library/">http://www.highdots.com/sou...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664643">5</a> by Patrick McElhaney
		posted on 5/3/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>Three strategies that have worked for me.</p><p>1. Turn the problem inside out. Before you write code that may be useful in a future project, ask whether similar code  already exists in a past project. If so, go grab the code and use it. Don't worry about keeping a repository of "highly reusable" code. Embrace the long tail.</p><p>2. Use snippets in your IDE. My snippets are kind of like a personal code repository. I've never made a point of sharing my snippets with others, but it would take almost no effort to do that.</p><p>3. Build a cohesive library/framework that you can reuse in many projects (e.g. Reactor, Prototype). The library stands alone as project itself. CFLib falls under this category -- each function is a nano-library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664646">6</a> by Sam Farmer
		posted on 5/4/2007 at 1:53 AM
		</div>
		<div class="comment_text"><p>After years of keeping sql files somewhere else, like product documentation, which inevitably gets lost we now keep all sql files in a sql folder in each application.</p><p>The sql folder is secured with a Application.cfm that simply has cfabort in it.  And all files end in .cfm so createUserTable.cfm instead of .sql that way no one can read the sql files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664650">7</a> by Joshua Curtiss
		posted on 5/4/2007 at 5:36 PM
		</div>
		<div class="comment_text"><p>I work at a college, and we heavily use the Trac/Subversion solution. All of our globally usable custom tags, CFC's, UDFs, and JavaScript are stored in a single Trac project and Subversion repository. Thus, all changes to this global code are easy to see via Trac, and the project wiki can be the source of all documentation.</p><p>Also worth noting: Application-specific code that gets reused.. For instance, our Employee Directory app has Employee.cfc which is used by almost every single other app on our intranet. After dozens of apps all link to that CFC, it gets scary to make changes to it, because there are so many apps to test the ripple of your changes (no, we have NOT implement unit tests, ugh.. it's on the to-do list). So, now each app will have an svn:external of the Employee Directory CFC folder in its own CFC folder, and the svn:external will point to a specific tagged version. That way, the Employee.cfc will never change even when code changes are made to it in the Employee Directory app, because the other apps have their own checked out version of a specific version of the code.</p><p>It's still clean reuse from a version control perspective, and it frees me from the headache of worrying about unwanted behavior when upgrading a highly linked CFC.</p><p>I hope that came across well. This approach has made life so much easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664649">8</a> by Russ Johnson
		posted on 5/4/2007 at 6:30 PM
		</div>
		<div class="comment_text"><p>@Joshua</p><p>Trac does make viewing that code very convenient! You should consider extending that Employee.cfc for each specific app though. Keeping track of what revision of the cfc is used for which application will get cumbersome.</p><p>If you keep a single instance of that cfc and just extend it for each application, then you no longer have to worry about changing the base code. Then the only changes you have to keep track of are the overwritten methods in your applications.</p><p>Seems like a much cleaner solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664648">9</a> by Joshua Curtiss
		posted on 5/4/2007 at 7:20 PM
		</div>
		<div class="comment_text"><p>Hey Russ. In my initial implementation I did experience that frustration. Now it's always evident what version of the external cfc's are being used because I name their svn:external folder to have the version name in it, kind of similar to many open source approaches, i.e. Java will have the version number in the directory name structure.</p><p>Sticking to my example, I typically abbreviate the Employee Directory app to EmpDir. An app named MyApp may have a directory structure like this:</p><p>MyApp/cfc/foo.cfc<br>MyApp/cfc/bar.cfc<br>MyApp/cfc/EmpDir-v161/Employee.cfc</p><p>Foo.cfc and Bar.cfc are CFCs specific to MyApp; EmpDir-v161 is an svn:external pointing to a v1.6.1 tag of EmpDir's CFC directory.</p><p>Remember, I may be *TECHNICALLY* duplicating the CFC, but I'm not LOGICALLY duplicating the code, because it's coming from the repository.</p><p>If I was responsible for a dozen apps, maybe this would be overkill. But I'm responsible for over a hundred apps. When I'm done writing an app, I don't want it to change in any way. If I want to upgrade it to use a new version of Employee.cfc, I'll upgrade the svn:external and then test the app against the upgrade.</p><p>Chew on it. Of course there are pros and cons, but hopefully you can see the pros.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664651">10</a> by Russ Johnson
		posted on 5/4/2007 at 7:36 PM
		</div>
		<div class="comment_text"><p>I definitely see some pros to your approach. However, there are pros and cons in both methods. Not that either is better than the other. To me it just seems more conventional to extend rather than duplicate whether it be logical or technical in any sense.</p><p>I use an approach where I have my core cfc's stored in a directory that is reachable by all apps on the server via a coldfusion mapping. Something like the following:</p><p>com.core.application<br>com.core.employee<br><a href="http://disq.us/url?url=http%3A%2F%2Fcom.core.security%3AqPczssoNuU_u7NxRrEy7qFkChck&amp;cuid=3321886" rel="nofollow noopener" title="com.core.security">com.core.security</a></p><p>Then in each application, if I need to use the employee cfc, I simply call it. Or if this particular app needs to add some params to employee.cfc then I create a cfc in that application that extends the core. Much less 'customized' code to maintain.</p></div>
	</div>
</div>
		