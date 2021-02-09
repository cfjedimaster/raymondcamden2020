
<div class="comment" id="c_1713674844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674844">1</a> by Daniel Greenfeld
		posted on 11/30/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>How about a JSON import/export?  CF8 supports it nicely, and so does... ahem... the rest of the world.  Using it instead of WDDX would mean that people could more easily import from other languages into blogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674853">2</a> by Raymond Camden
		posted on 11/30/2007 at 7:57 PM
		</div>
		<div class="comment_text"><p>BlogCFC is supported on CF6 and 7 though. I could have included the nice JSON CFC I use for Lighthouse Pro, but I wanted a super simple set of scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674871">3</a> by James Buckingham
		posted on 11/30/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>Bit of a sideline to that subject - I actually wrote a tool to automate the export of my Blogspot blog into BlogCFC :-). It wasn't bullet-proof because the layouts were slightly out afetr but in terms of the server-side it saved me so much time!</p><p>I don't know if that's something that would interest you Raymond?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674858">4</a> by Raymond Camden
		posted on 11/30/2007 at 10:40 PM
		</div>
		<div class="comment_text"><p>Not sure - but send it and I can share it on <a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.com%3Ae9_lb-nHK9ZZsEmuoDuxB5yk0rQ&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.com">blogcfc.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674875">5</a> by Adam Tuttle
		posted on 12/1/2007 at 1:04 AM
		</div>
		<div class="comment_text"><p>Can you share a WSDL or otherwise explain the format of the import data? I'd like to write a script that converts wordpress export data into blogcfc import data, and I don't yet have a copy of blogcfc running to fill with dummy data and then export to figure it out manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674856">6</a> by Adam Tuttle
		posted on 12/1/2007 at 1:05 AM
		</div>
		<div class="comment_text"><p>I don't know why I said WSDL. I meant XSD. At least I think I did... unless this is just another brain fart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674882">7</a> by Raymond Camden
		posted on 12/1/2007 at 1:08 AM
		</div>
		<div class="comment_text"><p>The data is WDDX. It's part of ColdFusion. CF can both serialize and deserialize it natively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674873">8</a> by Adam Tuttle
		posted on 12/1/2007 at 1:11 AM
		</div>
		<div class="comment_text"><p>I understand that, but in order for me to translate the data I export from WordPress (a blog app written in PHP), I need to know what the data elements are and how to structure them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674874">9</a> by Raymond Camden
		posted on 12/1/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>Oh - um - well, all I did was serialize the data from my blogcfc tables. You could make a blank blogcfc install and serialize them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674870">10</a> by Roger Skalbeck
		posted on 1/4/2008 at 1:10 AM
		</div>
		<div class="comment_text"><p>The export/import works well with one note of caution for anybody using it to merge blogs: Be careful with user tables &amp; avoid duplication at all cost.  After creating a new blog on our development server, I exported it and tried to import to merge it with an existing blog with a different config directory.  Yikes!  I ended up duplicating users, which duplicated display for all blog entries, even though the actual entries table was correct.</p><p>After rolling back the database and manually changing the WDDX file for user names, I imported the same files again and all is right with the world.  Thanks Ray (and digital primates).  This was a great help.</p></div>
	</div>
</div>
		