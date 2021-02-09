
<div class="comment" id="c_1713729972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729972">1</a> by m@
		posted on 2/23/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>this is why you have multiple domains for your website and spread images,css,js etc accross them<br>example<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfjedi1.com%2Fimages%2Fimage1.jpg%3APW8EDZIEarC894ymHp7_Z7capVc&amp;cuid=3321886" rel="nofollow noopener" title="cfjedi1.com/images/image1.jpg">cfjedi1.com/images/image1.jpg</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcfjedi2.com%2Fimages%2Fimage2.jpg%3AmSEfRImPAg1hQDfn0fSaj_PfHNc&amp;cuid=3321886" rel="nofollow noopener" title="cfjedi2.com/images/image2.jpg">cfjedi2.com/images/image2.jpg</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcfjedi3.com%2Fjs%3AUmfUt-V9bUEdrCg6vlv00cEP7V4&amp;cuid=3321886" rel="nofollow noopener" title="cfjedi3.com/js">cfjedi3.com/js</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcfjedi3.com%2Fcss%3AYk627hgfI40T1Rw0g5qHb_RkmoA&amp;cuid=3321886" rel="nofollow noopener" title="cfjedi3.com/css">cfjedi3.com/css</a><br>Making sure the above domains are cookieless<br>and of course use sprites.<br>this way ya browser (on a fast connection) can download say 10 items at once.<br>of course this won't work for ajax requests accross different domains, but it does make a page load a lot faster</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729973">2</a> by Raymond Camden
		posted on 2/23/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Damn good points m@.</p><p>(I was like - why didn't he give his name - then I sounded it out. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729975">3</a> by Josh
		posted on 2/23/2011 at 8:54 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Have you tried the IE 9 release candidate?  The debugging tools give you quite a bit of information, especially for network requests.  It also supports console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729978">4</a> by Raymond Camden
		posted on 2/23/2011 at 9:02 PM
		</div>
		<div class="comment_text"><p>Got IE9 - just don't use it very often. Glad to hear they added console.*.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729980">5</a> by Rob
		posted on 2/23/2011 at 9:44 PM
		</div>
		<div class="comment_text"><p>The impact of a spread across a CDN is always worth bearing in mind (especially if you're running your AJAX request in true Asynchronous mode) but bear in mind there's a max limit of total requests that you can hit if you're not careful.</p><p>Plus it's quite possible to melt a webserver* by permitting too many simultaneous requests from one client as you lose a natural staggering of traffic that comes with single host throttling.</p><p>BTW - you know there's a 2 line test to see if console. is supported right?</p><p>*And yeah I know a decent webs server should be able to hold it's own but I've killed poorly configured Apache boxes on a number of occasions by ramping up the number of running forked processes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729976">6</a> by Raymond Camden
		posted on 2/23/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>@Rob: The console remark was a bit of a ... snarky comment by me. I've been dinging a few times (ok, many times) on my blog about forgetting console messages. I'm trying to be better about it and removing it. However, in this case, the console messages were an integral part of the testing. Hence the snarky remark.</p><p>Can I blame the lack of (enough) coffee?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729982">7</a> by Rob
		posted on 2/23/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>No need to apologise! I've lost count of the number of times my colleagues have moaned about my "broken ajax" stuff only for me to realise that I've left console traces all over the shop. So now I always wrap in:</p><p>if (window.console &amp;&amp; window.console.log) {<br>    //log msg here<br>}</p><p>or drop:</p><p>window.console||(console={log:function(){}});</p><p>in at the top of the script to stub the console method.</p><p>Either way I get to skip* happily about the office knowing that my Javascript is simple to debug and users in non console browsers won't have any problems :o)</p><p>*and yeah - that would be metaphorical skipping</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729988">8</a> by P Buchanan
		posted on 2/23/2011 at 11:41 PM
		</div>
		<div class="comment_text"><p>@Ray/m@:  You can also setup a subdomain wildcard (so anything that doesn't fit into what you have defined) then you can just generate a random string of characters for the subdomain.  The result is that you can have as many connections as the browser/machine/connection/etc can handle.</p><p>Example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsldjfkjhdfg.datanotion.com%3AYZTp5svUsRNBPfboRaxqMFwwmR4&amp;cuid=3321886" rel="nofollow noopener" title="sldjfkjhdfg.datanotion.com">sldjfkjhdfg.datanotion.com</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fiweikcvl.datanotion.com%3AJniNZAZtqd2Ieg4ImAt34zoYW-I&amp;cuid=3321886" rel="nofollow noopener" title="iweikcvl.datanotion.com">iweikcvl.datanotion.com</a><br>etc...</p><p>Just something I've done in the past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729987">9</a> by Raymond Camden
		posted on 2/23/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>That's slick PB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729989">10</a> by Dave Long
		posted on 2/24/2011 at 7:50 AM
		</div>
		<div class="comment_text"><p>Very interesting post.  I can confirm that on Google Chrome OS 6 requests are allowed through at once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729991">11</a> by Shannon Hicks
		posted on 2/25/2011 at 12:35 AM
		</div>
		<div class="comment_text"><p>The same problem occurs with loading images. On one of my sites, we display like 100 little images per page... And when a browser only request 4 at a time, that takes a long time to load them all.</p><p>The problem with using a random string and a wildcard domain is that the browser then has to do a DNS lookup for every request... which might cancel out the async savings. Also, if what you're requesting is static, you loose some browser caching performance.</p><p>I ended up settling on having 5 subdomains that I randomly picked from. I decided that it was better to load a page more quickly the first time, and a little slower subsequent times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729993">12</a> by Patrick Whittingham
		posted on 3/1/2011 at 6:38 PM
		</div>
		<div class="comment_text"><p>Here is an answer about config of Firefox</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.speedguide.net%2Ffaq_in_q.php%3Fqid%3D231%3ArWJKXqSKYQE_cQOz2tm86_wBb8A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.speedguide.net/faq_in_q.php?qid=231">http://www.speedguide.net/f...</a></p></div>
	</div>
</div>
		