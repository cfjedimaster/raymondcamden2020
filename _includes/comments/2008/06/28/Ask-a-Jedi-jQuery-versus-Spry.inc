
<div class="comment" id="c_1713682445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682445">1</a> by todd sharp
		posted on 6/28/2008 at 8:10 PM
		</div>
		<div class="comment_text"><p>The amount of plugin and general lack of quality control over them is also something that bothers me.  I wish there was a little more control over what plugins get published - although I know that is a silly statement since it's OS and well, anyone can publish anything.  I know I'm a bit misguided so I'm anticipating some clarification from Bango or someone here - but if a plugin is on the 'official' jQuery site, it should have a little more QA done on it to make sure it's "up to par" for mass release.</p><p>I'd also like to see 'required version' of jQuery listed with the plugin.   I was using one just the other day and it wasn't working - so on a hunch I upgraded to jQuery 1.latest and it worked.  Maybe there needs to be a site like RIAForge for the plugins.  It doesn't need to be quite as elaborate as RIAForge, but something that allows for forums and a place to submit enhancements/bug reports for the plugins.  For example, I really like the half star rating plugin, but it would be really nice to have a way to enhance it to 'freeze' the rating once it's been submitted.  It would also be nice to pass a callback function in so that action can be taken once the rating is complete (which I modded the plugin myself to do).</p><p>Sorry for rambling here - and please understand, I'm not knocking jQuery.  I'm with Ray, I really like what I've seen so far.  All of this may already exist - but my limited experience hasn't led me to find it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682443">2</a> by Justin Carter
		posted on 6/28/2008 at 8:23 PM
		</div>
		<div class="comment_text"><p>jQuery is just pure awesome *without* any plugins :) If you want to do DOM manipulation, jQuery is your tool. It's hard to believe the dozens of lines code we used to write to just select a few nodes, loop over them and change them can now sometimes be done in 1 to 3 lines of code. Awesome.</p><p>BTW, the plugins site does have recommended versions for most plugins: <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2F%3A4C-q1U7HMMHOZp7qyo-ZD8449kw&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/">http://plugins.jquery.com/</a></p><p>They could probably do with an official "recommended" list of plugins though. TBH, the Forms plugin is just about the only one I use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682447">3</a> by Neil Bailey
		posted on 6/28/2008 at 9:08 PM
		</div>
		<div class="comment_text"><p>We have been working with Ajax for about two years, and shied away from Spry for a variety of internal reasons.</p><p>That being said, we had a LOT of success w/ Rob Gonda's AjaxCFC.   Extremely easy to use, and highly flexible.  For the UI components that Ray mentioned as coming w/ Spry, we use Jack Slocum's ExtJs - a product which, if you are unfamilair with, I STRONGLY recommend you _become_ familiar with - and it has awesome AJAX/JSON capabilities built right in (grid, tree, etc), and is fairly lightweight (ok, you got me, maybe not as lightweight as I'd like).  Oh, and it looks absolutely fantastic.</p><p>I know jQuery is the buzzword of the day, and Spry - being the Adobe product - will get heavily pushed, but in my humble opinion, that is vastly overcomplicating the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682448">4</a> by Daniel Kim
		posted on 6/28/2008 at 9:32 PM
		</div>
		<div class="comment_text"><p>jQuery is one of those things that blew my mind - I can't believe how much easier it has made my life. It's combination of succinct syntax and power has almost brought me to tears of joy on many occasions.</p><p>If you have a decent handle on CSS, it's amazing what you are able to do. I've found that it has been very easy for developers I've worked with, even with limited JS experience, to pick up.</p><p>Examples of features:</p><p>$("input[@type=checkbox]:checked") - grabs all checked checkboxes</p><p>$("div#menu li.main") - grabs all list items with a class of main within a div with an id of "menu"</p><p>$("div.short_content").hide() - hides all divs with a class of short_content</p><p>$("#myDiv").after('&lt;span class="error"&gt;This field is required&lt;/span&gt;') - adds a span with a class and content after a div with an id of myDiv</p><p>$("#divToLoadContent").load( "content.cfm" ) - AJAX call to content.cfm, and inserts it into the divToLoadContent</p><p>I've actually found it made my JavaScript much more readable, because it uses CSS selectors and very obvious method names ("show", "hide", "append", etc.), and there is so much less code.</p><p>With methods that are chained, for readability, I'll do something like this (using Ray's example):</p><p>something<br>  .hide("quick")<br>  .move("slowly")<br>  .dance("aluringly")<br>  .somelastaction("end")</p><p>I'm usually annoyed by excessive fanboy excitement over languages and technologies, but with jQuery, I don't mind annoying myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682449">5</a> by todd sharp
		posted on 6/28/2008 at 9:42 PM
		</div>
		<div class="comment_text"><p>@Justin:  No disrespect intended, but ExtJS is far from lightweight...  For full fledged applications it can't be beat, but for simple stuff I think jQuery is the winner hands down...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682446">6</a> by John Farrar
		posted on 6/28/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>Ray, we both picked up SPRY before either of us looked at jQuery. I seem to remember a hand full of us there from the start.</p><p>SPRY: It has a data oriented DOM manipulator that is king at this time. So if someone is looking for those features then it is hard to beat. It also has a bracket variable syntax similar to CF variable pound syntax or the ActionScript syntax for bound variables.</p><p>jQuery: The data handler features of SPRY could be built into a plugin for jQuery. (You and I just need one more project, eh?) Also, jQuery does more outside of the data handling. It is easier to learn IMO... but if you were trying to replace the data DOM manipulation of SPRY it would be harder to learn until someone builds that plugin. I also agree with splitting the chaining on to different lines like Daniel and find myself doing that often. It is also true that there are some bad plugins. (They are rated... but having an official cert may be possible with the UI work, not saying to expect it but they are doing good with the new UI.)</p><p>@Niel<br>If people have problems with the magnitude of features in jQuery then EXTJS is going to be a worse case scenario yet. I have no problem with it but that is a consideration. Learning either Spry or jQuery is much more "approachable". There is also the issue that EXTJS is harder to get community support in my experience than I have found in both jQuery and SPRY. That is just one user's experience but since Jack's stuff is paid support... it's up to each project manager to make that decision for himself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682444">7</a> by John Farrar
		posted on 6/28/2008 at 11:34 PM
		</div>
		<div class="comment_text"><p>P.S.<br>Spry and jQuery can share space fine... sometimes you may want both. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682453">8</a> by John Whish
		posted on 6/28/2008 at 11:49 PM
		</div>
		<div class="comment_text"><p>Really interesting comments. Just adding my 2 pence...</p><p>I really like jQuery, but agree about the plugins point. The main reason that I choose jQuery over Spry is that Spry relies on adding a namespace to your HTML and then adding attributes to HTML tags. It seems a little bit backwards in terms of thinking as we have moved towards separation of code and presentation (CSS and HTML, MVC design patterns etc). Perhaps I missing the point (I often do!)</p><p>Having said that I think that (as with CF frameworks) you should use which ever one suits your needs best.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682456">9</a> by Brian Swartzfager
		posted on 6/29/2008 at 12:53 AM
		</div>
		<div class="comment_text"><p>Since I used to write my own JavaScript routines before adopting jQuery, I can't refute the notion that folks who are already comfortable with JavaScript will find it easier to learn jQuery.  But like Daniel alluded to, I think that one's knowledge/comfort-level with CSS (or lack thereof) is more of a factor.</p><p>I don't understand this issue with the plugins.  There are a lot of them out there and some work better than others, but they're completely optional:  if the plugin you downloaded and tested turns out to be less than ideal or perhaps even a total dud, you can either tweak, learn enough from it to write your own routines, or ditch it.  How is this different from the plugins written for FireFox, or even the custom tags and CFCs folks have written for ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682452">10</a> by Raymond Camden
		posted on 6/29/2008 at 12:59 AM
		</div>
		<div class="comment_text"><p>Lots of great comments here. I was a bit surprised to see so many on a Saturday. Don't you guys have a life? ;)</p><p>@BrianS: There are a lot of plugins for Firefix, but not many per function (imho). Ie, I don't see a lot of duplication in FF plugins, but there do seem to be a lot for jquery ui. Let me be clear - choice is good. I don't mind that. I'm just speaking as someone who is unfamiliar w/ jQuery. It can be overwhelming. Again - the jQuery UI project seems to be fixing this.</p><p>@John: Odd - to me - Spry seems more direct. I can "see" the html with the {} stuff in it and it makes sense. But in jQuery if I have to loop over and write out stuff like &lt;td&gt; tags, then to me that's harder to read. It's also harder for someone not familiar with JS to update the look and feel. I 100% agree with your point about using the one you are most conformtable with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682455">11</a> by John Whish
		posted on 6/29/2008 at 1:26 AM
		</div>
		<div class="comment_text"><p>@BrianS: The plugins are not a bad thing, it can just take a bit of time to find the good ones. But as they are all free I can't really complain!</p><p>@Raymond: did you actually mean Firefix?! As for my Spry comments, I see your point about being able to see what Spry is doing. I'm coming from the angle of preaching standards and accessibility to my development team so HTML should validate against <a href="http://disq.us/url?url=http%3A%2F%2Fvalidator.w3.org%3AkNVOvjwSB9ik-LgdJMX-YukPrbU&amp;cuid=3321886" rel="nofollow noopener" title="validator.w3.org">validator.w3.org</a>. I also think it works better if aesthetics and functionality can be developed independently. <br>I have a young son so by the time I get to the end of Saturday, I'm too tired for a life :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682463">12</a> by Brian Swartzfager
		posted on 6/29/2008 at 1:56 AM
		</div>
		<div class="comment_text"><p>When the choice is between doing work/chores or messing around online...  :)</p><p>Maybe the better/best way to learn jQuery is to ignore the plugins (and consequently all those choices) at first.  I don't think I was even aware of the existence of the plugins until after I'd been using jQuery for a few weeks.</p><p>But that might be easier said than done depending on what you want to do with jQuery, and adding functionality or effects to tables (something that Spry was specifically designed for) is one area where writing your own jQuery routines could be challenging:  table elements are atypical in some regards and don't "follow the rules" in some cases.</p><p>So table manipulation is one area where I would say the existing plugins are an important (maybe even crucial) part of the toolset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682464">13</a> by Raymond Camden
		posted on 6/29/2008 at 2:40 AM
		</div>
		<div class="comment_text"><p>@John - typo. I meant Firefox. Spry _can_ validate if you include the DTD. Most of my examples don't, but the Spry docs show it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682465">14</a> by Brian Swartzfager
		posted on 6/29/2008 at 2:54 AM
		</div>
		<div class="comment_text"><p>I just wrote a post on my blog listing the jQuery plugins that I use and would recommend to others, and asked folks to list their favorite/not-so-favorite plugins.  Maybe we can come up with a "starter list" of reputable plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682468">15</a> by Daniel Kim
		posted on 6/29/2008 at 3:30 AM
		</div>
		<div class="comment_text"><p>In my evaluations of JavaScript libraries/frameworks for my team, I've asked what the intention and strengths of each of them were.</p><p>IMO, Spry and EXT focuses on specific solutions - data grid populuation and UI elements - and accomplishes them quite well (not to say that they do not have other functions).</p><p>Comparing them to jQuery is somewhat misleading because jQuery provides a broader solution - being able to interact and manipulate with the entire DOM more easily. That said, it plays well with others - whether other libraries with the same broad focus, with libraries with a more UI element focus, or with a (as already mentioned) huge plugin community.</p><p>When asked, I'd recommend to developers who wants to start with a JS library to begin with jQuery. It provides a relatively easy way to be exposed to, and accomplish, many of the fundamental DOM interactions such as creating and modifying elements, their attributes and position, as well as working with AJAX calls and callbacks.</p><p>In regards to quantity/quality of jQuery plugins, I think it is one of its greatest strengths. As Ray mentioned, the jQuery UI library looks very promising as the "official" UI/effects plugins, but I do have to say, one of the big kicks in my day, are the feeds I receive from new open source project sites - whether RIAForge or the latest jQuery Plugin Releases ( <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Flatest_releases%3AFkAARObX7Orqzv_JPNQpxKz3pwk&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/latest_releases">http://plugins.jquery.com/l...</a> ). I agree it is a little overwhelming when trying to choose one option out of five, but it's nicer than choosing out of none.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682473">16</a> by Rey Bango
		posted on 6/29/2008 at 4:20 AM
		</div>
		<div class="comment_text"><p>First, let me do the full disclosure thing by letting people know that I'm part of the jQuery Project Team.</p><p>Now, I think John, Brian &amp; Daniel have done a fine job of outlining the reasons that the jQuery experience is a great one. I think that even new JS developers can become VERY effective in a short amount of time through the use of jQuery's extensive docs, tutorials, books (2 of them), &amp; mailing list. Quite honestly, I believe the jQuery project has the most attentive team and community of any JS library out there and it's the reason that so many people have flocked to use jQuery. I'm sure that there are some features of Spry that are really compelling but when you really need to get something heavy done and you need that support structure, Spry cannot compare to jQuery at all.</p><p>In terms of the plugins, we pride ourselves on our add-ons ecosystem because we believe in empowering our community to build the extensions that they need. Being a OSS project, there's no way that we can effectively monitor and QA every plugin submitted. As Ray alluded to, this is one the reasons that we started the jQuery UI project. But when new plugins are announced to the list, believe me that they are HEAVILY scrutinized by the community. Dan Switzer recently submitted the awesome mcDropDown plugin and immediately updated it based on community feedback.</p><p>Finally, if you want to get feedback on a good plugin (or support period) the mailing list is available for all. When I hear an argument that jQuery isn't easy to learn or info isn't readily available, that's a very good indication that the mailing list hasn't been used. I see this daily when I check jQuery tweets via Summize. It's amazing how users will post a negative comment about jQuery and when asked if they've posted to the mailing list, they acknowledge that they haven't. <br>The really good thing about the jQuery project is that you don't have to learn by the school of hard knocks. We do our best to help everyone, regardless of skill level, and that also sets us apart from 99% of the JavaScript libraries. The tools to find that information you need are there but it's up to you to use them.</p><p>With thas said, I am really happy to see jQuery continue to grow within the CF community and I can assure you that making CF developers successful w/ jQuery is important to me. So I know that a member of the jQuery team is also a devoted member of the CF community and I'm watching out for you guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682471">17</a> by Calvin
		posted on 6/29/2008 at 5:07 AM
		</div>
		<div class="comment_text"><p>As I recall, Spry required changing your structure to support it, whereas jQuery sits separate from your structure.</p><p>Not having to change your structure with proprietary attributes seems desirable.</p><p>The following just feels off:</p><p>&amp;lt;div spry:region="ds1"&gt;<br>&amp;lt;ul spry:repeatchildren="ds1"&gt;<br>&amp;lt;li&gt;{name} - {function::FormattedPrice} &lt;/li&gt;<br>&amp;lt;/ul&gt;<br>&amp;lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682475">18</a> by todd sharp
		posted on 6/29/2008 at 5:19 AM
		</div>
		<div class="comment_text"><p>Rey - I hope you didn't think I was complaining.  I'm only a bit frustrated when a plugin doesn't suit my needs 100% because I'm not comfortable enough to tweak it because of my skill level/comfort with jQuery yet.</p><p>Let's be honest - with OS there is the potential for crap code (hell, look at PHP :).  But at least with CF I can a.) fix it or b.) roll my own.  I'll get there with jQuery eventually... :)</p><p>And again, I wasn't bashing anything.  Right this very second I am signing up for the jQuery list.  I was just waiting for someone like you to tell me about it :D</p><p>As far as the discussion on this vs. that - I personally use a mish mash of many different JS frameworks in my projects.  I choose the right tool for the job - if Spry does something better I do it (as in the data manipulation side).  If jQuery, then I use it...  I'd rather use 2 frameworks in an application then force one of them to do something it's not best suited for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682477">19</a> by Rey Bango
		posted on 6/29/2008 at 5:33 AM
		</div>
		<div class="comment_text"><p>For those interested in learning more about jQuery, here is a great list of resources that I've compiled:</p><p>jQuery Current Version: v1.2.6</p><p>jQuery Main Site:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.com%2F%3AiNlUQWnLprj7E7mA_YJsOSnMGOw&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.com/">http://jquery.com/</a></p><p>The compressed &amp; uncompressed code:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fjqueryjs%2Fdownloads%2Flist%3Aw1ch-08zNMRegJQmox6FMJnqU7w&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/jqueryjs/downloads/list">http://code.google.com/p/jq...</a></p><p>SVN Info:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fjqueryjs%2Fsource%3AYbC-vBXmQkhXFfqe3yNwokBbhkg&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/jqueryjs/source">http://code.google.com/p/jq...</a></p><p>Plugins &amp; UI Widgets/Controls:<br><a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2F%3A4C-q1U7HMMHOZp7qyo-ZD8449kw&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/">http://plugins.jquery.com/</a></p><p>Documentation:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FMain_Page%3ArgOzDdL8qgDgzNvxpvMq5upo4e4&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Main_Page">http://docs.jquery.com/Main...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fremysharp.com%2Fjquery-api%2F%3A9VTE4yDlXOvsPInC9AICwAyCEu8&amp;cuid=3321886" rel="nofollow noopener" title="http://remysharp.com/jquery-api/">http://remysharp.com/jquery...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fapi-browser%2F%3A3aqk2cgENuxn_zhUqkP2Q_Cmym0&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/api-browser/">http://jquery.bassistance.d...</a></p><p>Mailing Lists- jQuery Support, community news:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fjquery-en%3AQBieGAyK2CXiiwI72xIpniIRmCM&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/jquery-en">http://groups.google.com/gr...</a></p><p>Project Blog:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.com%2Fblog%2F%3AFJdUBz4c2HLM6vvmu7W8YBU9w4Y&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.com/blog/">http://jquery.com/blog/</a></p><p>Learning Resources:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FTutorials%3APRNWdt_0dCykV1IqPuDHlCdHEs8&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Tutorials">http://docs.jquery.com/Tuto...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.learningjquery.com%2F%3ANslB_LwYqTCvksSqhQZRN6E7JtM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.learningjquery.com/">http://www.learningjquery.com/</a><br><a href="http://disq.us/url?url=http%3A%2F%2F15daysofjquery.com%2F%3ANbnpTa16kQpFQq5_7xF9CRCxpis&amp;cuid=3321886" rel="nofollow noopener" title="http://15daysofjquery.com/">http://15daysofjquery.com/</a></p><p>Sites Using jQuery:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FSites_Using_jQuery%3AcTdgId11yfiJQVOzTxnaAyuhNGQ&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Sites_Using_jQuery">http://docs.jquery.com/Site...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682478">20</a> by Rey Bango
		posted on 6/29/2008 at 5:34 AM
		</div>
		<div class="comment_text"><p>Also, be sure to follow the following Twitter accounts for the latest jQuery and jQuery UI news:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftwitter.com%2Fjquery%3A0GPHj27HX3zEYflVAxQ-4cIvz1M&amp;cuid=3321886" rel="nofollow noopener" title="http://twitter.com/jquery">http://twitter.com/jquery</a><br><a href="http://disq.us/url?url=http%3A%2F%2Ftwitter.com%2Fjqueryui%3AJrhDiBd-DHS7NDRhyrP6xB9nCh0&amp;cuid=3321886" rel="nofollow noopener" title="http://twitter.com/jqueryui">http://twitter.com/jqueryui</a></p><p>Rey</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682479">21</a> by Raymond Camden
		posted on 6/29/2008 at 5:36 AM
		</div>
		<div class="comment_text"><p>@Calvin: And you see - this is where 'use what you are comfortable' really comes into play. In a non-Ajax app, I'd already have the div and li tags, perhaps driven by CF. Whatever it is - I'd have the content there. So in Spry the onoy change is the spry: tags and the use of {}. To me it feels much more like CF code.</p><p>But this is ONE use of Ajax (Get Data, render a table) and I still say Spry rocks the world at this. But I'm feeling more and more that for other uses I'm going to lean towards jQuery. (Well, no matter what, I'm going to use jQuery 100% for a while just to get more familiar with it.)</p><p>I made a decision earlier today. I've been meaning to do an update to LighthousePro for a while now. LHP makes heavy use of Ajax (Spry) to handle working with issues. The problem though is that 100% of the data is loaded up front. This makes sorting/filtering extremely fast, but doesn't scale when you go over 400 issues. So I know I need to re-architect the setup a bit, and I think I'll use this as an opportunity to work more with jQuery.</p><p>@Rey - I was wondering how long it would take you to chime in. ;) I get that there is a good mailing list. But imagine I'm a newbie - I need feature X via some plugin. I really don't want to have to do research. I just want to get the best X. Now "best" is obviously a point of view. My problem though is that if the goal is to get people going/developing quickly, having to stop and do research for every feature is a bit of a pain. Of course, it's much better to have N ways to skin the cat than 0. Please note that I don't think this bonanza of plugins is a horrible sin or anything. It's just a bit overwhelming. Imagine a guy learning CF and he needs to do a DB query. Imagine then that he would need to go to the Developers Exchange or RIAForge to find the best way to do that. That would (obviously) suck - which is why important stuff like cfquery is built it. I think the jQuery UI project is a good example of this thinking. Yes, a LOT of people need certain UI things, so they really need to be organized into a 'main' library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682484">22</a> by Jim Priest
		posted on 6/29/2008 at 6:00 AM
		</div>
		<div class="comment_text"><p>I love me some jQuery.  I'd have to say when I first started learning jQuery the mailing list rocked.  I could post something and usually one of the jQuery pro's would show me how to do what I was doing 10x better and easier with less code - I too did a lot of extraneous chaining :)</p><p>I will say lately the mailing list has exploded and I don't think you get that same level of feedback. I could see them splitting the list up at some point into beginner, advanced and maybe plugin lists...</p><p>I also agree on the plugins things - I think it would be cool to have a list of 'recommended' plugins or something.  I try to add new plugins to delicious when I see them but there are so many popping up every day it's difficult to keep track of let alone try them all out to see which one's 'best'.</p><p>That said - I think there is a bit of growing pain going on in the community but they have a great team (except for that Rey fellow) :)  And they are getting things sorted out while dealing with the tremendous growth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682481">23</a> by Daniel Kim
		posted on 6/29/2008 at 6:48 AM
		</div>
		<div class="comment_text"><p>@Ray - I agree with you that there are certain similarities Spry has with CF, yet I find it interesting that there is such a large number of CF developers using jQuery and involved in its community - probably much more than you'd find with other communities outside of the Adobe world.</p><p>Although there aren't syntactical similarities ( although these two projects try - <a href="http://disq.us/url?url=http%3A%2F%2Fcfjs.riaforge.org%2F%3AkV9B2ucEl5Ctl1tGUAJJRryKDoc&amp;cuid=3321886" rel="nofollow noopener" title="http://cfjs.riaforge.org/">http://cfjs.riaforge.org/</a> and <br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fcoldquery%2F%3A3LIRAh7psKboEBpg66b63uF0QoE&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/coldquery/">http://code.google.com/p/co...</a> ), I do think they are both appealing in how they make hard things easy. Currently, I'm designing a scheduling app that will have drag and drop functionality. The fact that I can do this with jQuery UI:</p><p>$("div.task").draggable(<br>  { containment: "#calendar_container"<br>  , opacity: .5<br>  , revert: true<br>  } );</p><p>makes me want back the weeks I spent a couple of years ago trying to get a div to be drag and droppable (in IE6!).</p><p>Our company uses Lighthouse Pro (it needs to always be said - thank you!), so I am really looking forward to seeing the updates with jQuery you will be making.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682482">24</a> by Justin Carter
		posted on 6/29/2008 at 12:28 PM
		</div>
		<div class="comment_text"><p>@todd: I didn't say ExtJS was lightweight - I know it's not :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682483">25</a> by Hatem Jaber
		posted on 6/29/2008 at 11:38 PM
		</div>
		<div class="comment_text"><p>Let's get a JQuery Steering Committee going to decide which plugins make it the UI!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682487">26</a> by Rey Bango
		posted on 6/30/2008 at 1:10 AM
		</div>
		<div class="comment_text"><p>@Hatem: The jQuery and jQuery UI projects aren't in need of a steering committee. We do a great job of managing the projects and we're extremely in tune with the needs of the community. With that said, please feel free to offer your suggestions.</p><p>Rey...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682480">27</a> by Sebastiaan
		posted on 6/30/2008 at 3:52 PM
		</div>
		<div class="comment_text"><p>Hi all,</p><p>just wondering if the built-in CF8 features of CFGRID delivers the same stuff Spry does in f.ex. Lighthouse Pro? BEN: Could you do the same with CFGRID as you have implemented it with Spry?</p><p>And isn't all the wonderful CF8 stuff done with ExtJS? Why aren't we as CF developers using that more?</p><p>And Ben, thanx 4 providing us with so much great OS software ;-) I agree this needs to be said more often!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682486">28</a> by Raymond Camden
		posted on 6/30/2008 at 3:56 PM
		</div>
		<div class="comment_text"><p>@Seb: You mention "fex" - which I read as effects. In general, CF8's ajax support doesn't give you any effects. Like, you can't say "Take this div and fade it out." Although you then mention LHP - which doesn't have any effects at all - just simple data handling. So I may be reading you wrong.</p><p>You then ask - why aren't we all using CF8's Ajax stuff. Who says we aren't? ;) I think CF8's Ajax support kicks butt. However, I'd say it's mostly for people who don't know Ajax and want a quick and simple way to get stuff done. (Except for ajaxproxy, which I could see even Ajax experts using.)</p><p>Oh - and by Ben did you mean Ray? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682485">29</a> by Sebastiaan
		posted on 6/30/2008 at 4:02 PM
		</div>
		<div class="comment_text"><p>Hi RAY ;-)</p><p>Yes, I've spent way too much time online today commenting here and there and reading lots of CF-stuff. My apologies for being so vague and dead wrong in addressing you Ray, the creator of so much nice OS software ;-) I've spent some time today over at Ben Nadel's website regarding his Kinky Calendar project, so that's the reason for my addressing you wrongly.</p><p>By f.ex I meant for example, meaning could you do with CFGRID what you do with SPRY in LHP?</p><p>I'm not so much an effects guy as a functionality guy. That's why I ask if I can achieve the same with the built in CF8 goodies as with the different JS-frameworks (like YUI f.ex. - for example).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682488">30</a> by Raymond Camden
		posted on 6/30/2008 at 4:06 PM
		</div>
		<div class="comment_text"><p>Well, LHP's grid does sorting, paging, filtering. CF's grid does the sorting and paging built in. The filtering it does not do but it is possible. With binding, you could set it up so that when you changed a drop down, the data for the grid changes as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682491">31</a> by todd sharp
		posted on 6/30/2008 at 4:32 PM
		</div>
		<div class="comment_text"><p>@Justin - actually I meant to address Neil with the ExtJS/lightweight comment.  He stated above that it is "fairly lightweight", not you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682492">32</a> by DanaK
		posted on 6/30/2008 at 4:52 PM
		</div>
		<div class="comment_text"><p>I'd have to say both Spry and JQuery have their place, depending on what you're trying to do and your background.</p><p> I've been immensely impressed with JQuery's documentation and tutorials online. They've really done them up right, and set a good standard for other projects to follow imho.</p><p> I agree with someone aboves point. The use of chaining and selectors, I feel, makes my code easier to read/decipher quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682490">33</a> by Rey Bango
		posted on 6/30/2008 at 5:30 PM
		</div>
		<div class="comment_text"><p>Just a quick note to everyone, jQuery is spelled w/ a lowercase "j" and an upper case "Q". So it's "jQuery". :)</p><p>I'll talk w/ the team to see what we can do about organizing the plugins in a better way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682493">34</a> by Jim Priest
		posted on 6/30/2008 at 5:46 PM
		</div>
		<div class="comment_text"><p>@Rey - I think the organization is OK.   My problem is twofold:</p><p>1) Keeping up with new plugins<br>2) Knowing which plugin is 'best'</p><p>#2 is probably impossible but still a list of 'recommended plugins' for basic stuff like validation and autocomplete would be handy vs. digging though the extensive plugin listing...</p><p>Maybe #1 could be handled via a weekly post to the blog and mailing list with a compiled list?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682494">35</a> by Raymond Camden
		posted on 6/30/2008 at 5:56 PM
		</div>
		<div class="comment_text"><p>@Rey - Heh, welcome to the ColdFusion/Cold Fusion problem. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682495">36</a> by David McGuigan
		posted on 6/30/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>Long answer short, you should learn Ext. It's about 10 times as robust, feature-rich, and powerful as the other two combined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682496">37</a> by Rey Bango
		posted on 6/30/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>@David: Let me preface this by saying that I was part of the Ext team as well.</p><p>Ext &amp; jQuery play in to VERY different spaces and while Ext is great for building RIA applications, much like Flex, jQuery is definitely better suited for enhancing web applications that don't require the overhead of a massive UI library. And I know this because I was DEEPLY entrenched in the Ext project and helped Ext customers make the right choices based on their needs.</p><p>So no, you should not learn Ext and be done with it. You need to look at the library which is best suited for your application and learn that. Ext is *NOT* the best solution for all situations and neither is jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682498">38</a> by todd sharp
		posted on 6/30/2008 at 8:58 PM
		</div>
		<div class="comment_text"><p>Amen!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682497">39</a> by Daniel Kim
		posted on 6/30/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>In regards to the original question of the blog post, it would be hard for me to see EXT being easier to pick up for someone looking to get familiar with JavaScript and a JavaScript library.</p><p>I think EXT is ridiculously awesome at what it provides - I remember always right clicking EXT elements to confirm they were not SWFs. They provide some incredibly powerful UI elements, but there are some things to consider when deciding to choose it for a project:</p><p>- the core library is more cumbersome to use than jQuery's core, which is a huge deal if you are not specifically using a library for the UI elements</p><p>- the UI elements are relatively heavy - both in the download of js, css, and image files, and in its transformation of the DOM (a lot of times I want a table to be a table, not a bunch of divs)</p><p>- the difficulty of skinning (at least for me with my very limited graphics ability - it would probably take me a week to create a sprite, much less find all the css rules and images that I would need to change). this can sometimes force making a site conform to the look of UI elements, instead of the other way around. Contrast with this sweet project - <a href="http://disq.us/url?url=http%3A%2F%2Fui.jquery.com%2Fthemeroller%3A0rjkjtblAosWushnlzF6Z8AtEvs&amp;cuid=3321886" rel="nofollow noopener" title="http://ui.jquery.com/themeroller">http://ui.jquery.com/themer...</a></p><p>- the former fuzziness of their license, and their recent move to a "viral" GPL open source license with their dual licensing (have no problems paying for it if I need it for a commercial project, but this is not an issue with jQuery)</p><p>Given the nature of EXT, my choice generally isn't between it and jQuery - it would be between it and Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682500">40</a> by Michael Markowski
		posted on 6/30/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for your thoughtful and insightful response to a complex question.  Based on your response, I'm inclined to start with Spry and eventually work my way up to learning jQuery.  Spry appears to be a better choice for beginners like me who are manipulating and presenting data on the client-side, and this is something that I'm going to need in the near future.  Although Spry doesn't have as many colorful and exciting UI widgets as jQuery I'm more interested in the data presentation capabilities for now, and I need this stuff to be as simple and approachable as possible while I'm learning.</p><p>Lastly, I wanted to mention that my boss at work has agreed to buy Dreamweaver CS3 for us.  As you may know, Spry is built in to Dreamweaver CS3 and I think that this may be just the sort of hand-holding I'll need until I get up to speed on it.  Yes, I'm one of those stubborn holdouts who still uses Dreamweaver (and not CFEclipse) to code my ColdFusion apps but, given that Spry is built into my IDE, I have even less reason to switch now.  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682499">41</a> by Neil Bailey
		posted on 6/30/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>ExtJs is definitely NOT what one would call "lightweight", and there is definitely a learning curve.  That being said, it is the best JS UI package available, bar none (or, if there is a better one, I have yet to come across a better one :)</p><p>I am definitely not jumping on the back of Spry OR jQuery - in fact, I know less than next to nothing about either.  We had played with flash forms internally when they first came out in CF...7??  And we were GROSSLY disappointed.  We made an internal decision to go w/ AjaxCFC and a JS UI package (we had originally looked at YUI, and moved on to ExtJs).</p><p>I just wanted to clarify in case it had sounded like i was downing on jQuery (I couldn't pick jQuery out of a lineup) or Spry (same thing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682501">42</a> by cf_Ray
		posted on 12/10/2009 at 9:46 PM
		</div>
		<div class="comment_text"><p>I too have a history of javascript avoidance! For the past few years I've found myself working either at the service layer with CF or UI work with Flex.</p><p>My current job requires 508 compliance for all applications. I decided to take a look at js libs that would be compliant.</p><p>In my very non-scientific research of the major libs, I found Spry to be the most lovable by accessibility checkers.</p><p>I understand future versions of jQuery and the like will be more better but for now Spry is the right tool for the job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682502">43</a> by Jose
		posted on 1/18/2010 at 5:34 PM
		</div>
		<div class="comment_text"><p>Do the following:</p><p>Ctrl+U<br>Ctr+F<br>jquery.js&lt;intro&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682503">44</a> by Rolfen
		posted on 4/3/2010 at 5:38 PM
		</div>
		<div class="comment_text"><p>Spry is scary. The documentation spans over multiple pages. The code is more "opaque" (to me) then the jQuery one.<br>jQuery is more minimalistic, which makes it less "scary" in some instances,  but also more of a mind-twist to get it to do what you want.<br>BTW, I have only some jQuery experience, but non with spry.</p></div>
	</div>
</div>
		