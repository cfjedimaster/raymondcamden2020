
<div class="comment" id="c_1713650727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650727">1</a> by Maxx
		posted on 3/11/2006 at 12:49 AM
		</div>
		<div class="comment_text"><p>just my $.02: I would not send the full path as the attachment;filename= but separate them in to two variables fullpath and dafile</p><p>something like this.<br>&lt;cfset fullpath = "c:\serverpdfs\" /&gt;<br>&lt;cfset dafile= "my.pdf" /&gt;<br>&lt;cfheader name="Content-disposition" value="attachment;filename=#dafile#"&gt;   <br>&lt;cfcontent file="#fullpath##dafile#" type="application/pdf"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650738">2</a> by William from Lagos
		posted on 3/11/2006 at 12:50 AM
		</div>
		<div class="comment_text"><p>What other method is there then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650739">3</a> by Raymond Camden
		posted on 3/11/2006 at 12:53 AM
		</div>
		<div class="comment_text"><p>Maxx, you are absolutely correct. There is no need for that. Assuming daFile is a file name and you want the end portion, don't forget you can use the getFileFromPath() function to get the filename.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650734">4</a> by Tom Mollerus
		posted on 3/11/2006 at 1:11 AM
		</div>
		<div class="comment_text"><p>Is there any advantage to using a content-disposition of "attachment" as opposed to "inline"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650728">5</a> by Raymond Camden
		posted on 3/11/2006 at 1:13 AM
		</div>
		<div class="comment_text"><p>If I remember right its necessary to get the filename right (ie, use filename of foo.pdf instead of something.cfm). I'm not 100% sure on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650731">6</a> by James Moberg
		posted on 3/11/2006 at 1:50 AM
		</div>
		<div class="comment_text"><p>I usually link to the script and add PDF to the end.  I've had some errors reported to me when changing the mime type.  Some internet security programs will also look at the URL you clicked on and compare it with the MIME type being returned.  If it doesn't match, it forces a refresh or flat out denies the file download.</p><p>Here's a format that I've used before:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.yourserver.com%2Fdownload.cfm%2FDownloadablePDFFile.pdf%3Av1-9a8m_jzB9Z_mOXyUNybDGUUA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.yourserver.com/download.cfm/DownloadablePDFFile.pdf">http://www.yourserver.com/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650736">7</a> by dave ross
		posted on 3/11/2006 at 2:01 AM
		</div>
		<div class="comment_text"><p>big files aren't a problem on MX+ as it properly uses a buffer (unlike CF5 which would bring the entire file into memory)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650735">8</a> by Adrian J. Moreno
		posted on 3/11/2006 at 2:20 AM
		</div>
		<div class="comment_text"><p>Question: We serve tons of pdf files on our application using this method. One issue we have is that under https, MSIE will show an alert message to effect of "some elements are not secure", while Firefox doesn't. Is there some header or other code I can add to satisfy MSIE?</p><p>Also, is anyone having an issue with Acrobat Reader 7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650737">9</a> by Raymond Camden
		posted on 3/11/2006 at 2:22 AM
		</div>
		<div class="comment_text"><p>When you link to the file, are you staying in https? or do you use a full url pointing back to http?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650743">10</a> by Adrian J. Moreno
		posted on 3/11/2006 at 2:34 AM
		</div>
		<div class="comment_text"><p>It's full https like:</p><p>https://{url}/index.cfm?a=b&amp;c=d&amp;f=/someFile.pdf</p><p>where a=b&amp;c=d loads a page that uses &lt;cfcontent&gt; as you have above. The only difference in the code is that I use "inline" instead of "attachment".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650741">11</a> by Raymond Camden
		posted on 3/11/2006 at 2:48 AM
		</div>
		<div class="comment_text"><p>Wierd - I can't see why IE would treat that as mixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650742">12</a> by Tom Mollerus
		posted on 3/11/2006 at 3:22 AM
		</div>
		<div class="comment_text"><p>Regarding the question of IE displaying security alerts-- my guess would be that the files aren't downloading via SSL, and since IE regards the file as part of the page, it shows the alert. You see this same alert if you have an IMG tag calling a non-secure image (e.g. '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.abc.com%2Fimage.gif%27%29%3AxR2wYQNxV0RhE8mH2TpZrqA88qU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.abc.com/image.gif')">http://www.abc.com/image.gif')</a> from an HTML page called via SSL.</p><p>That's my guess as to the reason. How you would fix it, I have no good idea. Perhaps changing your content-disposition to 'inline' would make a difference?  See:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.scit.wlv.ac.uk%2Frfc%2Frfc18xx%2FRFC1806.html%3AUnBS2MqDSePYAMrDfJ5w9oMIQqI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scit.wlv.ac.uk/rfc/rfc18xx/RFC1806.html">http://www.scit.wlv.ac.uk/r...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650740">13</a> by Tom Mollerus
		posted on 3/11/2006 at 3:25 AM
		</div>
		<div class="comment_text"><p>Whoops-- I see you're already using 'inline' as a content-disposition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650745">14</a> by Mark Mazelin
		posted on 3/11/2006 at 8:43 AM
		</div>
		<div class="comment_text"><p>I would have to disagree with Dave Ross' comment (and agree with Ray's recommendation). We were using this to allow users to download rather large files, including some .iso files, under CFMX (either 6.1 or 7). We were having quite a few server performance issues that were traced back to those downloads. Remember that when you do it this way, it is using one of those precious few ColdFusion threads (10 by default?), so if you have many people doing this at once on large files, they will soon take up all your coldfusion processing threads, making everyone else wait in the queue until they finish or timeout. So, all that to say, large files will certainly be an issue, and because of that, this solution will not scale well (at least for serving large files). My recommendation is just like Ray's--use it for small files, especially if you have any dial-up users--it does work great for that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650746">15</a> by Aaron West
		posted on 3/11/2006 at 12:13 PM
		</div>
		<div class="comment_text"><p>How ironic that you mention this...</p><p>Check this out:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.trajiklyhip.com%2Fblog%2Findex.cfm%2F2006%2F3%2F11%2FDownload-Module--Finally%3Ac-RBx6ScJlE7yc7059p5rtTW0Dg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.trajiklyhip.com/blog/index.cfm/2006/3/11/Download-Module--Finally">http://www.trajiklyhip.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650747">16</a> by Rob Munn
		posted on 3/11/2006 at 4:57 PM
		</div>
		<div class="comment_text"><p>Even with file buffering in MX, I have to agree with Mark, there are still issues to be aware of if you plan to serve a lot of large files (like .iso files) from a site. I don't classify it as a system issue, I classify it more as a capacity issue. Taking Mark's example, if you think you will have 10 simultaneous users downloading .iso files, you should be doing load testing on your site to see how it performs. Then you can alter conditions- add more threads, increase available RAM to the JVM, etc. and see how things run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650748">17</a> by Adam Cameron
		posted on 3/11/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>We found that it wasn't even with large files, but lots of small files being called as a result of the "same" request would give the CF server problems (terminal ones).</p><p>We had a file management service in our software which stored ALL a site's content files outside the webroot, and served them via a CFM URL and &lt;cfcontent&gt;.  When a resulting page had more than - say - 10 &lt;imgs&gt; on it, being served via CFM-&gt;&lt;cfcontent&gt;, the server really struggled, leaked memory, and fairly quickly gave up the ghost.  So we stopped doing that :-)</p><p>I haven't investigated this since CFMX6.1 (and indeed did not investigate very thoroughly), having decided &lt;cfcontent&gt; could quite possibly be evil.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650749">18</a> by Ulf
		posted on 3/11/2006 at 9:00 PM
		</div>
		<div class="comment_text"><p>Just to ask this again, what is the alternative way to use Coldfusion to securely serve large (or a lot of) files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650750">19</a> by Raymond Camden
		posted on 3/11/2006 at 9:56 PM
		</div>
		<div class="comment_text"><p>I think there could be multiple ways. One potential way would be to use a temporary directory thaqt you can link to. Perhaps a directly named like a UUID. The issue there is that you don't want N copies of very large files. In Linux, I'm assuming you could make a ... crap... I forgot the name. Oh, link. I'm not Linux expertt at all, but I believe that would work, and not fill up your hard drive. In Windows I'm not sure what would work best. Any ideas folks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650751">20</a> by James Moberg
		posted on 3/11/2006 at 10:21 PM
		</div>
		<div class="comment_text"><p>I do this... and then it's the messy process of scheduled garbage cleanup to remove the previously downloaded files.  I've even generated FTP accounts on-the-fly and redirect the customer to the temporary FTP account for download.  This also requires additional garbage cleanup of the temp files.</p><p>The next thing I'm looking into is archiving all of the requested files into a single ZIP file and then passing a hash to a Flash 8 applet that will allow download of the files.  Once  completed, Flash will send a background request to the server so that the server can perform the needed cleanup.  This will take the load off of ColdFusion and protect the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650752">21</a> by Rob Gonda
		posted on 3/12/2006 at 5:21 AM
		</div>
		<div class="comment_text"><p>Ray, I've found that the code you provided does not properly work when the file contains spaces; the download prompt will chop part of the file name. A small modification will make it work.</p><p>&lt;cfheader name="Content-disposition" value="attachment;filename=""#dafile#"""&gt;   <br>&lt;cfcontent file="#dafile#" type="application/pdf"&gt;</p><p>Best,</p><p>~Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650753">22</a> by Rob Gonda
		posted on 3/12/2006 at 5:23 AM
		</div>
		<div class="comment_text"><p>As the matter of fact, I add a few more parameters:</p><p>&lt;cfheader name="Content-Disposition" value="attachment; filename=""#ClientFile#"""&gt;</p><p>&lt;cfcontent type="application/unknown" file="#ServerFile#" deletefile="No"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650755">23</a> by Raymond Camden
		posted on 3/12/2006 at 8:22 AM
		</div>
		<div class="comment_text"><p>Rob, good catch. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650757">24</a> by Mitch Hastings
		posted on 3/18/2006 at 1:18 AM
		</div>
		<div class="comment_text"><p>I'll echo the majority here, this type of solution works great (for small files or low capacity)!</p><p>Anybody else have a take on the large file/high capacity problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650759">25</a> by Clint Miller
		posted on 4/6/2006 at 10:11 PM
		</div>
		<div class="comment_text"><p>We are having the same problem securely serving large files with cfoutput.  I'd love to figure out a way to do this with out using one of the precious ColdFusion threads.  We're serving 24 simultaneous requests on a dedicated download server, so I may be able to bump up that limit, but ultimately, I need a different tactic.</p><p>I'm thinking about client HTTP redirects.  Any thoughts?  Let's keep talking about this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650758">26</a> by Cyrill
		posted on 12/5/2008 at 2:08 AM
		</div>
		<div class="comment_text"><p>When using &lt;cfcontent ... &gt;, take care that you do not set any cache-control headers by using &lt;cfheader ...&gt;:<br>&lt;cfheader name="Cache-Control" value="no-cache"&gt;<br>&lt;cfheader name="Pragma" value="no-cache"&gt;</p><p>Internet Explorer does not display the PDF in this case. Doesn't matters whether you use SSL or not.</p><p>We set these headers in the "onRequestStart()" function of our application to effectively prevent Firefox 3.0 from caching because that caused a lot of problems in our AJAX application. <br>I know, some may say that setting these headers in "onRequestStart()" is not a good solution. But since Firefox 3.X caches not only loaded ressources but DOM-snapshots, it is the only location to make sure they are always set (even on asynchronous requests for JSON or XML data).</p></div>
	</div>
</div>
		