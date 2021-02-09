
<div class="comment" id="c_1713745181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745181">1</a> by jerry
		posted on 3/15/2013 at 2:53 AM
		</div>
		<div class="comment_text"><p>Could you tell us more about the developer version on AWS:</p><p>ColdFusion AMIs are available as Large and Extra-large instance types of AWS. On using an instance type other than Large and Extra-large, developer edition of ColdFusion 10 will be installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745188">2</a> by Raymond Camden
		posted on 3/15/2013 at 3:21 AM
		</div>
		<div class="comment_text"><p>Is that a question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745182">3</a> by jerry
		posted on 3/15/2013 at 4:10 AM
		</div>
		<div class="comment_text"><p>If you have a smaller instance of AWS, apparently the developer version is used, is there a cost? The large instance goes for .15 per hour. Are any CF features not available with the AWS developer version? Generally, what are the pluses and minuses using a developer version in AWS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745185">4</a> by Raymond Camden
		posted on 3/15/2013 at 4:46 AM
		</div>
		<div class="comment_text"><p>Developer edition cannot be used in production, so basically, you need to use Large or X-Large.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745186">5</a> by Gareth Arch
		posted on 3/15/2013 at 8:15 PM
		</div>
		<div class="comment_text"><p>Getting a page not found for half of the page :(</p><p>"Why should you deploy Adobe ColdFusion 10 on Amazon Web Services?"<br>Sorry, this page is not available</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745184">6</a> by Raymond Camden
		posted on 3/15/2013 at 8:23 PM
		</div>
		<div class="comment_text"><p>I'm assuming temporary glitch with the web page? Not seeing an issue myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745189">7</a> by Gareth Arch
		posted on 3/15/2013 at 8:59 PM
		</div>
		<div class="comment_text"><p>Ah, there we go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745187">8</a> by Phillip Senn
		posted on 3/15/2013 at 9:27 PM
		</div>
		<div class="comment_text"><p>I'm trying not to be Mr. Obvious here, but is 0.15/hr = $1314/yr?<br>Or is the thought process that you can fire up an instance to try something out and then turn it back off when you're done?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745183">9</a> by Raymond Camden
		posted on 3/15/2013 at 10:48 PM
		</div>
		<div class="comment_text"><p>I think that's the basic idea of AWS. You spin it up when you need it, take it down when you don't. As an example, imagine your site is going to be featured on the news. You could spin up 10 additional X-Large servers to handle the load, and in two days, kill em.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745191">10</a> by Emmet
		posted on 3/16/2013 at 1:09 AM
		</div>
		<div class="comment_text"><p>I think its both.  At $1300 a year its a deal for Enterprise licensing and support.  Add on the ability to spool up additional AMI's when needed and its a pretty robust setup.   I can see people being disappointed in no standard offering but that's where RAILO comes in these days i guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745192">11</a> by Chris Kellett
		posted on 3/18/2013 at 10:44 AM
		</div>
		<div class="comment_text"><p>I'm in Australia and am trying to get this AMI installed on the localised AZ (asia pacific - Sydney).  The pricing guide has my AZ listed, but when I come to actually spin up and instance (either via EC2 or the 1 click) the AZ listed does not include Sydney.</p><p>It is possible to spinthis up in this AZ?  Maybe I am missing something.  Any help would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745194">12</a> by Pete
		posted on 3/18/2013 at 12:10 PM
		</div>
		<div class="comment_text"><p>This is very good news. I'll be switching from Rackspace Cloud to AWS to make the most of this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745193">13</a> by Raymond Camden
		posted on 3/18/2013 at 2:34 PM
		</div>
		<div class="comment_text"><p>Chris, sorry, but not sure what to suggest here outside of calling Adobe support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745195">14</a> by Pete
		posted on 3/18/2013 at 8:47 PM
		</div>
		<div class="comment_text"><p>Ah it's only on Large and XL instances, admittedly it's the enterprise edition, but that's too costly - shame there's not a standard licence on Medium or Small. I'll just buy a CF10 licence instead!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745196">15</a> by Tavs Dalaa
		posted on 4/5/2013 at 4:08 PM
		</div>
		<div class="comment_text"><p>This is one of the more exciting Adobe CF news I've read in awhile! Many many uses for this, and I'm already discussing with the team how we can move stuff to AWS (which we use for other non-CF related services). Good choices of instance types and fair pricing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3736885179">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0a83Bkru25.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3736885179">16</a> by Nick Way
		posted on 2/1/2018 at 10:43 AM
		</div>
		<div class="comment_text"><p>Does anyone have experience of running CF on AWS? How much ongoing work does it involve once you're set up? Current hosts sometimes suffer with DDos / network issues; does all that stuff magically go away on AWS?</p></div>
	</div>
</div>
		