
<div class="comment" id="c_1713679240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679240">1</a> by Raul Riera
		posted on 4/8/2008 at 2:02 AM
		</div>
		<div class="comment_text"><p>Good to know, but I would recommend everyone to drop the use of CFFORM, at first I liked them a lot.. but know the "richness" of them is very limited, specially when Spry simple doesnt work with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679246">2</a> by Raymond Camden
		posted on 4/8/2008 at 2:04 AM
		</div>
		<div class="comment_text"><p>Well, to be clear, XML forms are -way- different than old school vanilla cfforms and flash forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679244">3</a> by Ken Ford
		posted on 4/8/2008 at 3:18 AM
		</div>
		<div class="comment_text"><p>Just a question for Ray and a comment for Paul.</p><p>Ray, is there a reason you are using the &lt;cfoutput&gt; tags here:</p><p>action="&lt;cfoutput&gt;#CGI.script_name#&lt;/cfoutput&gt;"</p><p>No need for them.</p><p>Paul, if you are talking about Spry widgets with cfform then there is a way:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.fusefly.info%2Findex.cfm%2F2007%2F10%2F7%2FUsing-CFFORM-and-Spry-validation%3AWeDHnZZypluOVn6UH7O2onyEX-4&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.fusefly.info/index.cfm/2007/10/7/Using-CFFORM-and-Spry-validation">http://blog.fusefly.info/in...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679245">4</a> by Raymond Camden
		posted on 4/8/2008 at 5:58 AM
		</div>
		<div class="comment_text"><p>@Ken - that was his code, not mine. I just slimmed down his stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679247">5</a> by Raul Riera
		posted on 4/8/2008 at 12:15 PM
		</div>
		<div class="comment_text"><p>@Ken</p><p>I cant comment on that blog for some reason, the captach and the whole post comment windows is messed up (says captach not available and requires me to input the "text")</p><p>BUt I dont know how is that working for him because CF replaces the onSubmit method for the CFFORM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679248">6</a> by Ken Ford
		posted on 4/8/2008 at 1:17 PM
		</div>
		<div class="comment_text"><p>@Paul</p><p>I have a form running on my website. The code is like this:</p><p>&lt;cfform <br>action="formResponse.cfm" <br>method="post" <br>name="contactForm" <br>id="contactForm" <br>onsubmit="return validateForm();"&gt;</p><p>When it is rendered the HTML looks like this:</p><p>&lt;form <br>name="contactForm" <br>id="contactForm" <br>action="formResponse.cfm" <br>method="post" <br>onsubmit="return _CF_checkcontactForm(this)"&gt;</p><p>And the JavaScript that CF puts on the page conatins this:</p><p>else {<br>// run userdefined onSubmit javascript. <br>return validateForm();<br>return true;<br>}</p><p>Which meams that after the CF JavaScript runs, the SPRY JavaScript will run.</p></div>
	</div>
</div>
		