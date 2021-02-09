
<div class="comment" id="c_1713720362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720362">1</a> by Kumar
		posted on 12/8/2009 at 7:57 AM
		</div>
		<div class="comment_text"><p>Very nice. I was just thinking about how something like could be done over the weekend. Use of ORM and VFS is very interesting, time to pour over the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720361">2</a> by Mike Chandler
		posted on 12/8/2009 at 9:08 AM
		</div>
		<div class="comment_text"><p>This is a really outstanding presentation.  The UI looks pretty slick based on the screenshots, and in my past web dev experience I know there are a lot of potential users for this app.  I'm downloading the code now.  Cheers Sam!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720356">3</a> by Russ S.
		posted on 12/8/2009 at 1:02 PM
		</div>
		<div class="comment_text"><p>I like the wizardy stuff, I'll have to keep that in mind for my projects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720366">4</a> by Marko Simic
		posted on 12/8/2009 at 4:17 PM
		</div>
		<div class="comment_text"><p>Nice. Several interesting ideas introduced: creating CFCs on the fly and convert XL files to ORM objects + wizard. You can learn a lot about VFS browsing the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720363">5</a> by Marko Simic
		posted on 12/8/2009 at 4:29 PM
		</div>
		<div class="comment_text"><p>Sam, if you are interested in bugs (and solutions) I stumbled upon while testing your app, mail me (tweet me or whatever) and I'll send you a report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720365">6</a> by Sam Farmer
		posted on 12/8/2009 at 7:37 PM
		</div>
		<div class="comment_text"><p>Thanks for all the feedback.  Please do send along any errors you find to sam at samfarmer dot com.  I will say I did this for fun and didn't spend too much time getting it production ready!</p><p>I plan on blogging some of the features, including some not mentioned, like using onMissingTemplate to include files that are in RAM but not on disk.  A technique that could give a nice speed increase.  In fact my rough testing found that putting model ORM files in RAM was 30% faster than on disk.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720367">7</a> by Raymond Camden
		posted on 12/8/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>One thing that confuses me Sam - post CF restart - does your app support ORM for the tables created before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720364">8</a> by Sam Farmer
		posted on 12/8/2009 at 8:23 PM
		</div>
		<div class="comment_text"><p>Nope.  Because the ORM files wouldn't exist.  It was certainly something I never thought of -- I was setting it up more as a way to edit a Spreadsheet and get it back as an Excel file once done editing.</p><p>It could be done by during creation of the CFC's writing the files to disk and copying to RAM in onApplicationStart (or before actually since I believe ORM runs before onApplicationStart? )</p><p>My emphasis for this was to try out as many CF 9 features as I could rather than create something production worthy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720371">9</a> by Raymond Camden
		posted on 12/8/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>Makes sense Sam. You know... I wonder if it would drop all the tables if you used the 'dropcreate' ormsetting? If so, that would actually kind of work. It would reset the app on restart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720373">10</a> by Sam Farmer
		posted on 12/8/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>Ah yeah good point.  I ran into some issue with dropcreate not removing all tables, since I believe it will only drop tables if there is a persistent cfc, and hence the code that starts on line 45 of step3.cfm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720370">11</a> by Ben Nadel
		posted on 12/9/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>Sam, the UI looks badass :) And, from what the description is, I can't wait to download the code to see how you played around with the VFS. Great looking stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720372">12</a> by Sam Farmer
		posted on 12/11/2009 at 10:58 PM
		</div>
		<div class="comment_text"><p>I wanted to respond to the criticism to explain what I was thinking or not as was often the case!  Overall I love code reviews and a big thanks to Paul, Ray and others for providing feedback.</p><p>CFAdmin needing password:</p><p>Good point.</p><p>Linux:</p><p>Paul -- Thanks for fixing it to work on Linux.  I tested on Windows and Mac but don't have access to a Linux box unfortunately.  With retrospect I could have put all the file writing stuff into RAM and maybe got around those issues.  I should have also mentioned in the install doc that file writing was a prerequisite.</p><p>Any More Files Pop-up hidden:</p><p>This works in some browsers (Safari) and not others (Firefox, Chrome).  I didn't realize until after I submitted and am bummed it didn't work as I thought it was quite slick.  Probably needs some messing with a z-index.  And as I mentioned about I didn't really get this production worthy just fun ready! :)</p><p>VFS File Editor:</p><p>Good point.  A cancel button would be nice.</p><p>didn't use the new CFC syntax everywhere:</p><p>Not entirely sure what this means but is it the mix of script and tag based cfcs?  I tried to use script everywhere unless I would need a tag thats not available in script.  Though I just checked the docs and looks like I missed a few spreadsheet functions.  D'oh.</p><p>Application safe folder name:</p><p>I used the folder se (for spreadedit) but yes it could easily be used by someone else.  Probably the safest and best practice would be to either a) onApplicationStart use a folder named after UUID or b) have the base folder be the same as the application name?  Others thoughts on this?  In shared hosting this is a big issue, if not shared hosting then using a base folder the same as application name should do it.</p><p>Layout in two custom tags vs one</p><p>Advantages of two:<br>- can use tags like cfflush<br>- if the footer takes a lot of arguments somewhat nicer to provide there.</p><p>Advantages of one:<br>- better encapsulation of the UI chrome.</p><p>I've used both over the years and actually prefer one tag (like Ray) but used two here for some reason that escapes me now.</p></div>
	</div>
</div>
		