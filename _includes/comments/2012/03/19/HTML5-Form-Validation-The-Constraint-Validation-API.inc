
<div class="comment" id="c_1713739877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739877">1</a> by Tim Garver
		posted on 3/19/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>Nice demo Ray.<br>I love these new features in HTML5. <br>I was wondering if there is a call back for when the field becomes valid? say its invalid the user had submitted the form, and now they have corrected the error. Does the API have a hook to clear the error messages? or is that something we would have to write as an additional event handler?</p><p>Thanks and yet another great post.</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739878">2</a> by Raymond Camden
		posted on 3/19/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>Awesome question! I had assumed no because I had not found any examples previously, but I looked again, and yes, you can add an event handler for invalid:</p><p>getBySel("#field1").addEventListener("invalid",invalidHandler,false);</p><p>However - this does not run IMMEDIATELY - but only when a check is made. So by default, when you submit the form.</p><p>This is great - and I'll expand this into another blog entry. (It really isn't that complex and this comment explains it, but I'd like to write it up and make a quick demo.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739880">3</a> by Mike
		posted on 3/20/2012 at 7:32 PM
		</div>
		<div class="comment_text"><p>Couldn't you bind to the onBlur or onFocus to have it fire when they click out of the area so they would not have to hit submit to validate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739883">4</a> by Raymond Camden
		posted on 3/21/2012 at 12:05 AM
		</div>
		<div class="comment_text"><p>Sure thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739882">5</a> by A2D
		posted on 7/15/2013 at 8:46 PM
		</div>
		<div class="comment_text"><p>Came across this post while trying to figure out how to use setCustomValidity() with the webshims forms polyfill. While it is a great library, the documentation is not so clear...<br>Anyway, turns out setCustomValidity() will NOT work with webshims if you already set a custom validation message on a field using data-errormessage="custom message".<br>That took ages to figure out - thanks for making this a lot clearer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739886">6</a> by Raymond Camden
		posted on 7/15/2013 at 10:56 PM
		</div>
		<div class="comment_text"><p>No problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739884">7</a> by Dave
		posted on 11/5/2013 at 11:12 PM
		</div>
		<div class="comment_text"><p>WRT the question: Couldn't you bind to the onBlur or onFocus to have it fire when they click out of the area so they would not have to hit submit to validate?</p><p>Could you please help a newbie and provide an example of how to do this?</p><p>To get an idea  I'm looking at the following example code on <a href="http://disq.us/url?url=http%3A%2F%2Fafarkas.github.io%2Fwebshim%2Fdemos%2Fdemos%2Fwebforms.html%3Af93fEXu2r5Pa7fpb_4ULWp-mBDk&amp;cuid=3321886" rel="nofollow noopener" title="http://afarkas.github.io/webshim/demos/demos/webforms.html">http://afarkas.github.io/we...</a> :<br>/*bind to the first invalid element in a form*/<br>$('section.forms-demo').bind('firstinvalid.example1', function(e){ <br>	/*show the invalid alert for first invalid element*/<br>	$.webshims.validityAlert.showFor( <a href="http://disq.us/url?url=http%3A%2F%2Fe.target%3ASX-ghNbfLsTPRQwCKD5NiR3GKUY&amp;cuid=3321886" rel="nofollow noopener" title="e.target">e.target</a> ); <br>	/*prevent browser from showing native validation message */<br>	return false; <br>});</p><p>firstinvalid is an event defined in webforms, so I'm thinking that would be (syntactically) equivalant to the onBlur event.  But what the heck is "example1" ??  Am I on the right track here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739888">8</a> by Raymond Camden
		posted on 11/6/2013 at 3:44 AM
		</div>
		<div class="comment_text"><p>Sure - just change my event handler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739887">9</a> by ????
		posted on 12/18/2013 at 9:20 PM
		</div>
		<div class="comment_text"><p>it's nice code &amp; usefull solution for me. tnx a lot.<br>but 1 question : <br>i use :invalid as pseudo selector instead input in ur code.<br>in my case i have 2 invalid input on form, but when i alert len, 3 is shown. why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739891">10</a> by Raymond Camden
		posted on 12/18/2013 at 9:23 PM
		</div>
		<div class="comment_text"><p>Can you share a link to the HTML so we can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739895">11</a> by Amin
		posted on 12/19/2013 at 12:14 AM
		</div>
		<div class="comment_text"><p>yes. of course. sorry for the late reply. my code is on my localhost. &amp; i try to simplify it :</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FAminPourhadi%2FLe7Pb%2F%3An9M-hJHnvc2o3HzdaA2TH28r5sQ&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/AminPourhadi/Le7Pb/">http://jsfiddle.net/AminPou...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739889">12</a> by Raymond Camden
		posted on 12/19/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>I've tried your fiddle but i can't get it to alert. I hit the Edit link and it just tries to submit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739892">13</a> by Amin
		posted on 12/19/2013 at 4:36 PM
		</div>
		<div class="comment_text"><p>hi. you are right. i update my fiddle :<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FAminPourhadi%2F4MAvM%2F%3AKtufjFw527k1LAHtqqylteSbKXU&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/AminPourhadi/4MAvM/">http://jsfiddle.net/AminPou...</a></p><p>please recheck it. invalid input colored with "yellow". move your mouse on "edit" and see what happen. thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739893">14</a> by Raymond Camden
		posted on 12/19/2013 at 5:15 PM
		</div>
		<div class="comment_text"><p>In Chrome the alert showed 2, not 3. What browser did you test with?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739896">15</a> by Amin
		posted on 12/19/2013 at 5:40 PM
		</div>
		<div class="comment_text"><p>Firefox 25.0.1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739898">16</a> by Raymond Camden
		posted on 12/19/2013 at 6:02 PM
		</div>
		<div class="comment_text"><p>Oh fascinating. In FF, the form element is being marked as invalid in FF but not Chrome. In other words, FF considers the form tag invalid because one of the kids is invalid. Fascinating.</p><p>I'll dig a bit and say more a bit later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739908">17</a> by Raymond Camden
		posted on 12/19/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>Here is a simpler example: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FRxLzM%2F%3AvDrk5URMpNlgRz6Jmnkizu1JDWQ&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/RxLzM/">http://jsfiddle.net/RxLzM/</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739909">18</a> by Amin
		posted on 12/19/2013 at 6:28 PM
		</div>
		<div class="comment_text"><p>ok. helpfull note. thus the exact count of invalid input can get by max(document.querySelector(':invalid') - 1 , 0); in FF.<br>as the FF count them 0,2,3,4,...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739910">19</a> by Raymond Camden
		posted on 12/19/2013 at 6:49 PM
		</div>
		<div class="comment_text"><p>See my latest blog post. I provide a simpler solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739911">20</a> by Amin
		posted on 12/19/2013 at 7:07 PM
		</div>
		<div class="comment_text"><p>perfect. u skip the form although it has invalid input. tnx.<br>can i ask u more question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739913">21</a> by Raymond Camden
		posted on 12/19/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>Technically I skip the Form tag element. Not the entire form. :)</p><p>Yes you can ask another question, but if it isn't related to this blog entry I ask that you use my contact form instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739914">22</a> by Amin
		posted on 12/20/2013 at 1:16 PM
		</div>
		<div class="comment_text"><p>yes. it is technically that i did'nt know before. about "more question" i found my answer by myself. tnx.<br>"check validation of entire form instead of check input element one by one with test() or match()", it's my problem that i thought it's possible but i didn't know how? i appreciate that i found answer of my question in your blog. tnx again &amp; good luck Mr. Ray.</p><p>pardon 4  my poor english.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739918">23</a> by Amin
		posted on 1/2/2014 at 12:31 PM
		</div>
		<div class="comment_text"><p>hi mr. camden. happy new year.<br>i have a question if this blog is where i can ask it. what is the difference between reg expression in js &amp; html5 pattern attribute in style or syntax? if there is no (as i think), what's wrong in my code for validating 12'hours input pattern based on :</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mkyong.com%2Fregular-expressions%2Fhow-to-validate-time-in-12-hours-format-with-regular-expression%2F%3AlAi10EPBKad-hTE0ncuave3a9EU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mkyong.com/regular-expressions/how-to-validate-time-in-12-hours-format-with-regular-expression/">http://www.mkyong.com/regul...</a></p><p>my code is : &lt;input type="text" pattern="(1[012]|[1-9]):[0-5][0-9](\\s)?(?i)(am|pm)"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739916">24</a> by Raymond Camden
		posted on 1/2/2014 at 5:09 PM
		</div>
		<div class="comment_text"><p>Can you specify how it is failing you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739917">25</a> by Amin
		posted on 1/2/2014 at 11:59 PM
		</div>
		<div class="comment_text"><p>any input consider valid :<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FAminPourhadi%2FmAkBa%2F%3Ab5F4KazcH_toldudpsVMHiwGl5A&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/AminPourhadi/mAkBa/">http://jsfiddle.net/AminPou...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739920">26</a> by Raymond Camden
		posted on 1/3/2014 at 12:13 AM
		</div>
		<div class="comment_text"><p>Confirmed. Have you tested the regex in JS to be *sure* it works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739919">27</a> by Raymond Camden
		posted on 1/3/2014 at 12:14 AM
		</div>
		<div class="comment_text"><p>I just tested the regex in JS and it returns an invalid group.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739921">28</a> by Amin
		posted on 1/3/2014 at 12:32 AM
		</div>
		<div class="comment_text"><p>no. i didnt' test it. based on mentioned in the site that i point it above, i thought it's work. but when i delete `(\\s)?(?i)` from pattern it's work fine, only without Space between hh:mm and am|pm and as u can see upper case of am|pm is not valid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739922">29</a> by Raymond Camden
		posted on 1/3/2014 at 12:36 AM
		</div>
		<div class="comment_text"><p>Well there ya go. ;) Next time I'd test. This was a good thread though - now we know that the pattern regex for input tags won't throw any type of error you can check. I may follow up with a blog post on this.</p></div>
	</div>
</div>
		