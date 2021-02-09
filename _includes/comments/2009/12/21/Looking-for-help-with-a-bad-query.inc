
<div class="comment" id="c_1713720721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720721">1</a> by John Bliss
		posted on 12/21/2009 at 7:04 PM
		</div>
		<div class="comment_text"><p>Ray, two (potentially unhelpful) questions:</p><p>- I'm wondering about "limit 5" versus "select top 5"  Does MySQL not support "top?"  If it *does* support "top," does that change make a difference?</p><p>- Does MySQL support database-enforced foreign key relationships?  If so, do you have one established for "c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>"  If not, does establishing one make a difference?  If it's helpful, here's the SQL to do this in SQL Server: ALTER TABLE tblblogcomments ADD CONSTRAINT FK_tblblogcomments_tblblogentries FOREIGN KEY (entryidfk) REFERENCES tblblogentries (id) ON UPDATE NO ACTION ON DELETE CASCADE</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720700">2</a> by Aidan Kane
		posted on 12/21/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Strange, it's not particularly complex.</p><p>Is there also an index on tblblogcomments.posted ?</p><p>not sure what, if any, difference it will make - it's something I'd traditionally put a clustered index on in MS SQL Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720711">3</a> by Shane M
		posted on 12/21/2009 at 7:12 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I'm not a MYSQL guy, MSSQL, but it looks like it is doing a rollup of the 5 for each blog entry. notice the 1826 rows for blog then the 5 for each entry (1826 * 5). the more you have the longer it will take. If this is for the actual blog entry, try limiting the where clause to the actual blog entry where entry = some id. if this is for all entries, it is going to take longer the more entries you have. maybe a different approach in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720712">4</a> by Yaron
		posted on 12/21/2009 at 7:12 PM
		</div>
		<div class="comment_text"><p>Perhaps it's getting stuck on "blog = 'Default' " ? What does your execution plan say? If it has to iterate all resuls searching for blog = '*' it might be slowing it down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720720">5</a> by Mike Kaplan
		posted on 12/21/2009 at 7:24 PM
		</div>
		<div class="comment_text"><p>I'm a SQL Server guy, but the basics should hold true--you typically want indexes to cover your WHERE and ORDER BY clauses, as well as your keys. That ORDER BY statement is probably your culprit--I would try creating a multi-column index on entryidfk and posted (desc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720716">6</a> by Aidan Kane
		posted on 12/21/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>@Mike Kaplan : out of interest - what's the reasoning behind creating a multicolumn index instead of having two different indexes? I know nothing about how mysql uses them. will it use two different indexes within a query (or for the where clause and one for the order by)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720709">7</a> by Peter Boughton
		posted on 12/21/2009 at 7:41 PM
		</div>
		<div class="comment_text"><p>The join being fast for low numbers but slow for large numbers does suggest an index issue.</p><p>Can you post the results of "SHOW CREATE TABLE x" for the tables involved?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720719">8</a> by Ed
		posted on 12/21/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>If c.posted is not an index, it surely should be done so. In my experience i saw that adding the right indexes may speed up the process as much as up and over 50 times when it's about VERY BIG amount of data and records. Also i am not sure if this is valid for MySQL as it is for MS SQL, but using "WITH (NOLOCK)" may help too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720725">9</a> by Chad
		posted on 12/21/2009 at 7:53 PM
		</div>
		<div class="comment_text"><p>I agree with everyone else you need another index to speed up the query.  Add an index to the column <a href="http://disq.us/url?url=http%3A%2F%2Fe.blog%3APn8mIEQSE0mq9A4D_Uz-4aC1gCo&amp;cuid=3321886" rel="nofollow noopener" title="e.blog">e.blog</a>.  Give that a shot and see what kind of improvment you get.</p><p>Also i noticed you need a "e." on your where statement.<br>where     <a href="http://disq.us/url?url=http%3A%2F%2Fe.blog%3APn8mIEQSE0mq9A4D_Uz-4aC1gCo&amp;cuid=3321886" rel="nofollow noopener" title="e.blog">e.blog</a> = 'Default'</p><p>I recently used the MS SQL Database Engine Tuning Advisor to figure out why one of my queries was running really slow and it suggested adding an index to a table and my queries went from 4 seconds to less then a second.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720724">10</a> by Raymond Camden
		posted on 12/21/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>John: LIMIT is how mysql does TOP. It's actually better as you can do LIMIT X,Y for pagination. I have NOT made a FK relationship. Before I add that - are you sure? (I guess no big deal to roll back, right?)</p><p>Multiple: More than one said to add an index on tblblogcomments.posted. I did. I didn't think indexes helped with dates. It doesn't seem to have helped though. In fact, the explain now shows a larger # of rows in that first entry. But it is in now.</p><p>@Yaron - ashamed to say - how do I get the EP?</p><p>@Peter: These results are for a local copy of my blog (it's my blog from Sep 09, so still 'big'). Here is the result for tblblogentries:</p><p>Table=<br>74626c626c6f67656e7472696573</p><p>Create Table=<br>435245415445205441424c45206074626c626c6f67656e74726965736020280a20206069646020766172636861722833352920636861726163746572207365742075746638204e4f54204e554c4c2c0a2020607469746c656020766172636861722831303029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a202060626f647960206c6f6e67746578742c0a202060706f7374656460206461746574696d652064656661756c74204e554c4c2c0a2020606d6f7265626f647960206c6f6e67746578742c0a202060616c6961736020766172636861722831303029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a202060757365726e616d656020766172636861722831303029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a202060626c6f676020766172636861722835302920636861726163746572207365742075746638204e4f54204e554c4c2c0a202060616c6c6f77636f6d6d656e7473602074696e79696e742834292064656661756c74204e554c4c2c0a202060656e636c6f737572656020766172636861722832353529206368617261637465722073657420757466382064656661756c74204e554c4c2c0a20206066696c6573697a656020646563696d616c2831382c30292064656661756c74204e554c4c2c0a2020606d696d65747970656020766172636861722832353529206368617261637465722073657420757466382064656661756c74204e554c4c2c0a20206076696577736020696e74283130292064656661756c74204e554c4c2c0a20206072656c6561736564602074696e79696e742834292064656661756c74204e554c4c2c0a2020606d61696c6564602074696e79696e742834292064656661756c74204e554c4c2c0a20206073756d6d6172796020766172636861722832353529206368617261637465722073657420757466382064656661756c74204e554c4c2c0a2020607375627469746c656020766172636861722831303029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a2020606b6579776f7264736020766172636861722831303029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a2020606475726174696f6e60207661726368617228353029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a20205052494d415259204b455920202860696460292c0a20204b45592060626c6f6760202860626c6f6760290a2920454e47494e453d496e6e6f44422044454641554c5420434841525345543d6c6174696e31</p><p>Here is the result for tblblogcomments<br>Table=74626c626c6f67636f6d6d656e7473</p><p>Create Table=435245415445205441424c45206074626c626c6f67636f6d6d656e74736020280a20206069646020766172636861722833352920636861726163746572207365742075746638204e4f54204e554c4c2c0a202060656e7472796964666b6020766172636861722833352920636861726163746572207365742075746638204e4f54204e554c4c2c0a2020606e616d6560207661726368617228353029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a202060656d61696c60207661726368617228353029206368617261637465722073657420757466382064656661756c74204e554c4c2c0a202060636f6d6d656e7460206c6f6e67746578742c0a202060706f7374656460206461746574696d652064656661756c74204e554c4c2c0a202060737562736372696265602074696e79696e742834292064656661756c74204e554c4c2c0a202060776562736974656020766172636861722832353529206368617261637465722073657420757466382064656661756c74204e554c4c2c0a2020606d6f64657261746564602074696e79696e742834292064656661756c74204e554c4c2c0a2020607375627363726962656f6e6c7960206269742831292064656661756c74204e554c4c2c0a2020606b696c6c636f6d6d656e74602076617263686172283335292064656661756c74204e554c4c2c0a20205052494d415259204b455920202860696460292c0a20204b45592060656e7472796964666b60202860656e7472796964666b60290a2920454e47494e453d496e6e6f44422044454641554c5420434841525345543d6c6174696e31</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720726">11</a> by Steve Bryant
		posted on 12/21/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Have you tried to run an OPTIMIZE on the table?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdev.mysql.com%2Fdoc%2Frefman%2F5.1%2Fen%2Foptimize-table.html%3Ad2wRFY-ZW0LaM-pS-ra7HidAWSs&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.mysql.com/doc/refman/5.1/en/optimize-table.html">http://dev.mysql.com/doc/re...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720728">12</a> by Raymond Camden
		posted on 12/21/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>hmmm. Guys... I thin the index/posted seems to have done something nice. No scientific tests, but some results are coming back much quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720727">13</a> by Raymond Camden
		posted on 12/21/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>Chad - there is an index on <a href="http://disq.us/url?url=http%3A%2F%2Fe.blog%3APn8mIEQSE0mq9A4D_Uz-4aC1gCo&amp;cuid=3321886" rel="nofollow noopener" title="e.blog">e.blog</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720730">14</a> by Raymond Camden
		posted on 12/21/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>I ran optimize on both. Msg said it did not support optimize, but it did recreate... and then the damn MySQL query thing wouldn't let me see more. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720714">15</a> by Raymond Camden
		posted on 12/21/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>Oh - the docs for optimize say this is expected for the type of table I have. -sigh- Things seem slow again on update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720715">16</a> by Raymond Camden
		posted on 12/21/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>Err... and fast. -boggle- So now it seems to be random - which I guess is better than _always_ bad. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720708">17</a> by Martin
		posted on 12/21/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Have you tried removing "date_add(c.posted, interval -1 hour) as posted" to see if that makes any difference. I bet it does. Anyway if you are just looking for the last 5 comments why not do "ORDER BY <a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a> DESC" Sorry I'm not shouting there I just like to write my sql commands in caps and my sql variables in camelCase.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720717">18</a> by Raymond Camden
		posted on 12/21/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>@Martin: I removed it but it didn't seem to help any. As for just checking <a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a> desc - I need the last 5 comments posted and my IDs aren't auto #s. They are UUIDs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720710">19</a> by Someone who cares
		posted on 12/21/2009 at 8:28 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I've got a couple of idea's, however they depend on the schema your using for your two tables, do you have a sample script so that I can build the table structure up, then I can provide a solution for you.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720707">20</a> by David Hammond
		posted on 12/21/2009 at 8:28 PM
		</div>
		<div class="comment_text"><p>Hi, Ray.  As with many of the responders I have worked with MSSQL a lot more than MySQL.  When I have a query that is inexplicably slow, sometimes refreshing the statistics on the tables helps (not sure if that it an option in MYSQL).</p><p>As a workaround alternative to your proposed workaround, you might use subqueries with the select portion of the statement to get the entry info (I think MYSQL supports that?):</p><p>select <br>	(SELECT id FROM tblblogentries e where c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>) as entryID,<br>	(SELECT title FROM tblblogentries e where c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>) AS title,<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>,<br>	c.entryidfk,<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>,<br>	c.comment,<br>	date_add(c.posted, interval -1 hour) as posted<br>from tblblogcomments c<br>where     blog = 'Default'<br>order by c.posted desc<br>limit 5</p><p>I would give that a try in any case.  It seems like the problem with your query is that the mysql is not properly optimizing the query, and putting the subquery in the select clause would tell it plainly that you only need the entry information for the 5 latest comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720706">21</a> by Raymond Camden
		posted on 12/21/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>@Someonewhocares - the BlogCFC install (<a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.riaforge.org%3AEvJ9qTJi9-tw8mjUHPLY3uhslmw&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.riaforge.org">blogcfc.riaforge.org</a>) would have it - but obviously I've modified it since then to add the index on posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720713">22</a> by Yaron
		posted on 12/21/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>In MySQL<br>Add "EXPLAIN EXTENDED" just before your query (it's explained here: <a href="http://disq.us/url?url=http%3A%2F%2Fdev.mysql.com%2Fdoc%2Frefman%2F5.0%2Fen%2Fexplain.html%29%3AAtgno1KzI6j6yC8-ALgIw25Zck4&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.mysql.com/doc/refman/5.0/en/explain.html)">http://dev.mysql.com/doc/re...</a></p><p>Hope it helps, if not, it's something new.</p><p>In MSSQL<br>MSSQL has a nice execution plan visual display. Query--&gt;Include Actual Execution Plan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720718">23</a> by Tom Mollerus
		posted on 12/21/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>The LIMIT clause is applied after all other query operations, so you're running a join on many more records than you need. Perhaps using a subquery in the where clause to reduce the number of joined records would be faster?</p><p>where blog = 'Default' and c.entryIDFK in (select c.entryIDFK from tblblogcomments c order by c.posted desc limit 5)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720722">24</a> by Gary Funk
		posted on 12/21/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>Yes Ray,</p><p>The WHERE is where you should limit the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720732">25</a> by Someone who cares
		posted on 12/21/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Thanks for the schema, you could try this (this is a MS SQL script though sorry, but you get the idea).</p><p>In my test this produces an equal 50%, however this is with no actual records, with a large amount of records I'd **expect** this to be more effecient.</p><p>SELECT	E.EntryID,<br>		E.Title,<br>		<a href="http://disq.us/url?url=http%3A%2F%2FC.id%3AcXwK5eY4q90ohsQY_IR9P4SqKiU&amp;cuid=3321886" rel="nofollow noopener" title="C.id">C.id</a>,<br>		C.entryidfk,<br>		<a href="http://disq.us/url?url=http%3A%2F%2FC.name%3A14OoyTr3mfP2xFxxS3A32VKDxfg&amp;cuid=3321886" rel="nofollow noopener" title="C.name">C.name</a>,<br>		C.comment,<br>		DATEADD(hh,-1,c.posted) as posted<br>FROM (<br>		SELECT TOP 5 <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> AS EntryID,<br>					e.title<br>		FROM tblblogentries e<br>		WHERE blog = 'Default'<br>	) AS E<br>INNER JOIN tblblogcomments C ON e.EntryID = C.entryidfk<br>ORDER BY Posted</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720742">26</a> by Adam Presley
		posted on 12/21/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>Hey Ray, can you send me the schema (and maybe some sample data) for the 2 tables in question? I've had to do a bit of MySQL tuning on an application here I've worked on. Indexing is most likely the issue as described by others here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720735">27</a> by Luke
		posted on 12/21/2009 at 9:26 PM
		</div>
		<div class="comment_text"><p>hey Ray, with this type of quality feedback you're likely to have the most responsive blog on the web ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720739">28</a> by Someone who cares
		posted on 12/21/2009 at 9:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Sorry ignore my last post, im talking rubbish, it wont give you a better solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720733">29</a> by Someone who still cares
		posted on 12/21/2009 at 9:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>One thing I tried was a new index as your currently getting a clustered index scan on the tblBlogComment table.  I'd try replacing this with a new index, I dont know if My SQL can do includes in it's index creation but the MSSQL version would be something like this;</p><p>create index ix_test on tblblogcomments (entryidfk asc,posted desc) include (id,name,comment)</p><p>However, you wont be able to make this as the comment datatype is not supported in an index as it's ntext, can you change this, you may get something more out of it as the optimizer will start using the new index, and not be using the generic clustered index (which covers all the columns)</p><p>Just an idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720741">30</a> by David Herman
		posted on 12/21/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>you might also want to look at the ordering in your join... while you may think the = is commutative it's not always when it comes to a join in sql.</p><p>if you have this:</p><p>select * from blah b<br>inner join other_blah o on <a href="http://disq.us/url?url=http%3A%2F%2Fo.id%3AVwa0P6_E09YYWBKkKSUChewQgog&amp;cuid=3321886" rel="nofollow noopener" title="o.id">o.id</a> = <a href="http://disq.us/url?url=http%3A%2F%2Fb.id%3Axfr9IV9n9j_Y4acnB-AKjaa8y9I&amp;cuid=3321886" rel="nofollow noopener" title="b.id">b.id</a></p><p>you might see difference when doing</p><p>select * from blah b<br>inner join other_blah o on <a href="http://disq.us/url?url=http%3A%2F%2Fb.id%3Axfr9IV9n9j_Y4acnB-AKjaa8y9I&amp;cuid=3321886" rel="nofollow noopener" title="b.id">b.id</a> = <a href="http://disq.us/url?url=http%3A%2F%2Fo.id%3AVwa0P6_E09YYWBKkKSUChewQgog&amp;cuid=3321886" rel="nofollow noopener" title="o.id">o.id</a></p><p>I can't speak for mysql in this case but we have seen this in oracle in the past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720738">31</a> by Andrew
		posted on 12/21/2009 at 10:10 PM
		</div>
		<div class="comment_text"><p>You have a sort by posted column, so in order to retrieve just top 5, it still has to process all records and sort them by posted column.<br>Try adding index to posted date column.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720740">32</a> by Darren Pywell
		posted on 12/21/2009 at 10:29 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>My vote is for the table scan occurring due to the order by on c.posted too. An index on c.posted should help or an index on (c.posted, c.entryidfk) should be even better. This would stop the db having to fetch anything from the table. Joins are usually best when they fully use indicies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720737">33</a> by Darren Pywell
		posted on 12/21/2009 at 10:32 PM
		</div>
		<div class="comment_text"><p>You're may need to add the "blog" field into the index too...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720736">34</a> by Raymond Camden
		posted on 12/21/2009 at 10:41 PM
		</div>
		<div class="comment_text"><p>@All: Sorry for being quiet - had to babysit a friend's baby. Still doing so but got a quick break.</p><p>@Andrew - yep, added an index to posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720743">35</a> by Raymond Camden
		posted on 12/21/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>To all -yes - there is an index on the <a href="http://disq.us/url?url=http%3A%2F%2Ftblblogentries.blog%3AVnAZNkQ-QtDzyULCQoNs2DV5Ujc&amp;cuid=3321886" rel="nofollow noopener" title="tblblogentries.blog">tblblogentries.blog</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720745">36</a> by Raymond Camden
		posted on 12/21/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>@Tom - the issue I have though is that BlogCFC supports N blogs per db. Hence the need for "where blog=....". Therefore I can't just get the last 5 comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720747">37</a> by Raymond Camden
		posted on 12/21/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>@Yaron, and all, here is the result of the EXPLAIN EXTENDED</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fee.html%3AHxBFtf1fEV8qlxA1DXyPt0B7h9M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/ee.html">http://www.coldfusionjedi.c...</a></p><p>FYI, I'm still seeing what I think to be an improvement. I've added a bunch of comments and in general, it seems to be responding quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720746">38</a> by Adam Presley
		posted on 12/21/2009 at 10:54 PM
		</div>
		<div class="comment_text"><p>Have you tried moving the blog='Default' to the join clause? I've found that MySQL can sometimes behave differently in that case. Run an explain with that change to see if it attempts to use the index differently. Also make sure that if you have an index with multiple items in it, you are joining and/or WHERE'ing them in the same order as specified in the index.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720744">39</a> by Chuck Savage
		posted on 12/21/2009 at 10:57 PM
		</div>
		<div class="comment_text"><p>my sql is a tad rusty, but I'd do a sub-query first to get your 5 rows, then join them to get the other necessary fields.  So something like...</p><p>select <a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>, c.entryidfk, <a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>, c.comment, c.posted,<br><a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> as entryID, e.title<br>from tblblogentries e<br>(select id, entryidfk, name, comment, posted from tblblogcomments order by posted desc limit 5) as c<br>inner join <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> = c.entryidfk</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720749">40</a> by Chuck Savage
		posted on 12/21/2009 at 11:03 PM
		</div>
		<div class="comment_text"><p>ok, missed your comment on needing the where clause as I was reading and then coming up with a slick answer.  Is blog in the e or c table?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720748">41</a> by Raymond Camden
		posted on 12/21/2009 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Chuck - the blog col is in the entries table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720751">42</a> by Raymond Camden
		posted on 12/21/2009 at 11:11 PM
		</div>
		<div class="comment_text"><p>Adam - can you give me a demo of that change please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720752">43</a> by shag
		posted on 12/21/2009 at 11:14 PM
		</div>
		<div class="comment_text"><p>Ray, I would say this is a bit of a design issue.  You are not able to practically limit your request for comments (which probably has more entries).  It would appear that the result is joining both tables in order to do the limit.  For the future, I would suggest adding a blog field to the comments table in order to more effectively utilize your limit.  In the interim, I would suggest using this particular query:</p><p>select <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> as entryID,<br>	e.title,<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>,<br>	c.entryidfk,<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>,<br>	c.comment,<br>	c.posted<br>from (<br>		select <br>			<a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>,<br>			c.entryidfk,<br>			<a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>,<br>			c.comment,<br>			date_add(c.posted, interval -1 hour) as posted<br>		from tblblogcomments c<br>		order by c.posted desc<br>		limit 500<br>	) c, <br>inner join tblblogentries e on c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a><br>where     blog = 'Default'<br>limit 5</p><p>You are limiting the number of comments you join to 500, instead of the entire table.  This has it's faults in that you might not get any results if you have 2 blogs, where one has a lot of comments, and the other has fewer.</p><p>this query was rewritten based on the principles found here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DZVisY-fEoMw%26feature%3Dplayer_embedded%3Aiyi6AUDHDEYWCiictZ-UfoxnFxk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=ZVisY-fEoMw&amp;feature=player_embedded">http://www.youtube.com/watc...</a></p><p>The index on posted should help, but make sure it is ordered desc, as asc (or default) will require the entire index to be scanned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720756">44</a> by Brian
		posted on 12/21/2009 at 11:25 PM
		</div>
		<div class="comment_text"><p>Here's my attempt and modifying your query.  Unfortunately, I don't have a mysql install with blogcfc installed to test with and I'm more comfortable with oracle syntax.</p><p>select (select id from tblblogentries e where c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>) as entryID,<br>(select title from tblblogentries e where c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>) as title,<br><a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>,<br>c.entryidfk,<br><a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>,<br>c.comment,<br>date_add(c.posted, interval -1 hour) as posted<br>from tblblogcomments c<br>where   c.entryidfk in (select id from tblblogentries where blog = 'Default')<br>order by c.posted desc<br>limit 5</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720754">45</a> by danny s.
		posted on 12/21/2009 at 11:27 PM
		</div>
		<div class="comment_text"><p>Hi.</p><p>You have an index on CommentID? Is this value unique for every row? If so, I thought such columns were not good candidates for indexes, and can slow down query time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720757">46</a> by Brian
		posted on 12/21/2009 at 11:28 PM
		</div>
		<div class="comment_text"><p>@Danny S, the index on CommentID is probably because it is a primary key and that is how the DB enforces the PK uniqueness requirement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720755">47</a> by danny s.
		posted on 12/21/2009 at 11:36 PM
		</div>
		<div class="comment_text"><p>Brian -</p><p>Ok - I agree. I now have to look up why, other than key fields, it's not a good idea to index columns that have unique values for every record... Maybe I dreamed that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720758">48</a> by Mike Kaplan
		posted on 12/22/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>@Aidan Kane: Can't speak for MySQL, but SQL Server will only pick one index per table to use in a query, so you'll get the most bang for your buck if your index covers as many of the pertinent columns as possible.</p><p>Ray, somebody above mentioned WITH (NOLOCK), which is used in SQL Server SELECT statements to ignore table locking. If there is a similar statement in MySQL, you should look into it, because the fact that you saw intermittent slowness is a big red flag to me that some of your reads are being done while the table is being written to (and is thus locked temporarily).</p><p>I use NOLOCKS on every SELECT across all of my applications, because data is constantly being inserted into my tables. I'm not dealing with financial data, so I don't really care about the occasional dirty read--the performance boost is far more important.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720760">49</a> by Raymond Camden
		posted on 12/22/2009 at 1:31 AM
		</div>
		<div class="comment_text"><p>@Brian: Yeah, having blog in both columns seems bad, BUT, if it creates a good practical result, I can see living with it. As it stands, I don't support folks being able to change their blog name and the app 'fixes' data. I may consider it for the future.</p><p>@Mike: No idea on the with(nolock) - will try to google.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720762">50</a> by Craig M. Rosenblum
		posted on 12/22/2009 at 1:40 AM
		</div>
		<div class="comment_text"><p>Have you considered, doing this as a view, part of the problem is the join, the other is any functions you are doing to the data.</p><p>in sql server you can do explain plans, there might be similar options in mysql. But my guess is because of the join and date functions, might be better to do it as a view..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720764">51</a> by Brian
		posted on 12/22/2009 at 1:58 AM
		</div>
		<div class="comment_text"><p>@Craig,  A view wouldn't help unless the problem is with the interpreter parsing the SQL.  The SQL isn't complex, so it is doubtful that would help, imho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720770">52</a> by Jason
		posted on 12/22/2009 at 5:01 AM
		</div>
		<div class="comment_text"><p>Again, from an MSSQL standpoint.</p><p>Not sure if this was posted before, but a "first" fix before moving to indexing / plan issues is to put the where clause in  the join to become:</p><p>inner join tblblogentries e on c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> AND blog = 'Default'</p><p>Causes the where clause to restrict the records joined instead of filtering records post-join. According to Dr. Seuss - much, much, ever-so-muchly more faster on large data sets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720767">53</a> by Raymond Camden
		posted on 12/22/2009 at 6:24 AM
		</div>
		<div class="comment_text"><p>Jason, I tested both queries in the MySQL query tool and both seemed to run in about the same time. I also did an EXPLAIN on em and both had the same results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720769">54</a> by Aegis
		posted on 12/22/2009 at 10:36 AM
		</div>
		<div class="comment_text"><p>sorry if I'm way off here, but are the IDs in your comment table sequential numbers or something else? because if they are just numbers and sequential, is there any reason why you can't just ORDER BY <a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a> DESC LIMIT 5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720761">55</a> by Aegis
		posted on 12/22/2009 at 10:38 AM
		</div>
		<div class="comment_text"><p>NVM - answered my own question - shutting up now ;P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720772">56</a> by Daniel Harvey
		posted on 12/22/2009 at 5:26 PM
		</div>
		<div class="comment_text"><p>Have you tried turning it into a stored procedure.  I know they do offer some performances benefits as they compile the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720775">57</a> by Tim Leach
		posted on 12/22/2009 at 5:34 PM
		</div>
		<div class="comment_text"><p>Just to be wild and different have you tried running this?</p><p>SELECT <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> as entryID, e.title, <a href="http://disq.us/url?url=http%3A%2F%2Fc.id%3AQmjgRc1VcWC-LBkgiZk9eq8XA5s&amp;cuid=3321886" rel="nofollow noopener" title="c.id">c.id</a>,c.entryidfk,<a href="http://disq.us/url?url=http%3A%2F%2Fc.name%3AXq12GVgWmEiqkfcdkoJepD9H6Kg&amp;cuid=3321886" rel="nofollow noopener" title="c.name">c.name</a>,c.comment,date_add(c.posted, interval -1 hour) as posted<br>FROM tblblogentries e<br>LEFT OUTER JOIN tblblogcomments c ON (c.entryidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a>)<br>where blog = 'Default'<br>order by c.posted desc<br>limit 5</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720774">58</a> by Tim Leach
		posted on 12/22/2009 at 5:35 PM
		</div>
		<div class="comment_text"><p>..Also if you hadn't already ensuring the column tblblogcomments.entryidfk and <a href="http://disq.us/url?url=http%3A%2F%2Ftblblogentries.blog%3AVnAZNkQ-QtDzyULCQoNs2DV5Ujc&amp;cuid=3321886" rel="nofollow noopener" title="tblblogentries.blog">tblblogentries.blog</a> are indexed can't hurt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720771">59</a> by Tim Leach
		posted on 12/22/2009 at 5:39 PM
		</div>
		<div class="comment_text"><p>..and another thing.. if you don't end up being able to optimize that query, have you looked into creating a view out of it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720768">60</a> by Dave DuPlantis
		posted on 12/23/2009 at 3:11 AM
		</div>
		<div class="comment_text"><p>I wonder if this might help with conflict issues:</p><p>LOCK TABLES tblblogcomments c, tblblogentries e READ [LOCAL];<br>{existing SQL here}<br>UNLOCK TABLES;</p><p>I'm not sure from the docs whether or not it'll need to be READ LOCAL. I'm also not sure if this will play nicely with a cfquery tag; I think we can do the multiple-statements thing to trick SQL Server into coughing up identity values, so perhaps it's as simple as the MySQL docs make it sound.</p><p>Anything else I can picture seems already to have been covered by a previous commenter ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720763">61</a> by Chuck Savage
		posted on 12/23/2009 at 4:50 AM
		</div>
		<div class="comment_text"><p>Ray ref your #49,</p><p>If you are considering design changes, would it not be better to have a separate table of blog names, with an id that both the entries table and the comments table could use?  It might be a lot easier to join to the blog name table, than its been with to the entries table, at least for this purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720773">62</a> by Raymond Camden
		posted on 12/23/2009 at 6:28 AM
		</div>
		<div class="comment_text"><p>I'm not considering any major changes for 5.x. 6.x, sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720765">63</a> by Raymond Camden
		posted on 12/23/2009 at 6:45 AM
		</div>
		<div class="comment_text"><p>@Dave - didn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720766">64</a> by Raymond Camden
		posted on 12/23/2009 at 6:48 AM
		</div>
		<div class="comment_text"><p>@Tim - tried the query - didn't seem to help. (My 'scientific' testing is to run a few times and compare to current SQL.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720776">65</a> by Rob
		posted on 12/23/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>Umm .... keep the last 5 posts in an array in the application scope?   Yeah.... I know it's cheating ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720778">66</a> by Raymond Camden
		posted on 12/23/2009 at 8:32 PM
		</div>
		<div class="comment_text"><p>It's not the last 5 posts - it's the last 5 _comments_. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720779">67</a> by Raymond Camden
		posted on 12/27/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>Interesting. I am working with Gary Funk off thread and he suggested changing my comments/entries tables from InnoDB to MyISAM. I knew they were different but didn't really have a great knowledge of how. Anyway, I made the switch (after backing up the DB), executed the SQL, and it returned instantly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720777">68</a> by Rodrigo
		posted on 1/29/2010 at 4:33 AM
		</div>
		<div class="comment_text"><p>Hey guys. Looking this article I've decided to try to right a query of query having my main query been stored on the application scope. I can't make this query to work, any ideas?</p><p>** application.learning_center_assets_list is the query on the application scope</p><p>&lt;cfquery name="getAssets" dbtype="query"&gt;<br>select	c.asset_title, c.asset_id, ls.S_section_name, c.asset_description, c.file_name, c.replay_media, c.asset_subtype, c.date_header, c.time_duration,<br>		c.asset_type, c.asset_location_link,c.asset_created, lso.S_solution_name, lso.solution_ID, c.replay_pdf, c.asset_post_date, c.language_id, c.file_size<br>from <br>	(<br>		select * from application.learning_center_assets_list<br>	) c<br>	join LCSECTION ls on ( c.asset_type = ls.section_ID )<br>	join LCSOLUTION lso on ( c.asset_solution = lso.solution_ID )<br>where	c.asset_type = ls.section_ID and<br>		c.asset_solution = lso.solution_ID and<br>		c.asset_type &lt;&gt; 5<br>&lt;/cfquery&gt;</p></div>
	</div>
</div>
		