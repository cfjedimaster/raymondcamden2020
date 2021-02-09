
<div class="comment" id="c_1713727167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727167">1</a> by Steve
		posted on 11/2/2010 at 6:34 AM
		</div>
		<div class="comment_text"><p>I've only been pairing jQuery with ColdFusion over the last year or so but in that time I've use both together heavily. This JSON and CfArgument technique was something I came across very early and constantly use it. I've ended up using JSON in so many more situations and ways than I'd previously ever though. I blame CF :) CF makes it a dream.</p><p>Thanks for posting this. It's a great clarification on the topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727169">2</a> by Chris H
		posted on 11/2/2010 at 1:36 PM
		</div>
		<div class="comment_text"><p>Nice tip, thanks!<br>Should also work with Ext.util.JSON.encode()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727170">3</a> by Phillip Senn
		posted on 11/3/2010 at 5:22 AM
		</div>
		<div class="comment_text"><p>I love seeing solutions that use the syntax of the existing language.<br>With AJAX, two things I always remember to use are: cfsetting showdebugoutput="false" at the component level, and output="false" for the functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727186">4</a> by Ben Nadel
		posted on 11/5/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>This is amazing! I enjoy argumentCollection on the server side, but I had NO idea that you could use it in URL-based invocation. Is this something new in CF9? Or have I just been unaware of it for a long time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727187">5</a> by Raymond Camden
		posted on 11/5/2010 at 1:56 AM
		</div>
		<div class="comment_text"><p>Since argumentCollection was supported server side with 6, I'd say this probably worked in 6. However, with CFCs only outputting WDDX back then, I don't think many people used them for AJAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727188">6</a> by Ben Nadel
		posted on 11/5/2010 at 6:02 AM
		</div>
		<div class="comment_text"><p>Bananas! :) I don't know why, but this is just sort of awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727190">7</a> by Darren Cook
		posted on 11/22/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>Nice! Exactly what I needed.</p><p>Now, has anyone had success getting CF to parse a JSON string into a cfcomponent object type? What I mean is:<br>&lt;cffunction name="handleObj" access="remote"&gt;<br>   &lt;cfargument name="obj" type="cfcs.testobj"&gt;<br>   ...<br>&lt;/cffunction&gt;</p><p>I would hope that if my testobj looked like:<br>&lt;cfcomponent&gt;<br>   &lt;cfproperty name="attr1" type="string"&gt;<br>&lt;/cfcomponent&gt;<br>...that I could call method=handleObj&amp;argumentCollection={"obj":{"attr1":"hello"}} and CF would recognize the object by it's signature and create it with the properties set, just as it can do when receiving a Flex object.  But instead it errors with "the OBJ argument passed to the handlObj function is not of type cfcs.testobj".</p><p>On a whim I tried &amp;argumentCollection={"obj":{"attr1":"hello","__type__":"cfcs.testobj"}}, but alas it doesn't work in reverse. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727194">8</a> by Raymond Camden
		posted on 11/22/2010 at 9:53 PM
		</div>
		<div class="comment_text"><p>You would need to do it manually. Shouldn't be too hard though. Just use a populate method for your entities that would allow for a struct of name/value pairs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727195">9</a> by Darren Cook
		posted on 11/22/2010 at 10:08 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, this is true. Though I guess what I was ultimately hoping for was the implicit get &amp; set methods that you also get when CF 8 creates an object automatically for you. eg: I would like a testobj.setAttr1() method to be called to validate the attr1 value received in the method call's JSON.  Of course a populate() method could do this too, and is what I will have to resort to. I just was hoping to not have to reinvent the wheel (especially before our eventual move to CF9, which I think gives implicit get &amp; set methods?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727293">10</a> by Raymond Camden
		posted on 11/22/2010 at 10:17 PM
		</div>
		<div class="comment_text"><p>Yeah, in CF9 if you were to run ob.setname(<a href="http://disq.us/url?url=http%3A%2F%2Fstruct.name%3AC75InRJlqZhfBD07HBmMivv90r4&amp;cuid=3321886" rel="nofollow noopener" title="struct.name">struct.name</a>) that you can do some validation in a custom setter or let the implicit one just set the value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727278">11</a> by Raymond Camden
		posted on 11/22/2010 at 10:18 PM
		</div>
		<div class="comment_text"><p>And you want to be careful of course. If I see you passing a JSON string of complex data to a CFC I'm going to open up Firebug and see how much I can break it/mess with it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727281">12</a> by Darren Cook
		posted on 11/22/2010 at 10:59 PM
		</div>
		<div class="comment_text"><p>:-) I see your point...but on the other hand I don't see much difference between a complex dataset and a bunch of form values being submitted at once; it's all just data structure variations. Unless you were hoping I was going to be passing in strings of method call instructions ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727276">13</a> by Raymond Camden
		posted on 11/22/2010 at 11:59 PM
		</div>
		<div class="comment_text"><p>I never assume a person isn't too stupid to blindly trust Ajax requests. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727280">14</a> by Chris Bowyer
		posted on 2/2/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>Quick question... Is argumentCollection restricted to Form and URL scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727277">15</a> by Raymond Camden
		posted on 2/2/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>Technically no. In _this_ example we are talking about making an Ajax request. The only way to pass arguments in that case is via form/url, so the answer is kind of yes in that regard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727282">16</a> by Chris Bowyer
		posted on 2/4/2011 at 3:25 AM
		</div>
		<div class="comment_text"><p>A very cool answer. Thanks Ray. Actually. The reason I asked, was because I couldn't get it to work with Client scope. Your answer helped a lot though, because it encouraged me to look deeper into my issue, and there it was, a coding error. I guess however, that it is better to be specific when adding just a few arguments, especially in non Form, URL scopes, where there can be many in a collection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727275">17</a> by Joanne Corless
		posted on 9/6/2013 at 1:48 PM
		</div>
		<div class="comment_text"><p>Thank you for posting this and the previous blog - you've just saved me from a very big headache regarding this very issue.</p><p>We've an mapping tool supplied by a third party that generates polygons for us using javascript and I was struggling to deal polygons that generated lots of points i.e. in the case of curves. After I had constructed the polygon string it basically blew the string buffer on the post.</p><p>However using this method, I've been able to pass in much larger polygons that I have before, solving my problem and enabling me to work on the server rather than in the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727283">18</a> by Phillip Senn
		posted on 11/4/2013 at 6:12 AM
		</div>
		<div class="comment_text"><p>Ray, your example has 3 name/value pairs, but your code has an array of 5 elements.<br>Are you saying that each array element can be a name/value pair?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727279">19</a> by Raymond Camden
		posted on 11/8/2013 at 1:35 AM
		</div>
		<div class="comment_text"><p>Um no. My argument was data and the value happened to be an array. That's all. I could have done this too:</p><p> var mydata = {data:[1,2,3,4,5,"Camden,Raymond"],goo:1,hoo:1};</p><p>That would be 3 args to the CFC (data, goo, and hoo), with data being an array, goo and hoo being 1.</p></div>
	</div>
</div>
		