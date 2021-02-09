
<div class="comment" id="c_4791109059">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ezXAyf14I2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791109059">1</a> by Web Dev
		posted on 2/10/2020 at 9:26 PM
		</div>
		<div class="comment_text"><p>Hey thank you Raymond for this post. Quick question, I have multiple forms on my site and I need a Netlify Function to only access data from one form. Where do I specify which form for the netlify function to pull data from? I would only want the function being called once a certain form is submitted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4791116744">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791116744">2</a> (In reply to <a href="#c_4791109059">#1</a>) by Raymond Camden
		posted on 2/10/2020 at 9:31 PM
		</div>
		<div class="comment_text"><p>It's only going to process it where data-netlify or netlify is added to the form tag. Of course, if you don't use that, you need to find a way to process the form. You could use Formspree for example, that's what I use on my blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4791168605">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ezXAyf14I2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791168605">3</a> (In reply to <a href="#c_4791116744">#2</a>) by Web Dev
		posted on 2/10/2020 at 10:11 PM
		</div>
		<div class="comment_text"><p>Okay I understand. What if the other forms I am using are also netlify forms? Is there anyway to tell netlify to use the function for a specific Netlify submission. For example say I have a contact form and a newsletter sign up form. How would one tell the submission-created.js function to only send the information from the newsletter? Also thank you for replying so quickly. I appreciate your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4791173375">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ezXAyf14I2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791173375">4</a> (In reply to <a href="#c_4791168605">#3</a>) by Web Dev
		posted on 2/10/2020 at 10:15 PM
		</div>
		<div class="comment_text"><p>Would i need some additional logic that looks at the payload to see the form name. and if the name matches the one I need, send the request?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4791434433">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791434433">5</a> (In reply to <a href="#c_4791168605">#3</a>) by Raymond Camden
		posted on 2/11/2020 at 2:38 AM
		</div>
		<div class="comment_text"><p>Notice that the payload object had a form_name value, this came from the name field on my form tag. So given two forms, if you use a unique form name for each, you could know which was being submitted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4791918143">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ezXAyf14I2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4791918143">6</a> (In reply to <a href="#c_4791434433">#5</a>) by Web Dev
		posted on 2/11/2020 at 2:59 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond, I'll get on it this morning. I'll be sure to let you know if it works out!</p></div>
	</div>
</div>
		