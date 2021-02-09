
<div class="comment" id="c_1713671298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671298">1</a> by Gareth
		posted on 9/1/2007 at 3:13 AM
		</div>
		<div class="comment_text"><p>The console.log is for firebug, right?  I think that will throw an error in IE if people copy and paste the code directly.</p><p>All the bind stuff is really nice though.  I really need to download the dev edition locally and check it out more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671312">2</a> by Shawn Inman
		posted on 9/1/2007 at 4:10 AM
		</div>
		<div class="comment_text"><p>Thumbs up on the Mew comment.  I first downloaded Apocalypso when it was the free single of the week long ago, and I totally fell in love with it.  Rock on, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671311">3</a> by todd sharp
		posted on 9/1/2007 at 5:14 AM
		</div>
		<div class="comment_text"><p>Gareth:  You could have easily done a ColdFusion.Log.dump() too...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671313">4</a> by Gareth
		posted on 9/1/2007 at 6:14 AM
		</div>
		<div class="comment_text"><p>Certainly.  Just wanted to make sure there wasn't another reason for the console.log</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671314">5</a> by Raymond Camden
		posted on 9/1/2007 at 8:14 AM
		</div>
		<div class="comment_text"><p>@Gareth  - yep - that was a mistake (me leaving the line in there).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671315">6</a> by Will Swain
		posted on 9/1/2007 at 12:36 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. Looks like that does just what I needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671316">7</a> by Oliver
		posted on 9/14/2007 at 4:32 PM
		</div>
		<div class="comment_text"><p>Now try and get a pull down within a html cfgrid. there seems to be a bug with cfgridcolumn and valuesdisplay and value. Everything works swell, until you pick a pull down and the display switches to the value rather then the valuedisplay. when I did a submit, the submited form varibles got scrambled. Sad really every CFrelease I keep wanting to use the new UI functions, and they always seem to fail. For fun I tried dumping the entire &lt;select&gt;&lt;/select function into the calling query, it almost worked but something inside cfgrid prevented selecting other selections</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671317">8</a> by M
		posted on 10/11/2007 at 2:10 AM
		</div>
		<div class="comment_text"><p>I'm having trouble updating the drop down when the form first loads.  Works great otherwise.  Any suggestions on how to get this to fire when it's first loaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671318">9</a> by tim
		posted on 4/21/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>i did it this way since i'll have many dropdowns and want to use the same js function to select all of them. Works great. ajaxproxy works great too just thought this might be helpful.</p><p>&lt;script type='text/javascript'&gt;<br>        var hasRun = false;<br>        function selectDropDown(x,val) {<br>                if(!hasRun) {<br>                        var dd = document.getElementById(x);<br>                        for(var i = 0; i &lt; dd.length; i++){<br>                                if(dd.options[i].value == val){<br>                                        dd.selectedIndex = i;<br>                                }<br>                        }<br>                }<br>                hasRun = true;<br>        }<br>&lt;/script&gt;</p><p>&lt;cfinput type="hidden" name="categoryHiddenBind" value=""<br>bind="javascript:selectDropDown('CategoryID',<br>{grid.ComponentCatID})"&gt;<br>*Category:<br>&lt;cfselect query="getCategories" name="CategoryID"<br>        display="CategoryName" value="CategoryID" queryPosition="below"&gt;<br>        &lt;option value="0"&gt;-- Select a Category -- &lt;/option&gt;<br>&lt;/cfselect&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671296">10</a> by Ken Caldwell
		posted on 7/31/2009 at 5:29 AM
		</div>
		<div class="comment_text"><p>Ray,<br>You are doing a lot of work here for nothing.<br>As you can do the following<br>&lt;cfselect name="mycat" bind="cfc:categories.getCategories({test:entries.category})" bindonload="true"&gt;&lt;/cfselect&gt;</p><p>This then allows you to use the passed argument in your cfc.  But note that the grid appears to pass a null value initially and the the selected value of the first row.</p><p>So, before I use it in my cfc I do a cfif and if the value is 'null' then I set the id value to zero.</p><p>I can supply and example if you need it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671297">11</a> by Raymond Camden
		posted on 7/31/2009 at 7:20 AM
		</div>
		<div class="comment_text"><p>I'm not so sure that it is a lot of work for nothing per se. Your method requires another HTTP call to get the data whereas mine would use the info already in the grid. I do think its an interesting alternative and it requires less client side code (although it would need more server side code).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671300">12</a> by Ken Caldwell
		posted on 7/31/2009 at 8:20 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I could not use your example as I needed to filter the dd by another column other than the two in the dd.</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671299">13</a> by James Lamar
		posted on 5/19/2010 at 10:21 PM
		</div>
		<div class="comment_text"><p>In response to what @Oliver wrote, could you share an example of using this inside the grid such as the case with a type="combobox"? I get the same thing he does where I can manually enter the values/valuesDisplay, but even then it will show the selected value rather than valuesDisplay. I'd like to use a query rather than manually code the dropdown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671302">14</a> by Michael Appenzellar
		posted on 10/1/2010 at 11:43 PM
		</div>
		<div class="comment_text"><p>Now, is there a way to have a dropdown be inside a grid column and have another dropdown inside another grid column and then the dropdowns relate? So the value of dropdown 1 determines the value of dropdown 2?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671301">15</a> by Raymond Camden
		posted on 10/2/2010 at 6:49 PM
		</div>
		<div class="comment_text"><p>So I know that you can do a DD box in a grid in CF9. So you could have 2 columns both using DD boxes. I don't know if you can change one based on the other. Even if you could - afaik  the values for the DD are hard coded. So if you changed the value in DD 1, then even if you can change DD2, you would just be picking one of the values already there. It's not like your typical State/City type thing.</p><p>Now - I'm sure you could do this completely if you had a full Ext Grid in play. So if you get the Grid object you may be able to do this w/ JS. I'm sure other grids would allow for it as well. I don't say this to imply cfgrid sucks, but that your options can be a bit limited sometimes with what you can do with it compared to building a grid with Ext, or jQuery, 100% from scratch (by scratch I mean a plugin of course ;).</p></div>
	</div>
</div>
		