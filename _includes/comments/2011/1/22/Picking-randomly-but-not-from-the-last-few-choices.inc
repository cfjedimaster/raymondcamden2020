
<div class="comment" id="c_1713729091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729091">1</a> by todd sharp
		posted on 1/23/2011 at 2:49 AM
		</div>
		<div class="comment_text"><p>Dang Nuke Town barely comes up in your demo either :)</p><p>Wonder what would happen if you changed the algorithm used for randRange()?  Hasn't it been speculated that the stock algorithm doesn't do a great job or creating truly random numbers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729089">2</a> by Mark Kruger
		posted on 1/23/2011 at 3:32 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Doesn't black ops need to account for all the players in the room as well? In other words, it has to come up with the "most random" or "least played" map for a given group of players (both your group and your opponents) - so that variable would make this Gordian knot a bit harder to cut I would think. It would also (maybe...) account for the fact that black ops sometimes frustratingly produces a map you recently played.  What say you?</p><p>-Mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729077">3</a> by todd sharp
		posted on 1/23/2011 at 3:52 AM
		</div>
		<div class="comment_text"><p>@Mark:</p><p>We talked about that a bit when we were playing the other night (the things geeks talk about while gaming...) and decided that the game (should) only be concerned with the concept of a given lobby.  The fact that players can and do jump from lobby to lobby makes it exponentially more difficult (as you point out) to keep things truly random.  However, if you keep the scope limited to a given room/lobby then it should be fairly straightforward.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729098">4</a> by Mark Kruger
		posted on 1/23/2011 at 4:17 AM
		</div>
		<div class="comment_text"><p>@Todd,</p><p>Yes it makes sense I think - although I don't play this game I assume a lobby is the starting point for all the players in a specific group (your group and opponents) is  that right? So here's a question... say I'm a user who played with group A from Lobby A yesterday and now I'm playing with group B in Lobby B today. Does Black Ops take into account the maps I have played yesterday? Or over the life of my player?</p><p>-Mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729090">5</a> by Raymond Camden
		posted on 1/23/2011 at 9:49 PM
		</div>
		<div class="comment_text"><p>No - BO won't remember what you did in a previous session (whether it was the same day or week or year).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729088">6</a> by Tim Leach
		posted on 1/24/2011 at 1:02 AM
		</div>
		<div class="comment_text"><p>I had thought about doing this also, a better random generator to prevent repeats.</p><p>Though, for me I was thinking more of a weight system, where the longest ago something was played/chosen, the higher weight it would have an increase it's likely hood of being picked. I would think that would work better at making sure too many picks don't go by without including the left out items.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729092">7</a> by Raymond Camden
		posted on 1/24/2011 at 6:49 AM
		</div>
		<div class="comment_text"><p>I did something like that for Harlan. Given a list of ads: A, B, C where A has a weight of 3 to imply you want to show it more, I made a new list: A, A, A, B, C and chose randomly from that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729095">8</a> by Josh
		posted on 1/24/2011 at 11:47 PM
		</div>
		<div class="comment_text"><p>While you're fixing the map picking system, can you take a stab at fixing the lag-tasticness of the PS3 version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729093">9</a> by todd sharp
		posted on 1/24/2011 at 11:52 PM
		</div>
		<div class="comment_text"><p>@Josh That's an xbox problem too.  My bullets do nothing to people yet it only takes one of theirs to do me in...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729096">10</a> by Raymond Camden
		posted on 1/24/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>People still play the PS3? I thought it was just for Blurays??!?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729097">11</a> by Josh
		posted on 1/25/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>:(</p></div>
	</div>
</div>
		