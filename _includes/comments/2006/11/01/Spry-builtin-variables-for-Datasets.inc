
<div class="comment" id="c_1713658860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658860">1</a> by Ed
		posted on 11/1/2006 at 11:16 PM
		</div>
		<div class="comment_text"><p>Cool, I actually just used ds_RowCount to get half of the problem I was having with tabulating data within an XML node.  Now I just need to get the semantics down of how to count the value within the node and display it at the bottom of the page ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658872">2</a> by Lola Lee Beno
		posted on 11/2/2006 at 6:53 PM
		</div>
		<div class="comment_text"><p>How about including techniques to get it working with MG:U?  I'm going to be looking into this, and I need to have basic steps outlined so I can at least get started off on the right foot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658868">3</a> by Raymond Camden
		posted on 11/2/2006 at 7:22 PM
		</div>
		<div class="comment_text"><p>I think that may be a bit too long for a FAQ - but I could easily point to my blog article on it. You did see that article, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658876">4</a> by Lola Lee Beno
		posted on 11/2/2006 at 8:07 PM
		</div>
		<div class="comment_text"><p>Yes, I dd see that.  By the way, when I click on Print, the text comes out as centered, not aligned at the left or justified.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658879">5</a> by Bruce Phillips
		posted on 11/2/2006 at 11:23 PM
		</div>
		<div class="comment_text"><p>One thing I'm trying to do is have one entry on my Spry blog that lists everything the Spry currently includes.  You can check it out here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%2Fblog%2Findex.cfm%2F2006%2F10%2F31%2FWhat-Does-Spry-Include%3AmeCM2PQtQZqqji-dpFJIunnXy4w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brucephillips.name/blog/index.cfm/2006/10/31/What-Does-Spry-Include">http://www.brucephillips.na...</a></p><p>I know that Spry is in Alpha/Beta/Pre-Release, but I'm trying to keep track of what we can use Spry for.  If you have any ideas of stuff I'm missing under Spry Data Set, Effects, or Widgets let me know.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658880">6</a> by Chris
		posted on 11/16/2006 at 5:20 PM
		</div>
		<div class="comment_text"><p>Hi guys.</p><p>I searched the net and couldn't find a solution for my problem, so I decided to ask the pro's.</p><p>How do I get the current row number of all children of a dataset element.</p><p>I use spry:repeat to repeat elements of a dataset and spry:repeatchildren to repeat the children of the elements for each row.<br>I want to use ds_EvenOddRow to render alternate row colors for the children of the elements, but I have no clue how to do that.<br>Can anyone help?</p><p>Thanx in advance,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658881">7</a> by Raymond Camden
		posted on 11/16/2006 at 5:27 PM
		</div>
		<div class="comment_text"><p>ds_evenevenoddrow simply outputs even or odd, so you could make CSS items named mydataeven and mydataodd, then do this in your html, class="mydata{ds_evenoddrow}". Now I've never used that before with children so I'm not sure what ds_evenoddrow will do. The simplest thing is to just output it! Just add the token to your html and what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658862">8</a> by Chris
		posted on 11/16/2006 at 6:05 PM
		</div>
		<div class="comment_text"><p>Thanx for the fast reply! :D</p><p>That is what I did... the CSS item renders the main elements but not the children.</p><p>The output looks like this:</p><p>1 MainElement<br>      1 Child (class="mydataeven")<br>      2 Child (class="mydataeven")<br>      3 Child (class="mydataeven")<br>2 MainElement<br>      1 Child (class="mydataodd")<br>      2 Child (class="mydataodd")</p><p>And this is what I would like to have:<br>1 MainElement<br>      1 Child (class="mydataeven")<br>      2 Child (class="mydataodd")<br>      3 Child (class="mydataeven")<br>2 MainElement<br>      1 Child (class="mydataeven")<br>      2 Child (class="mydataodd")</p><p>If I could get the row number of the child-elements, I could use spry:if to check if the row number is even or odd, but I don't know how.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658863">9</a> by Raymond Camden
		posted on 11/16/2006 at 6:41 PM
		</div>
		<div class="comment_text"><p>I was worried about that. I'll do some checking on it. Think you can send me your xml and html in a simple format I can use to test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658864">10</a> by Chris
		posted on 11/17/2006 at 4:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>sorry for the late answer.<br>I had to adapt the code to a simple example (we're working with MG/Reactor/ColdSpring). I'm only the designer and I'm not sure if everything is coded correctly but it should reflect the original application.</p><p>At least I could partially figure out where the problem is - it's the spry:region (when having more than one dataset).<br>Whereto can I send the files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658865">11</a> by Raymond Camden
		posted on 11/17/2006 at 9:07 PM
		</div>
		<div class="comment_text"><p>Send it to ray, then the at symbol, than camdenfamily dot com.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658866">12</a> by Christopher Walker
		posted on 6/5/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>Hey Ray:</p><p>I'm working on a spry table which uses a xml dataset.  Additionally, I'm using ColdFusion Report Builder to create a PDF or an Excel file (customer choice) using the screen output data.  My boss loves it but now he wants to output the cfr based upon the way the customer orders the columns.  So what I'm currently trying to do is pass the {ds_SortColumn} {ds_SortOrder} into the query as a ORDER BY statement.  I'm having some issues, if anyone has any ideas I'd love to hear it.  In the mean time I'll keep you informed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658867">13</a> by Christopher Walker
		posted on 6/5/2008 at 8:34 PM
		</div>
		<div class="comment_text"><p>Big DUH!  It was easier than I thought.  I was thinking this wouldn't work unless that page was redrawn, but that's not the case.</p><p>&lt;a href="/reports/blah_blah.cfr?sortOrder={ds_SortOrder}&amp;column={ds_SortColumn}" target="_blank"&gt;</p><p>And the query:<br>&lt;cfif ((isDefined(url.column) and (trim(url.column) neq '')) and (isDefined(url.sortOrder) and (trim(url.sortOrder) neq '')))<br>&lt;cfset ORDER = 'Order By' &amp; '#url.column#' &amp; '#url.sortOrder#'&gt;<br>&lt;cfelse&gt;<br>&lt;cfset ORDER = ''<br>&lt;/cfif&gt;<br>SELECT 	     *<br>FROM 	    SOMETABLE<br>#ORDER#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658869">14</a> by Raymond Camden
		posted on 6/5/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>Glad you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658871">15</a> by Christopher Walker
		posted on 6/6/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>Does anyone have a quick and dirty way to assign a value to ds_SortOrder and ds_SortColumn on the inital load?</p><p>E.g.: ds_SortOrder == 'ascending'<br>      ds_SortColumn == 'id_info'</p><p>I know it a bit more complcated than that as the info appears to be stored in a JSON object or XML dataset depending on the developer's choice.  In my case I'm consuming XML data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658870">16</a> by Raymond Camden
		posted on 6/6/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>Oddly the API only provides getMethods, not set. Let me ping the Spry guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658873">17</a> by Kin Blas
		posted on 6/9/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>You want to use the sortOnLoad and sortOrderOnLoad data set constructor options:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Farticles%2Fdata_api%2Fapis%2Fdataset.html%23constructor%3AD8qGHATNXyVoKSWMcTdbykhrsaw&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/articles/data_api/apis/dataset.html#constructor">http://labs.adobe.com/techn...</a></p><p>--== Kin ==--</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658874">18</a> by Bill
		posted on 11/3/2008 at 7:15 AM
		</div>
		<div class="comment_text"><p>Anyone got any ideas how I can get the SpryJSONDataSet to load a JSON object (js variable) instead of from a url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658877">19</a> by Raymond Camden
		posted on 11/4/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>XML datasets supporting loading via a JS object as opposed to an XHR request, so I'm pretty sure JSON datasets do as well. Have you scanned the API docs?</p></div>
	</div>
</div>
		