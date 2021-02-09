
<div class="comment" id="c_1713716179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716179">1</a> by PaulH
		posted on 6/17/2009 at 9:35 AM
		</div>
		<div class="comment_text"><p>i've always used/modified nimer's oldy but goody datagrid:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mikenimer.com%2Findex.cfm%2F2006%2F10%2F3%2FBackgroundRowColor-DataGrid-component%3AnroFPuGKDdZN1O364DJc8k6APW4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mikenimer.com/index.cfm/2006/10/3/BackgroundRowColor-DataGrid-component">http://www.mikenimer.com/in...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716183">2</a> by JeremyH
		posted on 6/17/2009 at 1:18 PM
		</div>
		<div class="comment_text"><p>I believe you need an "else{this.styleName='new'}" on your external renderer.  If you had enough data to scroll through the data grid, eventually, all rows would be 'old' since there is no code that sets them to 'new'.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fflex%2Farticles%2Fitemrenderers_pt1.html%3AaW98Y9IpEqN-DiN0Ne1d6qW1HNA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/flex/articles/itemrenderers_pt1.html">http://www.adobe.com/devnet...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716181">3</a> by Raymond Camden
		posted on 6/17/2009 at 3:25 PM
		</div>
		<div class="comment_text"><p>Shoot, Jeremy, you are right. Unfortunately, the fix didn't work. My custom renderer now has:</p><p>override public function set data(value:Object):void {<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fsuper.data%3A5KDCHbHjC3TCa3ILeBWsbvNC9Ls&amp;cuid=3321886" rel="nofollow noopener" title="super.data">super.data</a> = value<br>	if(value.age &gt; 21) this.styleName="old"<br>	else this.styleName="new"</p><p>}</p><p>But it doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716182">4</a> by Raymond Camden
		posted on 6/17/2009 at 3:27 PM
		</div>
		<div class="comment_text"><p>Wait - I did a shift reload and it helped. Thanks Jeremy - I'll update the blog post in case folks don't read the comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716180">5</a> by Gary Funk
		posted on 6/17/2009 at 5:12 PM
		</div>
		<div class="comment_text"><p>Thank you for the graet post and also for pointing out this link: <a href="http://disq.us/url?url=http%3A%2F%2Fweblogs.macromedia.com%2Fpent%2Farchives%2F2007%2F02%2Fcoloring_the_ba.html%3A8IpFbcncTIxGj8xDKnKgYLbb-Ig&amp;cuid=3321886" rel="nofollow noopener" title="http://weblogs.macromedia.com/pent/archives/2007/02/coloring_the_ba.html">http://weblogs.macromedia.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716178">6</a> by Deepak
		posted on 7/4/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>Thanks for the solution. I was searching that thing for so long .. thanx buddy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716185">7</a> by Pankaj
		posted on 10/29/2009 at 11:00 AM
		</div>
		<div class="comment_text"><p>Thanks you. your code very helpful . got my solution.</p></div>
	</div>
</div>
		