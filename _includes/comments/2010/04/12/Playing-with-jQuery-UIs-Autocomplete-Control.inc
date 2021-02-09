
<div class="comment" id="c_1713723499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723499">1</a> by Matt Gifford AKA coldfumonkeh
		posted on 4/12/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>Great post Ray.</p><p>I've just finished writing a magazine tutorial on the revised 1.8 UI, and had great fun playing around with the new features in the library, especially the autocomplete widget.</p><p>I love the use of the source param pulling in the data from the web service, and jQuery makes it incredibly easy to pull out the information as you've shown here using the ui.item method.</p><p>CF and jQuery go together incredibly well - both rapid development, both extremely extensible, both with a great community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723498">2</a> by Lola LB
		posted on 4/12/2010 at 5:55 PM
		</div>
		<div class="comment_text"><p>Am I missing something obvious with the demo . . . when I go to the demo it comes looking plain-vanilla form with no skinned elements. And, how would one hook it up using the Solr search engine?  I'm thinking, like keep track of tables with entered information about stuff like book titles and descriptions of plots, and user searches for a particular book and it would "look" ahead for matching strings to search on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723497">3</a> by Raymond Camden
		posted on 4/12/2010 at 6:01 PM
		</div>
		<div class="comment_text"><p>@Lola: Exactly Lola - it is an autosuggest widget. You won't see _anything_ at first. Begin typing in the control field though, like the letter e, and you should see something.</p><p>As to your second point - you would simply change the db query to a cfsearch call instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723495">4</a> by Robert Zehnder
		posted on 4/12/2010 at 6:22 PM
		</div>
		<div class="comment_text"><p>I would be interested to see how it handles extremely long matching result lists.  I have a place I was thinking about writing the auto complete in.  Until it gets drilled down a bit things might be a little hairy (hundreds of results).</p><p>Thanks for the nice little demo Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723496">5</a> by Raymond Camden
		posted on 4/12/2010 at 6:34 PM
		</div>
		<div class="comment_text"><p>@Robert: Two things. One- you can control _when_ the auto suggest begins to look. There is a minlength attribute.</p><p>Secondly - _you_ have ultimate control over the data. I could have easily added a maxrows/top/limit to my query to keep things under control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723500">6</a> by Mike
		posted on 4/12/2010 at 7:11 PM
		</div>
		<div class="comment_text"><p>One thing that confused me for a few seconds in the demo...the auto-suggest list is case-sensitive.  It threw me off when "p" didn't return "Painting".  This is just a DB thing, and not a jQuery issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723494">7</a> by James Moberg
		posted on 4/12/2010 at 7:22 PM
		</div>
		<div class="comment_text"><p>When using the demo "p" returns "Photography" but not "Painting".   I thought this sample only returned 3 results, so I typed "pain".  No results.</p><p>I can search for "hotogr" and "Photo", but not "pho".</p><p>Is this a jQuery issue?  Is there a trick to not having it be case-sensitive?  (I use a different jquery autosuggest plugin and was eager to see a demo of this one.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723502">8</a> by Jen
		posted on 4/12/2010 at 7:30 PM
		</div>
		<div class="comment_text"><p>I did something similar but with US states. It uses a call to a cfm page and serializeJSON to return the results.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jensbits.com%2F2010%2F03%2F18%2Fjquery-ui-autocomplete-with-coldfusion%2F%3AUGjHQX6LpyIRfP3Xgjx8ysWlPy8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jensbits.com/2010/03/18/jquery-ui-autocomplete-with-coldfusion/">http://www.jensbits.com/201...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723501">9</a> by Raymond Camden
		posted on 4/12/2010 at 7:38 PM
		</div>
		<div class="comment_text"><p>@James: Yes, the db is case sensitive. I should have made that clear. That's a db issue - not a jQuery issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723503">10</a> by Russ S.
		posted on 4/12/2010 at 11:40 PM
		</div>
		<div class="comment_text"><p>That's a sweet tip about how to return lower-case JSON variables from a remote CFC. I have always hated how CF serializes variable names to upper-case. Any idea why CF doesn't maintain the original case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723504">11</a> by Raymond Camden
		posted on 4/12/2010 at 11:44 PM
		</div>
		<div class="comment_text"><p>There isn't an original case really. When you do x.y=1, you aren't specifically a string, but a variable name. Well, that's my opinion anyway. There is probably some much more technical low-level reason why. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723505">12</a> by Robert Zehnder
		posted on 4/13/2010 at 12:13 AM
		</div>
		<div class="comment_text"><p>I generally use bracket notation on a set and I suppose it has kept me out of trouble because I generally camel-case my vars.  I also use *a lot* of AJAX/JSON and haven't really run in to a case problem.  The one notable exception being returning queries through JSON..  :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723508">13</a> by Mike
		posted on 4/13/2010 at 1:11 AM
		</div>
		<div class="comment_text"><p>Thanks for the post Ray - I implemented a jQuery autocomplete a few months ago using calls to a cfm file.  I'll remember this example if I want to tie it to a cfc instead.  Do you think there is a performance gain doing the call with a component instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723506">14</a> by Raymond Camden
		posted on 4/13/2010 at 1:14 AM
		</div>
		<div class="comment_text"><p>Performance - not really. I used an example of hitting a CFC because, typically, the type of data I'd need would come from a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723509">15</a> by Tom
		posted on 4/13/2010 at 3:02 PM
		</div>
		<div class="comment_text"><p>jQuery is indeed quite easy to use.jQuery coupled up with CF is efficient for the development process.But I agree with Lola on it's dubiousness about usage with Solr search engine and also will the case sensitive factor remain with JSON when used by solr as output. I also reviewed Solr's complete reference guide (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.lucidimagination.com%2FDownloads%2FLucidWorks-for-Solr%2FReference-Guide%3ApkOFXZ-3CGkCYFUE6Yl82K4DuP8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.lucidimagination.com/Downloads/LucidWorks-for-Solr/Reference-Guide">http://www.lucidimagination...</a> ) for concept insights and found it useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723511">16</a> by Raymond Camden
		posted on 4/13/2010 at 3:11 PM
		</div>
		<div class="comment_text"><p>I'm sorry - maybe I'm not quite getting you. It isn't case sensitive. My DB is. And I could have gotten around that I'm sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723507">17</a> by Michel
		posted on 4/16/2010 at 11:36 AM
		</div>
		<div class="comment_text"><p>Hi,<br>Not really about autocomplete, but as you said that you had work a lot with JQuery the last time (and jqgrid ?), Could you maybe have an example on how to join a jqgrid cell to a popup window to show data from another table related to the clicked cell (foreign key) <br>I tried this with the fancybox(<a href="http://disq.us/url?url=http%3A%2F%2Ffancybox.net%2Fhome%29%3ACcpWY94dJgkqWr1InicCxiQzZ7g&amp;cuid=3321886" rel="nofollow noopener" title="http://fancybox.net/home)">http://fancybox.net/home)</a> plugin as follow:<br>custom formatter to show an icon and to put an id attribute to the 'a' tag as the plugin requires an id attribute. then I should have to link this id attribute to the .fancybox method... but... someone has maybe an idee to accomplish this ?<br>Greetings,<br>Michel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723513">18</a> by Raymond Camden
		posted on 4/17/2010 at 5:50 AM
		</div>
		<div class="comment_text"><p>It sounds like you are saying - when a user clicks a row, show a dialog window - right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723510">19</a> by Michel
		posted on 4/17/2010 at 8:55 AM
		</div>
		<div class="comment_text"><p>Right, or more, when a user clicks a particular cell where you see an icon, but the data is the key to details data. This should have to open a popup window with those details. I got it working, but it opens the window I call to make the query. What I should like is to get this data not in a reloaded window, but in a little popup... and ideally in the fancybox jquery plugin... or what should also be nice in a tootip -)<br>Thanks for your reply,<br>Michel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723512">20</a> by Raymond Camden
		posted on 4/19/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>Well it certainly should be possible. :) I know jqGrid is very powerful and obviously allows you to respond to click events. It sounds like you got that, but you need to get the data from the client side where it already exists. If you look at the jqGrid API (I'm there now) you can see methods to get the data from the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723514">21</a> by Michel
		posted on 4/20/2010 at 3:37 PM
		</div>
		<div class="comment_text"><p>I confirm, it is possible -)<br>I made a custom formatter to add an id attribut to the cell data (and btw an icon), and from there<br>I call a cfm giving the key as parameter to retrieve the data.<br>And instead of loading this in another page, I try to show this in a fancybox jquery plugin with this:</p><p>gridComplete: function(){<br>				$("a[id='userDetails']").fancybox({'type':'ajax'});<br>				}<br>			});<br>My problem was only to get the userDetails id of the a tag to link it to the fancybox method.<br>This did nothing: $('#userDetails), but this is ok: $("a[id='userDetails']")</p><p>Thank you for your reaction,<br>Michel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723515">22</a> by Srinivas
		posted on 4/21/2010 at 1:50 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am newbie to jQuery.Kindly help for the below requirement.</p><p>I am having 3 controls  say Department, Locations &amp; Name.</p><p>In search form,If the user chooses a  department with auto suggest &amp; then he  comes to location, we  need to show all locations of that department in auto suggest and when he  comes to Name control,we need  to show only names of the persons working in selected values of  department &amp; location controls.</p><p>Like the way we need to filter, for the user chooses any of the control.</p><p>Let me  know if you have  any questions.</p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723516">23</a> by Raymond Camden
		posted on 4/21/2010 at 10:33 PM
		</div>
		<div class="comment_text"><p>I'll be happy to help, but I think you have everything you need already. Remember the last part of my demo specifically mentions how you can store a primary key for the string in a hidden form field. You would use that value then for your second and third autocomplete lookups. You could just append the value to the URLs used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723518">24</a> by Srinivas
		posted on 4/24/2010 at 8:12 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am getting an empty string, when I try to read out a  value of  a first text box which I am using as a  URL param for second  text box.<br>Any clues,code as follows.</p><p>$(function() {<br>	$("#department").autocomplete({<br>		source: "test2.cfm"<br>	});<br>	$("#location").autocomplete({<br>		source: "test2.cfm?department="+$("#department").val() //Value in the department text box need to get here &amp; results need to be  filtered based on Department<br>	});<br>});</p><p>&lt;form name="frm" action="test.cfm" method="post"&gt;<br>	Department: &lt;input id="department" /&gt; <br>	Location: &lt;input id="location"  /&gt; <br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723520">25</a> by Raymond Camden
		posted on 4/24/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>Is the full code online where I can run it? This is really a simple thing- it should work. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723519">26</a> by Srinivas
		posted on 4/27/2010 at 9:58 AM
		</div>
		<div class="comment_text"><p>From Ray:<br>*********<br>       $("#department").autocomplete({<br>               source: "test2.cfm?vType=department",<br>               select:function(event,ui) {<br>                       var sel = ui.item.value<br>                       $("#location").autocomplete("option","source","test2.cfm?vType=location&amp;department="+escape(sel))<br>               }<br>       });</p><p>Thanks Ray, its  working pretty good  now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723522">27</a> by Raymond Camden
		posted on 4/27/2010 at 3:07 PM
		</div>
		<div class="comment_text"><p>I'll be doing a blog entry today that demonstrates this more fully.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723525">28</a> by Raymond Camden
		posted on 4/27/2010 at 5:09 PM
		</div>
		<div class="comment_text"><p>Follow up blog post: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F4%2F27%2FLinking-Two-or-more-jQuery-Autocompletes%3AycQFAuWmf4eQkouq2WoYra5kQN0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/4/27/Linking-Two-or-more-jQuery-Autocompletes">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723524">29</a> by MikeQ
		posted on 7/28/2010 at 9:07 PM
		</div>
		<div class="comment_text"><p>I keep getting this error:<br>a is null<br> "string"){c=this.options.source;this.s...=this._normalize(a);this._suggest(a);</p><p>Any ideas?</p><p>Thanks<br>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723523">30</a> by Raymond Camden
		posted on 7/29/2010 at 11:32 PM
		</div>
		<div class="comment_text"><p>Nope - is it online where I can see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723526">31</a> by Mike
		posted on 8/3/2010 at 5:00 PM
		</div>
		<div class="comment_text"><p>I'm all good now. I got a hint from another post where requestCFC was causing problems and apparently that was my issue too.</p><p>Thanks<br>Keep up the good work :)</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723528">32</a> by mauricio
		posted on 8/20/2010 at 1:47 AM
		</div>
		<div class="comment_text"><p>hey raymond sorry bother you but its that the real CFC code? im newbee im and copying and pasted but</p><p>dosnt work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723527">33</a> by Raymond Camden
		posted on 8/20/2010 at 4:10 PM
		</div>
		<div class="comment_text"><p>It was short enough to fit into a comment:</p><p>component {</p><p>	remote function searchCategories(string term) {<br>		var q = new com.adobe.coldfusion.query();<br>		q.setDatasource("cfartgallery");<br>		q.setSQL("select mediatype from media where mediatype like :search");<br>		q.addParam(name="search",value="%#arguments.term#%",cfsqltype="cf_sql_varchar");<br>		var result = q.execute().getResult();<br>		return listToArray(valueList(result.mediatype));<br>	}</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723529">34</a> by jim&amp;aposs
		posted on 10/11/2010 at 7:08 AM
		</div>
		<div class="comment_text"><p>i have the same question about this cfc code its that the real CFC code? and its doesnt work, can i get the full source code of the demo page, please ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723530">35</a> by Raymond Camden
		posted on 10/12/2010 at 1:03 AM
		</div>
		<div class="comment_text"><p>Not quite sure I get you. How does the CFC code not work? Can you be more specific? As for the code for the front end - you just need to view source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723532">36</a> by jim&amp;aposs
		posted on 10/15/2010 at 6:42 AM
		</div>
		<div class="comment_text"><p>Sorry Ray im newbee, i paste this code to a new cfc file<br>component {</p><p>   remote function searchCategories(string term) {<br>      var q = new com.adobe.coldfusion.query();<br>      q.setDatasource("cfartgallery");<br>      q.setSQL("select mediatype from media where mediatype like :search");<br>      q.addParam(name="search",value="%#arguments.term#%",cfsqltype="cf_sql_varchar");<br>      var result = q.execute().getResult();<br>      return listToArray(valueList(result.mediatype));<br>   }</p><p>}</p><p>should it use <br>&lt;cfcomponent&gt;<br>&lt;cffunction&gt;<br>"the code"<br>&lt;cffunction&gt;<br>&lt;cfcomponent&gt;</p><p>or could you just share the whole source, please.</p><p>Thank u Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723535">37</a> by Raymond Camden
		posted on 10/15/2010 at 4:51 PM
		</div>
		<div class="comment_text"><p>No, the code is the whole source. It is a script based CFC. Are you on CF9? If not - the code will not work for you. You would need to convert it to a tag based one - including changing the script based query too. Shouldn't take more than 3 minutes though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723536">38</a> by jim&amp;aposs
		posted on 10/18/2010 at 1:32 PM
		</div>
		<div class="comment_text"><p>Oh i see, im running it on CF 8 ,okey i get it</p><p>Thank You Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723534">39</a> by Jay
		posted on 10/29/2010 at 11:51 PM
		</div>
		<div class="comment_text"><p>Hey I know this post is a bit old but I was wondering if you know how I would go about using this being able to type multiple categories in. If you have any ideas on it please let me know.</p><p>Thanks<br>-Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723537">40</a> by Raymond Camden
		posted on 10/29/2010 at 11:51 PM
		</div>
		<div class="comment_text"><p>How would it work? Like after you pick one would it add a comma and let you type more?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723539">41</a> by Jay
		posted on 10/30/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>That is exactly how I would want it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723540">42</a> by Jay
		posted on 10/30/2010 at 6:25 AM
		</div>
		<div class="comment_text"><p>What do you think? Worth pursuing with jqueryui or should I see if there is another implementation out there that can do something like that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723538">43</a> by Raymond Camden
		posted on 11/2/2010 at 3:24 PM
		</div>
		<div class="comment_text"><p>Looks like jQuery UI already supports it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjqueryui.com%2Fdemos%2Fautocomplete%2F%23multiple%3ASpjFWW1Y1pWCOJXvRvPKj5suNIo&amp;cuid=3321886" rel="nofollow noopener" title="http://jqueryui.com/demos/autocomplete/#multiple">http://jqueryui.com/demos/a...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723541">44</a> by Jay Reichenbach
		posted on 11/2/2010 at 4:53 PM
		</div>
		<div class="comment_text"><p>Thanks Ray that's a good start. I'll have to configure it to have a hidden field with to put the ID's in for each selection. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723542">45</a> by Jeana
		posted on 11/22/2010 at 11:41 PM
		</div>
		<div class="comment_text"><p>Thank you so much for this tutorial.  It is the only reason that I got Autocomplete working on my current development project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723543">46</a> by Raymond Camden
		posted on 11/23/2010 at 12:00 AM
		</div>
		<div class="comment_text"><p>Glad to be of service!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723545">47</a> by Ryan
		posted on 12/19/2010 at 11:21 AM
		</div>
		<div class="comment_text"><p>love the lowercase json return. Any issue with using the following structure instead:</p><p>for(var i=1; i&lt;=query.recordCount; i++) {<br>	result[arrayLen(result)+1] = {<br>		"id" = <a href="http://disq.us/url?url=http%3A%2F%2Fquery.id%3AoEzJlGsUdBwetktCkwy88vwa6hE&amp;cuid=3321886" rel="nofollow noopener" title="query.id">query.id</a>[i],<br>		"value" = query.value[i]<br>	};		<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723548">48</a> by Raymond Camden
		posted on 12/19/2010 at 9:05 PM
		</div>
		<div class="comment_text"><p>If that's JS, then you need to use arr.length, not arrayLen(arr). arrayLen is a CF function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723546">49</a> by Bobbytuck
		posted on 1/10/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>Is it possible to supply a zip with the full source code here? I mean, a complete zip file. I'm confused about implementing the CFC (new to CF -- but I'd love to see a specific example).</p><p>Does anything else need to be added to the CFC above?</p><p>Confused. (I just name it with the .cfc extension?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723547">50</a> by Raymond Camden
		posted on 1/10/2011 at 10:00 PM
		</div>
		<div class="comment_text"><p>Unfortunately I don't think I have the full folder anymore. I can say that the first script is a regular CFM. You can call it whatevr. Ditto for the very last code sample.</p><p>The CFC should be named service2.cfc. You can tell this by the URL used in the last code sample.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723552">51</a> by Simon Hine
		posted on 2/13/2011 at 12:22 PM
		</div>
		<div class="comment_text"><p>Thanks (again and as usual) for a really helpful post -</p><p>I'm missing something though - I'm getting a JSON return as I'd expect (according to firebug) - but no suggestion is appearing in the field. Any advice appreciated thanks Ray.</p><p>jquery:<br>$("#category").autocomplete({<br>				source: "getNames.cfc?method=getContacts&amp;returnformat=json"<br>				});</p><p>and on the page:<br>&lt;input type="text" id="category" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723550">52</a> by Raymond Camden
		posted on 2/14/2011 at 5:00 AM
		</div>
		<div class="comment_text"><p>Looks fine to me. Is this online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723551">53</a> by Simon Hine
		posted on 2/14/2011 at 5:19 AM
		</div>
		<div class="comment_text"><p>Sorry Ray - it's not. I can publish it tonight (Australian time about 8 hours from now) or I can send you files in a zip.</p><p>Thanks for the prompt reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723554">54</a> by Raymond Camden
		posted on 2/14/2011 at 5:22 AM
		</div>
		<div class="comment_text"><p>It's easier if you just let me know when it's live. No rush.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723555">55</a> by Simon
		posted on 2/14/2011 at 6:57 AM
		</div>
		<div class="comment_text"><p>Fair enough - had a window of connectivity and was able to bump up the site. The query in the cfc uses a cookie based ID so you will need to log in (username=simon@hinesight.com.au pwd=simon) to see the functionality.</p><p>On the newAppointment page is the text field in question - entering s returns json data Simon and Sam but nothing appears in the field.</p><p>Really appreciate the help. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723553">56</a> by Raymond Camden
		posted on 2/14/2011 at 7:14 AM
		</div>
		<div class="comment_text"><p>Did you mean to tell me the site so I can login? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723556">57</a> by Simon Hine
		posted on 2/14/2011 at 7:54 AM
		</div>
		<div class="comment_text"><p>echoes of "help me to help you" in my ears...<br>sorry - I added the site to the website field in the comments box- <a href="http://disq.us/url?url=http%3A%2F%2Fwww.yournextvisit.com.au%2Fynv%2FnewAppointment.cfm%3AZKIWgvznDD-G4PrGqGu-__wZTq4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.yournextvisit.com.au/ynv/newAppointment.cfm">http://www.yournextvisit.co...</a></p><p>Thanks again Ray, apologies for being a bit of a dolt!<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723559">58</a> by Raymond Camden
		posted on 2/15/2011 at 12:28 AM
		</div>
		<div class="comment_text"><p>You aren't returning the values in the way. View my demo with Firebug (or Chrome tools), and you can see how the data is different. I made use of listToArray in CF. You are returning a query object I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723558">59</a> by Simon
		posted on 2/15/2011 at 9:15 AM
		</div>
		<div class="comment_text"><p>Thanks Ray - I think my problem is to do with my attempt to translate your script cfc to a tag based one (still on CF 8).</p><p>This is what I tried:<br>&lt;cfargument name="term" required="false" default=""/&gt;</p><p>    &lt;cfset var myQuery   = ""&gt;<br>    &lt;cfset var searchFor = arguments.term&gt;<br>    &lt;cfset result = arrayNew(1)&gt;</p><p>	&lt;cfquery name="myQuery" <br>            query statements here<br>	&lt;/cfquery&gt;</p><p>	&lt;cfloop query="myQuery"&gt;<br>		&lt;cfset result[myQuery.currentRow] = structNew()&gt;<br>		&lt;cfset result[myQuery.currentRow].firstName = myQuery.contactFirstName&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn result&gt;</p><p>I'm not sure that the cfloop at the end is doing what I need.</p><p>Your data returns like:[{"value":"Painting","id":"1"}]<br>mine is currently like: [{"FIRSTNAME":"Simon"},{"FIRSTNAME":"Sam"}]</p><p>Thanks again for your help, it's really appreciated.<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723560">60</a> by Raymond Camden
		posted on 2/15/2011 at 9:18 AM
		</div>
		<div class="comment_text"><p>Well, first off, you want to try for lower case just to make your JS code a bit more readable. That's easy to do. Change .firstName to ["firstname"] or even ["firstName"]. Then you have the issue of letting the auto complete know what to use for display and ID. I don't remember the options offhand, but try using value instead of firstname for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723565">61</a> by Simon
		posted on 2/15/2011 at 9:56 AM
		</div>
		<div class="comment_text"><p>Ok - I've amended the end of the cfc like so:<br>&lt;cfset result[myQuery.currentRow] = structNew()&gt;<br>		&lt;cfset result[myQuery.currentRow].id = myQuery.ID&gt;<br>      	&lt;cfset result[myQuery.currentRow].value = myQuery.value&gt;</p><p>and I'm now seeing data that looks more like the data in the example - and I'm getting no errors in firebug. When I enter a value in the filed a container for the autosuggest appears, but still has no content.</p><p>I've uploaded the amended files if you want to observe the behavior I'm talking about, and I'm heading over to the jquery doco to revisit again. Thanks for the help (again).<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723564">62</a> by Raymond Camden
		posted on 2/15/2011 at 9:59 AM
		</div>
		<div class="comment_text"><p>You are still using "dot" notation, .id, .value. Change to bracket notation:</p><p>["id"]<br>["value"]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723562">63</a> by Simon
		posted on 2/15/2011 at 10:03 AM
		</div>
		<div class="comment_text"><p>Awesome!</p><p>That got it Ray - thanks so much (for the patience as well as the help).<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723563">64</a> by Michael
		posted on 2/18/2011 at 3:12 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>    Have you ever seen the page throw an SQL command not properly ended error on the cfc?  Here's some of the key debug info:<br>[Macromedia][Oracle JDBC Driver][Oracle]ORA-00933: SQL command not properly ended</p><p>The error occurred in C:\ColdFusion9\CustomTags\com\adobe\coldfusion\base.cfc: line 449</p><p>449 :                             &lt;cfloop index="i" from="2" to="#ArrayLen(sqlArray)#"&gt;</p><p>And the query looks something like this:<br>select distinct table_column, table_column_id from db.table where table_column like (param 1) limit 0,15</p><p>It's odd that it is doing this.  I mean, I barely touched any of the example code.  I'm just researching if something like this would work for a page I'm working on.</p><p>I know there was a bug with CF9 that could cause this to occur</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723567">65</a> by Michael
		posted on 2/18/2011 at 3:33 AM
		</div>
		<div class="comment_text"><p>Nevermind, I had to check my sytax a little better.  Looks like I had a small typo.  Thanks anyways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723566">66</a> by Travis
		posted on 4/21/2011 at 1:05 AM
		</div>
		<div class="comment_text"><p>I am using Coldfusion MX 7 and had to utilize a different JSON solution because I don't have the luxury of CF8 (bummer).  I'm also using Model-Glue.  So, how do i get the search term in my controller since i can't just add an argument called term to my function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723568">67</a> by Raymond Camden
		posted on 4/21/2011 at 1:08 AM
		</div>
		<div class="comment_text"><p>Your Ajax calls pass data either via a GET call or POST. But that doesn't matter as Model-Glue will combine them all into the Event scope. So in MG, you just grab what was passed in and pass it to your model.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723569">68</a> by Pritesh
		posted on 4/21/2011 at 1:09 PM
		</div>
		<div class="comment_text"><p>here is coldfusion wrapper for autocomplete in case anyone interested <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecfguy.com%2Fpost.cfm%2Fcoldfusion-wrapper-for-jquery-autocomplete%3Ajnr6aXUdVzw2iGUoVv0NBirm0yY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecfguy.com/post.cfm/coldfusion-wrapper-for-jquery-autocomplete">http://www.thecfguy.com/pos...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723570">69</a> by Josh
		posted on 6/9/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>I'm running into a problem where the values in the database contain commas; when I output the query results using the following, post titles with a comma in them return as two results instead of one.</p><p>&lt;cfreturn listToArray(valueList(qSiteAutoCompleteSearch.postTitle)) /&gt;</p><p>Any idea on how to fix this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723571">70</a> by Raymond Camden
		posted on 6/9/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>Writing this by hand - ignore errors.<br>&lt;cfset arr = arrayNew(1)&gt;<br>&lt;cfloop query="qSiteAutoCompleteSearch"&gt;<br>  &lt;cfset arrayAppend(arr, postTItle)&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723572">71</a> by Josh
		posted on 6/9/2011 at 10:13 PM
		</div>
		<div class="comment_text"><p>You are a beast! (That's a good thing.) Thanks, Ray. Not sure why I didn't think of that. Some days I wonder if I should take up funambulism.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723576">72</a> by Raymond Camden
		posted on 6/9/2011 at 10:22 PM
		</div>
		<div class="comment_text"><p>Thanks for sending me to the dictionary. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723577">73</a> by Henry
		posted on 8/5/2011 at 4:22 AM
		</div>
		<div class="comment_text"><p>Hi. Thanks for the excellent tutorial. I was lost for a while with why the suggestions weren't displaying in my development environment. Firebug displayed the json from my cfc ok and everything else was fine. Then I had a mini brainwave and turned cfdebugging off and the suggestions magically appeared. Has anyone else had this issue and found a workaround that doesn't require turning debugging off? Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723573">74</a> by Raymond Camden
		posted on 8/5/2011 at 4:57 AM
		</div>
		<div class="comment_text"><p>Just turn debugging off the _that_ request. In your CFC method:</p><p>&lt;cfsetting showdebugoutput="false"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723575">75</a> by Henry
		posted on 8/8/2011 at 5:04 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723578">76</a> by mnoppe
		posted on 9/6/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for your twitter answer, as usual you rocks :)<br>So I first tried to follow your second example, and made the wsdl result call in a variable, and everything is so OK, but when I try to call <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fcfc%2FMyWebservice.cfc%3Fmethod%3DgetExtApplicationFolderPaths%26applicationCode%3Dfoo%26returnformat%3Djson%3AfWh8ou0p2-8k22e-CpNqzwB6bwQ&amp;cuid=3321886" rel="nofollow noopener" title="www.mydomain.com/cfc/MyWebservice.cfc?method=getExtApplicationFolderPaths&amp;applicationCode=foo&amp;returnformat=json">www.mydomain.com/cfc/MyWebs...</a> directly in the source of the autocomplete, I see in the firefox console that the term variable is appended but the call doesn't show any result. Did I made a wrong call to the wsdl ?<br>Michel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723579">77</a> by Raymond Camden
		posted on 9/6/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>First off - I hate people who get pedantic about language, but you aren't using WSDL here. WSDL is a term that refers to a form of XML used when talking to web services. CFCs can output WSDL but you aren't using that feature here. (And since I said pedantic above it pretty much guarantees someone is going to call me out on it. ;)</p><p>Ok - that being said, did you look in the FIrebug _console_ or the Network tab? It's a subtle difference and you probably meant console as a way to refer to all of Firebug, but they are separate tools within FIrebug itself. If you are indeed in the Network tab and not seeing anything, maybe scroll down. Don't forget CF can sometimes output a bunch of white space.</p><p>It would be best if you could share a public URL so we can see. Or if you want to email me directly, that's fine. (Although I ask that when we find the issue you share the result back here.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723581">78</a> by Jason Asch
		posted on 10/12/2011 at 3:54 AM
		</div>
		<div class="comment_text"><p>Ray: any way to do your code above that does not reference the custom CF tags in CF9. Your code works on my local machine but when I upload it to the server I get an error calling the var q = new com.adobe.coldfusion.query(); So I'm assuming my shared hosting environment that the mapping is not there for such functionality. see here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.northernkyhomesearch.com%2FTESTPAGES%2FTest-AutoSuggest.cfm%3ABI017linxqmokPpdcP9uVI0qc0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.northernkyhomesearch.com/TESTPAGES/Test-AutoSuggest.cfm">http://www.northernkyhomese...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723580">79</a> by Raymond Camden
		posted on 10/12/2011 at 4:00 AM
		</div>
		<div class="comment_text"><p>Just rewrite my script-based CFC as an old school tag based one. Or, you can find out where CF is installed by cfdumping the server scope. Note the root directory. In your Application.cfc, add a new custom tag path that points to (rootdir)\customtags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723582">80</a> by Jason Asch
		posted on 10/12/2011 at 6:37 AM
		</div>
		<div class="comment_text"><p>Sorry Ray not following you as I'm a newb to this kinda coldfusion (cfc's, custom tags, CF9). I ran some code regarding the server scope and I think I found the root directory (on a shared environment) but as far as the custom tag in the cfc you wrote not sure what's up there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723583">81</a> by Raymond Camden
		posted on 10/12/2011 at 6:40 AM
		</div>
		<div class="comment_text"><p>Do you know how to use the Application.cfc feature? There's docs on that, and blog posts here, in Google, etc. It's a 'controller' for your CF apps and can be used to set things like custom tag paths. Read up on that, and then make use of the feature. It should be as simple as adding</p><p>&lt;cfset this.customtagpaths = "(yourroot)\customtags"&gt;</p><p>to the file. If that doesn't work, well, I'd look at the docs for CFCs in general. It's a big topic, but one you need to pick up on sooner or later anyway. To be honest, the code above could be rewritten in about 5 minutes once you get a hang of the syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723585">82</a> by Jason Asch
		posted on 10/12/2011 at 6:43 AM
		</div>
		<div class="comment_text"><p>Oh I know what an application.cfc is as I'm currently using one with limited knowledge talking to you of course. I guess I'm not sure how deep to go into the drive as I'm in a shared environment.. the path seems pretty deep all the way down to the c: drive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723584">83</a> by Raymond Camden
		posted on 10/12/2011 at 6:48 AM
		</div>
		<div class="comment_text"><p>I wrote this version -very- quickly - so it may not work 100%:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FYq68rdR9%3Aa9tJUZuNDt6BK9SU1KbXXb6BR8o&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Yq68rdR9">http://pastebin.com/Yq68rdR9</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723587">84</a> by Jason Asch
		posted on 10/12/2011 at 7:32 AM
		</div>
		<div class="comment_text"><p>You are the man... I can't wait to play for that, thank you for taking the time. So I have added the following to my Application.cfc after tracking down the root of the server: <br>&lt;cfset this.customtagpaths = "C:\glassfish3\glassfish\nodes\node1\cf01\applications\cfusion\WEB-INF\cfusion\CustomTags\"&gt; <br>Still not having any luck getting the functionality to work online... locally yes but not on the stupid shared environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723589">85</a> by Raymond Camden
		posted on 10/12/2011 at 5:20 PM
		</div>
		<div class="comment_text"><p>Maybe do a quick check using directoryExists? It's possible the custom tags aren't there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723588">86</a> by Jason Asch
		posted on 10/12/2011 at 7:38 PM
		</div>
		<div class="comment_text"><p>I'm checking with my hosting provider who is apparently have never been asked this before... as they don't know what I'm talking about :) Also, in your new code (component) posted above I noticed you did not reference the customtag or query (cfset var q = "") is there a reason or do you need to have this to make the code work. I used your new function locally and still can't get the new code to work. As always, thank you for your time and hard work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723590">87</a> by Jason Asch
		posted on 10/12/2011 at 7:51 PM
		</div>
		<div class="comment_text"><p>As of right now this is what I have so far:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FtGxrJF9z%3AOz-qRxkpbHxEsXRU5TmNnoC1_F4&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/tGxrJF9z">http://pastebin.com/tGxrJF9z</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723592">88</a> by Raymond Camden
		posted on 10/12/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>To your first comment - the new pastebin is a tag based version of the code. I know you are new to CF, but you have done queries before, right? When you tried it locally, what error di you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723591">89</a> by Raymond Camden
		posted on 10/12/2011 at 8:09 PM
		</div>
		<div class="comment_text"><p>Remove this line:</p><p>&lt;cfset var q = new query()&gt;</p><p>Make it</p><p>&lt;cfset var q = ""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723594">90</a> by Jason Asch
		posted on 10/12/2011 at 8:20 PM
		</div>
		<div class="comment_text"><p>Sorry Ray... I just updated that code locally and still can't get it to work... link above has been changed as well as a reference. Just to recap your original code (cfc) works locally not on the server, the new reformated cfc does not work on either for me. Any other thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723595">91</a> by Raymond Camden
		posted on 10/12/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>At this point it makes sense to switch off blog. Basically, I'd focus on the tag based version. You say it doesn't work, but how? Did you check the CF logs for an error? Did you try using Firebug or Chrome network tools ? THey would show the response from the CFC and help isolate the issue. Follow up with me off blog though please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723596">92</a> by Jason Asch
		posted on 10/12/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>Ok sorry about that. How to contact you via contact form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723597">93</a> by Raymond Camden
		posted on 10/12/2011 at 8:52 PM
		</div>
		<div class="comment_text"><p>See "Contact Me" waaaay up there on top? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723599">94</a> by vishal
		posted on 1/4/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>If i dont want to change text box value unless final selection of suggestion then what can ido..in where exactly i want to made change...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723598">95</a> by Raymond Camden
		posted on 1/4/2012 at 7:36 PM
		</div>
		<div class="comment_text"><p>I have no idea what you mean. Are you saying you don't want to allow free form text, just values from the suggest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723600">96</a> by James Moberg
		posted on 1/4/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>I've been using Drew Wilson's AutoSuggest jQuery Plugin.  It feels a lot like Facebook's AutoSuggest and allows you to allow free text additions, restrict to only certain values and also allow multiple values.<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.drewwilson.com%2Fentry%2Fautosuggest-jquery-plugin%3AGuQ2_ymsnM-9wwN82h3W9E0Xqpc&amp;cuid=3321886" rel="nofollow noopener" title="http://code.drewwilson.com/entry/autosuggest-jquery-plugin">http://code.drewwilson.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723601">97</a> by joeskeebo
		posted on 1/26/2012 at 12:35 AM
		</div>
		<div class="comment_text"><p>Damn Ray you look like a homeless mutha with that beard, hat and whatnot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723602">98</a> by Raymond Camden
		posted on 1/26/2012 at 12:37 AM
		</div>
		<div class="comment_text"><p>Heh, what can I say - I'm a bum. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723604">99</a> by sally
		posted on 2/19/2012 at 9:28 PM
		</div>
		<div class="comment_text"><p>Please can you tell me how to use in coldfusion 8 can't get to work that's my cfc <br>: <br>&lt;cffunction name="getNames" access="remote" returntype="String" &gt; <br>&lt;cfargument name="search" type="any" required="false" default=""&gt;</p><p>&lt;cfset var data=""&gt; <br>&lt;cfset var result=ArrayNew(1)&gt;</p><p>&lt;cfquery name="data" datasource="dbNAme"&gt; <br>    SELECT  NAME <br>    FROM myTable <br>    WHERE NAME LIKE '%#trim(<a href="http://disq.us/url?url=http%3A%2F%2FARGUMENTS.search%3AqnLnzVXRjYUL6xlC86mGA1ED4b4&amp;cuid=3321886" rel="nofollow noopener" title="ARGUMENTS.search">ARGUMENTS.search</a>)#%' <br>    ORDER BY NAME <br>&lt;/cfquery&gt;</p><p>&lt;cfloop query="data"&gt; <br>&lt;cfset returnStruct = StructNew() /&gt; <br>&lt;cfset returnStruct["label"] = NAME /&gt;</p><p>&lt;cfset ArrayAppend(result,returnStruct) /&gt; <br>&lt;/cfloop&gt;</p><p>&lt;cfreturn serializeJSON(result) /&gt; <br>&lt;/cffunction&gt;</p><p>and im this my cfm:</p><p>&lt;script src="jquery-1.4.2.min.js"&gt;&lt;/script&gt;<br>&lt;script src="jquery-ui-1.8.custom.min.js"&gt;&lt;/script&gt;<br>&lt;link rel="stylesheet" href="jquery-ui-1.8.custom.css" type="text/css" /&gt;</p><p>&lt;script type="text/javascript"&gt;<br>$(document).ready(function(){ <br>        $('#Names').autocomplete( <br>            {source: function(request, response) { <br>                $.ajax({ <br>                    url: "cfc/getValues.cfc?method=getNames&gt;&amp;returnformat=json", <br>                    dataType: "json", <br>                    data: { <br>                      search: request.term, <br>                      maxRows: 10 <br>                    }, <br>                    success: function(data) { <br>                      response(data); <br>                    }                    <br>                }) <br>            }, <br>            parse: function(data){ <br>                return $.map(data, function(item) { <br>                    return { data: item, value: item, result: item }; <br>                }); <br>            } <br>        }); <br>    }); <br>&lt;/script&gt;</p><p>category: &lt;input id="Names" /&gt;</p><p>but i can't get to work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723605">100</a> by Raymond Camden
		posted on 2/20/2012 at 12:53 AM
		</div>
		<div class="comment_text"><p>The reason it isn't working is because you are converting the result to json here:</p><p>&lt;cfreturn serializeJSON(result) /&gt;</p><p>but you told CF to convert it for you here too:</p><p>url: "cfc/getValues.cfc?method=getNames&gt;&amp;returnformat=json"</p><p>(I assume the &gt; is a typo, if not, that's a problem)</p><p>Basically, you are turning JSON into JSON. Change your cfreturn to be just</p><p>&lt;cfreturn result&gt;</p><p>Btw, not to sound like a broken record, but if you use Google Chrome Dev Tools or Firebug, you would have seen the result and noticed it was double encoded JSON. I strongly urge folks to use tools like this so you can see what is being returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723607">101</a> by Sally
		posted on 2/20/2012 at 11:29 AM
		</div>
		<div class="comment_text"><p>Thanks for the information but the cfc page isn't being called.No javascript error but when i write in the textbox nothing happens.sorry Im new to coldfusion :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723694">102</a> by Sally
		posted on 2/20/2012 at 6:02 PM
		</div>
		<div class="comment_text"><p>Need to know if there is any error in my query string that calls the cfc file cause the ajax call is not being performed .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723710">103</a> by Raymond Camden
		posted on 2/20/2012 at 6:46 PM
		</div>
		<div class="comment_text"><p>Did you try removing the &gt; from the url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723693">104</a> by Sally
		posted on 2/20/2012 at 7:06 PM
		</div>
		<div class="comment_text"><p>Yes this is typing mistake this &gt; is not contained in my url .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723695">105</a> by Sally
		posted on 2/20/2012 at 7:21 PM
		</div>
		<div class="comment_text"><p>Even if i change the cfc file name no error is fired what could it be the reason i need ? Im using CF 8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723692">106</a> by Raymond Camden
		posted on 2/20/2012 at 7:28 PM
		</div>
		<div class="comment_text"><p>Do you see a network request at all in Firebug or Chrome Dev Tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723691">107</a> by Sally
		posted on 2/20/2012 at 7:39 PM
		</div>
		<div class="comment_text"><p>No Network request are shown</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723690">108</a> by Raymond Camden
		posted on 2/20/2012 at 9:01 PM
		</div>
		<div class="comment_text"><p>Well, is it online where we can all see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723698">109</a> by ben
		posted on 2/21/2012 at 6:15 AM
		</div>
		<div class="comment_text"><p>hi ray. thanks a lot for the post on using autocomplete with CFC's. I'm noticing that demo2 and demo3 don't work in firefox.  demo 1 works ok.<br>I think I can figure out how to use it based on your examples, but wanted to let you know the demos don't seem to working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723696">110</a> by Raymond Camden
		posted on 2/21/2012 at 10:46 AM
		</div>
		<div class="comment_text"><p>Ugh, it looks like the artgallery db isn't set up right for my server, which means lots of demos will be down. Will try to fix later this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723699">111</a> by Raymond Camden
		posted on 2/21/2012 at 10:52 AM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723697">112</a> by ben
		posted on 2/21/2012 at 11:44 PM
		</div>
		<div class="comment_text"><p>thanks ray. I saw that in firebug last night, but wanted to let you know. (not that you don't have enough to do, or people to help!)</p><p>thanks to your post, I'm levitating x wing fighters out of swamps with autocomplete!</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723705">113</a> by Sally
		posted on 2/22/2012 at 11:31 AM
		</div>
		<div class="comment_text"><p>I've tried to add error function to my script<br>like this :<br>error: function (xhr, textStatus, errorThrown){<br>					// show error<br>					alert(errorThrown);<br>				}<br> when i try to write in the textbox i have an alert with undefined value inside. Sorry but it isn't published online .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723701">114</a> by Raymond Camden
		posted on 2/22/2012 at 6:04 PM
		</div>
		<div class="comment_text"><p>What about textStatus?</p><p>Unfortunately - if I can't see this myself, I'm limited on how much more I can help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723703">115</a> by Ray
		posted on 3/16/2012 at 3:03 AM
		</div>
		<div class="comment_text"><p>Is there a way to apply this autocomplete feature to cfgridcolumn instead of just a text field? I have a client who wants the job description field to autocomplete using a query result of previous descriptions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723700">116</a> by Nath
		posted on 5/24/2012 at 10:22 AM
		</div>
		<div class="comment_text"><p>In fireFox I can see results in this Form :<br>"[{\"label\":\"AABDALLAH\"},{\"label\":\"AABDALLAH\"}.....<br>but nothing appearing in the Textbox how i can i fix this issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723708">117</a> by Raymond Camden
		posted on 5/24/2012 at 6:55 PM
		</div>
		<div class="comment_text"><p>+Ray: cfgrid makes use of Ext - an entirely different JavaScript UI framework. I'm sure something like that could be done. But not with the jQuery UI plugin. It's totally different.</p><p>+Nath: I don't know. :) What else do you see? Do you see an error? Is it online where I can run it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723706">118</a> by Gary
		posted on 6/15/2012 at 9:45 AM
		</div>
		<div class="comment_text"><p>Just wanted to say thank you very much, I have wasted hours trying to get the ability to send a hidden field as described above and finally I have it. Once again many thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723707">119</a> by Raymond Camden
		posted on 6/19/2012 at 5:56 AM
		</div>
		<div class="comment_text"><p>Glad it was helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723704">120</a> by Mark Gregory
		posted on 7/22/2012 at 11:01 PM
		</div>
		<div class="comment_text"><p>Coming in a bit late, but have a fun fact.<br>If you will be returning numeric values for the dropdown, you will want to use quotedValueList instead of valueList. Otherwise you get this:<br>[123,234,345]<br>Instead of:<br>["123","234","345"]</p><p>The result without the quotes is that the JQuery autocomplete dropdown is created, but with no values.</p><p>This is something easily figured out in a few minutes. Unless you are stubborn and sleep deprived. Not that I am, but just sayin'...</p><p>There is probably a better way, but this works too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723709">121</a> by Raymond Camden
		posted on 7/23/2012 at 6:21 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing that!</p></div>
	</div>
</div>
		