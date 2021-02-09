
<div class="comment" id="c_1713656062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656062">1</a> by Steve Bryant
		posted on 8/10/2006 at 5:21 PM
		</div>
		<div class="comment_text"><p>I do it pretty much the same way for data retrieval.</p><p>For the update, I have would have a method to save the item. Into that method, I pass a list of categories (I do a comma delimited list of the id, but you could do an array of objects or whatever floats your fancy).</p><p>I use that list to add or remove records related to that item in the itemcategories table.</p><p>Which is to say, I would have it in the itemDAO because it seems like a quality of the item itself (although in some cases the relationship might really seem more bidirectional in which case I might do the same thing in categoryDAO).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656069">2</a> by Joel Cox
		posted on 8/10/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>Ditto here for the most part. When modifying the many-to-many relationship table it's often easier just to delete all entries related to the item and rewrite the item/category pairs. The only situation where I've gotten myself into trouble doing this is if the (itemcategory)table also contains additional non-key columns. Wiping the rows before rewriting will, of course, also delete any additional data that you might want to keep. This is typically discovered after the fact...</p><p>In this case, I modify the table in two stages, first deleting rows from itemcategory where the category is not in the list of supplied category values for the given item, then adding rows where the category values are not in the itemcategory table for the item. This can be done readily using the SQL NOT IN clause, and is very easy if the categories are numeric values supplied by checkboxes (give them all the same name so you get a single form field with a comma-delimited list of values) or by a multiple choice select.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656068">3</a> by Tom Chiverton
		posted on 8/10/2006 at 5:56 PM
		</div>
		<div class="comment_text"><p>This is where a data abstraction framework like Reactor would be great - all your items have a getCategorys() method, for instance, without you having to do much more than set the database up and write a simple config file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656065">4</a> by Raymond Camden
		posted on 8/10/2006 at 6:16 PM
		</div>
		<div class="comment_text"><p>Good point Tom. I've only begun to use Reactor, but hope to get more into it soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656067">5</a> by Steve Bryant
		posted on 8/10/2006 at 6:21 PM
		</div>
		<div class="comment_text"><p>Joel,</p><p>For the reason you mentioned, I always follow you second process.</p><p>[plug:]<br>Actually, DataMgr.cfc does all of that for me.</p><p>I just do this:<br>DataMgr.saveRelationList("itemcategories","item_id",item_id,"category_id",categorylist)</p><p>I would expect Reactor and others to have something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656070">6</a> by Doug
		posted on 8/10/2006 at 7:47 PM
		</div>
		<div class="comment_text"><p>I would have to rely on the above comments for addressing this from the code side.  I would always break down an n-m relationship into two 1-n relationships by adding an additional table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656066">7</a> by Cedric Villat
		posted on 8/10/2006 at 9:45 PM
		</div>
		<div class="comment_text"><p>+1 for Reactor. It will have methods for both types of relationships no matter which object you choose. So if you do a getCategory(), this would then have a getItems() method.</p><p>Conversly, if you did a getItem(), this would then have a getCategories() method.</p><p>You then don't have to worry about where to put the relationship, because it is available on both sides.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656071">8</a> by Dave Shuck
		posted on 8/10/2006 at 10:00 PM
		</div>
		<div class="comment_text"><p>Another "heck yeah!" for Reactor.</p><p>The way that it manages this, and since I have been using it, the way I woudl approach it by hand is to use the concept of an iterator.</p><p>For instance you would say:</p><p>Item hasOne Category linked by CategoryItem<br>Category hasMany Item linked by CategoryItem</p><p>Then when you instantiate your Category, you have an Item iterator as a property of it.  So if you wanted to loop through a category's items to display you would do this:</p><p>&lt;cfset ItemIterator = Category.getItemIterator() /&gt;<br>&lt;cfloop condition=#ItemIterator.hasMore()#&gt;<br>    &lt;cfset ThisItem = ItemIterator.getNext() /&gt;<br>    &lt;cfoutput&gt;#ThisItem.getName()# - #ThisItem.getPrice()#&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>Additionally since you declared the relationship both ways, when you have a handle on an Item you could display the category name as</p><p>#Item.getCategory().getName()#</p><p>I can't begin to tell you how much I love Reactor. Not only has it made this type of work easy, it has taught me really great approaches if I was to have to manage this type of thing by hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656073">9</a> by Dave Shuck
		posted on 8/10/2006 at 10:04 PM
		</div>
		<div class="comment_text"><p>One other thing I should mention too...</p><p>Say I want to add a new Item to my Category...</p><p>I can do this:</p><p>NewItem = Category.getItemIterator.add();<br>//then set stuff<br>NewItem.setName("Dave's cool item");<br>NewItem.setPrice("11ty million dollars");</p><p>//now for the big finally.... are you ready?<br><a href="http://disq.us/url?url=http%3A%2F%2FCategory.save%3AxLeKhFTT8gtV9qSQmbvNQviOZ_4&amp;cuid=3321886" rel="nofollow noopener" title="Category.save">Category.save</a>();</p><p>Due to cascading saves, this not only wrote the new Item to the database, but it also added the relationships.  How much code did that just save???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656075">10</a> by Raymond Camden
		posted on 8/10/2006 at 10:06 PM
		</div>
		<div class="comment_text"><p>Dave, thanks for sharing these examples, they really show the power of Reactor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656072">11</a> by Peter Bell
		posted on 8/11/2006 at 2:49 PM
		</div>
		<div class="comment_text"><p>I'm moving towards a different approach for gets. If I want to get a category list for each of 100 items (which might be required in an admin screen) I hate the n+1 issue where I need 101 queries to return a simple list of 100 items.</p><p>Because of this, I am working on making my DAO's knowledgeable about aggregate attributes of related tables so I can return max, min, avg or even comma delimited list of values using a single query. Luckily I only have to figure out the SQL for MSSQL, but no reason it couldn't be done for other varieties of SQL with a little tweaking.</p><p>Of course, this is a special case (but an important one). I also agree with the general approaches being used here.</p><p>I'll get this blogged about some time next week!</p><p>Best Wishes,<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656074">12</a> by Rahul Narula
		posted on 9/1/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>[Posting from Flex UI ]Wow Ray this is good. When are you gonna  using the FDS</p></div>
	</div>
</div>
		