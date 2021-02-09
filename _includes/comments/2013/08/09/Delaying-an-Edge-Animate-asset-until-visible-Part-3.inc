
<div class="comment" id="c_1713748126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748126">1</a> by rob boerman
		posted on 8/13/2013 at 12:58 AM
		</div>
		<div class="comment_text"><p>awesome! keep up the great work you doing</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748128">2</a> by Chris Jones
		posted on 8/13/2013 at 2:56 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for taking the time to write another article on this!<br>I have tried to copy you instructions word for word in a new doc but mine just fails to play.</p><p>I have attached the link to my Edge file.<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fsh%2Feta2sepe4cmyjeg%2Fydt4M_2Te6%3AbjCnUdF_1t4jJ15dVnINYoPDsS0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/sh/eta2sepe4cmyjeg/ydt4M_2Te6">https://www.dropbox.com/sh/...</a></p><p>I know you had an error with your file so i cant access the 'creation complete' to see if mine matches up to yours in the Edge files and also i noticed your referencing the symbol "Symbol_12" but the asset in the library is named 'Symbol_1'.</p><p>Maybe this is to do with why my file isnt working and your file is braking? (it comes up with syntax error in the actions when I try to open any in your actions.</p><p>Again any help would be greatly appreciated Ray!</p><p>Many Thanks,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748127">3</a> by Raymond Camden
		posted on 8/13/2013 at 2:59 PM
		</div>
		<div class="comment_text"><p>You have 2 of these:</p><p>Symbol.bindSymbolAction(compId, symbolName, "creationComplete", function(sym, e) {</p><p>Remove one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748131">4</a> by Chris Jones
		posted on 8/13/2013 at 5:48 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Im not sure why it put that in as i only input this once into creation complete, but i deleted from 'test4_edgeActions' manually but still to no avail :(.</p><p>think i might have to give this up unless you have any other suggestions!?</p><p>thanks,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748129">5</a> by Raymond Camden
		posted on 8/13/2013 at 5:53 PM
		</div>
		<div class="comment_text"><p>Can you put it online so I can run it as you have it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748134">6</a> by Chris Jones
		posted on 8/13/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Of course it is</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fsh%2Fe0ugbo3897cvvts%2F5I15eNmG8p%3APOw1FAV1vEBcZ37KBLF4JSysXfQ&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/sh/e0ugbo3897cvvts/5I15eNmG8p">https://www.dropbox.com/sh/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748139">7</a> by Raymond Camden
		posted on 8/13/2013 at 6:29 PM
		</div>
		<div class="comment_text"><p>I meant online as in _running_ online. :) But i downloaded it.</p><p>You have 3 issues:</p><p>1) I opened the HTML file, opened Chrome Dev Tools, and immediately saw this:</p><p>Uncaught SyntaxError: Unexpected token }</p><p>This is from test5_edgeactions.js, line 51.</p><p>You have an extra  }); on line 35.</p><p>2) As you mentioned, your symbol name was _1, not _12, so I changed this:</p><p>mysym=sym.getSymbol("Symbol_1");</p><p>3) Finally, and this is partially my fault. I mentioned here (I think) that you should reference the earlier blog entries, and the isScrolledIntoView function. You need to include that in your code. I didn't include it above as it didn't change for this entry.</p><p>See this Gist for a complete working example:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2F6221864%3AZa0J0txfOWh6QHxJTjQUlUJAqNY&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/6221864">https://gist.github.com/cfj...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748137">8</a> by Chris Jones
		posted on 8/13/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>sorry i didn't realize you meant working online apologies!<br>Raymond thanks I love you it works!</p><p>one more thing, now i have done with "Symbol_1"<br>Could i hypothetically get this working on multiple symbols by adding another line like below for "symbol_2"? or is it another way?</p><p> Symbol.bindSymbolAction(compId, symbolName, "creationComplete", function(sym, e) {</p><p>                   console.log("Ready");<br>                   mysym=sym.getSymbol("Symbol_1");<br>				   mysym=sym.getSymbol("Symbol_2");</p><p>P.S i think this help deserves an item being ticked off your Amazon wishlist!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748135">9</a> by Chris Jones
		posted on 8/13/2013 at 7:03 PM
		</div>
		<div class="comment_text"><p>Actually i just tried this and then it only plays the second symbol when in view!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748136">10</a> by Raymond Camden
		posted on 8/13/2013 at 7:09 PM
		</div>
		<div class="comment_text"><p>Let me whip up another example with 2 symbols.</p><p>FYI - iTunes is having a huge sale on movies today so I'd much rather have an emailed iTune cert instead. Or a PayPal donation. And yeah, that's totally crass for me to even ask. But that's how I roll!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748132">11</a> by Raymond Camden
		posted on 8/13/2013 at 7:28 PM
		</div>
		<div class="comment_text"><p>Ok, the solution. I'm writing this a bit quickly as I have an appointment, so forgive any rough edges. Also note - in general- the code could be tightened up a bit.</p><p>I added another symbol, symbol2. This was a bit higher and moved up and to the right. Look at this Gist for the full code:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2F6222503%3Aa1kNIfQOEj8WdQ0QAF-nGHqYWag&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/6222503">https://gist.github.com/cfj...</a></p><p>There's some things you should note.</p><p>Obviously I duplicate the code to set the second symbol to block.</p><p>I use 2 variables, mysym1Started and mysym2Started as a way to remember which guys have already started. This will be explained in a second.</p><p>Look in the scroll handlers now. First, I check to see if this one already started, and if so, I leave.</p><p>I then set the started flag to true.</p><p>The final mod is - I don't kill the scroll handler unless BOTH were started. This ensures that if I scroll slowly and see my new one first (remember I built it higher) then it can start and finish, and when I scroll deeper, I see the other one.</p><p>TO BE CLEAR: I think this JS code needs to be refactored. I'm going to follow this up with something a bit more generic.</p><p>You can find a zip of the project here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdl.dropboxusercontent.com%2Fu%2F88185%2Ftest%25205.zip%3AOV2v_YzNQkpK7jMLzQP4PXotSag&amp;cuid=3321886" rel="nofollow noopener" title="https://dl.dropboxusercontent.com/u/88185/test%205.zip">https://dl.dropboxuserconte...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748133">12</a> by Chris Jones
		posted on 8/13/2013 at 7:43 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond I'll go through this tomorrow see if it works for me, and make a donation also!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748138">13</a> by Chris Jones
		posted on 8/15/2013 at 3:27 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>So i have got my simple file working correctly with this method, now i am trying to input the same code into my infographic, and it seems buggy, I have attached the infographic file im working on if you can help?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fsh%2F3w7bw0sdab541q4%2F2sdCvJRyKw%3AVRRqr9vuIjM-zJtbLH7DS3PHU9M&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/sh/3w7bw0sdab541q4/2sdCvJRyKw">https://www.dropbox.com/sh/...</a></p><p>Two steps foward one step back! nearly there ;). <br>Paypal donation made!</p><p>thanks,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748140">14</a> by Chris Jones
		posted on 8/15/2013 at 3:28 PM
		</div>
		<div class="comment_text"><p>oh yer one other thing adding my web address to the website button on your comment form crashes my internet not sure whats going on there!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748141">15</a> by Raymond Camden
		posted on 8/15/2013 at 7:14 PM
		</div>
		<div class="comment_text"><p>Thank you for the donation. To your last comment, you say it crashes your internet - what does that mean?</p><p>To your issue: I opened up Chrome Dev Tools and looked at the console messages. From what I can see, it looks like the first (highest) symbol "works" but it keeps restarting. The second symbol (lowest) works right. It runs once. Digging now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748143">16</a> by Raymond Camden
		posted on 8/15/2013 at 7:18 PM
		</div>
		<div class="comment_text"><p>It was a typo. My code had this:</p><p>mysysm1Started=true;</p><p>Notice the extra s? It should be</p><p>mysym1Started=true;</p><p>Fixing this in the Gist right now. (In case you read the comment in the next 60 seconds and beat me.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748144">17</a> by Chris Jones
		posted on 8/19/2013 at 1:24 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>This works now perfectly by the look of it, Thanks for all your help this will definitely be a valuable asset in my Infographic to help give it the 'Wow' factor visually.</p><p>as for the issue in you comment box, the 'website' type box is always red even when i have typed a valid web address in (the others boxes ((Name, email etc)) are obviously blue) and if i try to submit a comment with a website input into it, it just crashes my browser and asks to restart. i have to delete or leave this box empty to make a comment :).</p><p>thanks!<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748145">18</a> by Raymond Camden
		posted on 8/19/2013 at 6:00 PM
		</div>
		<div class="comment_text"><p>What website did you enter? And what browser are you using? I can't imagine anything I've got here crashing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748147">19</a> by Chris Jones
		posted on 8/19/2013 at 6:31 PM
		</div>
		<div class="comment_text"><p>just my website <a href="http://disq.us/url?url=http%3A%2F%2Fwww.chrisjcreative.co.uk%3AlVJvGO6GZbORe4NaiYNS3rU8WQI&amp;cuid=3321886" rel="nofollow noopener" title="www.chrisjcreative.co.uk">www.chrisjcreative.co.uk</a>, i am using Chrome, just tried in FF and they both just stay red,</p><p>also tried <a href="http://disq.us/url?url=http%3A%2F%2Fwww.msn.com%3AcXs5X0eFHazSdwsp6Ko-vcyhudU&amp;cuid=3321886" rel="nofollow noopener" title="www.msn.com">www.msn.com</a> just to see that also stays red, didnt crash when i just tried it just blocks me from posting if i have anything input into the website box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748149">20</a> by Raymond Camden
		posted on 8/19/2013 at 6:43 PM
		</div>
		<div class="comment_text"><p>You know those aren't valid URLs though, right? You need http:// in front.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748148">21</a> by Chris Jones
		posted on 8/19/2013 at 7:13 PM
		</div>
		<div class="comment_text"><p>Ah ok I see, I just personally never put the Http:// infront when putting my address down, so i guess my fault!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748151">22</a> by Raymond Camden
		posted on 8/19/2013 at 7:17 PM
		</div>
		<div class="comment_text"><p>I could make it more explicit. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748150">23</a> by fagan
		posted on 5/30/2014 at 5:45 AM
		</div>
		<div class="comment_text"><p>I'd love to use this - but I get "There are JavaScript syntax errors in this Edge Animate composition's actions. Event Handlers cannot be created until these problems are fixed."</p><p>with your demo files. I think this may be due to your source files being out of date. Do you still think this is the best method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748152">24</a> by fagan
		posted on 5/30/2014 at 9:39 AM
		</div>
		<div class="comment_text"><p>Could please update your source files because I cannot find a way to get into the actions to edit the code.  No matter what I do I get that error above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748155">25</a> by Raymond Camden
		posted on 5/30/2014 at 6:02 PM
		</div>
		<div class="comment_text"><p>You can try the code w/ Part 4 and see if that works better. I also have an updated one being published at Adobe in the next few weeks. (Hopefully.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748154">26</a> by Fagan Wilcox
		posted on 6/1/2014 at 3:55 PM
		</div>
		<div class="comment_text"><p>Hey there - I managed to actually get this working now! I do have one last question. Can you please make a suggestion regarding reversing the animations upon scrolling upwards. Scrolling down triggers the play - scrolling up triggers a reverse. If reverse is too tricky I'd really appreciate even just knowing how to reset them once out of view. Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748157">27</a> by Raymond Camden
		posted on 6/2/2014 at 6:04 PM
		</div>
		<div class="comment_text"><p>Well, you have a scroll event you can listen to. You could use that to notice the change, see if it is in the upwards direction, and reverse the animation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748156">28</a> by Fagan
		posted on 6/5/2014 at 3:24 AM
		</div>
		<div class="comment_text"><p>Thanks Ray - I believe I have it working however when I group all my symbols in a div it fails to trigger in my HTML page. When I release them from the div it works fine. Does the 'isScrolledIntoView' only work on top level element symbols? I'm guessing because it's a child in my setup now I need a way of drilling down eg;  mysym=sym.getSymbol("SomeID/Symbol_1"); .. but nothing I try is working. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748160">29</a> by Fagan
		posted on 6/5/2014 at 5:56 AM
		</div>
		<div class="comment_text"><p>The other thing is I have multiple instances of Edge Animate compositions on the page. Do I add the above script in each composition or just once?. I assume I need to give each symbol OR each Div a unique ID name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748162">30</a> by Raymond Camden
		posted on 6/5/2014 at 4:35 PM
		</div>
		<div class="comment_text"><p>The isScolledIntoView is focused on one particular DOM item. I think that answers your question, but not sure.</p><p>To your second one - the code is built for ONE particular DOM item, so you would need to use it multiple times for multiple items. I believe I covered this though in one of the blog posts in this series.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748159">31</a> by Fagan Wilcox
		posted on 6/6/2014 at 7:56 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! very big help. Here is my site now <a href="http://disq.us/url?url=http%3A%2F%2Fsteaklab.com.au%2Fctm%2Fhc%2Fsteven%2F%3Az-PcHcJfWOfzvBtFqDKllUq6nZg&amp;cuid=3321886" rel="nofollow noopener" title="http://steaklab.com.au/ctm/hc/steven/">http://steaklab.com.au/ctm/...</a></p><p>I'm getting really inconsistent results with triggering the animations. Sometimes it works and other times not. I have a feeling this may be how I have set it up. You will see I put the 'isScrolledIntoView' into a separate js file so it loads once. But each edge asset has the remaining code relative to itself. I'm wondering if I should be consolidating this down into a single file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748161">32</a> by Fagan Wilcox
		posted on 6/6/2014 at 8:54 AM
		</div>
		<div class="comment_text"><p>Sorry I worked it out. It works just fine for small screens - but when it sees both compositions at the same time issues arise. I'll try adding all the my if(isScrolledIntoView(mysym.element) &amp;&amp; isScrolledIntoView(mysym2.element).. into them and see how we go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748163">33</a> by Fagan Wilcox
		posted on 6/6/2014 at 9:11 AM
		</div>
		<div class="comment_text"><p>Ok Guys - that worked!! .. thanks again Ray for these.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748164">34</a> by Raymond Camden
		posted on 6/6/2014 at 4:37 PM
		</div>
		<div class="comment_text"><p>Glad you got it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748167">35</a> by Mohammed Salman
		posted on 8/10/2014 at 1:45 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Its very nice script and work fine but i had been trying to make a full page with adobe edge and without &lt;p&gt;&lt;/p&gt; tag in HTML page i mean pure edge that auto generated from it and i defined in actions side (creationComplete) if one symbol working fine but if i repeat it its will not work can you advice me in this case?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748165">36</a> by Raymond Camden
		posted on 8/12/2014 at 5:32 AM
		</div>
		<div class="comment_text"><p>I'm having a hard time understanding you, but it sounds like you want the same logic for N animations. if so, you should be able to repeat the code for each symbol.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748168">37</a> by Mohammed Salman
		posted on 8/12/2014 at 8:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>If I repate it only one symbol work??  Otherwise nothing work.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748166">38</a> by Raymond Camden
		posted on 8/12/2014 at 2:48 PM
		</div>
		<div class="comment_text"><p>It should work is what I'm saying. I don't have a demo available on me. I thought I covered it in one of the later entries. You should check them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748169">39</a> by Mohammed Salman
		posted on 8/13/2014 at 10:43 PM
		</div>
		<div class="comment_text"><p>Sorry, I obviously wasn't clear enough I'll sent you an email with a demo to a test page i mean to figure out the issue I built to show you the issue. I appreciate your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748170">40</a> by Mohammed Salman
		posted on 8/14/2014 at 2:22 AM
		</div>
		<div class="comment_text"><p>Finally, I just repeat the ("Symbol_2");and rename to ("Symbol_3")and its working fine with me, No need to figure out any issue Mr.raymond  i know the logic of this script know ;)</p><p>		if(isScrolledIntoView(mysym3.element)) {<br>				<a href="http://disq.us/url?url=http%3A%2F%2Fmysym3.play%3ARLCMfkA4JjHz_OIIPfBbGwe3u0w&amp;cuid=3321886" rel="nofollow noopener" title="mysym3.play">mysym3.play</a>(0); <br>			} else {<br>				$(window).on("scroll", function(e) {<br>					if(mysym3Started) return;<br>					if(isScrolledIntoView(mysym3.element)) {<br>						console.log('Start me up 3');	<br>						mysym3Started=true;<br>						<a href="http://disq.us/url?url=http%3A%2F%2Fmysym3.play%3ARLCMfkA4JjHz_OIIPfBbGwe3u0w&amp;cuid=3321886" rel="nofollow noopener" title="mysym3.play">mysym3.play</a>(0);<br>						//only disable if both visible<br>						if(isScrolledIntoView(mysym.element) &amp;&amp; isScrolledIntoView(mysym3.element)) {<br>							$(window).off("scroll");<br>						}<br>					}<br>				});<br>			}</p><p>Awesome &amp; Awesome &amp; Awesome !!!</p><p>Thanks raymond for this article.</p><p>Advice to everyone should follow and read each steps and comments as well.</p></div>
	</div>
</div>
		