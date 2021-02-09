
<div class="comment" id="c_1713680761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680761">1</a> by zac spitzer
		posted on 5/10/2008 at 8:33 AM
		</div>
		<div class="comment_text"><p>Do you think addResult and addMessage would be improved if they took multiple arguments than passing in a struct?</p><p>the code is looking quite verbose for a simple example.</p><p>using arguments would reduce the line count to 4 lines from the current 12</p><p>z</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680753">2</a> by Sean Corfield
		posted on 5/10/2008 at 8:34 AM
		</div>
		<div class="comment_text"><p>This is the first real explanation I've seen of CETs. I liked the concept a lot when Joe explained it but now I see the implementation, I think it's horrible. It really would be much nicer for CETs to be specified as XML instead of having to dynamically run code on every event. I'll talk to Joe about this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680765">3</a> by Raymond Camden
		posted on 5/10/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>@SC - While I don't think it is horrible, I've also told Joe he really needs to looking at a way to do CETs in XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680767">4</a> by Shimju David
		posted on 5/11/2008 at 11:01 AM
		</div>
		<div class="comment_text"><p>Frankly speaking like Sean said, concept is good, implementation looks horrible and I would rather stick with our existing way than using this new feature. Even though few repeated lines of code will happen, existing way is better when considering readability of code and simplicity in implementation. Also I hope when MG3 lauches it will have some simple way of Custom Event Types implementation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680768">5</a> by Raymond Camden
		posted on 5/11/2008 at 5:04 PM
		</div>
		<div class="comment_text"><p>I know Joe is looking at this thread. I've sent him some ideas on this as well, so we shall see. If it didn't change for MG3, I'd still be happy with the feature, but it's still early on in the development.</p></div>
	</div>
</div>
		