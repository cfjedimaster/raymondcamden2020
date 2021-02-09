
<div class="comment" id="c_1713723182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723182">1</a> by Sebastiaan
		posted on 4/1/2010 at 12:43 PM
		</div>
		<div class="comment_text"><p>CF and lists to the rescue. What kind of magic can't you do with lists ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723181">2</a> by James Gibson
		posted on 4/1/2010 at 3:29 PM
		</div>
		<div class="comment_text"><p>Hey Ray, This will not work when you submit a multipart form. getHTTPRequestData() returns an empty binary value in this situation. We posted a question on stack overflow to get this figured out. <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F2194442%3AZ6VzCQXWxRsADgt-EfRg0D6vz0A&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/2194442">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723186">3</a> by Raymond Camden
		posted on 4/1/2010 at 3:30 PM
		</div>
		<div class="comment_text"><p>You know what - I was worried about that. Thanks for the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723183">4</a> by Raymond Camden
		posted on 4/1/2010 at 5:31 PM
		</div>
		<div class="comment_text"><p>I've had a bit more coffee now. So if I read Leigh's comment right - if you wanted to write the code so it was _really_ dynamic, you would basically need to do a IF based on the post type. Agreed? I'd probably think that in most cases, the code is going to be used to reply to a specific call, so you don't have to be _quite_ as dynamic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723185">5</a> by Andrew
		posted on 4/1/2010 at 5:34 PM
		</div>
		<div class="comment_text"><p>In the past, I've actually added a function in onRequestStart that processed a form post.<br>One of the many things it did was it gave me the ability to use the input name "name[]" which produces an array in the form struct called "name".</p><p>I haven't used it recently (don't even think I have the code anymore) but it was very useless when I needed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723188">6</a> by Andrew
		posted on 4/1/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>I meant useful... not useless.... lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723184">7</a> by Ben Nadel
		posted on 4/1/2010 at 8:29 PM
		</div>
		<div class="comment_text"><p>I wouldn't mind going into the getPageContext() for something like this; but it seems unfortunate that for multipart form data, we have to rely on an undocumented method on the form scope. If I use undocumented features, It's typically out of efficiency, not necessity :(</p><p>In any case, good stuff Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723187">8</a> by Raymond Camden
		posted on 4/1/2010 at 8:31 PM
		</div>
		<div class="comment_text"><p>Is it undocumented? I thought his method was using the Servlet API, which -is- documented (afaik).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723191">9</a> by Ben Nadel
		posted on 4/1/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Oh sorry, I was referring to the FORM.getPartsArray() method, which I think is undocumented - not the getPageContext() method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723190">10</a> by Raymond Camden
		posted on 4/1/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>Helps if I read I guess. ;)</p><p>There -has- to be a way via getPageContext.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723192">11</a> by James Gibson
		posted on 4/1/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>I did an extensive exploration of this topic while getting it to work in the cfwheels ( <a href="http://disq.us/url?url=http%3A%2F%2Fcfwheels.org%3Aj-CFAyknxhkGlxa_-TcAIqH2i44&amp;cuid=3321886" rel="nofollow noopener" title="http://cfwheels.org">http://cfwheels.org</a> ) project. I did see a reference that there was a setting to allow getting the binary data from getHTTPRequestData() but the framework cannot assume that every developer would have access to this setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723193">12</a> by Ben Nadel
		posted on 4/1/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I agree - there has to be a way. Why does getPageContext() have to be so darned huge!?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723195">13</a> by Raymond Camden
		posted on 4/1/2010 at 10:59 PM
		</div>
		<div class="comment_text"><p>Well, it is kind of cool that Java gives you access to 100% of the Request/Response objects. It's one of those cases where, you won't need this crap 99% of the time, but when you do, thank goodness it is there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723196">14</a> by Larry C. Lyons
		posted on 4/2/2010 at 9:23 PM
		</div>
		<div class="comment_text"><p>Interesting article Ray. I think that there may be a simpler way of dealing with these situations without having to loop over the list, using the split method:</p><p>&lt;!--- get the http request data ---&gt;<br>&lt;cfset formResults = getHTTPRequestData()/&gt;</p><p>&lt;!--- urldecode the resulting list ---&gt;<br>&lt;cfset decodedList = urldecode(formResults.content)/&gt;</p><p>&lt;!--- split the resulting list into an array ---&gt;<br>&lt;cfset results = decodedList.split("&amp;name=") /&gt;</p><p>&lt;!--- so far so good. Problem is that the first entry in the array will be name=Camden,Raymond. Need to remove the name= from the first array item---&gt;<br>&lt;cfset results[1] = replace(results[1],"name=","") /&gt;</p><p>&lt;!--- output the results ---&gt;<br>&lt;cfset request.cfdumpinited = false /&gt;<br>&lt;cfdump label="results" expand="true" var="#results#"/&gt;<br>&lt;cfabort /&gt;</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723194">15</a> by denstar
		posted on 6/6/2010 at 7:59 AM
		</div>
		<div class="comment_text"><p>Anyone tried:</p><p>getPageContext().getRequest().getParameterMap();</p><p>For this stuff?  Know if it works with the multi-part?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723197">16</a> by denstar
		posted on 6/6/2010 at 8:04 AM
		</div>
		<div class="comment_text"><p>Never mind, I see it has been tried.  Railo doesn't have the magic function in the form scope, so I guess it's java time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723199">17</a> by tony petruzzi
		posted on 6/16/2010 at 3:41 AM
		</div>
		<div class="comment_text"><p>FYI, with wheels we finally found that with Adobe CF there is a hidden method attached to the form scope called getPartsArray() that will work with multipart form. the only cavert is that it's only works with multipart forms. Railo has a getRaw() method on the form scope.</p><p>more info can be found on cfsearching: <a href="http://disq.us/url?url=http%3A%2F%2Fcfsearching.blogspot.com%2F2010%2F02%2Fform-field-values-multipart-forms-and.html%3ApfzY28ywrYdAnN4WmCC9wrWtn_0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsearching.blogspot.com/2010/02/form-field-values-multipart-forms-and.html">http://cfsearching.blogspot...</a></p><p>also you can check out the $multipartData() method in the wheels dispatcher: <a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Frip747%2Fcfwheels%2Fblob%2Fmaster%2Fwheels%2Fdispatch%2Frequest.cfm%3AmN_D858rOOoZXxVbv8sX6rI_oW0&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/rip747/cfwheels/blob/master/wheels/dispatch/request.cfm">http://github.com/rip747/cf...</a></p></div>
	</div>
</div>
		