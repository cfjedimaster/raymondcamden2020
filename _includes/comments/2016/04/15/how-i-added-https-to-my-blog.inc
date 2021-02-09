
<div class="comment" id="c_2625540892">
	<div>
		<img src="https://disqus.com/api/users/avatars/rszehnder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625540892">1</a> by Robert Zehnder
		posted on 4/15/2016 at 5:51 PM
		</div>
		<div class="comment_text"><p>I was thinking of checking out LetsEncrypt, but I didn't see that fine print. Also, you have to do some leg work to get it working with Nginx, which isn't a huge deal, but meh. It is supposed to be possible to renew the cert with the LetsEncrypt shell scripts and crontab so it will "automagically" renew.</p><p>I realize that won't be an issue here, but just putting it out there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625577266">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625577266">2</a> by Pete Freitag
		posted on 4/15/2016 at 6:09 PM
		</div>
		<div class="comment_text"><p>Ray - btw if you use CloudFront, Amazon provides SSL certs for free for your own custom domains, it is super easy to setup and they handle the private key storage, etc. Checkout <a href="https://disq.us/url?url=https%3A%2F%2Fcfdocs.org%2F%3AtrjP0rjTOvlsgPSPnkJrpfYtH80&amp;cuid=3321886" rel="nofollow noopener" title="https://cfdocs.org/">https://cfdocs.org/</a> as an example.</p><p>Also with CloudFront you can control how long things are cached for by using Cache-Control headers, but the whole idea is that you would be caching most of your content there. I'm not sure how your blog is setup these days but you can also tie in S3 events to trigger invalidation requests. Yes the invalidation is not instant but you can make it automatic via their APIs with a little glue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625592718">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625592718">3</a> (In reply to <a href="#c_2625540892">#1</a>) by Raymond Camden
		posted on 4/15/2016 at 6:18 PM
		</div>
		<div class="comment_text"><p>Yeah, I definitely felt that LE would be "possible", but I didn't want to spend much more time on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625615574">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625615574">4</a> (In reply to <a href="#c_2625577266">#2</a>) by Raymond Camden
		posted on 4/15/2016 at 6:31 PM
		</div>
		<div class="comment_text"><p>free cert: Well shoot, I didn't know that. Luckily it was only 16 bucks, so not too big of a deal. To be honest, I didn't mind spending the money, it just bugged me how weird it was to get the damn cert up.</p><p>cache controls: Yep, I kinda learned that a bit when I first tried to update something. :) It all kinda makes sense - but it was a big surprise. In general, I will *rarely* update stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625693078">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625693078">5</a> (In reply to <a href="#c_2625615574">#4</a>) by Pete Freitag
		posted on 4/15/2016 at 7:15 PM
		</div>
		<div class="comment_text"><p>They are "free" but you pay more (1/4 penny more per 10k requests) for HTTPS requests on cloudfront, so they get ya!</p><p>More info about the amazon certs here: <a href="https://disq.us/url?url=https%3A%2F%2Faws.amazon.com%2Fblogs%2Faws%2Fnew-aws-certificate-manager-deploy-ssltls-based-apps-on-aws%2F%3AfbiCPHV1OitDSdgfin0betWHJnA&amp;cuid=3321886" rel="nofollow noopener" title="https://aws.amazon.com/blogs/aws/new-aws-certificate-manager-deploy-ssltls-based-apps-on-aws/">https://aws.amazon.com/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2625695841">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625695841">6</a> (In reply to <a href="#c_2625693078">#5</a>) by Raymond Camden
		posted on 4/15/2016 at 7:17 PM
		</div>
		<div class="comment_text"><p>Well, I'm going to be paying that anyway. I'm currently at about 6k page views per month - if you assume 4-5 images per page view, that's about 20k impressions per month.</p><p>One thing I forgot to mention and I should have - Amazon has a feature where you can get an alert if your bill goes over a threshold. I set one up just for that purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2626845362">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2626845362">7</a> (In reply to <a href="#c_2625577266">#2</a>) by dawesi
		posted on 4/16/2016 at 3:09 PM
		</div>
		<div class="comment_text"><p>another way to get free ssl is to use cloudflare...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2633434553">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vJySOdTgnn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2633434553">8</a> by Michael Cummins
		posted on 4/20/2016 at 1:14 PM
		</div>
		<div class="comment_text"><p>I'm having trouble getting Let's Encrypt X3 to work with cfhttp get on CF 11.  I used keytools to import the ISRG, DST and Let's Encrypt X3 certs into the castore, but I'm still getting "unable to find valid certification path to requested target".</p><p>Do you experience that as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2633456959">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2633456959">9</a> (In reply to <a href="#c_2633434553">#8</a>) by Raymond Camden
		posted on 4/20/2016 at 1:29 PM
		</div>
		<div class="comment_text"><p>I'm not using CF at all for this blog. Last time I had to use a cert w/ cfhttp it was a pain - but it worked. But it was a few years back. Sorry I can't help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2637224297">
	<div>
		<img src="https://disqus.com/api/users/avatars/ericlawrence.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2637224297">10</a> by Eric Lawrence
		posted on 4/22/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>No, HTTPS-first is not the default behavior of modern browsers. You should enable HSTS preload and continue to serve HTTP/301s for non-secure requests. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2637284991">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2637284991">11</a> (In reply to <a href="#c_2637224297">#10</a>) by Raymond Camden
		posted on 4/22/2016 at 3:25 PM
		</div>
		<div class="comment_text"><p>Ok, then how do you explain what I saw? Note - afaik - now all requests should auto 301 to https.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659768252">
	<div>
		<img src="https://disqus.com/api/users/avatars/philhannent.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659768252">12</a> by Phil Hannent
		posted on 5/5/2016 at 12:34 PM
		</div>
		<div class="comment_text"><p>It should be noted that the 90 day expiry is actually a security feature. You want certificates to expire sooner. This narrows the window of how long a certificate is available for cracking or if a key were leaked your exposure is limited. Certificate revocation checks are limited and that 90 days is better than 365.</p><p>Also the 90 days effectively means you need to automate the process. Rather then once a year having a half written note about the process.</p><p>The Let's Encrypt scripts I have used auto-renew at 60 days, a daily tasks checks the age and then if it's over 60 it will renew the certificate, so there is plenty of time to make sure it stays up and running.</p></div>
	</div>
</div>
		