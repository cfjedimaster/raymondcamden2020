
<div class="comment" id="c_1713617480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617480">1</a> by Bradford
		posted on 3/7/2005 at 10:17 PM
		</div>
		<div class="comment_text"><p>Great example Ray. I've been try to figure out how to trigger the accordion pages from a cftree. Have you ever attempted that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617484">2</a> by Raymond Camden
		posted on 3/7/2005 at 10:18 PM
		</div>
		<div class="comment_text"><p>I'm assuming CFTREE has an onClick. It should be simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617483">3</a> by Andy Allan
		posted on 3/7/2005 at 10:37 PM
		</div>
		<div class="comment_text"><p>Another great tip Ray. Thanks for all the cfform stuff you've posted so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617491">4</a> by Bradford
		posted on 3/7/2005 at 11:44 PM
		</div>
		<div class="comment_text"><p>I did some digging. I looks like cftree has an onclick, but cftreeitem doesn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617482">5</a> by phill.nacelli
		posted on 3/7/2005 at 11:47 PM
		</div>
		<div class="comment_text"><p>Great timing Ray.. I just email Mike Nimer on this..  actually.. the id attribute is missing in the documentation for &amp;lt;cfformgroup /&amp;gt; tag so that you can reference your tab bar/accordion component.  Also, you can actually disable the other pages while going to the next tab (say you are forcing a wizard like navigation) by using:</p><p>&amp;lt;cfinput type="button" name="step2A" value="Next" onClick="accordion1.getHeaderAt(selectedIndex+1).enabled=true;accordion1.selectedIndex=accordion1.selectedIndex+1" /&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617485">6</a> by Raymond Camden
		posted on 3/7/2005 at 11:55 PM
		</div>
		<div class="comment_text"><p>Bradford: I'm sure the onClick for cftree will tell you _which_ item though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617489">7</a> by Ben Densmore
		posted on 3/30/2005 at 3:59 AM
		</div>
		<div class="comment_text"><p>How do you name the accordion/tab? I don't see a property in the cfformgroup tag for naming them.</p><p>Thanks,<br>Ben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617490">8</a> by Ben Densmore
		posted on 3/30/2005 at 4:06 AM
		</div>
		<div class="comment_text"><p>nevermind, I just noticed you can use the "id" attribute. For some reason that doesn't show up in DW as an option to use, I was trying to use name and that wouldn't work.</p><p>Ben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617493">9</a> by Ray Camden
		posted on 3/30/2005 at 4:42 AM
		</div>
		<div class="comment_text"><p>That's what you get for using DW instead of CFEclipse. ;) (Sorry, couldn't help it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617488">10</a> by Chris
		posted on 1/6/2006 at 9:27 PM
		</div>
		<div class="comment_text"><p>Is there a way so that when you click on the previous or next button it will go to the next tab AND go back to the top of the form?  My form is pretty long and when you click on the next or previous button, it goes to the next tab, but it is still at the bottom of the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617486">11</a> by Jonas
		posted on 7/30/2006 at 2:55 PM
		</div>
		<div class="comment_text"><p>This might be a bit of topic but will this work for cfgrid as well? I have been trying to figure out how to do recordsetpaging with cfgrid ala the exchange on the adobe website.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617487">12</a> by Rod Kesselring
		posted on 12/4/2006 at 7:41 PM
		</div>
		<div class="comment_text"><p>I echo the question of Chris.  I am looking for a way to push the form back to the top of the page... any ideas?</p></div>
	</div>
</div>
		