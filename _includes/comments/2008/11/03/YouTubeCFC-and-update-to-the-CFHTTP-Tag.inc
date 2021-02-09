
<div class="comment" id="c_1713709540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709540">1</a> by Henry Ho
		posted on 11/4/2008 at 4:09 AM
		</div>
		<div class="comment_text"><p>Cool, so you got Adobe to fix a bug you discovered?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709551">2</a> by Raymond Camden
		posted on 11/4/2008 at 7:10 AM
		</div>
		<div class="comment_text"><p>In this case, yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709550">3</a> by Carl Steinhilber
		posted on 11/12/2008 at 4:52 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I installed the hotfix (cfadmin reported that the update was successful), copied in the new tablib (file date of taglib in the WEB-INF\cftags\META-INF directory is now 9/23/2008, as expected), restarted my CF server, restarted WAMP, and I'm still getting the following error while trying to run the test_embed.cfm included with the archive:</p><p>"The tag handler http does not have a setter for the attribute multipartType specified in the Tag Library Descriptor."</p><p>What am I doing wrong??<br>Thanks!<br>-Carl</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709549">4</a> by Carl Steinhilber
		posted on 11/12/2008 at 5:58 AM
		</div>
		<div class="comment_text"><p>Ummm... neeeeevvvermiiind.<br>The server I was testing the hotfix on wasn't yet updated to 8.0.1.<br>Updated to 8.0.1, and THEN ran the hotfix, and everything is perfect now.<br>Thanks!<br>-Carl "It must be getting late"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709557">5</a> by Raymond Camden
		posted on 11/12/2008 at 7:51 AM
		</div>
		<div class="comment_text"><p>I've got an update coming out later this week that fixes a few problems, so watch out for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709556">6</a> by Jordan
		posted on 3/18/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>I wanted to try your google CFC so applied the hotfix. But now have problems in other applications on the same server using the CFHTTP.</p><p>In particular I am getting the error :  <br>The tag handler http does not have a setter for the attribute multipartType specified in the Tag Library Descriptor.</p><p>Does this mean I need to edit all existing uses of this tag to include the multipartType attribute with its value being form-data?</p><p>Thanks in advance.<br>Jordan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709558">7</a> by Raymond Camden
		posted on 3/18/2009 at 7:36 PM
		</div>
		<div class="comment_text"><p>Sorry, not sure on that one. I certainly didn't see that issue when I applied the hotfix (done it to 3 machines so far, 2 Mac, one Windows)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709554">8</a> by Steve
		posted on 4/3/2009 at 12:33 AM
		</div>
		<div class="comment_text"><p>I'm actually seeing the same error on my end... and not just with this CFC, with other stuff that is doing CFHTTP calls as well.  Running 8.01 (made sure of that before installing the hotfix).  Think the next step is going to be to get in touch with Adobe to see if they can offer any light on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709555">9</a> by Matthew Walker
		posted on 5/24/2009 at 2:20 AM
		</div>
		<div class="comment_text"><p>Did you try restarting the ColdFusion service. My hosting company had the same issue and I believe this is all they did to resolve it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709559">10</a> by Jelle Kralt
		posted on 6/7/2009 at 4:19 PM
		</div>
		<div class="comment_text"><p>Are you sure you installed the hotfix correctly? Did you use the .zip file to update or did you unpack the .jar file? When the hotfix isn't selected correctly but you do update your taglib you will get the error Jordan posted.</p></div>
	</div>
</div>
		