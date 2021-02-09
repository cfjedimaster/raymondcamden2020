
<div class="comment" id="c_1713716496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716496">1</a> by Azadi Saryev
		posted on 6/30/2009 at 2:21 PM
		</div>
		<div class="comment_text"><p>A very similar question was asked not long ago in CF area of Experts Exchange. and the answer was the same: if there is a chance that one of your remote calls may 'stick' for a long time - create separate js proxy instances for your functions.</p><p>what i also usually do, is create a separate proxy for GET calls and POST calls. otherwise after you set request format in one of your function calls to POST, all your other remote calls will keep using POST method (unless you set a method in each and every ajax request), totally screwing up returned data formats...</p><p>Azadi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716510">2</a> by Andy Sandefer
		posted on 6/30/2009 at 3:10 PM
		</div>
		<div class="comment_text"><p>I have done extensive work with cfajaxproxy and I typically create more than one instance - for instance (stupid pun intended)...<br>What if I have a cfc named item.cfc and item.cfc contains the methods for deleting an item and checking to see if an item already exists, which I'll call before I try to do a ColdFusion.Ajax.submitForm with the form data used to create or update a new inventory item.  My code would probably look something like this (this is pseudo but if someone wants to see true examples that show how to chain functions, etc. I'll post it)...</p><p>&lt;cfajaxproxy cfc="cfc.item" jsclassname="proxyItem"&gt;</p><p>deleteItem = function(){<br>  /*Code to grab the item number they want to delete and probably a js confirm to see if they're serious about deleting the item - if the confirm returns a true then we can call the remote deleteItem function which would check to see if we could delete an item (we don't want to allow deletes if an item has been used on a transaction in our system because that would break our referential integrity)<br>The cfc will return a boolean telling us whether or not we were able to delete the item*/<br>  var itemID = ColdFusion.getElementValue('itemID', 'editItem', 'value');<br>  var proxyDeleteItem = new proxyItem();<br>  var proxyDeleteItem.setCallbackHandler(deleteItemCallback);<br>  //Error Handler and Caller<br>}</p><p>deleteItemCallback = function(itemDeleted){<br>//function code here<br>/*<br>So if the cfc passes back a true we would tell the user that their delete was a success and we would route them to a new page, like say the item list page or something like that<br>*/<br>}</p><p>checkForItem = function(){<br>//function code here will check to see if an item exists<br>  var itemID = ColdFusion.getElementValue('itemID', 'editItem', 'value');<br>  var proxyCheckItem = new proxyItem();<br>  var proxyCheckItem.setCallbackHandler(deleteItemCallback);<br>  //Error Handler and Caller would follow here<br>}</p><p>checkForItemCallback = function(itemExists){<br>/*If the item exists then flash an alert to let the user know that they need to specify a unique inventory item number, otherwise call the submitForm function, which you guessed it - probably has a callback of it's own!<br>*/<br>}</p><p>submitForm = function(){<br>}</p><p>submitFormCallback = function(){<br>}</p><p>If you're looking for shortcuts and less typing then you won't find it - about the only thing that I reuse is an error handler.<br>BTW, @Ray already knows this so I'm not sure why he did it (probably lazy genius syndrome crap) but anyway I'll throw in my two cents in saying that structuring js functions in the manner of <br>function MyFunctionName(){<br>}<br>causes nothing but problems.  I know that this is just example code that he's posted but if you're truly going to do a lot of work with remote calls via js they should all be conjured up using<br>MyFunctionName = function(){<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716511">3</a> by Raymond Camden
		posted on 6/30/2009 at 3:32 PM
		</div>
		<div class="comment_text"><p>@Azadi: I'm a bit confused by your very last statement. Whether or not you use GET or POST has no impact on the return format. You can return any format to either a GET or POST request. Have you seen otherwise?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716513">4</a> by Raymond Camden
		posted on 6/30/2009 at 3:35 PM
		</div>
		<div class="comment_text"><p>@Andy: I disagree about function x versus x = function. As far as I know, function x format only is a problem when the code is being loaded in via Ajax. When it is the top level code, it runs just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716514">5</a> by Yaron
		posted on 6/30/2009 at 3:57 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for posting this. I'm always concerned about using just the right amount of resources (even if it's the client browswer's). When my discovery first came to light I switched to a new instance per call. I'm curious, does anyone know, is there a heavy tax on browser resources for each instance?<br>It would be nice if Adobe created an ASYNC management system (perhaps an array of callback functions) that track remote calls to their assigned call back functions, insuring these problems will never occur.<br>Thanks,<br>Yaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716512">6</a> by Raymond Camden
		posted on 6/30/2009 at 4:06 PM
		</div>
		<div class="comment_text"><p>@Yaron: I've never thought much about JS usage and memory. I've done some basic reading on stuff in the past - I know IE has some issues with garbage collection, but I can't remember offhand the particulars. I also know that JavaScript has the same issues with string concats that Java does. But as for making objects - I'd assume that as long as it's reasonable, then it's nothing to worry about. If you are making _hundreds_ of objects, then I'd worry about memory. That may actually be something to worry about if your page is Gmail-like, in other words, a RIA that a user may stay at and never reload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716515">7</a> by Andy Sandefer
		posted on 6/30/2009 at 7:41 PM
		</div>
		<div class="comment_text"><p>@Ray - I'm not trying to be a jerk but what is the advantage of</p><p>function functionName (arguments) {function body}</p><p>over using</p><p>functionName = function(arguments) {function body}</p><p>The content of both functions is compiled when they're declared in this manner and the second syntax model allows for a function to be a property of an object.  In JavaScript a function is most definitely an object.  I'll take the syntax that works 100% of the time and I'll take consistency in my code until someone can illustrate a valid reason as to why I shouldn't handle function declarations in this manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716517">8</a> by Raymond Camden
		posted on 6/30/2009 at 10:54 PM
		</div>
		<div class="comment_text"><p>Jerk! Sorry, had to say it.</p><p>Um, well, I guess that outside of callbacks in jQuery I don't normally use anonymous functions, so if I know I'm writing in a 'parent' template I just use function x(). I'm not married to it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716516">9</a> by Andy Sandefer
		posted on 6/30/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>LOL</p></div>
	</div>
</div>
		