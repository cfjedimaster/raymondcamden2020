
<div class="comment" id="c_1713723305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723305">1</a> by Ben Nadel
		posted on 4/9/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>Does OpenOffice just run as a "service" on the server? Or does ColdFusion have to boot it up to perform these conversions.</p><p>This is something (Doc to PDF) that I've actually been very interested in looking into because Doc has super precise formatting and being able to populate a Doc template (maybe in like MS XML format) and convert to a PDF would be super powerful... but that's a whole other conversation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723303">2</a> by Milner
		posted on 4/9/2010 at 5:26 PM
		</div>
		<div class="comment_text"><p>Per the CF 9 docs, for some stuff if OO is there, it will use it.  If it's not, it'll use Apache POI for everything except the DOC-&gt;PDF conversion.</p><p>Link to the documentation (*gasp*):<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWS9D9ADC95-B37C-4aae-B5D1-84D72FF83BEB.html%3AOaGnKXXNUp37OpakaOxmjezmQ-I&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WS9D9ADC95-B37C-4aae-B5D1-84D72FF83BEB.html">http://help.adobe.com/en_US...</a></p><p>I only knew this page existed because I went looking for information on what OO gave me for my new web servers in CF 9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723304">3</a> by Raymond Camden
		posted on 4/9/2010 at 5:31 PM
		</div>
		<div class="comment_text"><p>@Milner: Oh wow Milner - perfect! Thank you! The docs really are a goldmine - but sometimes you just don't know what is there.</p><p>@Ben: It runs as a program. When I use the feature, it actually pops open OO on my dock. That's the Mac though - might be different on Windows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723308">4</a> by Raymond Camden
		posted on 4/9/2010 at 5:40 PM
		</div>
		<div class="comment_text"><p>Guys, quick side comment. I was doing some testing and kept getting an error saying OO couldn't be found - even though I clearly saw OO getting started by CF.</p><p>I tried a virgin Word doc, super simple, and it converted just fine.</p><p>So it seems like CF has a slight bug in error handling for Doc-&gt;PDF. It seems to always imply the _lack_ of OO, whereas in my case, it was just the inability to convert the doc. (The doc I tried was pretty old I think so maybe it wasn't a supported format.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723306">5</a> by Raymond Camden
		posted on 4/9/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>Details on bug I just mentioned: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D82663%3ACC9zNoKxKLKD0b5S_JbAp74SV48&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=82663">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723307">6</a> by Gary F
		posted on 4/9/2010 at 6:49 PM
		</div>
		<div class="comment_text"><p>I'm using Microsoft Word for doc/docx to PDF through CF8 because I was very unhappy with the quality of OpenOffice conversion of docx. If there are images in the layout then they often appear in the wrong place and it always changes the position of page breaks.</p><p>A government office should be okay with MS Word running on the server from an "approved software" point of view. I've done experiments with 2 and 3 simultaneous conversion requests and it handled it well. I'm not expecting any more than 10 conversions per hour so this is fine for my app. Maybe OO v4 will get docx right. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723309">7</a> by James Moberg
		posted on 4/9/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>Gary, How are you converting Word-to-PDF using CF8?  I've searched online and haven't found much information regarding how to do this.  Are you converting it to HTML first and then using CFDocument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723311">8</a> by Gary F
		posted on 4/9/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>James, it's simply doc &gt; pdf without any other steps. I found a brilliant VBScript that does the job nicely. Just cfexecute it with the appropriate command line params.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.suodenjoki.dk%2Fus%2Fproductions%2Farticles%2Fword2pdf.htm%3ATsZjE57zUfjfmYmDz2YH--b2EC0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.suodenjoki.dk/us/productions/articles/word2pdf.htm">http://www.suodenjoki.dk/us...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723313">9</a> by Daniel Fredericks
		posted on 4/12/2010 at 3:05 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for posting this, I had a feeling you would get great feedback from your readers...thanks everyone for this info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723310">10</a> by Reto
		posted on 8/24/2010 at 12:52 AM
		</div>
		<div class="comment_text"><p>I had the same error about oo not installed or setup correctly. My problem was not the document, it was that i had not enough rights on the oo program directory within the sandbox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723312">11</a> by Misty
		posted on 8/8/2012 at 3:12 PM
		</div>
		<div class="comment_text"><p>Hi ray,</p><p>I have a question here, Do client machines need OpenOffice installed when we give them code. i am working on a product where we want to use openoffice but not sure it will solve all our queries if client macine does not have the openoffice installed</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723388">12</a> by Raymond Camden
		posted on 8/8/2012 at 3:16 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get your question Misty. As described in the blog post, if your CF server doesn't have OO, you can't do Doc to PDF. That's it. If the code you write for your client needs to do Doc to PDF, and they don't have OO on the server machine, then, you have a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723393">13</a> by Misty
		posted on 8/8/2012 at 3:31 PM
		</div>
		<div class="comment_text"><p>i get it, Thanks Ray, So point is "If client does not have OO installed, they will not be able to perform any conversion"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723391">14</a> by Misty
		posted on 8/8/2012 at 3:34 PM
		</div>
		<div class="comment_text"><p>Another Question:</p><p>"I have one site where i want to download the resume in DOC format and make changes offline to the Doc File and upon the save of the Doc file with CTRL+s or witth save button, it should automatically save the changes to the database online and reupload the doc file to the same place from where it was uploaded and replace the old one".</p><p>Is this possible. Just want to know because i am trying something like this, so thought should take some advice from CF GURU</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723392">15</a> by Misty
		posted on 8/8/2012 at 3:35 PM
		</div>
		<div class="comment_text"><p>Just a Note</p><p>Last 3 rd line, it is not uploaded, it is downloaded</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723394">16</a> by Raymond Camden
		posted on 8/9/2012 at 11:06 PM
		</div>
		<div class="comment_text"><p>No, it is not possible. The remote server can't know when you save a file on your file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723389">17</a> by Jewel
		posted on 5/22/2014 at 7:33 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>According to this: <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWS9D9ADC95-B37C-4aae-B5D1-84D72FF83BEB.html%3AOaGnKXXNUp37OpakaOxmjezmQ-I&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WS9D9ADC95-B37C-4aae-B5D1-84D72FF83BEB.html">http://help.adobe.com/en_US...</a>, it is optional to install OpenOffice for ppt -&gt; html conversions.  I thought that was a problem of mine because I keep on getting an error whenever I try to convert ppt to html.  It says that: Could not initialize class com.sun.star.lib.loader.WinRegKey</p><p>Would you know how to fix this?  Thanks a lot for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723390">18</a> by Raymond Camden
		posted on 5/22/2014 at 7:44 PM
		</div>
		<div class="comment_text"><p>Sorry no - I think I tried it once a few years ago, but I don't have access to a CF9 box anymore. Can you try in CF10? Otherwise you may be just out of luck unless you get tech support to issue you a patch.</p><p>I'll also point out that Google Docs has an API, and I believe the API supports uploading a file and getting another version of it.</p></div>
	</div>
</div>
		