
<div class="comment" id="c_1713730580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730580">1</a> by SuperAlly
		posted on 3/15/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>Another helpful and timely post Ray.  Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730583">2</a> by MikeG
		posted on 3/15/2011 at 11:04 PM
		</div>
		<div class="comment_text"><p>just an FYI for us lazy typers:<br>#getart["artid"][5]#</p><p>can also be expressed as</p><p>#getart.artid[5]#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730585">3</a> by Phillip Senn
		posted on 3/15/2011 at 11:12 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond!  I learned a lot from this post and used it to write <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfmzengarden.com%2FCFMZenGarden%2F071%2F%3A1fzza9pyyfc8y9VuOEI4OphomAk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfmzengarden.com/CFMZenGarden/071/">http://www.cfmzengarden.com...</a>.  Working with this metadata also reminded me of the two functions ValueList and QuotedValueList.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730582">4</a> by todd sharp
		posted on 3/16/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>Typically the same way I approach it too.</p><p>The other nice thing about using bracket notation is that you can get even lazier and alias your query columns with descriptive names like so:</p><p>&lt;cfquery name="getart" datasource="cfartgallery" maxrows="10"&gt;<br>select	artname as "Art Name", description as "Description", price as "Sale Price", issold as "Sold?", artid as "ID"<br>from	art	<br>&lt;/cfquery&gt;</p><p>And not have to worry about invalid variable naming errors.  Makes quick and dirty dynamic report generation a snap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730581">5</a> by Raymond Camden
		posted on 3/16/2011 at 12:58 AM
		</div>
		<div class="comment_text"><p>Now that's interesting Todd. I've never seen any name a column "Sold?", but that's kinda cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730590">6</a> by Sooraj
		posted on 3/16/2011 at 10:52 AM
		</div>
		<div class="comment_text"><p>Great info Ray</p><p>Thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730589">7</a> by todd sharp
		posted on 3/16/2011 at 8:27 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>I certainly wouldn't use a column name like 'Sold?' in an everyday query, but I've used this approach quite often in the past for pages/queries that _just_ do reports.  I think of it more as a column header then a column name in those cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730586">8</a> by Raymond Camden
		posted on 3/16/2011 at 8:31 PM
		</div>
		<div class="comment_text"><p>Makes perfect sense. Again - thanks for sharing that. I never woulda thought to use a scheme like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730584">9</a> by TM
		posted on 3/17/2011 at 12:44 AM
		</div>
		<div class="comment_text"><p>Another method you might try using to get your column list is the method listed here: <a href="http://disq.us/url?url=http%3A%2F%2Fexistdissolve.com%2F2010%2F11%2Fquick-coldfusion-goodness%2F%3AlkCpp8HoMbTpuG8OKu8gxnrbA_U&amp;cuid=3321886" rel="nofollow noopener" title="http://existdissolve.com/2010/11/quick-coldfusion-goodness/">http://existdissolve.com/20...</a><br>The code look like this:<br>columns = myquery.getMeta().getcolumnlabels().<br>This not only give you the correct order, but is case-sensitive so they;re not all upper-case.<br>One of the many things I wish I would have found years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730587">10</a> by Marc Cerabona
		posted on 8/18/2011 at 6:59 PM
		</div>
		<div class="comment_text"><p>This is great. Just what I needed. One problem I am having is, what if I want to output the column label instead of the name.  So Select somecolumn as name</p><p>I want to output the name instead of the some column. is this possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730588">11</a> by Raymond Camden
		posted on 8/18/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>Sorry - what? Not getting what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730591">12</a> by Marc Cerabona
		posted on 8/18/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>thanks for looking at this.</p><p>What I am trying to do is output a query dynamically as you did, but instead of using the actual name i want to use the label.</p><p>So I have a query.</p><p>Select action1 as babysitting, action2 as dogsitting<br>from tblwhatever</p><p>i want to output the query using babysitting and dogsitting,  not action1 and action2.</p><p>i have tried using the getmetadata().()columnname and columnlabel, but they both say they are unavailable.</p><p>any help would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730592">13</a> by Raymond Camden
		posted on 8/18/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>Using the code above, I changed the SQL to</p><p>select	artname as name, description, price, issold, artid<br>from	art</p><p>and it worked fine. I saw NAME.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730594">14</a> by Marc Cerabona
		posted on 8/18/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>hmm, interesting.  Because I get artname instead of name would this be affected by the type of database you are using? ie, would the metadata change form mysql to mssql?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730593">15</a> by Raymond Camden
		posted on 8/19/2011 at 12:46 AM
		</div>
		<div class="comment_text"><p>Perhaps. I was testing with embedded Derby db.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730595">16</a> by Jack
		posted on 8/6/2013 at 1:54 AM
		</div>
		<div class="comment_text"><p>Is col and columnlist you have used are reserved words in coldfusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730597">17</a> by Raymond Camden
		posted on 8/6/2013 at 1:55 AM
		</div>
		<div class="comment_text"><p>columnList is a built in variable for a query. col was the variable I used when iterating over the list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730598">18</a> by Animesh Dutta
		posted on 12/4/2013 at 1:42 AM
		</div>
		<div class="comment_text"><p>I tested with MSSQL,It is showing the column label(like name) instead of column name(like artname)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730599">19</a> by Animesh Dutta
		posted on 12/4/2013 at 2:03 AM
		</div>
		<div class="comment_text"><p>oops!!! tested with MySQL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730600">20</a> by Raymond Camden
		posted on 12/4/2013 at 2:40 AM
		</div>
		<div class="comment_text"><p>I'm sorry, but I don't understand what you are saying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730601">21</a> by Animesh Dutta
		posted on 12/4/2013 at 11:06 PM
		</div>
		<div class="comment_text"><p>Ray-<br>Marc Cerabona is not getting the column label name.I hope he is not calling the proper functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730602">22</a> by Raymond Camden
		posted on 12/5/2013 at 3:59 AM
		</div>
		<div class="comment_text"><p>I still don't understand you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730603">23</a> by Darren Cook
		posted on 2/18/2014 at 4:17 AM
		</div>
		<div class="comment_text"><p>Interesting comment thread! Maybe I can shed some light:<br>Ever wondered about the difference between column names and labels? Some JDBC drivers (the two I know about are Oracle and Teradata) for each column return two properties: the original column as the "name" and the alias as the "label".<br>   select colA as "bee";<br>   #writedump( query.getColumnNames() )# outputs COLA<br>   #writedump( query.getMetadata().getColumnLabels() )# outputs "bee"</p><p>With other databases that don't support this, it sounds like CF sets column names to the UCASE() version and column labels to be the original queried case (I haven't tested this).</p><p>With CF, you can query.setColumnNames() and query.getMetadata().SetColumnLabel() with different values, and the matching get() functions return the values independently as you would expect. However when you want to reference the query data itself as a variable, you can only do it by the name, not the label. So the label is truly just that: only information about the pretty column name, and not useable as a variable name. (I was kind of hoping that query["bee"] would return something, but in CF9 at least, it does not.)</p><p>The best you might do dynamically is loop over the column name/label arrays and create a struct to cross-reference the name to the label so that e.g. label["COLA"] = "bee";<br>thus with any given any column name you could look up the label for it as needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730605">24</a> by Darren Cook
		posted on 2/18/2014 at 4:31 AM
		</div>
		<div class="comment_text"><p>Correction: I only *think* Oracle and Teradata return both names and labels. Once I worked with folks from CF and Teradata to create our own version of the Teradata driver to properly map these, as they were mismatching due to an upgrade...I never found out if that fix was permanently embedded in the next version of the Teradata driver, but that's how I learned about the difference. It sounds like from comments above that MySQL may return name and label separately as well.</p><p>The fact that getColumnLabels() *could* return an Alias which does not match getColumnNames() (depending on the database/driver), and the fact that column names (not labels) are the variable names by which the data is accessed, suggests that one should always use getColumnNames() when you want to dynamically introspect a query and loop over it's columns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730611">25</a> by Raymond Camden
		posted on 2/18/2014 at 7:44 AM
		</div>
		<div class="comment_text"><p>Darren, thanks for sharing these details!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730610">26</a> by Monique Boea
		posted on 4/17/2014 at 8:35 PM
		</div>
		<div class="comment_text"><p>Hi I have a related issue that I am hoping you can help me with.</p><p>I have a loop, in which I need to call a coldfusion query that is dynamic.</p><p>I then need to call another query, based on the first query and output the results dynamically. I am stuck on this.</p><p>Here is my loop and queries:</p><p>&lt;cfloop index="i" from="1" to="#courseCount.recordCount#"&gt;<br>        &lt;cfstoredproc procedure="XXXXXX" datasource="#request.dsn#" returncode="yes"&gt;<br>          &lt;cfprocparam</p><p>                cfsqltype="CF_SQL_INTEGER" <br>                variable="userID"<br>                value="#session.userID#"&gt;</p><p>          &lt;cfprocparam <br>                cfsqltype="CF_SQL_INTEGER" <br>                variable="course"<br>                value="#i#"&gt;</p><p>          &lt;cfprocresult name="course#i#"&gt;<br>        &lt;/cfstoredproc&gt;</p><p>&lt;cfstoredproc procedure="XXXXXX" datasource="#request.dsn#" returncode="yes"&gt;<br>    &lt;cfprocparam <br>        cfsqltype="CF_SQL_INTEGER" <br>        variable="userID"<br>        value="#session.userID#"&gt;<br>    &lt;cfprocparam <br>        cfsqltype="CF_SQL_INTEGER" <br>        variable="courseID"<br>        value="#i#"&gt;<br>    &lt;cfprocparam type="In" <br>        cfsqltype="CF_SQL_DATE" <br>        variable="fromDate"<br>        value="#getCourse#i#.CREDITDESIGNATIONFROM#"&gt;<br>    &lt;cfprocparam type="In" <br>        cfsqltype="CF_SQL_DATE" <br>        variable="toDate"<br>        value="#getCourse#i#.CREDITDESIGNATIONTO#"&gt;<br>    &lt;cfprocresult name="course#i#Apply#ceuPref.strCme#"&gt;<br>  &lt;/cfstoredproc&gt;<br>&lt;/cfloop&gt;</p><p>My issue is adding the i variable in the 2nd query dynamically.</p><p>How do I so this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730609">27</a> by Raymond Camden
		posted on 4/17/2014 at 11:46 PM
		</div>
		<div class="comment_text"><p>If your intent is to pass the value of the creditdesignationfrom column,row 1, then you could do this a few ways.</p><p>Simplest may be to make a temporary variable:<br>&lt;cfset theValue = variables["getCourse#i#"].creditdiesginationfrom&gt;</p><p>and pass theValue. You could also put that expression in the call itself, but I like to break things out sometimes to make them more readable.</p></div>
	</div>
</div>
		