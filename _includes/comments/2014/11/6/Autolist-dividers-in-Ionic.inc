
<div class="comment" id="c_1714084324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084324">1</a> by Brian Swartzfager
		posted on 11/7/2014 at 5:46 AM
		</div>
		<div class="comment_text"><p>Given that you want to display a flat list (with no hierarchy), I think you end up adding the letters to your array (or at least a copy of the array) one way or another.  You could use the angular.forEach() function to loop through your list in the controller, though.</p><p>But you got me thinking about a slightly different scenario:  what if you wanted the names to be nested under their letter?  Maybe in a situation where you want to toggle the display of names under each letter.  So I did a fork that shows an example of that kind of nesting:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodepen.io%2Fbcswartz%2Fpen%2FlmeBr%3Ae5HXRSGegqwdRMnjBtHuZgboXsw&amp;cuid=3321886" rel="nofollow noopener" title="http://codepen.io/bcswartz/pen/lmeBr">http://codepen.io/bcswartz/...</a></p><p>...Hopefully that link works:  signed up for CodePen about 10 minutes ago (I know, late to the game...).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084328">2</a> by Hawk
		posted on 11/7/2014 at 7:08 AM
		</div>
		<div class="comment_text"><p>Maybe use underscore.js such as groupBy or others to create the nesting? <a href="http://disq.us/url?url=http%3A%2F%2Funderscorejs.org%2F%23groupBy%3AFa7f7x_LuFa6pZdltdZSBjEekUE&amp;cuid=3321886" rel="nofollow noopener" title="http://underscorejs.org/#groupBy">http://underscorejs.org/#gr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084325">3</a> by Zarko
		posted on 11/8/2014 at 3:36 AM
		</div>
		<div class="comment_text"><p>More generic to Angular, there's an alternative which I believe is a better and more powerful way to get divider items in place, especially when they represent *groups*. You can use a custom (ready-made) filter for grouping and two ng-repeats. The divider items will be based on a property of each data object, so you don't need to manually insert (or even remove) them. As such you can get some cool abilities like sorting of groups and within, basically anyway you like.</p><p>Here's are example screenshots of possible result:<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2Fk7s5u3q8y9utki1%2Fgroups.png%3Fdl%3D0%3AXJw4NTja5YnOJlIuD0vXwFppkkc&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/k7s5u3q8y9utki1/groups.png?dl=0">https://www.dropbox.com/s/k...</a></p><p>Technique:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fjuvaz%2F23%2Fedit%3Fhtml%2Cjs%2Coutput%3A1eg-2cOrzACsxUAPgjDwXgRXmas&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/juvaz/23/edit?html,js,output">http://jsbin.com/juvaz/23/e...</a></p></div>
	</div>
</div>
		