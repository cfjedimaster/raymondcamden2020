
<div class="comment" id="c_1713615067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615067">1</a> by Dan
		posted on 11/6/2003 at 12:33 PM
		</div>
		<div class="comment_text"><p>This is a fair criticism of ASP.NET.</p><p>The way I have got round it in the past is to create a generic data access class, that has methods such as Execute(SQL), GetDataTable(SQL), GetDataSet(SQL,TableName), which is persistied througout the life of the application.</p><p>All is neccessary to get a datatable is to make a call to the class</p><p>e.g.  tblProducts =  clsData.GetDataTable(SQL)...</p><p>Within the constructor for the clsData class are all the neccessary gubbins that need to be set up to create a connection etc, and within the relavant methods is all the code neccessary to open a connection etc, populate the table.... close the connection (if required)</p><p>Its quite a hassle - but only has to be done once - and abstracts many datasource specifc requirements (different classes for accessing SQL server and non SQL server db's for instance)</p><p>I then inherit from this class, having an application specific data class for each application - and have as much of possible of my direct data access hapenning through this class, and only access the db through strongly typed objects based on this app_data class...</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615063">2</a> by Brian
		posted on 11/7/2003 at 2:45 AM
		</div>
		<div class="comment_text"><p>I think its good to keep in mind that ASP.Net is a version 1 technology and for what I'm seeing with ASP.Net 2 and the Object Spaces implementation-- as much as it kills me-- will be far better than anything possible with CF currently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615069">3</a> by Kwang Suh
		posted on 11/7/2003 at 3:31 AM
		</div>
		<div class="comment_text"><p>As Dan said, I also wrote a wrapper class for db access.  MS does provide one as well on their website.  As it was still a little too low level for me, I actually wrote my wrapper class around those classes.</p><p>If you wish, I can provide you with the source.  It's very straightforward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615068">4</a> by Raymond Camden
		posted on 11/7/2003 at 6:39 PM
		</div>
		<div class="comment_text"><p>Thanks for the offer. Right now I want to take it slow. First I want to get comfortable doing things the "slow" way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615070">5</a> by barry.b
		posted on 8/2/2004 at 4:28 PM
		</div>
		<div class="comment_text"><p>Ray, I don't know if you're still reading this post but...</p><p>...as a (former) ASP'er who's gone over to CFMX (since it's release as Neo), I feel CFQUERY is inadequate compared to ASP.NET's ADO.</p><p>I *like* having direct control over the connection object and the execution of queries. I worry about the hiding behind CFQUERY esp when it comes to connection pooling, transactions and record locking, etc.</p><p>I really miss ADO.NET and I don't think CFQUERY is as flexable even if it has less code to write.</p><p>now if I could get to and use the underlying java classes directly...</p><p>just 2c worth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615071">6</a> by ike
		posted on 1/5/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>Wow. I hesitate to comment on a 4 year old blog entry... But if you really need or (imo more likely) want to control connection pooling and the like yourself, it's none too difficult to write your own Java classes and completely bypass the ColdFusion DSN and it's CFAdmin configuration. There are a handful of companies (none that I've worked for personally) who write their entire business model in Java and only use CF for the presentation tier.</p><p>Personally I've never heard of anyone having a significant problem related to connection pooling, so I'm not apt to be worried about problems I've never heard of actually happening to people.</p><p>Transaction handling and record locking on the other hand have some native features. Look for the cftransaction tag, or if you need to coordinate with other code outside the db, check out cflock. Plus there's always the ability to use stored procedures (cfstoredproc) if you have a particular need for really fine-grained control over the transaction -- that gets you "down to the metal" where the database is concerned, since the control is internal within your db server versus external manipulation with cftransactuion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615072">7</a> by Misty
		posted on 10/20/2010 at 4:51 PM
		</div>
		<div class="comment_text"><p>wELL! dO NOT KNOW WHAT TO SAY! TRIED TO DO ASP.NET many a times but could find it better than CF. Although its features are too great than CF but i Prefer CF [Don't Know Why]..</p><p>Can anyone answer!</p></div>
	</div>
</div>
		