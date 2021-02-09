
<div class="comment" id="c_1713671115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671115">1</a> by Che
		posted on 8/30/2007 at 3:49 AM
		</div>
		<div class="comment_text"><p>imageScaleToFit??? I can't believe I did not see that in the docs. Ugh! I've been using a bit of 9th grade algebra and then cfimage's resize function to maintain proportions when only a width is specified.</p><p>My algebra went like this:<br>&lt;cfset resizedHeight = round((resizedWidth * objImage.Height) / objImage.Width) /&gt;</p><p>imageScaleToFit will be a lot easier. I knew there had to be a function for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671119">2</a> by Todd Rafferty
		posted on 8/30/2007 at 4:17 AM
		</div>
		<div class="comment_text"><p>Better now than never Che. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671117">3</a> by Steven Erat
		posted on 8/30/2007 at 4:23 AM
		</div>
		<div class="comment_text"><p>What really concerns me is how well that alligator gets along with those kittens.  Your reptile training skills must be amazing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671118">4</a> by Che
		posted on 8/30/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>You know, I wonder why proportional resizing with only the width or height was not built in to the &lt;cfimage&gt; tag?</p><p>Anyone have any ideas why a separate CF function had to be created to accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671121">5</a> by Raymond Camden
		posted on 8/30/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>Che:<br>I do not propose to speak for Adobe, but this is my take.</p><p>The cfimage tag was built to do "common" functions. Not everything. So adobe made choices on what would make sense in there.</p><p>Outside of that - everything (*) cfimage can do can be done in image functions.</p><p>When I say everything, I mean everything but writeToBrowswer, and while CAPTCHA can be done with functions, it is a heck of a lot easier with cfimage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671122">6</a> by Dave Dugdale
		posted on 8/30/2007 at 6:12 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think this is why your web site is so great - you provide lots of examples - please keep the CF8 examples coming.</p><p>I would love to see what Coldfusion can do with an image uploading interface.</p><p>I am waiting for your and Ben's new book to come out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671124">7</a> by Raymond Camden
		posted on 8/30/2007 at 6:16 PM
		</div>
		<div class="comment_text"><p>Thanks for the compliments. In regards to your second paragraph, are you asking for a simple image upload demo? Ie, how to handle someone uploading an image - ensuring it is an image - checking size - etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671123">8</a> by Jamie Samland
		posted on 8/30/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>KITTENS!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671126">9</a> by Dave Dugdale
		posted on 8/30/2007 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Yes, I would love to see a simple image upload demo in CF8!</p><p>I created my own image uploader for my rental site in CF7 using Doug Hugh's CFC but I would love to see what the new image tag can do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671125">10</a> by Raymond Camden
		posted on 8/30/2007 at 6:43 PM
		</div>
		<div class="comment_text"><p>Dave, please find my blog entry after my last presentation on cfimage. I have sample code in there just for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671127">11</a> by Dave Dugdale
		posted on 8/30/2007 at 7:23 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I can't seem to locate it. If it is in your new book, i will see it there.</p><p>Thanks,<br>Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671128">12</a> by Raymond Camden
		posted on 8/30/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>Here ya go:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F8%2F9%2FRecording-from-ColdFusion-8-Image-Presentation%3AxUqsUj9GVNtklFJcF4rFVvy0UTA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/8/9/Recording-from-ColdFusion-8-Image-Presentation">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671129">13</a> by Ben
		posted on 1/23/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this code. Though simple, it's just what I needed to post some photos of a local crime story. Thank you, thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671131">14</a> by Raymond Camden
		posted on 1/23/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>Crime story? Now ou have to share the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671133">15</a> by Don
		posted on 9/24/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Now you need to make it cycle automatically. Or is that in the "sexier" version? (Which I guess I should go look for)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671134">16</a> by ulises
		posted on 8/22/2012 at 2:52 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, can you tell me, how can i read a directory from another unit ?? for example i want to list the files locate in D:\My Unit D.</p><p>thanks Raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671130">17</a> by Raymond Camden
		posted on 8/22/2012 at 5:39 AM
		</div>
		<div class="comment_text"><p>What do you mean by unit? Do you mean another drive? If it's on the same box, it should just work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671132">18</a> by ulises
		posted on 8/22/2012 at 7:58 PM
		</div>
		<div class="comment_text"><p>yeah i need to put a link to an absolute path, outside the wwwroot, for example G:/Documents/images/ because i use for the moment a pendrive for my images, but i can´t, i read something about mappings, but when i scan the server, i have the next problem "IO error on server communication", im lost can u help me ?? exists another solution ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671136">19</a> by Raymond Camden
		posted on 8/22/2012 at 9:16 PM
		</div>
		<div class="comment_text"><p>Um, well first off, you need to ensure you can see the images via your browser first. You need to add a virtual directory in your web server. How you do that depends on the web server you are using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671135">20</a> by ulises
		posted on 8/22/2012 at 10:41 PM
		</div>
		<div class="comment_text"><p>im using the built in ColdFusion Web Server, i added a virtual mapping in  jrun-web.xml:</p><p>&lt;virtual-mapping&gt;<br>   &lt;resource-path&gt;/sibapro-ulises/sfp2012/*&lt;/resource-path&gt;<br>   &lt;system-path&gt;F:/Clase14deJulio&lt;/system-path&gt;<br>  &lt;/virtual-mapping&gt;</p><p>so now i can see my files of the pendrive (F:) in the browser with:</p><p>http://localhost:8500/sibapro-ulises/sfp2012/</p><p>now the problem is that i want to make a list of links to my files using ExpandPath, but i cant...</p><p>i was using ExpanPath for my files in wwwroot but now not works</p><p>the value of #URL.rutacat# is http://localhost:8500/sibapro-ulises/sfp2012/</p><p>&lt;cfdirectory action="list" directory="#ExpandPath('#URL.rutacat#/CAT/')#" name="loglist"&gt;<br>&lt;cfoutput query="loglist"&gt;<br>&lt;a href=" #URL.rutacat#/CAT/#name#"&gt;#name#&lt;/a&gt;</p><p>#size#<br>&lt;br /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671139">21</a> by Raymond Camden
		posted on 8/23/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p>Instead of expandPath - just use the 'real' directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671141">22</a> by ulises
		posted on 8/23/2012 at 12:33 AM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond, it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671138">23</a> by ulises
		posted on 8/23/2012 at 7:41 PM
		</div>
		<div class="comment_text"><p>sorry raymond i think that it works but i am wrong, can u help me ?</p><p>sfp2012 its my virtual mapping. If i put:</p><p>http://localhost:8500/sibapro-ulises/sfp2012/ in my browser it works, i see my files of the pendrive (F:).</p><p>But if i put in my cfdirectory:</p><p>&lt;cfdirectory  directory="http://localhost:8500/sibapro-ulises/sfp2012/" name="loglist" &gt;</p><p>i cant see anything, so i try with the absolute path in cfdirectory:</p><p>&lt;cfdirectory  directory="F:\Clase14deJulio\00009083-004-11\CAT" name="loglist" &gt;</p><p>And it works, i see the files of my pendrive (F:), But i can´t make a link to these files, i can´t open any files !, only see it</p><p>&lt;cfoutput query="loglist"&gt;<br>&lt;a href="F:\Clase14deJulio\00009083-004-11\CAT\#<a href="http://disq.us/url?url=http%3A%2F%2Floglist.name%3A2yQJ7UHvxf0jrHNNenFjqJcR_Rc&amp;cuid=3321886" rel="nofollow noopener" title="loglist.name">loglist.name</a>#"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Floglist.name%3A2yQJ7UHvxf0jrHNNenFjqJcR_Rc&amp;cuid=3321886" rel="nofollow noopener" title="loglist.name">loglist.name</a>#&lt;/a&gt;<br>&lt;/cfoutput&gt;</p><p>In resume i think that, why i can not make a link to an absolute path ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671142">24</a> by Raymond Camden
		posted on 8/23/2012 at 7:44 PM
		</div>
		<div class="comment_text"><p>"i can't make a link to these files"<br>Are you talking about an HTML link? If so, sure you can. Your CFDIRECTORY call is returning the file names. You know the URL path to your files, it is /sfp2012. So the link is just /sfp2012/#name# where name is the filename.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671143">25</a> by ulises
		posted on 8/23/2012 at 8:47 PM
		</div>
		<div class="comment_text"><p>ok, i do the next thing raymond and it works</p><p>in my cfdirectory i put the absolute path (for some reason if i put the "virtual map" not works)</p><p>&lt;cfdirectory  directory="F:\Clase14deJulio\00009083-004-11\CAT" name="loglist" &gt;</p><p>and in my href (yes an html link) I put the virtual map<br>&lt;a href="sfp2012/#<a href="http://disq.us/url?url=http%3A%2F%2Floglist.name%3A2yQJ7UHvxf0jrHNNenFjqJcR_Rc&amp;cuid=3321886" rel="nofollow noopener" title="loglist.name">loglist.name</a>#"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Floglist.name%3A2yQJ7UHvxf0jrHNNenFjqJcR_Rc&amp;cuid=3321886" rel="nofollow noopener" title="loglist.name">loglist.name</a>#&lt;/a&gt;</p><p>and It works</p><p>thanks again Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671144">26</a> by Raymond Camden
		posted on 8/23/2012 at 8:50 PM
		</div>
		<div class="comment_text"><p>Just to help you understand why the virtual directory didn't work in CFDIRECTORY - remember that the virtual directory is a web server setting. ColdFusion knows nothing about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671147">27</a> by ulises
		posted on 8/23/2012 at 9:26 PM
		</div>
		<div class="comment_text"><p>i dont know raymond, i try in &lt;cfdirectory with</p><p>sfp2012 and not works</p><p>&lt;cfdirectory  directory="sfp2012" name="loglist" &gt;</p><p>i try also with:</p><p>/sfp2012<br>./sfp2012<br>\sfp2012</p><p>the result its the same, i can not list the files in F:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671146">28</a> by Raymond Camden
		posted on 8/23/2012 at 9:30 PM
		</div>
		<div class="comment_text"><p>Err, right. They don't work because - as I said - it is a web server setting, not a server setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671145">29</a> by santosh kodidasu
		posted on 6/12/2013 at 2:29 PM
		</div>
		<div class="comment_text"><p>Using the ColdFusion , can we show all the images available on a particular website for eg : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bbc.com%3AhwWlfuhyKwgSQl9Z0WFD93IweTI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bbc.com">http://www.bbc.com</a><br>and also count occurence of every letter in source code of any website</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671148">30</a> by Raymond Camden
		posted on 6/12/2013 at 3:44 PM
		</div>
		<div class="comment_text"><p>You could do this by using cfhttp to get the html and then regular expressions to parse the html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671149">31</a> by santosh kodidasu
		posted on 6/12/2013 at 4:06 PM
		</div>
		<div class="comment_text"><p>If I use cfhttp , I am getting the following response . Is it because of the security on this website <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bbc.com%3AhwWlfuhyKwgSQl9Z0WFD93IweTI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bbc.com">http://www.bbc.com</a></p><p>struct <br>Charset [empty string]  <br>ErrorDetail Unknown host: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bbc.com%3AhwWlfuhyKwgSQl9Z0WFD93IweTI&amp;cuid=3321886" rel="nofollow noopener" title="www.bbc.com">www.bbc.com</a>: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bbc.com%3AhwWlfuhyKwgSQl9Z0WFD93IweTI&amp;cuid=3321886" rel="nofollow noopener" title="www.bbc.com">www.bbc.com</a>  <br>Filecontent Connection Failure  <br>Header [undefined struct element]  <br>Mimetype Unable to determine MIME type of file.  <br>Responseheader struct [empty]</p><p>Statuscode Connection Failure. Status code unavailable.  <br>Text YES</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671150">32</a> by Raymond Camden
		posted on 6/12/2013 at 4:10 PM
		</div>
		<div class="comment_text"><p>Eh? It isn't secured. This worked fine for me:</p><p>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bbc.com%3AhwWlfuhyKwgSQl9Z0WFD93IweTI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bbc.com">http://www.bbc.com</a>"&gt;<br>&lt;cfdump var="#cfhttp#"&gt;</p></div>
	</div>
</div>
		