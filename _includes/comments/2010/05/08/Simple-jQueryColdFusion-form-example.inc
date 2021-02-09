
<div class="comment" id="c_1713724250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724250">1</a> by Simon
		posted on 5/9/2010 at 1:57 PM
		</div>
		<div class="comment_text"><p>Thanks Ray another great example. As a beginner with jQuery it's so helpfull to see working examples with jQuery and coldfusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724262">2</a> by Gary F
		posted on 5/9/2010 at 3:12 PM
		</div>
		<div class="comment_text"><p>Where's the link to the demo? (Kidding!!!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724260">3</a> by Vladimir
		posted on 5/10/2010 at 11:52 AM
		</div>
		<div class="comment_text"><p>Waiting for more examples! This is a very good jump start!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724269">4</a> by LifeBane
		posted on 5/11/2010 at 1:43 AM
		</div>
		<div class="comment_text"><p>You could possibly clean it up a bit by moving everything from the get to the post:<br>[code]<br>$.post("test.cfc",<br>	{'method':'authenticate','returnformat':'returnformat','username':uval, 'password':pval},<br>	function(res) {<br>		//Handle the result<br>		if(res == "true") {<br>			$("#result").html("Your login worked.")<br>			//Do more here.<br>		} else {<br>			$("#result").html("Your login failed.")<br>			$("#loginButton").removeAttr("disabled")<br>		}<br>	})<br>[/code]<br>Also I'd recommend putting quotes aroung username and password in the json object for clarity, as they look exavtly like variables without them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724264">5</a> by Raymond Camden
		posted on 5/11/2010 at 5:42 AM
		</div>
		<div class="comment_text"><p>I prefer the 'meta' stuff to be in the url, namely the method and returnformat. I _can_ say it has bugged me for sometime now the way my objects "looked" - I didn't know I could do:</p><p>"key":value</p><p>That's much better. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724271">6</a> by LifeBane
		posted on 5/11/2010 at 9:46 AM
		</div>
		<div class="comment_text"><p>One of the reasons to use 'post' instead of 'get' is that it acts as a deterrent against XSS (Cross Site Scripting) attacks.  It's not a fail-safe however.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724275">7</a> by Raymond Camden
		posted on 5/11/2010 at 1:42 PM
		</div>
		<div class="comment_text"><p>I've never heard that POST helps prevent XSS. Do you have a URL to back that up? I do know it allows you to send more data though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724273">8</a> by LifeBane
		posted on 5/11/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.technicalinfo.net%2Fpapers%2FCSS.html%3Av7cDmDszhH39ILjNORl_SvS1qXE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.technicalinfo.net/papers/CSS.html">http://www.technicalinfo.ne...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724277">9</a> by Raymond Camden
		posted on 5/12/2010 at 6:53 AM
		</div>
		<div class="comment_text"><p>Interesting. Their argument is that it is harder to hack forms. I disagree with this. Well, it _is_ harder, much like it is harder for me to take candy from a 4 year old versus a 2 year old, but I'm not sure I'd even recommend this as it may give people a false sense of security. It is _trivial_ to hack a form. Is it as trivial as a URL hack? No. But it will take an attacker all of 2-3 more minutes. Even less with the right Firefox extension.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724278">10</a> by Raymond Camden
		posted on 5/12/2010 at 6:54 AM
		</div>
		<div class="comment_text"><p>I should add - I'm no security expert. So take the previous comment as my opinion only. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724267">11</a> by LifeBane
		posted on 5/12/2010 at 7:28 AM
		</div>
		<div class="comment_text"><p>Ya, it wouldn't do anything to deter the kind of hackers you would need to worry about.  I'm definitely not claiming to be a security expert either :)  I guess just a tidbit to think about.</p><p>One possible advantage to having the metadata in the get portion of the url would be for bookmarking, however that's irrelevant when referring to ajax requests of course.</p><p>I've also read that using get instead of post, the data in the url gets logged, such as Apache logs, etc.  I guess that could be an advantage or disadvantage depending on what you want, and the situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724272">12</a> by Raymond Camden
		posted on 5/12/2010 at 2:44 PM
		</div>
		<div class="comment_text"><p>One more disadvantage of POST - the network traffic is higher. This was mentioned in the Client Side performance session at cfObjective.</p><p>Then again, POST is the _only_ safe way to send a lot of data. So if you are posting a form with a textarea, you pretty much _have_ to use POST.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724274">13</a> by Maertsch
		posted on 5/14/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>Very handy with a onKeyUp expression. The user just typed the last char of his password and whom. logged in. without pressing a submit button or something else :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724270">14</a> by Chris
		posted on 6/21/2010 at 5:23 PM
		</div>
		<div class="comment_text"><p>How might you clear the username and password fields after successful logon?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724276">15</a> by Raymond Camden
		posted on 6/21/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>Give u/p fields with IDs of "username" and "password":</p><p>$("#username").val("")<br>$("#password").val("")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724261">16</a> by Chris
		posted on 6/21/2010 at 6:21 PM
		</div>
		<div class="comment_text"><p>And that would go after</p><p>$("#result").html("Your login worked.")</p><p>Correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724258">17</a> by Chris
		posted on 6/21/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>Doesn't seem to be working, any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724266">18</a> by Raymond Camden
		posted on 6/21/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>Did you use a username field with an ID value of username? Ditto for password? Is it online where we can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724281">19</a> by Chris
		posted on 6/21/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>Ahhh, doesn't work in Chrome, but does in FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724284">20</a> by Raymond Camden
		posted on 6/21/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>Can you share the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724288">21</a> by Chris
		posted on 6/21/2010 at 7:04 PM
		</div>
		<div class="comment_text"><p>No, it's not online and I did use the id's correctly.  It's just an issue with Chrome.  Works in both IE and FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724287">22</a> by Raymond Camden
		posted on 6/21/2010 at 7:05 PM
		</div>
		<div class="comment_text"><p>Well, in general, Chrome is darn good - so I'm sure it can work. Can you share the source perhaps? (Don't paste here - use pastebin.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724289">23</a> by Chris
		posted on 6/21/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>Honestly, it's your exact code with my 2 additions for clearing the form.  I agree with you about Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724286">24</a> by Raymond Camden
		posted on 6/21/2010 at 7:19 PM
		</div>
		<div class="comment_text"><p>boggle - then you got me. :) I've got no idea why it would work fine in IE/FF but not Chrome. Normally it's "Works fine in FF/CHrome and not IE". I use Chrome 100% of the time now and don't see this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724290">25</a> by Raymond Camden
		posted on 6/21/2010 at 7:21 PM
		</div>
		<div class="comment_text"><p>Just tested in Windows/Chrome/5.X and it worked fine. Maybe open up the dev tools in Chrome and see if you see an error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724292">26</a> by Chris
		posted on 6/21/2010 at 7:26 PM
		</div>
		<div class="comment_text"><p>Sorry Ray, Chrome was caching something.  Must be Monday morning. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724291">27</a> by Ofeargall
		posted on 7/13/2010 at 11:56 PM
		</div>
		<div class="comment_text"><p>So I used this with a regular ol' component in my cfc, not a script based like you have and the return wouldn't work properly. I posted a question on stack overflow and someone said to use output="false" on the entire cfc to remove the white space in my return from the component. It worked like a charm.</p><p>I sort of narrowed it down by alerting the response and saw it had a wild amount of white space. My initial fix was to use res.trim() == ... and that worked.</p><p>My question is, if I set my entire cfc to output="false" to accommodate this particular function what else will that screw up? I've got all my queries and other logic in the cfc and I'm wanting to avoid any ghost errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724295">28</a> by Raymond Camden
		posted on 7/13/2010 at 11:58 PM
		</div>
		<div class="comment_text"><p>Nothing at all else will screw up - unless you actually try to output from the CFC itself, which most folks never actually do.</p><p>So short answer - don't worry about it. I _always_ use output=false on my cfcomponent and cffunction tags. (Well, "always" being before I switched to ColdFusion 9.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724296">29</a> by Bill R
		posted on 7/1/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Your CF blog is the best.  Most understandable, most applicable, and easiest to follow.  Thanks for this post.</p><p>Bill</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724294">30</a> by Raymond Camden
		posted on 7/1/2012 at 7:00 PM
		</div>
		<div class="comment_text"><p>Wow, very nice words. Thanks Bill.</p></div>
	</div>
</div>
		