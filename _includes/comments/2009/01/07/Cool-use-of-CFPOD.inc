
<div class="comment" id="c_1713711389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711389">1</a> by Raul Riera
		posted on 1/8/2009 at 10:13 AM
		</div>
		<div class="comment_text"><p>Why use cfpod at all? a &lt;div&gt; would have done the job</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711388">2</a> by Rob Cawte
		posted on 1/8/2009 at 1:07 PM
		</div>
		<div class="comment_text"><p>Actually that's a good tip - must make a note.  <br>This ...<br>&lt;div class="code" style="height: 300px; width: 500;"&gt;<br>... will give you a nice scrollable div that you can even embed in a BlogCFC post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711386">3</a> by Raymond Camden
		posted on 1/8/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>@Raul - Yeah, I did say it was probably easy CSS.... if you know CSS. ;)</p><p>@Rob - Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711385">4</a> by Sam Farmer
		posted on 1/8/2009 at 8:07 PM
		</div>
		<div class="comment_text"><p>Nice usage.  Every tag has its day!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711387">5</a> by Andy Sandefer
		posted on 1/8/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>That's a good bit of CSS to know.  I'm so cf driven that I sometimes forget what's already out there.  Cool trick @Rob.</p><p>I still think that cfpods and cflayouts have their uses and I use them in real live projects on a semi regular basis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711390">6</a> by Jeff Sittler
		posted on 1/8/2009 at 10:20 PM
		</div>
		<div class="comment_text"><p>@Rob</p><p>Don't want to step on any toes, but actually your CSS code would not produce a scrollable DIV since the overflow text would be visible and not contained within the DIV.  This is because a DIV without the "overflow" style applied will inherently display it's full contents.</p><p>Since others were using your code, I thought I would post a modified version of your code to create a scrollable DIV.</p><p>&lt;div class="code" style="height: 300px; width: 500px; overflow:auto;"&gt;<br>  &lt;p&gt;Velit esse cillum dolore ullamco laboris nisi ut enim ad minim veniam. Cupidatat non proident, quis nostrud exercitation sunt in culpa. In reprehenderit in voluptate lorem ipsum dolor sit amet, ut aliquip ex ea commodo consequat. Duis aute irure dolor cupidatat non proident, eu fugiat nulla pariatur.&lt;/p&gt;<br>  &lt;p&gt;Sed do eiusmod tempor incididunt sunt in culpa in reprehenderit in voluptate. Excepteur sint occaecat ut enim ad minim veniam. Quis nostrud exercitation sed do eiusmod tempor incididunt ullamco laboris nisi. In reprehenderit in voluptate ut enim ad minim veniam, sunt in culpa. Lorem ipsum dolor sit amet, qui officia deserunt ut aliquip ex ea commodo consequat.&lt;/p&gt;<br>  &lt;p&gt;Ullamco laboris nisi duis aute irure dolor ut labore et dolore magna aliqua. Sed do eiusmod tempor incididunt lorem ipsum dolor sit amet, ut enim ad minim veniam. Consectetur adipisicing elit, ut aliquip ex ea commodo consequat.&lt;/p&gt;<br>  &lt;p&gt;In reprehenderit in voluptate excepteur sint occaecat eu fugiat nulla pariatur. Ullamco laboris nisi ut aliquip ex ea commodo consequat. Qui officia deserunt sunt in culpa ut enim ad minim veniam. Ut labore et dolore magna aliqua.&lt;/p&gt;<br>  &lt;p&gt;Velit esse cillum dolore duis aute irure dolor cupidatat non proident. Eu fugiat nulla pariatur. Mollit anim id est laborum. Ut aliquip ex ea commodo consequat. Quis nostrud exercitation excepteur sint occaecat.&lt;/p&gt;<br>&lt;/div&gt;</p><p>Obviously you would put the style information in a class and just add it to the DIV, something like:<br>.scrollable {<br>overflow: auto;<br>}<br>then on the DIV you add the class:<br>&lt;div class="code scrollable"&gt;...&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711393">7</a> by Rob Cawte
		posted on 1/9/2009 at 4:50 AM
		</div>
		<div class="comment_text"><p>Hi Jeff,</p><p>Sorry if I wasn't clear.  The standard stylesheet that comes with BlogCFC has a class called "code" which already has those attributes, so unless you have changed that, it should work as I described.</p><p>Cheers,<br>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711394">8</a> by Jeff Sittler
		posted on 1/9/2009 at 12:48 PM
		</div>
		<div class="comment_text"><p>Hello Rob,</p><p>My apologies then.  I did not know that those styles were already applied.  Guess I should have looked deeper first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711392">9</a> by Brian
		posted on 1/10/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>Please tell me that I'm not the only one with Friday-itis... I tried to grab the scrollbar handle in Ray's example and drag it.  I must have tried ten times until it dawned on me that it was an image and not an embedded table.</p><p>&lt;sigh&gt;  Must...have...beer (or sleep...interchangeable at this point)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711399">10</a> by Raymond Camden
		posted on 1/10/2009 at 1:20 AM
		</div>
		<div class="comment_text"><p>I did that trick just for you. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711401">11</a> by Don
		posted on 10/29/2009 at 2:41 AM
		</div>
		<div class="comment_text"><p>but now here is the problem. Let's say you have a search form on the page outside the pod. Inside the pod is the results of the search. The search results are huge so you don't want to scroll forever and decide to paginate. Using the javascript:Coldfusion.Navigate to move through the pages keeping the page number in the url.<br>BUT when it loads up again the form is in there twice. How do you stop it from doing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711402">12</a> by Raymond Camden
		posted on 10/29/2009 at 3:57 PM
		</div>
		<div class="comment_text"><p>I'd have to see your code. If you decide to share it, use a service like Pastebin.</p></div>
	</div>
</div>
		