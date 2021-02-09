
<div class="comment" id="c_1713663759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663759">1</a> by Sean Corfield
		posted on 4/4/2007 at 2:42 AM
		</div>
		<div class="comment_text"><p>What I've tended to do in situations like this is have my controller store a reference to either itself or (better) another CFC from the model into the event object. Then the view can perform essentially a callback into the model based on the data.</p><p>In other words, I turn Joe's solution on its head and use a *view* for the rendering but then have another view whose sole purpose is to take the (now-rendered) view and perform the callback on it:</p><p>callbackObj = viewState.getValue("callback");<br>callbackObj.logViewData(viewCollection.getView("excelData"));</p></div>
	</div>
</div>
		