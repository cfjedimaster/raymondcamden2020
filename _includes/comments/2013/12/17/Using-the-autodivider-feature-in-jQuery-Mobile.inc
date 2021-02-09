
<div class="comment" id="c_1714081126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081126">1</a> by Claude Raiola
		posted on 12/18/2013 at 1:19 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>thanks for this</p><p>is it possible just to display the time in the list not repeat the date given the date is already in the divider</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081125">2</a> by Raymond Camden
		posted on 12/18/2013 at 5:18 PM
		</div>
		<div class="comment_text"><p>Yes. See my code that loops over the dates and inserts them? Just modify that. The code would be similar to the autodivider code. Ie, get the parts out of the date you want to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081127">3</a> by Fher
		posted on 11/18/2014 at 10:59 PM
		</div>
		<div class="comment_text"><p>Hi, How to addd Bubble counts to the dividers? Thanl You.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081128">4</a> by Raymond Camden
		posted on 11/18/2014 at 11:01 PM
		</div>
		<div class="comment_text"><p>It is possible but a bit more complex. The custom function is called for every item. The function returns a unique string that is used for dividers. In order to support what you want, you would need to access the global list, figure out the total for matched items, and return that.</p><p>So possible, but need a bit of work in the function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081132">5</a> by Raymond Camden
		posted on 11/18/2014 at 11:01 PM
		</div>
		<div class="comment_text"><p>Actually, let me work up a demo for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081133">6</a> by Fher
		posted on 11/18/2014 at 11:15 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond!! I'm trying.... too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081136">7</a> by Raymond Camden
		posted on 11/19/2014 at 2:08 AM
		</div>
		<div class="comment_text"><p>Unfortunately, you only get to return the text used in the divider, not the html. So I can make it return "Foo (X)", but X won't be a list bubble like how jQM does elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081139">8</a> by Fher
		posted on 11/19/2014 at 2:20 AM
		</div>
		<div class="comment_text"><p>Soo sad...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081137">9</a> by Raymond Camden
		posted on 11/19/2014 at 2:24 AM
		</div>
		<div class="comment_text"><p>Still going to make a demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081138">10</a> by Raymond Camden
		posted on 11/19/2014 at 2:43 AM
		</div>
		<div class="comment_text"><p>Note that if you don't use autodividers and generate 'regular' dividers, you can do it that way as well, but it will be more involved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081141">11</a> by Fher
		posted on 11/19/2014 at 2:52 AM
		</div>
		<div class="comment_text"><p>Ray, please look at this, I am trying by this way,but i dont know how count...</p><p> $actualtab.on("afterRefresh", function(){ <br>        $(".ui-li-divider").each(function(){<br>           var count = document.createElement('span');<br>           $(count).addClass('ui-li-count');<br>           $(this).append(count);<br>          });<br>    }) ;</p><p>       $actualtab.listview({<br>	autodividers:true,<br>	autodividersSelector: function ( li ) {</p><p>                var d= li.find("p[id='date']").text();<br>                return d;  <br>	}<br>        }).listview("refresh").trigger("afterRefresh");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081140">12</a> by Raymond Camden
		posted on 11/19/2014 at 2:59 AM
		</div>
		<div class="comment_text"><p>@Fher - I'm literately hitting Submit on the blog post now - see my newest entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081142">13</a> by Fher
		posted on 11/19/2014 at 3:13 AM
		</div>
		<div class="comment_text"><p>I  am  going to try that!!!</p></div>
	</div>
</div>
		