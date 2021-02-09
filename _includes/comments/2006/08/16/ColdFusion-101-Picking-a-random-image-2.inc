
<div class="comment" id="c_1713656364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656364">1</a> by todd
		posted on 8/16/2006 at 4:44 PM
		</div>
		<div class="comment_text"><p>would this work?  i know people don't like using cfbreak, but it seems like it would work.  i'm probably missing a much easier solution here.</p><p>&lt;cfapplication name="img" sessionManagement="true"&gt;</p><p>&lt;!--- Get full path to images. ---&gt;<br>&lt;cfset imageDirectory = expandPath(".")&gt;</p><p>&lt;!--- Get directory ---&gt;<br>&lt;cfdirectory action="list" directory="#imageDirectory#" name="images" filter="*.jpg"&gt;</p><p>&lt;!--- Do we have any images? ---&gt;<br>&lt;cfif images.recordCount gt 0&gt;</p><p>   &lt;!--- store ID values ---&gt;<br>   &lt;cfif not structKeyExists(session, "totalList") or session.totalList is ""&gt;<br>      &lt;cfset session.totalList = valueList(<a href="http://disq.us/url?url=http%3A%2F%2Fimages.name%3ATpPj2FEwIgjYNtooONaTCXXn0FQ&amp;cuid=3321886" rel="nofollow noopener" title="images.name">images.name</a>)&gt;<br>   &lt;/cfif&gt;</p><p>   &lt;!--- pick a random number ---&gt;<br>   &lt;cfset pickedIndex = randRange(1, listLen(session.totalList))&gt;</p><p>	&lt;!--- if the random number is equal to the last index and we're at the beginning of the list ---&gt;<br>   &lt;cfif structKeyExists(application.lastIndex) and application.lastIndex eq pickedIndex and listLen(session.totalList) eq images.recordCount&gt;<br>   	&lt;cfloop from="1" to="#listLen(session.totalList)#" index="i"&gt;<br>		&lt;cfset pickedIndex = randRange(1, listLen(session.totalList))&gt;<br>   		&lt;cfif pickedIndex neq application.lastIndex&gt;<br>			&lt;cfbreak&gt; <br>		&lt;/cfif&gt;<br>    &lt;/cfloop&gt;<br>   &lt;/cfif&gt;</p><p>   &lt;!--- pick from list ---&gt;<br>   &lt;cfset image = listGetAt(session.totalList, pickedIndex)&gt;</p><p>   &lt;!--- remove from total list ---&gt;<br>   &lt;cfset session.totalList = listDeleteAt(session.totalList, pickedIndex)&gt;</p><p>   &lt;!--- set an application variable containing the last index in the list so we don't repeat ---&gt;<br>   &lt;cfif listLen(session.totalList) eq 1&gt;<br>   		&lt;cfset application.lastIndex = pickedIndex&gt;<br>   &lt;/cfif&gt;</p><p>   &lt;!--- display it ---&gt;<br>   &lt;cfoutput&gt;&lt;img src="#image#"&gt;&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656369">2</a> by todd
		posted on 8/16/2006 at 4:47 PM
		</div>
		<div class="comment_text"><p>or a conditional loop?</p><p>&lt;cfloop condition="pickedIndex neq application.lastIndex"&gt;<br>  &lt;cfset pickedIndex = randRange(1,listLen(session.totalList))&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656371">3</a> by todd
		posted on 8/16/2006 at 5:06 PM
		</div>
		<div class="comment_text"><p>should be session.lastIndex, not application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656372">4</a> by db
		posted on 8/16/2006 at 8:04 PM
		</div>
		<div class="comment_text"><p>if the image name was stored in the client scope, then would it also prevent repeating across sessions?</p><p>&lt;!--- Get full path to images. ---&gt;<br>&lt;cfset imageDirectory = "#rootpath#img"&gt;</p><p>&lt;!--- Get directory ---&gt;<br>&lt;cfdirectory action="list" directory="#imageDirectory#" name="images" filter="*.jpg"&gt;</p><p>&lt;!--- Do we have any images? ---&gt;<br>&lt;cfif images.recordCount gt 0&gt;</p><p>   &lt;!--- store ID values ---&gt;<br>   &lt;cfif not structKeyExists(session, "totalList") or session.totalList is ""&gt;<br>      &lt;cfset session.totalList = valueList(<a href="http://disq.us/url?url=http%3A%2F%2Fimages.name%3ATpPj2FEwIgjYNtooONaTCXXn0FQ&amp;cuid=3321886" rel="nofollow noopener" title="images.name">images.name</a>)&gt;<br>   &lt;/cfif&gt;</p><p>   &lt;!--- remove last picked from the list ---&gt;<br>   &lt;cfif structKeyExists(client, "imagepicked")&gt;</p><p>	  &lt;cfset session.totalList = listDeleteAt(session.totalList, listfind(session.totalList,client.imagepicked))&gt;</p><p>&lt;!--- at end of list, repopulate excluding last picked ---&gt;<br>	  &lt;cfif session.totalList is ""&gt; <br>		 &lt;cfset session.totalList = listDeleteAt(valueList(<a href="http://disq.us/url?url=http%3A%2F%2Fimages.name%3ATpPj2FEwIgjYNtooONaTCXXn0FQ&amp;cuid=3321886" rel="nofollow noopener" title="images.name">images.name</a>), listfind(valueList(<a href="http://disq.us/url?url=http%3A%2F%2Fimages.name%3ATpPj2FEwIgjYNtooONaTCXXn0FQ&amp;cuid=3321886" rel="nofollow noopener" title="images.name">images.name</a>),client.imagepicked))&gt;<br>      &lt;/cfif&gt;</p><p>   &lt;/cfif&gt;</p><p>   &lt;!--- pick a random number ---&gt;<br>   &lt;cfset pickedIndex = randRange(1, listLen(session.totalList))&gt;</p><p>   &lt;!--- pick from list ---&gt;<br>   &lt;cfset client.imagepicked = listGetAt(session.totalList, pickedIndex)&gt;</p><p>   &lt;!--- display it ---&gt;<br>   &lt;cfoutput&gt;&lt;img src="#basehref#img/#client.imagepicked#"&gt;&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656368">5</a> by Tony Petruzzi
		posted on 8/16/2006 at 11:34 PM
		</div>
		<div class="comment_text"><p>Yet another way using only a cookie as the holder and QoQ to filter the images already shown to the user. Yes I know that cookies have a limit of 4K for the domain, but this is just an example.</p><p>&lt;!--- Get full path to images. ---&gt;<br>&lt;cfset imageDirectory = expandPath("../images")&gt;</p><p>&lt;!--- Get directory ---&gt;<br>&lt;cfdirectory action="list" directory="#imageDirectory#" name="images" filter="*.jpg"&gt;</p><p>&lt;!--- Do we have any images? ---&gt;<br>&lt;cfif images.recordCount gt 0&gt;</p><p>	&lt;!--- create a cookie if we don't have one OR reset the cookie if we've shown all the images' ---&gt;<br>	&lt;cfif not structKeyExists(cookie, "imageList") OR ListLen(cookie.imageList, "|") EQ images.recordCount&gt;<br>		&lt;cfcookie name="imageList" expires="never" value=""&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;!--- remove images already shown ---&gt;<br>	&lt;cfquery name="imagesQuery" dbtype="query"&gt;<br>	SELECT name	FROM images<br>	&lt;cfif cookie.imageList NEQ ""&gt;<br>	WHERE<br>		1 = 1<br>		&lt;cfloop list="#cookie.imageList#" delimiters="|" index="i"&gt;<br>		AND name &lt;&gt; &lt;cfqueryparam value="#i#"&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfif&gt;<br>	&lt;/cfquery&gt;</p><p>	&lt;!--- only if we have left over images ---&gt;<br>	&lt;cfif imagesQuery.RecordCount GT 0&gt;</p><p>		&lt;!--- pick the lucky image ---&gt;<br>		&lt;cfset imagePicked = <a href="http://disq.us/url?url=http%3A%2F%2FimagesQuery.name%3AQ7ahcbGityp0ZbwMfgYiylO8OHI&amp;cuid=3321886" rel="nofollow noopener" title="imagesQuery.name">imagesQuery.name</a>[RandRange(1, imagesQuery.RecordCount)]&gt;</p><p>		&lt;!--- append to the cookie ---&gt;<br>		&lt;cfset cookie.imageList = ListAppend(cookie.imageList, imagePicked, "|")&gt;</p><p>		&lt;!--- display it ---&gt;<br>		&lt;cfoutput&gt;&lt;img src="../images/#imagePicked#"&gt;&lt;/cfoutput&gt;</p><p>	&lt;/cfif&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656370">6</a> by Joe
		posted on 9/6/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>How about using this same code and implementing a linkable image?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656374">7</a> by Raymond Camden
		posted on 9/6/2006 at 7:29 PM
		</div>
		<div class="comment_text"><p>Joe, what do you mean? You mean linking to the image instead of showing it? That's just an HTML change and would be trivial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656376">8</a> by Joe
		posted on 9/6/2006 at 9:38 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I just want to attach a link to the image.  I have specific links for each image. Ex. I click on Home Depot's image to get to Home Depot's website.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656375">9</a> by Raymond Camden
		posted on 9/7/2006 at 1:51 AM
		</div>
		<div class="comment_text"><p>Well, that is getting more complex. Our current code is based on physical files, but if you want other info along with the images, you most likely want to switch to a database approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656377">10</a> by Kevin
		posted on 12/7/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>Picking a two random numbers from a list, the list may not be repeated suppose<br>1 student has 10 books ( 1, 2,3,4,5,6,7,8,9 ,10)<br>2 student has 9 ( 11,22,13,14,15,16,17,18,19)<br>3 student has 7 ( 20,21,23,24,24,25,26).All this books are in list if I were to pick two random books for each student. How can that be done. The example above deletes the picked number, here I need to delete the list for eg 1 studnet, start from 2nd student.</p></div>
	</div>
</div>
		