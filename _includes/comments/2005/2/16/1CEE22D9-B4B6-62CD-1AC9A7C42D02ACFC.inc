
<div class="comment" id="c_1713617189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617189">1</a> by Darryl Lyons
		posted on 2/17/2005 at 4:00 AM
		</div>
		<div class="comment_text"><p>This is big news -- especially the SQL metadata!</p><p>I also like the fact that you can specify the column data types in dynamic queries now. I'm going to run some benchmarks for type-less and typed dynamic queries - you would have to think that the typed dynamic queries would have to be quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617191">2</a> by James Edmunds
		posted on 2/17/2005 at 4:25 AM
		</div>
		<div class="comment_text"><p>Ray, this is really handy for any number of reasons. I am even thinking that it might be worth the trouble to write a CFC that could be temporarily dropped into a given page on some site or other, to get this data for debugging and analysis purposes.</p><p>Thanks for pointing this out, and in such a clear manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617202">3</a> by dan vega
		posted on 2/17/2005 at 9:17 AM
		</div>
		<div class="comment_text"><p>Im not sure you need to write a cfc for this. You could do one of two things.</p><p>1.) dump it at the bottom  of a page &amp;lt;cfdump var="#getMetaData(query)#"&amp;gt;<br>or<br>2.) in your onRequestEnd application event do something like this</p><p>if isDefined('url.qmetadata') dump var="#getMetaData(url.qmetadata)#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617204">4</a> by M.Schopman
		posted on 2/17/2005 at 2:24 PM
		</div>
		<div class="comment_text"><p>I think these additions should be in the featurelist of CFMX also, .. they seem to look nice, but there are so much more than that.</p><p>People working on CF persistence layers will have tears of joy with the SQL metadata, because now you can actually seperate different datasets in persistence layers based on SQL metadata.</p><p>I think the SQL input is the greatest addition in SQL metadata. For caching frameworks, and lazy loading, this is awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617214">5</a> by Shin.Oshima
		posted on 2/23/2005 at 11:37 AM
		</div>
		<div class="comment_text"><p>Great!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617203">6</a> by Ryan Guill
		posted on 7/20/2006 at 9:34 PM
		</div>
		<div class="comment_text"><p>Ray, I know this is an older post, but do you know where I could find a list of all of the possible values for the TypeName that comes in the struct in the array returned by getMetaData() on a query?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617206">7</a> by Raymond Camden
		posted on 7/20/2006 at 9:45 PM
		</div>
		<div class="comment_text"><p>Sorry, no. Although they seem to kind of match with the types from cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617208">8</a> by Ryan Guill
		posted on 7/20/2006 at 9:47 PM
		</div>
		<div class="comment_text"><p>ok, thanks.  It seems very different on different databases...  <br>Im going to try to use this in an enhancement of my qBrowser and was just wondering.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617205">9</a> by Neil Albrock
		posted on 7/10/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>Thanks so much for brining this out.. I have been looking for this information for two days. All I want is the list of columns, in the order I queried them, in order to dynamically build an table of results.</p><p>Thank god it's actually possible, I was losing the will to live.</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617207">10</a> by Ryan Guill
		posted on 7/10/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>Neil, if all you want is a list of columns in order of they way you queried them, use queryname.getColumnNames()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617210">11</a> by Raymond Camden
		posted on 7/10/2007 at 6:36 PM
		</div>
		<div class="comment_text"><p>I don't agree with that Ryan. It may work, but it isn't document. Using undocumented code is never a good idea. It may be fun to play with it, but you are risking your code breaking in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617211">12</a> by Ryan Guill
		posted on 7/10/2007 at 6:41 PM
		</div>
		<div class="comment_text"><p>This is true.  It is somewhat documented though here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F7%2Fhtmldocs%2F00001271.htm%3AINwNMeTR0NPgCDccAsootLl1IzQ&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/7/htmldocs/00001271.htm">http://livedocs.adobe.com/c...</a></p><p>I believe it is actually there for flash/flex integration though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617209">13</a> by Raymond Camden
		posted on 7/10/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>Interesting. I'm not sure I'd consider that "official" though if it isn't listed in the reference. I'd probably consider that an accident.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617212">14</a> by Long Le
		posted on 9/18/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>I am having some issues with CF mail spool locking up and not sending e-mails unless a restart of cf services is done. This happens almost everyday. Was wondering if any knows what the cause of this is and how to resolve it. I've looked all over the place and it all seems to just point to restarting cf services, but that is not a best solution for us as we can't restart the services everyday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617215">15</a> by Raymond Camden
		posted on 9/18/2009 at 6:16 PM
		</div>
		<div class="comment_text"><p>Long, this comment is really off topic for this blog entry. I'd recommend ensuring your server is patched up to the latest version.</p></div>
	</div>
</div>
		