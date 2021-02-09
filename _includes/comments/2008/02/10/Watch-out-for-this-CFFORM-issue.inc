
<div class="comment" id="c_1713676995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676995">1</a> by Shane Zehnder
		posted on 2/10/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>I don't know the exact situation behind it, but it would seem it would be just as easy to hook a javascript function to the onClick() event of the button instead of making a new form just to go to Yahoo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676997">2</a> by Jeffrey Price
		posted on 2/10/2008 at 8:10 PM
		</div>
		<div class="comment_text"><p>It's more than likely an issue with your browser's handling of malformed HTML than anything to do with CFFORM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677000">3</a> by Raymond Camden
		posted on 2/10/2008 at 8:26 PM
		</div>
		<div class="comment_text"><p>Shane - The Yahoo thing was just a sample. I had built a demo outside of the MG site for testing purposes.</p><p>Jeffrey - good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676998">4</a> by Ken Sykora
		posted on 2/10/2008 at 11:02 PM
		</div>
		<div class="comment_text"><p>Bottom line is, you shouldn't write malformed HTML, and should validate your output with the FF plugin Tidy or the w3c validator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677011">5</a> by Diog Moura
		posted on 2/11/2008 at 2:38 PM
		</div>
		<div class="comment_text"><p>Try to put ID Attribute in both forms....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677012">6</a> by MCSFLORIDA
		posted on 10/31/2014 at 6:45 PM
		</div>
		<div class="comment_text"><p>Ken - You are the only perfect programmer in the world who *never* writes malformed HTML? I feel the way you've said what you've said was sort of haughty there. Ego check?</p><p>*EVERYONE* writes malformed HTML. but from a human perspective a person could look at this piece of code and say "well, the close form tag is definitely in the *WRONG* place -- but it still *clearly* closes before the next form begins."</p><p>Malformed HTML or not - a browser *should* still see that the first form is closed by the time the opening &lt;FORM&gt; tag presents itself for the second form.</p><p>I'd lean more towards Diog Moura's answer - if you had IDentified each form, your issue probably never would have come up.</p><p>That being said, definitely best to move that closing &lt;FORM&gt; tag out of the table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677010">7</a> by Raymond Camden
		posted on 11/1/2014 at 8:26 PM
		</div>
		<div class="comment_text"><p>@MCSFLORIDA: To be fair, the biggest point of his comment is to *check*, which can be easily automated now and should be part of your dev process.</p></div>
	</div>
</div>
		