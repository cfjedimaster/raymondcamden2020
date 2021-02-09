
<div class="comment" id="c_1713736776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736776">1</a> by Michael Zock
		posted on 11/11/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>If all else fails you could always do something wacky like moving around an encrypted WDDX of the cart object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736769">2</a> by Raymond Camden
		posted on 11/11/2011 at 2:40 AM
		</div>
		<div class="comment_text"><p>By moving around, what do you mean? You can't use a cookie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736778">3</a> by andy matthews
		posted on 11/11/2011 at 2:40 AM
		</div>
		<div class="comment_text"><p>The user didn't say this but could you assume that each of the sites share a higher level domain cookie? For example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2F1.com%3AiSD_1OKOHIjuejbaaop7HO38HZ0&amp;cuid=3321886" rel="nofollow noopener" title="1.com">1.com</a><br><a href="http://disq.us/url?url=http%3A%2F%2F2.com%3AMB6mRiFPFcubu3UMGFt_0V5y7OM&amp;cuid=3321886" rel="nofollow noopener" title="2.com">2.com</a><br><a href="http://disq.us/url?url=http%3A%2F%2F3.com%3AiLnTl-f-_a8EKeyBeCazNEd5hfo&amp;cuid=3321886" rel="nofollow noopener" title="3.com">3.com</a></p><p>Each site has an instance of a <a href="http://disq.us/url?url=http%3A%2F%2Fmaster.com%3AEZwCnlZUufwurgnd6hcK8UcJaus&amp;cuid=3321886" rel="nofollow noopener" title="master.com">master.com</a> domain cookie. It's how Google Analytics does it. Then they can reconcile sessions based on the domain cookie and session cookie for each site.</p><p>It's how we did it when I was at Dealerskins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736780">4</a> by Jules Gravinese
		posted on 11/11/2011 at 4:22 AM
		</div>
		<div class="comment_text"><p>I was thinking the same as Andy M. Perhaps another way is to keep the cart content in a database rather than a session or cookie var. Then when you go to another site, you'd have to pass a key in the url (or form) so the new site picks up the cart for the user and continues to run with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736775">5</a> by David Hammond
		posted on 11/11/2011 at 7:38 AM
		</div>
		<div class="comment_text"><p>In general, shopping cart functionality should work for users who are not logged in or registered.  This is not made explicit in the request, but I suspect that's the real difficulty.  The user must be identified only by a cookie (or url token), and since cookies set for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.site1.com%3AvQTAwPOwQVf9YiWjoW7caaADPeg&amp;cuid=3321886" rel="nofollow noopener" title="www.site1.com">www.site1.com</a> can't be read by <a href="http://disq.us/url?url=http%3A%2F%2Fwww.site2.com%3ALgUp2WUVYg3S-AC90kvjHc0QwAU&amp;cuid=3321886" rel="nofollow noopener" title="www.site2.com">www.site2.com</a>, it makes it hard to keep the shopping cart across domains, even if they share the same database server.</p><p>Jules' suggestion of passing a key in the url is good, but only works if the user will only be going from site to site via links.  If someone manually enters "<a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a>" in their browser, it won't work.</p><p>I have dealt with a similar problem in the past in a very inelegant but effective way.  The process is:<br>- Someone goes to <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a>.<br>- If they don't already have a cookie set, they are redirected to a special page on <a href="http://disq.us/url?url=http%3A%2F%2Fsite1.com%3AW2pHXicxjNfRS-KgZhAYgVmQaFI&amp;cuid=3321886" rel="nofollow noopener" title="site1.com">site1.com</a>.<br>- If they have a cookie set on <a href="http://disq.us/url?url=http%3A%2F%2Fsite1.com%3AW2pHXicxjNfRS-KgZhAYgVmQaFI&amp;cuid=3321886" rel="nofollow noopener" title="site1.com">site1.com</a>, they are redirected back to <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a> with the cookie value in the url.<br>- The cookie is set on <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a>, and now the user is known to be the same user on <a href="http://disq.us/url?url=http%3A%2F%2Fsite1.com%3AW2pHXicxjNfRS-KgZhAYgVmQaFI&amp;cuid=3321886" rel="nofollow noopener" title="site1.com">site1.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a>.  If both sites have access to the same database, they can display the same shopping cart on both sites.</p><p>This gets more complicated with 3 or more sites, of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736771">6</a> by andy matthews
		posted on 11/11/2011 at 8:18 AM
		</div>
		<div class="comment_text"><p>David...</p><p>That's why I put forth my suggestion of an overarching master domain cookie. The company would use THAT cookie to access shopping cart data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736773">7</a> by David Hammond
		posted on 11/11/2011 at 5:16 PM
		</div>
		<div class="comment_text"><p>@Andy, sorry, I guess I ignored your idea because I didn't understand it.  How would you share a master domain cookie between <a href="http://disq.us/url?url=http%3A%2F%2Fsite1.com%3AW2pHXicxjNfRS-KgZhAYgVmQaFI&amp;cuid=3321886" rel="nofollow noopener" title="site1.com">site1.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3F%3AZRmEN7u0iJVgGBtd6h_y5x-cZWk&amp;cuid=3321886" rel="nofollow noopener" title="site2.com?">site2.com?</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736782">8</a> by andy matthews
		posted on 11/11/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Dealerskins uses an ASP model. Multiple sites running on the same code base, same server, and same database. When a user visits a site, he gets a cookie from <a href="http://disq.us/url?url=http%3A%2F%2Fsite1.com%3AW2pHXicxjNfRS-KgZhAYgVmQaFI&amp;cuid=3321886" rel="nofollow noopener" title="site1.com">site1.com</a>, and <a href="http://disq.us/url?url=http%3A%2F%2Fmasterdomain.com%3AwtWQLUfIckT3G_aVC4QOnV8J0SM&amp;cuid=3321886" rel="nofollow noopener" title="masterdomain.com">masterdomain.com</a>. When he visits <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a> he gets a cookie from that site, they then check for the existence of a masterdomain cookie. If it's there, they update references in the database. If it's not, then they give him one.</p><p>This let DS track customer usage between car dealership websites and upsell customers on cars they looked at on one site, while they were on the lot of the other site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736774">9</a> by David Hammond
		posted on 11/11/2011 at 6:43 PM
		</div>
		<div class="comment_text"><p>I think I see what you're saying.  But you still can't read cookies from <a href="http://disq.us/url?url=http%3A%2F%2Fsite2.com%3Attca1duQswI3s6FyJ0VgY5JlKVI&amp;cuid=3321886" rel="nofollow noopener" title="site2.com">site2.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fmasterdomain.com%3AwtWQLUfIckT3G_aVC4QOnV8J0SM&amp;cuid=3321886" rel="nofollow noopener" title="masterdomain.com">masterdomain.com</a> in the same page request.  So unless all shopping cart functionality is served from <a href="http://disq.us/url?url=http%3A%2F%2Fmasterdomain.com%3AwtWQLUfIckT3G_aVC4QOnV8J0SM&amp;cuid=3321886" rel="nofollow noopener" title="masterdomain.com">masterdomain.com</a> (e.g. via ajax), you still need some way to transfer identity information between the two domains, such as the mechanism I described.  Or do I continue to miss something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736772">10</a> by JF
		posted on 11/11/2011 at 7:24 PM
		</div>
		<div class="comment_text"><p>I could be wrong but I am 99% sure that master domain is also how the stackexchange (<a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%3A8H1eUk68yPyOU8Dv2cVhflvk8Wg&amp;cuid=3321886" rel="nofollow noopener" title="stackoverflow.com">stackoverflow.com</a>) guys handle their logins.</p><p>You can login on one site and it uses <a href="http://disq.us/url?url=http%3A%2F%2Fstackauth.com%2F%3AH6zMJRKHc408zBlXYKmNToXRlJA&amp;cuid=3321886" rel="nofollow noopener" title="http://stackauth.com/">http://stackauth.com/</a> to store stuff (cookie or local storage I can't quite remember which).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736765">11</a> by JF
		posted on 11/11/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>Ah of course I found the post I was looking for minutes after posting - <a href="http://disq.us/url?url=http%3A%2F%2Fblog.stackoverflow.com%2F2010%2F09%2Fglobal-network-auto-login%2F%3AyFVRQLG9JxEqSuEOvxvEuxRImSQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.stackoverflow.com/2010/09/global-network-auto-login/">http://blog.stackoverflow.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736768">12</a> by Mike Collins
		posted on 11/11/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p>I'd look at CF 9 and CFCache with a distributed cache setup too.<br>If the user is signed in you are all set with follwoing the user.<br>If not logged in, you could write an iframe to go fishing for cart id cookies.  Basically loop thru your pool of sites in the iframe and then use javascript to tell your current site about open carts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736779">13</a> by Brian
		posted on 11/11/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>That third site authentication that Andy discusses is pretty common in environments I've seen -- it's still very hard to maintain session across cluster nodes unless they're sharing the same memory spaces and database backends in a robust way.  A centralized token issuer allows everyone to stay in sync, and the token issuer can better deal with hard session expirations.</p><p>I've seen this in SharePoint environment where, because of the difficulty managing logins using smartcard environments, a user will authenticate into a server for authentication sake, and then it is tokened out and that token is distributed across multiple destination servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736781">14</a> by Michael Long
		posted on 11/12/2011 at 12:47 AM
		</div>
		<div class="comment_text"><p>Seems to me that the best way to do it would be to create a fourth site, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.abc-shopping.com%3Ae_idrVVm0izMHi_Hof9R5Q1vdkQ&amp;cuid=3321886" rel="nofollow noopener" title="www.abc-shopping.com">www.abc-shopping.com</a>.</p><p>Site four would handle the cart and ordering process for all three sites.</p><p>Site 4 would set its own cookies, handle its own login process, and so on. If one of the other sites needed cart info, a small iframe linking to site 4 should do the trick.</p><p>Any "add to cart" links would link to site 4. If the user is logged in, you could also pass an encrypted user id string at that time.</p><p>Site 4 would be also be cheaper to maintain since you only need a cert for a single site, and the cart and order processing code would be on a single server and not cloned across the other 3 site.</p></div>
	</div>
</div>
		