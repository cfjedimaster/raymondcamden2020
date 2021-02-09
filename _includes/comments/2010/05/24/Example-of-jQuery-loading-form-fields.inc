
<div class="comment" id="c_1713724564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724564">1</a> by Dan G. Switzer, II
		posted on 5/24/2010 at 6:10 PM
		</div>
		<div class="comment_text"><p>Many moons ago, I wrote a jQuery plug-in called the Field plug-in (but it's really mini-library of jQuery add-ons:)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pengoworks.com%2Fworkshop%2Fjquery%2Ffield%2Ffield.plugin.htm%3Ad-CrSpPqcMpLd5MPL6XdQCoSgS8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pengoworks.com/workshop/jquery/field/field.plugin.htm">http://www.pengoworks.com/w...</a></p><p>This plug-in includes a hashForm() method which allows you to easily update a form based on a structure. So, all you'd need to do is have your AJAX call return a structure of all your values and pass it into the hashForm() method to completely fill in all the form fields. It'll handle all types of normal HTML form fields (text, textarea, radio, checkbox, etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724561">2</a> by Raymond Camden
		posted on 5/25/2010 at 10:16 AM
		</div>
		<div class="comment_text"><p>Nice - I forgot to mention that - obviously - my code would only work for text fields, and not drop downs/check boxes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724562">3</a> by johans
		posted on 5/25/2010 at 11:48 PM
		</div>
		<div class="comment_text"><p>I use a simple jquery data binder that looks for class="{variableName}" so when getting response from the server all I need is $.each(data, function(i, val){				databind.value(i,val);<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724565">4</a> by Richard
		posted on 6/16/2010 at 10:16 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I am trying to achieve something similar using ajax but my skills in that are failing me:<br>I need to perfom some calculations when the user types in the second of the form textfields so example form.field1=30 form.field2=40 - how can I achieve that - (may be call a cfc from there to do the calculations)<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724563">5</a> by Raymond Camden
		posted on 6/16/2010 at 3:41 PM
		</div>
		<div class="comment_text"><p>If the calculations are simple, just do them in JavaScript. JS can do just as much math operations as ColdFusion. If the calculations are complex (or maybe you don't want to duplicate existing logic you already have in CF), then your Ajax calls would pass the values to the CFC and parse the response.</p><p>If you can give me more information about your requirements, I can offer more help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724571">6</a> by Jose
		posted on 10/22/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Great example, thanks! But, is there a way to retrieve the field values when the user changes input OR clicks on a button?</p><p>TIA</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724573">7</a> by Raymond Camden
		posted on 10/22/2013 at 11:30 PM
		</div>
		<div class="comment_text"><p>You would just add a listener to a button click.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724586">8</a> by Jose
		posted on 10/23/2013 at 12:09 AM
		</div>
		<div class="comment_text"><p>Sorry to be dense, but, no dice...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FGYyWk%2F%3AkFRTwGpWgLyPwfkTJNwHWtVE2kE&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/GYyWk/">http://jsfiddle.net/GYyWk/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724585">9</a> by Raymond Camden
		posted on 10/23/2013 at 12:14 AM
		</div>
		<div class="comment_text"><p>For the life of me I can't get jsfiddle to save my damn mod - here is what I'd use:</p><p>$(document).ready(function() {</p><p>    function doLookup() {<br>	        var val = $("#PURL_code").val()<br>            if(val == "") return;<br>			$.getJSON("http://192.168.1.80/code/test.cfc?method=getpersondetails&amp;returnformat=json", {"purl_code":val}, function(res,code) {<br>	            $("#fname").val(res.fname)<br>	            $("#lname").val(res.lname)<br>	            $("#company").val(<a href="http://disq.us/url?url=http%3A%2F%2Fres.company%3AvuqQm77E4SyN0FeQ-eYqF-dmOJA&amp;cuid=3321886" rel="nofollow noopener" title="res.company">res.company</a>)<br>	        })</p><p>    }<br>	    $("#PURL_code").change(doLookup);</p><p>	    $("#SubmitCode").click(doLookup);</p><p>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724587">10</a> by Raymond Camden
		posted on 10/23/2013 at 12:16 AM
		</div>
		<div class="comment_text"><p>This link should work: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FZRYRB%2F1%3AbBHCIUeHhhcj6hFhPDctxsbjTgo&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/ZRYRB/1">http://jsfiddle.net/ZRYRB/1</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724588">11</a> by Jose
		posted on 10/23/2013 at 12:40 AM
		</div>
		<div class="comment_text"><p>Thanks, but still no workie</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724591">12</a> by Jose
		posted on 10/23/2013 at 1:01 AM
		</div>
		<div class="comment_text"><p>Ugh. All I had to do was change button type="submit" to button type="button"</p><p>Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724592">13</a> by Raymond Camden
		posted on 10/23/2013 at 1:09 AM
		</div>
		<div class="comment_text"><p>Oh - you can keep it as submit, just add e.preventDefault() to the handler, but button makes more sense probably anyway.</p></div>
	</div>
</div>
		