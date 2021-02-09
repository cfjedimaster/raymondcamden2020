
<div class="comment" id="c_1713618619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618619">1</a> by Sean Corfield
		posted on 5/25/2005 at 8:42 PM
		</div>
		<div class="comment_text"><p>Why not use init() instead of getEvents() since you are initializing your iCal object with the data? Calling init() on objects is a good habit to get into and so is providing a standardized constructor-like API...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618618">2</a> by Raymond Camden
		posted on 5/25/2005 at 8:46 PM
		</div>
		<div class="comment_text"><p>Because the CFC will eventually support getting toDos from the data as well. Or did you mean making the init take the data string and _keeping_ getEvents, but w/ no args? Ie (and not sure how well the code will look here)</p><p>ical = createObject("component",ical).init(data);<br>events = ical.getEvents();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618616">3</a> by Sean Corfield
		posted on 5/25/2005 at 9:19 PM
		</div>
		<div class="comment_text"><p>Yes, sorry, I wasn't clear: I meant, to initialize the ical object with the data. Then call a variety of methods to get whatever data you want.</p><p>If you're only going to use it as a service to parse whatever data you pass then getEvents(data) and getToDos(data) would make sense (but you wouldn't really want to parse the data each time, right?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618615">4</a> by Raymond Camden
		posted on 5/25/2005 at 11:16 PM
		</div>
		<div class="comment_text"><p>Yeah - makes sense. Normally I'd say, "it's just a string funciton", but getEvents is very weighty. No need to reparse each time it is run. What's cool is that I could add support for date filters (getEvents in the future), and having the events already parsed would save a lot of time. I'll do an update later on today.</p></div>
	</div>
</div>
		