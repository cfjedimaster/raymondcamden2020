
<div class="comment" id="c_1714082898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082898">1</a> by Paul Rowe
		posted on 5/2/2014 at 9:00 PM
		</div>
		<div class="comment_text"><p>One issue that I've run into in the past is that, when you want to return an integer via AJAX, that can give you trouble on the JavaScript side. I've had to encapsulate the integer when I'm returning it in the past, but it may have been due to how I was doing it, whether I was returning it in plain format or not, etc.</p><p>I am not a fan of arrays that are intended to be structs, particularly mixed-type arrays. I expect the mixed-type arrays issue is something that I inherited from my strongly-typed background in C/C++. The arrays pretending to be structs issue is simply a readability issue: If I can't look at the code a year from now and immediately understand what's going on, something must change.</p></div>
	</div>
</div>
		