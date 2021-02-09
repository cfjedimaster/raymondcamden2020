
<div class="comment" id="c_1713661420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661420">1</a> by Ryan Favro
		posted on 1/23/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Wouldn't you want want to return an array of Value Objects paired to flash value objects? Thus avoiding the conversion step in flex?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661421">2</a> by Raymond Camden
		posted on 1/23/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>I don't use VOs yet. I know I need to. I'm just not there yet in my development. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661424">3</a> by Tom Cornilliac
		posted on 1/23/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>I'd create a Station class and a Song class. In the Station class add a public bindable property songList:Array. In your Web Service call result handler I'd loop over the results and create an array of Stations where each Station's songList would hold an array of Song objects.</p><p>This feels a little redundant and it's a bit more work up front but (at least to me) it feels cleaner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661422">4</a> by Teddy R Payne
		posted on 1/23/2007 at 10:21 PM
		</div>
		<div class="comment_text"><p>Why not use drop downs?  They are pretty easy to populate.</p><p>Cheers,<br>Teddy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661425">5</a> by João Fernandes
		posted on 1/23/2007 at 10:27 PM
		</div>
		<div class="comment_text"><p>Exactly,</p><p>Ray, try to define a list like this</p><p>&lt;mx:List dataProvider="{ stationlistDG.selectedItem.TYPICALSONGS }"/&gt;</p><p>it should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661426">6</a> by Raymond Camden
		posted on 1/23/2007 at 11:38 PM
		</div>
		<div class="comment_text"><p>Um, because I'm an idiot. Thanks for pointing this out. (The list, not the idiot part. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661427">7</a> by Bruce
		posted on 1/24/2007 at 12:06 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>  I'm curious about the comment you placed in the code    "I'm fixing it here as I feel that the web service is "right"</p><p>  Why not do the work of creating an Array of Song objects for each Station object in the CFC?  I know that if you create a large number (hundreds) of objects in CF and pass that many to Flex there can be a time drag, but you state your dataset is guaranteed to be small.</p><p>  By leveraging the power of the CFC, your Flex code would be much cleaner.  Also if you wanted to expand in the future what information you include about the station's typical songs (song artist, song genre, etc) you can easily do that in the CFC and not have to change much in the Flex code (except how you display the additional data).</p><p>  Anyway, perhaps I'm not following your logic for doing the work of creating the Array of Song objects in Flex instead of in the CFC.</p></div>
	</div>
</div>
		