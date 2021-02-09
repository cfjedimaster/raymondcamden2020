
<div class="comment" id="c_1713718618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718618">1</a> by Henry Ho
		posted on 9/28/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>Isn't cfloop inside cfquery more efficient?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718615">2</a> by Raymond Camden
		posted on 9/28/2009 at 11:03 PM
		</div>
		<div class="comment_text"><p>Not that I'm aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718607">3</a> by Henry Ho
		posted on 9/28/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>see: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.garyrgilbert.com%2Fblog%2Findex.cfm%2F2008%2F5%2F9%2FA-Question-of-Speed%3AjALOHFcQwAF0WE62D3Mul1-_2iE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.garyrgilbert.com/blog/index.cfm/2008/5/9/A-Question-of-Speed">http://www.garyrgilbert.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718616">4</a> by Raymond Camden
		posted on 9/28/2009 at 11:09 PM
		</div>
		<div class="comment_text"><p>Oh. Well sure. It really isn't pertinent to this blog entry though. ;) And frankly, it would only help in a case where you had so many inserts that you probably wouldn't want to be editing them on one page anyway, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718619">5</a> by PC
		posted on 9/29/2009 at 7:51 PM
		</div>
		<div class="comment_text"><p>Excellent...this did the trick....thank you so much for the code and the explanation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718606">6</a> by Rick Clark
		posted on 10/26/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I enjoy reading your blogs and have picked up several tips. I tried using this blog to update my rows. Unfortunately, I am using access (I know - at max I probably have only thirty rows), and your code is for SQL. How hard is it to convert this to work on access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718603">7</a> by Raymond Camden
		posted on 10/26/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>Did you try it? It should work fine w/ Access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718605">8</a> by Rick Clark
		posted on 10/26/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>I get the following error:</p><p>Element points_2 is undefined in a Java object of type class coldfusion.filter.FormScope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718602">9</a> by Raymond Camden
		posted on 10/26/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>That's not an Access error, but a CF error. I assume you modified my code a bit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718601">10</a> by Rick Clark
		posted on 10/26/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>Here is the code in question:</p><p>&lt;cfif structKeyExists(form, "save")&gt;<br>&lt;cfloop item="field" collection="#form#"&gt;<br>&lt;cfif findNoCase("art_", field)&gt;<br>&lt;cfset artid = listLast(field, "_")&gt;<br>&lt;cfset points = form["points_" &amp; artid]&gt;<br>      &lt;cfquery datasource="artgallery"&gt;<br>            UPDATE art SET<br>             artname = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form[field]#"&gt;,<br>            points = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#points#"&gt;'<br>            where artid = &lt;cfqueryparam  cfsqltype="cf_sql_integer" value="#artid#"&gt;<br>      &lt;/cfquery&gt;<br>	  &lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfquery name="getArt" datasource="artgallery"&gt;<br>select    artid, artname, points<br>from    art<br>&lt;/cfquery&gt;</p><p>&lt;form action="cfloop.cfm" method="post"&gt;<br>&lt;table&gt;<br>&lt;cfloop query="getArt"&gt;<br>    &lt;tr&gt;<br>		&lt;cfoutput&gt;&lt;td&gt;&lt;input type="text" name="art_#artid#" value="#artname#" /&gt;&lt;/td&gt;<br>				&lt;td&gt;&lt;input type="text" name="points_#artid#" value="#points#" /&gt;&lt;/td&gt;&lt;/cfoutput&gt;<br>    &lt;/tr&gt;<br>&lt;/cfloop&gt;<br>&lt;/table&gt;<br>&lt;input type="submit" name="save" value="Save" /&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718604">11</a> by Raymond Camden
		posted on 10/26/2009 at 1:17 AM
		</div>
		<div class="comment_text"><p>Looks fine to me. You could add a cfdump of the form scope to see if anything is amiss.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718610">12</a> by Rick Clark
		posted on 10/26/2009 at 1:48 AM
		</div>
		<div class="comment_text"><p>Found it, I had a misplaced ' behind a bracket.</p><p>Thanks,<br>Rick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718608">13</a> by Chris
		posted on 2/18/2011 at 11:43 PM
		</div>
		<div class="comment_text"><p>Anyone done this with cfscript (scripted query)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718609">14</a> by Chris
		posted on 2/19/2011 at 1:43 AM
		</div>
		<div class="comment_text"><p>Nm, I figured it out...stupid mistake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718740">15</a> by instinct
		posted on 10/5/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Please could you help on  multi-data insert  example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718755">16</a> by Raymond Camden
		posted on 10/7/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>Help how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718757">17</a> by Misty
		posted on 10/22/2012 at 5:31 PM
		</div>
		<div class="comment_text"><p>Hi ray,Working with Multiple updates, I encoutered a checkbox, so using ur code and i tried little modifications but t does seems to like the checkbox if it not defined, it updates all records to 1 or sometimes it does not update the checkbox code</p><p>please check the code</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FbNwju7bG%3AXwejVT_iVWUOObQ-o8SlhNJceJI&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/bNwju7bG">http://pastebin.com/bNwju7bG</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718756">18</a> by Raymond Camden
		posted on 10/22/2012 at 6:51 PM
		</div>
		<div class="comment_text"><p>Misty, I'd be ok with helping you fix this in general, but looking over your code and calling out the specific issue is a bit much for this thread here.</p><p>When working with checkboxes, you need to use the ColdFusion isDefined function. If it isn't defined, it means the checkbox wasn't checked. If it is, then, well, it was.</p></div>
	</div>
</div>
		