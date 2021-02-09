
<div class="comment" id="c_1713739302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739302">1</a> by GB
		posted on 2/29/2012 at 11:14 AM
		</div>
		<div class="comment_text"><p>It can! Coldfusion can handle it. I know because it's working for me. It's super simple too. I recently started looking into this as well.</p><p>&lt;cffile action="uploadAll" ... /&gt;</p><p>There is also another solution. Using HTML5 ajax file upload you can essentially upload one file at a time but its threaded so they upload in parallel. You have to write the cfml on the server to put the files into a temporary location and log the uploads as only partially complete in a queue of some sort until the user submits the rest of the form and then you finish the process on the final submit which is quick because the files were already uploaded. That does get tricky because you should make an upload progress bar or indicator that the uploads are in progress but it's kinda fun learning it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739308">2</a> by Raymond Camden
		posted on 2/29/2012 at 4:30 PM
		</div>
		<div class="comment_text"><p>GB, I believe you are wrong. Did you actually test it? When run, if you have 3 files selected, it will copy them all to one particular file name. Trust me - I tried this. It does work if you have N file/form tags though.</p><p>As for an Ajax-file file upload - yeah - that does work - along with Flash solutions, but this blog post is specifically about the multiple attribute _only_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739306">3</a> by GB
		posted on 2/29/2012 at 9:32 PM
		</div>
		<div class="comment_text"><p>You're right, I was wrong. It only uploaded one file. I just tested it and only the last file added was uploaded.</p><p>I went back and looked at my previous test code to where where I was using the action="uploadAll" and I'm using it to process the ajax file upload. That's why the HTML5 ajax solution was on my mine. The UploadAll was the only way to upload a single file being send via ajax because there was no 'fieldname' being sent for Coldfusion to grab.</p><p>You *could* try grabbing the data content from GetHTTPRequestData() and parsing out the files using the header Content-Type boundary string, but that get hairy really quick. I thought I was going to have to do that until I tested the action="uploadall" to process the ajax upload. I'm glad it worked for that.</p><p>It's too bad the uploadAll doesn't work for HTML5 'multiple' files. These sort of issues make me want to dig into the java source code of Railo and see what and why. Maybe another day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739304">4</a> by Raymond Camden
		posted on 2/29/2012 at 10:17 PM
		</div>
		<div class="comment_text"><p>Actually, I disagree again. ;)</p><p>"That's why the HTML5 ajax solution was on my mine. The UploadAll was the only way to upload a single file being send via ajax because there was no 'fieldname' being sent for Coldfusion to grab."</p><p>If you use the CF9 Ajax multi file uploader, it actually sends ONE file at a time, and sends it like any other regular file. You use cffile/action=upload and just process it. Seriously - watch it with a network monitor. It fires off one file at a time.</p><p>cffile/action=uploadall is ONLY used (afaik), in cases where ONE network request contains N form field fields of type file. So even then it's just a convenience. You could still use N cffile/action=upload calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739307">5</a> by Bryan
		posted on 3/26/2013 at 8:41 AM
		</div>
		<div class="comment_text"><p>"...In IE, the user won't be able to select multiple files..."</p><p>Yes, they can now, with IE 10.</p><p>Nice, informative article, by the way - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739311">6</a> by Raymond Camden
		posted on 3/26/2013 at 2:05 PM
		</div>
		<div class="comment_text"><p>Nice. Thanks for testing this in IE10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739310">7</a> by shad
		posted on 9/21/2013 at 5:10 AM
		</div>
		<div class="comment_text"><p>is there a way to get the temp file name to php script using ajax.i tried using the xhr object but to no avail</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739309">8</a> by Raymond Camden
		posted on 9/21/2013 at 9:27 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you are asking here. Can you rewrite the question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739313">9</a> by Chris Bowyer
		posted on 12/19/2013 at 1:29 AM
		</div>
		<div class="comment_text"><p>Very cool, however, after playing with this, I decided to just label as 'File/s', and place a message under the input, stating, "Please note that multiple file selection is not supported by Internet Explorer version 9 or less". One thing I would like to change though, is Chrome's button value, from 'Choose Files' to 'Choose File/s', or just plain 'Browse', and the wording beside it, from 'No file chosen' to 'No file/s chosen', or just get rid of it altogether.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739312">10</a> by Raymond Camden
		posted on 12/19/2013 at 2:10 AM
		</div>
		<div class="comment_text"><p>I've seen web pages before where they bind an image to a file upload control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739314">11</a> by Chris Bowyer
		posted on 12/19/2013 at 2:23 AM
		</div>
		<div class="comment_text"><p>That's a good idea. Thanks!</p><p>In addition, any thoughts on unrestricted file type uploads, in particular, when they are just being deleted after being emailed, not when they can be downloaded. I don't see an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739316">12</a> by Raymond Camden
		posted on 12/19/2013 at 3:46 AM
		</div>
		<div class="comment_text"><p>Um, as long as you do not upload to a web accessible directory then it should be fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739317">13</a> by Chris Bowyer
		posted on 12/19/2013 at 4:08 AM
		</div>
		<div class="comment_text"><p>Good point, and thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739319">14</a> by Misty
		posted on 2/20/2014 at 12:10 PM
		</div>
		<div class="comment_text"><p>Hi ray,</p><p> itried the Code in Firefox and IE8, It failed in both cases, in Firefox, selecting multiple files, the dialog box of the files stays open.</p><p>in IE8, it just selects only one file. i can show the screenshots for this</p><p>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739318">15</a> by Raymond Camden
		posted on 2/20/2014 at 4:48 PM
		</div>
		<div class="comment_text"><p>Multiple as an argument isn't supported in IE8 - so this is expected. It should just work as a single file upload control which is fine. What version of Firefox did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2436732752">
	<div>
		<img src="https://disqus.com/api/users/avatars/timothy_jasko.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2436732752">16</a> by Timothy Jasko
		posted on 1/3/2016 at 3:17 AM
		</div>
		<div class="comment_text"><p>I know I'm late to the party here, but I figured out how to make CF handle multiple file uploads:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldflint.blogspot.com%2F2016%2F01%2Fuploading-multiple-files-using.html%3AHnuPZFwOMKyQdkK09XNB_uEarhw&amp;cuid=3321886" rel="nofollow noopener" title="http://coldflint.blogspot.com/2016/01/uploading-multiple-files-using.html">http://coldflint.blogspot.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2437602337">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2437602337">17</a> (In reply to <a href="#c_2436732752">#16</a>) by Raymond Camden
		posted on 1/3/2016 at 4:54 PM
		</div>
		<div class="comment_text"><p>Why not use cffile/action=uploadall? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2009%2F11%2F14%2FSome-notes-on-CFFILEUploadAll%3ANTY9hERarllOMLHhYRMvlh9nAsE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2009/11/14/Some-notes-on-CFFILEUploadAll">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2440099585">
	<div>
		<img src="https://disqus.com/api/users/avatars/timothy_jasko.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2440099585">18</a> (In reply to <a href="#c_2437602337">#17</a>) by Timothy Jasko
		posted on 1/5/2016 at 2:40 AM
		</div>
		<div class="comment_text"><p>uploadAll uploads every file that was submitted indiscriminately, without telling me which field it came from. My use case requires me to distinguish between the file upload fields. Basically, I have one field where they upload a file (sometimes a group of files) which the system parses and imports, and another field where they can upload an arbitrary number of documents which the system attaches but otherwise ignores. It's important for me to be able to distinguish between them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2440104420">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2440104420">19</a> (In reply to <a href="#c_2440099585">#18</a>) by Raymond Camden
		posted on 1/5/2016 at 2:44 AM
		</div>
		<div class="comment_text"><p>Wow, really? I haven't used CF in a while, but that seems silly. Of course one can process the form upload manually.</p></div>
	</div>
</div>
		