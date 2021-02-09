
<div class="comment" id="c_1713725659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725659">1</a> by Dave Ferguson
		posted on 7/25/2010 at 8:04 PM
		</div>
		<div class="comment_text"><p>Great post Ray.  I have been using jqtouch for a while and absolutely love it.   For the Ajax part I do it a different way.  I have a JS function that calls a cfc.  That cfc returns content that will fill the innerHTML of a div in the main body.  I then use JS to trigger the animate function to switch to that div.</p><p>Using jqtouch was what got me into doing things with base64 images.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725664">2</a> by Ben Nadel
		posted on 7/26/2010 at 4:38 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Good stuff - after you tweeted about it this weekend, I was definitely interested to see where you went with it. In fact, after you tweeted about it, I decided to look into some CSS animations (which jQTouch uses -- wow, that was a humbling few hours).</p><p>I played with jQTouch a while back and found it to be very cool as long as it did exactly what you wanted; I think , like you, when you need to change it up a bit, it suddenly becomes a bit wonky. I had a situation where I wanted to bind() to a link that loaded an AJAX page and have the page that it linked to show a "loading..." string prior to the AJAX actually having been loaded.</p><p>After like 4 hours, I couldn't get that to work at all. I ended up having to manually trigger the "touch" event... and found out that manually triggering it didn't seem to actually doing anything...</p><p>Anyway, I'm feeling very inspired to see you working on this. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725658">3</a> by brian
		posted on 7/28/2010 at 11:17 AM
		</div>
		<div class="comment_text"><p>If Adobe could find some way to integrate JQTouch or something similar into CF10 then it could have the same impact as the introduction of Ajax had for CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725662">4</a> by Raymond Camden
		posted on 7/28/2010 at 12:11 PM
		</div>
		<div class="comment_text"><p>I was actually considering whipping up some custom tags to abstract some of this out.</p><p>&lt;cf_jqtouch&gt;<br>  &lt;cf_jqtouchhome&gt;<br>    &lt;cf_jqtouchmenu label="About" src="about"&gt;<br>  &lt;/cf_jqtouchome&gt;</p><p>  &lt;cf_jqtouchpage id="about"&gt;<br>  This is the abouve<br>  &lt;/cf_jqtouchpage&gt;</p><p>&lt;/cf_jqtouch&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725665">5</a> by brian
		posted on 7/29/2010 at 10:52 AM
		</div>
		<div class="comment_text"><p>custom tags - yes please</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725663">6</a> by Derek
		posted on 7/29/2010 at 9:07 PM
		</div>
		<div class="comment_text"><p>It's actually Sencha Touch now</p><p>**can't post url. flagged as spam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725657">7</a> by Raymond Camden
		posted on 7/29/2010 at 9:11 PM
		</div>
		<div class="comment_text"><p>Sorry the URL was flagged. So I knew it was 'with' Sencha, but has it been renamed? The jQTouch site doesn't seem to say that (but I may have missed it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725666">8</a> by Derek
		posted on 7/29/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>ya, found it weird that it didn't say anything.</p><p>add this to the url.</p><p>/blog/2010/06/17/introducing-sencha-touch-html5-framework-for-mobile/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725660">9</a> by Dave Ferguson
		posted on 7/30/2010 at 6:26 PM
		</div>
		<div class="comment_text"><p>@ray  I was looking at your example using one of the items to load an html file instead of linking to an existing div (point 6 on the post).  This technique intrigued me as I was unaware that it was even possible.  In playing with it I found out a couple interesting things.</p><p>First, there is a minor error in your example code.  The primary div in the cylon.html has the same id as an already exiting div.  Since these need to be unique this causes an issue if you click on the cylon menu item again.</p><p>Along with this it would appear that the href of the cylon menu item is rewritten to the id of the returning div after first click. The fact that the href is rewritten this would mean that it will not make subsequent calls to the server for new content.  I have not yet found a way around this yet as it appears to happen due to jQtouch functionality.</p><p>Thanks,</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725661">10</a> by Raymond Camden
		posted on 7/30/2010 at 6:29 PM
		</div>
		<div class="comment_text"><p>I'll try to fix that typo asap. To your second point, jQTouch will, by default, only load a remote item once. However, you can change that as a config option. I don't have the docs in front of me right now, but it's a simple boolean argument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725668">11</a> by Dave Ferguson
		posted on 7/30/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>I found the config option, it is:  cacheGetRequests.  However, what ends up happening is that the call is made and the new return is added to the dom.  So, if you are loading a lot of content the local content could get quite large since the previous load is left behind and not removed.</p><p>The content also gets the same div id unless it is dynamically changed.  I am not sure what this might do to the app after continued, same session, use. It would be cool if the previously loaded content could be destroyed.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725672">12</a> by Raymond Camden
		posted on 7/30/2010 at 6:44 PM
		</div>
		<div class="comment_text"><p>Seems like that would be a memory issue. Have you raised that on the mailing list?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725674">13</a> by Dave Ferguson
		posted on 7/30/2010 at 6:46 PM
		</div>
		<div class="comment_text"><p>Nope.. I will though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725670">14</a> by Justin Carter
		posted on 7/31/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>For those wondering about the relationship / difference between jQTouch and Sencha Touch, read David Kaneda's blog post:<br><a href="http://disq.us/url?url=http%3A%2F%2F9-bits.com%2Fpost%2F723711597%2Fjqtouch-and-sencha-touch%3AKxipXIspI0d4Pz5S5ZmURPSrcM4&amp;cuid=3321886" rel="nofollow noopener" title="http://9-bits.com/post/723711597/jqtouch-and-sencha-touch">http://9-bits.com/post/7237...</a></p><p>He created jQTouch first, which is of course powered by jQuery and MIT licensed.  Similar to jQuery the main idea is to provide progressive enhancement to mobile browsers as we often do on normal websites for desktop browsers.</p><p>Sencha (previously Ext) hired him to build Sencha Touch. Similar to Ext JS the main idea is to build JavaScript-based applications for mobile devices.</p><p>So jQTouch hasn't been "replaced" by Sencha Touch by any means, they're separate libraries with slightly different use cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725669">15</a> by Raymond Camden
		posted on 7/31/2010 at 7:47 PM
		</div>
		<div class="comment_text"><p>Justin, thank you very much for these details!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725675">16</a> by Derek
		posted on 8/2/2010 at 1:37 AM
		</div>
		<div class="comment_text"><p>@Justin: thx for that. Nobody ever really explained it. Seemed like Ext guys were taking it over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725673">17</a> by Chris
		posted on 2/3/2011 at 8:47 AM
		</div>
		<div class="comment_text"><p>Raymond, thanks for this. I'm building a web app that's using Ajax to call in a lot of outside HTML pages. I wonder if you can expand at all on "doing crap" after you call cylon.HTML - I need to run a JavaScript on the called page, but am having no luck...and I'm not experienced enough with Ajax or js to know what I dont know. Would really appreciate any insights.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725677">18</a> by Chris
		posted on 2/3/2011 at 8:47 AM
		</div>
		<div class="comment_text"><p>Raymond, thanks for this. I'm building a web app that's using Ajax to call in a lot of outside HTML pages. I wonder if you can expand at all on "doing crap" after you call cylon.HTML - I need to run a JavaScript on the called page, but am having no luck...and I'm not experienced enough with Ajax or js to know what I dont know. Would really appreciate any insights.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725680">19</a> by Raymond Camden
		posted on 2/3/2011 at 7:15 PM
		</div>
		<div class="comment_text"><p>I had to reread the post - it has been a while. :) So point 9 (may be hard to see - forgot to add a paragraph tag) talks about how you listen for the 'in' event for page navigation. Did you try that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725676">20</a> by Chris
		posted on 2/3/2011 at 7:41 PM
		</div>
		<div class="comment_text"><p>I did Raymond, and I think that's where the answer lies - though it's murky for me.  Would I discuss the #somepage that launches the ajax page, or would I discuss the remote page?  That is:</p><p>$('#somepage').live('pageAnimationEnd', function(&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fremotesite.com%2Fjs%2Fsomescript.js%3AbB6QqKQyxiI1jZR6cAfOL5guUg4&amp;cuid=3321886" rel="nofollow noopener" title="http://remotesite.com/js/somescript.js">http://remotesite.com/js/so...</a>"&gt;&lt;/script&gt;){<br>          if (info.direction == 'in');<br>                    });</p><p>Where inside the #somepage div I have a &lt;ul&gt; menu, of which one of the &lt;li&gt; points to mypage.html -</p><p>Or:</p><p>$('folder/another/mypage.html').live('pageAnimationEnd', function(&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fremotesite.com%2Fjs%2Fsomescript.js%3AbB6QqKQyxiI1jZR6cAfOL5guUg4&amp;cuid=3321886" rel="nofollow noopener" title="http://remotesite.com/js/somescript.js">http://remotesite.com/js/so...</a>"&gt;&lt;/script&gt;){<br>          if (info.direction == 'in');<br>                    });</p><p>None of these actually work, by the way, and my syntax is crap, I'm sure, but hopefully my question is clear enough for some guidance?</p><p>By the way, to muddy the waters further - when I do just put that &lt;script&gt;javascript&lt;/script&gt; inside the &lt;/head&gt; section of the main page, the javascript fires just fine on the remote pages using iOS devices.  On Android, though, they break - so I'm looking for a cross-browser workaround.</p><p>I understand I'm kind of taking a tangent from your post/blog purpose, so really - any thoughtful assistance you can provide is so appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725671">21</a> by Raymond Camden
		posted on 2/3/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Both are totally wrong. :) You don't use the &lt;script&gt; tag like that. Instead, just use code.</p><p>$("#somepage").live("pageAnimationEnd"), function(<br>alert('hi ray');<br>);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725678">22</a> by Anupum pant
		posted on 1/18/2014 at 3:31 PM
		</div>
		<div class="comment_text"><p>Oh! Thank you so much for the paragraph CSS. I was looking for exactly the same things. Was really going crazy with no margins and poor formatting of the paragraph tag.<br>You are an angel :)</p></div>
	</div>
</div>
		