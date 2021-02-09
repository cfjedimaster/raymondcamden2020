
<div class="comment" id="c_1713719754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719754">1</a> by Todd Sharp
		posted on 11/15/2009 at 3:07 AM
		</div>
		<div class="comment_text"><p>It stinks, but it makes sense since Flex will only let you post one file per request.  I really wish they'd lift that limitation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719753">2</a> by Michael Schmidt
		posted on 11/16/2009 at 8:29 PM
		</div>
		<div class="comment_text"><p>Just to note the downside to the &lt;cffileupload tag like all uses of flash for File Uploading so far it doesn't handle authenticated domains, so for use on intranet's or locked down sites via security it doesn't work as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719758">3</a> by todd sharp
		posted on 11/19/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>Hey Michael - this is a stretch, but have you ever tried passing the session token to the page that performs the upload?  It may trick the server into believing that the Flash request is a normal authenticated user request and allow it to happen.  Just a thought - let me know if you're not sure how to do what I'm suggesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719759">4</a> by Henry Ho
		posted on 1/7/2010 at 3:20 AM
		</div>
		<div class="comment_text"><p>As of CF9.0 Final, result attribute cannot be in local scope, otherwise the result is a array with 1 null element.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D81481%3AGPEx7xAdOuw0jJedPbWNbR5M8JE&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=81481">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719756">5</a> by Raymond Camden
		posted on 1/7/2010 at 3:22 AM
		</div>
		<div class="comment_text"><p>Did you use result="<a href="http://disq.us/url?url=http%3A%2F%2Flocal.foo%3AOshJ7a2dQUZKKv5cpz6XkYoPJbk&amp;cuid=3321886" rel="nofollow noopener" title="local.foo">local.foo</a>" or var foo="", result="foo"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719762">6</a> by Henry Ho
		posted on 1/7/2010 at 3:26 AM
		</div>
		<div class="comment_text"><p>Either one, var first, or inline "local." , same result.</p><p>The files got uploaded, but when you dump the result to a file, it'll complain array element 1 is null.</p><p>I don't know how what magic scope cffile uploadall uses to keep track of multiple files over multiple requests like how cffileuploader uses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719761">7</a> by Chris Bowyer
		posted on 12/25/2013 at 6:07 PM
		</div>
		<div class="comment_text"><p>When uploading multiple files with uploadall, can anyone provide a pointer on how to easily sort the file sizes into ascending order via the data provided in the cffile result array? Everything I have thought of so far, is rather long and drawn out, making me think, there has got to be a better way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719760">8</a> by Chris Bowyer
		posted on 12/25/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>Note. I realise sorting can be done with cfdirectory, however, it does not provide file extension info, other than in the entire filename, and I need that too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719766">9</a> by Chris Bowyer
		posted on 12/25/2013 at 8:23 PM
		</div>
		<div class="comment_text"><p>Update. I ended up extracting the file extension using the listLast function, e.g. listLast(<a href="http://disq.us/url?url=http%3A%2F%2FdirectorySelect.name%3AhadKDkMqKsmoxtkBm7sPzmuGrd4&amp;cuid=3321886" rel="nofollow noopener" title="directorySelect.name">directorySelect.name</a>, ".")</p><p>Any better ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719764">10</a> by Raymond Camden
		posted on 12/26/2013 at 8:43 PM
		</div>
		<div class="comment_text"><p>Nope, seems fine to me. Of course, not every file has an extension. For example, many open source projects will have a README file. Your code should handle that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719765">11</a> by Chris Bowyer
		posted on 12/27/2013 at 12:55 AM
		</div>
		<div class="comment_text"><p>A good point. Fortunately, listLast handles that fine :)</p><p>I also decided it was far too hard to work out what extensions to allow/disallow, so I used the Outlook 2013 blocked attachment list as a starting point:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Foffice.microsoft.com%2Fen-au%2Foutlook-help%2Fblocked-attachments-in-outlook-HA102749484.aspx%23_Attachment_file_types%3AJGCv8LG0BlP6JXvKY6nyWTFvz0E&amp;cuid=3321886" rel="nofollow noopener" title="http://office.microsoft.com/en-au/outlook-help/blocked-attachments-in-outlook-HA102749484.aspx#_Attachment_file_types">http://office.microsoft.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2518196621">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2518196621">12</a> by Jack
		posted on 2/17/2016 at 4:52 AM
		</div>
		<div class="comment_text"><p>I know this is an old post, but I am trying to do multiple file upload using the simple form and cffile/action=uploadall.  My problem is how do I get the server file names for all the files I uploaded?   With a single file, it' just cffile.serverfile  How do I parse it to obtain the file names?  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2518772462">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2518772462">13</a> (In reply to <a href="#c_2518196621">#12</a>) by Raymond Camden
		posted on 2/17/2016 at 2:20 PM
		</div>
		<div class="comment_text"><p>Are you using 2+ input tags on the front end? If so, the results in cffile is an array if I remember right. The easiest thing to do is to just cfdump the cffile result and you will see for yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519354774">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519354774">14</a> (In reply to <a href="#c_2518772462">#13</a>) by Jack
		posted on 2/17/2016 at 4:43 PM
		</div>
		<div class="comment_text"><p>Yes, I have tried 2 input tags.  I just tried the cfdump right after cffile:</p><p>&lt;cfdump var="#cffile#"&gt;</p><p>It only showed the values for the second file :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519547356">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519547356">15</a> (In reply to <a href="#c_2519354774">#14</a>) by Raymond Camden
		posted on 2/17/2016 at 5:41 PM
		</div>
		<div class="comment_text"><p>Show me the entire template, via a Gist though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519656291">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519656291">16</a> (In reply to <a href="#c_2519547356">#15</a>) by Jack
		posted on 2/17/2016 at 6:03 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Ftapioca2%2Ffb9cfb0c34ec71ebc508%3AEkqndMtKIH1v3gROLHb2B_xQ6Jw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/tapioca2/fb9cfb0c34ec71ebc508">https://gist.github.com/tap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2519737411">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519737411">17</a> (In reply to <a href="#c_2519656291">#16</a>) by Raymond Camden
		posted on 2/17/2016 at 6:21 PM
		</div>
		<div class="comment_text"><p>Hmmm. That looks right to me. It should be an array of cffile results, not just one struct. You're really sure you selected two different files - one for each input field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519758800">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519758800">18</a> (In reply to <a href="#c_2519737411">#17</a>) by Jack
		posted on 2/17/2016 at 6:29 PM
		</div>
		<div class="comment_text"><p>This is upload file page with original 5 inputs but entered only 2 and the result of cfdump on the next page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519774088">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519774088">19</a> (In reply to <a href="#c_2519758800">#18</a>) by Raymond Camden
		posted on 2/17/2016 at 6:37 PM
		</div>
		<div class="comment_text"><p>Everything looks right to me code wise. What version of CF? Are you 100% patched?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519780630">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519780630">20</a> (In reply to <a href="#c_2519774088">#19</a>) by Jack
		posted on 2/17/2016 at 6:41 PM
		</div>
		<div class="comment_text"><p>CF version 9,0,0,251028  Enterprise UNIX</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519786633">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519786633">21</a> (In reply to <a href="#c_2519780630">#20</a>) by Raymond Camden
		posted on 2/17/2016 at 6:44 PM
		</div>
		<div class="comment_text"><p>Wow, that's old. All I can suggest is trying it on CF11 (or heck, even 2016) and if it works, then you've found a bug in CF9.</p><p>You can also do it manually - so if form.file1, process it. if form.file2, etc. That would work for you too and be minimal more coding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519808479">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519808479">22</a> (In reply to <a href="#c_2519786633">#21</a>) by Jack
		posted on 2/17/2016 at 6:55 PM
		</div>
		<div class="comment_text"><p>You mean cffile/action=upload one by one instead of uploadall?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2519840945">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2519840945">23</a> (In reply to <a href="#c_2519808479">#22</a>) by Raymond Camden
		posted on 2/17/2016 at 7:12 PM
		</div>
		<div class="comment_text"><p>Yep. I think you have 5 file inputs? It would take roughly 5 minutes to recode your app. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2520677189">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2520677189">24</a> (In reply to <a href="#c_2519840945">#23</a>) by Jack
		posted on 2/18/2016 at 4:29 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond.  I have whole bunch of processes for each of the uploaded file e.g. check if image, extension, resize and add to database.  I don't want to re-code it 5 times.  How can I loop it so that I can have 1 set of process for all 5 different form fields?</p><p>Can I simply put a<br>&lt;cfloop index="i" from="1" to="5"&gt; <br>check if the form field is blank, if not do the cffile with  fileField="form.upfile#i#"?</p><p>I am getting an error on <br>&lt;cfif len(form.upfile#i#)="" gt="" 0=""&gt;  apparently I am not doing it right.</p><p>I have add a productupload2.cfm in the GIST</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Ftapioca2%2Ffb9cfb0c34ec71ebc508%3AEkqndMtKIH1v3gROLHb2B_xQ6Jw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/tapioca2/fb9cfb0c34ec71ebc508">https://gist.github.com/tap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2521106310">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521106310">25</a> (In reply to <a href="#c_2520677189">#24</a>) by Raymond Camden
		posted on 2/18/2016 at 12:31 PM
		</div>
		<div class="comment_text"><p>So yes, you can just loop, and yes, your cfif code is wrong. You would want something like this:</p><p>&lt;cfif len(form["upfile#i#"])=""&gt;</p><p>This uses the Form as a structure, which it is. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521529210">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9bnoIiJnu3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521529210">26</a> (In reply to <a href="#c_2521106310">#25</a>) by Jack
		posted on 2/18/2016 at 4:59 PM
		</div>
		<div class="comment_text"><p>While checking the length of the form file I noticed that it actually uploads it already.  Instead of getting the actual file name e.g. myimage.jpg I am getting a long tmp file name.  Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521829038">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521829038">27</a> (In reply to <a href="#c_2521529210">#26</a>) by Raymond Camden
		posted on 2/18/2016 at 7:26 PM
		</div>
		<div class="comment_text"><p>Well yes, cffile technically just handles the processing of the file after its up. By seeing if the temp value exists, you know something was chosen.</p></div>
	</div>
</div>
		