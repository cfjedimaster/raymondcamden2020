
<div class="comment" id="c_1713737139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737139">1</a> by Patryk
		posted on 5/21/2012 at 7:53 AM
		</div>
		<div class="comment_text"><p>Well, you can just make a comparison without referencing the error code's value:</p><p>if (fail.code == FileError.NOT_FOUND_ERR) {<br>    // ...<br>}</p><p>Or</p><p>switch(fail.code) {<br>    case FileError.NOT_FOUND_ERR:<br>        // ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737142">2</a> by Raymond Camden
		posted on 5/21/2012 at 3:14 PM
		</div>
		<div class="comment_text"><p>For me, it wasn't a "using" issue, but a documentation issue. What you recommend is definiltey how I'd use it in the code, but I needed help figuring out how even to get that code setup (if that distinction makes sense).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737140">3</a> by Rei Di Lorenzo
		posted on 3/21/2014 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hi All.. i'm developer. recenltly upgrade corvova 3.4.0 . I try getfile and receive err.code 1000 ... what's this?? :-(</p><p>	FileManager.prototype.ReadAsTextFromFile = function (fileName, readDataCallBack) {<br>	    var that = this;<br>	    try {<br>	        window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, function (fileSystem) {<br>				fileSystem.root.getFile(fileName, {create: false}, <br>					function (fileEntry) {<br>		        		fileEntry.file(<br>							function (file){<br>								var reader = new FileReader();<br>						        // il risultato della onloadend ovvero evt.target.result viene<br>						        // assegnato alla callback, ora vai su relief_detail.js &gt; getReliefDetail<br>						        reader.onloadend = readDataCallBack;<br>						        reader.readAsText(file);<br>						    }	        		<br>		        		, function(err){alert('ReadFile' + " fail: " + err.code);});<br>		    		}<br>	    		, function(err){alert('GetFile' + " fail: " + err.code);});<br>    		}, function(err){alert('FileSystem' + " fail: " + err.code);});<br>	    } catch (e) {<br>	        logError(e);<br>	    }<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737141">4</a> by Raymond Camden
		posted on 3/21/2014 at 6:12 PM
		</div>
		<div class="comment_text"><p>The last version of PhoneGap had a pretty big File IO change: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F2%2F17%2FCordova-File-System--Important-Update%3AEjgU0B16RVmCjON7akNV2AtUfiM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/2/17/Cordova-File-System--Important-Update">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737144">5</a> by Rei Di Lorenzo
		posted on 3/21/2014 at 6:39 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, but I can not.. always error.code 1000 :-(</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file-transfer%2Fblob%2Fmaster%2Fdoc%2Findex.md%3A0ULJ2CTI3XSx1f56pR71zvuAGUI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file-transfer/blob/master/doc/index.md">https://github.com/apache/c...</a></p><p>i try : cdvfile://localhost/persistent/" + my_file_path (android) (/scard/pippo.txt)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737143">6</a> by Raymond Camden
		posted on 3/21/2014 at 7:00 PM
		</div>
		<div class="comment_text"><p>According to the source (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file%2Fblob%2Fdev%2Fsrc%2Fandroid%2FFileUtils.java%29%3AyA-q-mHpEH4GbF1xLbfHfrrjJcQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file/blob/dev/src/android/FileUtils.java)">https://github.com/apache/c...</a> this is an unknown error. Not sure what to suggest. I haven't had a chance yet to try File stuff in the new builds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737145">7</a> by Rei Di Lorenzo
		posted on 3/21/2014 at 7:14 PM
		</div>
		<div class="comment_text"><p>I understand, Can you recommend a third-party plugins to manage file IO?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737146">8</a> by Raymond Camden
		posted on 3/21/2014 at 7:24 PM
		</div>
		<div class="comment_text"><p>Well, the FileSystem plugin *does* work - I'd just keep digging. Or consider the PhoneGap Google group.</p></div>
	</div>
</div>
		