
<div class="comment" id="c_2619353133">
	<div>
		<img src="https://disqus.com/api/users/avatars/mobileappdevelopments.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619353133">1</a> by Aabha Mehta
		posted on 4/12/2016 at 9:02 AM
		</div>
		<div class="comment_text"><p>Worth to read..:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2830564779">
	<div>
		<img src="https://disqus.com/api/users/avatars/preguntncojonerocabrn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2830564779">2</a> by Preguntón Cojonero Cabrón
		posted on 8/10/2016 at 4:13 PM
		</div>
		<div class="comment_text"><p>more code, full source code samples!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3075140182">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_2Hu4g49Zv9.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3075140182">3</a> by harry
		posted on 12/30/2016 at 10:10 AM
		</div>
		<div class="comment_text"><p>hello i use appmatrics in my code but it will work only for "http" i am trying for mongo it will not work,please help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_3075358541">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3075358541">4</a> (In reply to <a href="#c_3075140182">#3</a>) by Raymond Camden
		posted on 12/30/2016 at 2:14 PM
		</div>
		<div class="comment_text"><p>I didn't have any issues - it just worked. Best I can suggest is reaching out to the project and asking there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3133827416">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3133827416">5</a> (In reply to <a href="#c_3133696984">#0</a>) by Raymond Camden
		posted on 2/2/2017 at 1:36 PM
		</div>
		<div class="comment_text"><p>I'd say look at the Express events and the Request events. But I don't think that will tell you the *Mongo* times. You would need to look at the total for the route (if it works), see how long the Mongo req is associated with that route, to figure out how much of the time is Mongo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3135317199">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_2Hu4g49Zv9.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3135317199">6</a> (In reply to <a href="#c_3133827416">#5</a>) by harry
		posted on 2/3/2017 at 6:30 AM
		</div>
		<div class="comment_text"><p>i had tried the same in "request" event but it is giving route level information <br>log are given below, but there is no mongo request related information, i need to identify how much time any route takes in mongo and redis ,<br>if it is posiible please share some code sample .</p><p>2017-02-03T00:26:08 - info:    [init] My route request information  time=1486099567948, type=HTTP, name=/search/v2/object, duration=641.948115, children=[children=[children=[], name=find(sessions), type=DB, $ref=$["request"]["children"][0], id=12, $ref=$["request"], startTime=[237070, 633860462], startTimeMillis=1486099568025, timeDelta=56.431198, cpuTimeDelta=-1, active=false, tracedStart=true, traceStopped=true], name=findOne(sessions), type=DB, $ref=$["request"], id=11, $ref=$["request"], startTime=[237070, 633447162], startTimeMillis=1486099568024, timeDelta=56.405295, cpuTimeDelta=-1, active=false, query={"_id":"ZVepyBZC1fCQuAIoHgRiPiPXgRruyzz_","$or":[{"expires":{"$exists":false}},{"expires":{"$gt":"2017-02-03T05:26:08.023Z"}}]}, tracedStart=true, traceStopped=true, children=[], name=update(sessions), type=DB, $ref=$["request"], id=13, $ref=$["request"], startTime=[237071, 155465825], startTimeMillis=1486099568546, timeDelta=30.501842, cpuTimeDelta=-1, active=false, query={"_id":"ZVepyBZC1fCQuAIoHgRiPiPXgRruyzz_"}, tracedStart=true, traceStopped=true], name=/search/v2/object, type=HTTP, parent=undefined, id=10, $ref=$["request"], startTime=[237070, 556769189], startTimeMillis=1486099567948, timeDelta=641.948115, cpuTimeDelta=-1, active=false, tracedStart=true, url=/search/v2/object, traceStopped=true</p></div>
	</div>
</div>
		
<div class="comment" id="c_3135827052">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3135827052">7</a> (In reply to <a href="#c_3135317199">#6</a>) by Raymond Camden
		posted on 2/3/2017 at 3:25 PM
		</div>
		<div class="comment_text"><p>Well I'm confused - Mongo did work for me. You can see it in the screenshot above, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3261267126">
	<div>
		<img src="https://disqus.com/api/users/avatars/SuriyaJay.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3261267126">8</a> by Surya Sathya
		posted on 4/18/2017 at 12:19 PM
		</div>
		<div class="comment_text"><p>can we use this to track streaming data using twitter api with nodejs.</p><p>i just want to monitor my node app</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3261335235">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3261335235">9</a> (In reply to <a href="#c_3261267126">#8</a>) by Raymond Camden
		posted on 4/18/2017 at 1:13 PM
		</div>
		<div class="comment_text"><p>I know you can track outgoing HTTP requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3262645643">
	<div>
		<img src="https://disqus.com/api/users/avatars/SuriyaJay.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3262645643">10</a> (In reply to <a href="#c_3261335235">#9</a>) by Surya Sathya
		posted on 4/19/2017 at 5:10 AM
		</div>
		<div class="comment_text"><p>hi <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a> thanks for the quick jump. could you pls share some example snippets about how to track http outgoing.</p><p>many thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3263018018">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3263018018">11</a> (In reply to <a href="#c_3262645643">#10</a>) by Raymond Camden
		posted on 4/19/2017 at 12:55 PM
		</div>
		<div class="comment_text"><p>Well, first, tell me what you tried? The docs do mention "HTTP Outbound" as a thing to track.</p></div>
	</div>
</div>
		