
<div class="comment" id="c_1713724498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724498">1</a> by JD
		posted on 5/20/2010 at 7:42 PM
		</div>
		<div class="comment_text"><p>Seems like you would want to specify the height/width of the writable area in the background image.  Then you could loop over some default sizes for the supplied text to make sure you get the largest text you can to fit in the defined area.</p><p>I don't think you would want to do that on every page request...maybe slap it into the application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724497">2</a> by Michael
		posted on 6/20/2010 at 4:55 PM
		</div>
		<div class="comment_text"><p>Anyway to use the produced image in a &lt;cfcontent tag?  I can't seem to get it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724506">3</a> by Michael
		posted on 6/21/2010 at 3:40 PM
		</div>
		<div class="comment_text"><p>Ok I found a workable solution, maybe not the best but it works<br> &lt;cfimage action="resize" width="750" height="90" source="#img#" name="NewImage" destination="MYFolder" overwrite="yes"&gt;</p><p> &lt;cfcontent type="image/jpeg" file="MYFOLDER/#img#.jpg"&gt;<br>&lt;!---End of This Page---&gt;</p><p>&lt;!---Code for other sites.---&gt;<br>&lt;img src="URLTOTHISPAGE?id="WhatevertogenerateImage"&gt;</p><p>Seems to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724518">4</a> by Raymond Camden
		posted on 6/21/2010 at 5:12 PM
		</div>
		<div class="comment_text"><p>I believe that if #img# is your cfimage variable, you can just do</p><p>&lt;cfcontent type="image/jpeg" variable="#imageGetBlob(img)#"&gt;</p><p>I think. I believe one issue is that if the image is 100% virtual, then cfcontent doesn't know how to handle the mime type.</p></div>
	</div>
</div>
		