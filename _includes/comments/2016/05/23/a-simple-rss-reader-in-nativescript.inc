
<div class="comment" id="c_2965920453">
	<div>
		<img src="https://disqus.com/api/users/avatars/shironshajento.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2965920453">1</a> by Shironsh Ajento
		posted on 10/24/2016 at 6:09 AM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>I'm just starting with NativeScript</p><p>On my own, i've manged to fetch a json feed, parse it and show it on a listview,<br>but i'm bit stuck on using the same view for both list and article view</p><p>( right now, whenever i comeback from a article, it loads the whole list all over )<br>so how can i use the same view like you're doing it here</p><p>I've downloaded your sample too, but still didn't get that part :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_2966300508">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2966300508">2</a> (In reply to <a href="#c_2965920453">#1</a>) by Raymond Camden
		posted on 10/24/2016 at 1:54 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you mean. I'm not using the same view, I'm using two views. One for the list, one for the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2972716628">
	<div>
		<img src="https://disqus.com/api/users/avatars/shironshajento.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2972716628">3</a> (In reply to <a href="#c_2966300508">#2</a>) by Shironsh Ajento
		posted on 10/28/2016 at 6:09 AM
		</div>
		<div class="comment_text"><p>Hey, Thanks for the reply</p><p>Basically, i can't figure out how you're only loading data once ( in the main listview ), and when you come back from the detail view, that loaded data is still there, that's the part where i'm stuck with.</p><p>this is my app directory - <a href="https://disq.us/url?url=https%3A%2F%2Fdrive.google.com%2Ffile%2Fd%2F0B4sixo1ERf1gOWlES0s4M3ZGWFE%2Fview%3AEZLVc7YnZJfl1Wlm7hYFfNOqY2M&amp;cuid=3321886" rel="nofollow noopener" title="https://drive.google.com/file/d/0B4sixo1ERf1gOWlES0s4M3ZGWFE/view">https://drive.google.com/fi...</a></p><p>The only solution i could figure out was saving the data on a local text file and reload it when coming back from the detail view, but i'm not sure how well it'll work with lot of entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2973608016">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2973608016">4</a> (In reply to <a href="#c_2972716628">#3</a>) by Raymond Camden
		posted on 10/28/2016 at 7:05 PM
		</div>
		<div class="comment_text"><p>I use the loaded() event, which is fired once, and the result is bound to the page, so it only needs to load once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2977446119">
	<div>
		<img src="https://disqus.com/api/users/avatars/shironshajento.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2977446119">5</a> (In reply to <a href="#c_2973608016">#4</a>) by Shironsh Ajento
		posted on 10/31/2016 at 12:35 PM
		</div>
		<div class="comment_text"><p>Same here, but it's still happening.</p><p>I just finished a tute from Uppsala.js, they're developing on OSX for iOS, i'm on Windows emulating for Android, on their screencap it doesn't seem like loading twice ( maybe it does, but they're not firing any alerts or anything to check )</p><p>anyhow i manged to kinda fix it.</p><p>It still does re-fetch data if coming back from recent screen of android, but doesn't loose data, so i guess i'll just catch() errors on http module with network status.</p><p>Thank you for all your articles and help, i've been reading this for a while ( for Cordova and everything )</p></div>
	</div>
</div>
		