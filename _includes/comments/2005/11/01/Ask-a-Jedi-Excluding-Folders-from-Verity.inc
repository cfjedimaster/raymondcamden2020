
<div class="comment" id="c_1713622312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622312">1</a> by Scott Slone
		posted on 11/1/2005 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ray-<br>Couldn't you also code it so the output from selected paths don't display on the results page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622322">2</a> by Raymond Camden
		posted on 11/1/2005 at 8:18 PM
		</div>
		<div class="comment_text"><p>Sure. You could use QofQ to hide the data. That would be more useful in a case where you want to hide data based on some variable. I have a blog posting on that as well (just search for verity).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622318">3</a> by Javier
		posted on 11/1/2005 at 8:56 PM
		</div>
		<div class="comment_text"><p>Ray you are da man son! :) I was the one who asked the question as I needed to make sure users cant search certain folders (not database) on my site: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.javier-julio.com%2F%3Ahhu3IWdx5E-QrPtdlkIYHvGLtAI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.javier-julio.com/">http://www.javier-julio.com/</a>. I knew it was your second option that would work I just didn't know how because I used cfindex to do the delete but it was deleting the entire collection. But now I know why! I needed to specify the folder I wanted removed from the index in the key attribute not the urlpath! :( Did some more careful reading in the CF Docs and I figured that would do the trick and it did. Thanks a bunch Ray! I will be in touch again in the future. I plan to release my own set of forums to compete with yours. ;) Take care, and thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622323">4</a> by Raymond Camden
		posted on 11/1/2005 at 9:12 PM
		</div>
		<div class="comment_text"><p>Competition is good. :) When I heard about cfopenbb, or whatever it was called, it made me add more features to Galleon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622319">5</a> by Javier
		posted on 11/1/2005 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ahhh forget cfopenbb, yours I have found very impressive. So impressive that now I code my apps in the same manner. You know how you create an Application variable for each object CFC?? Thats how I do my apps now I have really reaped the benefits. My apps run super fast now and files are so clean and lean. I usually don't have to scroll when viewing them in DW. Thats what I took from your forums and put into mine. I will try to offer something very different.</p><p>I will be contacting you about that hopefully in the next few weeks/months as I would like to use the colors you use on your forums in mine and name after you. Least I can do as I have learned a lot from simply digging through your Galleon Forums code.</p><p>Thanks again for the post about the Verity search. I got it working real well on my site. I know you are a PSP user yourself. Did you get GTA for it yet?? If not make sure that is a priority before anything else. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622314">6</a> by tof
		posted on 11/2/2005 at 3:38 AM
		</div>
		<div class="comment_text"><p>Just a quick note to say that before CFMX7 (I use CF5), you can use cfdirectory recursively though a recursive call to cfmodule :-).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622320">7</a> by Nancy
		posted on 12/7/2013 at 2:40 AM
		</div>
		<div class="comment_text"><p>I have the same question, how do I exclude specific files from being indexed, but I'm using ColdFusion 8 and Verity (I know I should migrate/upgrade to ColdFusion 10 and Solr, but that is not feasible right now.) I have some files that I want excluded from the Verity search. They are not in one folder but if needed I could put them all in 1 folder. In the cfindex command I list the root directory as the key and recurse: yes. So I am searching all the files on the website. In your comment (option 1) you mention to use the recursive call, get the files, then remove the ones you don't want indexed. Does that mean I would keep the cfindex command as is, but then remove the files I don't want indexed? How would I remove those?</p><p>The second option might even be a choice, the site is not that heavily trafficked. I have about 34 files to delete. How would I follow up with a delete operation? Can you give me more detail on this?</p><p>Thanks so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622321">8</a> by Raymond Camden
		posted on 12/7/2013 at 3:00 AM
		</div>
		<div class="comment_text"><p>"How would I remove those?"<br>cfindex has a delete action. It should be as simple as that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622326">9</a> by Nancy
		posted on 12/7/2013 at 11:47 PM
		</div>
		<div class="comment_text"><p>Thank you, Ray! It was as simple as that! It would however be simpler if I could put all 30 file names in the same cfindex delete command in the key field. I tried separating them with commas inside and outside of the " " in the key field, but it didn't work. Are multiple files not an option or am I using the wrong syntax? If not, I'll just create 30 cfindex commands.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622325">10</a> by Raymond Camden
		posted on 12/7/2013 at 11:48 PM
		</div>
		<div class="comment_text"><p>I'm not sure you can do it in one call. Maybe you could try passing a query - that would possible work. You would build a query by hand using queryNew.</p><p>Also - you could keep the list, loop over it, and use cfindex there.</p></div>
	</div>
</div>
		