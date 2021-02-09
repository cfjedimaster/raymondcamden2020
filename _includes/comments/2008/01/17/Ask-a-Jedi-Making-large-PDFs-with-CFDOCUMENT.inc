
<div class="comment" id="c_1713676358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676358">1</a> by Doug Hughes
		posted on 1/18/2008 at 8:20 AM
		</div>
		<div class="comment_text"><p>I'd say dedicate an instance or an entire server to generate the document.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676376">2</a> by Qasim Rasheed
		posted on 1/18/2008 at 8:46 AM
		</div>
		<div class="comment_text"><p>Although not cfdocument, but we have successfully utilized Apache FOP in our environment has allowed us to produce real complex PDF reports. Some of our report contains Indices, footnotes, markers etc. Surely there is some learning curve to FOP but once you understand the XML syntax everything else just falls into place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676370">3</a> by Nathan Smith
		posted on 1/18/2008 at 10:24 AM
		</div>
		<div class="comment_text"><p>This might be a good opportunity for threads.  I'm assuming since it takes so long to create the pdf it would be OK if it ran in the background and was available later?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676364">4</a> by Ron Stewart
		posted on 1/18/2008 at 10:39 AM
		</div>
		<div class="comment_text"><p>The other thing to consider is CFREPORT -- on one of our projects we have to create a mass mailing/mail merge based on the users in the system. We were looking at something that was taking close to 15 minutes to generate using CFDOCUMENT to create a PDF of about 1,000 pages. Switched to CFREPORT because it gave us much more reliable control and it took about 30 seconds. At first, I didn't think it had worked or that we had left a MAXROWS on the query that pulled the data. Definitely worth looking into for something that big and if it's the same sort of document you are generating...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676383">5</a> by Raul Riera
		posted on 1/18/2008 at 10:56 AM
		</div>
		<div class="comment_text"><p>I have pushed it this far as well, used ColdFusion to create a Cupon printing system, but its a local system to runs great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676379">6</a> by Tom K
		posted on 1/18/2008 at 2:57 PM
		</div>
		<div class="comment_text"><p>I forgot how to a Word mail merge a while ago, and I just couldn't be bothered to learn. So I wrote a script which uses CFDOCUMENT to make a PDF off a mySQL database, formatted to use with the labels we use in the office.</p><p>It takes a few seconds, but loops through 5000+ rows of addresses.. works a treat :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676368">7</a> by DanaK
		posted on 1/18/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>I was doing a project that required a nightly run of a pdf, but it was ginormous and timed out/crashed/etc most of the time. I ended up generating each chapter staggered with threading and then merged them at the end. It works like a champ now. I forget the exact size but it wasn't far off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676377">8</a> by Sam Farmer
		posted on 1/18/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>I like Ray's idea of splitting up parts of the pdf generation, put them all in one folder and then use cfpdf merge which can work on a folder to create the big pdf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676373">9</a> by Cozmo
		posted on 1/18/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>I use ABCpdf with great success. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.websupergoo.com%2Fproducts.htm%23pd%3AIL4KlZGchz_OJMkqpYpkTrwpEz0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.websupergoo.com/products.htm#pd">http://www.websupergoo.com/...</a></p><p>It is very powerful really fast. It is windows only. <br>You can get a free license with a link back to their site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676369">10</a> by Justice
		posted on 1/18/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>I generated reports like this with a different method.  Use &lt;cffile&gt; to build an html / table formatted report 1 line at a time (you can make this as large as you want).  Then I used a command-line HTML to PDF converter using cfexecute to write my pdf file directly.  I think it was just called HTMLtoPDF.exe, but I dont recall now, that was a while ago, some googling may find it =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676365">11</a> by Curt Gratz
		posted on 1/19/2008 at 7:35 AM
		</div>
		<div class="comment_text"><p>I followed Ron Stewart's advice and spent the day retooling my statement using CFReport.  The file size dropped from 150MB to about 2MB and the page load time went from 30 mins to less then 1 minute.  Thanks for all the great suggestions.  I think I will also use cfthread as suggested and alert the user after creatation so that they don't even have to wait the minute.  Yet another reason Coldfusion is GREAT!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676367">12</a> by cfgurney
		posted on 1/20/2008 at 5:26 AM
		</div>
		<div class="comment_text"><p>I create a image-rich for a client and the file sizes typically reach 50mb. I had always assumed that was because we were creating a PDF for off-set press printing and the images had to be high-rez. I just broke up the sections of the catalog into logical chunks and that got us to 50mb size. I was going to look at CFTHREAD, but the comment on CFREPORT is intriguing and I'll take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676382">13</a> by Dan
		posted on 2/20/2008 at 1:11 AM
		</div>
		<div class="comment_text"><p>@Qasim Rasheed: could you elaborate on the process you use, jdk, FOP version, etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676372">14</a> by Qasim Rasheed
		posted on 2/20/2008 at 1:17 AM
		</div>
		<div class="comment_text"><p>Dan,</p><p>Currently we are using version 0.93 of FOP with the default JDK provided with ColdFusion. Please feel free to email me @ qasimrasheed AT gmail Dot com if you  have any addiitonal questions.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676378">15</a> by Matt Jones
		posted on 10/22/2008 at 4:03 AM
		</div>
		<div class="comment_text"><p>I was having a different problem and came across this thread, just thought I would share. I was making sorta large pdfs several times a month, and it was just awful. But it has actually turned around with cf8.</p><p>in a nutshell, they were pick tickets and packing slips for 500-5000 shipments that needed to be sent out.  1 page for pick ticket and 1-2 pages for the packing slip both on legal size paper.  pick ticket structure was required to be the same for all tickets for a particular shipment, but the qtys are very different on each one.  fortunately there are very few images included.</p><p>We cut it down to 250 locations per pdf just to keep from using up all the memory, and just ran the job in batches of 250.  Depending on the complexity of the orders (1-200 items), it could take anywhere from 2-20 minutes to create 1 batch for 250 locations.</p><p>Anyway, along comes cf8, and it didn't really get much better, until we refactored it.  basically we switched it to create an individual pdf for each of the locations (run in a cfthread with low priority and saved with a filename that would put them in the correct order upon merging), then used cfpdf to merge them all together.</p><p>What previously would often take several hours to run has improved substantially.  to the tune of creating 4588 individual 2-3 page pdfs with 158 different items that could be picked took ~ 15 minutes today and didn't require interaction, and the cfpdf that merged them together took a little over 1 minute. to give me a 9606 page, 160mb pdf.</p><p>hope that helps someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676380">16</a> by PhoenixAlly
		posted on 5/12/2009 at 7:10 AM
		</div>
		<div class="comment_text"><p>A follow-up to Ron Stewart's comment.  First, I would like say thank you Ron Stewart.  Without your suggestion I would not have been able to do something that we really needed to do.</p><p>I was querying a blob field.  Using cfdocument and cfimage worked when dealing with 50 or 60 pages (records) but when the query pulled up 1100 pages it crashed our server.</p><p>I used cfreport as suggested by Mr. Stewart.  The only thing I needed on the pages were the blobs, no headers, footers etc.</p><p>I set the entire document to be a page of 8.5 by 11 with a .5 margin top, bottom, left and right.</p><p>I set everything (header, footer, watermark etc) but the center/main band to have a height of 0.  I set the main band to have a height of 10.</p><p>I inserted an image structure in the main area and set it's dimensions to 7.5 by 10 and set the value to be the blob field.</p><p>It worked like a charm, creating an 1200 page pdf, almost 40 meg in under 2 minutes.  The average size reports 40-100 pages were almost instantaneous.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676371">17</a> by Raymond Camden
		posted on 5/12/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing that. I would have assumed that would have never run that fast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676366">18</a> by Paul Connell
		posted on 5/20/2009 at 3:01 PM
		</div>
		<div class="comment_text"><p>CFPDF - I think it has a bug - I've tried using setinfo= but instead of reading in a pdf from disk I've passed it a cfdocument variable, it crashes out every time.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676375">19</a> by Steve Caldwell
		posted on 11/5/2009 at 8:47 PM
		</div>
		<div class="comment_text"><p>I, too have gone the cfreport route, and can already see that it's the fastest way to generate very large pdf's with ColdFusion.</p><p>I'm having kind of a 'duh' moment, and hope that someone can shed some light here.</p><p>So my query pulls about 450 employee records, and I want it to output each employees name/bio/picture to a page.</p><p>I have an input parameter in report builder, and use the cfreportparam to inject the data to the report. I get the 450 pages populated, but the first employee's name is shown on every page. I tried looping in the cfreport tag but that didnt work either.</p><p>Check out my code:</p><p>&lt;cfreport template="../specialscripts/bioprint.cfr" format="pdf" overwrite="yes" query="perslisting"&gt;<br>&lt;cfreportparam name="empname" value="#perslisting.firstname# #perslisting.lastname#"&gt;<br>&lt;/cfreport&gt;</p><p> Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676374">20</a> by Steve Caldwell
		posted on 11/5/2009 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ok, I got a solution...in the docs (go figure) it shows a way to Concatenate the FIRSTNAME and LASTNAME fields, which what I was trying to do anyway.</p><p>Just put this in my expression builder:<br>FIRSTNAME &amp;" "&amp; LASTNAME</p><p>Works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676381">21</a> by Jordan Gouger
		posted on 7/27/2010 at 10:33 PM
		</div>
		<div class="comment_text"><p>I have the same problem with CFDOCUMENT and might try the merging PDF method. Have any of you had any success working with tabular Data in CFReport?</p></div>
	</div>
</div>
		