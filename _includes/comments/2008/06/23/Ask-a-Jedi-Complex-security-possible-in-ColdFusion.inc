
<div class="comment" id="c_1713682197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682197">1</a> by Brian Kotek
		posted on 6/24/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>I've built similar functionality (at least for the Model) by using ColdSpring's AOP capabilities. So the questioner may want to look into that as a possible option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682198">2</a> by Sam Farmer
		posted on 6/24/2008 at 1:57 AM
		</div>
		<div class="comment_text"><p>An approach I've taken over the years is to create segments which can be anything from a link on a page to a whole file or even directory.  This allows anything to be defined for security purposes.</p><p>Then users get assigned segments, often via groups, and when they log in these segments get put into session scope.  Then each segment checks to see if the user has that segment and if so provides access and if not takes some action.  This action can vary from a complete no access to showing something else to showing nothing at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682200">3</a> by Matt
		posted on 6/24/2008 at 1:59 AM
		</div>
		<div class="comment_text"><p>I've been looking for exactly the same thing.  Any help would be appreciated.  I also got too many other results when looking for security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682199">4</a> by Rob Huddleston
		posted on 6/24/2008 at 2:46 AM
		</div>
		<div class="comment_text"><p>Either I'm oversimplifying things or am misunderstanding the post, but why not use &lt;cflogin&gt; and its built-in roles-based security? All you have to do is provide field from the DB that lists their role to the roles attribute of &lt;cfloginuser&gt;, and then wrap any code that needs to be checked in a &lt;cfif isuserinrole("foo")&gt; block. It's not difficult at all ... or am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682204">5</a> by Simon Horwith
		posted on 6/24/2008 at 3:27 AM
		</div>
		<div class="comment_text"><p>I have a RIDICULOUSLY FEATURE RICH security API that I've worked on for several months and am just finishing off... which I plan to release to the public fairly soon. It may be of interest to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682201">6</a> by Sam Farmer
		posted on 6/24/2008 at 4:22 AM
		</div>
		<div class="comment_text"><p>@Rob: Nothing at all wrong with using the cflogin tags if it meets your needs.  Some applications may need more control thats all but for a lot of apps its a great choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682202">7</a> by Raymond Camden
		posted on 6/24/2008 at 4:56 AM
		</div>
		<div class="comment_text"><p>I've had issues in the past with cflogin. That's why I don't recommend it anymore. Yes - my apps still tend to use it, but I'm not using it for anything new.</p><p>Also - it only does roles based security. Ie, role X can do Y. It doens't have a concept of permissions, or roles and resources. Ie, Ray has Edit on resource Foo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682205">8</a> by Jim Priest
		posted on 6/24/2008 at 5:08 AM
		</div>
		<div class="comment_text"><p>Venture forth to the land of Hal Helms.  He's got a neat security model outlined here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhalhelms.com%2Fwritings%2FProposedSecurityModel.pdf%3AmI5Uvegeir32wjK6qzbmriTQrbs&amp;cuid=3321886" rel="nofollow noopener" title="http://halhelms.com/writings/ProposedSecurityModel.pdf">http://halhelms.com/writing...</a></p><p>I've used this on several sites and it allows you to have some fairly complex, yet granular security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682203">9</a> by John C. Bland II
		posted on 6/24/2008 at 6:09 AM
		</div>
		<div class="comment_text"><p>I've built completely locked down systems like @Sam built but it could've been implemented in any language.</p><p>The Basics:<br>Add tables, example below, to your db. For each user assign their access in usersitecomponents (or whatever you name it; just a link table between users and sitecomponents), or assign it by user type/group, and on each page request, ping the db to see if they have access to the requested page.</p><p>DB Schema - <br>:: SiteComponents [id, parentid, title, href, etc...]<br>:: UserSiteComponents [sitecomponentid, userid]</p><p>This is very fast since you're merely making a "select true from usersitecomponents where userid = session.userid and sitecomponentid = #someid#". I say "true" only because you don't need any real info here.</p><p>If you properly setup sitecomponents table you can even control a graphic on the home page.</p><p>Hope this makes sense and helps. Again, this is not CF specific at all. I just so happened to implement it in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682206">10</a> by Eric Knipp
		posted on 6/24/2008 at 7:04 AM
		</div>
		<div class="comment_text"><p>I've recently put into production a project that uses a custom security framework for exactly this purpose.  This application is written in Mach-II so in addition to the security business objects I wrote a plugin and a filter.  The way my framework works is pretty straight forward.</p><p>I have database tables for user, role, and permission.  Users may have multiple roles and each role has a permission set (done using link tables).  A permission is actually the name of a Mach-II event, or alternatively a custom value which is used for inserting custom validations on a form (for example to show or hide certain buttons).  The events themselves get checked every request through the plugin in the preEvent() method.</p><p>In this way I can secure everything at the event level which is usually adequate, and when custom security is needed I can include calls to the security business objects on the views to test if the user is allowed to see a button or hidden panel.</p><p>Very easy to implement with Mach-II and I imagine you could do something like this in most of the popular MVC frameworks in a fairly lightweight manner.</p><p>Eric</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682207">11</a> by Bim Paras
		posted on 6/24/2008 at 10:48 AM
		</div>
		<div class="comment_text"><p>Along the line of what Eric has done, I too have designed and implemented a custom security system using a similar idea linking users, roles, and resources for an online school. The requirements of the school's desired security system pretty much meant I had to build one from scratch.</p><p>The ultimate goal of this security system was to surround code from either being displayed or executed via a &lt;cfif&gt; statement with a straighforward call to a cfc function "isUserAllowed("[ResourceName]"). This function would make a database call to query whether the logged in user had access to the specific resource either via a user--&gt;to--&gt;resource assignment or user--&gt;to--&gt;role--&gt;to--&gt;resource assignment.</p><p>The intelligence in the system would honor the business requirements that a user would be given access if at least one assignment either via a role or direct user assignment was granted UNLESS, there was any assignment that DENIED access, thereby not giving them access to the resource.</p><p>That's the crux of the system with some more layers of intelligence that would be too detailed to explain in a comment post. I did build an administrative security interface to this system where the engineers and internal staff are the intended audience (translates to "still needs work"). However I'm quite happy that it works and more importantly, the school loves the way it works. Yay!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682208">12</a> by Sebastiaan
		posted on 6/24/2008 at 11:03 AM
		</div>
		<div class="comment_text"><p>Check out Jason Dean's Security Series: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.12robots.com%2Findex.cfm%2FSecurity%3AMyZ0DB1aeqK8S6453r_ugJjXiW8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.12robots.com/index.cfm/Security">http://www.12robots.com/ind...</a></p><p>I've learned a lot there and gotten my way of working regarding security acknowledged thru his postings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682210">13</a> by dfguy
		posted on 6/24/2008 at 3:48 PM
		</div>
		<div class="comment_text"><p>"We are inheriting a ColdFusion application written in ColdFusion."</p><p>o_O</p><p>oh thank god. i though you were inheriting a cf app written in perl there for a minute. thanks for clearing that up for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682209">14</a> by Phillip Senn
		posted on 6/24/2008 at 4:25 PM
		</div>
		<div class="comment_text"><p>Don't forget the foundation on which these security models are based.  There is a function in the Application.cfc file called onRequestStart.  This function is called prior to any .cfm page being loaded, so the security usually goes into that function.</p><p>For a complete list of functions available in Application.cfc, see Ray's posting at:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fapplication.cfc.txt%3AcizpCnox_Byj2v5cRSuTbTQHdbI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/application.cfc.txt">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682211">15</a> by Steve Withington
		posted on 6/24/2008 at 5:03 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I know you've mentioned not using CFLogin in the past as well. Maybe you could share/blog about what/how you're securing your applications?  Or maybe even share the issues you have (or have had) with CFLogin?  (Sorry if you've already blogged about this.)  I've been using CFLogin myself for simple back-end admin areas and found it to be pretty useful.</p><p>I know a number of comments have recommended using various frameworks too (Mach II, ColdSpring, etc.), is this where you've headed as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682213">16</a> by tc
		posted on 6/24/2008 at 5:37 PM
		</div>
		<div class="comment_text"><p>In regards to security, there are actually several levels, even within application security.  To start out with, one should use CF's basic security framework, which includes cflogin.  CFLogin includes providing a list of roles the user has.  From this list, one can query whether the user has a given role using CF built in functions.  This could handle the view layer issues on what to display and what to not display.</p><p>The next layer of securiy is CF's ability on the components to restrict methods by role.  This allows the application to restrict certain methods/components to users assigned the higher level of access, such as administrative functions.</p><p>One layer that Ray didn't touch upon, however, is security in the database itself.  Often on web-based SQL Server databases, where I do have direct access to the backend, I set up the user that CF uses to connect to the database as having at most DataReader and DataWriter roles.  Within the CF Admin, I take away the ability to create or drop objects.  One could even go so far as to only allow the user CF connects with to execute Stored Procedures.</p><p>One of the items I brought up at CF United on the first day during the keynote, is an area lacking in CF.  This is the ability to pass the authenticated user information onto the database.  Oracle has the ability to connect with a common account to allow for connection pooling of database connections, but within the connection, one can also pass the user authenticated to the middle tier (Oracle's Proxy Authentication).  This allows you to establish roles based on individual user coming in, and retain auditing capabilities of actual data access (important for such things as HIPAA compliance).</p><p>A couple other points on Database Level Security.  Oracle has the ability to have roles passworded (i.e., one has to activate the role via a password).  The problem here with Cold Fusion is the fact that you, the programmer, are for the most part removed from the actual Java connection hassles.  In this case, however, one needs to retain the connection, or in each request cycle turn on the role, since there is no guarantee that the role will be activated when the requests starts.  This is really more a client-server based model that should be discouraged for multi-tiered database interactions.  Oracle's Proxy Authentication is a better approach in this case.</p><p>One final security related issue that I am not sure if it has been fixed or not, since I haven't played around with CF8 enough, is the fact that transactions run as the CF account you set up in CF datasource setting.  One could provide username and password for individual queriess, but for Transactions, it ran as the default user account.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682212">17</a> by Brian Kotek
		posted on 6/24/2008 at 6:13 PM
		</div>
		<div class="comment_text"><p>The problem with securing things at the Controller level (i.e. Model-Glue events) is that AJAX and especially Flex applications don't talk to the Controller much, if at all. Which means security often needs to be applied at the Model layer. This is where something like ColdSpring's AOP capabilities can be very useful. It also needs to be robust enough to handle more complex authorization, such as "a user can edit a News item, but only if they created it" to avoid people modifying the URL/web service/AMF request and trying to access data that isn't theirs. It can become a pretty interesting problem depending on how complex the rules get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682215">18</a> by Craig Hyatt
		posted on 6/24/2008 at 7:56 PM
		</div>
		<div class="comment_text"><p>Resinfox access control for model-glue - <a href="http://disq.us/url?url=http%3A%2F%2Fresinfox.com%2Fnum%2Fmodelglue%3AfGiPgmqf5kMAGu5ICGkCVUDA-v8&amp;cuid=3321886" rel="nofollow noopener" title="http://resinfox.com/num/modelglue">http://resinfox.com/num/mod...</a></p><p>This has been on my list of things to check out forever.</p><p>Not sure if it's possible to work model-glue around/into the existing app though.</p><p>C</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682214">19</a> by Raymond Camden
		posted on 6/27/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>@SteveW: If you search my blog for cflogin you will see my history of woe with with it...</p></div>
	</div>
</div>
		