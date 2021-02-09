
<div class="comment" id="c_1713728349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728349">1</a> by cygro
		posted on 12/16/2010 at 12:26 PM
		</div>
		<div class="comment_text"><p>How about using a regular expression:<br>&lt;cfset clean=reReplace(string, "[\$% ]+", "_", "ALL")&gt;</p><p>The result would be: "This_is_stuff_with_things_I_don't_like_it."<br>As long as it's ok when subsequent spaces get stripped to one underline the solution i'd recommend.<br>Regards, Cyrill</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728350">2</a> by Raymond Camden
		posted on 12/16/2010 at 5:20 PM
		</div>
		<div class="comment_text"><p>But the point was - he had different replacement rules. $ and % were removed, but spaces became underlines.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728347">3</a> by Ofeargall
		posted on 12/17/2010 at 1:41 AM
		</div>
		<div class="comment_text"><p>Ray, interesting quandary I'm facing with this solution; the replacement works well but, I wanted to nuke double and single quotes too. I created a test page that pulled some data from the DB for me to work with. In Firebug I could see quotes in the SRC attribute so I put \"" in my search pattern to nuke the double quotes. Didn't work. I looked directly at the data and noticed the data showed &amp;quo... What the heck?</p><p>The trouble was that I am running htmlEditFormat() on my data as it goes into the DB. Weird that firebug would show it as " on the screen and not &amp;quo...</p><p>Now I'm placing &amp;quo to my search string to nuke it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728348">4</a> by JC
		posted on 12/17/2010 at 2:07 AM
		</div>
		<div class="comment_text"><p>ofeargall - if you don't want to do multiple replaces, you should be able to use CHR(39) and CHR(34) (I think that's ' and "). I've used that to strip out newlines and so on, so I expect it will work for quotes as well</p><p>I've never run across the behavior Ray notes and I've used it a lot, but maybe I've just always put the stuff I'm replacing before the stuff I'm stripping because that seems the logical way to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728353">5</a> by JC
		posted on 12/17/2010 at 2:09 AM
		</div>
		<div class="comment_text"><p>Ray, didn't Adobe change the behavior of empty list values in 8 or 9? I seem to recall something about it, but I forget if I got hit by it or just saw it as a curiousity while researching something else (we're still on CF8).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728354">6</a> by Raymond Camden
		posted on 12/17/2010 at 3:57 AM
		</div>
		<div class="comment_text"><p>JC - I believe only arrayToList was updated to support null items. That's all that needed to be updated really. Do the conversion there once if you care about null items and then work with the array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728356">7</a> by Misty
		posted on 5/11/2014 at 1:56 PM
		</div>
		<div class="comment_text"><p>Working on one Code Found there is nothing like ReplaceListNoCase and in my case, it was actually not matching what i have specified in my list1</p><p>so i worked it like this and it worked:</p><p>ReplaceList(lcase(arguments.sta),'rejected,locked,on-hold','1,2,3')&gt;</p><p>Coldfusion 10 onwards</p></div>
	</div>
</div>
		
<div class="comment" id="c_4429577850">
	<div>
		<img src="https://disqus.com/api/users/avatars/chrisbowyer.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4429577850">8</a> by Chris Bowyer
		posted on 4/19/2019 at 10:06 AM
		</div>
		<div class="comment_text"><p>Thanks! So much easier to get my head around than <a href="https://disq.us/url?url=https%3A%2F%2Fcfdocs.org%2Freplacelist%3ASQaf_cLLNOUqzz1rQX28z7FVe1k&amp;cuid=3321886" rel="nofollow noopener" title="https://cfdocs.org/replacelist">https://cfdocs.org/replacelist</a></p></div>
	</div>
</div>
		