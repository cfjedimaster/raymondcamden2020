
<div class="comment" id="c_1713615009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615009">1</a> by Matt
		posted on 11/21/2003 at 1:11 AM
		</div>
		<div class="comment_text"><p>Nice post... thanks for the info... Here's my problem...</p><p>In a shopping cart app... I have a session that that hold a cart (session.Cart)<br>In the cart can be multiple items (session.Cart.Item[1], session.Cart.Item[2], etc.)<br>And , of course, each item has attributes (session.Cart.Item[1].Name, session.Cart.Item[1].SKU, etc.)</p><p>So how can I get the Items (session.Cart.Items) to be sorted by item name (session.Cart.Item[x].Name)?</p><p>This is what I've been trying...</p><p>&lt;cfset temp=StructSort(session.Cart.Item,"numeric","DESC","Name")&gt;</p><p>Any insight you may be able to provide would be greatly appreciated. Thanks in advance.</p><p>Matt</p><p>(my alternative is to hold the items individually in a database table and simply do a query each time the page is loaded with a sort... then my session simply need to hold an ID so I know which items to pull out of that table :-)  )</p></div>
	</div>
</div>
		