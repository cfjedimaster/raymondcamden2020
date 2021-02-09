
<div class="comment" id="c_1713685304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685304">1</a> by Dave Byers
		posted on 8/25/2008 at 10:22 PM
		</div>
		<div class="comment_text"><p>Well aren't I just a little brown-noser for making it all easy on people.  :)  Just kidding... you guys are helping me out, so the least I could do is make it as easy as possible.</p><p>Bug submitted to Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685307">2</a> by Kevin
		posted on 8/26/2008 at 12:51 AM
		</div>
		<div class="comment_text"><p>Not sure if this will work for you but I've been using cfgrids and forms on the same page for a file upload with my grid outside my file upload form and it's been okay. If there isn't a reason to have the grid in the form you could move it in the markup and it should start working.</p><p>If you're using the grid selection to populate form fields you can still bind things and connect values with the grid outside the form and if you need the grid values use some JavaScript to copy the grid values to a few hidden form fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685305">3</a> by Kevin
		posted on 8/26/2008 at 12:53 AM
		</div>
		<div class="comment_text"><p>Dang, I should read more closely, I misunderstood the problem a little, but the workaround should still apply - move the grid outside the form and bind the selected values to hidden form fields inside the form so you control what is submitted. This should work regardless of your enctype value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685309">4</a> by Dave Byers
		posted on 8/26/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>This did work in my preliminary tests.  It's an interesting workaround and obviously it would be best if you didn't have to compensate for this kind of thing.</p><p>When I'm able to flush out the page and make it work completely, I'll send an update with a definitive "Yep, this is the way to do it."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685308">5</a> by Dave Byers
		posted on 8/26/2008 at 8:53 PM
		</div>
		<div class="comment_text"><p>Yep, this si the way to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685310">6</a> by BJ McShane
		posted on 1/24/2009 at 8:44 AM
		</div>
		<div class="comment_text"><p>I'm getting this error: (The submitted cfgrid form field is corrupt) on my cfgrid. All my grid does is list records. I tracked down the problem.  One of my fields in the cfgrid had an semi-colon (;) in the field.  When I took out the ; then the error didn't happen.<br>Here is the data field in the record:<br>      24085-O'Connell sig RFQ, PO; AP email</p><p>I'm going to submit a bug report but I'm not sure of an easy work around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685306">7</a> by cfJeff
		posted on 3/24/2009 at 9:39 PM
		</div>
		<div class="comment_text"><p>Just ran into the semicolon cfgrid error myself.   Any suggestions on how to handle this one from anyone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685312">8</a> by Serge Rappaille
		posted on 4/6/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>If I try to deselect row(s) before submit, it's OK (for my context)</p><p>More info : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionguy.com%2FColdFusion%2Fblog%2Findex.cfm%2F2008%2F3%2F11%2FCFGrid-Disabling-the-Selected-Row-HighLighting%3ABWzJKqhT61EjOfhhSgnPfRjrt_Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionguy.com/ColdFusion/blog/index.cfm/2008/3/11/CFGrid-Disabling-the-Selected-Row-HighLighting">http://www.coldfusionguy.co...</a></p><p>Regards,</p><p>Serge</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685311">9</a> by Daniel Fredericks
		posted on 5/7/2010 at 4:34 PM
		</div>
		<div class="comment_text"><p>Anybody come up with a solution for this? I have a form where I select a item number, and then I associate documents to that number and display the results in a grid. If I want to upload another doc to associate to the number, I get this error. I tried the deselect JS, but my form still thinks it is submitted. I can't move the grid outside of the form tag due to formatting issues. <br>Maybe I should not use a grid, however I have no idea how many documents may be associated to the number.</p><p>Anyone have any other ideas? I hear the ; is stull a bug, however I don't have that issue just the  enctype="multipart/form-data"</p><p>thanks<br>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685313">10</a> by Greg
		posted on 8/16/2011 at 11:34 PM
		</div>
		<div class="comment_text"><p>For the semi-colon issue, replace the semi-colon using sql if you can- for example, on sql server use: <br>-- Replace any semi-colons with a comma, or the cfgrid will error out. <br>...<br>SELECT<br>REPLACE(Description, ';', ',') AS Description,<br>...</p><p>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685315">11</a> by Chad Baloga
		posted on 10/22/2014 at 8:43 PM
		</div>
		<div class="comment_text"><p>This error just starting happening for us after installing the CF 10 Update 14.  I reverted back to Update 13 and it works again. Any solutions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685316">12</a> by Raymond Camden
		posted on 10/23/2014 at 12:48 AM
		</div>
		<div class="comment_text"><p>Report the bug at the bug tracker and - unfortunately - stop using ColdFusion UI controls. That's kind of a mean answer (sorry!) but it is honest.</p></div>
	</div>
</div>
		