
<div class="comment" id="c_1713621242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621242">1</a> by Raymond Camden
		posted on 10/7/2005 at 5:12 PM
		</div>
		<div class="comment_text"><p>Editors Note: I had to 'break' the code a bit by adding extra line breaks. This was due to stupid IE not supporting max-width and max-height propery. I really, really hate IE's CSS support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621252">2</a> by Ryan Guill
		posted on 10/7/2005 at 5:39 PM
		</div>
		<div class="comment_text"><p>The one place that I have found a need for structInsert() is when both the structure variable as well as the key are dynamic.  But yeah, most times it doesnt make sense to use it.</p><p>And personally, I like cfswitch for any case where I have multiple if statements using the same variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621248">3</a> by Bill
		posted on 10/7/2005 at 5:57 PM
		</div>
		<div class="comment_text"><p>I agree with Ryan on the use of CFSWITCH... if I have a bit of conditional logic that has more than 3 possibilities I definitely prefer CFSWITCH over a bunch of CFELSEIF statments; plus CFSWITCH should evaluate faster than multiple CFELSEIFs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621247">4</a> by Bill
		posted on 10/7/2005 at 6:08 PM
		</div>
		<div class="comment_text"><p>I just went and played this game and it appears there is a small bug in the displayed results.</p><p>It took me 6 guesses to get 88 as the magic number:<br>50,75,87,95,90,88</p><p>It took the computer 6 guesses also<br>51,76,82,86,89,88</p><p>However, under the computer answer it says it took only a COUNT: 5</p><p>supposedly this URL will show the final results:<br><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fcontest1%2Fentry3%2FHiLo.cfm%3Fi_goal%3D88%26lsti_GuessHistory%3D95%2C90%2C88%2C87%2C75%2C50%3AHEqTAQsUErq6XfupOzl3a6IKBEs&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/contest1/entry3/HiLo.cfm?i_goal=88&amp;lsti_GuessHistory=95,90,88,87,75,50">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621250">5</a> by Jeff
		posted on 10/7/2005 at 6:16 PM
		</div>
		<div class="comment_text"><p>I'm all for cfswitch.</p><p> It really depends on the condition you are evaluating, and how many possibilities there are.  I personally find it easier to read, when used properly.</p><p>For example  (can we use code in the comments, I'm about to find out):</p><p>&lt;code&gt;<br>&lt;cfif MyVar is "1"&gt;<br> do something<br>&lt;cfelseif MyVar is "2"&gt;<br> Do something else<br>&lt;Cfelseif MyVar is "3"&gt;<br> Do yet another something<br>etc.. etc.. etc..<br>&lt;/cfif&gt;</p><p>&lt;/code&gt;</p><p> That would be easier to read as a cfswitch, especially with lots of nested cfifs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621249">6</a> by ErikG
		posted on 10/7/2005 at 7:36 PM
		</div>
		<div class="comment_text"><p>A "bug", or UI flaw, is when you end a game the field to guess a number and start a new game is present, but whatever value you enter is ignored when you submit it.  Only after the page load can you actually start guessing again.</p><p>Either you need to be able to instantly start a game, or remove the text input.</p><p>I really like the idea of the competitor.  Since he programmed the logic of the computer playing both sides, it would be cool if when you started playing you selected which game you wanted to play, you could either make the computer guess your number, or you guess the computer's number.  Rather than the computer and you both guessing the computer's number.</p><p>Other UI flaw:<br>The "You are almost there..." text.  Two things: 1) I thought this was an actual clue the first game I played.  I guessed 50 and it told me I was almost there... so I thought the end number was close to 50, however it was actually 100. Doh! 2) Clues would ruin the game IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621253">7</a> by Rick
		posted on 10/7/2005 at 7:44 PM
		</div>
		<div class="comment_text"><p>I generally use cfswitch inside a cfscript block if I need to evaluate set a bunch of parameters based on another variable's value.  For anything that is diferentiating between performing an action of some sort I use cfif.  I find cfswitch cleaner, especially in cfscript, for doing lots of comparisons.</p><p>Also wanted to say thanks for doing this contest and evaluations, I didn't enter because I don't consider myself a novice, but I'm tempted to write my own solution just to compare against how others have done it.  It's fascinating to see people's interpretations of your task and the variety of ways to solve the problem.</p><p>I think it illustrates an important point to us all.  If you are really stuck on something, it often times can be best to start over and try a different approach since there are so many ways to solve a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621251">8</a> by Mark Kruger
		posted on 10/8/2005 at 12:55 AM
		</div>
		<div class="comment_text"><p>My .02 - I like CFSWITCH for anything more than a few conditions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621254">9</a> by Raymond Camden
		posted on 10/8/2005 at 1:01 AM
		</div>
		<div class="comment_text"><p>Just so it's clear - I do like cfswitch as well, but felt his use of it here wasn't great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621255">10</a> by Bill
		posted on 10/10/2005 at 9:01 PM
		</div>
		<div class="comment_text"><p>ugh, your right. his use of CFSWITCH here is odd.  only two conditions being evaluated in the first "parent" and then another cfswitch in the defaultcase of the first.</p><p>I hadn't really looked at the code previously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621257">11</a> by David B
		posted on 10/13/2005 at 8:07 AM
		</div>
		<div class="comment_text"><p>This is great.  Thanks for all of the feedback.</p><p>The comment about the count bug (Posted By Bill / Posted At 10/7/05 9:08 AM) is a great catch.  I ran across this myself playing the game over the weekend. Doh!  Let's just chalk it up to stacking the odds in the house's favor;-)</p><p>The UI flaw with the text input box (Posted By ErikG / Posted At 10/7/05 10:36 AM) needs to be fixed.  Just plain ugly.</p><p>The computer can't show its guesses each time the player guesses because this would aid the player.  So it actually just does all of it's guessing once the player finds the match.  Then the counts are compared.  The interface should explain this.</p><p>The computer doesn't actually just randomly guess.  It does use a random solution to an interesting situation that crops up.  If there are an odd number of integers left in the valid set, then picking the middle number is easy.  If there are an even number of integers, then how do you pick the middle number.  There is none, or two, depending on your point-of-view.  You could always default to the lowest, but this does seem too rigid.  So it randomly chooses to go high or low.  With a big enough statistical set it probably makes no diff, but it's just more fun.  (Also in the design of game where the user gets to set the goal number, it reduces the ability of the user to outsmart the computer. e.g A number like 51 could take 7 steps to reach w/ a defaulting to low algorithm, or just 1 step in a defaulting to high.)</p><p>The use of CFSWITCH and CFSET (w/ StructInsert and a throw way result) is an interesting habit.  For a while I was playing around with a strongly validating editor that wanted everything in a tag written as attribute_name=quoted_value.  I could 'teach' the editor to recognize a few new attribute names for the CFSET tag (e.g. 'temp').  Actually even though I've since switched to CF Studio, all my code still tries to look like well-formed XML.  I'm hoping one day it will pay-off, but I agree that it is much less clear to read.  If only I could get Macromedia to create two new cfset attributes such as varname= and varvalue=.</p><p>Thanks again.  (If I can squeeze in some time I may try a version 2 where the user and computer truly go head-to-head.)</p></div>
	</div>
</div>
		