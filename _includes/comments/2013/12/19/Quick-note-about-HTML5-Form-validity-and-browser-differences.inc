
<div class="comment" id="c_1714081145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081145">1</a> by Blaise
		posted on 12/19/2013 at 8:11 PM
		</div>
		<div class="comment_text"><p>You should be able to skip the loop with<br>$(":invalid").not("form")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081149">2</a> by Raymond Camden
		posted on 12/19/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>Boom - perfect. Thanks Blaise. I always forget about not() in jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081150">3</a> by Paul Rowe
		posted on 12/19/2013 at 10:31 PM
		</div>
		<div class="comment_text"><p>I think you would also be able to use $("form :input:invalid").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081146">4</a> by Raymond Camden
		posted on 12/20/2013 at 1:08 AM
		</div>
		<div class="comment_text"><p>But that has the same issue I mentioned about select/textarea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081148">5</a> by Paul
		posted on 12/20/2013 at 1:16 AM
		</div>
		<div class="comment_text"><p>$('form :invalid')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081151">6</a> by Raymond Camden
		posted on 12/20/2013 at 1:18 AM
		</div>
		<div class="comment_text"><p>@Paul: Did you try that to see if FF still returned the &lt;form&gt; tag?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081152">7</a> by Šime Vidas
		posted on 12/20/2013 at 9:40 AM
		</div>
		<div class="comment_text"><p>This is the optimal method I think: $(":invalid", "#myForm"). Here, #myForm is provided as a context, which is what we want to do anyway in a real-world scenario: Find all invalid fields within form X.</p><p>Live demo: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FRxLzM%2F1%2F%3AlK1RDFb4mCwD37AKoiTaf0l4kJw&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/RxLzM/1/">http://jsfiddle.net/RxLzM/1/</a> (tested in FF/Ch)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081155">8</a> by Šime Vidas
		posted on 12/20/2013 at 9:44 AM
		</div>
		<div class="comment_text"><p>And the screenshot that confirms that the FORM element indeed matches :invalid in Firefox but not in Chrome: <a href="http://disq.us/url?url=http%3A%2F%2Fi.imgur.com%2FgdcO6i2.png%3A_3lFSDoGKsPny1T-83b_Ax7RWBE&amp;cuid=3321886" rel="nofollow noopener" title="http://i.imgur.com/gdcO6i2.png">http://i.imgur.com/gdcO6i2.png</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081156">9</a> by Paul Rowe
		posted on 12/20/2013 at 9:54 AM
		</div>
		<div class="comment_text"><p>Note the colon in front of "input". $("form :input:invalid") will catch the textareas and selects as well. See <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Finput-selector%2F%3AD4Y9wjvIZgELTQwza7dtCJzur_M&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/input-selector/">http://api.jquery.com/input...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081168">10</a> by Raymond Camden
		posted on 12/20/2013 at 5:50 PM
		</div>
		<div class="comment_text"><p>@Sime, Paul: Thanks guys. So is :invalid a jQuery-ism then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081167">11</a> by Raymond Camden
		posted on 12/20/2013 at 5:51 PM
		</div>
		<div class="comment_text"><p>Answered my own question:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Finput-selector%2F%3AD4Y9wjvIZgELTQwza7dtCJzur_M&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/input-selector/">http://api.jquery.com/input...</a></p><p>So happy when a blog post like this leads to new discoveries for me. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081163">12</a> by Ty Whalin
		posted on 12/22/2013 at 2:01 AM
		</div>
		<div class="comment_text"><p>Nice tid bit Ray. I may try this out since I have been using a javascript textcounter for form validation. This can catch all fields instead of just one. But one more note to add. I thought the preventDefault(); was deprecated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081169">13</a> by Raymond Camden
		posted on 12/22/2013 at 2:24 AM
		</div>
		<div class="comment_text"><p>Are you using textcounter for textareas to specify a maxlength?</p><p>preventDefault() - not afail. I could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081165">14</a> by Ty Whalin
		posted on 12/22/2013 at 2:49 AM
		</div>
		<div class="comment_text"><p>Yep, Got it on my forms with the keyUp and KeyDown functions. You might check the jQuery documentation for the preventDefault(), but I am pretty sure it has been deprecated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081164">15</a> by Raymond Camden
		posted on 12/22/2013 at 2:56 AM
		</div>
		<div class="comment_text"><p>I'm not seeing that here: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fevent.preventDefault%2F%3AixiDmJDv4J9iGuY-gp0XD3_dCqc&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/event.preventDefault/">http://api.jquery.com/event...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081166">16</a> by Ty Whalin
		posted on 12/22/2013 at 10:35 PM
		</div>
		<div class="comment_text"><p>I figured it out. It is showing it as deprecated in the Safari console. I knew I saw it somewhere. Since it is on jQuery's website, I must assume it is not deprecated. Thanks for the clarification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081174">17</a> by Dumitru "Mitic?" UNG
		posted on 12/24/2013 at 2:32 AM
		</div>
		<div class="comment_text"><p>This is documented FireFox behavior: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FCSS%2F%3Ainvalid%3AT2NNC1WuPEuKiv4LAyd7fuO_aOI&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/CSS/:invalid">https://developer.mozilla.o...</a>. See apply to form in the bottom section.</p><p>But shouldn't we chalk this up as programmer's oversight? Think multiple forms pages: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FRxLzM%2F12%2F%3Aiw2C-pR19XCWhdjG8RTwmvdaF9c&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/RxLzM/12/">http://jsfiddle.net/RxLzM/12/</a></p><p>Most likely, you should be as specific as you can and you should be looking up invalid fields in the current form instead, e.g. $(e).closest("form").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081173">18</a> by Raymond Camden
		posted on 12/24/2013 at 2:53 AM
		</div>
		<div class="comment_text"><p>Well, I suppose you could chalk it up to the programmers mistake, but I see it as something that could have tripped people up. I use the *heck* out of MDN, but I know this facet wasn't known to me either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081175">19</a> by Dumitru "Mitic?" UNG
		posted on 12/24/2013 at 3:20 AM
		</div>
		<div class="comment_text"><p>True. It is a browser difference.</p></div>
	</div>
</div>
		