
<div class="comment" id="c_1713732626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732626">1</a> by Steven Shongrunden
		posted on 5/30/2011 at 2:02 AM
		</div>
		<div class="comment_text"><p>The mobile spark List has "bounce/pull" effects built into it by default (similar to iOS).  This means that as you scroll into negative or excess space an animation will play to bring the content back into view.  At the top of the List this means returning verticalScrollPosition to zero, and at the bottom of the List this means returning verticalScrollPosition to (contentHeight - height).</p><p>Currently the way to toggle bounce/pull effects is tied to the scroll policies on that List.  The default mobile spark List skin sets verticalScrollPolicy="on" and horizontalScrollPolicy="auto".  This means that the List will always allow vertical scrolling and always have bounce/pull effects in that direction regardless of the content height.  It also means that horizontal scroll and bounce/pull will not be enabled unless the content width is larger than the width.</p><p>It sounds like you don't want to have bounce/pull when no scrolling is needed.  In that case you should set verticalScrollPolicy="auto".</p><p>If you would like an API to turn off bounce/pull effects altogether please vote for this enhancement: <a href="http://disq.us/url?url=http%3A%2F%2Fbugs.adobe.com%2Fjira%2Fbrowse%2FSDK-28843%3ABRq6tqbbk-SyeJcQ7PanPRqPtsw&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.adobe.com/jira/browse/SDK-28843">http://bugs.adobe.com/jira/...</a></p><p>Check out Joan's post on enabling bounce/pull in a List with a horizontal lay: <a href="http://disq.us/url?url=http%3A%2F%2Fbutterfliesandbugs.wordpress.com%2F2011%2F05%2F05%2Fgetting-scrolling-right-in-a-mobile-horizontal-list%2F%3ABob9tAF2cI2e04GWNGc3P90nOVk&amp;cuid=3321886" rel="nofollow noopener" title="http://butterfliesandbugs.wordpress.com/2011/05/05/getting-scrolling-right-in-a-mobile-horizontal-list/">http://butterfliesandbugs.w...</a></p><p>The spec for bounce/pull has a little more information: <a href="http://disq.us/url?url=http%3A%2F%2Fopensource.adobe.com%2Fwiki%2Fdisplay%2Fflexsdk%2FBounce%2Band%2BPull%2BEffects%2Bfor%2BList%2BSpecification%3A4sl_fx9w4KRLG4CWpOZFvhltX2s&amp;cuid=3321886" rel="nofollow noopener" title="http://opensource.adobe.com/wiki/display/flexsdk/Bounce+and+Pull+Effects+for+List+Specification">http://opensource.adobe.com...</a></p><p>And the spec for mobile scrolling might be useful:<br><a href="http://disq.us/url?url=http%3A%2F%2Fopensource.adobe.com%2Fwiki%2Fdisplay%2Fflexsdk%2FMobile%2BList%252C%2BScroller%2Band%2BTouch%3A-gQ6oImx1MA3ukAR0QWSqhKbIlM&amp;cuid=3321886" rel="nofollow noopener" title="http://opensource.adobe.com/wiki/display/flexsdk/Mobile+List%2C+Scroller+and+Touch">http://opensource.adobe.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732632">2</a> by Raymond Camden
		posted on 5/30/2011 at 2:31 AM
		</div>
		<div class="comment_text"><p>While I believe you are correct about the reason behind this, it is not exactly my issue. My list _was_ longer then the view. I wasn't scrolling _past_ the end of the list, I was scrolling in general. Try my 'bad' example. You can see the list is longer then the view. Just try to scroll it a bit and as soon as you let go, it snaps back. To me, that's a bug. I can't imagine why anyone would wan _that_ particular behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732615">3</a> by Steven Shongrunden
		posted on 5/30/2011 at 3:50 AM
		</div>
		<div class="comment_text"><p>The List being larger than the View doesn't enable scrolling.  What is needed is for the List's content size to be larger than its size.  You can't see it because your device's screen size isn't large enough, but you actually are scrolling beyond the end of the List.  Notice in the case when you set height="100%" on the List you see the bottom border of the List, but when you don't set a size you can't see it.  This is because the size of the List is extending off screen.</p><p>Does that make sense?</p><p>The snapping behavior you are seeing is the default behavior in this case in native iOS and BlackBerry PlayBook applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732629">4</a> by Raymond Camden
		posted on 5/30/2011 at 6:20 PM
		</div>
		<div class="comment_text"><p>Hmm. It _kinda_ makes sense. I'll be honest - it isn't your description that is lacking but my brain cells. ;)</p><p>So - there is a logical reason for this. This blog entry still makes sense though - right? I know I ran into this and was confused, and I've seen others run into it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732631">5</a> by Ike
		posted on 8/21/2014 at 8:13 PM
		</div>
		<div class="comment_text"><p>Thanks, I hit this exact same problem and your fix was the solution.</p></div>
	</div>
</div>
		