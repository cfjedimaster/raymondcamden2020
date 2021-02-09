
<div class="comment" id="c_1713724340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724340">1</a> by Todd Rafferty
		posted on 5/17/2010 at 9:39 PM
		</div>
		<div class="comment_text"><p>Ray, I don't want to complain about the useful demo, but you're exposing people's email addresses in the dump. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724341">2</a> by Raymond Camden
		posted on 5/17/2010 at 9:40 PM
		</div>
		<div class="comment_text"><p>Ugh, your right. Will fix it up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724444">3</a> by Raymond Camden
		posted on 5/17/2010 at 9:44 PM
		</div>
		<div class="comment_text"><p>Updated. Thanks again Todd!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724465">4</a> by Todd Rafferty
		posted on 5/17/2010 at 9:46 PM
		</div>
		<div class="comment_text"><p>No problem, you can delete my comments. *waves hand* this comment thread never happened.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724458">5</a> by salvatore fusto
		posted on 5/18/2010 at 10:27 AM
		</div>
		<div class="comment_text"><p>Ray, very usefull post, of course.<br>i noted that the autocomplete works searchs all occurrence of the typed text: if you type 'aba' it will retorn all occurences of this string, everywhere in the name.<br>is it possible to change thes behaviour, using wild card:<br>1) 'aba' returns name aba<br>2)?aba (or ??aba or ?aba? ) with ? standing for 1 character?<br>3)*aba (names ending with aba)<br>4)aba* (names staring with aba)<br>4)*aba* (names containing aba)<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724459">6</a> by Raymond Camden
		posted on 5/18/2010 at 2:52 PM
		</div>
		<div class="comment_text"><p>Yes - you can do any of those. Since you control the search, you control the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724457">7</a> by Kim Belanger
		posted on 5/19/2010 at 9:48 AM
		</div>
		<div class="comment_text"><p>Very nice and handy for lazy me thanks !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724453">8</a> by Blog HTML
		posted on 5/27/2010 at 10:01 PM
		</div>
		<div class="comment_text"><p>Thanks for providing me with those valuable html codes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724456">9</a> by dcs
		posted on 6/22/2010 at 11:08 PM
		</div>
		<div class="comment_text"><p>Thanks for the helpful information. Your example worked perfectly, although I have one caveat: if you have debugging information turned on in CF admin, the autocomplete will not work since the data returned will no longer be JSON data (it will have the debugging information appended to it). You can get around this by using &lt;cfsetting showdebugoutput="false" /&gt; in your remote method or by writing a CFML template as a wrapper for that method, again using &lt;cfsetting&gt;. I do not think there is an equivalent for CFSETTING in CFSCRIPT however.</p><p>It took me a couple of days to figure out why my autocomplete was working for some people and not for others, so hopefully this comment is of help to someone else out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724464">10</a> by Nic
		posted on 8/19/2010 at 12:44 PM
		</div>
		<div class="comment_text"><p>Thanks for that this is great<br>I have spend hours trying to understand why my html code in the label variable was showing as &lt;img src......<br>and it looks like there is a bug with later version of the ui<br>mine was using<br> &lt;script src="jqueryui/js/jquery-ui-1.8.4.custom.min.js"&gt;&lt;/script&gt;</p><p>so i took yours from this demo and it worked<br> &lt;script src="jqueryui/js/jquery-ui-1.8.custom.min.js"&gt;&lt;/script&gt;</p><p>Not sure why this was happening but it is solved now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724460">11</a> by Steve Gordon
		posted on 11/16/2010 at 8:29 AM
		</div>
		<div class="comment_text"><p>thanks for putting this together.</p><p>I wanted to put a post out there for anyone else who might be new to JSON like myself...</p><p>I was pulling my hair out trying to figure out why the autocomplete data was not being displayed.  Firebug showed that data was being returned and I couldn't figure out why.</p><p>Then I looked a little closer at firebug and saw this...</p><p>//[{"brandID":113,"value":"Arte Cubano"},{"brandID":11,"value":"Arturo Fuente"}...]</p><p>I then realized that it was not displaying because in the CF Administrator settings I had "Prefix serialized JSON with //".</p><p>As soon as I disabled that in the Administrator, it worked beautifully.</p><p>Nothing earth-shattering, but I hope it saves someone an hour and hair.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724455">12</a> by Raymond Camden
		posted on 11/16/2010 at 8:31 AM
		</div>
		<div class="comment_text"><p>As just an FYI, when you use CF's built in Ajax controls, it knows this and strips it away. And if for some reason you could not turn it off (like on an ISP), you could tell jQuery to remove it too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724469">13</a> by Steve Gordon
		posted on 11/16/2010 at 11:33 AM
		</div>
		<div class="comment_text"><p>Just ran across your insideRIA article about ajaxSetup -- problem solved.</p><p>Thanks.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Finsideria.com%2F2009%2F04%2Fplaying-with-jquerys-ajaxsetup.html%3Am5E74iYCz26JUXsVvkBjqsvPQps&amp;cuid=3321886" rel="nofollow noopener" title="http://insideria.com/2009/04/playing-with-jquerys-ajaxsetup.html">http://insideria.com/2009/0...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724454">14</a> by Steve Gordon
		posted on 11/20/2010 at 1:06 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm new to jQuery...</p><p>When I clear the text from autocomplete, I also want to clear the value of the hidden field.</p><p>How might I be able to get that done?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724463">15</a> by Raymond Camden
		posted on 11/22/2010 at 4:42 AM
		</div>
		<div class="comment_text"><p>Probably by adding this:</p><p>$("#name").change(function(e) {<br>  if($(this).val() == "") $("#email").val("");<br>});</p><p>I wrote this by hand so it may have a typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724461">16</a> by Jeff Coughlin
		posted on 1/7/2011 at 9:54 PM
		</div>
		<div class="comment_text"><p>Just so folks know, outputting HTML in the autocomplete box seems to have changed/broken in a later release of jQuery UI (not sure which version).  Ray's example here uses v1.8 and it works fine.  I'm using 1.8.7 and it converts the opening and closing tags to their xml-formatted equivalent (less than and great than symbols get converted to &amp;lt;, etc).  Not sure if this is a feature or a bug, but something to keep in mind.</p><p>If anyone knows of a good workaround, please post it here for others to enjoy :).  I was thinking of writing some js to loop over the results and attempt to convert it back to HTML, but was too lazy :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724468">17</a> by Raymond Camden
		posted on 1/7/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>Thanks for letting us know, Jeff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724462">18</a> by jen
		posted on 3/3/2011 at 11:34 PM
		</div>
		<div class="comment_text"><p>Posted a workaround for post-1.8 here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwp.me%2FpBHhc-eY%3Acx_7UuDrAtOJ0PYgO-7wY4Ks06A&amp;cuid=3321886" rel="nofollow noopener" title="http://wp.me/pBHhc-eY">http://wp.me/pBHhc-eY</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724470">19</a> by Raymond Camden
		posted on 3/11/2011 at 3:42 AM
		</div>
		<div class="comment_text"><p>Thanks. It's too bad this change was made. It seems a bit silly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724471">20</a> by Tim
		posted on 5/13/2011 at 5:31 AM
		</div>
		<div class="comment_text"><p>Hoping someone encountered a similar issue with jquery autocomplete. My code is very similar to the example however my cfc is returning an array (1dim). All is good with character data; however my results are mostly numeric. This seems to confuse the autocomplete... note my response from firebug..</p><p>[1000110.74,1000110.75,1000124.01,1000224.64,1000225.64,1000230.34,1000230.74,1000232.17,1000239.17,1000239.2,1000289.17,1000289.2,1000547.85,1000627.44,1000627.45,"1000627.6a9 ",1000627.85,1000627.88,1000717.16,1000745.88]</p><p>Notice the only item displayed in my autocomplete is the result found in double quotes (above).</p><p>My data column from the query is varchar defined datatype.</p><p>Anyone think of a work-a-round?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724474">21</a> by Tim
		posted on 5/13/2011 at 5:33 AM
		</div>
		<div class="comment_text"><p>Of course the post cuts out the part needed... here is the response data again broken up.</p><p>[1000110.74,1000110.75,1000124.01,1000224.64,1000225.64,<br>1000230.34,1000230.74,1000232.17,1000239.17,1000239.2,<br>1000289.17,1000289.2,1000547.85,1000627.44,1000627.45,<br>"1000627.6a9 ",1000627.85,1000627.88,1000717.16,<br>1000745.88]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724467">22</a> by Tim
		posted on 5/13/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>What I came up with: return an array of structs.</p><p>Works (with char &amp; numerics):<br>&lt;cfset var result = arrayNew(1) /&gt;<br>&lt;cfloop query="qryName"&gt;<br> &lt;cfset timStruct = StructNew() /&gt;<br> &lt;cfset timStruct["label"] = qryName.column/&gt;<br> &lt;cfset arrayAppend(result, timStruct) /&gt;<br>&lt;/cfloop&gt;</p><p>Does not work (with numerics):<br>&lt;cfset var result = arrayNew(1) /&gt;<br>&lt;cfloop query="qryName"&gt;<br> &lt;cfset arrayAppend(result, qryName.column) /&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724476">23</a> by JF Laplante
		posted on 8/17/2011 at 7:07 AM
		</div>
		<div class="comment_text"><p>Just a little warning.</p><p>I volontary stayed at Coldfusion 9.00 because CF 9.01 broke too many of my cfgrids as commented by many at the end of this post:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F7%2F13%2FColdFusion-901-Released%3ATf6dNvOmYPajDByPfkNBtQaVaGU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/7/13/ColdFusion-901-Released">http://www.coldfusionjedi.c...</a></p><p>However, for this autocomplete to work with a remote datasource using a cfc, one need to be at CF 9.01 because 9.00 doesn't work.</p><p>It's kind of a hard choice when you need the grids to be working and you need to integrate some advanced autocomplete features at the same time.</p><p>More than a year after 9.01's release they still haven't fixed that...  Well...Time to move to Jquery or something else for the grids.</p><p>As usual, thanks Ray for the really good stuff you put on here.  It is really helpful.</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724475">24</a> by shane hahn
		posted on 2/10/2012 at 9:08 PM
		</div>
		<div class="comment_text"><p>What would be the best way to force users to select from the JSON and not be able to enter whatever they want?</p><p>I'm using this to search over 5k employees.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724472">25</a> by shane hahn
		posted on 2/10/2012 at 9:47 PM
		</div>
		<div class="comment_text"><p>This does what I was looking for:<br>	//require that users select from the list and not type their own entry. usage:(class="autocomplete")<br>	  $('.autocomplete').autocomplete({<br>		change: function( event, ui ) {<br>			  if ( !ui.item ) {<br>					$(this).val('');<br>			  }<br>		}<br>	  });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724473">26</a> by Raymond Camden
		posted on 2/11/2012 at 7:07 PM
		</div>
		<div class="comment_text"><p>Glad you got it. Was on the road all day yesterday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724466">27</a> by Mike
		posted on 3/6/2012 at 7:52 AM
		</div>
		<div class="comment_text"><p>Hi Ray, great tutorial. I actually just coded the exact same thing today in PHP and the end result really produces a "wow".</p><p>However! What do you think about all those requests that have to happen? Each image is a request made to gravatar, which although fast, still represents a problem on an autocomplete that should be as responsive as possible.</p><p>I'm trying to think of a way of maybe caching the resulting images? I don't think that would work, unless I made a job that would cache each user's gravatar (in db or memory) and then the response  would including it in the src as Base64 encoded data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724481">28</a> by Raymond Camden
		posted on 3/6/2012 at 9:57 AM
		</div>
		<div class="comment_text"><p>Well, I'd imagine the 2nd request for gravatar X would be cached, wouldn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724482">29</a> by Jeff Coughlin
		posted on 3/6/2012 at 10:43 AM
		</div>
		<div class="comment_text"><p>Well, Mike's right.  The client machines will make a ton of remote hit requests.  Gravatar is pretty darn fast (probably a cdn), so I wouldn't worry about it here.</p><p>But for argument's sake (for scenarios where it either might not be fast - say it wasn't gravatar, or your users are behind a firewall where they can't access the remote data) what I'd do is maybe have the image tags src attribute value refer to a .cfm file on the server (or in your case, a .php file) with the url variables needed.  Then you have the cfm file do a conditional statement:  do I have the cached data?  If yes, show the stored image from my server, if not, go to the remote site, store the image in a directory and store a key:value pair of data in a cached variable that has information of the hash and maybe image filename (or something to that affect - I don't recall offhand what gravatar sends... it's been a couple years since I played with it).  Either way, it should be pretty simple to do.  You can cache the data in either the app scope, ehcache, ram disk, etc (I'm not sure what options PHP has for caching, but I'm assuming they have something similar).  You'll also want to consider what happens when you clear the cache (ie. restart CF), so storing the data in a DB as well might not be a bad idea (then on app init you can create the cache again from the DB).  Anyway, food for thought :).</p><p>Regarding the firewall example above: since the cf server is the one making the request to get the image, I'd have the firewall grant access to the CF server to get the remote images and store them where the user/client machines can view them from the web server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724480">30</a> by Mike
		posted on 3/7/2012 at 3:04 AM
		</div>
		<div class="comment_text"><p>Jeff's onto what I was talking about. The firewall is an issue I hadn't even considered yet, but could definitely be a concern in my case. I was mainly worried about # of requests.</p><p>I might be wrong, but I think your solution doesn't necessarily reduce the number of requests, it just routes them to my server instead. This wouldn't greatly improve performance on the user-end. I think what you have proposed is probably what Gravatar's coders have done on their end to make responses really snappy.</p><p>I have tested this out with Gravatar and if I limit my results to ~25 users, I barely notice a hitch loading gravatars vs. just plain text.</p><p>One optimization that can be done is to store the md5'd version of the email address in the database ... if I'm not mistaken md5 can take up a lot of cycles to compute and that precomputation could speed up performance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724479">31</a> by Jeff Coughlin
		posted on 3/7/2012 at 4:45 AM
		</div>
		<div class="comment_text"><p>&gt; I might be wrong, but I think your solution doesn't necessarily reduce the number of requests, it just routes them to my server instead. This wouldn't greatly improve performance on the user-end.<br>---</p><p>Lol.  They are separate images...  so, yes, they are separate requests from the client to the server.  Unless you know of some magic I don't know about :).</p><p>I suppose you could somehow melt them all into one long teaser image so that it's only one request, but you'd have to create one for every search term, so thats not going to happen :).</p><p>Other than that, I'm not sure where you're going with this now.  They are images.  And images require requests from the client machine to a server (even if you check for a cached variable, you're not going to see a degradation in speed here. Solutions like EHCache are so darn fast its not even an argument worth discussing).  If the host server wasn't a fast cdn (like gravatar) and prone to slowness then a caching solution is the way to go.  Besides it was just an idea off the top of my head.</p><p>Another you could do is just have CF grab all the gravatar images on applicaiton init (since their relative email addresses are already in your database).  Then have all the client machines just always look for an image file on the local server.  This would eliminate the cached variable (which I still don't think will be slow in any way - I was just having fun by throwing that idea out there), but you still run into the problem (?) of the clients requesting all those images from the local server (still not sure how you plan to get around that since thats the way the web works :).</p><p>I also forgot to mention another caching option yesterday... a proxy cache (like varnish cache).  Overkill?  yes, but just throwing fun ideas out there.  But even though that would be super fast as well, you'd still be making separate requests from the client machine to the varnish cache server for each image.</p><p>A caching solution would be fast and not a problem for anyone.  So where are you planning to go with this?  Why would it suddenly be bad for the client machine to request all those images even if its from the local server?  I mean, it's the way the whole web is run :).  You put an image on the page, and the client has to make a request for it.</p><p>Heh.  Its most likely I completely missed your point in which case ignore half of the above :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724485">32</a> by Mike
		posted on 3/7/2012 at 5:11 AM
		</div>
		<div class="comment_text"><p>Hey Jeff, I wasn't shooting down your answer. I recognize it makes technical sense, but I was just saying that it doesn't solve the original problem I was asking about.</p><p>For example, my original question posed a possible solution to "the way the web works", and that was to "fetch" (whether via filesystem, cache, or otherwise) the images server side and insert them as Base64 encoded data right into the json response. Thereby only having 1 request (the original AJAX autocomplete). Check out this article to see what I'm talking about: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stoimen.com%2Fblog%2F2009%2F04%2F23%2Fwhen-you-should-use-base64-for-images%2F%3AlazF-iS5fpH2YElUUMi36xfvjT4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stoimen.com/blog/2009/04/23/when-you-should-use-base64-for-images/">http://www.stoimen.com/blog...</a>.</p><p>That said, in modern browsers having another ~20 image requests after the page has loaded happens pretty damn fast. Not to mention that if you return the text ASAP, then even if the image hasn't loaded yet - the user can still select a name.</p><p>I might try benchmarking these two solutions and see what holds up under load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724486">33</a> by alisia
		posted on 4/6/2014 at 9:19 PM
		</div>
		<div class="comment_text"><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002801327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002801327">34</a> by Brad
		posted on 5/4/2015 at 6:09 PM
		</div>
		<div class="comment_text"><p>Hi Ray, just want to say thank you for this useful post. Although I'm not using jQuery-UI I was able to use the example in this tutorial to get it working with <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdevbridge%2FjQuery-Autocomplete%3AmGgdJ5FjKOIRbNYVX02Bpo2KA2I&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/devbridge/jQuery-Autocomplete">https://github.com/devbridg...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2002810297">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2002810297">35</a> (In reply to <a href="#c_2002801327">#34</a>) by Raymond Camden
		posted on 5/4/2015 at 6:14 PM
		</div>
		<div class="comment_text"><p>Glad this old one is still useful. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644350221">
	<div>
		<img src="https://disqus.com/api/users/avatars/aescribens.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644350221">36</a> by Anthony Escribens
		posted on 4/26/2016 at 9:21 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I find this search method extremely useful.  If I have a database of ~30K records and would like to search for make, model and year for example and display a picture of the automobile, can this be accomplished?  How would I go about building such an autocomplete search?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644363349">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644363349">37</a> (In reply to <a href="#c_2644350221">#36</a>) by Raymond Camden
		posted on 4/26/2016 at 9:29 PM
		</div>
		<div class="comment_text"><p>Pretty much the exact same - you just want to be sure you limit the possible matches. If I search for "e" you dont want to return 20K results.</p></div>
	</div>
</div>
		