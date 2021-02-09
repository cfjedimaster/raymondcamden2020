
<div class="comment" id="c_1713653242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653242">1</a> by Leif
		posted on 5/22/2006 at 6:00 PM
		</div>
		<div class="comment_text"><p>Wow. Great timing, Ray. Did you know how badly I need this for my user group?!?</p><p>I am looking forward to part 2 through...</p><p>Leif</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653245">2</a> by todd
		posted on 5/22/2006 at 8:59 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>Not to question your ways, but why not use a cfform and the built in validate="email"?  Are there advantages/disadvantages to either method that I'm not aware of?</p><p>   &lt;cfform action="subscribe.cfm" method="post"&gt;<br>   &lt;table&gt;<br>      &lt;tr&gt;<br>         &lt;td&gt;Your Email Address&lt;/td&gt;<br>         &lt;cfoutput&gt;&lt;td&gt;&lt;cfinput type="text" name="emailaddress" value="#form.emailaddress#" validate="email" validateat="onsubmit" message="Your email address isn't valid."&gt;&lt;/td&gt;&lt;/cfoutput&gt;<br>      &lt;/tr&gt;<br>      &lt;tr&gt;<br>         &lt;td&gt;&amp;nbsp;&lt;/td&gt;<br>         &lt;td&gt;&lt;cfinput type="submit" name="subscribe" value="Subscribe"&gt;&lt;/td&gt;<br>      &lt;/tr&gt;<br>   &lt;/table&gt;<br>   &lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653243">3</a> by Lola Lee Beno
		posted on 5/22/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>Some people, me included, just like to stay away from anything having to do with cfforms.  I find this feature a bit too quirky for my taste.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653248">4</a> by Jay Greer
		posted on 5/22/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>Hey Ray:</p><p>Title of next series: "How to Retire on AdSense Revenue"</p><p>;-)</p><p>Enjoyed the last one. Looking forward to this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653247">5</a> by Raymond Camden
		posted on 5/22/2006 at 9:08 PM
		</div>
		<div class="comment_text"><p>I think FF would be overkill for simple forms like this. I'm slowly backing off my previous "love" of FF. Not that I think they suck mind you - just that - well - I'm backing off from them a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653250">6</a> by Geoff
		posted on 5/22/2006 at 9:23 PM
		</div>
		<div class="comment_text"><p>I may have jumped the gun a little here, but I do the following (after doing some basic checks on the <a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>):</p><p>&lt;cfset mailsuccess=true&gt;<br>&lt;cftry&gt;<br>&lt;cfmail&gt;send the signup email&lt;/cfmail&gt;<br>&lt;cfcatch&gt;&lt;cfset mailsuccess=false&gt;&lt;/cfcatch&gt;<br>&lt;/cftry&gt;<br>&lt;cfif mailsuccess&gt;<br>&lt;insert user into database&gt;<br>&lt;cfelse&gt;<br>Tell them it failed.<br>&lt;/cfif&gt;</p><p>This way, you *really* know if they've entered a valid email address before inserting them in the db...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653249">7</a> by Brad
		posted on 5/22/2006 at 9:32 PM
		</div>
		<div class="comment_text"><p>That probably won't work well. Some mail servers take a while to send email and sometimes it'll take a while for them to bounce back if there's no valid address.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653251">8</a> by todd
		posted on 5/22/2006 at 10:03 PM
		</div>
		<div class="comment_text"><p>Not FF - just a plain old vanilla cfform - format="html" - the validator still works, just gives a js popup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653253">9</a> by Raymond Camden
		posted on 5/22/2006 at 10:10 PM
		</div>
		<div class="comment_text"><p>Oh, heh. Call it "Old Fogey" disease. I like to do my own forms and validation. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653261">10</a> by Geoff
		posted on 5/22/2006 at 10:48 PM
		</div>
		<div class="comment_text"><p>&gt;That probably won't work well. Some mail servers take a while to send email and sometimes it'll take a while for them to bounce back if there's no valid address.</p><p>Very true, however, I'm not using it to trap bounces - just to be sure that the &lt;cfmail&gt; tag is happy with the destination email *before* it gets into the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653258">11</a> by Jordan Clark
		posted on 5/23/2006 at 4:07 AM
		</div>
		<div class="comment_text"><p>An even better solution is the Email Verifier jar available from <a href="http://disq.us/url?url=http%3A%2F%2Fcfdev.com%3A9VTk1mX_aue13ePl8o21Oo923Gk&amp;cuid=3321886" rel="nofollow noopener" title="cfdev.com">cfdev.com</a> which will actually verify that the email address is correct, do DNS checks on the domain, and then establish a connetion to the remote mail server to check if the user does indeed exist.</p><p>$50, but well worth it if you send out any volume of mail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653260">12</a> by ziggy
		posted on 5/23/2006 at 9:10 AM
		</div>
		<div class="comment_text"><p>Never, ever, enter an email into the db for a mailing list until you send an email and they click a link to validate it.</p><p>The email should have a link with a url to enter the email in the db and use a var e=encodedEmailAddress. Do not use "email" for the variable or it will count towards spam scores.</p><p>And always remember: the universe has decreed that butterfly catching is evil.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653265">13</a> by dickbob
		posted on 5/23/2006 at 12:09 PM
		</div>
		<div class="comment_text"><p>I'm with ziggy, nearly.</p><p>I put the email address in the db with a UUID as an identifier (sounds like Ray is doing the same using a field called token). I send the provided address an email with a confirmation URL which has the identifer in the address. The user clicks the URL in the email and I ask them to confirm the email address again. If the UUID identifier matches with the email address then all's well so I capture the confirmation date/time and this is used as the flag to say the user is valid to go on the mailing list.</p><p>I then have a scheduled task to delete unconfirmed applications to join the mailing list that were inserted over, say, 10 days ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653263">14</a> by Raymond Camden
		posted on 5/23/2006 at 3:00 PM
		</div>
		<div class="comment_text"><p>ziggy: Validation - one of things I'm planning on doing at the end of the series is adding a validated flag, sending an email, and having the user end up on a page that sets the validated flag to true. I agree it is important, but felt it could wait till the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653264">15</a> by ziggy
		posted on 5/23/2006 at 5:41 PM
		</div>
		<div class="comment_text"><p>&gt;&gt;I agree it is important, but felt it could wait till the end.</p><p>I don't see the point in doing anything at all until they validate it for you.</p><p>I've run my own mailing list for years. Tons of junk gets entered otherwise, even addresses that are good but will never get delivered anyway because of filters, or someone adds someone else, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653262">16</a> by Raymond Camden
		posted on 5/23/2006 at 5:44 PM
		</div>
		<div class="comment_text"><p>Well, ok then ziggy. Either way, it will be in the series. Not all sites require it, so I'm not starting off with it, but I will be adding it in the last step.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653267">17</a> by greg carron
		posted on 8/1/2006 at 6:45 PM
		</div>
		<div class="comment_text"><p>ray,</p><p>thank you for the mailist tutorial...i've learned alot about CFCs and how the work.... i'm trying to customize the form, for a personal newsletter mailist..by adding more info to the db..<br>...i have one small simple question for you if i could ask...i'm just starting out in CF coding 'newbie'...new to CFCs...just so u know...k</p><p>i'd like to add a few fields like 'name' and 'city' to the form on the subscribe.cfm page...but i get an error when i do that...</p><p>what do i have to change on that page &amp; maybe some other code on the mailist.cfc aswell?....</p><p>any code would really help me out..</p><p>thank you in advance...</p><p>btw...i attend your CFC session at CFUnited this year...good work..you have real good presentation skills when u explain coldfusion and i appreciated that...thanks...</p><p>greg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653266">18</a> by Raymond Camden
		posted on 8/2/2006 at 12:25 AM
		</div>
		<div class="comment_text"><p>The CFC expects the personal data to come in, so you would need to pass that in. Then the query that inserts JUST the email would need ot be modded to insert the other info as well. With me so far?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653268">19</a> by greg carron
		posted on 8/3/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>ray,</p><p>thanks i got it working...</p><p>you pointed me in the right direction...</p><p>appreciated...</p><p>greg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653269">20</a> by Carlos
		posted on 2/24/2007 at 2:52 AM
		</div>
		<div class="comment_text"><p>Hi, I'm new to cold fusion and while I've given up on setting up cold fusion to work with my intel-based macbook pro (I tried the "difinitive guide" but encountered problems), I still want to use cold fusion and have set up a hosting plan that supports it.</p><p>For my first project I decided to build a mailing list since I thought it would be a good way to start (I have your book, btw). I just can't figure out what to do with that tables.sql file in the zip file. There is no application associated with .sql in my laptop to get it to open and my hosting provider (Godaddy) doesn't have a way for me to open .sql files and create a database out of them.</p><p>Would appreciate any feedback you might be able to spare on this. Great site, looks like a wealth of knowledge I'll be ttapping into in the future.</p><p>Thanks,<br>Carlos</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653271">21</a> by Raymond Camden
		posted on 2/24/2007 at 2:58 AM
		</div>
		<div class="comment_text"><p>The SQL file is a file that creates a sql table. You use it with a database client. So for example, for SQL Server you could use SQL Management Studio.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653272">22</a> by Carlos
		posted on 2/24/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>What if I'm using MySQL and I don't have access to SQL Management Studio? Is there any way I can create the table manually?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653270">23</a> by Raymond Camden
		posted on 2/24/2007 at 3:47 AM
		</div>
		<div class="comment_text"><p>Your host will have _some_ way to work with MySQL. You need to ask them how folks typically manage their MySQL dbs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653273">24</a> by Carlos
		posted on 2/24/2007 at 5:01 AM
		</div>
		<div class="comment_text"><p>Okay, I think I'm figuring this whole thing out. There is indeed a way to import SQL files into my database. However, I got this error upon doing so:</p><p>#1064 - You have an error in your SQL syntax. Check the manual that corresponds to your MySQL server version for the right syntax to use near 'if exists (select * from dbo.sysobjects where id = object_id(N'</p><p>Godaddy tells me they are using MySQL 4, I take it your SQL syntax is for MySQL 5??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653274">25</a> by Raymond Camden
		posted on 2/24/2007 at 7:05 AM
		</div>
		<div class="comment_text"><p>It was for SQL Server. You could just look at what is there and recreate it manually. It isn't a complex table. If this is your very first time doing DB stuff in general - well it may be a bit tough. I'm heading out for the weekend and if you can't get it figured out, let me know and I'll make you a MySQl script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653276">26</a> by Carlos Solorzano
		posted on 2/26/2007 at 11:27 PM
		</div>
		<div class="comment_text"><p>Yes, this is my first time doing any kind of DBA stuff. I managed to get the file open on my own and went through it hoping to figure out what it all means but all I can tell is that it creates a table named "subscribers" with two fields; "email" and "token", both of which are of type "Varchar" and have a limit of "255" and "35" respectively.</p><p>I can't figure out what the Attribute value is but I think the Null value is "NOT NULL".</p><p>That's pretty much all I could make of it. Not sure what the other stuff is for. Do you know if there's a script converter somewhere that would be able to convert SQL scripts to MySQL scripts?</p><p>I'd hate to bother you with my stupid inability to read a simple script...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653277">27</a> by Raymond Camden
		posted on 2/27/2007 at 12:01 AM
		</div>
		<div class="comment_text"><p>Well varchar simply means the type of data. MySQL supports varchar, so just create a new table, use the same column names, and use varchar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653279">28</a> by Carlos
		posted on 2/27/2007 at 3:56 AM
		</div>
		<div class="comment_text"><p>actually, is that 3 fields or just 2? Looks like there might be 3 (ID, email and token).</p><p>And what about the Attribute value? and are they all auto_increment (i would think only id would be...)?</p><p>Also, I have id set as primary and email set as unique, but did not specify anything for token, is this ok?</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653278">29</a> by Raymond Camden
		posted on 2/27/2007 at 7:12 PM
		</div>
		<div class="comment_text"><p>Two fields. Don't worry about the attributes or even primary keys for not. Keep it simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653281">30</a> by Carlos
		posted on 3/7/2007 at 12:02 AM
		</div>
		<div class="comment_text"><p>Ray, I tried running this script but I got a weird error:</p><p> The error occurred in D:\Hosting\los1sol\Application.cfc: line 35</p><p>33 : 		&lt;cfargument name="eventname" type="string" required="true"&gt;<br>34 : 		<br>35 : 		&lt;cfdump var="#arguments.exception#" label="Error"&gt;<br>36 : 	&lt;/cffunction&gt;<br>37 :</p><p>You should know that I wasn't able to name the DSN "maillist" because the name is automatically generated by the system. However, when I looked into the files you created in my hosting directory, I notice that some things have changed. Specifically, places that once had "mailist" have now been changed to "mysqlcf_subscriptionLT" which happens to be my DSN name. So I think that's okay.</p><p>But I still have no idea what that error message means.</p><p>To further confuse things, I switched hosting packages to a windows box (still using godaddy) which now allows me to use a SQL server if I want (i'm still using mysql). I would normally switch to that and use the table.sql script you created but I can't figure out how to actually run it in their SQL admin page (and they don't know either).</p><p>So just a bit off-topic, but can you recommend a good, reasonably priced, coldfusion hosting service? One that would be able to help a novice like myself?</p><p>Thansk a bunch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653282">31</a> by Raymond Camden
		posted on 3/7/2007 at 1:39 AM
		</div>
		<div class="comment_text"><p>You need to send me the other part of the error. It should be the detail/message.</p><p>I won't touch Hosting - it typically brings out 10,000 posts. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653283">32</a> by Omar
		posted on 3/29/2007 at 11:22 PM
		</div>
		<div class="comment_text"><p>Ray:<br>I just started using Macromedia Studio 8 and have developed a webpage. I would like to make my page interactive where the person viewing the page can post a comment or question. I would like that question to post directly to my email (with out going through their email client) and then have the question or comment disappear upon pressing submit. Is there a way to do this using cold fusion, dreamweaver or other software?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653284">33</a> by Raymond Camden
		posted on 3/30/2007 at 5:27 AM
		</div>
		<div class="comment_text"><p>Yes, you can absolutely do this with ColdFusion. I can't answer it in a simple blog comment, but it is very possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653286">34</a> by Cf wanabe
		posted on 9/22/2008 at 1:20 PM
		</div>
		<div class="comment_text"><p>Thanks for the great tutorial. any news on the second part? thank you!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653291">35</a> by Raymond Camden
		posted on 9/22/2008 at 3:49 PM
		</div>
		<div class="comment_text"><p>On this blog entry, look right above the comments. There is a related entries list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653287">36</a> by Carter
		posted on 11/13/2008 at 11:36 AM
		</div>
		<div class="comment_text"><p>I'd like to follow up on the discussion about validating the email address... Raymond you mentioned a $50 tag that will test it, and others talked about a simple link-back email (which is something I just implemented). The problem with the former should be obvious and the problem with the latter is that the "from" address in that initiating email gets all the bounce-back messages. ziggy is there some automatic address validation taking place in your process that you failed to mention that doesn't involve the human touch? I realize there's nothing like the real thing (baby), but I want to minimize failed mail notices in this process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653290">37</a> by Lee
		posted on 11/19/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>the SQL script to the lesson don't work for me. MySql 5.0 administrator. I'm new to this all and trying to add a email form to a site i'm building, the error is 1064 while running the script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653288">38</a> by Raymond Camden
		posted on 11/19/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>Lee, the SQL script is for SQL Server. You should be able to make the tables yourself in MySQL. There is only one table with 3 columns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653289">39</a> by Lee
		posted on 11/20/2008 at 1:40 AM
		</div>
		<div class="comment_text"><p>I said I was new to this and I mean new, so this is for MS sql sever? the db <br>should consist of a firstname, lastname and email address? Is this correct? <br>Then this is simple enough. if I am correct? then, I'm using a Cartweaver <br>shopping cart, can I us the data in this db? lets say any table/tables that <br>contain the first last and email information. if is sound like I'm up on <br>this :) I'm not! just trying to learn. thanks so much for you so speedy <br>reply :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653312">40</a> by Lee
		posted on 11/20/2008 at 1:44 AM
		</div>
		<div class="comment_text"><p>I notice you mention CF MX7 i'm using CF8 developement edition, Is this ok? I don't to waste anyone time. I'm I posting this in the right area? the option reads "Add Comment"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653293">41</a> by Raymond Camden
		posted on 11/20/2008 at 4:35 AM
		</div>
		<div class="comment_text"><p>The file I used is for MS SQL Server. You can use other databases if you feel comfortable with them. The CFML code isn't database specifc. The table I used is named subscribers. It has 3 properies: id (integer), email (varchar), and token.</p><p>I can't speak to Cartweaver.</p><p>My code should work fine in CF8. CF is normally very backwards compatible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653295">42</a> by John
		posted on 8/11/2011 at 10:12 PM
		</div>
		<div class="comment_text"><p>Ray,<br>A table is created in the "maillist" dsn and is called "subscribers." I also noticed that you named a file the same as what your dsn is and have similar named functions and file names, "subscribe" and "subscribers." My question is if I wanted to create a second table within the same dsn and do another set of subscription emails, how would I do that? Creating the table is easy enough, but i'm a little lost and confused in the scripts. Help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653298">43</a> by Raymond Camden
		posted on 8/12/2011 at 1:29 AM
		</div>
		<div class="comment_text"><p>The code handles subscribing you to one list by adding you to a table. I'd simply make the subscribe method take an argument - the name of the list to subscribe to. In the method, you check the table that is used for that maillist.</p></div>
	</div>
</div>
		