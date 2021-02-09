
<div class="comment" id="c_1713709971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709971">1</a> by John beynon
		posted on 11/18/2008 at 3:57 AM
		</div>
		<div class="comment_text"><p>I've been playing with Stax for a while now. It's not without it's limitations - being built on EC2 means no persistant storage (at the moment) so no writes to disk - or at least peristant ones.</p><p>I've got mangoblog up there to play with at <a href="http://disq.us/url?url=http%3A%2F%2Fmangoblog2.jbeynon.staxapps.net%2F%3AX5WK0D3dwi_5yeAPbSjAOTHwMxo&amp;cuid=3321886" rel="nofollow noopener" title="http://mangoblog2.jbeynon.staxapps.net/">http://mangoblog2.jbeynon.s...</a> but it's certainly a cool service and i'll carry on working with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709974">2</a> by Raul Riera
		posted on 11/18/2008 at 4:03 AM
		</div>
		<div class="comment_text"><p>The idea to solve the persistant issue is to back it up with Amazon S3, you know.. Amazon wants to eat after all :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709963">3</a> by Devin
		posted on 11/18/2008 at 4:37 AM
		</div>
		<div class="comment_text"><p>Couldn't data persistance be handled through the apache derby database?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709977">4</a> by O?uz Demirkap?
		posted on 11/18/2008 at 4:45 AM
		</div>
		<div class="comment_text"><p>John, do you have Railo at your link?</p><p>We also have big interest for EC2 on our applications and trying to figure out "the easy way".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709973">5</a> by Henry Ho
		posted on 11/18/2008 at 7:38 AM
		</div>
		<div class="comment_text"><p>does Stax the Vendor have a website?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709978">6</a> by fgwenger
		posted on 11/18/2008 at 8:18 AM
		</div>
		<div class="comment_text"><p>Isn't the Elastic Block Store at Amazon the way to persist information?  <a href="http://disq.us/url?url=http%3A%2F%2Faws.amazon.com%2Febs%2F%3AizwGeghVns9bL-GAkf34nktQ9hM&amp;cuid=3321886" rel="nofollow noopener" title="http://aws.amazon.com/ebs/">http://aws.amazon.com/ebs/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709980">7</a> by John beynon
		posted on 11/18/2008 at 12:28 PM
		</div>
		<div class="comment_text"><p>stax is at <a href="http://disq.us/url?url=http%3A%2F%2Fstax.net%3AA791lqT0v4r1EkxLstZYrIn8oSI&amp;cuid=3321886" rel="nofollow noopener" title="http://stax.net">http://stax.net</a>. Amazon EBS is the way do do the persistance but the beauty of Stax is that the whole 'Amazon' side of their service is abstracted away so you don't deal with anything on it. Until they offer storage that the apps can write to, ie uploading images, assets through the app etc then it can't be done. But interestingly, how many people build apps that need to be able to write to disk? I know the majority of ours do in some form or another.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709979">8</a> by johnb
		posted on 11/18/2008 at 2:40 PM
		</div>
		<div class="comment_text"><p>that should be <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stax.net%2F%3AefpNs2xfD-0HvT2mQWmZiNE5IXM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stax.net/">http://www.stax.net/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709982">9</a> by Gary Gilbert
		posted on 11/18/2008 at 4:44 PM
		</div>
		<div class="comment_text"><p>Back in September Railo released a EC2 image and supports AS3 as well</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.garyrgilbert.com%2Fblog%2Findex.cfm%2F2008%2F9%2F19%2FEC2-Railo-3-Image-Available%3AMNFl6e4GDO7zpfGry_FJncGDzrE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.garyrgilbert.com/blog/index.cfm/2008/9/19/EC2-Railo-3-Image-Available">http://www.garyrgilbert.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709981">10</a> by Spike Washburn
		posted on 11/18/2008 at 10:40 PM
		</div>
		<div class="comment_text"><p>As Ray mentioned, Stax is currently in private beta, but anyone who wants an invite can just drop me a note on the Stax developer site: <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.stax.net%3AuZ_QJxURHOwjFq8wjRTvIp2hwbc&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.stax.net">http://developer.stax.net</a>.  To fill in the gaps a bit, Stax is providing tools and services that make it extremely for developers to build, deploy, and maintain elastic applications on EC2. Stax is designed to make EC2 much more approachable to web developers. Stax supports a range of Java-based web technologies and we've recently partnered with Adobe to support ColdFusion and Flex/BlazeDS.</p><p>Stax is focused on the emerging concept of "elastic" applications, which means its not designed to run all CF applications.  John mentioned the no-file persistence limitation, which is a trade-off required to leverage the flexibility of deployments offered by the Stax cloud.  Stax provides MySQL database support to give apps a persistent location to store data, and S3 is a great place to store files.  These flexible deployments will allow Stax to scale your application deployment costs from very low to very high, based on exactly the computing power you need for your applications.</p><p>The comparison to pre-built AMIs will always popup, but anyone who has actually used EC2 for building and deploying web applications will be shocked at how much easier and more flexible it is to use Stax versus the standard approach of building and launching AMIs.</p><p>I'll be presenting Stax at the Adobe MAX Flash Platform booth in the pavilion today (Tues 11/18) from 2-3:30, so stop by if you're at MAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709983">11</a> by Michael Long
		posted on 11/19/2008 at 10:39 AM
		</div>
		<div class="comment_text"><p>"You can download a copy of the image, extract it (it is a zip), do your edits, then redeploy it."</p><p>I want to download and then reupload a zipped copy of my application or website every time I want to make a change? No thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709984">12</a> by Raymond Camden
		posted on 11/19/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>@ML - This really isn't much different than what you should be doing for production anyway. You don't edit live on production. You edit, and test, on development. In this case, you have to get the package from Stax first. I'm not sure if you can keep a local copy. Maybe you can, and if so, then this is a non-issue, agreed? Even if not, the 'I have to download a zip' part is FAR less trouble compared to having to maintain the hardware. Once you go cloud, you never go back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709986">13</a> by johans
		posted on 7/15/2010 at 1:36 PM
		</div>
		<div class="comment_text"><p>Ray - did anything more come of CF on EC2. I have not heard anything nor can I find any official Adobe CF AMI for EC2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709990">14</a> by Raymond Camden
		posted on 7/15/2010 at 3:30 PM
		</div>
		<div class="comment_text"><p>I've not heard anything recently.</p></div>
	</div>
</div>
		