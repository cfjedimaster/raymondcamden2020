
<div class="comment" id="c_2026624632">
	<div>
		<img src="https://disqus.com/api/users/avatars/fa1ken.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2026624632">1</a> by ⊥ᵒᵚ Cᵸᵎᶺᵋ⤷╨ᵒᵘ
		posted on 5/15/2015 at 1:17 PM
		</div>
		<div class="comment_text"><p>Have you seen <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Forbitaloop%2FWebSqlSync%3ArrM1s-me2gYyA07XLZ2JgVwX4bk&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/orbitaloop/WebSqlSync">https://github.com/orbitalo...</a> ? Seems to do the job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2027168448">
	<div>
		<img src="https://disqus.com/api/users/avatars/chandramuralis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2027168448">2</a> by chandramuralis
		posted on 5/15/2015 at 5:03 PM
		</div>
		<div class="comment_text"><p>BR - Best Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_2027349461">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2027349461">3</a> (In reply to <a href="#c_2026624632">#1</a>) by Raymond Camden
		posted on 5/15/2015 at 5:48 PM
		</div>
		<div class="comment_text"><p>Nope, I had not, which is exactly why I posted this. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2027610667">
	<div>
		<img src="https://disqus.com/api/users/avatars/geirman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2027610667">4</a> by Chris Geirman
		posted on 5/15/2015 at 8:07 PM
		</div>
		<div class="comment_text"><p>Ray, when using something like PouchDB or Firebase, is there any limit to the size of data saved on the client? Another somewhat loosely related question (stick with me, I'll bring it around)... this user wants to save "pictures" which I assume means they want to use the camera to take a picture and save it. These photos can themselves be 5MB. In any case, is it possible to... save the photo locally offline, sync it online once reconnected, and store it in a custom album on the user's device? The first two parts are related to this post and is probably possible within certain size limits assuming we save the images as Base64, but the second part with regard to creating custom album and saving the image to that album (rather than to their generic gallery). Is that possible with PhoneGap/Cordova or does that now start leaning more toward necessitating a native solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2027612566">
	<div>
		<img src="https://disqus.com/api/users/avatars/geirman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2027612566">5</a> (In reply to <a href="#c_2026624632">#1</a>) by Chris Geirman
		posted on 5/15/2015 at 8:09 PM
		</div>
		<div class="comment_text"><p>Thanks +1</p></div>
	</div>
</div>
		
<div class="comment" id="c_2029450295">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uC8iW86l6S.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2029450295">6</a> (In reply to <a href="#c_2027610667">#4</a>) by Gary F
		posted on 5/17/2015 at 12:29 AM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="geirman:disqus" href="https://disqus.com/by/geirman/" rel="nofollow noopener" title="https://disqus.com/by/geirman/">Chris Geirman</a> , Instead if wasting space in a local db to store photos I would suggest storing the jpeg's file path &amp; name in the local database. Then when the network is back online the app would upload the photo as a jpeg from the file system. This will save a huge amount of space in the local database and possible duplication (a copy on the file system and a copy in the db).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2029699065">
	<div>
		<img src="https://disqus.com/api/users/avatars/geirman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2029699065">7</a> (In reply to <a href="#c_2029450295">#6</a>) by Chris Geirman
		posted on 5/17/2015 at 5:47 AM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="disqus_uc8iw86l6s:disqus" href="https://disqus.com/by/disqus_uC8iW86l6S/" rel="nofollow noopener" title="https://disqus.com/by/disqus_uC8iW86l6S/">Gary F</a>, thanks for your response. I wasn't sure if I'd have access to the physical file path. As I understand it (please correct me if I'm wrong), the camera will hold a pointer to the place in memory where the photo is stored (not the file path), but once it releases that pointer I'd no longer have a way to access the file system asset from the app for security reasons. I've not yet done this myself, so I just took that as gospel. Again, please feel free to educate me. Also, do you think it's possible to create a special named album for my app? I've not been able to find that answer yet anywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2030097779">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2030097779">8</a> (In reply to <a href="#c_2029699065">#7</a>) by Raymond Camden
		posted on 5/17/2015 at 1:43 PM
		</div>
		<div class="comment_text"><p>When you take a *new* pic, you can use an option, "saveToPhotoAlbum", to have the picture saved, but I don't think the FileURI you get *initially* will probably be a temp location. You could flip it and tell it NOT to save, and then YOU copy manually. That way you'd have access to the final url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032949031">
	<div>
		<img src="https://disqus.com/api/users/avatars/nolanlawson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032949031">9</a> (In reply to <a href="#c_2027610667">#4</a>) by Nolan Lawson
		posted on 5/19/2015 at 2:22 AM
		</div>
		<div class="comment_text"><p>PouchDB's data limits are pretty generous: basically 50MB in iOS and unlimited on Android. Also you can get unlimited space on iOS by adding the SQLite Plugin: <a href="http://disq.us/url?url=http%3A%2F%2Fpouchdb.com%2Ffaq.html%23data_limits%3AgAGPcUH3CYNL3VnSLaHrTJQEezM&amp;cuid=3321886" rel="nofollow noopener" title="http://pouchdb.com/faq.html#data_limits">http://pouchdb.com/faq.html...</a></p><p>For storing images, PouchDB also has an "attachment" API, which stores the data as binary blobs if possible, so it's quite efficient. And yes, those attachments sync back to CouchDB. :)</p><p>Although as others have said, it might be a shame to have images stored twice - once in PouchDB and once on the filesystem. And the current replicator algorithm uploads the images as base64-encoded strings, which may be unmanageable for 5MB images. (Although that should change soon; we're working on multipart/mixed support.) So there are some downsides, but overall it works. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2033466439">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2033466439">10</a> (In reply to <a href="#c_2032949031">#9</a>) by Raymond Camden
		posted on 5/19/2015 at 12:40 PM
		</div>
		<div class="comment_text"><p>Thanks for the details, Nolan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2457822019">
	<div>
		<img src="https://disqus.com/api/users/avatars/vmendoza.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2457822019">11</a> by Victor Mendoza
		posted on 1/14/2016 at 4:30 PM
		</div>
		<div class="comment_text"><p>I am aware of Hoodie (<a href="http://disq.us/url?url=http%3A%2F%2Fhood.ie%3AKE3-jGjjtvcDoMRP4exxU_EYFxY&amp;cuid=3321886" rel="nofollow noopener" title="http://hood.ie">http://hood.ie</a>) seems interesting. Haven't tested it yet, honestly I haven't found too much info about , it seems it is not production ready but maybe it is check worthy. I think I would use PouchDB, the documentation is quite complete and ease to follow.</p><p>On the other hand Firebase does offer true offline support but sadly not for JavaScript yet. I have and cordova-ionic app working with Firebase and was willing to have true offline support as they said they were working towards it but in the latest post in their forums they have said that there are no clear plans to develop offline support for JS that why I am looking for other true offline support options for a new app. Do not misunderstand me, Firebase is great but for offline support with JS you will need to implement a custom solution or look for other options out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3460240733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3460240733">12</a> by Domingo
		posted on 8/9/2017 at 10:50 PM
		</div>
		<div class="comment_text"><p>Hello, I just started working with Pouchdb on Phonegap and have had a tough time using the tools. there doens't seem to be good documentation or troubleshooting guides for the PouchDB product. Are there any forums where one can ask questions from the CouchDB/PouchDB team. Right now I have an issue that PouchDB doens't sync with CouchDB on the android/phonegap but it does when running on the chrome browser.<br>Any help is appreciated.</p></div>
	</div>
</div>
		