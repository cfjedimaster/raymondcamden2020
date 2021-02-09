
<div class="comment" id="c_1714083131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083131">1</a> by Shazron
		posted on 6/20/2014 at 10:15 PM
		</div>
		<div class="comment_text"><p>Hopefully this will be baked in soon... <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-6995%3A6hkXD1cMcupbCs7EsIGI-5_del8&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-6995">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083133">2</a> by Shazron
		posted on 6/20/2014 at 10:17 PM
		</div>
		<div class="comment_text"><p>You could do this in a before_emulate hook also, for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083205">3</a> by Raymond Camden
		posted on 6/20/2014 at 10:18 PM
		</div>
		<div class="comment_text"><p>Shaz, thanks for filing a bug for this. I thought there was one already.</p><p>Query - how do yo use before_emulate hooks? This is something I've never used before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083218">4</a> by Shazron
		posted on 6/20/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>More info here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-lib%2Fblob%2Fmaster%2Fcordova-lib%2Ftemplates%2Fhooks-README.md%3AxmqpHik5Ie0TS6bEDc35O3SsDQw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-lib/blob/master/cordova-lib/templates/hooks-README.md">https://github.com/apache/c...</a></p><p>Add a hooks folder in your project root, and put the script there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083223">5</a> by Raymond Camden
		posted on 6/20/2014 at 10:51 PM
		</div>
		<div class="comment_text"><p>As a side note to folks (not related to Shaz's comments above):</p><p>I believe one side affect of this killall command is that Safari can't "see" the simulator anymore. What I mean is - when I use Safari Remote debugging and relaunch the app, the simulator is not available in the dropdown under Develop. If I kill Safari and restart it, it is available.</p><p>Shaz, any comment on that? If the Cordova CLI does add this in, that could be a possible negative side effect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083219">6</a> by Raymond Camden
		posted on 6/20/2014 at 10:55 PM
		</div>
		<div class="comment_text"><p>Shaz: Cool, the script works great and is less to type. It would be cool if the --copy-from command for making new projects also had a way to 'seed' hooks too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083224">7</a> by Shazron
		posted on 6/20/2014 at 10:57 PM
		</div>
		<div class="comment_text"><p>Ouch. Never considered that. To add that into consideration we obviously can't do a killall, and find an alternative. Unfortunately it's an either or situation right now.</p><p>In better news, in Xcode 6 it appears ios-sim may finally be obsolete (who knows for sure yet):<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fios-sim%2Fissues%2F92%3Af-8F1rz8SXnX56i8nCP_ClN83SM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/ios-sim/issues/92">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083217">8</a> by Goy J-
		posted on 6/27/2014 at 12:38 PM
		</div>
		<div class="comment_text"><p>If I may troll a little: why Safari? This is simply the new IE6!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083220">9</a> by Raymond Camden
		posted on 6/27/2014 at 5:55 PM
		</div>
		<div class="comment_text"><p>Only Safari can "talk" to the device like this. (Well, you can use other tools like Weinre too.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083222">10</a> by Raymond Camden
		posted on 9/5/2014 at 11:10 PM
		</div>
		<div class="comment_text"><p>For folks curious, the killall will also break GapDebug if you are using that for debugging.</p></div>
	</div>
</div>
		