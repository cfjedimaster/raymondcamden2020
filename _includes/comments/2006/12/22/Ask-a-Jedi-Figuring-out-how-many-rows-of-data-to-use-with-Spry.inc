
<div class="comment" id="c_1713660609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660609">1</a> by Andrew Powell
		posted on 12/22/2006 at 7:19 PM
		</div>
		<div class="comment_text"><p>I agree, it's not the number of rows, but the total size of the XML doc that must be considered.  A lot of it has to do with the capabilities of the client, so you have to really plan for the lowest common denomenator.  That being said, I would suggest some sort of pagination, if possible when using a large payload.</p><p>It's easier to eat a meal in many smaller bites than trying to consume it in one large gulp.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660622">2</a> by Bob Smith
		posted on 12/22/2006 at 8:27 PM
		</div>
		<div class="comment_text"><p>Great thanks Ray.</p><p>Imagine this:  You have a directory that returns thousands of rows. Bringing this back in XML is not the best way to do it.  But your client wants to get data via a text box and filter/sort the data against all the records in the DB.</p><p>We want to use the features of Spry.Data.XMLDataSet and the FilterData function (from the adobe example page) but it looks like SPRY isn;t the best solution here - would you agree, or can you or anyone else suggest a way around this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660624">3</a> by Edward T
		posted on 12/22/2006 at 10:05 PM
		</div>
		<div class="comment_text"><p>Bob,</p><p>I think it would depend on how your users where filtering the data; will they be typing the first 2-3 letters and expecting the list to narrow down?  Is there some subset you can give them quickly and then start downloading datasets in the background, or use their typing to identify the next batch to grab?</p><p>/ejt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660625">4</a> by Douglas Knudsen
		posted on 12/22/2006 at 10:15 PM
		</div>
		<div class="comment_text"><p>Also consider your audience.  I do intranet apps, 2000 rows, allthough big, might not be so bad with some gZip action on your web server.  I'd certainly try to restrict this down a bit even so or use pagination as Ray mentioned.  Take a look at this<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nitobi.com%2Fproducts%2Fgrid%2Fdemos%2F%3AExSqV1D8OZJySWXb_qLlkUWyXGU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nitobi.com/products/grid/demos/">http://www.nitobi.com/produ...</a><br>live scrolling.  Should be able to pull this off with Spry too, though to be honest I have not tried.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660626">5</a> by Nick Tong
		posted on 12/22/2006 at 10:17 PM
		</div>
		<div class="comment_text"><p>Hey Bob, what you could do is make a new XML call when your user searches.  You can set a new XML path as shown here: <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fdata_region%2FSetURL.html%3ANwWerbcTg96lEbvskL6_FVZg21Y&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/data_region/SetURL.html">http://labs.adobe.com/techn...</a></p><p>This should allow you to filter the return data as show in the labs example you discuss and it should allow you to limit the XML called back.</p><p>HTH<br>Nick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660635">6</a> by John Farrar
		posted on 12/22/2006 at 10:37 PM
		</div>
		<div class="comment_text"><p>Someone needs to come up with a component that will feed on demand segments of data to a component. Rather than returning all the data or pages... how about a scroll bar that is used to set which section of the data is displayed?</p></div>
	</div>
</div>
		