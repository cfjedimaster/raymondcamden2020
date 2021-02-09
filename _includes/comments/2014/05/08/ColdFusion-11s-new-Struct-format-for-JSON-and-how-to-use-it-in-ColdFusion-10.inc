
<div class="comment" id="c_1714082906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082906">1</a> by Brian Meloche
		posted on 5/9/2014 at 3:05 AM
		</div>
		<div class="comment_text"><p>Couldn't you use the CFLIB function queryToArrayOfStructures(), convert the query using that, and then serialize that to achieve the same result? That's how I've been doing it for years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082911">2</a> by Scott Stroz
		posted on 5/9/2014 at 3:19 AM
		</div>
		<div class="comment_text"><p>I am NOT 53, yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082909">3</a> by Todd Sharp
		posted on 5/9/2014 at 3:43 AM
		</div>
		<div class="comment_text"><p>43?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082912">4</a> by Henry Ho
		posted on 5/9/2014 at 4:09 AM
		</div>
		<div class="comment_text"><p>Couldn't you have just use serializeJSON(someQuery, true).data for pre-CF11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082910">5</a> by Raymond Camden
		posted on 5/9/2014 at 4:21 AM
		</div>
		<div class="comment_text"><p>@Brian: I did not mean to imply my workaround was new - sorry if it came off that way. It was more just an FYI to remind folks.</p><p>@Todd/Scott: Yeah, yeah, yeah.</p><p>@Henry: No, pre-CF11 there were two forms of query serialization, column and row. I always forget the name of the default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082920">6</a> by Henry Ho
		posted on 5/9/2014 at 5:08 AM
		</div>
		<div class="comment_text"><p>@Raymond oh my mistake.  ya, neither true nor false as 2nd param yields the struct format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082921">7</a> by Adam Tuttle
		posted on 5/9/2014 at 2:08 PM
		</div>
		<div class="comment_text"><p>Credit where credit is due, that _looks_ like a copy of queryToArray out of Taffy, which is itself copied and slightly modified from Ben Nadel's blog. And it preserves query column casing: if your sql is "select FoO from bar" then the key name in the resulting json will be FoO - something I'm almost certain CF continues to do poorly.</p><p>So thank you Ben!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082917">8</a> by Raymond Camden
		posted on 5/9/2014 at 3:57 PM
		</div>
		<div class="comment_text"><p>I wrote that from scratch for the blog post, but I'm sure all of these solutions follow the same pattern. I explicitly did *not* want to match case and forced lcase as I thought that would be easier to use.</p><p>As to your comment about case - CF11 has one more setting related to JSON - case preservation. But it *only* applies to structs, not queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082919">9</a> by Adam Tuttle
		posted on 5/9/2014 at 4:29 PM
		</div>
		<div class="comment_text"><p>Now that I'm not browsing on my phone I can see the entire code sample, and I see what's different. My bad.</p><p>Just goes to show how absurd software patents are, given that such similar solutions can be found independently when solving the same problem. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082926">10</a> by Adam Cameron
		posted on 5/9/2014 at 5:25 PM
		</div>
		<div class="comment_text"><p>So a query is *finally* able to be JSONified into a schema that makes sense for JSON (ie: an array of objects).</p><p>Better late than never, but it took a bit too long to get there though.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082929">11</a> by Cutter
		posted on 5/10/2014 at 7:59 PM
		</div>
		<div class="comment_text"><p>If you're using jQuery, you can also serialize to the struct format client side using my plugin:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcutterbl%2FserializeCFJSON%3AX_bxu5oDL7Je6JyrXhXGSV4vas4&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cutterbl/serializeCFJSON">https://github.com/cutterbl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082928">12</a> by anugrah
		posted on 7/16/2014 at 2:08 PM
		</div>
		<div class="comment_text"><p>could  you please tell me  how to set the bar width of cfchartseries in cf11</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082930">13</a> by Anugrah
		posted on 7/16/2014 at 2:24 PM
		</div>
		<div class="comment_text"><p>Could you please tell me how to set the bar width of cfchartseries in cf11?In cf11 json is used for  giving backgroudstyle to cfchartseries</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082933">14</a> by Raymond Camden
		posted on 7/16/2014 at 7:05 PM
		</div>
		<div class="comment_text"><p>Um, I don't know. Check the docs? Remember you can go to ZingCharts for specifics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082935">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082935">15</a> by dawesi
		posted on 7/25/2014 at 1:21 PM
		</div>
		<div class="comment_text"><p>Looks like a copy out of 'everyone's framework... I have this too in a framework I created over 10 years ago, long before taffy</p><p>There's plenty of clever devs out there ;-)</p><p>Software patents aren't defendable anyway (unless you have 10's of millions) so they aren't worth the effort, also due to a recent case in the USA there is now a precident for people to use patented patterns and not violate patents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2087859700">
	<div>
		<img src="https://disqus.com/api/users/avatars/miklos.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2087859700">16</a> by miklos
		posted on 6/19/2015 at 1:45 PM
		</div>
		<div class="comment_text"><p>Is there a way to make the field/key being returned lowercase?</p><p>eg:</p><p>Current output: [{“NAME”:”ray”,”AGE”:33},{“NAME”:”todd”,”AGE”:43},{“NAME”:”scott”,”AGE”:53}]</p><p>Desired output: [{“name”:”ray”,”age”:33},{“name”:”todd”,”age”:43},{“name”:”scott”,”age”:53}]</p></div>
	</div>
</div>
		
<div class="comment" id="c_2090699311">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2090699311">17</a> (In reply to <a href="#c_2087859700">#16</a>) by Raymond Camden
		posted on 6/21/2015 at 2:37 AM
		</div>
		<div class="comment_text"><p>Use this setting, serialization.preservecaseforstructkey, in your app.cfc. Or use bracket notation when creating the struct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2090713879">
	<div>
		<img src="https://disqus.com/api/users/avatars/miklos.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2090713879">18</a> (In reply to <a href="#c_2090699311">#17</a>) by miklos
		posted on 6/21/2015 at 2:54 AM
		</div>
		<div class="comment_text"><p>Thanks for the response! The JSON in my case is actually created by calling a cfc using returnformat=json in an ajax call so I don't have control over bracket notation. I also don't want to create my own json object in the cfc method because that defeats the purpose of the built in feature of returnformat... I will try the setting in app.cfc as you suggested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2498077021">
	<div>
		<img src="https://disqus.com/api/users/avatars/TheRandai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2498077021">19</a> by The Salty Squid
		posted on 2/5/2016 at 6:54 PM
		</div>
		<div class="comment_text"><p>Hey fellas,</p><p>I am running a CFExecute to pull in json data via powershell from AWS CLI. I have successfully been able to display the data in JSON format in my cfml page, but am having a heck of a time formatting or deserializing the data. I'm very new to json, and have no idea what I am doing. Here is what is working so far, but any attempt to deserialize causes a 500 error. Any help is appreciated.</p><p>&lt;cfoutput&gt;</p><p>    &lt;cfexecute name="powershell.exe" variable="result" errorvariable="err" arguments="aws ec2 describe-volumes --query 'Volumes[*].[VolumeId, Attachments[0].InstanceId, AvailabilityZone, Size, VolumeType]'" timeout="10"/&gt;</p><p>    </p><p>Error: &lt;cfif err="" neq="" ""=""&gt;#err#&lt;cfelse&gt;None&lt;/cfif&gt;</p><p></p><p>&lt;/cfoutput&gt;</p><p>&lt;cfoutput&gt;#result#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2498096779">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2498096779">20</a> (In reply to <a href="#c_2498077021">#19</a>) by Raymond Camden
		posted on 2/5/2016 at 7:05 PM
		</div>
		<div class="comment_text"><p>I'm confused. I don't see where you are deserializing there. I see you calling powershell and outputting the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3107523218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3107523218">21</a> by Paul
		posted on 1/19/2017 at 8:24 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>This auto-complete thingy I've inherited requires the JSON to look like this:</p><p>{"results":[{"id":544,"text":"Painting &amp; Decorating \u2014 Automotive Painting"},{"id":487,"text":"Painting &amp; Decorating \u2014 Exterior Painting"},{"id":486,"text":"Painting &amp; Decorating \u2014 Interior Painting"},{"id":550,"text":"Painting &amp; Decorating \u2014 Roof Painting"},{"id":488,"text":"Painting &amp; Decorating \u2014 Decorators"},{"id":489,"text":"Painting &amp; Decorating \u2014 Wallpaper Hanging"}]}</p><p>I'm nearly there thanks to your post, but how do I get the "results" node (or whatever it's called) in there at the front?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3108321451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108321451">22</a> (In reply to <a href="#c_3107523218">#21</a>) by Paul
		posted on 1/19/2017 at 6:40 PM
		</div>
		<div class="comment_text"><p>I resolved it in an extremely hacky way as follows:</p><p>            &lt;cfset vsj="{"results":" &amp;="" serializejson(qget,="" "struct")="" &amp;="" '}'=""&gt;<br>            &lt;cfset vsj="replace(vSJ,"\\u2014","\u2014","ALL")"&gt;<br>            &lt;cfset vsj="replace(vSJ,"ID","id","ALL")"&gt;<br>            &lt;cfset vsj="replace(vSJ,"TEXT","text","ALL")"&gt;<br>            &lt;cfcontent type="application/json"&gt;<br>            &lt;cfreturn vsj=""&gt;</p><p>It'll do for now:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3108326819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108326819">23</a> (In reply to <a href="#c_3108321451">#22</a>) by Paul
		posted on 1/19/2017 at 6:43 PM
		</div>
		<div class="comment_text"><p>A bunch of extra markup was added to that last code snippet during posting - i.e. equals signs followed by double quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3108351683">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108351683">24</a> (In reply to <a href="#c_3108321451">#22</a>) by Raymond Camden
		posted on 1/19/2017 at 6:57 PM
		</div>
		<div class="comment_text"><p>Why are you building the json by hand versus using CF's built in serialization?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3109320596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3109320596">25</a> (In reply to <a href="#c_3108351683">#24</a>) by Paul
		posted on 1/20/2017 at 9:10 AM
		</div>
		<div class="comment_text"><p>Using serializeJSON(qGet,"struct") on my query, I get:</p><p>[{"id":544,"text":"Painting &amp; Decorating \u2014 Automotive Painting"},{"id":487,"text":"Painting &amp; Decorating \u2014 Exterior Painting"},{"id":486,"text":"Painting &amp; Decorating \u2014 Interior Painting"},{"id":550,"text":"Painting &amp; Decorating \u2014 Roof Painting"},{"id":488,"text":"Painting &amp; Decorating \u2014 Decorators"},{"id":489,"text":"Painting &amp; Decorating \u2014 Wallpaper Hanging"}]</p><p>However, I need it looking like:</p><p>{"results":[{"id":544,"text":"Painting &amp; Decorating \u2014 Automotive Painting"},{"id":487,"text":"Painting &amp; Decorating \u2014 Exterior Painting"},{"id":486,"text":"Painting &amp; Decorating \u2014 Interior Painting"},{"id":550,"text":"Painting &amp; Decorating \u2014 Roof Painting"},{"id":488,"text":"Painting &amp; Decorating \u2014 Decorators"},{"id":489,"text":"Painting &amp; Decorating \u2014 Wallpaper Hanging"}]}</p><p>so, I just manufactured the "results" key/node or whatever it's called.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3109602069">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3109602069">26</a> (In reply to <a href="#c_3109320596">#25</a>) by Raymond Camden
		posted on 1/20/2017 at 2:13 PM
		</div>
		<div class="comment_text"><p>Heh - can I ask why - in your client-side code, you wanted the results wrapped like that? It seems pointless. If you were returning the query _and_ other stuff, then it would make sense to use name/value pairs for each part of data, but you're only returning the query.</p></div>
	</div>
</div>
		