
<div class="comment" id="c_1713615008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615008">1</a> by Tim Blair
		posted on 10/7/2003 at 6:48 PM
		</div>
		<div class="comment_text"><p>Hmm, interesting.  According to that page:</p><p>"If a PARAM element does reference a remote source of data and you specify true for the NOEXTERNALDATA attribute of the OBJECT element, the value of that PARAM element is not provided to the IPersistPropertyBag interface for the control."</p><p>I have absolutely no idea how the plugins actually *work* in IE, so I wouldn't be able to say whether the fact that it's not passed to the IPersistPropertyBag interface would make a difference or not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614994">2</a> by Raymond Camden
		posted on 10/7/2003 at 6:53 PM
		</div>
		<div class="comment_text"><p>Ends up being I misread the page a bit. A (smarter) coworker brought up that any use of Flash is an external call, in other words, you tell Flash which swf to load. I also misread the use of noexternaldata - it was my impression that setting it to true was simply saying that you weren't using external stuff. I did NOT read it to say that it would ignore the param tags. Well, not ignore, but not pass the persistproperty thingy you mentioned. I guess I should just stop  being lazy and download the IE preview.</p></div>
	</div>
</div>
		