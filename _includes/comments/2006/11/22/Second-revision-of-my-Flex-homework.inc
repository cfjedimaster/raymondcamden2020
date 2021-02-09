
<div class="comment" id="c_1713659507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659507">1</a> by Scott Stroz
		posted on 11/22/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>Ray - You can do that, but I think it takes more than one step.</p><p>var thisChild = mainView.getCchildByName(childName);<br>mainView.selectedIndex(mainView.getChildIndex(thisChild))</p><p>I have not tested this, but am fairly certain it should work.</p><p>One thing you could do is create a custom component based on a &lt;mx:viewstack&gt; and add this functionality as a new method.  I have done that for several projects where I know I will need certain functionality of a control or caontainer more than once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659526">2</a> by Raymond Camden
		posted on 11/22/2006 at 7:46 PM
		</div>
		<div class="comment_text"><p>Scott, think you can write that component up and blog it? I'd like to see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659521">3</a> by Scott Stroz
		posted on 11/22/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>Absolutely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659527">4</a> by Scott Stroz
		posted on 11/22/2006 at 8:36 PM
		</div>
		<div class="comment_text"><p>Looking at the documentation, you should be able to set whcich child is visible by using selectedChild.</p><p>mainView.selectedChild=id of child;</p><p>I am still going to blog about custom components, though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659529">5</a> by Raymond Camden
		posted on 11/22/2006 at 8:44 PM
		</div>
		<div class="comment_text"><p>You know I saw that- and I SWEAR the doc I saw said it was readOnly. I must have not been awake yet. Thanks Scott. Updating my version now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659528">6</a> by Raymond Camden
		posted on 11/22/2006 at 8:46 PM
		</div>
		<div class="comment_text"><p>Worked perfectly. Also note I added your defaultButton suggestion to the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659513">7</a> by Dan
		posted on 11/22/2006 at 9:59 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Did you find out if you can call it by id? I think it would be much easier to call it as such.</p><p>mainView.selectedIndex=id_of_element;<br>instead of <br>mainView.selectedIndex=1;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659515">8</a> by Raymond Camden
		posted on 11/22/2006 at 10:00 PM
		</div>
		<div class="comment_text"><p>You didn't read the comments. :) Scott said I could - I tested - and it worked fine. It is NOT in the online version, but will be in the next build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659516">9</a> by dan
		posted on 11/22/2006 at 10:23 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I apologize for that. I saw his comments and I was using mainView.selectedIndex instead of child. That works great though, it makes it much easier to identify. THANKS!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659523">10</a> by dan
		posted on 11/23/2006 at 12:53 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I was getting a warning for checkForm() that no return type has been defined. Im a newbie to AS and Flex learning myself. You can add a returntype like this<br>function checkForm():void { }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659530">11</a> by Raymond Camden
		posted on 11/23/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>So was I. Already fixed locally. I also made it private as well. That removed all the warnings for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659533">12</a> by Stefan Richter
		posted on 11/23/2006 at 2:28 AM
		</div>
		<div class="comment_text"><p>I used states to create the transition from my login to the main chat, it worked pretty well. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.flashcomguru.com%2Findex.cfm%2F2006%2F11%2F22%2Fflexaudiochat%3A4_1jWPSH2vP_k-0eJGFEtMWHtak&amp;cuid=3321886" rel="nofollow noopener" title="http://www.flashcomguru.com/index.cfm/2006/11/22/flexaudiochat">http://www.flashcomguru.com...</a></p><p>I think states can get hard to manage though when a lot of components/properties are changed. I consider viewstack next time, too.</p></div>
	</div>
</div>
		