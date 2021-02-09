
<div class="comment" id="c_1714082644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082644">1</a> by Ty Whalin
		posted on 4/14/2014 at 9:44 PM
		</div>
		<div class="comment_text"><p>I have played around several times with file uploads but have never taken the jQuery method for uploading files. I have seemed to have success with just CF. I may have to create a demo with this example you created and do some testing with it for possible future coding options. Cool, hope you had a good weekend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082645">2</a> by Chris Bowyer
		posted on 4/15/2014 at 4:41 AM
		</div>
		<div class="comment_text"><p>Slightly off topic, but I had a good play with Adobe FormsCentral last night and quite frankly I am blown back. Also got me thinking, who needs sever validation if you need JavaScript to see the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082646">3</a> by Raymond Camden
		posted on 4/15/2014 at 5:08 AM
		</div>
		<div class="comment_text"><p>You *always* need server-side validation. Period. You need not have "friendly* server-side validation, i.e. you may just output ERROR, but you *must* check your input on the server. Period.</p><p>Let's take your example of a form that isn't even visible unless you have JS. I'd simply run the page, look at where it POSTS, and I'd try to attack your server that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082648">4</a> by Chris Bowyer
		posted on 4/15/2014 at 5:22 AM
		</div>
		<div class="comment_text"><p>D'oh! Didn't even think about that. Suppose the same if it's just a JavaScript link to the form too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082658">5</a> by karim
		posted on 5/16/2014 at 10:49 PM
		</div>
		<div class="comment_text"><p>Détails de l’erreur de la page Web</p><p>Agent utilisateur : Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; BTRS98585; SLCC2; .NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)<br>Horodateur : Fri, 16 May 2014 18:43:15 UTC</p><p>Bonjour,<br>Félicitation pour ce programme..<br>Je l'ai essayer pour me faire un site ou je gère une gallerie de peintures<br>ce programme de download est super par contre il fonctionne sous Firefox mais sous IE8 j'ai l'erreur ci-dessous :</p><p>Message : Objet attendu<br>Ligne : 32<br>Caractère : 3<br>Code : 0</p><p>y à t'il une solution pour que ça marche ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082656">6</a> by Raymond Camden
		posted on 5/16/2014 at 11:16 PM
		</div>
		<div class="comment_text"><p>As I don't speak French (and I'm not sure why you would think I do as I've never used it on the blog), I can't help you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082649">7</a> by Sean Corfield
		posted on 5/17/2014 at 12:18 AM
		</div>
		<div class="comment_text"><p>Karim, try moving the document ready code to the end of that script block so the two function definitions are before it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082653">8</a> by Sean Corfield
		posted on 5/17/2014 at 1:25 AM
		</div>
		<div class="comment_text"><p>Hmm, actually, thinking about that the functions should be hoisted above the document ready stuff... right Ray?</p><p>I counted line 32 to be the document ready and just assumed the missing object error was due to that but I haven't actually tested this on IE8 (which I have on a VM)... so I should probably do that before offering any assistance :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082651">9</a> by karim
		posted on 5/17/2014 at 2:27 AM
		</div>
		<div class="comment_text"><p>Hello I'm happy that you are to give me a rapid reponce.<br>i don't speak English ...<br>excuse me if i do some error when i script.<br>a'm added some lines in your code and now there is not error in the new script.<br>But there is away no image on the screen.<br>The Code I'm added provide to different sites and examples for to compensate the compatibility on IE8.<br>I'm going to see the address of SCR perhaps I'm while find Where is my error.</p><p>Merci pour votre aide.<br>Cordialement.</p><p>&lt;!doctype html&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;Proper Title&lt;/title&gt;<br>&lt;style&gt;<br>/*	#selectedFiles img {<br>		max-width: 200px;<br>		max-height: 200px;<br>		float: left;<br>		margin-bottom:10px;<br>	}*/</p><p>#selectedFiles img {<br>    width: 160px;<br>    height: 120px;<br>  border:1px solid;<br>    float:right;<br>    filter: progid:DXImageTransform.Microsoft.AlphaImageLoader(sizingMethod=scale);<br>} <br>&lt;/style&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;<br>	&lt;div id="selectedFiles"&gt;&lt;/div&gt;<br>	&lt;form id="myForm" method="post"&gt;</p><p>        Files: &lt;input type="file" id="files" name="files" multiple&gt;&lt;br/&gt;</p><p>        &lt;input type="submit"&gt;<br>	&lt;/form&gt;</p><p>&lt;!--&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F2.0.4%2Fjquery.min.js%3A5md2W_EiKeYq3JnWRLhz3hVSzvk&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/2.0.4/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;--&gt;<br>&lt;script type="text/javascript" src="jquery-git1.js"&gt;&lt;/script&gt;<br>	&lt;script language="javascript"&gt;<br>	var selDiv = "";<br>	var storedFiles = [];<br>	//$(document).ready(function() {<br>		jQuery(document).ready(function(){<br>		$("#files").on("change", handleFileSelect);<br>		selDiv = $("#selectedFiles"); <br>		$("#myForm").on("submit", handleForm);</p><p>		$("body").on("click", ".selFile", removeFile);<br>	});</p><p>/**<br> * Shim for "fixing" IE's lack of support (IE &lt; 9) for applying slice<br> * on host objects like NamedNodeMap, NodeList, and HTMLCollection<br> * (technically, since host objects have been implementation-dependent,<br> * at least before ES6, IE hasn't needed to work this way).<br> * Also works on strings, fixes IE &lt; 9 to allow an explicit undefined<br> * for the 2nd argument (as in Firefox), and prevents errors when <br> * called on other DOM objects.<br>*/<br>(function () {<br>    'use strict';<br>    var _slice = Array.prototype.slice;</p><p>    try {<br>        // Can't be used with DOM elements in IE &lt; 9<br>        <a href="http://disq.us/url?url=http%3A%2F%2F_slice.call%3AYA9qj2N3DIVLqtBguXTBG4rRsMQ&amp;cuid=3321886" rel="nofollow noopener" title="_slice.call">_slice.call</a>(document.documentElement); <br>    }<br>    catch (e) { // Fails in IE &lt; 9<br>        Array.prototype.slice = function (begin, end) {<br>            var i, arrl = this.length, a = [];<br>            // Although IE &lt; 9 does not fail when applying Array.prototype.slice<br>            // to strings, here we do have to duck-type to avoid failing<br>            // with IE &lt; 9's lack of support for string indexes<br>            if (this.charAt) { <br>                for (i = 0; i &lt; arrl; i++) {<br>                    a.push(this.charAt(i));<br>                }<br>            }<br>            // This will work for genuine arrays, array-like objects, <br>            // NamedNodeMap (attributes, entities, notations),<br>            // NodeList (e.g., getElementsByTagName), HTMLCollection (e.g., childNodes),<br>            // and will not fail on other DOM objects (as do DOM elements in IE &lt; 9)<br>            else { <br>                // IE &lt; 9 (at least IE &lt; 9 mode in IE 10) does not work with<br>                // node.attributes (NamedNodeMap) without a dynamically checked length here<br>                for (i = 0; i &lt; this.length; i++) { <br>                    a.push(this[i]);<br>                }<br>            }<br>            // IE &lt; 9 gives errors here if end is allowed as undefined<br>            // (as opposed to just missing) so we default ourselves<br>            return <a href="http://disq.us/url?url=http%3A%2F%2F_slice.call%3AYA9qj2N3DIVLqtBguXTBG4rRsMQ&amp;cuid=3321886" rel="nofollow noopener" title="_slice.call">_slice.call</a>(a, begin, end || a.length);<br>        };<br>    }<br>}());</p><p>'use strict';</p><p>// Add ECMA262-5 method binding if not supported natively<br>//<br>if (!('bind' in Function.prototype)) {<br>    Function.prototype.bind= function(owner) {<br>        var that= this;<br>        if (arguments.length&lt;=1) {<br>            return function() {<br>                return that.apply(owner, arguments);<br>            };<br>        } else {<br>            var args= <a href="http://disq.us/url?url=http%3A%2F%2FArray.prototype.slice.call%3AUAWKulOt7alONYwxFpx9h3bD_dM&amp;cuid=3321886" rel="nofollow noopener" title="Array.prototype.slice.call">Array.prototype.slice.call</a>(arguments, 1);<br>            return function() {<br>                return that.apply(owner, arguments.length===0? args : args.concat(<a href="http://disq.us/url?url=http%3A%2F%2FArray.prototype.slice.call%3AUAWKulOt7alONYwxFpx9h3bD_dM&amp;cuid=3321886" rel="nofollow noopener" title="Array.prototype.slice.call">Array.prototype.slice.call</a>(arguments)));<br>            };<br>        }<br>    };<br>}</p><p>// Add ECMA262-5 string trim if not supported natively<br>//<br>if (!('trim' in String.prototype)) {<br>    String.prototype.trim= function() {<br>        return this.replace(/^\s+/, '').replace(/\s+$/, '');<br>    };<br>}</p><p>// Add ECMA262-5 Array methods if not supported natively<br>//<br>if (!('indexOf' in Array.prototype)) {<br>    Array.prototype.indexOf= function(find, i /*opt*/) {<br>        if (i===undefined) i= 0;<br>        if (i&lt;0) i+= this.length;<br>        if (i&lt;0) i= 0;<br>        for (var n= this.length; i&lt;n; i++)<br>            if (i in this &amp;&amp; this[i]===find)<br>                return i;<br>        return -1;<br>    };<br>}<br>if (!('lastIndexOf' in Array.prototype)) {<br>    Array.prototype.lastIndexOf= function(find, i /*opt*/) {<br>        if (i===undefined) i= this.length-1;<br>        if (i&lt;0) i+= this.length;<br>        if (i&gt;this.length-1) i= this.length-1;<br>        for (i++; i--&gt;0;) /* i++ because from-argument is sadly inclusive */<br>            if (i in this &amp;&amp; this[i]===find)<br>                return i;<br>        return -1;<br>    };<br>}<br>if (!('forEach' in Array.prototype)) {<br>    Array.prototype.forEach= function(action, that /*opt*/) {<br>        for (var i= 0, n= this.length; i&lt;n; i++)<br>            if (i in this)<br>                <a href="http://disq.us/url?url=http%3A%2F%2Faction.call%3A2AmGl9Cn7WHkNHd-EJvkzhYTi8w&amp;cuid=3321886" rel="nofollow noopener" title="action.call">action.call</a>(that, this[i], i, this);<br>    };<br>}<br>if (!('map' in Array.prototype)) {<br>    <a href="http://disq.us/url?url=http%3A%2F%2FArray.prototype.map%3Arn_loayEFfESYala0tyR_Zb4ck0&amp;cuid=3321886" rel="nofollow noopener" title="Array.prototype.map">Array.prototype.map</a>= function(mapper, that /*opt*/) {<br>        var other= new Array(this.length);<br>        for (var i= 0, n= this.length; i&lt;n; i++)<br>            if (i in this)<br>                other[i]= <a href="http://disq.us/url?url=http%3A%2F%2Fmapper.call%3Aqd4JWsngDCCKVr0_zZSvPnFdIHw&amp;cuid=3321886" rel="nofollow noopener" title="mapper.call">mapper.call</a>(that, this[i], i, this);<br>        return other;<br>    };<br>}<br>if (!('filter' in Array.prototype)) {<br>    Array.prototype.filter= function(filter, that /*opt*/) {<br>        var other= [], v;<br>        for (var i=0, n= this.length; i&lt;n; i++)<br>            if (i in this &amp;&amp; <a href="http://disq.us/url?url=http%3A%2F%2Ffilter.call%3AOWgC6-yk0suIGNp_EGwO5Q5hud0&amp;cuid=3321886" rel="nofollow noopener" title="filter.call">filter.call</a>(that, v= this[i], i, this))<br>                other.push(v);<br>        return other;<br>    };<br>}<br>if (!('every' in Array.prototype)) {<br>    Array.prototype.every= function(tester, that /*opt*/) {<br>        for (var i= 0, n= this.length; i&lt;n; i++)<br>            if (i in this &amp;&amp; !<a href="http://disq.us/url?url=http%3A%2F%2Ftester.call%3A2lbBbmQcjsngySttyl8CcBfLP2o&amp;cuid=3321886" rel="nofollow noopener" title="tester.call">tester.call</a>(that, this[i], i, this))<br>                return false;<br>        return true;<br>    };<br>}<br>if (!('some' in Array.prototype)) {<br>    Array.prototype.some= function(tester, that /*opt*/) {<br>        for (var i= 0, n= this.length; i&lt;n; i++)<br>            if (i in this &amp;&amp; <a href="http://disq.us/url?url=http%3A%2F%2Ftester.call%3A2lbBbmQcjsngySttyl8CcBfLP2o&amp;cuid=3321886" rel="nofollow noopener" title="tester.call">tester.call</a>(that, this[i], i, this))<br>                return true;<br>        return false;<br>    };<br>}</p><p>	function handleFileSelect(e) {<br>		var files = e.target.files;<br>		var filesArr = <a href="http://disq.us/url?url=http%3A%2F%2FArray.prototype.slice.call%3AUAWKulOt7alONYwxFpx9h3bD_dM&amp;cuid=3321886" rel="nofollow noopener" title="Array.prototype.slice.call">Array.prototype.slice.call</a>(files);<br>		filesArr.forEach(function(f) {</p><p>			if(!f.type.match("image.*")) {<br>				return;<br>			}<br>			storedFiles.push(f);</p><p>			var reader = new FileReader();<br>			reader.onload = function (e) {<br>				var html = "&lt;div&gt;&lt;img src=\"" + e.target.result + "\" data-file='"+<a href="http://disq.us/url?url=http%3A%2F%2Ff.name%3Ac8517UnBsNfCQivHLeNJmFLeLu0&amp;cuid=3321886" rel="nofollow noopener" title="f.name">f.name</a>+"' class='selFile' title='Click to remove'&gt;" + <a href="http://disq.us/url?url=http%3A%2F%2Ff.name%3Ac8517UnBsNfCQivHLeNJmFLeLu0&amp;cuid=3321886" rel="nofollow noopener" title="f.name">f.name</a> + "&lt;br clear=\"left\"/&gt;&lt;/div&gt;";<br>				selDiv.append(html);</p><p>			}<br>			reader.readAsDataURL(f); <br>		});</p><p>	}</p><p>	function handleForm(e) {<br>		e.preventDefault();<br>		var data = new FormData();</p><p>		for(var i=0, len=storedFiles.length; i&lt;len; i++) {<br>			data.append('files', storedFiles[i]);	<br>		}</p><p>		var xhr = new XMLHttpRequest();<br>		<a href="http://disq.us/url?url=http%3A%2F%2Fxhr.open%3AnODMMv5C0QeYQ4oc1yGTYQgWIlQ&amp;cuid=3321886" rel="nofollow noopener" title="xhr.open">xhr.open</a>('POST', 'handler.cfm', true);</p><p>		xhr.onload = function(e) {<br>			if(this.status == 200) {<br>				console.log(e.currentTarget.responseText);	<br>				alert(e.currentTarget.responseText + ' items uploaded.');<br>			}<br>		}</p><p>		xhr.send(data);<br>	}</p><p>	function removeFile(e) {<br>		var file = $(this).data("file");<br>		for(var i=0;i&lt;storedFiles.length;i++) {<br>			if(storedFiles[i].name === file) {<br>				storedFiles.splice(i,1);<br>				break;<br>			}<br>		}<br>		$(this).parent().remove();<br>	}</p><p>	&lt;/script&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082654">10</a> by Raymond Camden
		posted on 5/17/2014 at 3:42 AM
		</div>
		<div class="comment_text"><p>If you can, please do not post large blocks of code here. My auto formatting tends to break some of it. In the future, use a Gist or Pastebin instead. Is this online where I can see it and run it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082655">11</a> by karim
		posted on 5/17/2014 at 11:14 AM
		</div>
		<div class="comment_text"><p>OK ,</p><p>I' continuous to work on this code.. and I'm give you regularity my results about it ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082652">12</a> by mickey
		posted on 6/4/2014 at 7:51 PM
		</div>
		<div class="comment_text"><p>Hello, Raymond. Thank you for the code. I have tried to put them into my page. But I found that even the file has been removed from the list displaying in the page, the file still uploaded (or say Post) to the server. Is the reason (removed file) still contain in the input tag?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082659">13</a> by mickey
		posted on 6/4/2014 at 9:09 PM
		</div>
		<div class="comment_text"><p>I now know that the handleForm is triggered by &lt;input type="submit"&gt; , right ? But my form is using a button to first go to a javascript to valid the form before submission.  *document.getElementById("myform").submit();*  I will use it to subit the form. So how can i change the method to prevent uploading the file which is removed ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082660">14</a> by Raymond Camden
		posted on 6/4/2014 at 9:52 PM
		</div>
		<div class="comment_text"><p>Without seeing your code I really can't comment. You would need to completely stop the form submit and chain off to my code after validation. If you are using other form fields then they would need to be appended too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082661">15</a> by jack
		posted on 6/20/2014 at 2:05 PM
		</div>
		<div class="comment_text"><p>Hi, i am testing your code, but it is uploading only one file from more. <br>Any help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082664">16</a> by Raymond Camden
		posted on 6/20/2014 at 5:55 PM
		</div>
		<div class="comment_text"><p>Put it online where I can test and I'll try and see if something stands out in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082665">17</a> by vinay
		posted on 7/5/2014 at 9:27 AM
		</div>
		<div class="comment_text"><p>files not removed.</p><p>var file = $(this).data("file");<br>alert(file);</p><p>alert shows undefined....why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082663">18</a> by Raymond Camden
		posted on 7/5/2014 at 6:44 PM
		</div>
		<div class="comment_text"><p>@vinay: I don't understand your comment. Can you add more?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082669">19</a> by Rigin
		posted on 7/22/2014 at 11:09 AM
		</div>
		<div class="comment_text"><p>Am trying your code in MVC 4<br>But , function removeFile(e) {.... this function is deleting from temp array -  storedFiles,<br>But while posting all the selected files are posted , Deletion NOT Working :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082667">20</a> by Rigin
		posted on 7/22/2014 at 11:13 AM
		</div>
		<div class="comment_text"><p>Pls check this :<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FZFZux1ck%3AWggZ1NcXKnyqvX71TOXQp0jxbf4&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/ZFZux1ck">http://pastebin.com/ZFZux1ck</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082668">21</a> by Raymond Camden
		posted on 7/22/2014 at 6:32 PM
		</div>
		<div class="comment_text"><p>I just tested my code again in Chrome and it worked correctly. Your code does not match mine, so I'd recommend updating it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082671">22</a> by Rigin
		posted on 7/23/2014 at 12:06 PM
		</div>
		<div class="comment_text"><p>Hi,<br>i tried , Am using asp MVC :<br>from my code :  xhr.send(data);<br>is not getting fired to my controller action.<br>What could be possible reason ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082670">23</a> by Raymond Camden
		posted on 7/23/2014 at 5:00 PM
		</div>
		<div class="comment_text"><p>Open up the developer console on your browser and see if an error is being reported. You can also see if the submit handler is firing correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082679">24</a> by Rigin
		posted on 7/23/2014 at 5:09 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Your code is working fine.Error was at my end.<br>Thanks for the same</p><p>I have one more issue.</p><p>I need to post the form data also.I am using mvc4.<br>If i comment the e.preventdefault() the form data gets posted, but the attachments that i deleted is not removed.</p><p>How can this be done.(Post the form data as well as upload the attachments with the remove functionality intact)</p><p>Please refer the code snippet<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FPi7NTyMP%3AqnGzMHwcAUfhMpAZ3Pb3M0tvRco&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Pi7NTyMP">http://pastebin.com/Pi7NTyMP</a></p><p>Regards,<br>Rigin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082678">25</a> by Raymond Camden
		posted on 7/23/2014 at 5:21 PM
		</div>
		<div class="comment_text"><p>"If i comment the e.preventdefault() the form data gets posted, but the attachments that i deleted is not removed."</p><p>Ok, so then the remove action is not working for you. Think about it then - how would you debug this? I'd add console.log messages to the remove action to ensure that the delete is working properly. You can check the length of the array for example to ensure it is one less.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082675">26</a> by Rigin
		posted on 7/23/2014 at 5:46 PM
		</div>
		<div class="comment_text"><p>After removing one action, the posted all files are getting uploaded ... removed one also.<br>Then how can we get the updated list of attachments in action ? can you brief please</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082677">27</a> by Raymond Camden
		posted on 7/23/2014 at 6:01 PM
		</div>
		<div class="comment_text"><p>I do not know what you mean - "by removing one action".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082681">28</a> by Rigin
		posted on 7/23/2014 at 7:14 PM
		</div>
		<div class="comment_text"><p>See what I meant is : am getting all the files that we selected in the input file element in my action method .<br>But the model am that received in action is empty one.</p><p>How can I get the model from form where am firing this submit ? I also need the other form data..textbox, dropdown and all...<br>are you clear with my query ? please let me know</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082684">29</a> by Raymond Camden
		posted on 7/23/2014 at 7:46 PM
		</div>
		<div class="comment_text"><p>"But the model am that received in action is empty one."<br>I do not understand what you mean here. If you use your Dev Tools and see all the files being posted (which you *can* do with Chrome's Network tools), then the issue is with your server-side code and I can't help you with that.</p><p>"How can I get the model from form where am firing this submit ? I also need the other form data..textbox, dropdown and all..."<br>In my example, I create a form post consisting of JUST the files. You can add additional file fields too. See the docs for FormData: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FAPI%2FFormData%3APRLEaPN8qRGUwpP0_u6fFzXbJrQ&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/API/FormData">https://developer.mozilla.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082682">30</a> by Rigin
		posted on 7/24/2014 at 5:07 PM
		</div>
		<div class="comment_text"><p>thanks for your help :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082685">31</a> by Mohamed Aref
		posted on 7/28/2014 at 2:09 AM
		</div>
		<div class="comment_text"><p>Hi, thanks a lot for you help.</p><p>I'm developing a CMS where the user can select multiple files to upload, but the problem that I faced is I can't remove a certain file from the multiple files.</p><p>I know that the input file is readonly so we don't have any control on it :(</p><p>You did that, but I don't want to use ajax, So Is there a way to remove a certain file from the selected files ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082686">32</a> by Raymond Camden
		posted on 7/28/2014 at 6:14 AM
		</div>
		<div class="comment_text"><p>Not that I know of. I'm not saying it is impossible, but I don't think you can. You could consider a Flash based widget.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082687">33</a> by Mohamed Aref
		posted on 7/31/2014 at 4:10 AM
		</div>
		<div class="comment_text"><p>I don't understand you Raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082690">34</a> by Raymond Camden
		posted on 7/31/2014 at 5:07 AM
		</div>
		<div class="comment_text"><p>Not sure how else I can say it. There are upload controls built with Adobe Flash. If you Google, you can find a bunch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082691">35</a> by Ajeet Singh
		posted on 9/11/2014 at 4:48 PM
		</div>
		<div class="comment_text"><p>i used your code all thing about select multiple image and uploading is good but there is an issue, for Example:  when i select 5 image the preview of five image are appear. and when i delete 2 image to click on image and save the form then in database all five images are stored. that is a wrong thaing.<br>So can you provide the solution for that on my email id which i used in that post.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082689">36</a> by Raymond Camden
		posted on 9/11/2014 at 5:27 PM
		</div>
		<div class="comment_text"><p>It should work and if it does not, please show me where it is online and I will try to test there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082688">37</a> by ATMCgrafik
		posted on 9/25/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>hi my friends, nice plugin, but when I delete picture stay in value it. how edit this problem. thank you again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082692">38</a> by Raymond Camden
		posted on 9/25/2014 at 7:24 PM
		</div>
		<div class="comment_text"><p>Please see my last reply. If you can share the URL, I'll take a look. Also, what browser did you test with?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082693">39</a> by ATMCgrafik
		posted on 9/26/2014 at 4:38 PM
		</div>
		<div class="comment_text"><p>what I mean, your code if I delete picture by clicking, I want to delete it from choseen file of browser, at the same time.<br>EXAMPLE;<br>First;<br>Choseen File 5 Files<br>after deleting picture;<br>Choseen File 5 Files</p><p>I want;<br>Choseen File 4 Files<br>If I delete a few</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082695">40</a> by Raymond Camden
		posted on 9/26/2014 at 6:47 PM
		</div>
		<div class="comment_text"><p>The FIle Picker control is only for the CURRENT selection. Once you dismiss it and return, it will not show you previously selected items.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082694">41</a> by imen
		posted on 10/18/2014 at 2:33 PM
		</div>
		<div class="comment_text"><p>S'il vous plaît, j'ai un problème dans &lt;form id="myForm" method="post" action="test.html"&gt;</p><p>        Files: &lt;input type="file" id="files" name="files" multiple&gt;&lt;br/&gt;</p><p>        &lt;div id="selectedFiles"&gt;&lt;/div&gt;</p><p>        &lt;input type="submit"&gt;<br>	&lt;/form&gt;</p><p>n ' envoyer pas les image</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082699">42</a> by imen
		posted on 10/18/2014 at 2:34 PM
		</div>
		<div class="comment_text"><p>Please, I have a problem in &lt;form id = "myForm" method = "post" action = "test.html"&gt;</p><p>         Files: &lt;input type = "file" id = "files" name = "files" multiple&gt; &lt;br/&gt;</p><p>         &lt;div id = "selectedFiles"&gt; &lt;/ div&gt;</p><p>         &lt;input type = "submit"&gt; <br>&lt;/ form&gt;</p><p>do not send the picture</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082698">43</a> by Raymond Camden
		posted on 10/19/2014 at 1:47 PM
		</div>
		<div class="comment_text"><p>Do you see an error in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082697">44</a> by imen
		posted on 10/19/2014 at 6:52 PM
		</div>
		<div class="comment_text"><p>XMLHttpRequest cannot load file:///C:/Users/Imen/Desktop/photo/handler.cfm. Cross origin requests are only supported for protocol schemes: http, data, chrome-extension, https, chrome-extension-resource. test3.html:1</p><p>Uncaught NetworkError: Failed to execute 'send' on 'XMLHttpRequest': Failed to load 'file:///C:/Users/Imen/Desktop/photo/handler.cfm'. test3.html:80</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082696">45</a> by Raymond Camden
		posted on 10/20/2014 at 6:03 AM
		</div>
		<div class="comment_text"><p>Are you testing with a local web server or just by opening the file? You should test with a web server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082702">46</a> by imen
		posted on 10/20/2014 at 2:19 PM
		</div>
		<div class="comment_text"><p>I testing with a local web server</p><p>Failed to load resource: the server responded with a status of 404 (Not Found) http://localhost/imen/projet/handler.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082701">47</a> by Raymond Camden
		posted on 10/22/2014 at 1:23 AM
		</div>
		<div class="comment_text"><p>So the next question is, does handler.cfm exist?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082705">48</a> by imen
		posted on 10/22/2014 at 11:41 AM
		</div>
		<div class="comment_text"><p>yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082704">49</a> by Raymond Camden
		posted on 10/23/2014 at 1:55 AM
		</div>
		<div class="comment_text"><p>You should double check then. The error says it does not exist. If you open your browser to that URL, what do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1729697610">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_KIILiFiv1X.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1729697610">50</a> by David Griffiths
		posted on 12/7/2014 at 9:02 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, thank you for this very useful information. I have managed to get the handleForm's output data into a controller where I manipulate the images.The problem is I can't then send the images to a view with "View::make -&gt;with " . No error messages but Laravel refuses to do it. Do I need to use return Response::json([]) and can you advise me how I could do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1729903108">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1729903108">51</a> (In reply to <a href="#c_1729697610">#50</a>) by Raymond Camden
		posted on 12/7/2014 at 2:01 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but I don't even know what Laravel is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1730776653">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_KIILiFiv1X.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1730776653">52</a> (In reply to <a href="#c_1729903108">#51</a>) by David Griffiths
		posted on 12/8/2014 at 3:25 AM
		</div>
		<div class="comment_text"><p>Sorry, it was presumptuous of me to assume that you would. Looking at your code in handleForm I can take the FormData object and have lots of fun with the images in a PHP code block but when I try to export the images to another page the fun stops. The same setup without jQuery works fine so I am assuming jQuery needs something returned (like with Response::json()). Just wondered if you could give me an idea how to implement that with your code in handleForm. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1731197219">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1731197219">53</a> (In reply to <a href="#c_1730776653">#52</a>) by Raymond Camden
		posted on 12/8/2014 at 11:38 AM
		</div>
		<div class="comment_text"><p>Um... so to be clear. My code works to *post* to your server, but you don't know how to respond back to it to let it know that... it did something? Not quite sure I get what you mean. Also, I don't really know PHP. If your server side code needs to return a message to the client side code, you should probably reply with a JSON encoded msg. How that is done in PHP is not something I can help with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1784985146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1784985146">54</a> by Desperant
		posted on 1/10/2015 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hi, how can i read storedFiles array with files in PHP? Thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1785004760">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1785004760">55</a> (In reply to <a href="#c_1784985146">#54</a>) by Raymond Camden
		posted on 1/10/2015 at 6:59 PM
		</div>
		<div class="comment_text"><p>You can't - it is a client-side variable. You can use XHR to send JS data to the server of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799357740">
	<div>
		<img src="https://disqus.com/api/users/avatars/dipokchakraborty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799357740">56</a> by Dipok Chakraborty
		posted on 1/18/2015 at 8:57 AM
		</div>
		<div class="comment_text"><p>I tried to apply this technique in my module but after remove the selected file and submit the form then all of files are uploaded including removed files. i think my form is not update after remove file. how can i fix it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799679714">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799679714">57</a> (In reply to <a href="#c_1799357740">#56</a>) by Raymond Camden
		posted on 1/18/2015 at 3:31 PM
		</div>
		<div class="comment_text"><p>Is it online where I can test it? Do you see an error in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810834629">
	<div>
		<img src="https://disqus.com/api/users/avatars/dipokchakraborty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810834629">58</a> (In reply to <a href="#c_1799679714">#57</a>) by Dipok Chakraborty
		posted on 1/22/2015 at 11:45 AM
		</div>
		<div class="comment_text"><p>Sorry for my late. no its on my local server. if you want i can send you by mail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810837353">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810837353">59</a> (In reply to <a href="#c_1810834629">#58</a>) by Raymond Camden
		posted on 1/22/2015 at 11:48 AM
		</div>
		<div class="comment_text"><p>Typically code review of this sort is a paid engagement only. If you put it online though I don't mind giving it a quick look. I'd suggest looking in the console to see if you see an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810837458">
	<div>
		<img src="https://disqus.com/api/users/avatars/dipokchakraborty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810837458">60</a> (In reply to <a href="#c_1799357740">#56</a>) by Dipok Chakraborty
		posted on 1/22/2015 at 11:49 AM
		</div>
		<div class="comment_text"><p>How can i get files content after delete from #files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810839657">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810839657">61</a> (In reply to <a href="#c_1810837458">#60</a>) by Raymond Camden
		posted on 1/22/2015 at 11:51 AM
		</div>
		<div class="comment_text"><p>Not sure what you mean in this comment. To the first comment, I'd look for an error in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810844230">
	<div>
		<img src="https://disqus.com/api/users/avatars/dipokchakraborty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810844230">62</a> (In reply to <a href="#c_1810839657">#61</a>) by Dipok Chakraborty
		posted on 1/22/2015 at 11:56 AM
		</div>
		<div class="comment_text"><p>before append data, there is any way to know how many files in my input field</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810903087">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810903087">63</a> (In reply to <a href="#c_1810844230">#62</a>) by Raymond Camden
		posted on 1/22/2015 at 12:44 PM
		</div>
		<div class="comment_text"><p>Yes - it is an array and you can check the length.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810908820">
	<div>
		<img src="https://disqus.com/api/users/avatars/dipokchakraborty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810908820">64</a> (In reply to <a href="#c_1810903087">#63</a>) by Dipok Chakraborty
		posted on 1/22/2015 at 12:49 PM
		</div>
		<div class="comment_text"><p>how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1810919570">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1810919570">65</a> (In reply to <a href="#c_1810908820">#64</a>) by Raymond Camden
		posted on 1/22/2015 at 12:59 PM
		</div>
		<div class="comment_text"><p>Given X is an array, in JS you can just do X.length.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259443511">
	<div>
		<img src="https://disqus.com/api/users/avatars/phuctranallen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259443511">66</a> by Phuc Tran - Allen
		posted on 9/17/2015 at 9:53 PM
		</div>
		<div class="comment_text"><p>Hi, I tried with your code and it works for deleting image per click but on submit, that removed images appear on the page (as they were added to the database and loaded for display). Any workaround?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259447302">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259447302">67</a> (In reply to <a href="#c_2259443511">#66</a>) by Raymond Camden
		posted on 9/17/2015 at 9:55 PM
		</div>
		<div class="comment_text"><p>What database?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259461935">
	<div>
		<img src="https://disqus.com/api/users/avatars/phuctranallen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259461935">68</a> (In reply to <a href="#c_2259447302">#67</a>) by Phuc Tran - Allen
		posted on 9/17/2015 at 10:06 PM
		</div>
		<div class="comment_text"><p>I'm using it on a Mantis system, PHP webApp with MySQL database. Here is the screen cast about that.<br><a href="https://disq.us/url?url=https%3A%2F%2Fyoutu.be%2FUFgwnRvIApE%3A0YwaX_3Xe5Er_gx16tTMhq8pjvk&amp;cuid=3321886" rel="nofollow noopener" title="https://youtu.be/UFgwnRvIApE">https://youtu.be/UFgwnRvIApE</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2259480085">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259480085">69</a> (In reply to <a href="#c_2259461935">#68</a>) by Raymond Camden
		posted on 9/17/2015 at 10:20 PM
		</div>
		<div class="comment_text"><p>Interesting. Chrome definitely held on to the files. I'll have to think about this and get back to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259493346">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259493346">70</a> (In reply to <a href="#c_2259461935">#68</a>) by Raymond Camden
		posted on 9/17/2015 at 10:30 PM
		</div>
		<div class="comment_text"><p>So yep - you found a pretty major bug with my implementation. I don't remove the File object from the FileList value on the input field. In CHrome and Firefox, this is read only. There is a solution though - you switch to using XHR2 to upload. I'll put this in my queue to update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259495237">
	<div>
		<img src="https://disqus.com/api/users/avatars/phuctranallen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259495237">71</a> (In reply to <a href="#c_2259480085">#69</a>) by Phuc Tran - Allen
		posted on 9/17/2015 at 10:32 PM
		</div>
		<div class="comment_text"><p>I figure if I add this line &lt;script&gt;function toArray(o) { return [].slice.call(o) }&lt;/script&gt; before calling ajax.googleapis jquery.min.js and your code. I can have right images stored and displayed for bug review (MantisBT is bug tracking webApp).</p><p>But I couldn't do away with photos remained on screen even after selecting another batch of photos. (1:39 -1:41 in my linked youtube video). In other word, I would like to clean up all preview photos whenever user starts over by clicking Choose files... and show them new preview photos as they have selected a new batch. How to do so, sir?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259497099">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259497099">72</a> (In reply to <a href="#c_2259495237">#71</a>) by Raymond Camden
		posted on 9/17/2015 at 10:33 PM
		</div>
		<div class="comment_text"><p>So - the issue you'll have even with using XHR2 to post is that the UI will still say "N files". So I'm digging more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259511645">
	<div>
		<img src="https://disqus.com/api/users/avatars/phuctranallen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259511645">73</a> (In reply to <a href="#c_2259493346">#70</a>) by Phuc Tran - Allen
		posted on 9/17/2015 at 10:45 PM
		</div>
		<div class="comment_text"><p>Here is the fix:<br>// slide the array call.<br>+ &lt;script&gt;function toArray(o) { return [].slice.call(o) }&lt;/script&gt;<br>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F2.0.3%2Fjquery.min.js%3Au_PvXlN8PELCYF3B8UVIi2ZjKIM&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/2.0.3/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;</p><p>function handleFileSelect(e) {<br>+ selDiv.empty();<br>					var files = e.target.files;<br>...}</p><p>// in handleFileSelect, you empty the element selDiv, so it starts fresh every time user clicks Choose Files/Images to upload...</p><p>Cheers,<br>Get back to me if it resolves your major bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259534481">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259534481">74</a> (In reply to <a href="#c_2259511645">#73</a>) by Raymond Camden
		posted on 9/17/2015 at 11:04 PM
		</div>
		<div class="comment_text"><p>This isn't going to work - the list of files associated w/ the input field is read only. You can't slice it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2260671233">
	<div>
		<img src="https://disqus.com/api/users/avatars/phuctranallen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2260671233">75</a> (In reply to <a href="#c_2259534481">#74</a>) by Phuc Tran - Allen
		posted on 9/18/2015 at 3:20 PM
		</div>
		<div class="comment_text"><p>Okay, once you figure it out, please keep me posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2264018678">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2264018678">76</a> (In reply to <a href="#c_2259497099">#72</a>) by Raymond Camden
		posted on 9/20/2015 at 5:35 PM
		</div>
		<div class="comment_text"><p>Ok, so update. I actually forgot I was using XHR2 to push. The issue is *just* the label on the file input field. If you do this:</p><p>        e.target.value='';</p><p>in handleFileSelect, it makes the label around the field switch to No files selected. That *could* be confusing - but it is better than it showing X files when you had picked X and then removed one.</p><p>To be clear, my code *as is* only has the confusing label. I can confirm that when you submit, it works perfectly well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2502928159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2502928159">77</a> by rudi
		posted on 2/8/2016 at 6:50 PM
		</div>
		<div class="comment_text"><p>hi sir, i'm using your code for my project. i think the problem are same as the other on the comment below..</p><p>1st i pick 3 picture<br>then i delete 1 picture<br>and lastly i submit the picture</p><p>and the result all the picture including the 1 that i delete before submit uploaded.</p><p>what i want to know is, is there any way that i can do so just the remaining picture uploaded and which i delete removed.</p><p>i attach the picture bellow. the code all the same as you posted up there nothing changed just adding submit function.</p><p>thanks for your time. this code is so cool if it can work properly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2503116035">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2503116035">78</a> (In reply to <a href="#c_2502928159">#77</a>) by Raymond Camden
		posted on 2/8/2016 at 8:38 PM
		</div>
		<div class="comment_text"><p>Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2506565343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2506565343">79</a> (In reply to <a href="#c_2503116035">#78</a>) by rudi
		posted on 2/10/2016 at 6:04 PM
		</div>
		<div class="comment_text"><p>not online yet sir..</p><p>so i make it like this..</p><p>      function removeFile(e) {                <br>selInput.empty();<br>var inpuTan = '';<br>              var file = $(this).data("file");<br>              for(var i=0;i&lt;storedfiles.length;i++) {="" if(storedfiles[i].name="==" file)="" {="" storedfiles.splice(i,1);="" break;="" }="" }="" $.each(storedfiles,function(key,val){="" inputan="" +="<a href="http://disq.us/url?url=http%3A%2F%2Fval.name%3AglHnQTads7u_TP-0vw9XBXRS-j0&amp;cuid=3321886" rel="nofollow noopener" title="val.name">val.name</a>+',';" });="" selinput.val(inputan);="" $(this).parent().remove();="" }="" then="" at="" the="" controller="" before="" i="" save,="" i="" will="" loop="" it="" to="" check="" which="" removed="" which="" not="" then="" save="" the="" data="" tha="" i="" need="" to="" the="" database..="" :d="" i="" just="" dont="" know="" how="" to="" delete="" the="" stored="" files..=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2506569112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2506569112">80</a> (In reply to <a href="#c_2506565343">#79</a>) by rudi
		posted on 2/10/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F29pX9SEE%3Aa0DZT2ka0w35vZU8RZ8I3bMQyGA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/29pX9SEE">http://pastebin.com/29pX9SEE</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2506739624">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2506739624">81</a> (In reply to <a href="#c_2506569112">#80</a>) by Raymond Camden
		posted on 2/10/2016 at 7:40 PM
		</div>
		<div class="comment_text"><p>Nothing sticks out. If you can get it online so I can run it, let me know. Also look for errors in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2523144227">
	<div>
		<img src="https://disqus.com/api/users/avatars/bikybist.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2523144227">82</a> by Biky Bist
		posted on 2/19/2016 at 1:20 PM
		</div>
		<div class="comment_text"><p>its all cool code mate. I implement this, and all works at one time. Thanks Sir for this code. Its been 1-2 weeks I have been searching this feature in a simple way(deleting preview as well as its value).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2523197193">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2523197193">83</a> (In reply to <a href="#c_2523144227">#82</a>) by Raymond Camden
		posted on 2/19/2016 at 1:58 PM
		</div>
		<div class="comment_text"><p>Glad it worked for you. If you can bill a client, hit up my Amazon Wish List. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588511285">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1I7j2mAqQc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588511285">84</a> by Germano
		posted on 3/25/2016 at 12:56 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, i found your code very useful thanks for worth sharing. Please help on how to send an image on a file system and storing the image path on mysql database?<br>Your help will be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588534750">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588534750">85</a> (In reply to <a href="#c_2588511285">#84</a>) by Raymond Camden
		posted on 3/25/2016 at 1:16 PM
		</div>
		<div class="comment_text"><p>My code should work as is for images. As for storing the image path, your form processor would handle that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588585309">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1I7j2mAqQc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588585309">86</a> by Germano
		posted on 3/25/2016 at 1:55 PM
		</div>
		<div class="comment_text"><p>Thanks Sir for your quick response, real appreciate for this. I am new in php and jquery and struggling to learn. For the first part of storing on the file system works fine but can you write a code for the second part i.e storing image path in mysql database.</p><p>From this code:</p><p>form id="myForm" method="post"&gt;</p><p>        Files: &lt;input type="file" id="files" name="files" multiple=""&gt;<br></p><p>        &lt;div id="selectedFiles"&gt;&lt;/div&gt;</p><p>        &lt;input type="submit"&gt;<br>    &lt;/form&gt;<br>how can i post the file path to the database since the form handles multiple form attributes?</p><p>Please Help<br>Expecting much from you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588599413">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588599413">87</a> (In reply to <a href="#c_2588585309">#86</a>) by Raymond Camden
		posted on 3/25/2016 at 2:05 PM
		</div>
		<div class="comment_text"><p>I don't know PHP, so I can't help you with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588610794">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1I7j2mAqQc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588610794">88</a> by Germano
		posted on 3/25/2016 at 2:13 PM
		</div>
		<div class="comment_text"><p>Thanks Sir.Any other possible solution for this?</p><p>Please Help</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588657079">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588657079">89</a> (In reply to <a href="#c_2588610794">#88</a>) by Raymond Camden
		posted on 3/25/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>Sure - PHP can process forms and file uploads just fine. I don't know how to code PHP, but I know it supports this. Please see the PHP docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2588664262">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1I7j2mAqQc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2588664262">90</a> by Germano
		posted on 3/25/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>Thanks Sir, let me check</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805602601">
	<div>
		<img src="https://disqus.com/api/users/avatars/raquiles.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805602601">91</a> by Rolando
		posted on 7/27/2016 at 4:03 AM
		</div>
		<div class="comment_text"><p>You Nailed! fantastic, I was going nuts looking around, found many crazy ways of doing this, this was the more straight and simple way. I used this to simplify even more my code. Thank you sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805603296">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805603296">92</a> (In reply to <a href="#c_2805602601">#91</a>) by Raymond Camden
		posted on 7/27/2016 at 4:03 AM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805708753">
	<div>
		<img src="https://disqus.com/api/users/avatars/raquiles.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805708753">93</a> (In reply to <a href="#c_2588585309">#86</a>) by Rolando
		posted on 7/27/2016 at 6:03 AM
		</div>
		<div class="comment_text"><p>I can help you out, I used Mr. Camden code on a php project, and I use jquery $.ajax instead of httpRequest, posting to a php page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2807797711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2807797711">94</a> by kathiravan
		posted on 7/28/2016 at 8:04 AM
		</div>
		<div class="comment_text"><p>how to multiple images shows in web page</p></div>
	</div>
</div>
		
<div class="comment" id="c_2808123831">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2808123831">95</a> (In reply to <a href="#c_2807797711">#94</a>) by Raymond Camden
		posted on 7/28/2016 at 1:14 PM
		</div>
		<div class="comment_text"><p>Sorry - what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2816397464">
	<div>
		<img src="https://disqus.com/api/users/avatars/vsasravan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2816397464">96</a> by V.S.A. Sravan
		posted on 8/2/2016 at 5:33 AM
		</div>
		<div class="comment_text"><p>Hai, this is a great article, I have a small doubt,  `data.append('files', storedFiles[i]); ` in this line, what does the `files` refer to? is it ID or the name? <br>I am getting an issue in removing the files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2816838420">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2816838420">97</a> (In reply to <a href="#c_2816397464">#96</a>) by Raymond Camden
		posted on 8/2/2016 at 1:23 PM
		</div>
		<div class="comment_text"><p>It refers to the name of the form 'key' - such that when you post, you would look for a form field called files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2881130195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2881130195">98</a> by Never
		posted on 9/7/2016 at 6:16 PM
		</div>
		<div class="comment_text"><p>Change Your code as</p><p>data.append('files['+i+']', storedFiles[i]);</p><p>for Multiple Upload</p></div>
	</div>
</div>
		
<div class="comment" id="c_2881138823">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2881138823">99</a> (In reply to <a href="#c_2881130195">#98</a>) by Raymond Camden
		posted on 9/7/2016 at 6:18 PM
		</div>
		<div class="comment_text"><p>No - that's only if your app server requires it. ColdFusion, for ex, does not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2922544663">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_BbJuJsrFO2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2922544663">100</a> by Xin  Guo
		posted on 9/28/2016 at 6:53 AM
		</div>
		<div class="comment_text"><p>oh,you really help me so much ! you are my hero！！ Thank you so so so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2935821175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2935821175">101</a> by Lija
		posted on 10/6/2016 at 6:27 AM
		</div>
		<div class="comment_text"><p>The code works fantastically.. Absolutely what I was looking for.. Thanks..</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286391020">
	<div>
		<img src="https://disqus.com/api/users/avatars/mukulkandpal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286391020">102</a> by Mukul Kandpal
		posted on 5/3/2017 at 10:04 AM
		</div>
		<div class="comment_text"><p>hi<br>Raymond sir,<br>i want to ask you when we upload multiple fiile and preview  image this is helpful for me .. thanku for this</p><p>But whenever we upload 5 seleted file then preview it and now one more image add in a queue then we insert in single image. which image is last image to insert .. thn how to save all file . Please tell us</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286569236">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286569236">103</a> (In reply to <a href="#c_3286391020">#102</a>) by Raymond Camden
		posted on 5/3/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>I have no idea what you are saying here. Can you rephrase?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294185105">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_5gZrsJ3Df2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294185105">104</a> by Atharv
		posted on 5/8/2017 at 7:59 AM
		</div>
		<div class="comment_text"><p>Hello Sir,</p><p>Nice plugin for muliple image uploding. I wanna to ask what i will have to do if i want to send some additional data with image uploading like if each image has a image category .</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294348291">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294348291">105</a> (In reply to <a href="#c_3294185105">#104</a>) by Raymond Camden
		posted on 5/8/2017 at 11:40 AM
		</div>
		<div class="comment_text"><p>You can just send form fields along. You would need to associate file X with form field meta value Y but it is definitely doable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294436232">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_5gZrsJ3Df2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294436232">106</a> (In reply to <a href="#c_3294348291">#105</a>) by Atharv
		posted on 5/8/2017 at 1:01 PM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/9fb6b29953cca85b3b95ded318d8bc8568cae347ad29dae7c2f3027b669dbba1.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/9fb6b29953cca85b3b95ded318d8bc8568cae347ad29dae7c2f3027b669dbba1.png">https://uploads.disquscdn.c...</a></p><p>Thanks for quick reply. I am not getting exactly what u wanna say. I have atteched a snapshot what i want exactly. catagory select box bind with each image. Please give me some hint or example code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294492187">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294492187">107</a> (In reply to <a href="#c_3294436232">#106</a>) by Raymond Camden
		posted on 5/8/2017 at 1:40 PM
		</div>
		<div class="comment_text"><p>I kinda gave you a hint already. When doing a POST with XHR, you can send form fields along that contain any data you want. Give you want to associate a dropdown with each file, you could use form fields named like so:</p><p>category1<br>category2</p><p>where 1 matches the first image, and so on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3323722782">
	<div>
		<img src="https://disqus.com/api/users/avatars/abdulghaffar349.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3323722782">108</a> by Abdul Ghaffar
		posted on 5/25/2017 at 7:08 AM
		</div>
		<div class="comment_text"><p>Hello Sir,<br>Its only show the images how I can show and remove other mime types like pdf, doc and rar etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3323991513">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3323991513">109</a> (In reply to <a href="#c_3323722782">#108</a>) by Raymond Camden
		posted on 5/25/2017 at 12:49 PM
		</div>
		<div class="comment_text"><p>You would need to find someway of representing them. For example, find an image that represents PDF, like maybe the logo, and use that image instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3335585750">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3335585750">110</a> by cgeiser
		posted on 6/1/2017 at 5:52 PM
		</div>
		<div class="comment_text"><p>I'm trying to use your code to upload multiple images through PouchDB. For this to work I need to have a variable set to equal the array of images - then that variable gets submitted through PouchDB. I've got an example on jsbin that I had tried to add your code into and couldn't get that working. The link here contains the working code that allows me to submit one image, but not multiple images: <a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fhaturuk%2Fedit%3Fhtml%2Cjs%2Coutput%3AZkAUK9HcvBOF9Kv34l1YS5fwL5s&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/haturuk/edit?html,js,output">http://jsbin.com/haturuk/ed...</a></p><p>Your code in a working jsbin: <a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fposecek%2F2%2Fedit%3Fhtml%2Cjs%2Coutput%3Adqa8N9RxGLE3Oy5Z9sRtoMktHXc&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/posecek/2/edit?html,js,output">http://jsbin.com/posecek/2/...</a></p><p>Any chance you can provide any pointers?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3336030108">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3336030108">111</a> (In reply to <a href="#c_3335585750">#110</a>) by Raymond Camden
		posted on 6/1/2017 at 9:59 PM
		</div>
		<div class="comment_text"><p>Since the array of images is stored in storedFiles, you can get the length just by doing storedFiles.length. Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390155420">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390155420">112</a> (In reply to <a href="#c_3336030108">#111</a>) by cgeiser
		posted on 6/28/2017 at 6:07 PM
		</div>
		<div class="comment_text"><p>Hmm. One of the keepers of PouchDB suggested this: <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fnolanlawson%2Ff517e9be00eda1cb898f4b762293ad73%3A-7EQf2-nCPc747OTMgMq1XWLENM&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/nolanlawson/f517e9be00eda1cb898f4b762293ad73">https://gist.github.com/nol...</a><br>But no luck. <br>I'll toil on...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390163615">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390163615">113</a> by cgeiser
		posted on 6/28/2017 at 6:12 PM
		</div>
		<div class="comment_text"><p>One more question. I can't figure out how to put the images to populate the screen going across the page instead of vertically. Any chance you can think of an easy modification so that they'll go across, wrapping to the next line when the fill the width of the the div? (&lt;div id="selectedFiles" style="max-width: 900px"&gt;)<br>Like this:<br>                  img1     img2     img3<br>                          img4     img5</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390175343">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390175343">114</a> (In reply to <a href="#c_3390163615">#113</a>) by Raymond Camden
		posted on 6/28/2017 at 6:19 PM
		</div>
		<div class="comment_text"><p>That's just CSS. I'd build a new HTML file with 5 hard coded images, work on your CSS, then apply it to that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390297418">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390297418">115</a> (In reply to <a href="#c_3390175343">#114</a>) by cgeiser
		posted on 6/28/2017 at 7:31 PM
		</div>
		<div class="comment_text"><p>I had tried, and failed on that route. Now I got it:<br>var html = "&lt;div class="myCustImg"&gt;&lt;img src="\""" +="" e.target.result="" +="" "\"="" data-file=""+<a href="http://disq.us/url?url=http%3A%2F%2Ff.name%3Ac8517UnBsNfCQivHLeNJmFLeLu0&amp;cuid=3321886" rel="nofollow noopener" title="f.name">f.name</a>+"" class="selFile" title="Click to remove"&gt;" + "&lt;/div&gt;";</p><p>with the class defined as:<br>.myCustImg {<br>  display: inline-block;<br>}</p><p>Thanks for the fantastic tool!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390317363">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390317363">116</a> (In reply to <a href="#c_3390297418">#115</a>) by Raymond Camden
		posted on 6/28/2017 at 7:42 PM
		</div>
		<div class="comment_text"><p>How did it fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390323263">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390323263">117</a> (In reply to <a href="#c_3390317363">#116</a>) by cgeiser
		posted on 6/28/2017 at 7:46 PM
		</div>
		<div class="comment_text"><p>I actually can't remember what I tried before this - but it was more complicated and didn't work. This was quite simple and works perfectly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390325030">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390325030">118</a> (In reply to <a href="#c_3390323263">#117</a>) by Raymond Camden
		posted on 6/28/2017 at 7:47 PM
		</div>
		<div class="comment_text"><p>Oh cool. Well if you get rich doing this, visit my Amazon Wish List please. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390334349">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390334349">119</a> (In reply to <a href="#c_3390325030">#118</a>) by cgeiser
		posted on 6/28/2017 at 7:52 PM
		</div>
		<div class="comment_text"><p>Rich won't be in the cards I don't think. But if I do ...<br>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3678391178">
	<div>
		<img src="https://disqus.com/api/users/avatars/stefanzlatanovic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3678391178">120</a> by Stefan Zlatanovic
		posted on 12/26/2017 at 12:45 AM
		</div>
		<div class="comment_text"><p>Hey, thank you for this, I've implemented this code and it works fantastic for previewing mutliple image uploads with the ability to delete and upload more, but I'm having problem with the images being submitted. I've modifed to the code to send my other inputs and that part works, but the images themselves arent being sent. I have my php side respond with whats it getting, and its getting the inputs but not images. The problem seems to be that .append isnt assigning images to the array, because it does create and send the image when its changed to a string. Here is what the server is getting when its trying to load images, and when that bit is changed to a string:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgyazo.com%2F484c38d7285c3e3b2a9cfe73f50d17e6%3Az9bhM63gdRkzrOYKM4bQ5EGuEQ0&amp;cuid=3321886" rel="nofollow noopener" title="https://gyazo.com/484c38d7285c3e3b2a9cfe73f50d17e6">https://gyazo.com/484c38d72...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgyazo.com%2F2a3c9e4e6a8823b9539b00836de48e85%3ApO0DxUfq6KaGCYddyk2YyNCxgbo&amp;cuid=3321886" rel="nofollow noopener" title="https://gyazo.com/2a3c9e4e6a8823b9539b00836de48e85">https://gyazo.com/2a3c9e4e6...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgyazo.com%2F03bdc64a73c27be6b1eead6712b26a7d%3AFcrZ7EW3RrbIwS6vjayjIbc_Isw&amp;cuid=3321886" rel="nofollow noopener" title="https://gyazo.com/03bdc64a73c27be6b1eead6712b26a7d">https://gyazo.com/03bdc64a7...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgyazo.com%2Fabf36bd21f388aa701c7dbb81ed2a8e3%3A0hHNfsBkEi4CDXpNzx3ENMrIlXc&amp;cuid=3321886" rel="nofollow noopener" title="https://gyazo.com/abf36bd21f388aa701c7dbb81ed2a8e3">https://gyazo.com/abf36bd21...</a> <br>Its data.append('files', storedFiles[i]); that seems to be the problem, what I can do to make it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3678920955">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3678920955">121</a> (In reply to <a href="#c_3678391178">#120</a>) by Raymond Camden
		posted on 12/26/2017 at 3:07 PM
		</div>
		<div class="comment_text"><p>Is this online where I can test myself? Do you see any errors in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3679231768">
	<div>
		<img src="https://disqus.com/api/users/avatars/stefanzlatanovic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3679231768">122</a> (In reply to <a href="#c_3678920955">#121</a>) by Stefan Zlatanovic
		posted on 12/26/2017 at 7:31 PM
		</div>
		<div class="comment_text"><p>I was putting it online to show you, but during that I accidentally got it to work. One of the mistakes was not using a $_FILES array in php. You also have to put [] at the end of 'files' to make it into array it seems. <br>Here is the end result of it working with the data structure as its received:<br><a href="https://disq.us/url?url=https%3A%2F%2Fi.gyazo.com%2Feb8460c843b382f84420e02735fcb01c.png%3Atp5mX6MrGOX9kEwuOQo-i_pVMHQ&amp;cuid=3321886" rel="nofollow noopener" title="https://i.gyazo.com/eb8460c843b382f84420e02735fcb01c.png">https://i.gyazo.com/eb8460c...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fi.gyazo.com%2F29224ba783f1ca2edea38c8ba010a797.png%3ALnbtVI5GwQ89DvC_Ftm8LuqQrrs&amp;cuid=3321886" rel="nofollow noopener" title="https://i.gyazo.com/29224ba783f1ca2edea38c8ba010a797.png">https://i.gyazo.com/29224ba...</a><br>For those wondering how to call it in php, it would be $_FILES['files']['name'][0] for example, to get the name of the first one. Seems a bit counterintuitive to have the number indexes after the associative ones, but what can you do. <br>Either way thanks again for this implementation, saved my life on a project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3679242577">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3679242577">123</a> (In reply to <a href="#c_3679231768">#122</a>) by Raymond Camden
		posted on 12/26/2017 at 7:41 PM
		</div>
		<div class="comment_text"><p>Ah, glad you got it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3703068091">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3703068091">124</a> by cgeiser
		posted on 1/11/2018 at 7:06 PM
		</div>
		<div class="comment_text"><p>Would there be a way to use canvas.width and canvas.height to redraw the preview image instead of CSS? The reason as that some users want to print to PDF on a mobile device - this results in the full size image being used in the PDF and huge PDF's.</p><p>I was thinking that something like below could work but I can't figure out what to replace e.target.result with to get the resized images to show in preview (var html = "&lt;div&gt;&lt;img src="\""" +="" e.target.result="" +="" "\"="" data-file=""+<a href="http://disq.us/url?url=http%3A%2F%2Ff.name%3Ac8517UnBsNfCQivHLeNJmFLeLu0&amp;cuid=3321886" rel="nofollow noopener" title="f.name">f.name</a>+"" class="selFile" title="Click to remove"&gt;" + "&lt;/div&gt;";)</p><p>Thanks for all your help! <a href="https://uploads.disquscdn.com/images/b7e527a876dd0a3ad59bdce7fa02dfd55229ebaf332ea2e919da165d4b6cf073.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/b7e527a876dd0a3ad59bdce7fa02dfd55229ebaf332ea2e919da165d4b6cf073.jpg">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3704488598">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3704488598">125</a> (In reply to <a href="#c_3703068091">#124</a>) by Raymond Camden
		posted on 1/12/2018 at 3:58 PM
		</div>
		<div class="comment_text"><p>I really have no idea what you mean. Are you allowing the user to select PDFs, not images</p></div>
	</div>
</div>
		
<div class="comment" id="c_3704577251">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3704577251">126</a> (In reply to <a href="#c_3704488598">#125</a>) by cgeiser
		posted on 1/12/2018 at 4:47 PM
		</div>
		<div class="comment_text"><p>Sorry if I wasn't clear. The form that uses your code is sometimes printed out after the details are entered. Usually when printed it is printed to PDF. When this is done the underlying image data for the image present in the browser view of this form is the user selected image at it's native size, not the resized size. This creates enormous PDF files pretty easily. I believe the workaround would be to use canvas to redraw the image at lower size/resolution for the web view - then when the web view is printed it will be this lower resolution file that is printed.</p><p>Any ideas on this?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3704872092">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3704872092">127</a> (In reply to <a href="#c_3704577251">#126</a>) by Raymond Camden
		posted on 1/12/2018 at 7:27 PM
		</div>
		<div class="comment_text"><p>Odd that the "Print to PDF" feature is ignoring the CSS. Maybe add a width="X" to the img tag where X matches the max width used in the CSS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3717061631">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3717061631">128</a> (In reply to <a href="#c_3704872092">#127</a>) by cgeiser
		posted on 1/20/2018 at 6:56 AM
		</div>
		<div class="comment_text"><p>Unfortunately that doesn't work either - the PDF created from the web form on iOS still embeds the full size image.</p><p>Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3717359082">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3717359082">129</a> (In reply to <a href="#c_3717061631">#128</a>) by Raymond Camden
		posted on 1/20/2018 at 1:54 PM
		</div>
		<div class="comment_text"><p>Maybe look into a client-side library to resize the image. That's an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3773757529">
	<div>
		<img src="https://disqus.com/api/users/avatars/justineabuel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3773757529">130</a> by Justine Abuel
		posted on 2/24/2018 at 7:54 AM
		</div>
		<div class="comment_text"><p>This was great man but can you help me on how can i upload it to the sql database i am using <a href="http://disq.us/url?url=http%3A%2F%2Fasp.net%3AUNuNRjBScd2oG1vMxpbXVtVI7Ig&amp;cuid=3321886" rel="nofollow noopener" title="asp.net">asp.net</a> c#. thanks in advance and also how can i limit into 4 maximun of they upload</p></div>
	</div>
</div>
		
<div class="comment" id="c_3773821732">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3773821732">131</a> (In reply to <a href="#c_3773757529">#130</a>) by Raymond Camden
		posted on 2/24/2018 at 9:49 AM
		</div>
		<div class="comment_text"><p>I've never used ASP.Net so I can't help with this. As for the max, since you can read the length of the files array, you can check for that and when it is too high, prevent form submission.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849450991">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vVeDCd1aYk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849450991">132</a> by richard gonzales
		posted on 4/11/2018 at 3:59 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I find this blog really helpful in my website although there's a bit of problem. whenever I remove the images, its still on the selected item not remove(only the image/s). Thanks, hoping for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849895588">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849895588">133</a> (In reply to <a href="#c_3849450991">#132</a>) by Raymond Camden
		posted on 4/11/2018 at 1:05 PM
		</div>
		<div class="comment_text"><p>Add a console.log(storedFiles.length) before and after the splice - see if it's properly resizing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852599277">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852599277">134</a> (In reply to <a href="#c_3849895588">#133</a>) by cgeiser
		posted on 4/12/2018 at 10:50 PM
		</div>
		<div class="comment_text"><p>I'm struggling to figure out where to put the console.log(storedFiles.length), can you provide any more guidance?</p><p>I've got a working demo here: <a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fposecek%2F6%2Fedit%3Fhtml%2Cjs%2Coutput%3ASMIjQal1SidAVvvvnEYDBwJO2Mw&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/posecek/6/edit?html,js,output">http://jsbin.com/posecek/6/...</a></p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852764754">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852764754">135</a> (In reply to <a href="#c_3852599277">#134</a>) by Raymond Camden
		posted on 4/13/2018 at 1:25 AM
		</div>
		<div class="comment_text"><p>Err, before and after the splice -</p><p>storedFiles.splice(i,1) - that's in the remove handler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852766428">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852766428">136</a> (In reply to <a href="#c_3852599277">#134</a>) by Raymond Camden
		posted on 4/13/2018 at 1:27 AM
		</div>
		<div class="comment_text"><p>I used your jsbin, added 3 files, removed one, and checked storedFiles.length in the console - it was 2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3854278334">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TMq6b1X7If.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3854278334">137</a> (In reply to <a href="#c_3852764754">#135</a>) by cgeiser
		posted on 4/13/2018 at 11:40 PM
		</div>
		<div class="comment_text"><p>Right, the console.log works. But the number of files shown next to the Browse box does not update. Is there a way to get that to update with the number of files?<br>The screenshot below would show the 3 images below the Browse button and above the 'Select an image' <a href="https://uploads.disquscdn.com/images/583da2dc555537926e1d3eb3a8999bd766471bd2a7011b1371b4e98129c61c5c.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/583da2dc555537926e1d3eb3a8999bd766471bd2a7011b1371b4e98129c61c5c.jpg">https://uploads.disquscdn.c...</a>  comment. As shown, I've selected the 3 images to remove them, but the image count shown is still 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3855007232">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3855007232">138</a> (In reply to <a href="#c_3854278334">#137</a>) by Raymond Camden
		posted on 4/14/2018 at 2:12 PM
		</div>
		<div class="comment_text"><p>As far as I know you can't change that, but you can maybe use CSS to hide the entire UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3890624216">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_4PW3cyk9Au.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3890624216">139</a> by Quicksilver
		posted on 5/8/2018 at 4:00 AM
		</div>
		<div class="comment_text"><p>Added fontawesome to show extension based on the selected file and removing files with delete icon will work fine, please check the console when removing files.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fjsfiddle.net%2Fathishayd%2Fnm2n4tL6%2F%3AWrzBdiKp_k99v8gW26FH5WqqiKc&amp;cuid=3321886" rel="nofollow noopener" title="https://jsfiddle.net/athishayd/nm2n4tL6/">https://jsfiddle.net/athish...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3890988481">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3890988481">140</a> (In reply to <a href="#c_3890624216">#139</a>) by Raymond Camden
		posted on 5/8/2018 at 12:54 PM
		</div>
		<div class="comment_text"><p>So - to be clear - you are sharing your version - not asking for help, right? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3892215419">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_4PW3cyk9Au.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3892215419">141</a> (In reply to <a href="#c_3890988481">#140</a>) by Quicksilver
		posted on 5/9/2018 at 2:57 AM
		</div>
		<div class="comment_text"><p>Yeah, just a little add-on of icons. Thanks for the fantastic code snippet, made my life easy :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4008368517">
	<div>
		<img src="https://disqus.com/api/users/avatars/abiramignanam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4008368517">142</a> by abirami gnanam
		posted on 7/27/2018 at 2:55 AM
		</div>
		<div class="comment_text"><p>hai sir,<br>i want to display 5image using array.after displaying 5img i want to add image using some button</p></div>
	</div>
</div>
		
<div class="comment" id="c_4008849533">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4008849533">143</a> (In reply to <a href="#c_4008368517">#142</a>) by Raymond Camden
		posted on 7/27/2018 at 1:11 PM
		</div>
		<div class="comment_text"><p>Sorry I honestly don't know what you are asking here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4104974810">
	<div>
		<img src="https://disqus.com/api/users/avatars/pranaypokharkarpatil.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4104974810">144</a> (In reply to <a href="#c_3890624216">#139</a>) by Pranay Pokharkar Patil
		posted on 9/20/2018 at 9:15 AM
		</div>
		<div class="comment_text"><p>Hey can you tell me how to do this in react js???</p></div>
	</div>
</div>
		
<div class="comment" id="c_4583459758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4583459758">145</a> by Rejani
		posted on 8/19/2019 at 5:03 AM
		</div>
		<div class="comment_text"><p>Hello Sir,</p><p>Really helpful article. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4763830150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4763830150">146</a> by manoj 
		posted on 1/20/2020 at 10:32 AM
		</div>
		<div class="comment_text"><p>hello <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a> when removing images its only removes the preview not from in input file.. can you please help me to delete that file from input also.. thanks in advance :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4763831496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4763831496">147</a> by manoj 
		posted on 1/20/2020 at 10:35 AM
		</div>
		<div class="comment_text"><p>here i have select 9 images from computer and then remove some images...but its still show me 9.. please help me to resolve these problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_4764042324">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4764042324">148</a> (In reply to <a href="#c_4763830150">#146</a>) by Raymond Camden
		posted on 1/20/2020 at 3:08 PM
		</div>
		<div class="comment_text"><p>Please share an online version where I can test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4824934852">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_PSWqqgaRQM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4824934852">149</a> by Rishabh Rana
		posted on 3/8/2020 at 1:50 PM
		</div>
		<div class="comment_text"><p>Great explanation. Read all previous 3 blogs. Sir i having trouble saving the images. I am using the form to send data to php page, where i upload the file into server, and then save file name in database. So i modified the code a little bit, and when i submit the form , the data being sent over to php page says after var_dump($_POST) as array(0){};</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdrive.google.com%2Fopen%3Fid%3D17YCvAjuNIA05KhlGLDfWVTwQihxvFg_8%3A4_ET-H0wTHesUX2gicYtczulYfA&amp;cuid=3321886" rel="nofollow noopener" title="https://drive.google.com/open?id=17YCvAjuNIA05KhlGLDfWVTwQihxvFg_8">https://drive.google.com/op...</a></p></div>
	</div>
</div>
		