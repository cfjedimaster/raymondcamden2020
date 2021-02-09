
<div class="comment" id="c_1713745518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745518">1</a> by kris korsmo
		posted on 4/3/2013 at 9:38 PM
		</div>
		<div class="comment_text"><p>That will come in handy, thanks. +1 for the bacon ipsum.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745519">2</a> by Alex Affonso
		posted on 4/4/2013 at 12:15 AM
		</div>
		<div class="comment_text"><p>Great Raymond! I was looking for something like this and eded up with waypoints.js. But that didn't make the trick the way I need too.</p><p>Actually, I implemented your code to one of my pages and it works perfectly. But when I do have more than one Edge animate at the same page, only the first one starts to play automatically when scrolling. I'm trying to figure it out how to solve it, but I'm not an expert in JavaScript and I don't know what to do. Do you have any clue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745520">3</a> by Alex Affonso
		posted on 4/4/2013 at 1:59 AM
		</div>
		<div class="comment_text"><p>Actually I figured out that if I have more than one Edge animations at the same page, both out of view area, only the first one plays when the scroll pass through it. The second one doesn't animate.<br>On my tests, if the first one is already into view, so it starts playing automatically, them the second one plays when the user scrolls to it. Such strange behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745525">4</a> by Raymond Camden
		posted on 4/4/2013 at 4:41 AM
		</div>
		<div class="comment_text"><p>I'm confused. Based on your last paragraph, it sounds perfect. Animation 1 was visible so it played. That's expected. Animation 2 wasn't, but did display when visible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745523">5</a> by Alex Affonso
		posted on 4/5/2013 at 4:49 AM
		</div>
		<div class="comment_text"><p>I wasnt't so clear. Sorry. The issue I found occurs when both animatons are out of view. When I scroll past the first one, it plays! But when I scroll past the second one, it do not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745524">6</a> by Franck Payen
		posted on 4/5/2013 at 6:26 AM
		</div>
		<div class="comment_text"><p>What about the "light inside of the fridge" effect ?<br>I put a console.log inside a looping animation, and right now try to search for a way to stop playing when out of view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745526">7</a> by Raymond Camden
		posted on 4/5/2013 at 3:10 PM
		</div>
		<div class="comment_text"><p>Alex: I'd have to see your code to help.</p><p>Franck: You could keep the scroll events in there but add logic to say:</p><p>if visible and playing already, don't do squat<br>if not visible and playing, stop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745522">8</a> by Alex Affonso
		posted on 4/9/2013 at 6:40 PM
		</div>
		<div class="comment_text"><p>Raymond, I'll sent you an email with a link to a test page I built to show you the issue. I appreciate your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745521">9</a> by Raymond Camden
		posted on 4/11/2013 at 5:33 AM
		</div>
		<div class="comment_text"><p>I worked with Alex's code and figured out what the issue was. He duplicated my code in both of the main JS files for his Edge animations.</p><p>Notice this part of the code: $(window).off("scroll");</p><p>This removes the event handler when the animation is in view. However, since he had two of them attached, they were both removed as soon as the first one came into view.</p><p>The answer is to create the event handler separately as a function, and when you remove it, pass it again to the off() function. Here is an example.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2F5359941%3ABfi0O_uTsJ6N4Ohybwg1hSUdcX4&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/5359941">https://gist.github.com/cfj...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745528">10</a> by Alex Affonso
		posted on 4/18/2013 at 8:34 AM
		</div>
		<div class="comment_text"><p>Thank you so much Raymond! It worked perfectly and saved my project. <br>I also noticed that with 2 or more animations at the same page I could not name their elements with the same name, since it leads to trigger issues. So I reviewed all my animations landing on the same page and gave their elements unique names. That's something we need to think ahead when creating with Edge Animate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745527">11</a> by Raymond Camden
		posted on 4/18/2013 at 3:26 PM
		</div>
		<div class="comment_text"><p>So glad it worked for you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745530">12</a> by Mr. Anderson
		posted on 5/2/2013 at 2:18 PM
		</div>
		<div class="comment_text"><p>Hey Raymond! Amazing bit of code buddy - saved my bacon. I'm having a bit of trouble with multiple animations on a single page failing to trigger like Alex had though; I've just been copying and pasting that revised code into my separate Edge Animate files, publishing them and then hooking them up in my html file.</p><p>I'm guessing there's a problem with my implementation. Do you think you could elaborate a bit on how to implement this code for multiple animations? Thanks for your help! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745531">13</a> by Raymond Camden
		posted on 5/2/2013 at 2:41 PM
		</div>
		<div class="comment_text"><p>The only real elaboration I can give is the code sample I linked too. Are you seeing what he did, the after animation 1 was shown animation 2 didn't work when visible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745532">14</a> by Mr. Anderson
		posted on 5/2/2013 at 2:56 PM
		</div>
		<div class="comment_text"><p>I think I'm getting something a bit different Raymond - for me no animations are playing when I have multiples on the page. They work perfectly individually though, ie. if I just have one edgePreload.js file on the page. Cheers anyway, I'll keep jostling about with it! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745529">15</a> by Raymond Camden
		posted on 5/2/2013 at 3:07 PM
		</div>
		<div class="comment_text"><p>If you want, share the URL and I'll take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745543">16</a> by Mohamed
		posted on 5/7/2013 at 6:56 PM
		</div>
		<div class="comment_text"><p>I try to put the code into my project , but  i can understand it , i take it copy and paste it like u said. and change the Edge ID , but still not work should i change some names in the code or something .im not good with JS  . please help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745546">17</a> by Raymond Camden
		posted on 5/8/2013 at 12:28 AM
		</div>
		<div class="comment_text"><p>How does it fail? Does it not start when scrolled into view?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745545">18</a> by Mohamed
		posted on 5/10/2013 at 11:55 AM
		</div>
		<div class="comment_text"><p>no , can you give more steps , what i do exactly , and what i need to change in the js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745551">19</a> by Raymond Camden
		posted on 5/10/2013 at 2:49 PM
		</div>
		<div class="comment_text"><p>If you do not know JS at all, this will be difficult. Were you able to follow the instructions I said about actions and adding console.log?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745550">20</a> by Mohamed
		posted on 5/10/2013 at 9:36 PM
		</div>
		<div class="comment_text"><p>:( i need it urgent that`s will kill me , any other way .. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745544">21</a> by Raymond Camden
		posted on 5/10/2013 at 10:11 PM
		</div>
		<div class="comment_text"><p>Sorry, I can't build this for you myself. If the blog entry makes *no* sense at all, then I'm not sure what to suggest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745548">22</a> by Timur
		posted on 6/13/2013 at 2:44 AM
		</div>
		<div class="comment_text"><p>Very interesting how to integrate this script with Adobe Muse to play imported Edge Animate files right in Muse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745547">23</a> by Raymond Camden
		posted on 6/13/2013 at 5:37 PM
		</div>
		<div class="comment_text"><p>I've never used Muse, so can't really help. I know Muse is more 'drag and drop'. Does it let you modify the source code or do you have to save first and then open in another editor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745553">24</a> by Alex Affonso
		posted on 6/13/2013 at 11:53 PM
		</div>
		<div class="comment_text"><p>Yes, Muse is a drag and drop software for non-developers who wants to build simple websites. You can import Edge Animate animations into it, but you can't acceas its code. <br>You can though export its generated files to a folder and import to a Dreamweaver site, so you can acceas and edit the code. But it's not a workflow designers are comfortable with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745552">25</a> by Raymond Camden
		posted on 6/14/2013 at 2:06 AM
		</div>
		<div class="comment_text"><p>Ah, unfortunately I'd assume this (my type of example above) is too complex to be compat with Muse. (If I had to guess anyway.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745554">26</a> by Raymond Camden
		posted on 7/23/2013 at 4:43 AM
		</div>
		<div class="comment_text"><p>Um - nope - not sure what to suggest unless I can see it myself. Is it online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745556">27</a> by Raymond Camden
		posted on 7/23/2013 at 10:34 PM
		</div>
		<div class="comment_text"><p>Hmm. Not sure what to say - your output looks very different from mine. I hate to say - but I'd suggest starting over again - get your animation ok and THEN make a copy - and then try my mods again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745560">28</a> by Raymond Camden
		posted on 8/2/2013 at 1:44 AM
		</div>
		<div class="comment_text"><p>Something was seriously wrong with your code. Your initial HTML file had multiple script tags in it. It should only have this:</p><p>&lt;script type="text/javascript" charset="utf-8" src="scrolltest_edgePreload.js"&gt;&lt;/script&gt;</p><p>Since edgePreload actually loads the other items. I did that and got the animation to show on screen, but the creationComplete is never properly fired. Best I can recommend is to start again since you did something wrong here. (And I say that with respect - what you did wrong was probably accidental - and I hope we can figure it out as it may be a common issue. And frankly, I could be wrong too!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745561">29</a> by Chris Jones
		posted on 8/2/2013 at 2:50 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I have a question, i am making an infographic on edge animate an i have a few symbols that i want to have this effect of popping up when in view like the example <a href="http://disq.us/url?url=http%3A%2F%2Fwww.derbyllc.com%2Feastern-tennessee%2F%3AxJLyLuY2lLiyztNtXU4Ltc0v97w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.derbyllc.com/eastern-tennessee/">http://www.derbyllc.com/eas...</a></p><p>Is have input the code above into creation complete but it doesnt work for me, is the example provided doable withing edge animate?</p><p>I can send the edge file through if it helps :).</p><p>Appreciate any help greatly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745562">30</a> by Raymond Camden
		posted on 8/2/2013 at 3:26 PM
		</div>
		<div class="comment_text"><p>To me this is the exact same thing. Start the animation when visible. In theirs though the animation starts w/ nothing so it seems to pop more.</p><p>So yes - it should just work. If you want to send the file, you can, or put it online yourself and just post the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745565">31</a> by Chris Jones
		posted on 8/2/2013 at 3:37 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for the reply, i have attached the zip of all the files,</p><p>What im trying to do is have the symbol desktops to play when scrolled into that area but struggling to see what ive done wrong! I also have one animation on loop and on triggered by a button, i dont know if thats what is complicating it?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2F42ui8eknzuvi4m2%2Fedge%2520infographic1.zip%3AhOLB2km52usCVuUtiJZ4CqFCHRU&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/42ui8eknzuvi4m2/edge%20infographic1.zip">https://www.dropbox.com/s/4...</a></p><p>Again appreciate you looking at it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745563">32</a> by Raymond Camden
		posted on 8/2/2013 at 3:48 PM
		</div>
		<div class="comment_text"><p>Something is off in your code. If you look at win7infographic_edgeActions.js, you can see this:</p><p> Symbol.bindSymbolAction(compId, symbolName, "creationComplete", function(sym, e) {</p><p>That's line 22. Then a bit lower you see the exact same line again, embedded inside. Somehow you got one creationcomplete embedded in the other.</p><p>Unfortunately my advice is the same as I gave Dan. I'd suggest starting over and seeing if you can pinpoint where something went wrong. Again I think it is your fault, but as I said to Dan, it is probably something innocent. (Or maybe even a bug in EA.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745566">33</a> by Raymond Camden
		posted on 8/2/2013 at 3:49 PM
		</div>
		<div class="comment_text"><p>Oh! If you copied my code EXACTLY, than that would explain it. You weren't supposed to copy EVERYTHING I had as it includes some of the code EA would have given you already. Did you do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745567">34</a> by Raymond Camden
		posted on 8/2/2013 at 3:53 PM
		</div>
		<div class="comment_text"><p>I removed the extra code and it 'worked', but, your animation is considered in view because the *whole thing* is an animation. You would need to bind the code I used on one of the elements, not the entire stage. For what you want you need to do something different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745564">35</a> by Chris Jones
		posted on 8/6/2013 at 6:39 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for looking at this I did originally copy all your code yes sorry, i'm primarily a Print designer trying to find my feet online so learning little by little!</p><p>I was worried it would be the case that my whole animation would be classed as in view yes :/ . so is my best option to have a look at the code and manipulate it a tad then place it attached to the symbol?</p><p>Im struggling to figure out where this code would be placed is it  inside the symbol and attached to 'complete'?</p><p>if im asking too much for you too answer its ok!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745569">36</a> by Raymond Camden
		posted on 8/6/2013 at 6:44 PM
		</div>
		<div class="comment_text"><p>So Chris a few things. I'm working on a demo of this, specifically:</p><p>"I've got a symbol that is a bit down the page and want to know when IT is ready."</p><p>I've run into an interesting side-issue though and I'm working w/ an Edge Animate engineer to come up with the 'best' solution. (Chris, as a designer, you probably recognize that what is best for A isn't always best for B of course. Same thing applies to developers.)</p><p>To your second question - you CAN attach event handlers to symbols. I just discovered that myself last week. It's in the UI for sure (I mean the UI of Edge Animate.)</p><p>As a warning - I'm on the road this week so may be slow to respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745576">37</a> by Raymond Camden
		posted on 8/7/2013 at 1:23 AM
		</div>
		<div class="comment_text"><p>Glad it helped Dan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745577">38</a> by Raymond Camden
		posted on 8/7/2013 at 5:31 AM
		</div>
		<div class="comment_text"><p>Chris - I've got something for you. Going to - possibly - blog it tomorrow. Depends how long I've got at the airport.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745578">39</a> by Chris Jones
		posted on 8/7/2013 at 12:10 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond really looking forward to seeing it!<br>ill keep an eye out for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745580">40</a> by Maarten Scholz
		posted on 12/16/2013 at 7:22 PM
		</div>
		<div class="comment_text"><p>Instead of het *creationComplete* event you should use *compositionReady*. If you have a slow connection, or a "heavy" site, some of the assets won't get loaded when opening the site for the first time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745582">41</a> by Raymond Camden
		posted on 12/17/2013 at 4:52 PM
		</div>
		<div class="comment_text"><p>Interesting - thanks for sharing that Maarten.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745584">42</a> by Queryous
		posted on 1/15/2014 at 2:18 AM
		</div>
		<div class="comment_text"><p>Hey there, very new to edge. What file would I put this code in to make this work? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745585">43</a> by Raymond Camden
		posted on 1/15/2014 at 2:23 AM
		</div>
		<div class="comment_text"><p>foo_edgeActions.js, where foo is the name of your animation. For me it is typically Untitled-1_edgeActions.js.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745581">44</a> by Queryous
		posted on 1/15/2014 at 3:11 AM
		</div>
		<div class="comment_text"><p>Hahah Thanks! So just a good ol' copy and paste job should do the trick for this then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745583">45</a> by Raymond Camden
		posted on 1/15/2014 at 3:44 AM
		</div>
		<div class="comment_text"><p>I'd recommend carefully doing the copy and paste - but it should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745586">46</a> by jerzero
		posted on 1/17/2014 at 5:31 AM
		</div>
		<div class="comment_text"><p>Raymond thanks for sharing this info.<br>I'm just wondering if this code resets the animation from the beginning when its not visible?</p><p>thanks Raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745588">47</a> by Raymond Camden
		posted on 1/17/2014 at 7:28 AM
		</div>
		<div class="comment_text"><p>Um... did you try the demo? :) If you did, you see it does not restart when you scroll back in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745590">48</a> by Peter
		posted on 3/21/2014 at 11:02 PM
		</div>
		<div class="comment_text"><p>I am a little lost on where all this code is supposed to live? I am new to Edge Animate... seems like they forgot about the designers again and left everything to the programmers like they did with FLASH. Where are the build in behaviors that can do 90% of what the designers need to do? Bring back Macromedia :)</p><p>Seriously... I am not following what Edge Animate is writing and what custom code is be entered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745589">49</a> by Raymond Camden
		posted on 3/21/2014 at 11:09 PM
		</div>
		<div class="comment_text"><p>"seems like they forgot about the designers again"<br>Obviously I'm biased, but I can't disagree with you more. What I've done in this blog post is something that is useful I think, but not necessarily a very common use case perhaps. The entire tool (imo) is built around designers, for designers, and does a great job of letting you build animations. As I said, I'm biased, but I honestly feel that.</p><p>Could they have added a simple "Pause when hidden" checkbox? Maybe. And it is certainly something you could suggest to Adobe if you think it makes sense.</p><p>As for your specific question - it sounds like you don't know where to enter code. You want to use the Actions icon. It is on the left hand side to the right of the project title. It looks a bit like this:   {*}.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745660">50</a> by khalil
		posted on 4/15/2014 at 5:16 PM
		</div>
		<div class="comment_text"><p>hey !</p><p>I have a little problem with my animation and I was wondering if you could help me out !</p><p>here is the link to my animation : <a href="http://disq.us/url?url=http%3A%2F%2Flegroupenorplan.com%2Fanimation%2FNorplan_Animation_new4.html%3AR-AqPzurgpwyt3C6XAbzXraNBaw&amp;cuid=3321886" rel="nofollow noopener" title="http://legroupenorplan.com/animation/Norplan_Animation_new4.html">http://legroupenorplan.com/...</a></p><p>It works perfectly with Firefox, but with google chrome, images are slowly showing 1 by 1. And on IE it's shaking :S</p><p>Thanks alot :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745663">51</a> by Raymond Camden
		posted on 4/16/2014 at 12:47 AM
		</div>
		<div class="comment_text"><p>Hmm, it seemed ok for me in Chrome. Not sure I saw what you saw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745667">52</a> by khail
		posted on 4/16/2014 at 10:20 PM
		</div>
		<div class="comment_text"><p>Humm!</p><p>Dont you see the background appearing like 5 sec after the animation starts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745679">53</a> by Raymond Camden
		posted on 4/16/2014 at 10:31 PM
		</div>
		<div class="comment_text"><p>I didn't notice it myself. Seemed ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745672">54</a> by Gary
		posted on 4/27/2014 at 7:12 PM
		</div>
		<div class="comment_text"><p>I'm pasting this code in the correct actions area {#} under creationComplete.  The only thing I'm editing is making sure the composition class matches the one in my document.  I add a custom SVG to the timeline, animate it, make sure Autoplay is off, add a &lt;div style="height:1500px;width:10px;display:block;"&gt;&lt;/div&gt; above the &lt;div id="Stage" portion, and it doesn't work; it won't play the animation.  :/</p><p>I'm actually fairly experienced with coding in general, baffled that I've been messing with this for 2 hours and no luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745674">55</a> by Gary
		posted on 4/27/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>Nevermind.. I was pasting the code found here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F4%2F3%2FDelaying-an-Edge-Animate-asset-until-visible%3AjTjHs1VsjyQmkWlSMbEuN_xrqT4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/4/3/Delaying-an-Edge-Animate-asset-until-visible">http://www.raymondcamden.co...</a></p><p>When I downloaded the <a href="http://disq.us/url?url=http%3A%2F%2F4.zip%3AuSaGRINPlp7nwiEDM0HznwOwMso&amp;cuid=3321886" rel="nofollow noopener" title="4.zip">4.zip</a> project file someone requested earlier and checked out the coding in the action, it was entirely different.  Copied/pasted that in mine and it worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745661">56</a> by Jason Thompson
		posted on 5/16/2014 at 10:33 PM
		</div>
		<div class="comment_text"><p>Great tutorial!</p><p>Being a javascript newbie, what would be the best way to turn this whole script into a function so that I can utilize it for many animations on one page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745682">57</a> by Raymond Camden
		posted on 5/17/2014 at 3:44 AM
		</div>
		<div class="comment_text"><p>Hmm. I'm not sure I have a good answer for that. You could just wrap the code in a function and call it automatically - but the snippet is so short I'm not sure what you would gain from that, and it still has to be in this particular event handler for the EA script anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745673">58</a> by Peter
		posted on 6/26/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>a video tutorial would be nice.... your tutorial seems lengthy you make seem like its one the most hardest things ever. Please do a video tutorial. Who reads now days?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745676">59</a> by Raymond Camden
		posted on 6/26/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>I'm sorry you found this difficult. I tried to make it as simple as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745669">60</a> by Raymond Camden
		posted on 6/26/2014 at 10:24 PM
		</div>
		<div class="comment_text"><p>Perhaps you could expand on how this is too lengthy, or what was confusing? I see two steps before the code is pasted in. And that's it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745677">61</a> by Josh
		posted on 9/5/2014 at 1:46 AM
		</div>
		<div class="comment_text"><p>Thanks for your post, I'm able to get this to work in the scrolling context. However I'd like to use it within a JQuery based carousel (FlexSlider). When I try you code, it must think it's visible because it always auto-plays when I load the page. Perhaps I need to trigger it differently, using a callback function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745680">62</a> by Raymond Camden
		posted on 9/5/2014 at 2:04 AM
		</div>
		<div class="comment_text"><p>Um... no idea. If you can check the item's position on page load it might give some clue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745664">63</a> by ekspanzi
		posted on 9/5/2014 at 11:34 AM
		</div>
		<div class="comment_text"><p>thank you <br>I was banging my head over this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745665">64</a> by jdesi
		posted on 10/14/2014 at 10:46 PM
		</div>
		<div class="comment_text"><p>Looks like we have an issue with the latest Animate JavaScript API - Version 0.1.7</p><p>I'm getting "Javascript error in event handler! Event Type = element"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745666">65</a> by Raymond Camden
		posted on 10/14/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ok, I'll try to recreate it here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745678">66</a> by Raymond Camden
		posted on 10/14/2014 at 11:07 PM
		</div>
		<div class="comment_text"><p>Ok, I got it fixed, but have to pick up my daughter. I'll be posting a *new* blog entry, so check the blog later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745671">67</a> by jdesi
		posted on 10/14/2014 at 11:28 PM
		</div>
		<div class="comment_text"><p>Wow! That was amazingly quick .. I cant wait to see the update .. anything specific I need to look into? Something to do with $(elem) perhaps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745675">68</a> by Raymond Camden
		posted on 10/15/2014 at 12:29 AM
		</div>
		<div class="comment_text"><p>Pretty much - writing it up now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745681">69</a> by Raymond Camden
		posted on 10/15/2014 at 12:58 AM
		</div>
		<div class="comment_text"><p>See update here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F10%2F14%2FDelaying-an-Edge-Animate-asset-until-visible--Part-6%3Apa4HfFM6PDRqyjtHfF70uyW-yUM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/10/14/Delaying-an-Edge-Animate-asset-until-visible--Part-6">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745670">70</a> by jdesi
		posted on 10/15/2014 at 2:30 AM
		</div>
		<div class="comment_text"><p>Awesome! That was super quick - really really appreciate. Keep up the great work you're doing for the Edge community.</p><p>Also, looking at the number of blog posts you have done and I believe you work for Adobe - can't you push this to be a feature in Edge animate itself? Like "autoplay on visible/viewport" perhaps?</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745684">71</a> by Raymond Camden
		posted on 10/15/2014 at 3:09 AM
		</div>
		<div class="comment_text"><p>I'm not a small cog at Adobe. I'm like half a tooth on a small cog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745683">72</a> by jdesi
		posted on 10/15/2014 at 6:20 AM
		</div>
		<div class="comment_text"><p>lol .. but looking at comments and the interaction you have been having for past 1 and half years is evident enough that people need this feature. Intrude the next board meeting - may or may not help but worth a shot eh :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745668">73</a> by sajad
		posted on 11/7/2014 at 2:31 PM
		</div>
		<div class="comment_text"><p>hi Raymond</p><p>I have one question . <br>I want to have a link in my adobe edge animate project that when i click on it open a pdf file . Ok ? Can you help me? , thanks .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745689">74</a> by Raymond Camden
		posted on 11/7/2014 at 7:44 PM
		</div>
		<div class="comment_text"><p>You would need to associate a click action for your EA element. In the event handler, just do</p><p>document.location.href='....'</p><p>where the value is the URL of the PDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745692">75</a> by Phivos
		posted on 11/9/2014 at 6:40 AM
		</div>
		<div class="comment_text"><p>Thanks for this, it is exactly what I wanted.</p><p>However, I don't understand the second line of the conditions. since it bypasses the first line of conditions, i.e. <br>if elemTop &gt;= docViewTop , then  elemBottom &gt;= docVewTop   is always true<br>if elmBottom &lt;= docViewBottom, then elemTop &lt;= docViewBottom is always true</p><p>So the first line suffices if you want the animation to start when you are just about to see the element.<br>Or use just the second line if you want to see the whole element before the animation starts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745691">76</a> by Raymond Camden
		posted on 11/10/2014 at 12:45 AM
		</div>
		<div class="comment_text"><p>I'll take your word on it - that darn logic haunted my mind for a few days. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1936571736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1936571736">77</a> by A
		posted on 3/30/2015 at 7:37 PM
		</div>
		<div class="comment_text"><p>Hi<br>I´m new in this stuff</p><p>And it doesn't work for me<br>Where should I place this code?</p><p>And does it work with multiple animations?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1936625856">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1936625856">78</a> (In reply to <a href="#c_1936571736">#77</a>) by Raymond Camden
		posted on 3/30/2015 at 8:06 PM
		</div>
		<div class="comment_text"><p>Did you read carefully? The post tells you where to put the code in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2147242135">
	<div>
		<img src="https://disqus.com/api/users/avatars/giutriv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2147242135">79</a> by Giulianna Trivellato
		posted on 7/20/2015 at 7:22 PM
		</div>
		<div class="comment_text"><p>I tried everything but it still doesn't work.... what I might be forgetting? could you post the exemple files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2147286579">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2147286579">80</a> (In reply to <a href="#c_2147242135">#79</a>) by Raymond Camden
		posted on 7/20/2015 at 7:46 PM
		</div>
		<div class="comment_text"><p>They are posted at the URL towards the end of the blog post. The JS files are viewable if you view source to get the URLs. That's not as easy as a zip, but is the best I can do right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331842234">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331842234">81</a> by the_gurden
		posted on 10/28/2015 at 8:31 PM
		</div>
		<div class="comment_text"><p>Are there portions of the code I need to change that are unique to the animation? I've been trying to get this to work for awhile to no avail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331878711">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331878711">82</a> (In reply to <a href="#c_2331842234">#81</a>) by Raymond Camden
		posted on 10/28/2015 at 8:52 PM
		</div>
		<div class="comment_text"><p>Nope, not really. Unfortunately I no longer have a Creative Cloud subscription so I don't have Edge Animate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331886389">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331886389">83</a> (In reply to <a href="#c_2331878711">#82</a>) by the_gurden
		posted on 10/28/2015 at 8:56 PM
		</div>
		<div class="comment_text"><p>righton, wasn't sure you even checked this anymore. every google search even close to this leads right back to your article so you seem to be the only expert.</p><p>i do get 3 console errors:</p><p>two of them are:<br>Cannot read property 'stage' of undefined</p><p>the other says unexpected token in regard to the last line of the js. which is the last line of your code incidentally, has the project ID which i did change to my own (only thing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331892887">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331892887">84</a> (In reply to <a href="#c_2331886389">#83</a>) by Raymond Camden
		posted on 10/28/2015 at 9:00 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is Adobe's forums. I don't use any Adobe software anymore for the most part. Frankly I'm surprised Edge Animate still exists. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331896329">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331896329">85</a> (In reply to <a href="#c_2331892887">#84</a>) by the_gurden
		posted on 10/28/2015 at 9:02 PM
		</div>
		<div class="comment_text"><p>alright, much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332277180">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332277180">86</a> (In reply to <a href="#c_2331892887">#84</a>) by the_gurden
		posted on 10/29/2015 at 1:34 AM
		</div>
		<div class="comment_text"><p>shot in the dark here so sorry to bug you again.</p><p>just realized i get this error: Cannot read property 'top' of undefined</p><p>and when i run your demo that console error isn't there. just not sure what the difference is and it's driving me crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332284487">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332284487">87</a> (In reply to <a href="#c_2332277180">#86</a>) by Raymond Camden
		posted on 10/29/2015 at 1:40 AM
		</div>
		<div class="comment_text"><p>Is your demo online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332289591">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332289591">88</a> (In reply to <a href="#c_2332284487">#87</a>) by the_gurden
		posted on 10/29/2015 at 1:44 AM
		</div>
		<div class="comment_text"><p>yeah <a href="http://disq.us/url?url=http%3A%2F%2Fzaksportfolio.com%2Fpodify%3AnUPkMDx0CKqfcj_w75RNWOfHItA&amp;cuid=3321886" rel="nofollow noopener" title="zaksportfolio.com/podify">zaksportfolio.com/podify</a></p><p>just pushed up my local stuff. the empty white section is where the animation would appear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332304780">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332304780">89</a> (In reply to <a href="#c_2332289591">#88</a>) by Raymond Camden
		posted on 10/29/2015 at 1:56 AM
		</div>
		<div class="comment_text"><p>I was hoping to see something stand out, but nothing seems obvious to me. It is most likely the fact that EA has been updated and my code just no longer works. :\ As I said, I don't have the software myself anymore so I'm not able to test it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332310581">
	<div>
		<img src="https://disqus.com/api/users/avatars/the_gurden.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332310581">90</a> (In reply to <a href="#c_2332304780">#89</a>) by the_gurden
		posted on 10/29/2015 at 2:01 AM
		</div>
		<div class="comment_text"><p>yeah that's kinda what i figured was going on. guess i didn't realize this stuff is on it's way out. all the adobe forums posts cite this so if this was the last bastion all is lost for this functionality with edge.</p><p>thanks for taking the time though, really appreciate it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332312780">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332312780">91</a> (In reply to <a href="#c_2332310581">#90</a>) by Raymond Camden
		posted on 10/29/2015 at 2:03 AM
		</div>
		<div class="comment_text"><p>To be fair, me saying EA is on the way is *totally* my opinion and as I'm no longer at Adobe I have *zero* basis for that thought. I just tend to think Adobe's concerns outside of Photoshop and the mobile apps around it is pretty much null. ;)</p></div>
	</div>
</div>
		