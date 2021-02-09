
<div class="comment" id="c_1713622405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622405">1</a> by Phillip Senn
		posted on 11/4/2005 at 7:09 PM
		</div>
		<div class="comment_text"><p>Duh, I don't get it.<br>What's this example supposed to do again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622404">2</a> by Raymond Camden
		posted on 11/4/2005 at 7:20 PM
		</div>
		<div class="comment_text"><p>Ah, the point was - this change makes it so that CF doesn't have to recompile the SWF when the URL variable changes, which makes it a bit zippier for your users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622407">3</a> by Phillip Senn
		posted on 11/4/2005 at 8:01 PM
		</div>
		<div class="comment_text"><p>Any ticks in speed are welcome.<br>However, I don't see a noticeable increase.<br>Could it be measured if debugging were turned on?</p><p>The Developer Center Newsletter [devnetnews@macromedia.com] has a fantastic example of a Real Estate Sample Application,<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fdevnet%2Fcoldfusion%2Farticles%2Fflashforms.html%3Ftrackingid%3DCUZL%3Aab6FSVyv11HQLMCbS1Zn1bOqcyw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/devnet/coldfusion/articles/flashforms.html?trackingid=CUZL">http://www.macromedia.com/d...</a><br>which uses flash remoting to have interactivity without submitting the form over and over again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622406">4</a> by Birgit
		posted on 11/7/2005 at 6:40 PM
		</div>
		<div class="comment_text"><p>If I understand this correctly, the above code example should to two things:<br>- clicking on the links should get you to the choosed tab and <br>- without the form reloading.</p><p>I copy/pasted the code and ran it on my local machine and it doesn't do either of it. A click on the links on the bottom just reloades the whole page and only activates the first tab.<br>I really must overlook something here, and commenting on this publicly reveals my total innocents regarding FlashForms.</p><p>Any ideas what I do wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622409">5</a> by Raymond Camden
		posted on 11/7/2005 at 6:43 PM
		</div>
		<div class="comment_text"><p>Incorrect - what is going on here is we are stopping CF from recreating the SWF. For this example it is a bit hard to see since it is so small, but in a large flash form apps it will easier to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622408">6</a> by Birgit
		posted on 11/7/2005 at 6:55 PM
		</div>
		<div class="comment_text"><p>that's how it works for me... use</p><p>selectedIndex="{foo.thetab}"</p><p>(ommit the .text)</p><p>Great example, Ray. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622410">7</a> by Brett Liotta
		posted on 11/14/2005 at 9:54 PM
		</div>
		<div class="comment_text"><p>This seems like a great idea for speeding up flash forms and the whole recompiling thing. I wonder if I can use this same concept and stuff a query in a hidden flash form field. My flash form is having to recompile the swf every time because of my query-driven AS code. Ever put an entire query in a hidden form field?  It seems a bit daunting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622411">8</a> by Brandon
		posted on 11/30/2005 at 5:15 AM
		</div>
		<div class="comment_text"><p>In case anyone is wondering...Birgit's suggestion works with Flash forms without needing to be reloaded also!  If you bind to an array of radio buttons, the binding onto that switches the tabs.</p><p>And the styles on the tab navigator in this example completely hides the tabs and shows only the content of the  pages.  very nice for dynamic forms.</p><p>...</p><p>&lt;cfinput type="radio" name="switcher" value="0" label="tab0"&gt;<br>&lt;cfinput type="radio" name="switcher" value="1" label="tab1"&gt;<br>&lt;cfinput type="radio" name="switcher" value="2" label="tab2"&gt;<br>&lt;cfinput type="radio" name="switcher" value="3" label="tab3"&gt;</p><p>&lt;cfformgroup selectedIndex="{formname.switcher}" type="tabnavigator" id="dynamicPanel" style="tabHeight:0; tabWidth:0; marginTop:0; verticalGap:0; borderStyle:none;"&gt;</p><p>&lt;cfformgroup type="page" label="Tab 0"&gt;&lt;/cfformgroup&gt;<br>&lt;cfformgroup type="page" label="Tab 1"&gt;&lt;/cfformgroup&gt;<br>&lt;cfformgroup type="page" label="Tab 2"&gt;&lt;/cfformgroup&gt;<br>&lt;cfformgroup type="page" label="Tab 3"&gt;&lt;/cfformgroup&gt;</p><p>&lt;/cfformgroup&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622412">9</a> by todd
		posted on 2/18/2006 at 4:59 AM
		</div>
		<div class="comment_text"><p>Ray:  This example does not act as expected anymore.  I _know_ it used to work.</p><p>Check out <a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Ftips%2Frecompile.cfm%3AtiMcolEjAvqzczuHSzDXpMRq_fk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/tips/recompile.cfm">http://cfsilence.com/blog/t...</a></p><p>Not only does it _not_ select the tab at all, it forces a recompile every time.  Was there a behavior change after 7.0.1 that affected this?  This was a really great way to prevent a flash form from recompiling.  Could you check with Nimer on this please?</p><p>Your humble reader, <br>Todd</p><p>P.S.  If you help me stop recompiling and get this to work, I'll visit your wishlist tonight! :)</p></div>
	</div>
</div>
		