
<div class="comment" id="c_1825344064">
	<div>
		<img src="https://disqus.com/api/users/avatars/itisdesign.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825344064">1</a> by itisdesign
		posted on 1/30/2015 at 12:04 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for filing #3928030 and I've added another comment. Just a note about the handler: when a task fires multiple times, they don't all share the same _instance_ of the handler - but this is marked ToFix per #3852672.  An instance would offer at least a couple advantages:</p><p>1) In cases where a task should not be permitted to run multiple times simultaneously, we could write logic to avoid executing the task again if onTaskEnd() or onError() hadn't yet been called.</p><p>2) In cases where a task should be permitted to run multiple times simultaneously, we can keep track of each time the task ran. Checking the Last Ran from &lt;cfschedule action="list" task="mytask"&gt; wouldn't be useful here, b/c the task could be running multiple times simultaneously (the Last Ran would only be the timestamp of the most recent run).</p><p>There is also ticket #3434100 for a new &lt;cfschedule action="create"&gt;, b/c &lt;cfschedule action="update"&gt; resets unspecified attributes to their defaults.</p><p>And I'm very thankful for the ability to use cron commands!</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825542953">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825542953">2</a> (In reply to <a href="#c_1825344064">#1</a>) by Raymond Camden
		posted on 1/30/2015 at 2:40 PM
		</div>
		<div class="comment_text"><p>That's pretty cool Aaron - I'm happy you filed that.</p></div>
	</div>
</div>
		