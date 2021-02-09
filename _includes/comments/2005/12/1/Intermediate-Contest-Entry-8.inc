
<div class="comment" id="c_1713623133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623133">1</a> by Rob Brooks-Bilson
		posted on 12/2/2005 at 9:48 AM
		</div>
		<div class="comment_text"><p>Ray, why do you say that Flash Remoting may not be included in future versions of CF?  Macromedia has already announced it's inclusion in Flex Builder 2.  I honestly don't see them getting rid of it anytime soon.  Maybe deprecating it at some point if they come out with something better, but like everything else, it will probably be around for quite a while in support of backward compatability.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623132">2</a> by Brett Liotta
		posted on 12/2/2005 at 10:24 AM
		</div>
		<div class="comment_text"><p>Ray thinks Macromedia will take it out of future versions of ColdFusion b/c of potential security risks.  but, he'll have to explain more in detail. i just remember him saying that in a recent blog about flash forms and remoting.</p><p>By the way, I like this entry the best so far.  that ajax stuff is a bit too clumsy to me.  this is a solid game.  one thing i like to see (that this entry did not have, but some others did) was the point total of my hand as i'm hitting.  and the reason is sometimes i'll have like 5 or 6 cards and i have add them up in my head.  that's not a big deal but what if i'm 1 point off.  that could weigh my risks out differently when deciding whether to hit or stay.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623134">3</a> by Rob Gonda
		posted on 12/2/2005 at 10:36 AM
		</div>
		<div class="comment_text"><p>Love flash forms and remoting; but I wouldn't get too involved with Flash Forms, as I believe they'll get completely replaced by Flex 2.0.</p><p>I had 7 cards at one point. After that, the 7th card was never removed from stage.</p><p>I don't like the fact that it won't tell me the scope or count how may point I have in my hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623131">4</a> by Rob Gonda
		posted on 12/2/2005 at 10:40 AM
		</div>
		<div class="comment_text"><p>Commenting on the 'dot' path from the current folder... I know what you mean, and they way I got around that in my latest project was creating an ObjectFactory and initialize it in my Application.cfm/cfc ... The Object knows the path to every other component, and I only initialize objects through the factory. It's a little extreme, but I think it will save me in many aspects... f.e. objects that communicate with each other, but must be declared a singletons ... the objectFactory returns me the singleton instance that's already loaded...</p><p>I can provide examples if someone is interested...</p><p>Cheers</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623135">5</a> by Raymond Camden
		posted on 12/2/2005 at 11:22 AM
		</div>
		<div class="comment_text"><p>I'm sorry. What I meant was - the ability to use FR in Flash Forms may be removed. Not FR itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623136">6</a> by charlie griefer
		posted on 12/2/2005 at 11:47 AM
		</div>
		<div class="comment_text"><p>i definitely dig the flash interface...but since i accept the fact that i'll never be a user interface developer (i just suck at that whole design thing), i'm really much more interested in code.</p><p>agreed with Brett that it would have been really nice to display the current players totals with each card draw.</p><p>also i seem to have broken it by betting $1000 right off (yeah, i'm a gambler) and losing (ok, not a good gambler).  the game didn't end, but i was unable to place a bet (kept getting an alert box telling me to "wager -1000 or less" in spite of the fact that i was unable to wager anything).  hit the back button a few times to get back to the blog entry, clicked the link to start the game, bet $1000 again, lost (really not a good gambler), and now it tells me to "wager -2000 or less".</p><p>not gonna harp too much on the validation.  my entry should be coming up soon and i already know a few things that are going to come up that are validation-related (among other things) :)  just bringing it up in case scott wants to check into the code and see what's up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623137">7</a> by Scott Johnson
		posted on 12/2/2005 at 12:00 PM
		</div>
		<div class="comment_text"><p>Ahh yes, the sixth card won't be cleared from the stage. I originally made the game with six cards. It is possible (although unlikely) to get up to 12 cards on a hand, but I planned for six and saved the real estate. I started testing  and came upon a 7 card hand, so I added the area extra card space. There is a clearForm function that clears the card images, I didnt update that function to clear the 7th card slot. Simple fix, but still a problem.</p><p>With Flex Builder 2 on the horizon, it would seems likely that Macromedia would stray away from flash remoting and limit what you can do with flash forms through coldfusion. With some patience and actionscript know-how, you can build  exciting RIAs with just coldfusion, basically another avenue to build simple flex apps. To define Flex and Coldfusion together as separate products that complement each other, I think they will need to limit what flash forms can do to avoid confusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623138">8</a> by Tjarko Rikkerink
		posted on 12/2/2005 at 6:59 PM
		</div>
		<div class="comment_text"><p>What I used before there where mappings was the following piece of code to get a "../../" path from the current directory. Just place it in the Application.cfm</p><p>&lt;cfset request.rootpath = "#mid(Rereplace(cgi.path_info,'/*[^/]*/*','../','all'),4,(len(cgi.path_info)-4))#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623139">9</a> by tony of the weeg clan
		posted on 12/2/2005 at 8:56 PM
		</div>
		<div class="comment_text"><p>although the flash forms are cool, there is no count of my cards, and that just erks me.  there is also a problem with something as it locked up my browser. ff 1.5  :(  not sure if its ff or flash, but something is up between the two i think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623224">10</a> by Scott Stroz
		posted on 12/8/2005 at 9:22 PM
		</div>
		<div class="comment_text"><p>This entry is throwing an entry when trying to deal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623222">11</a> by Raymond Camden
		posted on 12/8/2005 at 9:29 PM
		</div>
		<div class="comment_text"><p>I just tested and it worked fine for me.</p></div>
	</div>
</div>
		