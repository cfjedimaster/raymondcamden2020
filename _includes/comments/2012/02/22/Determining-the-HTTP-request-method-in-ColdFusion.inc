
<div class="comment" id="c_1713739144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739144">1</a> by Ty Whalin
		posted on 12/9/2013 at 7:45 PM
		</div>
		<div class="comment_text"><p>Okay Ray, here is one for ya. I am trying to make use of the cfheader tags. I am setting the cache controls with the cfheader tags. I set the cache-control max-age=30 for testing but when using the getHttpRequestData function to retrieve information about the requested page, it shows the cache-control max-age=0. Why is the cache-control max-age still being set to 0?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739137">2</a> by Raymond Camden
		posted on 12/9/2013 at 9:32 PM
		</div>
		<div class="comment_text"><p>Not sure on that one. Do you have a test file I can try running?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739139">3</a> by Ty Whalin
		posted on 12/10/2013 at 12:43 AM
		</div>
		<div class="comment_text"><p>This is what I have been working with for now. Think it is actually working correctly now. Trying to increase page speed with browser caching. I have been using the cfcache tag as well.</p><p>&lt;cfheader name="cache-control" value="no-cache"&gt;<br>&lt;cfheader name="cache-control" value="public"&gt;<br>&lt;cfheader name="cache-control" value="must-revalidate"&gt;<br>&lt;cfheader name="cache-control" value="max-age=3600"&gt;<br>&lt;cfset dtExpires = (now() + 1) /&gt;<br>&lt;cfset strExpires = getHttpTimeString(dtExpires) /&gt;<br>&lt;cfheader name="expires" value="#strExpires#"&gt;<br>&lt;cfheader name="pragma" value="no-cache"&gt;<br>&lt;cfset strGMT=(DateFormat(now()+1, "ddd, dd mmm yyyy") &amp; " " &amp; TimeFormat(now(), "HH:mm:ss") &amp; "GMT") /&gt;<br>&lt;cfset lastGMT=(DateFormat(now()-1, "ddd, dd mmm yyyy") &amp; " " &amp; TimeFormat(now(), "HH:mm:ss") &amp; "GMT") /&gt;<br>&lt;cfheader name="last-modified" value="#lastGMT#"&gt;<br>&lt;cfheader name="cache-control" value="max-age=3600"&gt;<br>&lt;cfheader name="date" value="#getHttpTimeString()#"&gt;<br>&lt;cfset etag = application.VersionKey /&gt;<br>&lt;cfif (cgi.http_if_none_match eq etag)&gt;<br>    &lt;cfheader statuscode="304" statustext="Not Modified" /&gt;<br>    &lt;cfexit /&gt;<br>&lt;/cfif&gt;<br>&lt;!--- &lt;cfheader name="etag" value="#createUUID()#"&gt; ---&gt;<br>&lt;cfheader name="etag" value="#etag#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739140">4</a> by Raymond Camden
		posted on 12/10/2013 at 1:42 AM
		</div>
		<div class="comment_text"><p>Ah ok - well - glad you got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739142">5</a> by Ty Whalin
		posted on 12/10/2013 at 4:05 AM
		</div>
		<div class="comment_text"><p>Now I am playing with cfcache functions mixed with the Application.cfc. Little more advanced, but making some progress. The problem is when I run the speed suggestions test in GA, it shows (expiration not specified) for browser caching. Still trying to leverage browser caching and set a expiration on the page/files. All suggestions appreciated. I have managed to make the pages cache with:<br>&lt;cfcache action="cache" protocol="http://" timespan="#CreateTimeSpan(0,0,30,0)#" idletime="#CreateTimeSpan(0,0,5,0)#" stripWhiteSpace="true" throwOnError="true" usequerystring="true"&gt;- - content - -&lt;/cfcache&gt; No dynamic content only. I do know the new cache tag can also cache dynamic content as well.</p><p>I have even made use of a custom cache and output the content on the page with it. But I found using this method was somewhat confusing since the cache wrapped, say an image and then output the same image on the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739145">6</a> by Ty Whalin
		posted on 12/10/2013 at 8:37 AM
		</div>
		<div class="comment_text"><p>Okay, how about this one. I am using the cfcache on the page. The cfache works, but the CFIDE cfform.js and masks.js are duplicating in the header and the &lt;cfhtmlhead text="&lt;link href='http://#CGI.HTTP_HOST#/favicon.ico' rel='Browser Icon' type='image/x-icon'/&gt;&lt;title&gt;page title&lt;/title&gt;"/&gt; is duplicating; along with the generated _CF_checkCFForm_1 = function(_CF_this) scripting as well. Know of a cfcache bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739133">7</a> by Ty Whalin
		posted on 12/10/2013 at 9:55 AM
		</div>
		<div class="comment_text"><p>Next, I removed all forms of cfcache and added this cfache to the page right above the body tag. &lt;cfcache action="clientcache" timespan="#createTimeSpan(0,0,30,0)#" protocol="http://" idletime="#createTimeSpan(0,0,5,0)#" stripWhiteSpace="true" throwOnError="true" useCache="true"&gt;</p><p>If I close the tag anywhere on the page it produces the duplicate issue's again. My test page to flush and check for caching show the page as caching. Is there anyway to show whether the page is using the server side cache or the clientcache? I currently have it set to client side caching since the page speed tester is asking for browser caching, which is on the client side. What do you think now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739143">8</a> by Raymond Camden
		posted on 12/10/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>When you do &lt;cfcache&gt;&lt;/cfcache&gt; the behavior is different than just one &lt;cfcache&gt;. &lt;cfcache&gt;&lt;/cfcache&gt; will cache just the stuff on the inside - but the form stuff you use may still be trying to inject into the header anyway. You may have found a bug here though. Best I can say is file it.</p><p>And *stop* using cfform!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739135">9</a> by Ty Whalin
		posted on 12/12/2013 at 6:24 AM
		</div>
		<div class="comment_text"><p>Right on Ray. Since the last comment, I have converted a few pages to HTML5, removed the useCache=true function, added a cache.appache manifest file for all HTML5 pages, ran a test to show the browser is now caching the pages, left the cfcache tag without any closing tag for it on the page above the body and removed the cfheader tag's. I also shifted the cfheader tag's to meta cache-control.</p><p>After removing the useCache=true and still not putting a close tag or trailing slash on the cfcache tag, I have managed to avoid the duplication issue with the cfform.js, masks.js and any cfhtml title tag's. This has produced a server cache for sure and now with the manifest file a browser cache.</p><p>In the GA account it shows the server response time as a go but the files needing to be cached by the browser as still not having an expiration date. So I have now contacted the hosting company to ask questions. They have stated that this is a recent issue several clients have submitted tickets for and plan to send me an update soon.</p><p>The next step is to possibly add the files needing cached - to the .htaccess file. Will keep you posted. By the way I just got the test release from Adobe for the new Splendor and Thunder. How about you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739132">10</a> by Raymond Camden
		posted on 12/13/2013 at 6:04 PM
		</div>
		<div class="comment_text"><p>"By the way I just got the test release from Adobe for the new Splendor and Thunder. How about you?"</p><p>Ahem - you aren't supposed to talk about that publicly. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739131">11</a> by Ty Whalin
		posted on 12/14/2013 at 10:35 PM
		</div>
		<div class="comment_text"><p>I read the agreement, but do not recall it saying anything about not being able to say I am involved in the testing. But you probably are right. To be on the safe side then, just delete the comment. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739141">12</a> by Raymond Camden
		posted on 12/15/2013 at 12:29 AM
		</div>
		<div class="comment_text"><p>Nah, don't stress over it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739138">13</a> by Ty Whalin
		posted on 12/15/2013 at 8:15 AM
		</div>
		<div class="comment_text"><p>Well, for the final outcome; I ended up getting a total output performance score of 98 out of 100. Could not get it to 100% total. Close enough. Here is the page I just finished if you care to take a quick look at it. Or actually just click the link on my name. I thought about changing the max-age time. What would you think is suitable. I found 3600 to be the average for the most part.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739152">14</a> by Raymond Camden
		posted on 12/16/2013 at 7:19 AM
		</div>
		<div class="comment_text"><p>Seemed to load pretty darn quick to me. I think at this point we are a bit off topic now from the main blog topic so if you have more on this, ping me directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739153">15</a> by Ty Whalin
		posted on 12/22/2013 at 2:16 AM
		</div>
		<div class="comment_text"><p>A tad off topic, but it all revolved around caching problems. I ended up utilizing a script for the Safari console to determine if the pages were caching or not. Plus I added a manifest file for HTML5 and deferred certain scripts to help along. Although I lost my event tracking when trying to defer the analytics code so I lost some page performance when not defering the analytics code. But still loads pretty quick. Appreciate all the help - Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2807133121">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2807133121">16</a> by Link Worx Seo
		posted on 7/27/2016 at 10:14 PM
		</div>
		<div class="comment_text"><p>Oddly enough, I made my way back to your post. Have come a long ways since this set of post before. I All caching problems solved and have converted to almost completely cfscript and HTML5, Upgraded my CMS system, played with Mura, and am currently creating another website for my business.</p></div>
	</div>
</div>
		