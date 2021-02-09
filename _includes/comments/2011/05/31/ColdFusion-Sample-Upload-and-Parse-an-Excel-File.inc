
<div class="comment" id="c_1713732684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732684">1</a> by Dinesh Kanwar
		posted on 6/1/2011 at 1:24 PM
		</div>
		<div class="comment_text"><p>Few months back, I was trying to figure out to read an excel file. Ben Nadal's POI utility helped me. But this seems easiest way to do that.<br>Thankyou very much Ray. If possible, can you share something on writing to an excel file? I know its pretty simple, but faced problems in writing data to excel when you have single/double qoutes, space or some special characters in data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732685">2</a> by Joe Brislin
		posted on 6/1/2011 at 5:00 PM
		</div>
		<div class="comment_text"><p>@Ray Is there any way to remove empty rows from the Excel import? I can't seem to find a way with cfspreadsheet and also haven't been able to figure out a good way with Query of Queries. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732772">3</a> by Raymond Camden
		posted on 6/1/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>@Dinesh - yes, I can do a simple write example.<br>@Joe - let me dig into that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732793">4</a> by Sam Farmer
		posted on 6/1/2011 at 5:31 PM
		</div>
		<div class="comment_text"><p>If you are happy to give over control of the html the cfspreadsheet tag will return html:</p><p>&lt;cfspreadsheet action="read" src="[FILE]" format="html" name="getHTML"&gt;<br>&lt;cfoutput&gt;&lt;table&gt;#getHTML#&lt;/table&gt;&lt;/cfoutput&gt;</p><p>Its crude output but very quick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732802">5</a> by Jaana Gilbert
		posted on 6/1/2011 at 5:33 PM
		</div>
		<div class="comment_text"><p>@Ray, also while you're writing your extra sample for Dinesh, could you add to it on how to hide a column please (pretty please)?</p><p>One of our local user group member is having a problem with the hidden="true/false" attribute in the CF9 built-in spreadsheet function SpreadsheetFormatCell. The hidden attribute is not doing it's job. Based on the Cf9 function reference at <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-6747.html%3AVAnyElnmarPp5_7agvRav94ge4E&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-6747.html">http://help.adobe.com/en_US...</a>  it should work.</p><p>Would this be possible to be added please? :)</p><p>TIA<br>Jaana</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732795">6</a> by Raymond Camden
		posted on 6/1/2011 at 5:47 PM
		</div>
		<div class="comment_text"><p>@Sam: I had forgotten about that option. It's damn slick. Is the HTML nicely formatted? I'll have to try and view source. Does it respect column order? If so - a lot of my blog entry gets simplified. ;) But I could see folks wanting greater control over the HTML.</p><p>@Jaana: To be honest, I'm surprised by all the questions. This gives me an opportunity to finally play more with the functions so sure - yes - I'll happily look at your question as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732789">7</a> by Jeff Price
		posted on 6/1/2011 at 5:48 PM
		</div>
		<div class="comment_text"><p>That user with the hidden attribute would be me on the SpreadSheetFormatRow() function, I just gave the TACFUG peeps that FormatCell() docs because that's the one that talks all about the format structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732808">8</a> by Jaana Gilbert
		posted on 6/1/2011 at 5:52 PM
		</div>
		<div class="comment_text"><p>:) there's Jeff :)</p><p>Thanks Ray, your samples are by far the best and always easy to understand :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732800">9</a> by Sam Farmer
		posted on 6/1/2011 at 6:37 PM
		</div>
		<div class="comment_text"><p>@Ray: the html is basic tr and td's and does seem to respect order. With some css you could make it look pretty good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732791">10</a> by John Sieber
		posted on 6/1/2011 at 10:53 PM
		</div>
		<div class="comment_text"><p>@Ray - I have nothad a chance to work on the homework, but I like the concept and would enjoy seeing more post in that fashion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732788">11</a> by Raymond Camden
		posted on 6/2/2011 at 5:42 AM
		</div>
		<div class="comment_text"><p>@Joe: When I used my code above, and uploaded my Excel sheet (after adding a blank and then a row with data), CF removed the empty row automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732797">12</a> by Raymond Camden
		posted on 6/2/2011 at 6:29 AM
		</div>
		<div class="comment_text"><p>@Dinesh  -<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F6%2F1%2FColdFusion-Sample--Create-an-Excel-File%3Axd9ofuKhbYmegs5jfN4xosuZ4PU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/6/1/ColdFusion-Sample--Create-an-Excel-File">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732792">13</a> by Raymond Camden
		posted on 6/2/2011 at 6:24 PM
		</div>
		<div class="comment_text"><p>@Jaana: I'm not quite sure I get what you mean. In my code I loop over all the columns. If you knew a column that you always wanted to hide, like Beers, you would just check for that in your loop. That would only be helpful in cases where folks are uploaded a standard XLS file (ie one you expect in a certain format). It should be as simple as that, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732790">14</a> by Joe Brislin
		posted on 6/3/2011 at 12:00 AM
		</div>
		<div class="comment_text"><p>@Ray - There is a spreadsheet that I have when uploaded using your code leaves the emtpy rows. I think it has to do with how the data is deleted from the row, i.e. Clear Contents vs. Delete Row. Would you mind if I email you the file so that you can try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732803">15</a> by Raymond Camden
		posted on 6/3/2011 at 12:03 AM
		</div>
		<div class="comment_text"><p>Sure, email it over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732801">16</a> by Raymond Camden
		posted on 6/3/2011 at 1:52 AM
		</div>
		<div class="comment_text"><p>I can confirm what Joe found. His XLS file ended up with empty rows. So I think an obvious fix would be to simply update the code to look for no data. One sec.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732799">17</a> by Raymond Camden
		posted on 6/3/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>Joe, check out the mod in this pastebin. Sure it's a bit hacky, but it seems to work:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FECtjEVxY%3AuPE3skWIUFj1J0bKkocSxa9Yp6Q&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/ECtjEVxY">http://pastebin.com/ECtjEVxY</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732787">18</a> by Les Mizzell
		posted on 1/5/2012 at 7:21 PM
		</div>
		<div class="comment_text"><p>Does this work with .xls and .xlsx files?</p><p>Or is there a limitation as to which Excel file version(s) work properly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732807">19</a> by Raymond Camden
		posted on 1/5/2012 at 7:22 PM
		</div>
		<div class="comment_text"><p>It should work in both.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732796">20</a> by Ed Salsberg
		posted on 4/17/2012 at 6:01 PM
		</div>
		<div class="comment_text"><p>I so needed this!!!</p><p>My only question is what is the character between rows? I'm trying to import this into a db and don't know how to distinguish between rows.</p><p>#data[c][currentRow]#&lt;cfif data.currentrow neq data.rowcount&gt;, &lt;/cfif&gt;  No worky :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732794">21</a> by Raymond Camden
		posted on 4/17/2012 at 6:09 PM
		</div>
		<div class="comment_text"><p>I'm sorry - what? I can't understand your question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732805">22</a> by Ed Salsberg
		posted on 4/17/2012 at 6:21 PM
		</div>
		<div class="comment_text"><p>When I output #data[c][currentRow]# there is a " " in between records/rows. Is that a space or tab or return? My SQL Insert fails as there is no way for me to distinguish between field content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732806">23</a> by Raymond Camden
		posted on 4/17/2012 at 6:28 PM
		</div>
		<div class="comment_text"><p>I'm still not getting you. When you output one value, that isn't a row. It's one value. If you are saying that one of the cells has additional whitespace, why not use trim() on it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732809">24</a> by David Jaocbson
		posted on 5/17/2012 at 9:25 PM
		</div>
		<div class="comment_text"><p>Hey Ray, It seems im late to the party on this issue, however, I now have a task to read one spreedsheet with multiple tabs within it.  How would your example be modified to do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732804">25</a> by Raymond Camden
		posted on 5/18/2012 at 4:59 PM
		</div>
		<div class="comment_text"><p>Those tabs are sheets, and CF lets you read a specific sheet. (See the CFML Ref for details.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732798">26</a> by Dan
		posted on 9/5/2012 at 7:24 PM
		</div>
		<div class="comment_text"><p>BTW: cfspreadsheet is available in cf 9 and greater.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732813">27</a> by udaya
		posted on 1/10/2013 at 4:09 PM
		</div>
		<div class="comment_text"><p>Please help me how to get the row id of spread sheet to print</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732819">28</a> by Raymond Camden
		posted on 1/11/2013 at 12:19 AM
		</div>
		<div class="comment_text"><p>I don't understand - you want to print one row?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732821">29</a> by udaya
		posted on 1/11/2013 at 5:20 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Trying to print row number. Got it by #data.CurrentRow# or #CurrentRow#. But I am working on how to handle transaction handling of around 600 rows from spread sheet with around 25 columns. Trying to read the data of each row and set the values to bean, and saving to database, iterating through rows, all in one transaction. But it failed with Java heap size limit or out of memeory error.<br>May I ask your advice on how to handle databse tranactions to read and load the data from spread sheet after proper data conversion to required data types. Trying such bulk gtransaction is a bad idea ? how to make into batches I am thinking. Or it is better to read one row at a time do save to database, commit transaction and come back again to read next row ?</p><p>Please help / advise while I continue to try different alternatives. I appreciate any level of help or advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732820">30</a> by Raymond Camden
		posted on 1/11/2013 at 8:21 PM
		</div>
		<div class="comment_text"><p>Well, it is a bit hard to diagnose over a blog comment, but -</p><p>a) You could tweak your JVM settings to give you more RAM<br>b) You could look at doing it outside of CF - with something like DTS in SQL Server for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732817">31</a> by ConfusedDeer
		posted on 2/6/2014 at 4:20 AM
		</div>
		<div class="comment_text"><p>When I ran your code in coldfusion 10 I got the following error:</p><p>Invalid tag nesting configuration.  <br>A query driven queryloop tag is nested inside a queryloop tag that also has a query attribute. This is not allowed. Nesting these tags implies that you want to use grouped processing. However, only the top-level tag can specify the query that drives the processing.</p><p>The error occurred in line 76</p><p>74 :                 &lt;/cfloop&gt;<br>75 :             &lt;/tr&gt;<br>76 :            &lt;cfoutput query="data" startRow="2"&gt;<br>77 :                 &lt;tr&gt;<br>78 :                 &lt;cfloop index="c" list="#colList</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732816">32</a> by Raymond Camden
		posted on 2/6/2014 at 4:22 AM
		</div>
		<div class="comment_text"><p>You mean my code towards the end of the blog entry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732823">33</a> by confusedDeer
		posted on 2/6/2014 at 4:52 AM
		</div>
		<div class="comment_text"><p>Your fix now works!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732818">34</a> by Raymond Camden
		posted on 2/6/2014 at 4:59 AM
		</div>
		<div class="comment_text"><p>Um, I didn't fix anything, but ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732824">35</a> by confusedDeer
		posted on 2/6/2014 at 5:03 AM
		</div>
		<div class="comment_text"><p>That's why this page was inaccessible for a few moments while you didn't fix anything ;) thanks for the tutorials they've been a great help.<br> BTW: I have a copy of the orginial code you posted and now this one and I'm doing a diff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732825">36</a> by ConfusedDeer
		posted on 2/6/2014 at 5:11 AM
		</div>
		<div class="comment_text"><p>Ray,<br>You are right it was still broken, but I replaced the code above with the following code and it works (thanks henry for the code below):</p><p>&lt;cfoutput&gt;<br>  &lt;cfloop query="data" startRow="2"&gt;<br>        &lt;tr&gt;<br>        &lt;cfloop index="c" list="#colList#"&gt;<br>            &lt;td&gt;#data[c][currentRow]#&lt;/td&gt;<br>        &lt;/cfloop&gt;<br>        &lt;/tr&gt;                    <br>  &lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732822">37</a> by Raymond Camden
		posted on 2/6/2014 at 5:26 AM
		</div>
		<div class="comment_text"><p>I honestly don't know what you mean. I took my code - pasted it into a local file - ran it in CF10 - and it worked fine. As it stands, your error:</p><p>A query driven queryloop tag is nested inside a queryloop tag that also has a query attribute.</p><p>Implies a cfloop query = something inside another one. Do you see that in my code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732827">38</a> by JohnSepu
		posted on 5/2/2014 at 2:34 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm trying to delete a file (using cffile action="delete") that has been uploaded by a form and fails the isspreadsheetfile check. Seems there's a lock on the file which is causing the delete action to bomb. I can manually delete the file from the server after 30 seconds or so however. And the delete process works fine when I remove the isspreadsheetfile check code. Any ideas on how to force unlock the file so it can be deleted right away when it fails the isspreadsheetfile check? Or is there an attribute on the file I need to set upon initial upload? My code is below. It's all wrapped in &lt;cftransaction&gt; tags. Thanks!</p><p>---------------------------------------------------------------</p><p>&lt;cffile action="upload" filefield="form.graduate_names" destination="e:\temp\commencement-confirmation\" nameconflict="makeunique" result="graduates" attributes="normal"&gt;</p><p>&lt;cfif not isspreadsheetfile("e:\temp\commencement-confirmation\#graduates.serverfile#") or (not right(graduates.serverfile, 5) is ".xlsx" and not right(graduates.serverfile, 4) is ".xls")&gt;<br>&lt;cffile action="delete" file="e:\temp\commencement-confirmation\#graduates.serverfile#"&gt;<br>&lt;cflocation url="index-test.cfm?error=graduates_file_format_error" addtoken="no"&gt;<br>&lt;cfabort&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732826">39</a> by Raymond Camden
		posted on 5/2/2014 at 6:05 AM
		</div>
		<div class="comment_text"><p>I just did a quick test with a newly generated text file. I made the file, write some text to it, and then run isSpreadsheetFile on it, deleted it, and it worked fine for me. Are you sure removing JUST that check makes it work ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732828">40</a> by JohnSepu
		posted on 5/2/2014 at 9:11 PM
		</div>
		<div class="comment_text"><p>Thanks for your reply. Yes. Removing this line from the code makes it work:</p><p>"not isspreadsheetfile("e:\temp\commencement-confirmation\#graduates.serverfile#") or "</p><p>I've narrowed it down further. If I try to upload a Word document, the file is deleted immediately after the check runs and rejects the file type. It seems that if I try to upload any other type of file (TXT, PDF, JPG) there is a lock placed on said file for anywhere from 2-30 seconds that causes the application to bomb. It's a Windows thing I fear and I'm not sure how or if there's a workaround. :-\<br>------------------------------------------------------------<br>Raymond Camden #<br>Commented on 05-01-2014 at 9:05 PM<br>I just did a quick test with a newly generated text file. I made the file, write some text to it, and then run isSpreadsheetFile on it, deleted it, and it worked fine for me. Are you sure removing JUST that check makes it work ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732829">41</a> by Raymond Camden
		posted on 5/2/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>Hmm, well, at minimum, you should file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732830">42</a> by Kevin
		posted on 5/23/2014 at 5:56 PM
		</div>
		<div class="comment_text"><p>JohnSepu, did you happen to find out a fix for this?  I'm getting the exact same error and Google sent me here when I started searching! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732831">43</a> by Micheal
		posted on 11/19/2014 at 10:27 PM
		</div>
		<div class="comment_text"><p>I just wanted to know what file types it validates against?</p><p>For example is it just .xls and .xlsx files or does it check others like: .xlt, .ods, .csv, .tsv, .txt, .tab?</p><p>Does it also validate the content too? Ie would it be good to use it to validate an excel file that is being uploaded? (to enhance security)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732832">44</a> by Raymond Camden
		posted on 11/20/2014 at 12:27 AM
		</div>
		<div class="comment_text"><p>"For example is it just .xls and .xlsx files or does it check others like: .xlt, .ods, .csv, .tsv, .txt, .tab?"</p><p>That is up to isSpreadsheetFile. I do not have the *exact* specifics on what it supports. I would *not* expect it to support tsv, txt, or tab, but I have not tested it.</p><p>"Does it also validate the content too? Ie would it be good to use it to validate an excel file that is being uploaded? (to enhance security) "</p><p>In what way? Content in terms of what the app demands or content as in - it is a csv file but is it REALLY comma delimited?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2246680135">
	<div>
		<img src="https://disqus.com/api/users/avatars/george_kochev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2246680135">45</a> by george kochev
		posted on 9/10/2015 at 6:19 PM
		</div>
		<div class="comment_text"><p>Is there a way to extract only certain columns, let say 2 or 3 and create an arrays!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2247468411">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2247468411">46</a> (In reply to <a href="#c_2246680135">#45</a>) by Raymond Camden
		posted on 9/11/2015 at 3:48 AM
		</div>
		<div class="comment_text"><p>You can't - but you can obviously only *use* what columns you care about. Just because the query contains all the columns it doesn't mean you have to use them all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2248519132">
	<div>
		<img src="https://disqus.com/api/users/avatars/george_kochev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2248519132">47</a> (In reply to <a href="#c_2247468411">#46</a>) by george kochev
		posted on 9/11/2015 at 6:19 PM
		</div>
		<div class="comment_text"><p>I'm trying to extract the data out of 2 columns, and I was hoping at least .csv would work since they are comma separated, still couldn't figure out how to do that on CF. The point is not to read whatever the columns provide, but to use their data and avoid manually entering the data somewhere else. Is that make sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2248623382">
	<div>
		<img src="https://disqus.com/api/users/avatars/george_kochev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2248623382">48</a> (In reply to <a href="#c_2247468411">#46</a>) by george kochev
		posted on 9/11/2015 at 7:18 PM
		</div>
		<div class="comment_text"><p>and actually I made it work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694778386">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eMXgHwJQs8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694778386">49</a> by Richard L
		posted on 5/25/2016 at 3:50 PM
		</div>
		<div class="comment_text"><p>One cool set of API's I ended up using for client side Excel sheet parsing was Sheet JS (<a href="http://disq.us/url?url=http%3A%2F%2Fsheetjs.com%2F%29%3AgtVOpuxxkZWVLtcMd6O16vUO53k&amp;cuid=3321886" rel="nofollow noopener" title="http://sheetjs.com/)">http://sheetjs.com/)</a>, which is broken up into XLSX and LXS JavaScript API's.  I used  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FSheetJS%2Fjs-xlsx%3A5fo0t2Z7mVhW8kJdDvIydxoI-ek&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/SheetJS/js-xlsx">https://github.com/SheetJS/...</a> along with Lucee server, to processes a targeted column on an Excel sheet.  I used Ajax calls to bring the data back to the browser, and gave the user the option of downloading the transformed data, back into Excel format.</p><p>Though I used Lucee, I image it would be no real difference sending the data to ColdFusion for processing.</p><p>I guess it will depend on the size of the data being parsed and the purpose, before deciding to use either a client side approach versus on the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694861864">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694861864">50</a> (In reply to <a href="#c_2694778386">#49</a>) by Raymond Camden
		posted on 5/25/2016 at 4:37 PM
		</div>
		<div class="comment_text"><p>Cool - thanks for sharing that, Richard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2723965986">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mKxW8aVUQJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2723965986">51</a> (In reply to <a href="#c_2248519132">#47</a>) by Matt Wilde
		posted on 6/10/2016 at 7:58 PM
		</div>
		<div class="comment_text"><p>This is old I know but the solution still works. You can use Ben Nadel's CSVtoQuery script you can find on his ColdFusion blog.<br>From there use</p><p>var x = ListToArray(ValueList(query.columnName, 'delimiter')), 'delimiter');</p><p>You just need a query object to apply ValueList on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926810832">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_C13qhzji9m.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926810832">52</a> by Sam
		posted on 9/30/2016 at 5:37 PM
		</div>
		<div class="comment_text"><p>Hello Raymond! im trying to upload an excel file and insert into database. a normal upload file would contain atleast 5000 input rows with 116 fields. its taking upto 5 minutes to upload. also i tried to upload a sample file with 400 rows and its taking upto 1 minute.</p><p>would you please let me know how to do a faster upload?<br>i'm using the same code as above.<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926940363">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926940363">53</a> (In reply to <a href="#c_2926810832">#52</a>) by Raymond Camden
		posted on 9/30/2016 at 6:56 PM
		</div>
		<div class="comment_text"><p>Is the 5 minutes the upload or the processing? If it is the upload, there isn't much you can do. You can ask users to upload a zip and unzip it on the CF side w/ CFZIP. That's one option.</p><p>If the time is *after* the file is uploaded, then you would need to figure out what part of the process is taking the longest and see if you can do something about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926949041">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_C13qhzji9m.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926949041">54</a> (In reply to <a href="#c_2926940363">#53</a>) by Sam
		posted on 9/30/2016 at 7:01 PM
		</div>
		<div class="comment_text"><p>its the process which is taking the time. i'm very new to the programming i'm not sure how i can figure out what is taking so long to process the file. any hints how i can figure it out? <br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926956595">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926956595">55</a> (In reply to <a href="#c_2926949041">#54</a>) by Raymond Camden
		posted on 9/30/2016 at 7:06 PM
		</div>
		<div class="comment_text"><p>"its the process" - but what process do you mean? The user has to send the file up. CF has to process the file. CF then reads in the XLS file. CF then prints it out. Then, when CF is done, it sends the result back to the user. That takes time too.</p><p>So you've got numerous things you would need to look into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2979116887">
	<div>
		<img src="https://disqus.com/api/users/avatars/rejithrkrishnan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2979116887">56</a> by Rejith R Krishnan
		posted on 11/1/2016 at 12:28 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I have seen places where the &lt;cfspreadsheet action="read"&gt; which converts column values to numeric form (see the image). Is there anyway we can get around this?</p><p> <a href="https://uploads.disquscdn.com/images/4d2015af9db476c37bbc12200b45250a5075bb31bdb96bac893190c8dfc3e80d.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/4d2015af9db476c37bbc12200b45250a5075bb31bdb96bac893190c8dfc3e80d.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2979323831">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2979323831">57</a> (In reply to <a href="#c_2979116887">#56</a>) by Raymond Camden
		posted on 11/1/2016 at 3:01 PM
		</div>
		<div class="comment_text"><p>As far as I know, CF makes a guess as to the data and doesn't give you control over that process. I know it isn't helpful, but "dont use CF" is the only advice I can give.</p></div>
	</div>
</div>
		