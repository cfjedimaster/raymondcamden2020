
<div class="comment" id="c_1713620773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620773">1</a> by Joel
		posted on 9/12/2005 at 7:37 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Do you recommend this method to generate excel spreadsheets over using Jakarta POI?</p><p>Good Article.</p><p>Joel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620752">2</a> by Rob Brooks-Bilson
		posted on 9/12/2005 at 7:59 PM
		</div>
		<div class="comment_text"><p>I used to do the HTML --&gt; Excel method, but now exclusively use POI.  The main reason is file size.  Using the HTML method, you are generating HTML (or XML) files that you "trick" Excel into opening.  The problem here is the huge amount of markup around each data cell.  You can end up with some very large files very quickly with this method.</p><p>Using POI, what you get are true binary Excel files, with a much more compact footprint.  Plus, it's possible to do stuff in POI that is difficult or even impossible to do using the HTML method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620756">3</a> by Raymond Camden
		posted on 9/12/2005 at 8:03 PM
		</div>
		<div class="comment_text"><p>I've never used POI. I'll take a look at it. Frankly, I've only done "small" reports, so file size was never an issue, but I can see how it would be. I'll see if I can do some research and do a later blog entry on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620755">4</a> by dave ross
		posted on 9/12/2005 at 8:36 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Feel free to take a look at the posts I've made about POI:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65ED5A-508B-E116-6F4F7F38C6AE167C%3A_pslb1nShkKDVI-VCbsnv6ncj_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65ED5A-508B-E116-6F4F7F38C6AE167C">http://www.d-ross.org/index...</a></p><p>and</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65ECEC-508B-E116-6F8A9F878188D7CA%3AR6NqBNsRI0HWKHu9X7PWrVI_bp8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65ECEC-508B-E116-6F8A9F878188D7CA">http://www.d-ross.org/index...</a></p><p>Buried in there is the true answer to this question ("can't get the line feeds to work right").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620766">5</a> by Raymond Camden
		posted on 9/12/2005 at 8:38 PM
		</div>
		<div class="comment_text"><p>Cool stuff. No need for me to do the research and blog it - you already have. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620758">6</a> by dave ross
		posted on 9/12/2005 at 8:50 PM
		</div>
		<div class="comment_text"><p>well... I did the research, you can still blog it as an alternate answer (more people that know, the better... and not everyone scours comments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620760">7</a> by Raymond Camden
		posted on 9/12/2005 at 8:54 PM
		</div>
		<div class="comment_text"><p>Your worried, eh? Ok, I'll edit the entry and add a note to the bottom. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620768">8</a> by Matt Liotta
		posted on 9/12/2005 at 9:41 PM
		</div>
		<div class="comment_text"><p>OpenXCF has had for a long time now a CFX tag that easily allows anyone to read and write XLS files using POI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620772">9</a> by Raymond Camden
		posted on 9/12/2005 at 9:46 PM
		</div>
		<div class="comment_text"><p>Forgive the OT remark (but it's my blog ;) - Holy smokes, Matt - where the heck have you been?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620759">10</a> by michael White
		posted on 9/13/2005 at 8:36 PM
		</div>
		<div class="comment_text"><p>WOW, that's TWO of my questions you answered! you are the BOMB!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620754">11</a> by Ramakrishna
		posted on 2/18/2009 at 3:58 PM
		</div>
		<div class="comment_text"><p>Ray, can you help me know how do we insert special characters in the excel sheet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620753">12</a> by Raymond Camden
		posted on 2/18/2009 at 5:09 PM
		</div>
		<div class="comment_text"><p>What problems are you having?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3157835085">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_S5b8VKZ4dM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3157835085">13</a> by Rahul Kumar
		posted on 2/16/2017 at 9:52 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, I have a query with various fields and I want to write it to a spreadsheet with some formatting.<br>In each column, I want to highlight the cells which has value lower than a specified value (conditional formatting for more than one column). Is there any way to accomplish this in CF10 without using a loop?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3157963450">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3157963450">14</a> (In reply to <a href="#c_3157835085">#13</a>) by Raymond Camden
		posted on 2/16/2017 at 12:29 PM
		</div>
		<div class="comment_text"><p>I don't believe so. I think you will need to add the conditional format to each column.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3158114873">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_S5b8VKZ4dM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3158114873">15</a> (In reply to <a href="#c_3157963450">#14</a>) by Rahul Kumar
		posted on 2/16/2017 at 2:23 PM
		</div>
		<div class="comment_text"><p>I searched a lot but wasn't sure about that. Thought I'd ask an expert.<br>Thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3158160431">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3158160431">16</a> (In reply to <a href="#c_3158114873">#15</a>) by Raymond Camden
		posted on 2/16/2017 at 2:53 PM
		</div>
		<div class="comment_text"><p>To be clear, I'm not really an expert anymore - I don't do a lot of ColdFusion now.</p></div>
	</div>
</div>
		