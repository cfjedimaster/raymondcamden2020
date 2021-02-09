
<div class="comment" id="c_3564098642">
	<div>
		<img src="https://disqus.com/api/users/avatars/manafabdul.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3564098642">1</a> by Manaf Abdul
		posted on 10/12/2017 at 3:56 PM
		</div>
		<div class="comment_text"><p>iam new in alexa skill development, could you please share the intent structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3564235779">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3564235779">2</a> (In reply to <a href="#c_3564098642">#1</a>) by Raymond Camden
		posted on 10/12/2017 at 5:17 PM
		</div>
		<div class="comment_text"><p>Sure - I should have in the post above.</p><p>{<br>  "intents": [<br>    {<br>      "intent": "AMAZON.CancelIntent"<br>    },<br>    {<br>      "intent": "AMAZON.HelpIntent"<br>    },<br>    {<br>      "intent": "AMAZON.StopIntent"<br>    },<br>    {<br>      "intent": "start"<br>    },<br>    {<br>      "slots": [<br>        {<br>          "name": "guess",<br>          "type": "AMAZON.NUMBER"<br>        }<br>      ],<br>      "intent": "numberguess"<br>    }<br>  ]<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3588585384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3588585384">3</a> by divyanshu
		posted on 10/28/2017 at 12:08 PM
		</div>
		<div class="comment_text"><p>can u provide the full code..</p></div>
	</div>
</div>
		
<div class="comment" id="c_3590497489">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3590497489">4</a> (In reply to <a href="#c_3588585384">#3</a>) by Raymond Camden
		posted on 10/29/2017 at 7:36 PM
		</div>
		<div class="comment_text"><p>The full source for the intent is above - do you see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3591142506">
	<div>
		<img src="https://disqus.com/api/users/avatars/divyanshupathania.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3591142506">5</a> (In reply to <a href="#c_3590497489">#4</a>) by Divyanshu Pathania
		posted on 10/30/2017 at 7:14 AM
		</div>
		<div class="comment_text"><p>I am super confused right now. I want the code part where your main function is called.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3592205231">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3592205231">6</a> (In reply to <a href="#c_3591142506">#5</a>) by Raymond Camden
		posted on 10/30/2017 at 7:52 PM
		</div>
		<div class="comment_text"><p>The third code block - the one kinda long - that's it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3801044790">
	<div>
		<img src="https://disqus.com/api/users/avatars/wordsmithkeymaker.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3801044790">7</a> (In reply to <a href="#c_3591142506">#5</a>) by WordsmithKeymaker
		posted on 3/13/2018 at 2:47 PM
		</div>
		<div class="comment_text"><p>..if you use amazon lambda and python, your function name will be the name of the .py file + _handler() ..."def lambda_handler" because file defaults to <a href="http://disq.us/url?url=http%3A%2F%2Flambda.py%3AOVnkL-7KMJU3KHqDOZj6ZHzTX1M&amp;cuid=3321886" rel="nofollow noopener" title="lambda.py">lambda.py</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3801045766">
	<div>
		<img src="https://disqus.com/api/users/avatars/wordsmithkeymaker.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3801045766">8</a> by WordsmithKeymaker
		posted on 3/13/2018 at 2:48 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing, helped quite a bit especially with the attributes being passed back and forth like a hot potato!</p></div>
	</div>
</div>
		