
<div class="comment" id="c_1713712395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712395">1</a> by Kevin Schmidt
		posted on 2/9/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Hey Ray, check out BIRT.  It's java based and has a nice eclipse plugin.  I've used it before and it works quite well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712399">2</a> by Nathanael Wait
		posted on 2/9/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>Try apache FOP.  We are using that and java inside CF to generate reports.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712396">3</a> by Douglas Knudsen
		posted on 2/9/2009 at 7:59 PM
		</div>
		<div class="comment_text"><p>I've been involved with dozens of reporting apps based around CF.  I've never used the report builder tool, sucked in my opinion and well, hard to implement all the goofy 'must haves' from business requirements.  I've always built them completely in CF/HTML.  Of course now you could use Flex/Ajax depending on requirements.  Its not difficult to code drill down/ups in CF either.  Just my $0.02.</p><p>I've implemented OpenReports before too, nice tool I thought, though drill down stuff was not so easy, that may have changed with more recent releases. Its free and open and Java based.  Should play well in JRun and all too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712398">4</a> by Raymond Camden
		posted on 2/9/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>Good comments guys - but can you include some URLs for folks too lazy to Google? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712406">5</a> by Douglas Knudsen
		posted on 2/9/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>geesh, Ray, so demanding!  :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Foreports.com%2F%3AFiKXJPdLg3Ti4TlQBTL_iCtR9Z4&amp;cuid=3321886" rel="nofollow noopener" title="http://oreports.com/">http://oreports.com/</a>  BTW, its Birt friendly as well as Jasper, etc...</p><p>The Birt link for KS <a href="http://disq.us/url?url=http%3A%2F%2Fwww.eclipse.org%2Fbirt%2Fphoenix%2F%3Ae6fobYAgv3-JHTFOew0cKhbomcs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.eclipse.org/birt/phoenix/">http://www.eclipse.org/birt...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712408">6</a> by Paul Kukiel
		posted on 2/9/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>We use report builder quite a bit from simple data reports upto the final result of a quoting system.  Reportbuilder can be clunky but its often faster to produce a report then drawing it up in HTML.  At the Melbourne CFUG we had a presentation of Reportbuilder and how easy it was to get going and most people were impressed as they had never used it.  Perhaps we will see more adaption if/when it's an eclipse plugin ( or part of Bolt )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712407">7</a> by Dave Ferguson
		posted on 2/9/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>For me, I have never been a fan of the "canned" reporting tools.  I always felt that they were to restrictive or could not handle dynamics very well.  I tend to create reports using ColdFusion then output to PDF, XLS, or what ever the client needs.</p><p>my 2 cents.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712405">8</a> by David
		posted on 2/9/2009 at 8:18 PM
		</div>
		<div class="comment_text"><p>Reporting is a big part of what we do, and CF Reporting plays a bit role in that.</p><p>Typically, we use .cfr's for rather simple pie and bar charts. In our "standard" reporting package for our product we use Flex charting, which allows dynamic drilldown's, etc. We can't achieve that (natively, at least) with .cfr's. We also use good old &lt;cfchart&gt; on occasion.</p><p>We also struggle with the data load, although, we find that the biggest problem is on the DB side (of course, CF timeout limits also affect functionality, but we can override that on the reporting pages).</p><p>I think we're right on the brink of needing to go from reporting to warehousing, which will bring a whole new set of challenges.</p><p>Hope we can help some.</p><p>Cheers,</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712409">9</a> by Tom Chiverton
		posted on 2/9/2009 at 8:35 PM
		</div>
		<div class="comment_text"><p>Either HTML, cfsavecontent and cfpdf or Apache POI via. our own wrapper CFC and JavaLoader if it's more complex.<br>Report Builder doesn't run on our Linux workstations, and even if it did it seems people say it's very limited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712428">10</a> by Evagoras Charalambous
		posted on 2/9/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>These guys have a great product line but it's not free:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.activepdf.com%3ALb8JQQQ2h2iS7ntMqAmy_7J2pqA&amp;cuid=3321886" rel="nofollow noopener" title="www.activepdf.com">www.activepdf.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712426">11</a> by Joel Cox
		posted on 2/9/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>I use ColdFusion ReportBuilder for formal reports. Having used Crystal Reports in the past, the interface and concepts seem much the same. It's a little clunky if you want to feed data in at runtime instead of building the query inside the report, but it's sure better than trying to do it in HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712425">12</a> by Todd Rafferty
		posted on 2/9/2009 at 10:41 PM
		</div>
		<div class="comment_text"><p>Seems I'm stuck with using Apache POI to build a spreadsheet section in every spec I get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712427">13</a> by Dutch Rapley
		posted on 2/9/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>For excel, I typically style a "template" spreadsheet the way I want, then save it as an xml file. I then use CF to populate the template. You even have the ability to create new tabs/sheets on the fly if you want to group data by categories. You can then pass the spreadsheet to the user with cfcontent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712429">14</a> by Alex G.
		posted on 2/10/2009 at 12:17 AM
		</div>
		<div class="comment_text"><p>Thanks for all the great comments.  We use HTML to PDF for our more basic reports, but a report builder becomes a must at a certain point.  All our reports are on the fly and contain up to date information with many moving parts.</p><p>Crystal works great for this until you add dynamic images.  My employer is an extreme stickler to have things exactly as they want them to look.  I've heard about Active Reports in the past and might give that a try.</p><p>I agree with the other commenter that once you move from the built in query, CF Report builder starts to lose you.  We also rely almost exclusively on stored procedures and passing parameters to subreports from the results of the stored procedure.</p><p>Right now I'm running reports manually in Crystal so they can have their dynamic images until I find a better way.  Thanks again!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712431">15</a> by thinman
		posted on 2/10/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>It took a few months to successfully get complex CF reports built with CF Report Builder.  Lots of trial and error.  Lots of nested reports where the nested reports needed params passed from the parent(s).  Formatting, as always, was the most difficult challenge (besides the moving target of a client arbitrarily reversing themselves on what data elements needed to be in the reports, but that's another story altogether..)</p><p>Sounds like your current process of handling most of the data-intensive conditioning in the DB is right on the money, although sometimes we may wish we could do that right in our reporting environment of choice.  Having done nearly all of the conditional stuff in SQL views, and then nesting them (where appropriate) within a master view worked well.  Performance issues notwithstanding, it's been successful.  Having said that, I did need to go back into my views and design a few specifically for processing in CF Report Builder, which may seem sorta counter-intuitive.</p><p>If you're sticking with CF Report Builder, here's a couple of tips for formating, dealing with ntext fields from the DB, and dynamic conditional images; please forgive the redundancy if you've already discovered these on your own:</p><p>1.  Eliminating formatting issues regarding nested reports and great big gaps: after designing the nested report, go back into its parent report, position it exactly where you need it, then collapse it to a single line.  Just grab the size handle attached to the bottom of the nested object and drag it up until the object's as flat as possible. You may then need to nudge the collapsed report around minutely with the arrow keys, but I found that once I got the floating versus absolutely positioned elements all sorted out, that the large gaps virtually eliminated.</p><p>2.  Dealing with NTEXT:  Added the fields from the SQL views using Report Builder's visual query builder.  Saving query gets an error, and the report bombs.  Opened the query back up and clicked into the visual query builder's source editor and changed the CF SQL datatype for ntext to STRING.  Saved and ran without error.  Caveat: subsequent revions to any part of the master or nested report(s) may require this process to be repeated.  Report Builder seems to revert this datatype back to its default if any of the queries are revised for any reason.</p><p>3.  Dynamic Images:  You may find that storing image locations/direct paths in the db works better than as BLOBs.  Seems to slow things down a bit, too, but getting the correct images consistently was the goal.  I also pre-processed the images so that all images had the same dimensions. Since skewed, shrunken, or mis-proportioned images was definitely not the goal, I just used Fireworks to to matte the images.  Opened up the images in Fireworks CS3, created a new layer beneath the original image that was the desired width and height (dictated by the size of the area within the report where the image would appear), and exported as .png with the new layer as the transparent alpha channel.  Processed each one manually that way, but if there's a lot, you can batch process them.</p><p>Sorry or the long comment on your post, but I hope it helps in some way!  Maybe I shoulda just downloaded BlogCFC and created my own blog.  Heh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712434">16</a> by Raymond Camden
		posted on 2/10/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>@thinman: Your comment isn't too long. I mainly only mind long _code_ postings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712435">17</a> by denny
		posted on 2/10/2009 at 3:00 AM
		</div>
		<div class="comment_text"><p>JasperServer is what we use, and it's the cat's meow.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjasperforge.org%2Fplugins%2Fproject%2Fproject_home.php%3Fgroup_id%3D112%3Amz4b3iSGf8bT9AG9XQE2_I0OsgE&amp;cuid=3321886" rel="nofollow noopener" title="http://jasperforge.org/plugins/project/project_home.php?group_id=112">http://jasperforge.org/plug...</a></p><p>(Tiny-er: <a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Fcsw2es%3AzacUKGIKwmo_-tezza8RBlxkADM&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/csw2es">http://tinyurl.com/csw2es</a> )</p><p>Really excellent! With JasperReports, iReport, and JasperServer, you've got a complete solution.  -- iReport /destroys/ CF's ReportBuilder, and you can set JasperServer up to do all kinds of stuff.  JasperReports is what CF uses under the hood.</p><p>Had a lot of fun with those packages, personally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712433">18</a> by Dave DuPlantis
		posted on 2/10/2009 at 8:07 PM
		</div>
		<div class="comment_text"><p>eh ... we used ActivePDF the last place I worked. It was tolerable, but it didn't work as smoothly as we'd liked, and at the time we had to set up an ASP page to use it. YMMV.</p><p>We used a custom charting package for graphs. The name of that package escapes me ... it did decent graphs, but it wasn't particularly user-friendly in terms of passing parameters and such. We probably should have wrapped it with a CFC ... oh wait, I remembered! It's NetCharts, from Visual Mining. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.visualmining.com%2F%3ART4oeGcBgSxkggUdMkJSzEkBIX4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.visualmining.com/">http://www.visualmining.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712437">19</a> by Jeff Self
		posted on 2/10/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>Have you looked into Jasper Reports?  Very powerful stuff.</p><p>It's open source, but they have a commercial version that has a lot of GUI stuff.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjasperforge.org%2F%3A0PXVjyMJCTmgpQdIuiSvf9c_NOw&amp;cuid=3321886" rel="nofollow noopener" title="http://jasperforge.org/">http://jasperforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712438">20</a> by Alex G.
		posted on 2/10/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>JasperReports looks great, and I do like the fact that Adobe is using it as well "under the hood."</p><p>This may be off topic, but has anyone used a JDBC driver for SQL Server?  If so, which one?  I've tried two now and they connect to SQL server fine, but I don't see any tables/stored procedures listed so I'm doing something wrong.</p><p>I will post any successes on the reports here!  Thank you so much for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712436">21</a> by Alex G.
		posted on 2/10/2009 at 9:17 PM
		</div>
		<div class="comment_text"><p>Actually I take that back, the ODBC bridge works just fine on the PC, but in OSX or PC I can't connect using native drivers.  I'll work on it, and let you guys know.  Jasper looks really good...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712441">22</a> by Henry Ho
		posted on 2/11/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>I use use CF Report Builder, but couldn't figure out how to draw a table with border.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712442">23</a> by Alan Barlow
		posted on 2/12/2009 at 12:34 PM
		</div>
		<div class="comment_text"><p>Hi, we're using AmCharts for embedding charts and graphs into reports... you simply use coldfusion to generate the basic xml data files and voila!</p><p>It is free to use too!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.amcharts.com%3AsS3EOf6RogwMcxlhHIABAu1uIok&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amcharts.com">http://www.amcharts.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712445">24</a> by Alex G.
		posted on 2/12/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>That looks like another good product, but the interest in charting is actually very low for us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712444">25</a> by amira
		posted on 3/11/2009 at 3:12 PM
		</div>
		<div class="comment_text"><p>Did anybody think about using birt to preview xsl-fo:meaning use birt to open and edit reports produced by fop by just an drag and drop. I'want to develop such project, I need your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712446">26</a> by Dan Roberts
		posted on 3/18/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>I am with Henry Hoe on not being able to create tables. I have a report now that needs to have a table that may or may not display some rows conditionally.</p><p>I opted for CFDocument but when I was 99% done I noticed i can't prevent page-breaks in the middle of content blocks. This is done in CFReportBuilder using a property on a sub-report. The docs for CFDocument say that the style "page-break-inside" is supported but it doesn't actually work. I'm basically stuck with a solution that will require trial and error every time a report is created :-\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712450">27</a> by Alex G.
		posted on 4/7/2009 at 10:45 PM
		</div>
		<div class="comment_text"><p>This software: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.milletsoftware.com%2FVisual_CUT.htm%3ASgoKFw4KocB6Hk9F32Drp0TeprY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.milletsoftware.com/Visual_CUT.htm">http://www.milletsoftware.c...</a> did everything I needed and there is so much more to discover from it. E-mail support responses are almost instant, and I've spoken with the main developer a few times as issues were worked out.</p><p>No worries on page breaks, or any of the strange issues had.  I just ran cfexecute against the software and produced a PDF.</p><p>Thanks for all the suggestions.  Jasper Reports looks promising.  I'll continue to keep my eye on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712448">28</a> by Brian O.
		posted on 4/11/2009 at 5:27 AM
		</div>
		<div class="comment_text"><p>I've done nearly a hundred ReportBuilder Reports with CF7 and 8. I also reported many bugs in the CF8 beta of which most were fixed. Pre-CF8, the ReportBuilder was awful, but I think CF8 now is decent for PDFs, clunky with spreadsheet reports, but doable. Not sure why people are having problems passing in data, that part worked fine for me. I use POI for when I need to manipulate existing spreadsheets, but not usually for creating new ones, except once I think. For creating spreadhseets I like using cfcontent type="application/msexcel" and cfheader. For simple PDFs I prefer using cfdocument, but as one commenter mentioned, it has its limits. I hit the same one related to pagebreaks and had to cluge the formating. From now on if I see the report requirements being complex, requiring page breaks in certain places or special grouping required, I'd use the ReportBuilder, but only because I know it well. If it got super complex, I might try a new solution. The Jasper Reports sounds interesting. Hopefully CF9 ReportBuilder will be improved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712447">29</a> by Antoine
		posted on 4/15/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>Well, so far Reports Builder (CF8) is quite easy to use for simple reports. <br>I do still hit a problem : the XHTML formating text parameter for query fields does not seems to work (MS SQL ntext containing fckeditor edited HTML text). <br>Found no solution yet ...<br>Brian, as you seems advanced in its use, may you help ?<br>Could be a great time-saver for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712449">30</a> by Brian O
		posted on 4/15/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>Would need more details, but I know the attribute you referred to ('XHTML Text Formatting' a boolean field) and have it set to true in some of my reports and false in others (not sure why), but I've only generated PDF, Flash, Excel and maybe an RTF report so far with Report Builder, so I don't think it affected my reports. Are you trying to generate HTML or XML or what? I can only suggest posting a bug at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fmmform%2Findex.cfm%3Fname%3Dwishform%3Abt8hEYNhFBsE0K49CBvZ27oyPfU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/mmform/index.cfm?name=wishform">http://www.adobe.com/cfusio...</a> and checking the Adobe Forum at <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fcommunity%2Fcoldfusion%3AiKfOCQMdCF1WFhH3p5pVDK8Hflw&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/community/coldfusion">http://forums.adobe.com/com...</a>. Also if you google the problem I see you are not alone (e.g.,<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfreport.org%2Findex.cfm%2F2006%2F7%2F17%2FRB-update-up-on-the-Adobe-download-page%3AdylpUNJ3hZlo09lVWTQSpMQ_cbk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfreport.org/index.cfm/2006/7/17/RB-update-up-on-the-Adobe-download-page">http://www.cfreport.org/ind...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.experts-exchange.com%2FWeb_Development%2FSoftware%2FColdFusion_Studio%2FQ_24111137.html%29%3AmBK3h-XdD05f-gA3t6SbYlbfxK0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.experts-exchange.com/Web_Development/Software/ColdFusion_Studio/Q_24111137.html)">http://www.experts-exchange...</a>. Some of these allude to issues with what you are putting into the field and whether you are using a nonstandard charset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712452">31</a> by Antoine
		posted on 4/15/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>Brian,<br>I did browsed these topics, so far they didn't solve my issue. <br>But charset encoding may be a good search tip.<br>My MS SQL database is French (_CI_AS for sorting).<br>I'll try some cfprocessingdirective and other workarounds and will be back then.<br>Thanks for your quick response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712455">32</a> by Antoine
		posted on 4/16/2009 at 1:41 AM
		</div>
		<div class="comment_text"><p>Brian,<br>I've been searchin' around charset encoding but did'nt find no answer. The cfreport target format is PDF, but your question about format made me test HTML format (within a cfreprort tag). Editing the code, I discovered that the text was "html escaped" (ie: &amp; lt;p&amp; gt; for &lt;p&gt; [blanks after "&amp;" added to be sure they'll be readable in this post]). Looks excactly like an HtmlEditFormat-ed string ...<br>It seems to confirm that XhtmlText param is bypassed ... or I'm missing something ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712457">33</a> by Antoine
		posted on 4/16/2009 at 2:42 AM
		</div>
		<div class="comment_text"><p>Brian, I found the problem (by inserting different combinations of HTML instructions).<br>While a trivial &lt;p&gt;toto&lt;/p&gt;&lt;i&gt; titi &lt;/i&gt; will work, the whole string will be escaped as soon as an unrecognized sequence (as &amp;aacute ;) caracter will be found.<br>So the problem is identified ... not the solution yet.</p><p>Ray, please excuse me for 3 posts, quite unusefull in this topic. Tomorrow i'll do a follow-up in adobe's forum : <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fthread%2F419727%3Ftstart%3D0%3AcWVWhLe2UzxcgijTb7phgdRmCGE&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/thread/419727?tstart=0">http://forums.adobe.com/thr...</a> (time to go to bed here, in France).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712456">34</a> by denny
		posted on 4/16/2009 at 2:54 AM
		</div>
		<div class="comment_text"><p>@Antoine:  The allowed HTML tags are listed in the jasperreport docs somewhere (under the hood, CF is using jasperreports for all this stuff).</p><p>iReport /destroys/ the CF report builder, it's too bad CF wasn't able to leverage it instead.</p><p>Eh.</p><p>Carry on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712453">35</a> by Antoine
		posted on 4/16/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>@ Denny : I didn't find the whole list, but I now understand the limits of the XHTML Text formatting parameters. It is designed ONLY for presentation purposes, excluding all that is not "caracter related".<br>It means no Divs, Tables, Ifrmaes or so.</p><p>Also, html special caracters are NOT supported, we have to use ISO codes instead (with double pounds).</p><p>One step after another ... as I said, I'll keep on tracking this on adobe's forum, here: <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fthread%2F419727%3Ftstart%3D0%3AcWVWhLe2UzxcgijTb7phgdRmCGE&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/thread/419727?tstart=0">http://forums.adobe.com/thr...</a></p><p>Thanks again to you and Brian; it does help not to feel so loooooonly !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712459">36</a> by sirila
		posted on 5/1/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>Hi All,<br>We are trying to integrate coldfusion 8 and crystal reports 2008. i created a report and trying to call it using cfreport tag. all i get is a blank page being displayed. can anyone please... shed thought on this.i tried googling and tried copying the crep.dll file, tried custom installation but no use.please help me out with this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712460">37</a> by Dan Roberts
		posted on 5/1/2009 at 12:53 AM
		</div>
		<div class="comment_text"><p>@sirila</p><p>This might help:<br><a href="http://disq.us/url?url=http%3A%2F%2Fasreports.riaforge.org%2F%3A9QZmdBl1Fe2Rk3y2AeAyc2JZAjg&amp;cuid=3321886" rel="nofollow noopener" title="http://asreports.riaforge.org/">http://asreports.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712461">38</a> by sirila
		posted on 5/1/2009 at 6:09 PM
		</div>
		<div class="comment_text"><p>Dan,<br>thanks for the link. i downloaded that zip file.sorry it could be my ignorance i didnt find any clear instructions with <a href="http://disq.us/url?url=http%3A%2F%2Fit.how%3AagWWHnvrgjon1fw3tSb0P-9fP2Y&amp;cuid=3321886" rel="nofollow noopener" title="it.how">it.how</a> should i integrate that into mine. there are some cfc which point to version 10 and 11. should i change them to accommodate version 2008. im just lost on this. instead of integrating is there any way of calling crystal reports via business objects.<br>thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712463">39</a> by Brian O
		posted on 6/12/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>Antoine, I'm doing a cfform that uses cftextarea richtext="yes", storing that in SQL Server and pulling it to a cfreport using the XHTML Text Formatting attribute. I see what you are saying and even used the function you posted in the Adobe Forum linked above to get me further along. My users need to be able to add a page break, but of course the code for that causes the conversion to break. I hate to have to convert every character, especially since I don't know what a user might add, (e.g., an image) and not sure if that would work fully anyway. We must be missing something here. Has anyone found a solution or workaround related to passing html code to Report Builder? I wonder if it is being addressed in CF9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712465">40</a> by Antoine
		posted on 6/13/2009 at 12:55 AM
		</div>
		<div class="comment_text"><p>Brian, I posted my answer to adobe's forum, here : <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F2035559%3A4y2x3_fLRj7zrMhjDI50mTaisQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/2035559">http://forums.adobe.com/mes...</a><br>Hope it helps,<br>Regards<br>Antoine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712464">41</a> by Steve Caldwell
		posted on 11/6/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>See the link below for my fix for displaying dynamic HTML in a CFR</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dreamincode.net%2Fforums%2Findex.php%3Fact%3DST%26f%3D31%26t%3D130228%26st%3D0%23entry823181%3AfPB7I-mOiEh_aznpFYObsCSeugE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dreamincode.net/forums/index.php?act=ST&amp;f=31&amp;t=130228&amp;st=0#entry823181">http://www.dreamincode.net/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712466">42</a> by Ken Stephens
		posted on 1/26/2010 at 2:43 AM
		</div>
		<div class="comment_text"><p>We'd like to convert our charts from &lt;cfchart&gt; to SQL Server Reporting Services 2008.  The interface through cfhttp is a little flaky, though.  Does anyone have experience integrating SSRS 2008 with CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712468">43</a> by Mike Bernstein
		posted on 6/9/2011 at 11:14 PM
		</div>
		<div class="comment_text"><p>I am running Cold Fusion 9 and and Crystal Reports 2011 and I am trying to use the cfreport tag to run the crystal report.   I get a blank page with no error messages when I try to run the report.  My cfm file is in the same directly as my crystal report file.  here is my code.<br>&lt;cfreport<br>    report = 'report1.rpt'<br>    &gt;<br>&lt;/cfreport&gt;</p><p>I am not sure why this is not working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712470">44</a> by ozzy
		posted on 6/15/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>cfchart all the way baby. By the way, what's under hood in CF9 is not JasperReports, it's GreenPoint Software WebCharts3D, which is also in Websphere Dashboard Services and other BI tools. With webcharts and cfchart, you can use shape (shp) files, edit the XML of the chart with the wc50.jar tool, use dynamic data and styles via XML to Webcharts3d, create drilldown charts, create dynamic clickable maps, and output them in PDF, JPG, GIF, PNG, DOC, and other formats. There's no need for 3rd party charting in CF8-9. HOWEVER, I'm trying to find a way to enhance the charting in Railo which really does need 3rd party support. I am working on a a new virtual appliance with Railo and an open source charting engine for release this year. If anybody would like to contribute, see <a href="http://disq.us/url?url=http%3A%2F%2Fblog.thesitestudio.com%3AIr0FbLnfc9r57wCxNCbmNp6XaNc&amp;cuid=3321886" rel="nofollow noopener" title="blog.thesitestudio.com">blog.thesitestudio.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712467">45</a> by Matt VanderMeer
		posted on 10/14/2011 at 6:02 PM
		</div>
		<div class="comment_text"><p>Mike, did you ever solve your problem with Crystal Reports 2011 and CF9.  I am experiencing the same thing.  We have many reports built in CR2011 and I want to call them through Coldfusion but the cfreport tag does not return any HTML.  I am hoping you figured this out because I can't find it anywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712471">46</a> by Mike Bernstein
		posted on 10/14/2011 at 6:15 PM
		</div>
		<div class="comment_text"><p>No, I never got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712472">47</a> by Anthony
		posted on 11/16/2012 at 4:36 PM
		</div>
		<div class="comment_text"><p>Hi Mike - did you ever get your issue with crystal and CF resolved.<br>I have ran into the exact same problem and would love to know?</p><p>Thanks<br>Anthony</p></div>
	</div>
</div>
		