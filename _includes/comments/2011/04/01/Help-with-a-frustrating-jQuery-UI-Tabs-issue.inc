
<div class="comment" id="c_1713731310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731310">1</a> by denstar
		posted on 4/1/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>For doing the same thing in dojo, I put the onclick handler on the div instead of the "a" element.</p><p>Something like this (apologies for formatting):</p><p>if( (currentEl.nodeName.toLowerCase()=='a' || currentEl.nodeName.toLowerCase()=='area')<br>	&amp;&amp; currentEl.target.toLowerCase() != '_blank' &amp;&amp; currentEl.target.toLowerCase() != '_top'){<br>    evt.preventDefault(); // stop the link from unloading your page<br>    if(typeof currentEl.onclick == 'undefined' || currentEl.onclick == null ) {<br>    	var navUri = parseUri(currentEl.href);<br>    	  if(navUri.query.length &gt; 0) navUri.query = "?" +navUri.query;<br>      goNav(navUri.path + navUri.query);<br>    }<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731312">2</a> by Scott Stroz
		posted on 4/1/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>Try putting the console.log() into the click handler for $('a', ui.panel) to make sure it is indeed handling the click inside of test3.cfm.</p><p>My guess would be that the selector you have is not catching links in the content that is loaded into the tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731311">3</a> by denstar
		posted on 4/1/2011 at 9:44 PM
		</div>
		<div class="comment_text"><p>You might also try re-binding the handler to the tab load function?  So it binds "a"s every time the tab content is loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731313">4</a> by Scott Stroz
		posted on 4/1/2011 at 9:45 PM
		</div>
		<div class="comment_text"><p>Actually..it is getting handled...when you click the link in test2.cfm...somehow it gets lost in test3.cfm.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731314">5</a> by denstar
		posted on 4/1/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>Never mind.  Looks like that's what is supposed to be happening.</p><p>Does this handle form submissions as well?  I had to add some custom code to the tab loading stuff in dojo to handle forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731315">6</a> by Raymond Camden
		posted on 4/1/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>@Boyzoid: Added a console.log in the A handler (locally only), and it runs once also.</p><p>@Denstar: Sorry - what? Afaik - from what the docs say - that's what I did. By saying load:func x in the tab constructor, it should be run everytime a tab is loaded with stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731316">7</a> by Raymond Camden
		posted on 4/1/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>@denstar: For now I'm not going to worry about a form submission. Lets KISS. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731317">8</a> by Edward - Florida SEO
		posted on 4/1/2011 at 9:49 PM
		</div>
		<div class="comment_text"><p>When I went to the test3.cfm I got ....</p><p>If &lt;script&gt; tags have a "type" attribute it should equal "text/javascript" or "application/javascript"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731318">9</a> by Raymond Camden
		posted on 4/1/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>I think that's a best practices reco - but not a bug. I added them locally though - no difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731319">10</a> by Edward - Florida SEO
		posted on 4/1/2011 at 10:05 PM
		</div>
		<div class="comment_text"><p>Stupid KISS Question ... Is jquery included in test2 and test3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731320">11</a> by Raymond Camden
		posted on 4/1/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>No, it does not need to be. When you click tab 2, jQuery makes an XHR request to get test2.cfm. The result is injected into the DOM in the tab block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731324">12</a> by MikeG
		posted on 4/1/2011 at 10:14 PM
		</div>
		<div class="comment_text"><p>Not tested. but. . .<br>what if you changed this<br>$(ui.panel).load(this.href);</p><p>to something like<br>$(this).parent().load(this.href);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731321">13</a> by David
		posted on 4/1/2011 at 10:26 PM
		</div>
		<div class="comment_text"><p>how about using a delegate completely out side of the tab.</p><p>$('#ui-tabs01').delegate('a', 'click', function(event){<br>    $('ui-tabs01').load(this.url);<br>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731323">14</a> by MikeG
		posted on 4/1/2011 at 10:26 PM
		</div>
		<div class="comment_text"><p>The reason I suggested DOM traversal instead of ui.panel is that if you look at the rendered jQuery html for the tabs it shows tab1 with an href of #tabs-1 and tab 2 as #ui-tabs-1.  May not be significant, just sayin..since the arget ids become tabs-1 and ui-tab-1 that maybe ui.panel is a bit confused</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731326">15</a> by Edward - Florida SEO
		posted on 4/1/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>Try this ... As per <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Flive%3AO_lekfCx30YBYx7_gBlL5a_QfSI&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/live">http://api.jquery.com/live</a></p><p>$(function() {<br>	$( "#tabs" ).tabs({</p><p>		 load: function(event, ui) {<br>				console.log("load event ran");</p><p> $('a', ui.panel).live("click", function() {<br>		            $(ui.panel).load(this.href);<br>		            return false;<br>		        });<br>		    }</p><p>	});</p><p>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731325">16</a> by Danilo Celic
		posted on 4/1/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>Try delegate. The following worked on my local copy of the files (changed to .htm):</p><p>$(function() {<br>	$( "#tabs" ).tabs({<br>		load: function(event, ui) {<br>			$(this).delegate('a', 'click',<br>			function(){<br>				console.log("load event ran");<br>				$(ui.panel).load(this.href);<br>				return false; <br>			}<br>		);<br>	}<br>	})<br>});</p><p>However, I'd suggest adding a class to links that are to open within the tab, as you just know that someone will want to make sure that they can have some links open to replace the page. Plus remote links won't work, they won't be loaded into the page, so you'd have to check for the existence of the site's URL within the href to see if you should be trying to load. On my Firefox, it appears as if the page is being accessed, and it returns a 200 status code, but due to cross site access rule, it won't be added to the tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731322">17</a> by Raymond Camden
		posted on 4/1/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>I think we have a winner here. It's working for me. I'm going to see if there is an easy way to provide this feedback to the team. Thanks Edward!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731328">18</a> by Edward - Florida SEO
		posted on 4/1/2011 at 10:43 PM
		</div>
		<div class="comment_text"><p>Thx Ray ... It's loading for me ...</p><p>$(function() {<br>	$( "#tabs" ).tabs({</p><p>		 load: function(event, ui) {<br>				console.log("load event ran");<br>		        $('a', ui.panel).live("click",function() {<br>					console.log("The Tab Loaded");<br>		            $(ui.panel).load(this.href);<br>		            return false;<br>		        });<br>		    }</p><p>	});</p><p>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731333">19</a> by Dan G. Switzer, II
		posted on 4/1/2011 at 11:10 PM
		</div>
		<div class="comment_text"><p>This seems like a case where maybe using an iframe is more appropriate...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731330">20</a> by John Ramon
		posted on 4/1/2011 at 11:29 PM
		</div>
		<div class="comment_text"><p>eeewwwww iframes lol Thanks Edward for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731332">21</a> by Edward - Florida SEO
		posted on 4/2/2011 at 2:26 AM
		</div>
		<div class="comment_text"><p>@David .... That works too ... :-)</p><p>$(function(){<br>	$("#tabs").tabs({<br>		load: function(event, ui){<br>			console.log("Event Loaded");<br>				$(ui.panel).delegate("a","click",function(){<br>					console.log("The Tab Loaded Too ...")<br>						$(ui.panel).load(this.href);<br>							return false;<br>					})<br>			}<br>	})<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731331">22</a> by Raymond Camden
		posted on 4/7/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>A bit late - but a) thank you guys and b) I've alerted folks at jQuery UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731334">23</a> by Danilo Celic
		posted on 4/7/2011 at 6:04 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>FWIW: delegate is a "better" way to handle this than live, both can work, but live is causing a lot more work to go on. I should have mentioned that in my original post. For more info, see the following article posted yesterday: <a href="http://disq.us/url?url=http%3A%2F%2Fjupiterjs.com%2Fnews%2Fwhy-you-should-never-use-jquery-live%3ArrIKSfgHz9PNW2H1SRKVXjPF6zY&amp;cuid=3321886" rel="nofollow noopener" title="http://jupiterjs.com/news/why-you-should-never-use-jquery-live">http://jupiterjs.com/news/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731335">24</a> by Raymond Camden
		posted on 4/9/2011 at 9:29 PM
		</div>
		<div class="comment_text"><p>I was asked to file a doc bug: <a href="http://disq.us/url?url=http%3A%2F%2Fbugs.jqueryui.com%2Fticket%2F7232%3AfJhxF5EcGcB1rzZ7p_cOeUnwTy4&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.jqueryui.com/ticket/7232">http://bugs.jqueryui.com/ti...</a></p></div>
	</div>
</div>
		