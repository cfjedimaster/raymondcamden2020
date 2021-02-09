
<div class="comment" id="c_1713676774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676774">1</a> by Danilo Celic
		posted on 1/31/2008 at 7:37 PM
		</div>
		<div class="comment_text"><p>As the onLoad function can be run from multiple places (think on page load, and then you have several cfpods and cfwindows in the mix as well), using the CF8 functionality how would you know which one was the one that invoked the onLoad event?</p><p>I suppose that you could create a list of the loadable items and the value of their last loaded source value (or other appropriate value?), and then poll each one in turn to see if that value had changed, but that seems a bit cumbersome. I'd bet that there is a way to tie directly into each underlying JavaScript object and set an onload for each of those objects. That seems a bit easier to manage rather than have a global onload function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676777">2</a> by Raymond Camden
		posted on 1/31/2008 at 7:43 PM
		</div>
		<div class="comment_text"><p>It is my understanding is that it waits for _all_ of them to finish loading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676778">3</a> by Raymond Camden
		posted on 1/31/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>Nope, I'm wrong, it just checks in the main area. So yes, you would need to place one in each area you want to check for load status.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676779">4</a> by Raul Riera
		posted on 1/31/2008 at 8:42 PM
		</div>
		<div class="comment_text"><p>I wonder if this is the solution for running Spry inside those cfpod, cfwindow and so on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676781">5</a> by todd sharp
		posted on 1/31/2008 at 11:54 PM
		</div>
		<div class="comment_text"><p>"Another example, using the bind attribute on a cfdiv, so the cfdiv updates when a bound ajax grid changes."</p><p>Well - in this case you can simply bind the cfdiv's url to the grid.  Something like:</p><p>&lt;cfdiv bind="url:foo.cfm?id={mygrid.ID}" /&gt;</p><p>When mygrid.ID changes the cfdiv will re-evaluate the bind statement and fetch the new url.</p><p>I think there just be a lack of understanding on binding in general - sounds like a lot of Matt's issues could be solved with simple binds (instead of callbacks, etc).  Just my gut feeling...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676782">6</a> by Danilo Celic
		posted on 2/1/2008 at 12:27 AM
		</div>
		<div class="comment_text"><p>I think that Matt was more looking for ways to apply event handlers as part of the page processing after the page has loaded for the first time. For example, the page is loaded and the end user clicks a couple of things that then cause a cfpod to change its URL (perhaps with binding as Todd suggests), but when that content has loaded, it has elements within it that need to have some event handlers applied.</p><p>Haven't played around with this much, I suppose that the content that is being loaded may include some code that is auto-evaluated when it is loaded that performs the event binding, otherwise, the parent page will need to apply the event handlers and this is what I believe that Matt is looking to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676784">7</a> by Matt Grimm
		posted on 2/1/2008 at 3:18 AM
		</div>
		<div class="comment_text"><p>Danilo Celic is right... and todd sharp's example code is exactly what I'm using to bind a cfdiv to a cfgrid.</p><p>The problem was trying to perform some event binding or DOM manipulation on elements that were dynamically loaded through the cfdiv. There was no way of knowing when the elements were available without asking if they existed over and over. I could have used some inline js in the "dynamic page" but I try to build with a web standards methodology (separate all presentation, behavior, and content). So all the js code is in external files linked by the main page containing the cfdiv.</p><p>Ray's recommendation of the ajaxOnLoad function is great and worked. I just put the ajaxOnLoad in the dynamically loaded page (so that function fires everytime the cfdiv's bind is re-evaluated). This is really like just writing some inline js like I mentioned above.. It would be nice to have a js only solution and keep cf and js separate. (Would allow for some nicer code management.) Either way thanks Ray! You're amazing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676783">8</a> by M Davis
		posted on 3/26/2008 at 11:31 PM
		</div>
		<div class="comment_text"><p>I have four menu items that each cause a new page to be loaded in a cflayoutarea.  These pages typically contains cfgrids or other ajax heavy UI components.  If I get click happy on the menu items, eventually the page just hangs and nothing will happen. I know...then don't do that.  My boss didn't like that answer.</p><p>Was looking for a way to disable the menu links while ajax calls are still running.  I was thinking I coudl just swap out the styles when a call is made, then return it to a normal link when the call returns.  Am I way off base on this solution?  Not sure I understand how it could be done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676805">9</a> by Connie DeCinko
		posted on 6/28/2010 at 11:08 PM
		</div>
		<div class="comment_text"><p>I've used AjaxOnLoad in the past as long as I did not mind it calling javascript that is on the parent page.  However, in my latest instance, it is not practical to put the javascript on the parent page.  I have a form inside a CFDiv and I need a function to run when that form is finished loading.  How can I make the AjaxOnLoad execute javascript code on the same page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676800">10</a> by Raymond Camden
		posted on 6/29/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>Not that I can think of. In jQuery, you can easily load an item into a div and do X after it's loaded. Did you try ajaxOnLoad() within the content loaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676804">11</a> by Spinal
		posted on 8/11/2013 at 3:10 PM
		</div>
		<div class="comment_text"><p>I have a form inside of at least 3 cfdivs all 3 bound to cfselect tags till you end up at the form with 3 'selected' drop-downs above the form. I can get the form, once submission has happened, to disappear but I cannot seem to find a way to reset the first cfselect/cfdiv value. I have tried the ajaxonload at the completion of the form submission but it does not seem to be able to 'find' that cfselect field even if I use it's given ID/Name.... I have tried to jquery reset all select fields and even tried it in several different implementations but to no avail. I either end up with a javascript error running it in the CFDiv or it just does nothing. I really like the way the form works, I just can't get it to 'reset' after submission. I'm betting there is something simple I am missing. Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676802">12</a> by Raymond Camden
		posted on 8/11/2013 at 9:10 PM
		</div>
		<div class="comment_text"><p>You have "a form" inside 3 divs? So you have 3 forms? Or you have 3 cfdivs that are bound to one form somewhere else on the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676806">13</a> by Spinal
		posted on 8/12/2013 at 5:10 AM
		</div>
		<div class="comment_text"><p>well 3 cfselects inside cfform tags and a cfdiv bound to each of them. on the last cfdiv calls the main form that does all the real work. the other cfselect values get transferred to session values so the 'real' form can work with them. so really I have 4 forms and 3 divs. <br>something like <br>cfform&gt;<br>cfselect&gt;<br>/&gt;<br>/&gt;<br>cfdiv&gt;<br>cfform&gt;<br>cfselect&gt;<br>/&gt;<br>/&gt;<br>cfdiv&gt;<br>cfform&gt;<br>cfselect&gt;<br>/&gt;<br>/&gt;<br>cfdiv&gt;<br>cfform&gt;<br>/&gt;<br>/&gt;<br>/&gt;<br>/&gt;<br>not sure this will post right though, here goes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676807">14</a> by Raymond Camden
		posted on 8/12/2013 at 5:20 AM
		</div>
		<div class="comment_text"><p>Man I'm still not following you. You have 3 cfselects inside cfforms. So you have 3 forms with just a cfselect in them. If I read you right. You have 3 cfdivs bound to the 3 cfselects.</p><p>You're third cfdiv calls a real form. No idea what you mean there.</p><p>It sounded like you said you wanted the first cfselect to 'reset' on form submission. Given that you know the name of the cfselect you should be able to set selectedIndex to 0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676808">15</a> by Spinal
		posted on 8/12/2013 at 7:36 AM
		</div>
		<div class="comment_text"><p>well the first 3 cfforms are there because the cfselects will not work without being inside them, and I can't seem to get the whole mess to work under one cfform wrap. so that is why I say the 'real' form because it is the only one that contains the input fields that the 3 selects determine are needed based on their choices.<br>Your right I do know the name/id of the first select field, I have tried using reset and setting select back to 0, but the code won't fire as a JSscript&gt; (this throws the usual error) and I try to use the ajaxonload method and turned the 'reset' into a function and called it, but nothing happens, no error and nothing 'resets'. I'm sry this is very confusing to try to explain. hope this helped a little more. I supposed I could cut the code up and put it here if this form will take it. let me know. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676809">16</a> by Spinal
		posted on 8/12/2013 at 2:56 PM
		</div>
		<div class="comment_text"><p>ok well an update, I work at night so.<br>This changes the cfselects value to what I want it:<br>document.getElementById('typeX').value = 0;</p><p>But I cannot get the cfselect to 'refresh' with that value, I have tried these to no avail:<br>ColdFusion.Event.callBindHandlers('typeX', null, 'change');<br>$('#typeX').val('0').trigger('change');<br>ColdFusion.bindHandlerCache('typeX').call();</p><p>Run them in the same function as the value setting, or even in a separate function, nothing works, nothing happens except the value change.<br>Let me know if I can provide any further info for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676816">17</a> by Spinal
		posted on 8/12/2013 at 2:58 PM
		</div>
		<div class="comment_text"><p>Just on a side note; the cfselects are not bound to anything they either have straight hard coded values given to them or their values are supplied by queries, and the cfselect I am trying to change is using hard coded values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676818">18</a> by Raymond Camden
		posted on 8/12/2013 at 5:32 PM
		</div>
		<div class="comment_text"><p>Unfortunately you've got me here. To be honest, I no longer blog about the CF UI Ajax stuff because it leads to too many problems. I don't recommend people use it at all. If you were to hire me (just putting that as a theory btw - not a proposal ;) I'd rip out what you did and rebuild using jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676815">19</a> by Spinal
		posted on 8/12/2013 at 5:42 PM
		</div>
		<div class="comment_text"><p>Wow that's depressing. There any way to kick it out of the never ending cfdiv? cflocation does not work. That would be one way out, I just haven't really tried that route yet, or even a page refresh. Spent this last few days learning this, guess I'll focus more on jquery from now on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676814">20</a> by Raymond Camden
		posted on 8/12/2013 at 5:45 PM
		</div>
		<div class="comment_text"><p>A page refresh may be easier - window.location.reload I believe (<a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.mozilla.org%3Anf_3JpRYUiGCMESfNK_xkgKp-OA&amp;cuid=3321886" rel="nofollow noopener" title="developer.mozilla.org">developer.mozilla.org</a> is your friend). Yes - I strongly urge you to skip the UI stuff. It works for simple stuff, but once you build something complex, or not exactly to plan, it leads to issues. That - of course - is my personal opinion and not that of Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676813">21</a> by Spinal
		posted on 8/13/2013 at 2:25 PM
		</div>
		<div class="comment_text"><p>So this is the work around that I was able to figure out. And it is: location.reload(true); that is the only one I could find that would work.<br>But I ended up adding a parameter to the URL with this: <br>var url = window.location.href;    <br>   if (url.indexOf('?') &gt; -1){<br>      url += '&amp;thanks=true'<br>   }else{<br>      url += '?thanks=true'<br>   }<br>   window.location.href = url;<br>Which also refreshes the page but also gives me a way to trigger a 'thank you' div that I hide on the page.<br>Then I set an onclick event on the first cfselect to fire a function that hides the 'thank you' div and removes the prameter I added to the URL WITHOUT refreshing the page again, with this line:<br>window.history.replaceState("", "", ""); <br>So not so bad, works great...... so far.<br>Thanks<br>Spinal</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676817">22</a> by Raymond Camden
		posted on 8/13/2013 at 2:43 PM
		</div>
		<div class="comment_text"><p>Cool, glad you got it Spinal and thanks for sharing your solution.</p></div>
	</div>
</div>
		