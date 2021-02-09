
<div class="comment" id="c_1713737619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737619">1</a> by Rich Hefter
		posted on 12/22/2011 at 4:05 AM
		</div>
		<div class="comment_text"><p>Just curious.  I tried hitting the button twice, but the script was on fired the first time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737615">2</a> by Rich Hefter
		posted on 12/22/2011 at 4:08 AM
		</div>
		<div class="comment_text"><p>..Sorry, It was only an issue in Internet Explorer 8.  OK in other browswers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737620">3</a> by Phillip Senn
		posted on 12/22/2011 at 4:47 AM
		</div>
		<div class="comment_text"><p>Here was a good post from Dan G. Switzer:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2011%2F3%2F3%2FEasy-AJAX-using-ColdFusion-jQuery-and-CFCs%3A4eUC6tb2D_57yKEz1QKXQ8GhuC8&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2011/3/3/Easy-AJAX-using-ColdFusion-jQuery-and-CFCs">http://blog.pengoworks.com/...</a></p><p>And here's an example I did a while back with error trapping:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.phillipsenn.com%2FMatrix%2FjQuery%2FAjax%2FRoundTrip%2FCheckbox.cfm%3AZtVgeGQuyYgArNsk2i2s4yePVjk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phillipsenn.com/Matrix/jQuery/Ajax/RoundTrip/Checkbox.cfm">http://www.phillipsenn.com/...</a><br>It has source code at the bottom and a link to a copy of the cfc.<br>Lots of little tricks I've picked up from you, including adding &lt;cfparam name="url.returnformat" default="json"&gt;<br>and queryFormat=column.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737621">4</a> by Raymond Camden
		posted on 12/22/2011 at 7:06 PM
		</div>
		<div class="comment_text"><p>Rich - one more thing I could do is disable the button while the operation is running. That way it won't fire off multiple times at once if you click quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737624">5</a> by Rich Hefter
		posted on 12/22/2011 at 7:33 PM
		</div>
		<div class="comment_text"><p>Hi Ray.  FYI.  When I said I hit the button twice, I meant the 2nd time was after the response was received.  In IE8, this was an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737617">6</a> by Raymond Camden
		posted on 12/22/2011 at 7:34 PM
		</div>
		<div class="comment_text"><p>That is truly odd. I can see of no reason why IE8 would fail in such a simple demo. Of course, I can't test this since I have IE9. If you can figure out the exact reason, I'd appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737618">7</a> by Chris Grzebyk
		posted on 12/22/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>If you don't know (unless you are a compatibility mode hater), just hit f12 and select compatibility mode for ie8. I would say it's about 99.975% correct. Cheers/Merry Xmas and I appreciate all of your blogs.<br>-Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737622">8</a> by Raymond Camden
		posted on 12/22/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>Holy crap - you aren't kidding. It does break. But why?? Time to dig.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737623">9</a> by Raymond Camden
		posted on 12/22/2011 at 10:20 PM
		</div>
		<div class="comment_text"><p>Ohhhhhh I got it - I see the network call is running N times (thanks IE for adding that), but it is a caching issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737627">10</a> by Raymond Camden
		posted on 12/22/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>Any IE users having issues can run:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2011%2Fdec%2F21%2Ftesta.cfm%3ABFfRSTVUpwXfO7zicZaqijbKV64&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2011/dec/21/testa.cfm">http://www.raymondcamden.co...</a></p><p>The only change was this:</p><p>	$.ajaxSetup ({<br>	// Disable caching of ANY AJAX responses.<br>	cache: false<br>	});</p><p>Kinda ridiculous how easy that is in jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737625">11</a> by Phillip Senn
		posted on 12/22/2011 at 10:49 PM
		</div>
		<div class="comment_text"><p>I think I need to update my example to show the new deferred .done and .fail hotness.  One problem with some of this stuff is there are multiple "right" ways to do things.  But I think .done and .fail are to be used instead of anonymous functions in the callback parameters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737626">12</a> by Raymond Camden
		posted on 12/22/2011 at 10:50 PM
		</div>
		<div class="comment_text"><p>Not sure I'd argue that would be 'better' in this example (of course, better is very much a point of view). Not sure it makes sense in such a simple use case of, "click, get crap", type operations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737629">13</a> by Raymond Camden
		posted on 12/22/2011 at 10:51 PM
		</div>
		<div class="comment_text"><p>That being said - I'm still trying to wrap my brain around them - so I'd welcome seeing your change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737628">14</a> by Phillip Senn
		posted on 12/22/2011 at 11:37 PM
		</div>
		<div class="comment_text"><p>OK, I've updated it.  Even though it's working, I'm still not sure if this is "the right" way to use .done and .fail because it just looks like I'm substituting words for .success and .error.</p><p>There's a good Google doc here: <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Fpresent%2Fview%3Fid%3Ddpr5j57_16fpvxznfh%3AWVPsh6d6VGTdcE1xJfWnCQmDj80&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/present/view?id=dpr5j57_16fpvxznfh">https://docs.google.com/pre...</a></p><p>It was in response to my StackOverflow question here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F6285407%2Fjquery-deferred-vs-jqxhr%3AtZ6qK28y3TfglHFp8EtqUcwvE_8&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/6285407/jquery-deferred-vs-jqxhr">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737630">15</a> by Raymond Camden
		posted on 12/23/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>Quick note - you had quite a few typos for function - you spelled it as funciton. I do that a _lot_. This is a nice little preso... and it helps a bit (I mean helps me a bit). By any chance could you also make real file examples of that for folks to download and run?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737635">16</a> by Raymond Camden
		posted on 12/23/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>And to be clear - me asking for files is being lazy. I get that. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737636">17</a> by Phillip Senn
		posted on 12/24/2011 at 12:10 AM
		</div>
		<div class="comment_text"><p>The Google doc was from someone else.<br>He lost me about 3/4 of the way through.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737639">18</a> by KANTH
		posted on 1/27/2012 at 8:06 PM
		</div>
		<div class="comment_text"><p>hi Ray, i am trying to implement News slider  starting with a static one initially so when I am trying it using the Coda slider.i think I am getting  preload error because it shows me loading and a broken pic. please help me out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737638">19</a> by Raymond Camden
		posted on 1/28/2012 at 3:56 AM
		</div>
		<div class="comment_text"><p>Um... no idea what you are talking about. If you want to ping me via my contact form with details, it may make more sense. It will also help if you have code I can look so I can see the issue directly.</p></div>
	</div>
</div>
		