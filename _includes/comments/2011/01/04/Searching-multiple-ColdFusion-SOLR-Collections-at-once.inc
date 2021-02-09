
<div class="comment" id="c_1713728655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728655">1</a> by Julian Halliwell
		posted on 1/5/2011 at 1:52 AM
		</div>
		<div class="comment_text"><p>I reported the maxrows bug a few months ago <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D84068%3Av2krThS-sb1KgIkbhdKiQJ2Nhi8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=84068">http://cfbugs.adobe.com/cfb...</a> but I hadn't noticed the score as varchar problem.</p><p>I also find the suggestions feature behaves oddly when querying multiple collections. It does seem as if the Adobe engineers didn't think through the &lt;cfsearch&gt; "api" very thoroughly when trying to replicate what was supported with Verity.</p><p>Until this is fixed I've tended to consolidate my collections so there's just one, and use filtering where possible. Fortunately Solr's superb performance makes this a lot easier than with Verity, which I could never get to handle large collections reliably (in fact it was rarely reliable full stop).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728682">2</a> by Dominic Watson
		posted on 1/5/2011 at 12:09 PM
		</div>
		<div class="comment_text"><p>I tend to agree with Julian though it's perhaps a little harsh to call out the engineers for not thinking through thoroughly, cfsearch is great for straightforward scenarios, just perhaps over simplified for anything more involved.</p><p>I recently had the fortune to play with using Solr directly with ColdFusion and having done that, the idea of querying against multiple collections doesn't make much sense, it is only necessary here because of cfsearch's simplicity. Great to see the Jedi offering solid workarounds though ;)</p><p>I've started to blog my experience of using Solr directly (it's a real eye opener) here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffusion.dominicwatson.co.uk%2F2010%2F12%2Fapache-solr-or-departing-from-confines.html%3A0W6fOma9xmSIdoF-83kOLTJjlZs&amp;cuid=3321886" rel="nofollow noopener" title="http://fusion.dominicwatson.co.uk/2010/12/apache-solr-or-departing-from-confines.html">http://fusion.dominicwatson...</a></p><p>If nothing else, I'd recommend everyone running through the Solr quick start tutorial here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flucene.apache.org%2Fsolr%2Ftutorial.html%3AW86womrp0_Q4Jueh0HrxWE77mGE&amp;cuid=3321886" rel="nofollow noopener" title="http://lucene.apache.org/solr/tutorial.html">http://lucene.apache.org/so...</a></p><p>d</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728657">3</a> by Julian Halliwell
		posted on 1/5/2011 at 4:08 PM
		</div>
		<div class="comment_text"><p>Hi Dominic</p><p>I'm not sure it is overly harsh to blame the engineers.The "maxrows" attribute isn't particularly advanced usage, and some simple tests would surely have confirmed that it was working as per the docs.</p><p>But we've all made this kind of omission on tight deadlines, and kudos to the CF team for listening and reacting far more quickly and openly than in the past. They do give the impression of really wanting fix issues like this which is great.</p><p>Really looking forward to reading your blog, Dominic. I've been quite impressed with Solr and would love to go in deeper as you've obviously started doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728656">4</a> by dcs
		posted on 1/11/2012 at 8:10 PM
		</div>
		<div class="comment_text"><p>Actually, if you use the Solr web service you can have multiple collections, maxrows, and sorting without the need to grab the full set of results and do a query of queries after the fact. The URL (assuming the same criteria as in the initial post) would look something like this:</p><p>http://localhost:8983/solr/cfref/select/?shards=localhost:8983/solr/cfref,localhost:8983/solr/cfwack&amp;q=cflog&amp;rows=20&amp;fl=*,score</p><p>(Add a sort parameter to change the sort -- you can use score or any other field that is indexed and not multiValue.)</p><p>I heartily recommend this approach as it allows the developer to change the sort and still grab only a set # of results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728658">5</a> by dcs
		posted on 1/11/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>FYI - if you add a sort parameter you have to specify ascending or descending as well (no default). So you might add a sort parameter as follows: &amp;sort=score desc .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728654">6</a> by Raymond Camden
		posted on 6/3/2013 at 5:58 PM
		</div>
		<div class="comment_text"><p>As just an FYI, this is still a bug in ColdFusion 10.</p></div>
	</div>
</div>
		