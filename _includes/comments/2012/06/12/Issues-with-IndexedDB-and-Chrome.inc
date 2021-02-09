
<div class="comment" id="c_1713741601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741601">1</a> by Jake Drew
		posted on 7/18/2012 at 4:12 AM
		</div>
		<div class="comment_text"><p>It seems impossible to create an index via createIndex after a table has been created.  What I mean is that I cannot seem to get a direct reference to an objectStore in javascript without using createObjectStore.</p><p>I have tried several ways like:</p><p>var objectStore = window.IDBTransaction.objectStore("myOS");</p><p>No luck so far.  This would be nice for creating an index on a pre-existing table during a version update.  Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741600">2</a> by Raymond Camden
		posted on 7/18/2012 at 7:11 AM
		</div>
		<div class="comment_text"><p>I believe you can only open it via a transaction.</p><p>foo=db.transaction(["employee"], "readwrite").objectStore("employee")</p><p>The resulting object has a createIndex method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741599">3</a> by Raymond Camden
		posted on 7/18/2012 at 7:12 AM
		</div>
		<div class="comment_text"><p>Note the use of a string:  "readwrite" This is how you do transaction types in most recent browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741598">4</a> by Odin Hørthe Omdal (odinho)
		posted on 7/19/2012 at 3:24 AM
		</div>
		<div class="comment_text"><p>Haha, yeah, sorry for the string constants, but it's all for the long term health of the web, promise crossed pinky fingers.</p><p>Anyway, Firefox still works with the constants, at least my nightly. They are not really bad, IDBTransaction.READ_WRITE now returns "readwrite" and it's no problem having them there IMHO. They are just a bit uglier than "readwrite", but at least far better than 1, which would otherwise be what people would use when writing code. :-S</p><p>IE10 will include the constants, as I said, I think Firefox has them now, -- and I think we'll put them in Opera too. No real big drawbacks as far as I can see, and we don't want to get compatibility problems ahead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741602">5</a> by Raymond Camden
		posted on 7/19/2012 at 3:36 AM
		</div>
		<div class="comment_text"><p>Odin (kick ass name btw ;), were you involved in the spec here?</p><p>Also - I'm having a hard time parsing your reply. It was my understanding that the strings were what you should use now - not the constants.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741606">6</a> by Odin Hørthe Omdal (odinho)
		posted on 7/19/2012 at 11:49 AM
		</div>
		<div class="comment_text"><p>I made the bug for the change, and lobbied it through with the help of a few others. :-)</p><p>I do spec-work for Opera on IndexedDB.</p><p>Before the constants were numeric:  IDBTransaction.READ_WRITE gave you a numeric 1 as a value.</p><p>Authors were expected to write code like transaction('mystore', IDBTransaction.READ_WRITE). Only rockstar programmers (like you) would've done that. Most people wouldn't bother, and it would quickly look like: transaction('mystore', 1). Just look at checking readyState in XHR for an example... :-)</p><p>After the change the constants (IDBTransaction.READ_WRITE) were removed from the spec. However, instead of removing them from the implementations, at least Microsoft kept them so that old code would continue working. Ofc. it has to not be too old, so that it doesn't use the horrible .setVersion() version of the spec.</p><p>So what Microsoft did, and I believe Firefox as well, was to make those constants rather return their new string value. So that code written using IDBTransaction.READ_WRITE would return "readwrite" rather than 1 now.</p><p>If people update their code and remove the IDBTransaction.READ_WRITE's therein, we could actually remove it from browser implementations. However, normally, whatever you put onto the web platform stays there and has to stay there forever in order to not break web pages... And I don't really think that having some extra constants defined is all that much problem.</p><p>If we can remove them, maybe we should do that, if we can't we can't, and that wouldn't really be a huge problem IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741607">7</a> by Raymond Camden
		posted on 7/19/2012 at 6:47 PM
		</div>
		<div class="comment_text"><p>Thanks for the history heed Odin - it is great to hear from an insider's view. Mind another question? (I'm going there anyway... ;) I've made no secret of the fact that while I think IndexedDB is ok, I really wish WebSQL would have been the "winner." That being said, the crucial thing missing from IndexedDB is more complex ways of searching. Will we ever see an improvement in that area? Mentally I tend to equate IndexedDB with Mongo, which I know isn't the case, but it would be nice if more in-depth searching was allowed (even if it had a performance penalty).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741608">8</a> by Odin Hørthe Omdal (odinho)
		posted on 7/19/2012 at 7:23 PM
		</div>
		<div class="comment_text"><p>There is much talk of a IndexedDB v2. When we've got several implementations out of the door, and things are settling down well etc. At that point we will look at how it is used, what people *want* to use it for, (new/added use cases), what the pain points are etc.</p><p>We will never be able to backward incompatible changes (it's the web, man), unless it's stuff that actually no-one is using.</p><p>So, yes. Definitely opening for more advanced searching, I think it's in the wiki for "what we want to do with IDBv2" already. However, so far I haven't seen any straw proposals on how it could work. If you're very interested in it, you could start researching that :-)</p><p>It'd be interesting to follow. But it will take some time until we will look at it in the working group.</p><p>Problem with WebSQL is that we would've had to define SQL, and not getting a really stable platform, but it would've mostly just been "do whatever SQLite does". Which is not good.</p><p>However, I think we think we will keep WebSQL enabled and around, at least in the short term. I have a few kiosk-projects myself doing much searching that is using WebSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741609">9</a> by Raymond Camden
		posted on 7/20/2012 at 2:57 AM
		</div>
		<div class="comment_text"><p>Query - why do you think following SQLite isn't good? I've used it quite a bit in the past and it's always worked very well. I just feel like the decision was made w/o much thought of the practical impact. The amount of people who knows SQL (especially in web dev) versus a NoSQL/Index type tech is waaaay in favor of SQL. Also, WebSQL is supported on mobile now but not IndexedDB. (Sorry - don't know if Opera Mobile has it or not.)</p><p>I know there is no chance of this changing, but.... I'm going to grumble about it. ;) (And continue to get better with IndexedDB.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741612">10</a> by Mason
		posted on 11/2/2012 at 10:23 PM
		</div>
		<div class="comment_text"><p>" I just feel like the decision was made w/o much thought of the practical impact. ..."</p><p>Oh you said a mouthful. I can't believe the NoSQL fanboys found a way to butcher WebSQL too. I guess we're going to have to wait for yet more projects to completely fail because NoSQL is a totally inadequate implementation for most kinds of complex application data. Eventually the W3C will fire the NoSQL fanboys and we'll have a real data spec again.</p><p>It's like watching republicans try to balance a checkbook.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741611">11</a> by RoadHalk
		posted on 3/13/2014 at 7:46 PM
		</div>
		<div class="comment_text"><p>Need Help</p><p>I am new with jscript and indexdb. But I have been trying to create some functional structure to CURD in to indexdb.</p><p>Kindly suggest, Why I have to (on occasion) click multiple times to submit or retrieve the data.</p><p>I really appriciate your help.<br><a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fd%2F1m5bM9R3zQHXoFwoCI3RkmsHQ2oQyTylxZj4dYojmdNI%2Fedit%3Fusp%3Dsharing%3AXysH_hX4zGVPQfHcWzvsiOcND1I&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/document/d/1m5bM9R3zQHXoFwoCI3RkmsHQ2oQyTylxZj4dYojmdNI/edit?usp=sharing">https://docs.google.com/doc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741610">12</a> by Raymond Camden
		posted on 3/14/2014 at 5:51 AM
		</div>
		<div class="comment_text"><p>Can you put the actual live version online for me (and others) to try?</p></div>
	</div>
</div>
		