
<div class="comment" id="c_1713620979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620979">1</a> by Chris
		posted on 9/27/2005 at 2:45 AM
		</div>
		<div class="comment_text"><p>I did figure out the xmlattributes later that night.:) This is my first time getting into XML (with or w/o CF + I’m a CF newbie). Thank you for the help!</p><p>Also, I love the "Ask a Jedi" postings, it's a great help.  Your posting on “CF 101: Config Files a-Go Go” got me looking into XML.</p><p>Keep up the great work!</p><p>-Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620981">2</a> by Ryan Guill
		posted on 9/27/2005 at 4:56 AM
		</div>
		<div class="comment_text"><p>Thats interesting.  I use XMLAttributes all the time, but not like node.XMLAttributes.attributename, instead I always use node.XMLAttributes["attributeName"].  Just thought I would throw that out there in case you need it.  Also there is XMLText, XMLChildren and a couple more that you can use to access different things.  Glad to know that way too though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620983">3</a> by Sean Corfield
		posted on 9/27/2005 at 8:52 AM
		</div>
		<div class="comment_text"><p>Ryan, for all structs in CF you can use either x.y or x["y"] - that's not specific to the XML navigation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620980">4</a> by Ryan Guill
		posted on 9/27/2005 at 4:24 PM
		</div>
		<div class="comment_text"><p>Right, I know that, but I wasn't thinking of the xml data as a structure (especially since a lot of things like the xmlchildren return arrays).  I thought it was just certain syntax that was needed when working with xml, and it worked so I never really needed to go check it out any more than that.</p></div>
	</div>
</div>
		