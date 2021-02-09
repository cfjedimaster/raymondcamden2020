
<div class="comment" id="c_1713649333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649333">1</a> by Peter J. Farrell
		posted on 1/19/2006 at 8:56 PM
		</div>
		<div class="comment_text"><p>Ironically, I switched from Jrun+CF to a more "simple" setup last night except I didn't have any problems with the Apache connector as you describe.  I did switch because of a problem with the j-connector database driver for MySQL.  I couldn't get it to work at all.  I finally got the 3.2.0-alpha of the driver to work instead of the 3.1 verson. Strange?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649338">2</a> by Luis Fernando Majano
		posted on 1/19/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>Peter,</p><p>I have the 3.1 on my Jrun+CF and working good with MySQL 5.0, I just placed the jar file in the {jrun_dir}/servers/lib directory. Restarted the instance and done. Placing it there, makes the driver available to all instances on JRUN.</p><p>I just upgraded to the 3.2.0-alpha, same procedure.  Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649339">3</a> by Peter J. Farrell
		posted on 1/19/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>Thanks Luis, I have originally put the driver there as the technote states(and just about every Lib directory I could find when that didn't work).  Clearly, I may have done something wrong.  Maybe it was because I'm connecting to a 4.1 MySQL DB.  I know it used to work with the 3.1.16 driver, however I could only find the 3.1.17 driver on my system (due to some upgrades, etc.).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649340">4</a> by Tom Cornilliac
		posted on 1/19/2006 at 10:21 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm curious, what prompted the switch?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649342">5</a> by Raymond Camden
		posted on 1/19/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>Simplicity. ;) Multiple servers is more powerful, and "Better", but to be honest I only went there cuz I was having some trouble with the CFC Adapter alpha. I got past that so now I'm back to a simpler setup.</p></div>
	</div>
</div>
		