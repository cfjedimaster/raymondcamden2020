
<div class="comment" id="c_1713719144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719144">1</a> by Stacey Abshire
		posted on 10/19/2009 at 4:12 PM
		</div>
		<div class="comment_text"><p>I'm a coldfusion noob, so maybe that skews my thoughts here, but it looks to me, that you are returning a value from a variable whose type is not clearly defined, though you are defining a specific return type for the function.  Changing the argument type from "any" to "numeric" would fix this and be more correct, right?  Just my two cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719143">2</a> by Raymond Camden
		posted on 10/19/2009 at 4:17 PM
		</div>
		<div class="comment_text"><p>I wrote this blog entry early, so maybe it's my fault, but you do get the point, right? Yes, numeric _is_ better, but it throws a bug, so we can't use it in CF9. That's the whole point of this blog entry, to say that returnType=numeric will break under CF9 (with returnFormat=json).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719132">3</a> by Stacey Abshire
		posted on 10/19/2009 at 4:21 PM
		</div>
		<div class="comment_text"><p>I'm using 8 here, but what I was referring to was that you have</p><p>&lt;cfargument name="id" type="any"&gt;<br>    &lt;cfreturn <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>&gt;</p><p>instead of</p><p>&lt;cfargument name="id" type="numeric"&gt;<br>    &lt;cfreturn <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>&gt;</p><p>Does that change the outcome for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719147">4</a> by Edward Smith
		posted on 10/19/2009 at 4:45 PM
		</div>
		<div class="comment_text"><p>I think this is just another manifestation of a widespread JSON encoding bug with datatypes.</p><p>I reported a version of this quite a while ago, but was disappointed to have it not fixed in 9.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D74140%3AgPvG_P_ndeCZsBXiwdCi4l0-9KY&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=74140">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719142">5</a> by Jeffrey Gordon
		posted on 10/19/2009 at 4:50 PM
		</div>
		<div class="comment_text"><p>CF has had casting bugs for some time now and they do not seem to want to fix them.  I reported awhile back (I think around CF5) a cast error that was thrown if you tried to serialize a query recordset containing a clob to wddx.  As far as I know that bug had not been fixed, course my last check of that bug was in CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719151">6</a> by Raymond Camden
		posted on 10/19/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>Stacey... am I not being clear? I'm reporting a bug about type=numeric. That's the point of this article. type=numeric will throw an error in CF9. I switched to type=any as a workaround for the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719149">7</a> by John Hodorowicz
		posted on 10/19/2009 at 6:31 PM
		</div>
		<div class="comment_text"><p>Stacey's referring to difference between the argument (id) type being "any" and the function returntype "numeric" (since the function is just returning the value of the argument, id).</p><p>I'm not sure how or if this affects the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719148">8</a> by Raymond Camden
		posted on 10/19/2009 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ah duh. Afaik, it has zero impact here. The main factor is the _returnType_ only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719154">9</a> by Asha
		posted on 10/20/2009 at 9:58 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>We are aware and we have fixed this issue, we will soon be releasing the fix,will let you know once the technote is out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719152">10</a> by Raymond Camden
		posted on 10/20/2009 at 3:17 PM
		</div>
		<div class="comment_text"><p>Awesome. Thank you for the update!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719145">11</a> by abhijit
		posted on 11/1/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p> I need to load data in a dynamic table using javascript(json).</p><p> I am using the cfajaxproxy tag and also serializejson function to get data from cfc method  but dont know  how to load the data in the javascript table.........</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719150">12</a> by Raymond Camden
		posted on 11/1/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>You would need to work with the result to "write" the rows out back to the table. In jQuery it would be a matter of creating an HTML string and just appending it to the table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719153">13</a> by Doug
		posted on 1/13/2010 at 1:02 AM
		</div>
		<div class="comment_text"><p>Hey Ray, Have you heard if this bug has been fixed yet for 9?  I just ran into it today and it's been driving me nuts.  I don't see anything on Adobe's website about any hotfixes for 9 yet, but perhaps there's some top-secret link that you're aware of maybe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719134">14</a> by Raymond Camden
		posted on 1/13/2010 at 1:04 AM
		</div>
		<div class="comment_text"><p>I'm not aware of a fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719141">15</a> by Doug
		posted on 1/13/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>Bummer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719133">16</a> by Gregory Matthews
		posted on 2/4/2010 at 1:09 PM
		</div>
		<div class="comment_text"><p>I was wondering what the heck was going on. I was able to pinpoint the cause after a lot of frustration and did exactly what you describe here.</p><p>Oh, and I also reverted back to CF8 until CF9 works through some of these types of kinks!</p><p>G.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719136">17</a> by Dave Phipps
		posted on 4/19/2010 at 1:22 AM
		</div>
		<div class="comment_text"><p>I am still seeing this error even when I have applied the latest cf 9 hotfix. I have also changed the returntype to any but still see the error. If I change the returnformat from 'json' to 'plain' in the call to the remote method then it returns the correct value.</p><p>I can't easily change all remote calls to use plain as some return more than just a simple value.</p><p>Any other suggestions/fixes available apart from going back to cf8!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719139">18</a> by Raymond Camden
		posted on 4/19/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>I don't believe that hotfix mentions a fix for this, does it? If you don't see it listed then obviously it isn't fixed yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719135">19</a> by Dave Phipps
		posted on 4/19/2010 at 1:44 AM
		</div>
		<div class="comment_text"><p>Apparently it is: 80375 (6th item in list) on this page: <a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F825%2Fcpsid_82536.html%3Ac7ZHl5ggoIfB-yFhrrCFKpaX6fA&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/825/cpsid_82536.html">http://kb2.adobe.com/cps/82...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719140">20</a> by Raymond Camden
		posted on 4/19/2010 at 1:52 AM
		</div>
		<div class="comment_text"><p>Interesting. Did you restart after applying the hotfix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719137">21</a> by Leah Schuster
		posted on 6/24/2010 at 1:00 AM
		</div>
		<div class="comment_text"><p>This hotfix was a lifesaver. It took care of the JSON bug and the CFC mapping error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719138">22</a> by Dave Phipps
		posted on 6/24/2010 at 2:11 AM
		</div>
		<div class="comment_text"><p>Nothing like a speedy follow up - I logged the problem with Adobe and it appears that there was a problem with the hotfix jar I was downloading from their site. The engineer sent me a fresh copy and the file size was different. Reapplied the new larger hotfix file - restarted cf and all is working again.</p></div>
	</div>
</div>
		