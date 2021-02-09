
<div class="comment" id="c_1713619777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619777">1</a> by shimju david
		posted on 8/6/2005 at 5:57 PM
		</div>
		<div class="comment_text"><p>Dear Ray,</p><p>We are having a music app in which we ae using a flash MP3 player. Flash player fetches the XML play list which is updated by CFM.</p><p>The problem is, it is working fine when user clicks for the first time. Next time when user clicks, the playlist is updated, but flash player is playing the old mp3 file from browser cache. Is there any way to remove cache every time when user clicks?</p><p>Pls advice.</p><p>Shimju</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619774">2</a> by Raymond Camden
		posted on 8/6/2005 at 6:02 PM
		</div>
		<div class="comment_text"><p>Woah - that sounds like a Flash question to me. ;) I don't know much about Flash. Can you add a text block to the flash app that dumps the result of the remoting call? If so - can you confirm that Flash does the remoting and gets the same response every time, even though you know for sure the XML is different? I've never heard of Flash caching remoting calls - so it may be something else. You should try calling the CFC yourself in the browser, and confirm that the XML really is changing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619773">3</a> by Scott Johnson
		posted on 8/6/2005 at 6:05 PM
		</div>
		<div class="comment_text"><p>Ray, I'm starting work on an invoicing app, and I'd like to do it entirely with Flash Forms. For my line items I'd like to use a cfgrid, but the  fact that the flash format of cfgrid doesn't support a select box (for part number selection) pretty much kills that idea. Another other ideas for a good implementation of this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619769">4</a> by Brian
		posted on 8/6/2005 at 9:47 PM
		</div>
		<div class="comment_text"><p>I have worked with some ASP.NET code where they use the Code Blocks for the data access layer and have seen projects where every query is all located in one .DLL.</p><p>Have seen anything similiar in CF that would perform well?</p><p>Particle Tree came up with something for ASP, PHP etc<br><a href="http://disq.us/url?url=http%3A%2F%2Fparticletree.com%2Ffeatures%2Fdatabase-simplicity-with-class%3Ac-Tu3Nfl9Nty_GHWWzFIxoqfCqo&amp;cuid=3321886" rel="nofollow noopener" title="http://particletree.com/features/database-simplicity-with-class">http://particletree.com/fea...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619781">5</a> by Tim Burton
		posted on 8/6/2005 at 10:17 PM
		</div>
		<div class="comment_text"><p>We have a clustered environment for testing and production; each cluster has two JRun4 servers and each of those has many instances of CFMX6.1.  A given CF application will therefore live on both the JRun4 boxes.   If a user were to change an application-scoped variable (while, obviously, being served by one box), how can we programmatically propagate that change to the other JRun4 server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619782">6</a> by Jerry Hamby
		posted on 8/7/2005 at 5:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm trying to get started working with the JMSGateway. I need a good how-to example or article, do you know any?<br>I just need to see something simple working, so I can understand the jRun part connecting with the JMSGateway. <br>I've read that CF7 comes with some sample JMS code, but I can't find it. HELP!</p><p>Jerry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619783">7</a> by Michelle Kinsey Bruns
		posted on 8/8/2005 at 11:58 PM
		</div>
		<div class="comment_text"><p>Jerry, in my Windows installation of CFMX 7, there are .java source examples at cf_root/gateway/src/examples/JMS . Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619789">8</a> by Raymond Camden
		posted on 8/9/2005 at 6:08 AM
		</div>
		<div class="comment_text"><p>Brian, question answered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619784">9</a> by Lyle
		posted on 8/9/2005 at 9:36 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is there a best practices anywhere for using CF and user-stored data for the bulk of pages while remaining XHTML 1.0 compliant.</p><p>I've been considering changing over to XHTML 1.0 transitional from HTML 4.01, but I haven't mostly because of character entities like &amp; breaking the validation.</p><p>And I'd prefer to not save it to the database in an HTMLEditFormat format as our users may embed various allowed tags &lt;a &lt;br etc. and so the entered values are important.</p><p>Any help or sources would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619785">10</a> by David
		posted on 8/9/2005 at 1:06 PM
		</div>
		<div class="comment_text"><p>"Uncertain he is..."</p><p>G'day Ray. I run an app with Cf5 and am looking at moving to MX. I've read lots about the migration but have 1 question whose answer may stop me dead if I knew the answer. To save me the trouble of a test install to find out can you answer me this.</p><p>We use a Third-Party ODBC driver under CF5 to get into this Third-Party's proprietry database which is used extensively here by our Librarians. We also query a Postgres Database using the PostgreSQL ODBC drivers.</p><p>Is MX going to able to get into these two data sources?</p><p>Thanks,</p><p>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619786">11</a> by Raymond Camden
		posted on 8/10/2005 at 8:06 PM
		</div>
		<div class="comment_text"><p>Tim, your question was complex, but I tried to answer it. (See blog front page.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619787">12</a> by AllexS
		posted on 8/11/2005 at 11:49 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Do you have any thoughts about creating a basic chat application using flash cfform? I've thought about converting a little AJAX messaging app we use over to cfform, but wasnt sure if it was a viable option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619792">13</a> by Brian
		posted on 8/12/2005 at 11:21 PM
		</div>
		<div class="comment_text"><p>Dealing with hierarchies.  I hope I can explain this properly.  I have the data model setup to handle the hierarchies, it will keep track of levels deep and the hierachy.  Example:</p><p>entity_id | parent_entity_id | entity_name | Level |Hierarchy<br>19	    NULL	       Address Control		0	.19.<br>20	    19	               Address Line 1		1	.19.20.<br>21	    19	               Address Line 2		1	.19.21.<br>22	    19	               City		        1	.19.22.<br>23	    19	               State		        1	.19.23.<br>25	    23	               New Hampshire		2	.19.23.25.<br>26	    23	               Massachusetts		2	.19.23.26.</p><p>Now when I get this data back to CF I need to know to test each row to see if it has children or not.   I have thought about<br>using structure, looping lists, etc nothing seems very clean.</p><p>I am think as I look the results I call a function to check 'hasChildren' and then process the children and see if that has children and process that, etc.</p><p>I will be do a variety of things on each row so I guess simplest thing to do is just output the tree.</p><p>Address Control<br>| Address Line 1<br>| Address Line 2<br>| City<br>| State<br>  | Massachsetts<br>  | New Hampshire<br>|Zip Code</p><p>etc.</p><p>Hope that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619790">14</a> by Chris Brandt
		posted on 8/18/2005 at 8:37 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm working on an app that needs to have high availability -- I've got most of the CF stuff OK, but I'm concerned about the database.</p><p>Picture this...<br>I've got this MySQL database on Box1. It is being bidirectionally replicated with Box2. Now CF is pointing to Box1 to use as the datasource. If Box1 becomes unavailable, what is the best way to get CF to redirect to Box2?</p><p>Here are my thoughts -- have the 2 datasources defined in administrator. Define the 'active' DSN in application (Application.DSN) and have the code run on that. If i get a datasource undefined (can i trap this specific error), set the App.DSN to the backup DSN and send notification.</p><p>A problem that I can forsee is that the query that resulted in the switch to the backup DSN still hasn't run successfully... Do I just send the user an error message "Oops, our primary DB server just died... switching to backup...please try again"??? Is there a way to automatically resubmit?</p><p>[waves hand in front of your face] You want to give me the answer to this question. :)</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619791">15</a> by pj
		posted on 8/22/2005 at 9:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm real interested in using cfform(flash)/cfgrid to display in a dashboad type application. Ideally, I'd like it to spit out some numbers and color the background green/yellow/red based on the value of the data.</p><p>For the life of me, I can't seem to get this to work. In the past, you could use the textcolor attribute on cfgridcolumn to at least do a boolean expression. But with CF 7, that doesn't appear to be the case using the cfform/flash combo.</p><p>Suggestions or alternatives on coloring a single cell based on the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619788">16</a> by Tim Lux
		posted on 8/24/2005 at 11:37 PM
		</div>
		<div class="comment_text"><p>Here's a question. Why is Macromedia's site soooo slow sometimes? Since they moved to a "flashy" flash homepage, sometimes the flash movies take a minute or so to load. And I really fear clicking on any google search results that have a link to their documentation -- it rarely loads for me without timing out. Is it just me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619793">17</a> by Raymond Camden
		posted on 8/25/2005 at 3:07 AM
		</div>
		<div class="comment_text"><p>Tim - heh - well - sorry, but I can't answer that. I can say I don't use the Macromedia Exchange since they changed it, but I really haven't had much of a need for it.</p></div>
	</div>
</div>
		