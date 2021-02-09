
<div class="comment" id="c_1713731843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731843">1</a> by Ed Tabara
		posted on 4/23/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>one of other ways to do teh same thing would be so:</p><p>&lt;cfset data = [1,2,3,4,5,6,7,8,9]&gt;<br>&lt;style&gt;<br>#left {<br>	float: left;<br>	width: 200px;<br>}<br>#right {<br>	float: left;<br>	width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;div id="left"&gt;<br>	&lt;b&gt;col1&lt;/b&gt;&lt;br/&gt;<br>	&lt;cfloop index="x" from="1" to="#arrayLen(data)#"&gt;<br>		&lt;cfif x mod 2 eq 1&gt;<br>			&lt;cfoutput&gt;<br>				#data[x]#&lt;br/&gt;<br>			&lt;/cfoutput&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/div&gt;<br>&lt;div id="right"&gt;<br>	&lt;b&gt;col2&lt;/b&gt;&lt;br/&gt;<br>	&lt;cfloop index="x" from="1" to="#arrayLen(data)#"&gt;<br>		&lt;cfif x mod 2 eq 0&gt;<br>			&lt;cfoutput&gt;<br>				#data[x]#&lt;br/&gt;<br>			&lt;/cfoutput&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731825">2</a> by spills
		posted on 4/23/2011 at 8:14 PM
		</div>
		<div class="comment_text"><p>Don't forget about the handy dandy "step" option in cfloops.</p><p>&lt;cfset data = [1,2,3,4,5,6,7,8,9]&gt;<br>&lt;style&gt;<br>#left {<br>   float: left;<br>   width: 200px;<br>}<br>#right {<br>   float: left;<br>   width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;div id="left"&gt;<br>   &lt;b&gt;col1&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="x" from="1" to="#arrayLen(data)#" step="2"&gt;<br>              &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt;<br>&lt;div id="right"&gt;<br>   &lt;b&gt;col2&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="x" from="2" to="#arrayLen(data)#" step="2"&gt;<br>          &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt; <br>#right {<br>   float: left;<br>   width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;div id="left"&gt;<br>   &lt;b&gt;col1&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="x" from="1" to="#arrayLen(data)# step="2"&gt;<br>              &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt;<br>&lt;div id="right"&gt;<br>   &lt;b&gt;col2&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="2" from="1" to="#arrayLen(data)#" step="2"&gt;<br>          &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731846">3</a> by Raymond Camden
		posted on 4/23/2011 at 8:16 PM
		</div>
		<div class="comment_text"><p>Good alternatives guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731847">4</a> by spills
		posted on 4/23/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>I am not sure how the code posted twice but, I will try it again.</p><p>Don't forget about the handy dandy "step" option for cfloops we can simplify code further.</p><p>&lt;cfset data = [1,2,3,4,5,6,7,8,9]&gt;<br>&lt;style&gt;<br>#left {<br>   float: left;<br>   width: 200px;<br>}<br>#right {<br>   float: left;<br>   width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;div id="left"&gt;<br>   &lt;b&gt;col1&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="x" from="1" to="#arrayLen(data)#" step="2"&gt;<br>              &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt;<br>&lt;div id="right"&gt;<br>   &lt;b&gt;col2&lt;/b&gt;&lt;br/&gt;<br>   &lt;cfloop index="x" from="2" to="#arrayLen(data)#" step="2"&gt;<br>          &lt;cfoutput&gt;<br>            #data[x]#&lt;br/&gt;<br>         &lt;/cfoutput&gt;<br>   &lt;/cfloop&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731824">5</a> by Paul
		posted on 4/24/2011 at 2:11 PM
		</div>
		<div class="comment_text"><p>A float-left is enough if you want more than 2 columns:</p><p>&lt;cfset data = [1,2,3,4,5,6,7,8,9]&gt;<br>&lt;cfset nrOfColumns=3&gt;</p><p>&lt;style&gt;<br>#left {<br>   float: left;<br>   width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;cfoutput&gt;<br>  &lt;cfloop index="x" from="1" to="#arrayLen(data)#"&gt;<br>    &lt;div id="left"&gt;<br>     #data[x]#<br>      &lt;cfif x MOD nrOfColumns EQ 0&gt; <br>        &lt;hr&gt;<br>     &lt;/cfif&gt;  <br>   &lt;/div&gt;<br>  &lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731827">6</a> by sooraj
		posted on 4/25/2011 at 12:12 PM
		</div>
		<div class="comment_text"><p>here is another alternative, all in one loop</p><p>&lt;style&gt;<br>#left {<br>	float: left;<br>	width: 200px;<br>}<br>#right {<br>	float: left;<br>	width: 200px;<br>}<br>&lt;/style&gt;</p><p>&lt;cfparam name="left_content" default=""&gt;<br>&lt;cfparam name="right_content" default=""&gt;</p><p>&lt;cfset data = [1,2,3,4,5,6,7,8,9,10]&gt;</p><p>&lt;cfloop index="x" from="1" to="#arrayLen(data)#"&gt;<br>	&lt;cfset item = data[x]&gt;<br>	&lt;cfif x mod 2 is 1&gt;<br>		&lt;cfset left_content=left_content&amp;"#item#&lt;br/&gt;"&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset right_content=right_content&amp;"#item#&lt;br/&gt;"&gt;<br>	&lt;/cfif&gt;</p><p>&lt;/cfloop&gt;<br>&lt;div id="left"&gt;<br>&lt;b&gt;col1&lt;/b&gt;&lt;br/&gt;<br>&lt;cfoutput&gt;#left_content#&lt;/cfoutput&gt;<br>&lt;/div&gt;<br>&lt;b&gt;col2&lt;/b&gt;&lt;br/&gt;<br>&lt;cfoutput&gt;#right_content#&lt;/cfoutput&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731831">7</a> by Susan Hansen
		posted on 8/3/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>Thank you for sharing this code. It does what I need ( I think) except I can't get it to pull my data from a list of subjects in my database. Can the data array be anything other than numbers? I have a database with field sub_name. Items in this list change so I don't want to have to manually make an array with this list of subjects, so I'd like the array to pull this list of sub_names and then display them in two columns (and of course I want the impossible--for the list to be alphabetical left column and flow up to the right  column) Any insights appreciated and most welcome as I'm not a programmer. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731826">8</a> by Raymond Camden
		posted on 8/3/2011 at 2:18 AM
		</div>
		<div class="comment_text"><p>The data can be anything. If you did a db query, then line 6 in the first snippet would change to a cfloop query="'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731829">9</a> by Dave Seavey
		posted on 12/4/2013 at 1:19 AM
		</div>
		<div class="comment_text"><p>Exactly what I needed. Perfect, as usual.</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731828">10</a> by Douglas Benoit
		posted on 9/10/2014 at 12:12 PM
		</div>
		<div class="comment_text"><p>While this is very cool, most recordsets come from a database table or saved query (Access), right?  So the &lt;CFSET data="query_name_or_table"&gt; seems like it may be worth looking into, shouldn't it?</p><p>'Just a thought....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731832">11</a> by Raymond Camden
		posted on 9/10/2014 at 3:12 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I understand you. Whether or not it comes from a db table my solution still applies. Your comment, cfset data="somequery", doesn't make any sense. I just used an array to make it quicker. You could easily switch it to a query.</p></div>
	</div>
</div>
		