
<div class="comment" id="c_1713685635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685635">1</a> by Sid Wing
		posted on 9/10/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>As always, this padawan bows to his JediMaster!  Muchos Grassyness, Ray... Off to go visit your wishlist!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685634">2</a> by Sid Wing
		posted on 9/10/2008 at 11:11 PM
		</div>
		<div class="comment_text"><p>All was well with this (using the JS) til I realized I lost my "NumberFormat" capability to make the total prices look like dollar amounts.  I hate re-inventing the wheel, so - 1 Google Search awya from an answer.  I found:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.web-source.net%2Fweb_development%2Fcurrency_formatting.htm%3Aaw7XbuE7ng0ExaJ0mHu4vJ-oWOw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.web-source.net/web_development/currency_formatting.htm">http://www.web-source.net/w...</a></p><p>Which had a WONDERFUL JS function for currency formatting a number.</p><p>The function looks like:<br>&lt;code&gt;<br>function CurrencyFormatted(amount)<br>{<br>	var i = parseFloat(amount);<br>	if(isNaN(i)) { i = 0.00; }<br>	var minus = '';<br>	if(i &lt; 0) { minus = '-'; }<br>	i = Math.abs(i);<br>	i = parseInt((i + .005) * 100);<br>	i = i / 100;<br>	s = new String(i);<br>	if(s.indexOf('.') &lt; 0) { s += '.00'; }<br>	if(s.indexOf('.') == (s.length - 2)) { s += '0'; }<br>	s = minus + s;<br>	return s;<br>}<br>// end of function CurrencyFormatted()<br>&lt;/code&gt;</p><p>So my script block looks something like this:</p><p>&lt;code&gt;<br>&lt;script&gt;<br>function updateFields(x) {<br>	// x is the index value<br>	var qty = document.getElementById('itemQuan'+x).value;<br>	var ppu = document.getElementById('itemUPrice'+x).value;<br>	var liTotal = document.getElementById('itemTPrice'+x);<br>	// if qty and ppu are both numbers, do math - if not - nuke the result<br>	if(!isNaN(qty) &amp;&amp; !isNaN(ppu))<br>		liTotal.value = CurrencyFormatted(qty*ppu);<br>	else<br>		liTotal.value = CurrencyFormatted(0);<br>    // now update the grand total<br>	var i = 1;<br>	var totalPrice = 0;<br>	while(thisQty = document.getElementById('itemQuan'+i)) {<br>		qty = document.getElementById('itemQuan'+i).value;<br>		liTotal = document.getElementById('itemTPrice'+i).value;<br>		if(!isNaN(liTotal)) totalPrice += Number(liTotal);<br>		i++;<br>	}<br>	var formattedTotal = CurrencyFormatted(totalPrice);<br>	document.getElementById('fldReqTotalPrice').value = formattedTotal;<br>}<br>function CurrencyFormatted(amount)<br>{<br>	var i = parseFloat(amount);<br>	if(isNaN(i)) { i = 0.00; }<br>	var minus = '';<br>	if(i &lt; 0) { minus = '-'; }<br>	i = Math.abs(i);<br>	i = parseInt((i + .005) * 100);<br>	i = i / 100;<br>	s = new String(i);<br>	if(s.indexOf('.') &lt; 0) { s += '.00'; }<br>	if(s.indexOf('.') == (s.length - 2)) { s += '0'; }<br>	s = minus + s;<br>	return s;<br>}</p><p>&lt;/script&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685636">3</a> by Pete
		posted on 9/18/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>Hi there</p><p>Just wondering if you had a working example of the form anywhere - I think its what I am trying to do but struggling with the form.</p><p>i.e. in the post - Dynamically updating line items in a form</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685637">4</a> by Sid Wing
		posted on 9/18/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>@Pete<br>If you contact me via e-mail I can send you the code - the application is an "internal use only" app - so it has no real world availability</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685640">5</a> by Sid Wing
		posted on 9/18/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>Helps if I give you the address:</p><p>sid dot wing at gmail dot com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685638">6</a> by Pete
		posted on 9/18/2008 at 7:36 PM
		</div>
		<div class="comment_text"><p>Hi there</p><p>I would send an email - but dont know the email address.  Where do I find your email address.  I'll explain exactly what I am trying to do.</p><p>Many thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685639">7</a> by Sonya
		posted on 2/11/2009 at 9:17 PM
		</div>
		<div class="comment_text"><p>How can I make the "numItems" dynamic in this example instead of hard coded.  I am working on a project where i can type in the number of rows i want and then it will spit out that many 3-column rows to add input into.  I dont need to calculate anything from there.  Just merely submit the inputed data.  But I want the page to not have to refresh, just the amount of rows available to change via the number they input.  Is this possible with Javascript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685642">8</a> by Raymond Camden
		posted on 2/11/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>numItems would have been the number of items being edited which would have come from the database. So it would simply be: somequery.recordCount</p><p>Your next question leads me to believe that you are working with NEW data though. If so, then yes, you can use jQuery to dynamically add more rows to a table.</p><p>Is that what you want?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685643">9</a> by Sonya
		posted on 2/11/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>Yes.  It is new data. And yes, if you could give me an example of how to accomplish this, that would be great.  Here is what i was trying to do so far...</p><p>&lt;script type="text/javascript"&gt;<br>   function ReloadEntry()<br>   {<br>        var NewText = document.getElementById("noc").value;<br>	var VariableElement = document.getElementById("TextDisplay");<br>        if (NewText =="")<br>	   VariableElement.innerHTML = 0;<br>	else<br>	   VariableElement.innerHTML = NewText;<br>   }<br>&lt;/script&gt;</p><p>&lt;cfform id="eventadd"&gt;<br>&lt;table&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;Number of Rows:&lt;/td&gt;<br>      &lt;td&gt;&lt;input id="noc" name="noc" type="text" maxlength="3" size="5" onKeyUp="ReloadEntry();"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;cfset noc = 0&gt;<br>   &lt;cfset noc = ??Javascript??&gt;<br>   &lt;cfif variables.noc gt 0&gt;<br>      &lt;tr&gt;<br>         &lt;td&gt;Date&lt;/td&gt;<br>         &lt;td&gt;Label&lt;/td&gt;<br>         &lt;td&gt;Alternate Name&lt;/td&gt;<br>      &lt;/tr&gt;<br>      &lt;cfloop index="x" from="1" to="#noc#"&gt;<br>        &lt;tr&gt;<br>           &lt;td&gt;&lt;cfinput name="date#x#" type="text" maxlength="10"&gt;&lt;/td&gt;<br>           &lt;td&gt;&lt;cfinput name="label#x#" type="text" maxlength="10"&gt;&lt;/td&gt;<br>           &lt;td&gt;&lt;cfinput name="altname#x#" type="text" maxlength="500"&gt;&lt;/td&gt;<br>        &lt;/tr&gt;<br>      &lt;/cfloop&gt;<br>   &lt;/cfif&gt;<br>&lt;/table&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685644">10</a> by Raymond Camden
		posted on 2/13/2009 at 7:47 PM
		</div>
		<div class="comment_text"><p>Sonja, I Googled, but didn't find a real nice example of adding dynamic form fields. I'll see if I can blog something myself a bit later today, or this weekend. It is now on my list of things to blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685645">11</a> by Sonya
		posted on 2/18/2009 at 9:18 PM
		</div>
		<div class="comment_text"><p>Thanks so much :) You are awesome!  Let me know when the example is ready.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685647">12</a> by Raymond Camden
		posted on 2/19/2009 at 11:06 PM
		</div>
		<div class="comment_text"><p>Let me know if this helps: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F2%2F19%2FUsing-jQuery-to-add-form-fields%3A9tCc2s_5xehyI6MYLhuoifEtx8Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/2/19/Using-jQuery-to-add-form-fields">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685648">13</a> by Sonya
		posted on 2/19/2009 at 11:17 PM
		</div>
		<div class="comment_text"><p>The Force Is Truely With You! :)  I looked at this and it looks pretty straight forward.  I will try to implement it and let you know how it goes as soon as I get back to that page of code.  Thanks again! I'm going to make the "Jump to Lightspeed" on this project thanks to you.</p></div>
	</div>
</div>
		