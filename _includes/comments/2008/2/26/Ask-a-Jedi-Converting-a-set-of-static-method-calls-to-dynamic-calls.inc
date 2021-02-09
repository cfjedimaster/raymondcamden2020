
<div class="comment" id="c_1713677443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677443">1</a> by John C. Bland II
		posted on 2/27/2008 at 2:02 AM
		</div>
		<div class="comment_text"><p>Hey Ray, what about using Blah["getImg"&amp;n]()? Does that work?</p><p>I'd prob do the 1 method approach so I haven't tried the above syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677438">2</a> by Raymond Camden
		posted on 2/27/2008 at 2:09 AM
		</div>
		<div class="comment_text"><p>Nope, doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677440">3</a> by Asif
		posted on 2/27/2008 at 9:36 AM
		</div>
		<div class="comment_text"><p>We are trying to create a CFForm with a CFGrid. Whenever the form is updated and the submit button clicked, we want the CFGrid to refresh with a new dynamic CFQuery based on the form element values (without using a CFC or a explicit backend webservices call).</p><p>All the steps till the onclick invoking the submitSearch function that updates the grid is okay.<br>The main problem is that we are unable to reference the form elements in the CFQuery that we want to make dynamic.</p><p>Here is a snippet of code,</p><p>==========================================<br>&lt;!--- this function is called when search button is clicked; This is embedded within the form ---&gt;<br>function submitSearch():Void<br>{<br>    var listingGrid:mx.controls.DataGrid = listingGrid; // This is the Data grid showing the data<br>    var querystr = <a href="http://disq.us/url?url=http%3A%2F%2Fevent_type.selectedItem.data%3ANKja-9I03E34fuFqx1BXZ8D6ISc&amp;cuid=3321886" rel="nofollow noopener" title="event_type.selectedItem.data">event_type.selectedItem.data</a> ; // this is one of the form elements<br>    alert(&lt;cfoutput&gt;querystr&lt;/cfoutput&gt;); // Debug output shows value of form element</p><p>    &lt;cfset thisquery = 'querystr'&gt; // This is added to reference the dynamic form event_type value in cfquery below:<br>    alert(&lt;cfoutput&gt;#thisquery#&lt;/cfoutput&gt;); // this output also prints the right value</p><p>&lt;!--------------------------------------------------------------------<br>Dynamic query to retrieve results and later update grid based on form input on same cfm<br>---------------------------------------------------------------------&gt;<br>&lt;cfquery<br>name="GetParksNew" datasource="mysqlcf_cupidDB" username="cupidDB" password="passwd" result="GPRes"&gt;<br>SELECT InfoType, businessname, misc, price, street, city FROM FeedInfo WHERE ( LOCATE("&lt;cfoutput&gt;#thisquery#&lt;/cfoutput&gt;",EventInfo) &gt; 0 )<br>&lt;/cfquery&gt;<br>// Unfortunately the &lt;cfoutput&gt;#thisquery#&lt;/cfoutput&gt; is not generating the dynamic string as expected ---&gt; <br>Is there an error here? How do we reference the variables such as querystr and substitute here? Intent is to have a dynamic SQL statement based on the form field value be generated.</p><p>Please help us...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677439">4</a> by Adam Fairbanks
		posted on 2/27/2008 at 1:21 PM
		</div>
		<div class="comment_text"><p>Are you sure your debug output is showing the right values?</p><p>var querystr = <a href="http://disq.us/url?url=http%3A%2F%2Fevent_type.selectedItem.data%3ANKja-9I03E34fuFqx1BXZ8D6ISc&amp;cuid=3321886" rel="nofollow noopener" title="event_type.selectedItem.data">event_type.selectedItem.data</a> ; // this is one of the form elements<br>alert(&lt;cfoutput&gt;querystr&lt;/cfoutput&gt;); // Debug output shows value of form element - LOOKS LIKE querystr MIGHT NEED TO BE #querystr#</p><p>&lt;cfset thisquery = 'querystr'&gt; // This is added to reference the dynamic form event_type value in cfquery below: - LOOKS LIKE 'querystr' MIGHT NEED TO BE querystr (NO QUOTES)<br>alert(&lt;cfoutput&gt;#thisquery#&lt;/cfoutput&gt;); // this output also prints the right value</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677442">5</a> by H Jaber
		posted on 2/27/2008 at 5:58 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for the advice, here's a complete example for anyone who's interested:</p><p>&lt;cfloop from="1" to="4" index="i"&gt;<br>	&lt;cfif structkeyexists(form,"img#i#") and form['img#i#'] neq ''&gt;<br>		&lt;cfinvoke component="#CaseStudy#" method="getIMG#i#" returnvariable="res"&gt;<br>			&lt;cfinvokeargument name="CaseID" value="#url.CaseID#"/&gt;<br>		&lt;/cfinvoke&gt;<br>		&lt;cfif fileexists("#curpath#thumbs\#res#.jpg")&gt;<br>			&lt;cffile action="delete" file="#curpath#thumbs\#res#.jpg"&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif fileexists("#curpath#small\#res#.jpg")&gt;<br>			&lt;cffile action="delete" file="#curpath#small\#res#.jpg"&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif fileexists("#curpath##res#.jpg")&gt;<br>			&lt;cffile action="delete" file="#curpath#large\#res#.jpg"&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif fileexists("#curpath##res#.jpg")&gt;<br>			&lt;cffile action="delete" file="#curpath##res#.jpg"&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677445">6</a> by Dan G. Switzer, II
		posted on 2/27/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>Raymond's second alternative, is the much better solution:</p><p>CaseStudy.getImg(1);</p><p>Using this you could have an unlimited number of images and not have to keep adding new methods to support the new image.</p><p>If you don't want to go and refactor a bunch of code, just add a getImg() method to your CFC and have that invoke the proper method. You could do something like this for easily implementation:</p><p>function getImg(i){<br> if( i eq 1 ) return getImg1();<br> else if( i eq 2 ) return getImg2();<br> .. etc ..<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677441">7</a> by Raymond Camden
		posted on 2/27/2008 at 7:33 PM
		</div>
		<div class="comment_text"><p>To be anal, if you were to use getImg(i) in the CFC, I wouldn't put a big CFIF inside, but move the cfinvoke code in there as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677444">8</a> by Dan G. Switzer, II
		posted on 2/27/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Since my suggest was as a quick hack to work with the existing methods, I suggested the IF statement simply because it would be more efficient.</p><p>Personally, I'd get rid of the getImgX methods all together.</p><p>He could also refactor getImg() to do all the real work and then just have his getImgX methods invoke the getImg() method so as not to break backwards compatibility. I made the assumption that maybe the logic for the getImgX() methods was considerably different--which is why they were broken off into unique functions to begin with, which is why I thought mapping getImg() to the getImgX() methods might be an easier solution to implement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677450">9</a> by Raymond Camden
		posted on 2/27/2008 at 7:51 PM
		</div>
		<div class="comment_text"><p>Dan - I know, that's why I said, "To be anal..." ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677449">10</a> by Dan G. Switzer, II
		posted on 2/28/2008 at 3:11 AM
		</div>
		<div class="comment_text"><p>@Raymond: I'm beginning to think you just like trying to find ways to insert the word "anal" into a conversation. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677451">11</a> by Raymond Camden
		posted on 2/28/2008 at 3:12 AM
		</div>
		<div class="comment_text"><p>That's a lie... a mean - vicious lie...</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677452">12</a> by Asif
		posted on 2/28/2008 at 9:35 AM
		</div>
		<div class="comment_text"><p>@Adam Fairbanks</p><p>Thanks for the response. When I do that, for some reason coldfusion does not recognize the variable "querystr" - am I missing some basic way of referencing variables in a form in current cfm page?</p><p>=================================Revised Snippet ====<br>&lt;!--- this function is called when search button is clicked ---&gt;<br>function submitSearch():Void<br>{<br>    var listingGrid:mx.controls.DataGrid = listingGrid;</p><p>    var querystr = <a href="http://disq.us/url?url=http%3A%2F%2Fevent_type.selectedItem.data%3ANKja-9I03E34fuFqx1BXZ8D6ISc&amp;cuid=3321886" rel="nofollow noopener" title="event_type.selectedItem.data">event_type.selectedItem.data</a> ;<br>    alert(&lt;cfoutput&gt;#querystr#&lt;/cfoutput&gt;);</p><p>    &lt;cfset qstr = querystr &gt; // *** THROWS ERROR SAYING querystr is undefined</p><p>&lt;!--------------------------------------------------------------------<br>Query database for information if cached database information has<br>not been updated in the last six hours; otherwise, use cached data.<br>---------------------------------------------------------------------&gt;<br>&lt;cfquery<br>name="GetParksNew" datasource="mysqlcf_cupidDB" username="cupidDB" password="TenM4All08" result="GPRes"&gt;<br>SELECT InfoType, businessname, misc, price, street, city FROM FeedInfo WHERE ( LOCATE("#qstr#",EventInfo) &gt; 0 )<br>&lt;/cfquery&gt;<br>==========================================</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677453">13</a> by Adam Fairbanks (Tidy Tech)
		posted on 2/28/2008 at 10:25 AM
		</div>
		<div class="comment_text"><p>@ Asif</p><p>I feel a little uncomofortable continuing this thread because it doesn's seem to have anything to do with the original post, but..</p><p>looking closer at your original code, it appears the querystr variable is a javascript variable, and you're trying to access it as a coldfusion variable #querystr#.</p><p>To convert a client-side javascript variable to a server-side coldfusion variable, you would need to submit the javascript variable as an html form variable where you could then access it as #form.querystr#.</p><p>(Sorry.. I have very little context for what you're code is trying to do.)</p></div>
	</div>
</div>
		