
<div class="comment" id="c_1713677016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677016">1</a> by Adam Tuttle
		posted on 2/12/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>Ray, what exactly does adding that line accomplish, in the statistics that are tracked? It sounds like it could be something I've been trying to figure out for a client. Could you provide some sort of sample of the data or the way the data is filtered before and after the change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677019">2</a> by Raymond Camden
		posted on 2/13/2008 at 1:28 AM
		</div>
		<div class="comment_text"><p>Oh sorry - I should have explained it better. It treats *.riaforge.org as ONE domain. This means I won't have referers to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.riaforge.org%3AlgrVqWyaj_ala7NWcqsj4QO8cqE&amp;cuid=3321886" rel="nofollow noopener" title="www.riaforge.org">www.riaforge.org</a> from <a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.riaforge.org%3AEvJ9qTJi9-tw8mjUHPLY3uhslmw&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.riaforge.org">blogcfc.riaforge.org</a> for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677020">3</a> by Dave Eckman
		posted on 2/14/2008 at 2:03 AM
		</div>
		<div class="comment_text"><p>By default Google will set a first party cookie to the full domain that you are accessing.</p><p>For example, if you were accessing <a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.riaforge.com%3AcSe1WcaUcyQ7N67k2R8ef1tXJpE&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.riaforge.com">blogcfc.riaforge.com</a>, that's what the cookie would be set to. Then, when you change to something else like <a href="http://disq.us/url?url=http%3A%2F%2Ffarcry.riaforge.com%3AO4k9_vCKe-nRXz2Hc943PxwIWy8&amp;cuid=3321886" rel="nofollow noopener" title="farcry.riaforge.com">farcry.riaforge.com</a>, Google will set a new cookie to that domain.</p><p>Unfortunately the side affect of this is that each time a new cookie needs to be set, GA considers you a new user/visitor.</p><p>By adding the line of code I gave to Ray, that allows GA to set the cookie at the root domain, which all the sub-domains can access and results in you being tracked as an individual user, in one GA profile, across all the sub-domains.</p><p>There is also an option available if you want to track people across totally different domains as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677023">4</a> by Adam Tuttle
		posted on 2/14/2008 at 7:07 PM
		</div>
		<div class="comment_text"><p>Thanks to both Ray and Dave. I had no idea this sort of option existed and I've since done some googling (ironic?) and found the documentation.</p><p>What I need to do is aggregate statistics across distinct domains, which I haven't found to be explicitly listed as possible in the docs, but I'm going to try the method for tracking users across domains and see how that works out for me.</p></div>
	</div>
</div>
		