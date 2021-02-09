
<div class="comment" id="c_1713728027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728027">1</a> by todd sharp
		posted on 12/1/2010 at 9:34 PM
		</div>
		<div class="comment_text"><p>I take a bit of a "fancier" approach and use something like the title attribute for the placeholder text and put that value back in the input on blur if the user doesn't enter anything.  So something like this:<br>$('#search').focus(function(){<br>    if($(this).val() == $(this).attr('title')){<br>    	$(this).val('');<br>    }<br>}).blur(function(){<br>     if($(this).val() != $(this).attr('title') &amp;&amp; $(this).val().length == 0){<br>    	$(this).val($(this).attr('title'));<br>    }<br>}).blur();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728032">2</a> by todd sharp
		posted on 12/1/2010 at 9:36 PM
		</div>
		<div class="comment_text"><p>Might also want to trim the val before checking length:</p><p>$.trim($(this).val()).length == 0</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728030">3</a> by Raymond Camden
		posted on 12/1/2010 at 9:37 PM
		</div>
		<div class="comment_text"><p>Using the title is a good idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728031">4</a> by todd sharp
		posted on 12/1/2010 at 9:40 PM
		</div>
		<div class="comment_text"><p>Another option is Doug Neiner's in-field labels plugin:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffuelyourcoding.com%2Fscripts%2Finfield%2F%3AFyikjI1LdPoJ1oy4gLYtplERVt0&amp;cuid=3321886" rel="nofollow noopener" title="http://fuelyourcoding.com/scripts/infield/">http://fuelyourcoding.com/s...</a></p><p>May be overkill in some instances though...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728035">5</a> by Danny
		posted on 12/1/2010 at 10:02 PM
		</div>
		<div class="comment_text"><p>I usually like to style my placeholder text to be a light gray (or whatever fits the overall style of the page) and use a class to control remove it<br>$(".grayText").focus(function(){						   $(this).val('').removeClass("grayText");<br>});</p><p>I really like the idea of using the title attribute.  Maybe something like this to really automate it:<br>on ready:<br>$("input").each(function(){<br>   var theTitle = $(this).attr("title");<br>   if (theTitle.length &gt; 0) {<br>      $(this).addClass("grayText");<br>      $(this).val(theTitle);<br>   }<br>});<br>$(".grayText").live("focus",function(){<br>   $(this).val('').removeClass("grayText");<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728036">6</a> by Ross Pfahler
		posted on 12/1/2010 at 10:15 PM
		</div>
		<div class="comment_text"><p>I'm a big fan of using focus() over click(). I also find it a bit cleaner to use .data() over adding an attribute such as a title, especially with jQuery 1.4.3's ability to support HTML 5 data- attributes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728037">7</a> by todd sharp
		posted on 12/1/2010 at 10:19 PM
		</div>
		<div class="comment_text"><p>@Ross:  is it _wrong_ to use a title on an input?  i thought that was kind of a nice thing to have for accessibility?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728039">8</a> by Raymond Camden
		posted on 12/1/2010 at 10:23 PM
		</div>
		<div class="comment_text"><p>Ditto Todd - wouldn't title also give you mouseover support for it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728040">9</a> by Ross Pfahler
		posted on 12/1/2010 at 10:31 PM
		</div>
		<div class="comment_text"><p>@todd: It is not wrong at all - I didn't think it through all the way. I guess the data() route would just be useful in cases when the title might be different than what was displayed as the initial value in the input. Otherwise, I think you are correct!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728045">10</a> by todd sharp
		posted on 12/1/2010 at 10:42 PM
		</div>
		<div class="comment_text"><p>@ross:  cool.  i'd be interested to learn more about data() - will need to read up on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728043">11</a> by Derek P
		posted on 12/1/2010 at 10:42 PM
		</div>
		<div class="comment_text"><p>placeholder attribute on input tags, in HTML5, does exactly the same thing as this JS, so in more advanced browsers you can eliminate the need for it.</p><p>I use this as a driver, coupled with modernizr, so I know I only use the JS route, on legacy browsers:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fb38093206179651e4780%3AUuX_dsBoM9N8ytjKhCRjbHsVHFw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/b38093206179651e4780">https://gist.github.com/b38...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728044">12</a> by Raymond Camden
		posted on 12/1/2010 at 10:44 PM
		</div>
		<div class="comment_text"><p>Derek, I did mention placeholder at the end of the blog entry. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728046">13</a> by Dan G. Switzer, II
		posted on 12/1/2010 at 11:00 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>As others have indicated in their source, avoid using the "click" event when you actually mean "focus". Your original example breaks when a user goes to use the keyboard to navigate to the form field. The click event is the correct event for things like checkboxes and radio elements, but for text fields you want to use focus.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728042">14</a> by Derek
		posted on 12/1/2010 at 11:03 PM
		</div>
		<div class="comment_text"><p>@Ray  Yeah :), but this allows you to have cake + eat it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728051">15</a> by Raymond Camden
		posted on 12/1/2010 at 11:20 PM
		</div>
		<div class="comment_text"><p>@Dan: I'll change it and credit you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728059">16</a> by James Moberg
		posted on 12/2/2010 at 12:02 AM
		</div>
		<div class="comment_text"><p>I've been using the jQuery Watermark library to do this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fjquery-watermark%2F%3Aqph1OtBTQD2vc_wmH-axxlfFtgM&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/jquery-watermark/">http://code.google.com/p/jq...</a></p><p>It adds CSS styling for the watermark, allows you to change the watermark text/class any time after the watermark is initialized and is can display watermarks in password input elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728058">17</a> by johans
		posted on 12/2/2010 at 12:22 AM
		</div>
		<div class="comment_text"><p>Using title makes sense. Below would work for any input, you could set the context to the container element in preference to document:</p><p>&lt;script&gt;<br>	// clear input text<br>	$(document).delegate('input', 'focus', function(){<br>		$(this).val('');<br>	});</p><p>	// set-reset input text<br>	$(document).delegate('input', 'blur', function(){<br>		var $this = $(this),<br>			val = $.trim($this.val());<br>		$this.val(val ? val : $this.attr('title')); <br>	});<br>&lt;/script&gt;</p><p>@Danny - best to cache $(this) to a local var (var $this = $(this) in your each() loop. Also you could chain setting the title and class.<br>$(this,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728057">18</a> by johans
		posted on 12/2/2010 at 12:53 AM
		</div>
		<div class="comment_text"><p>@Danny - sorry did not paste code correctly:</p><p>$('input').each(function(){<br>		var $this = $(this);<br>		$this.attr('title') ? $this.attr('value', $this.attr('title')).addClass('grayText') : '';<br>	});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728056">19</a> by Doug Neiner
		posted on 12/2/2010 at 5:57 AM
		</div>
		<div class="comment_text"><p>Hey Ray, also note if you want an event handler to fire once in jQuery, you can bind it using 'one', then you don't have to explicitly remove it:</p><p>$("#searchtext").one('focus', function () {<br>$(this).val("");<br>});</p><p>And it does just what it says, fires it once!</p><p>A couple more notes related to the comments:</p><p>The HTML5 placeholder attribute is quite different from an infield label. The placeholder is supposed to communicate the format/type of data, the label is supposed to communicate what the field is.</p><p>Label: Email address<br>Placeholder: you@yourname.com</p><p>Also, its important to make sure your form won't submit if it only contains the default data as you have shown here. That is one reason I prefer to use CSS + JS as Todd mentioned in my in-field labels plugin. Anyway, each situation is different!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728061">20</a> by Raymond Camden
		posted on 12/2/2010 at 6:00 AM
		</div>
		<div class="comment_text"><p>Yeah, I always knew about the one operator. Really.</p><p>No - I'm full of it. Dude - how cool is that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728062">21</a> by Grant Eagon
		posted on 12/2/2010 at 4:23 PM
		</div>
		<div class="comment_text"><p>@Ray et. al</p><p>One thing I've been doing for my site is creating a "global" js file for appropriate functionality like this, so this might go in jquery.global.form.js.</p><p>In that file I would use a class instead of an id, so I can apply it to as many fields in the for as I want so something like:</p><p>$('.suggest').focus(function() {<br>	$(this).val("").unbind("focus");<br>});</p><p>Then I can always rely on that functionality being there by just adding the class I need.</p><p>I end up with fields that take advantage of multiple "attribute classes":</p><p>&lt;input<br>    type="text"<br>    name="beer"<br>    value="Search Beer!"<br>    class="suggest gray required center" /&gt;</p><p>Pretty clean way to control what each field does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728063">22</a> by Dave Anderson
		posted on 12/3/2010 at 1:11 AM
		</div>
		<div class="comment_text"><p>If you use the watermark plugin as suggested by James above, you can easily combine a couple of techniques to auto-set the 'watermark' value to the value of the title attribute, like this:<br>$("input.titleDefVal[title]").each(function() {<br>	$(this).watermark($(this).attr('title'));<br>})<br>(assuming you use a class called 'titleDefVal' in the inputs you want auto-populated with the title value.  change to $("input[title]").each() to do it for all inputs with a title attribute.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728064">23</a> by Drew Wells
		posted on 12/14/2010 at 11:03 PM
		</div>
		<div class="comment_text"><p>Here's my preferred syntax &lt;input type="text" placeholder="Default text!" name="name" /&gt;</p></div>
	</div>
</div>
		