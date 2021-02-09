
<div class="comment" id="c_1713742502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742502">1</a> by figital
		posted on 8/10/2012 at 11:35 PM
		</div>
		<div class="comment_text"><p>Can I get a SQL wrapper for that and some CFDUMP? ;) #TGIF</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742504">2</a> by Raymond Camden
		posted on 8/11/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p>How about a beer instead? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742503">3</a> by figital
		posted on 8/11/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>DEAL! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742501">4</a> by Kyaw
		posted on 11/29/2012 at 10:22 AM
		</div>
		<div class="comment_text"><p>To demonstrate power of IndexedDB, I have created a demo app <a href="http://disq.us/url?url=http%3A%2F%2Fdev.yathit.com%2Fdemo%2Fydn-db%2Fnosql%2Fnosql-demo.html%3Abw9kvoEeVRRKpMIH9anGsqHqfSQ&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.yathit.com/demo/ydn-db/nosql/nosql-demo.html">http://dev.yathit.com/demo/...</a> IndexedDB can query several  ten thousand records queried under couple of 100ms time using compound index.  The query has filters and sorted. For ad-hoc query (without compound index), using key scanning join, it is possible within 4-5 seconds time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742505">5</a> by Raymond Camden
		posted on 11/29/2012 at 5:28 PM
		</div>
		<div class="comment_text"><p>Very click, Kyaw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742506">6</a> by Kyaw
		posted on 11/30/2012 at 6:38 AM
		</div>
		<div class="comment_text"><p>How about a beer instead? :-D</p><p>It seems IndexedDB API expose all possible with WebSQL except no SQL processor there. Performance is much faster than WebSQL.</p><p>All relationships (parent-child, one-to-many, many-to-many) can be model easily and retrived very efficiently.</p><p>Most common table joinings are simple, as it turn out.</p><p>%LIKE% query is possible, but a lot of work.</p><p>So IndexedDB is a way to go, except Safari. I did not see safari teans is active in indexeddb mailing list. It is very likely they are happy with WebSQL and have no interest in IndexedDB API. Only if Google push IndexedDB to webkit code base. It is also a tough thing, since IndexedDB API touch many things like security, performance. I guess webkit code base will not accept easily. just guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742508">7</a> by Raymond Camden
		posted on 11/30/2012 at 9:16 AM
		</div>
		<div class="comment_text"><p>I think the %LIKE% style search is the biggest concern for me. Mongo supports incredible searching, but IndexedDB is pretty primitive in that regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742507">8</a> by Saurabh
		posted on 8/10/2013 at 2:21 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, <br>Great post,  I was looking for something like this but couldn't find it anywhere else. One question I have is that how to iterate over all the values for a particular key, e.g., give the key 'Ray', how do you get (and store) all the associated tags?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742509">9</a> by Raymond Camden
		posted on 8/10/2013 at 11:04 PM
		</div>
		<div class="comment_text"><p>I'm not sure I get you. Is "Ray" the key for the data that *has* tags? If so, you just do a normal get type operation. The tags are part of the data.</p><p>I think I may be misreading you though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742515">10</a> by Saurabh
		posted on 8/11/2013 at 12:28 AM
		</div>
		<div class="comment_text"><p>I think I answered my own question after a bit of effort. Actually, I was struggling with gettting and setting a key with array as the value. Only your post has a working example (albeit advanced example) of such an arrangement. On top of that, I'm using the IndexedDBShim for cross-browser implementation, so things were getting a little rough. Anyways, here is what I meant and the solution that I came up with - <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F18155592%2Findexeddb-multiple-items-for-an-id%2F18157742%3Fnoredirect%3D1%2318157742%3AOLJ7XzcqIBDJt8qKwLiS5mzszTA&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/18155592/indexeddb-multiple-items-for-an-id/18157742?noredirect=1#18157742">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742513">11</a> by Manikandan K
		posted on 3/10/2014 at 1:53 PM
		</div>
		<div class="comment_text"><p>How to bind the indexeddb values to the combobox??? And Based on one combobox selection, how to filter values in another combobox??? I searched for this and didnt found anything in the Internet, I really require this functionality, Pls help, thanks in advance...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742514">12</a> by Raymond Camden
		posted on 3/10/2014 at 3:12 PM
		</div>
		<div class="comment_text"><p>"How to bind the indexeddb values to the combobox???"<br>Given that I've shown how to get elements, then all you do is take the results and set them to the dropdown. This is no different than any other example of using JS to change the values of a dropdown. If you do not know how to do that, I recommend searching for *that*, and do not worry about IndexedDB.</p><p>"And Based on one combobox selection, how to filter values in another combobox???"</p><p>Again, this isn't an IndexedDB question. You would need to write code that listens for changes to the dropdown. jQuery makes this pretty easy. On that change, you then use code I've already shared to get items from the IndexedDB table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742517">13</a> by W Davis
		posted on 6/15/2014 at 5:35 PM
		</div>
		<div class="comment_text"><p>A great post indeed, very helpful! Cheers Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742516">14</a> by KH Kim
		posted on 6/24/2014 at 6:31 PM
		</div>
		<div class="comment_text"><p>Thanks a lot great post.<br>But, it's not works in IE 11.<br>Do you have another ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742518">15</a> by Raymond Camden
		posted on 6/24/2014 at 6:41 PM
		</div>
		<div class="comment_text"><p>*How* doesn't it work? I can't help you unless you can give me a precise idea of where it is failing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742520">16</a> by Nel
		posted on 8/14/2014 at 8:31 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Great Post. I just wonder is the IN clause available in IndexedDB?  Or the same procedure you have outlined above is the only option.  Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742519">17</a> by Raymond Camden
		posted on 8/14/2014 at 3:06 PM
		</div>
		<div class="comment_text"><p>Technically no, but this article describes a smart work around for it and provides a function. It also describes other good workarounds as well: <a href="https://disq.us/url?url=https%3A%2F%2Fhacks.mozilla.org%2F2014%2F06%2Fbreaking-the-borders-of-indexeddb%2F%3AliVokIdSFX0edzQhbjT4p4IsTR8&amp;cuid=3321886" rel="nofollow noopener" title="https://hacks.mozilla.org/2014/06/breaking-the-borders-of-indexeddb/">https://hacks.mozilla.org/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2464102302">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_PvWkiMpaMJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464102302">18</a> by Hamayun Khan
		posted on 1/18/2016 at 5:51 AM
		</div>
		<div class="comment_text"><p>How to search if the tags is an object instead of array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464427254">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464427254">19</a> (In reply to <a href="#c_2464102302">#18</a>) by Raymond Camden
		posted on 1/18/2016 at 12:45 PM
		</div>
		<div class="comment_text"><p>I don't believe you can do that with IDB. If you can, send me a link to an example please.</p></div>
	</div>
</div>
		