
<div class="comment" id="c_1713680354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680354">1</a> by Jeff Gladnick
		posted on 6/16/2008 at 4:15 AM
		</div>
		<div class="comment_text"><p>I'm having a hard time getting things fully working with bluedragon.  I made a few minor adjustments and was able to login and add new issues.  The only thing left is spry paging -nothing is showing up when i view the issues.  If i view them in print mode they are all there.</p><p>I poked around with firebug, and data IS getting passed to spry, but it simply won't display on the page.  Any suggestions?  Since this is spry, it seems like it shouldn't be a bd/CF problem at all :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680371">2</a> by Raymond Camden
		posted on 6/16/2008 at 5:42 AM
		</div>
		<div class="comment_text"><p>I don't think it's a Spry issue or it would impact all. I'd bet BD is returning the data differently then CF does. Can you compare against a CF install? Or paste in some of the JSON?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680369">3</a> by Jeff Gladnick
		posted on 6/16/2008 at 7:01 AM
		</div>
		<div class="comment_text"><p>Here is the JSON:</p><p>{"RECORDCOUNT":1,"COLUMNLIST":"description,id,issuetype,locusname,name,prettydate,prettyduedate,publicid</p><p>,severityname,severityrank,statusname,statusrank,username","data":{"description":["gf hh f hfhf h  hf</p><p> fhh fh"],"id":["E92EFBA4-B76F-4B8E-B19396BEC049838D"],"issuetype":["Enhancement"],"locusname":["Administration"</p><p>],"name":["Test"],"prettydate":["6\/15\/08"],"prettyduedate":["8\/12\/08"],"publicid":[1],"severityname"</p><p>:["Low"],"severityrank":[1],"statusname":["Open"],"statusrank":[1],"username":["Produce Marketing Assn"</p><p>]}}</p><p>See anything interesting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680370">4</a> by Raymond Camden
		posted on 6/16/2008 at 7:15 AM
		</div>
		<div class="comment_text"><p>Looks to be case. The columns are uppercase in CFMX, lowercase in BD. You can edit the server side to use uppercase or edit the front end code. In this case, I'm putting the blame on BD for returning in a different case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680372">5</a> by Jeff Gladnick
		posted on 6/16/2008 at 10:07 AM
		</div>
		<div class="comment_text"><p>That did it, thanks ray!</p></div>
	</div>
</div>
		