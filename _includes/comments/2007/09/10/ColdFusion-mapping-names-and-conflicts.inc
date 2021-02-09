
<div class="comment" id="c_1713671476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671476">1</a> by Raul Riera
		posted on 9/10/2007 at 5:12 PM
		</div>
		<div class="comment_text"><p>In my early days of ColdFusion I used mappings, which where a terrible headache under shared hosting, now I completely stopped using then. Is there a good reason to use a mapping in the first place? I can't find use for them at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671493">2</a> by Raymond Camden
		posted on 9/10/2007 at 5:15 PM
		</div>
		<div class="comment_text"><p>Mappings can make life easier. You can cfinclide/cfmodule files a LOT easier with mappings. Any decent ISP will provide you with a mapping. It may be an ugly name, but they will provide you with a mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671490">3</a> by Kyle Hayes
		posted on 9/10/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>Mappings are also useful when it comes to hiding important code behind the public facing URL such as your business logic when working with a framework like Mach-II. You can put all your listeners, model, and even the frameworks themselves below the above the webroot and simply create a mapping for them to access them from CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671497">4</a> by Michael White
		posted on 9/10/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>what would the practical difference be between a coldfusion mapping and a virtual directory?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671498">5</a> by Raymond Camden
		posted on 9/10/2007 at 10:06 PM
		</div>
		<div class="comment_text"><p>A CF mapping only works in CF. A virtual mapping is a web server alias.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671496">6</a> by Devon
		posted on 9/14/2007 at 12:42 PM
		</div>
		<div class="comment_text"><p>Thanks Ray...had physics on the brain, not web dev for the past week so I missed this one. I have to separate accounts on my shared host so I'm gonna test between the two now and see what clashes. Something that has been a bit of a headache for me of late has been the way you have to point at cfcs without mappings when using a html grid.What I found has helped is sticking mapping names and common used folders in an xml file and just loading them into the application on startup.<br>Regards<br>Devon</p></div>
	</div>
</div>
		