
<div class="comment" id="c_1713742461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742461">1</a> by cristi
		posted on 4/14/2014 at 10:50 PM
		</div>
		<div class="comment_text"><p>chrome.devtools.panels.create("Font Picker", "FontPicker.png", "panel.html", function (panel) {<br>    var runOnce = false;<br>    panel.onShown.addListener(function(panelWindow) {<br>        if (runOnce) return;<br>        runOnce = true;<br>        // Do something, eg appending the text "Hello!" to the devtools panel<br>        panelWindow.document.body.appendChild(document.createTextNode('Hello!'));<br>    });<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742463">2</a> by Raymond Camden
		posted on 4/14/2014 at 10:56 PM
		</div>
		<div class="comment_text"><p>Um, care to expand on what you are sharing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742462">3</a> by Carlo
		posted on 5/6/2014 at 2:39 PM
		</div>
		<div class="comment_text"><p>Hi!</p><p>Thanks for the explanation! While poking around I've found that if you include panel.js from panel.html, you can access the panel.html DOM simply bay relaxying the security policies.</p><p>Just add this line in the manifest.json:</p><p>"content_security_policy": "script-src 'self'; object-src 'self'"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742464">4</a> by Raymond Camden
		posted on 5/6/2014 at 4:15 PM
		</div>
		<div class="comment_text"><p>I'm sure that is properly documented... right? Hopefully.</p></div>
	</div>
</div>
		