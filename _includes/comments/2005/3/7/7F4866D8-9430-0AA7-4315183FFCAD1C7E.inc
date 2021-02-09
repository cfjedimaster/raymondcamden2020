
<div class="comment" id="c_1713617506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617506">1</a> by Nathan Dintenfass
		posted on 3/8/2005 at 7:48 AM
		</div>
		<div class="comment_text"><p>Why not have a separate RSSMetaData CFC that you can create an instance of, and when you initialize that you tell it what version you want it for, then use that as the thing you pass into your generate() method.  That will allow you to both have a more robust validation and provide a much better API, IMO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617507">2</a> by Patrick McElhaney
		posted on 3/8/2005 at 7:04 PM
		</div>
		<div class="comment_text"><p>I second Nathan's comment. I would also take data out of the generateRSS() function and make metadata optional. For example:</p><p>&amp;lt;cfset rssCFC.setTitle("My Stuff")/&amp;gt;<br>&amp;lt;cfset rssCFC.setDescription("A feed of my stuff.")/&amp;gt;<br>&amp;lt;cfset rssCFC.setURL("http://path/to/stuff")/&amp;gt;</p><p>&amp;lt;cfloop query="stuff"&amp;gt;<br>&amp;lt;cfset rssCFC.addItem(<a href="http://disq.us/url?url=http%3A%2F%2Fstuff.name%3AlaE2O0zMSp4qkhq0J5bFFdaTug8&amp;cuid=3321886" rel="nofollow noopener" title="stuff.name">stuff.name</a>, stuff.url, stuff.description)/&amp;gt;<br>&amp;lt;/cfloop&amp;gt;</p><p>&amp;lt;cfset rss091 = rssCFC.generateRSS("rss091)"/&amp;gt;<br>&amp;lt;cfset rss2 = rssCFC.generateRSS("rss2", rss2MetaData)/&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617508">3</a> by Raymond Camden
		posted on 3/8/2005 at 7:55 PM
		</div>
		<div class="comment_text"><p>I disagree Patrick. The example you provided works ok for simple metadata, but won't work on the more complex MD. For example, how you would handle the Image subkey, rss.CFC.SetImageName? Err, ok, that's not to bad, but I just don't think SETs are the way to go.</p><p>As for not passing data, I kinda like what you do there. My way forces you to have a query, and forces you to have certain column names. The column stuff is easy to get around - you can QofQ to rename columns. I think I'll switch to what you have for data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617509">4</a> by Patrick McElhaney
		posted on 3/8/2005 at 8:20 PM
		</div>
		<div class="comment_text"><p>I don't know much about RSS metadata, so I could be completely off the mark. I just know that the simple feeds I've created all have a title, url, and description. That would be an easy interface for me to use. I was thinking that the metadata object could be optional and augment the standard/simple metadata.</p><p>One more thought: I don't like the idea of making generateRSS responsible for producing different kinds of feeds. You should be able to introduce new types of feeds without changing RssCFC. Instead, what do you think about creating a set of RSSWriter objects, one for each type of feed?</p><p>[cfloop query="stuff"]<br>[cfset rssFeed.addItem(stuff.title, stuff.url, stuff.description)]<br>[/cfloop]</p><p>[cfset rss091 = rss091Writer.write(rssFeed, metadata)]<br>[cfset rss2 = rss2Writer.write(rssFeed, metadata)]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617511">5</a> by Raymond Camden
		posted on 3/8/2005 at 8:45 PM
		</div>
		<div class="comment_text"><p>I disagree with that as well. While it does make sense in an OO fashion, it goes away from my main goal of keeping things simple. So for example, if a person wants to offer Atom and RSS2 feeds on their site, I want them to be able to use the same CFC but with different values passed to the method.</p><p>As for your first paragraph - that's the rub. RSS Meta validation is not simple, but I'm thinking most readers don't care. So I can be "lose" and just not worry about it, or more formal and ensure people use the right metadata.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617510">6</a> by Roger Benningfield
		posted on 3/8/2005 at 10:57 PM
		</div>
		<div class="comment_text"><p>Ray: I've torn.</p><p>On the one hand, what's the point of an RSS generation CFC if it *doesn't* validate what you pass in? Generating bad RSS is easy, and doesn't need any help.</p><p>On the other, sheesh, I'm not gonna be the one to argue that you should dedicate additional hours of your life to protecting people from themselves.</p><p>Personally, I'd say just split the difference and add a isValid() method that calls <a href="http://disq.us/url?url=http%3A%2F%2Ffeedvalidator.org%3AzBLIUEP5brgpQcRXt5LYSKj3Nxw&amp;cuid=3321886" rel="nofollow noopener" title="feedvalidator.org">feedvalidator.org</a> to check the output. If it passes, return true, and if it doesn't, return false with a copy of the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617512">7</a> by Roland Collins
		posted on 3/8/2005 at 11:25 PM
		</div>
		<div class="comment_text"><p>I like the idea of a RSSMetaData cfc (though I'd just call it RSSItem), of which you would create an instance, set the desired fields, and then pass in to the rccCFC.addItem(rssMetaData) call.  The flexibility with this approach should allow you to do everything you're looking for, with a very well formed, easy to use API.  Think of it this way:</p><p>cfquery name="qryRSSItems"<br>SELECT somedata FROM somedatasource<br>/cfquery</p><p>rssCFC = CreateObject("component", "RSSFeed")</p><p>cfloop query="qryRSSItems"<br>   rssItem = CreateObject("component", "RSSItem")<br>   cfset rssItem.Title = "My Title"<br>   cfset rssItem.URL = "<a href="http://disq.us/url?url=http%3A%2F%2Fsomewhere.com%3A9l6n99ruXGFLdpR71IAv8JucFU8&amp;cuid=3321886" rel="nofollow noopener" title="http://somewhere.com">http://somewhere.com</a>"<br>   cfset rssItem.Image = "blah"<br>   cfset rssCFC.addItem(rssItem)<br>/cfloop</p><p>cfset rssData = rssCFC.generateFeed()</p><p>This allows you to set only the properties on the item that you need, leaving the rest to defaults.  The addItem can do the basic validation, then the generateFeed method can use properties as necessary to generate the feed.</p></div>
	</div>
</div>
		