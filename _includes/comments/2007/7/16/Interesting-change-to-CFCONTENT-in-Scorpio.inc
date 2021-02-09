
<div class="comment" id="c_1713668487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668487">1</a> by Damon Cooper
		posted on 7/17/2007 at 7:28 AM
		</div>
		<div class="comment_text"><p>Ah, don't be afraid :)</p><p>Your efforts have help shape CF and you've helped us realize on more than a few occasions that we this feature or that that really had our head up our....ummm...you know.</p><p>So thanks for that.</p><p>Yeah, file it.  Nice work on CF8.</p><p>Damon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668504">2</a> by MrBuzzy
		posted on 7/17/2007 at 7:30 AM
		</div>
		<div class="comment_text"><p>Nope, haven't tried it yet.</p><p>While I realise this won't work for all types, In CF7 I sometimes avoid the 'cfif this type, use this mine' by doing this;</p><p>&lt;cfcontent type="application/unknown"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668508">3</a> by John Ramon
		posted on 7/17/2007 at 7:37 AM
		</div>
		<div class="comment_text"><p>I tested out with a few different files, pdf, doc, htm, txt. I tested between MX 7 and 8 and they didn't work the same. On MX 7 a txt file with html code displayed as text/html on 8 the browser gives a File Download option. PDF's opened like PDF's. I've used cfcontent for Excel reports and never used for anything else. Can anyone give any other good uses for it.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668503">4</a> by Raymond Camden
		posted on 7/17/2007 at 7:48 AM
		</div>
		<div class="comment_text"><p>John, what you saw is what I said in the blog post, did I not? Or am I misreading your comment. In CF7 it is expected to come out as text/html if you don't specify the type. In CF8 the server helps you by making a guess. It looks like PDF worked which is cool (and I'd be shocked if it didn't. ;) Someone needs to try Flash, and maybe a Mp3. Shoot, I will. Give me a sec. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668499">5</a> by Raymond Camden
		posted on 7/17/2007 at 7:51 AM
		</div>
		<div class="comment_text"><p>Yep, MP3s seemed to work fine. The only odd thing is that only the first few seconds played - but I'm sure that is my browser, not CF or the Mp3.</p><p>&lt;cfset myfile = "/Users/ray/Music/Duran Duran/Rio/08 - Save a Prayer.mp3"&gt;<br>&lt;cfcontent file="#myfile#"&gt;</p><p>Damon, I'm going to file that ER now - don't say I didn't warn you. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668509">6</a> by John Ramon
		posted on 7/17/2007 at 7:59 AM
		</div>
		<div class="comment_text"><p>Yep you said, but you also said anyone test it out, I just wanted to test something. So all in all it worked just like you said.</p><p>On the ER are you requesting something like getFileType? Like I said I've never used it outside Excel reports but if you could get the type would be cool.</p><p>If I'm over thinking this or just sound confused let me know. =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668507">7</a> by Raymond Camden
		posted on 7/17/2007 at 7:59 AM
		</div>
		<div class="comment_text"><p>I filed an ER for a new function, or that the info be added to getFileInfo. I assume everyone here knows about the new getFileInfo function? I haven't blogged it yet so I may do that later tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668506">8</a> by Hemant
		posted on 7/17/2007 at 8:01 AM
		</div>
		<div class="comment_text"><p>Rupesh wrote two related posts on his blog:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfused.blogspot.com%2F2007%2F06%2Ffinding-image-type-for-file.html%3AYRTqSvRNDI264JP1zmdm7B5QisM&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfused.blogspot.com/2007/06/finding-image-type-for-file.html">http://coldfused.blogspot.c...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfused.blogspot.com%2F2007%2F06%2Ffinding-mime-type-of-any-file.html%3AwbM4bUY-idEwTrS-xP6daOtirrw&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfused.blogspot.com/2007/06/finding-mime-type-of-any-file.html">http://coldfused.blogspot.c...</a></p><p>Hemant</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668510">9</a> by Raymond Camden
		posted on 7/17/2007 at 8:03 AM
		</div>
		<div class="comment_text"><p>@John: Yes, something like that.<br>@Hemant: Yep, that looks like the ticket. Now just roll that into CF8 please. You've got plenty of time! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668505">10</a> by Dale Fraser
		posted on 7/17/2007 at 8:13 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I saw that ER stats, you clearly have way too much time on your hands :P</p><p>Good job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668513">11</a> by Todd Rafferty
		posted on 7/17/2007 at 2:53 PM
		</div>
		<div class="comment_text"><p>@Ray - I'd only want to play the first few seconds of that Duran Duran song too. ;P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668515">12</a> by Jeremy Rottman
		posted on 7/18/2007 at 9:37 PM
		</div>
		<div class="comment_text"><p>I wrote a udf that does the work for you when it comes to determining the different mime types of files.</p><p>And here it is.</p><p>Basically, you can add any valid mime type to the struct. Just make sure the key is the valid file extension and you will be good to go. In the function below, I have set the most used mime types.</p><p>Hope this helps.</p><p>	&lt;cfscript&gt;<br>		function getMime(source){<br>			// empty source mime type var<br>			var srcMime = '';<br>			mime=structNew();<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fmime.ai%3A7IWWgPZDoqWVklwmVivNUmkElTY&amp;cuid=3321886" rel="nofollow noopener" title="mime.ai">mime.ai</a>="application.postscript";    <br>			mime.avi="video/avi";<br>			mime.bmp="image/bmp";<br>			mime.csv="text/plain";<br>			mime.doc="application/msword";<br>			mime.exe="application/octet-stream";<br>			mime.gif="image/gif";<br>			mime.html="text/html";<br>			mime.htm="text/html";<br>			mime.jpeg="image/jpeg";<br>			mime.jpg="image/jpeg";<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fmime.mov%3AzZo6VYPEAV3cHvshf3ylweMfoSk&amp;cuid=3321886" rel="nofollow noopener" title="mime.mov">mime.mov</a>="video/quicktime";<br>			mime.mp2="audio/mpeg";<br>			mime.mp3="audio/mpeg";<br>			mime.mpeg="video/mpeg";<br>			mime.mpg="video/mpeg";<br>			mime.pdf="application/pdf";<br>			mime.png="image/pdf";<br>			mime.ppt="<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.ms%3ARIbA8soTuCEGDF4hWftV-Un4ZfU&amp;cuid=3321886" rel="nofollow noopener" title="vnd.ms">vnd.ms</a>-powerpoint";<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fmime.ps%3A35FoaOgI6hPRTO26EmDDe04WCaw&amp;cuid=3321886" rel="nofollow noopener" title="mime.ps">mime.ps</a>="application/postscript";<br>			mime.rtf="application/rtf";<br>			mime.swf="application/x-shockwave-flash";<br>			mime.tar="application/x-tar";<br>			mime.tiff="image/tiff";<br>			mime.tif="image/tiff";<br>			mime.txt="text/plain";<br>			mime.wav="audio/wav";<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fmime.zip%3AEaTi8QLIngvs-JCQ3qTFI925Mzs&amp;cuid=3321886" rel="nofollow noopener" title="mime.zip">mime.zip</a>="application/zip";			<br>			// create an array of defined mime types<br>			key = ListToArray(StructKeyList(mime,"."),".");		<br>			for(i=1; i LTE ArrayLen(key);i=i+1){<br>				if(RemoveChars(source,1,Find(".",source,1)) eq key[i]){<br>					srcMime = mime[key[i]];<br>				}<br>			}<br>			return srcMime;<br>		}<br>	&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668514">13</a> by Raymond Camden
		posted on 7/19/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>You should submit this to CFLib (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%3AYBwFT6Aj45UVUcbFMX4HHcsMZVE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org">http://www.cflib.org</a>).</p></div>
	</div>
</div>
		