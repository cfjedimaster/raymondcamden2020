
<div class="comment" id="c_1713736094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736094">1</a> by Tim Barber
		posted on 10/28/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>This is actually pretty interesting stuff. My only real concern about seeing these things come together like this is it confuses me on how I can use ColdFusion with things like this. For example, in an application that uses this toolkit, how could I use CFPDF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736098">2</a> by Raymond Camden
		posted on 10/28/2011 at 9:17 PM
		</div>
		<div class="comment_text"><p>Your question touches on a couple things here. I'll try to address them. If you want further answers, we can maybe switch to a new blog entry.</p><p>So first all - it is VERY easy to call a ColdFusion server from an AIR desktop app or an AIR-based mobile app. It's also easy via a native or PhoneGap app too. Basically, it's easy to use CF from your apps.</p><p>To be clear though, we are talking about one CF server. So your N desktop apps would call one CF server. We aren't talking about running CF "inside" the app itself. I figure you know that, but it seems to trip up some people.</p><p>To your specific question about CFPDF. CFPDF is used to manipulate PDFs. One feature is extracting text. So you could build an AIR app that - on the desktop - prompts the user to select a PDF from their system. It could then send the bits to CF, CF does it's thing and returns the text, and then the app renders the text.</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736102">3</a> by Tim Barber
		posted on 10/29/2011 at 1:53 AM
		</div>
		<div class="comment_text"><p>I think I see what you're saying but I do have a few question marks over my head. I'd like to see how to get ColdFusion to actually run on a Flex/AIR app to make it easier to fully leverage CFPDF.  I figure that's probably the easiest route since ColdFusion won't support rest services until CFREST in CF10 (YAAAY!).</p><p>Is that even possible or will this bring my CFPDF dreams to an abrupt close?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736101">4</a> by Raymond Camden
		posted on 10/29/2011 at 6:40 AM
		</div>
		<div class="comment_text"><p>So you want to see how to _call_ ColdFusion from the Flex app? I'm not sure your REST thing makes sense to me. CF can respond to Flash Remoting, HTTP, or Web Services requests already. Yes, we are adding REST in Zeus, but I don't think it's going to make it any easier/harder for what you want.</p></div>
	</div>
</div>
		