
<div class="comment" id="c_1713667948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667948">1</a> by Chris Jordan
		posted on 7/3/2007 at 2:18 AM
		</div>
		<div class="comment_text"><p>Rey,</p><p>It should be noted that the datatype list is only available in MX7 and up.</p><p>In MX6.1 I use the following technique. I have a table called  "QueryDataTypes". That table contains a column for each datatype. So I've got a column called "character" one called "numeric" one called "Date", etc.. There's nothing in the table other than these columns, and of course each column is of the type that it's named after.</p><p>Then when I need a query with specific data types I run code like this:</p><p>&lt;CFSet DataTypeSelectList = ""&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS UNCPath")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS ClientNumber")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS Requestor")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS AnsweringRep")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS StartTime")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Character AS EndTime")&gt;<br>&lt;CFSet DataTypeSelectList = ListAppend(DataTypeSelectList,"Date AS ScheduledDate")&gt;</p><p>&lt;CFQuery Name="myQuery" DataSource="#myDataSource#"&gt;<br>	SELECT #DataTypeSelectList#<br>	FROM QueryDataTypes<br>&lt;/CFQuery&gt;</p><p>and that leaves me with an empty query object that I can then use as I need.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667947">2</a> by Raymond Camden
		posted on 7/3/2007 at 2:29 AM
		</div>
		<div class="comment_text"><p>Thats an interesting take for sure. Sorry if it wasn't clear folks - this is a CF7 fix. (This being my blog post, not Chris' comment.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667937">3</a> by Scott P
		posted on 7/3/2007 at 5:51 AM
		</div>
		<div class="comment_text"><p>I bumped into this doing an insert of data from a query of query.  I was staring at the data saying it is in X format but queryparam kept saying no it isn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667949">4</a> by Gary Gilbert
		posted on 7/3/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>What really bothers me is that when you create a query using the queryNew function and specify the data type of a column as date you end up with an odbcdate e.g. {ts '2001-07-21 14:22:32'}</p><p>Actually when you perform query of queries it also converts the dates to an odbcdate format if I recall correctly.  It doesn't matter if you are working with the data locally but sending odbcdates in json  could make parsing the dates on the other side with javascript a bit of a challenge.</p></div>
	</div>
</div>
		