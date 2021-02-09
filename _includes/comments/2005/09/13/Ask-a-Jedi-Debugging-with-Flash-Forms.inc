
<div class="comment" id="c_1713620790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620790">1</a> by Brandon Wittwer
		posted on 9/23/2005 at 11:12 PM
		</div>
		<div class="comment_text"><p>what I would love to see would be an external swf or some other kind of "app" that could monitor all variables, objects, etc....</p><p>i.e. dump _root.slctGROUP after a remoting call has occured to see what members are inside that object.</p><p>Which leads me to a question.  I am using pieces of the MXNA app on asfusion to build a security groups manager of sorts.  I have a dragdrop action that allows you to drag from a users GRID into a groups SELECT box.  The items in the select box have a column of "UserID" ( which is alertable and works onChange of itself).  But when the userGRID's DragDrop action try's to access UserID(to make sure it's not replacing items) it is always undefined.  I've tried _root.Groups.DataProvider[i].UserID and event.target.dataprovider[i].UserID and _root.Groups.getItemAt[i].UserID.  im so confused. ANy ideas?</p></div>
	</div>
</div>
		