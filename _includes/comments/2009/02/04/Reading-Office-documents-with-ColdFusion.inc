
<div class="comment" id="c_1713712175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712175">1</a> by todd sharp
		posted on 2/5/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>So folks know that I have nothing against POI, the only reason I moved away from using it with SlideSix is because the PPT support is still far from being as mature as the DOC and XLS stuff.  As far as I know it is still in the 'scratchpad' area of the project.  I actually really liked using it at first, it just didn't grow along with the needs of the site.</p><p>Good post Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712177">2</a> by Edward Beckett
		posted on 2/5/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>This is very cool stuff ...</p><p>I see envision lot's of opportunities with this ...</p><p>Great post Ray ... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712180">3</a> by Dave DuPlantis
		posted on 2/5/2009 at 12:27 AM
		</div>
		<div class="comment_text"><p>FWIW, that's not (or hasn't been) just a problem with POI. PowerPoint has always been the forgotten child in the Office family. In my former life as a VB developer, I found the PowerPoint object model to be vastly underdeveloped through 2000. (I do much less work in VBA now and haven't poked around with the object models in 2003 and 2007.) We could run with Access, Excel, and Word, but PowerPoint was much more difficult, and Outlook was nearly out of the question (and of course 2000 brought in a whole other set of problems, the Object Model Guard and all that).</p><p>So it may simply be that there isn't that much for POI to hook into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712182">4</a> by todd sharp
		posted on 2/5/2009 at 1:19 AM
		</div>
		<div class="comment_text"><p>@Dave - interesting.  You may have a point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712181">5</a> by Cyril Hanquez
		posted on 2/5/2009 at 1:26 AM
		</div>
		<div class="comment_text"><p>Nice post. Like I told you on twitter, I'm using POI to extract text in word fiel and check the language <a href="http://disq.us/url?url=http%3A%2F%2Fcyrilhanquez.com%2Fblog%2F2008%2F09%2F26%2Fplaying-with-the-google-language-api%2F%3ALOQjUmdgk7InpQP6-nS-tHz5GT8&amp;cuid=3321886" rel="nofollow noopener" title="http://cyrilhanquez.com/blog/2008/09/26/playing-with-the-google-language-api/">http://cyrilhanquez.com/blo...</a>.</p><p>Now I'm trying to switch to Tika (<a href="http://disq.us/url?url=http%3A%2F%2Flucene.apache.org%2Ftika%2F%29%3AKEJmcu8FgUws2pyu0K4XPOTd72Y&amp;cuid=3321886" rel="nofollow noopener" title="http://lucene.apache.org/tika/)">http://lucene.apache.org/ti...</a> to support more types of document.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712184">6</a> by Martijn van der Woud
		posted on 2/5/2009 at 1:31 AM
		</div>
		<div class="comment_text"><p>Awesome post Ray! Wish I had known this stuff earlier :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712187">7</a> by Leigh
		posted on 2/5/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>&gt; For OOXML you can use POI 3.5, which is in beta.<br>&gt; I had trouble playing with this</p><p>Just curious, but what problems did you have?  I just started using the beta this week and have had pretty good results so far. Though, it does require more jars than previous versions.</p><p>But I am very glad you posted this - because it made discover there is a handy factory class for extracting text.  You can pass in a file and the factory returns the correct type of extractor. I have not tried it with PPT, but it seems to be working well with excel and word.</p><p>ExtractorFactory = javaLoader.create("org.apache.poi.extractor.ExtractorFactory");<br>inputFile = createObject("java", "java.io.File").init( "c:\myFiles\testExcel2007.xlsx");<br>excelExt = ExtractorFactory.createExtractor(inputFile);<br>WriteOutput("excelExt text=&lt;hr&gt;"&amp; excelExt.getText() &amp;"&lt;hr&gt;");</p><p>Leigh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712186">8</a> by Leigh
		posted on 2/5/2009 at 1:50 AM
		</div>
		<div class="comment_text"><p>&gt; it made ^me^ discover</p><p>Darn fat fingers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712190">9</a> by Raymond Camden
		posted on 2/5/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>Let me try that Leigh. I had Java issues with the input specifically, but my code was different from yours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712189">10</a> by Raymond Camden
		posted on 2/5/2009 at 1:58 AM
		</div>
		<div class="comment_text"><p>Well kick butt Leigh. Thank you. I was definitely doing it wrong. I'll follow up later today with an update. I also have another update showing getting some basic metadata.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712183">11</a> by Raymond Camden
		posted on 2/5/2009 at 2:11 AM
		</div>
		<div class="comment_text"><p>I wrote a new version and the code is a LOT slimmer. I'm now digging to see if there is an easy way to get the Doc object so I can perform metadata stuff on the code. Getting text works fine, but I'd also like to get title, etc. But if you just want text, this is a LOT slimmer.</p><p>So my next step is to delete your comment, ban your IP, and take credit! Muahahahahahahahahhahahahaha!</p><p>(Sorry! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712185">12</a> by Mikkel Johansen
		posted on 2/5/2009 at 2:12 AM
		</div>
		<div class="comment_text"><p>Cool stuff!</p><p>Reading Office 2007 files is very usefull. Especially when Verity does not handle docx and xlsx files.</p><p>Now I can read the text from the Office 2007 files and index the text with CFINDEX.</p><p>- Mikkel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712192">13</a> by Raymond Camden
		posted on 2/5/2009 at 2:15 AM
		</div>
		<div class="comment_text"><p>Interesting. So the DOCX Extractor allows for getDocument and the DOC Extractor allows for getSummaryInfo. So to get the MD it would be slightly complex, but certainly doable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712188">14</a> by Raymond Camden
		posted on 2/5/2009 at 2:19 AM
		</div>
		<div class="comment_text"><p>Mikkel - interesting point there. Didn't know Verity wasn't updated for Office 2007.</p><p>So question: Does it make sense for me to build a generic reader CFC for Office files. Something that will get text and get MD properties? I don't want to duplicate Ben's work, but his is focused on Excel only. Would a CFC to just read various office formats be worth the time/effort? Should I ping Ben about possibly expanding his POIUtils to cover more Office formats?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712193">15</a> by Mark
		posted on 2/5/2009 at 2:25 AM
		</div>
		<div class="comment_text"><p>Thanks for this post. It's an important first step for me. What are other people using to convert word documents to PDF via coldfusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712194">16</a> by Mikkel Johansen
		posted on 2/5/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>Ray - the CF8 documentation has a fine list of wich filetypes Verity supports (<a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2FindexSearch_05.html%29%3A8rPbFUe4TWhqz8EVMd8XuKUMvMU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/indexSearch_05.html)">http://livedocs.adobe.com/c...</a></p><p>And to me it is out-dated. Latest Word format is Word 2002, PDF version is 1.4 (acrobat 5).</p><p>If Adobe wants to use Verity as a sales parameter. Then they have to update the supported file types.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712191">17</a> by Raymond Camden
		posted on 2/5/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>Mark, it would be trivial to convert the Word text to PDF using CFDOCUMENT. The issue would be layout. getText() returns just the text. It "kinda" looks the same, spacing wise, ie, paragraphs are vertically separated, but you won't get headers and stuff like that.</p><p>You could wrap it in &lt;pre&gt; and put that in cfdocument to get started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712196">18</a> by Raymond Camden
		posted on 2/5/2009 at 2:31 AM
		</div>
		<div class="comment_text"><p>Mikkel: Ah ok. Well, I'm a big fan of Lucene now. One thing I forgot to mention in the blog post is that I use code like this for Seeker (<a href="http://disq.us/url?url=http%3A%2F%2Fseeker.riaforge.org%3Am0PHl0ub-c0vU6GSZMocH0ZYx7Q&amp;cuid=3321886" rel="nofollow noopener" title="http://seeker.riaforge.org">http://seeker.riaforge.org</a>), my Lucene wrapper. I need to update it (when I have time) to support Powerpoint though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712195">19</a> by todd sharp
		posted on 2/5/2009 at 2:37 AM
		</div>
		<div class="comment_text"><p>You could get funky with POI to extract everything (text, layout, imgs, etc) and 're-construct' it as HTML to make a PDF.  But I'm sure it would get ugly real quick (code-wise).</p><p>You could also use OpenOffice to do it, but that requires OpenOffice running as a service on the server.</p><p>I've been meaning to blog on that topic for about 6 months now.  Maybe some day...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712197">20</a> by todd sharp
		posted on 2/5/2009 at 2:38 AM
		</div>
		<div class="comment_text"><p>My last comment was directed @Mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712201">21</a> by Mark
		posted on 2/5/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>Thanks Todd,</p><p>I would be very interested in the OpenOffice method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712202">22</a> by Eric Hoffman
		posted on 2/5/2009 at 4:28 AM
		</div>
		<div class="comment_text"><p>I am also interested in how you are using OpenOffice as a service on the server.</p><p>Very much so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712203">23</a> by Matt Williams
		posted on 2/5/2009 at 7:05 PM
		</div>
		<div class="comment_text"><p>It should be noted that although the folks creating the POI jars have done amazing work, they don't necessarily condone MS Office. The "H" in HWPF, HSSF, and HSLF stands for "Horrible". So you have Horrible Word Processor Format, Horrible Spread Sheet Format and Horrible Slide Layout format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712206">24</a> by Raymond Camden
		posted on 2/5/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>Heh yeah, good point, although I think they were mainly being silly. ;) Of course, I've felt that Google has been horrible from time to time w/ their API. ("Hey, let's make this API really complex just because we want to!")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712205">25</a> by Steve Moore
		posted on 2/5/2009 at 7:36 PM
		</div>
		<div class="comment_text"><p>Now wouldn't it be nice if the upcoming CF 9 had the feature to send a Word document to PDF? That's what I want for Xmas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712204">26</a> by Leigh
		posted on 2/6/2009 at 2:25 AM
		</div>
		<div class="comment_text"><p>@Raymond,</p><p>&gt; I also have another update showing getting some basic metadata.</p><p>Cool. I look forward it.  I have not gotten around to exploring metadata with the newer format yet.</p><p>PS: My response was delayed because I think my ip was banned (okay, I forgot to subscribe .. but being banned makes me sounds dangerous, like an outlaw ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712207">27</a> by Raymond Camden
		posted on 2/6/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>I posted part 2 today using your code. Thank you again. I did NOT take credit though. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712209">28</a> by Raymond Camden
		posted on 2/6/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>Leigh: I notice your blog has -0- info about you. Name, job, etc. Is that intentional? If not, would you mind introducing yourself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712216">29</a> by Leigh
		posted on 2/8/2009 at 6:23 AM
		</div>
		<div class="comment_text"><p>Yes, it is intentional ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712211">30</a> by john
		posted on 3/10/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>This article helped a lot to get me started in reading Word documents with CF/POIFS.  But, I also need to write them.</p><p>I am trying to use a Word document as a template, read it in using POIFS, modify some content, and create a new Word document WITH the styles from the original document.</p><p>Can you clue me in as to how to do this or where there is good example code for ColdFusion/POIFS Word document creation?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712213">31</a> by Raymond Camden
		posted on 3/10/2009 at 6:12 AM
		</div>
		<div class="comment_text"><p>I can't, maybe someone else on the thread can. The closest I've done to this is working with RTF files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712210">32</a> by Todd Rafferty
		posted on 7/14/2009 at 12:52 AM
		</div>
		<div class="comment_text"><p>@Ray: Leigh is the ghost in the machine or &amp;lt;cf_heWhoShallNotBeNamed&amp;gt;. I tried previously to get him involved in the alpha/beta, but no go. I can only assume he's a rock star moonlighting as a CF Developer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712217">33</a> by todd sharp
		posted on 7/14/2009 at 12:55 AM
		</div>
		<div class="comment_text"><p>@Other Todd -- how do you know Leigh is a he?  I know females named Leigh too.  Just sayin...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712212">34</a> by Todd Rafferty
		posted on 7/14/2009 at 12:58 AM
		</div>
		<div class="comment_text"><p>@Other Todd: I don't, but at this point I'm using 'he' as a generic gender since I don't believe Leigh is an 'it' - that being said, it's quite possible that Leigh is a nickname for skynet. But, you're right, I should have said he/she.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712215">35</a> by Josh
		posted on 12/17/2009 at 12:15 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I am trying to convert PPTX files to PPT files because CF doesn't like to convert PPTX files to a PDF. I am using the Open Office ODFConverter to convert my PPTX files to an ODP file before I convert it to a PDF. This works great.</p><p>When I try to use CFDocument to convert that ODP file to a PDF I get a bunch of gibberish on the page.</p><p>Do you know how to convert these ODP files to a PDF?</p><p>&lt;cfdocument <br>	format="pdf" <br>	srcfile="#directory#\sourceFile.odp" <br>	filename="#directory#\destinationFile.pdf"<br>	overwrite="yes"&gt;	 <br>&lt;/cfdocument&gt;</p><p>Thanks for the help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712219">36</a> by Raymond Camden
		posted on 12/17/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>Are you using CF9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712218">37</a> by todd sharp
		posted on 12/17/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>Josh - The ODFConverter may work well on your test document, but trust me, it is far (*far*) from perfect and you'll eventually get some serious jibberish looking ODP's.... that being said if you really want to try converting them to PDF's you can check out JODConverter which should help you convert the ODP's to PDF.  Technically it can also convert the PPTX to PDF, but again, it'll look like shit....trust me, I've tried it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712221">38</a> by Josh
		posted on 12/17/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>@Raymond... Yes, I am using CF9.</p><p>@Todd... I'll check out the JODConverter and see how it goes. Thank you for the suggestion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712220">39</a> by Clarence
		posted on 8/23/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>I'm trying to extract a docx on Windows 7 and it just hangs on</p><p>&lt;cfset docxExt = extractorFactory.createExtractor(fileIo)&gt;</p><p>Any output after this tag doesn't show, I can confirm everything works until then, and doc files work fine.</p><p>fileIo is a fileInputStream, I've tried a java.io.file too, no difference.</p><p>After running my test script, the docx file is still locked since any attempts to change the filename returns an error saying Jrun still has it.</p><p>So basically it goes into this method and never returns, any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712222">40</a> by DL
		posted on 8/9/2014 at 4:48 PM
		</div>
		<div class="comment_text"><p>Very interesting.  A regular ppt file is processed correctly, however, a slideshow ppt file runs into the following problem with Railo 3.x for Windows:<br>"<br>No matching Method/Function for org.apache.poi.hslf.HSLFSlideShow.INIT(java.io.FileInputStream) found<br>"<br>Line 66:<br>: &lt;cfset ppt = ppt.init(myfile)&gt;</p></div>
	</div>
</div>
		