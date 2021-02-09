
<div class="comment" id="c_1713731609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731609">1</a> by Rick Vaughn
		posted on 4/13/2011 at 3:15 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Kind of a long shot but are you looking for fulltime work? My job is hiring and they want only the best. Thought I would give you a try since you are numero uno. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731592">2</a> by Raymond Camden
		posted on 4/13/2011 at 6:36 AM
		</div>
		<div class="comment_text"><p>I'm fully employed. Thank you for thinking of me - but I'm far from numero uno. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731614">3</a> by Antonio Trejos
		posted on 4/13/2011 at 8:34 AM
		</div>
		<div class="comment_text"><p>Hey Ray... do you happen to know how to detect when a CFGRID had succesfully refreshed?.  I'd like to "programatically select a row in a CFGRID" but only after having refreshed the grid with Coldfusion.grid.refresh() ...  is there something like a callbackhandler to the grid.refresh() ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731618">4</a> by Raymond Camden
		posted on 4/13/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>You can try onLoad (it's an argument to the cfgrid tag, but calls a JS function).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731613">5</a> by Raymond Camden
		posted on 4/13/2011 at 5:34 PM
		</div>
		<div class="comment_text"><p>This may help: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.danvega.org%2Fblog%2Findex.cfm%2F2008%2F3%2F20%2FCFGrid-Event-Listeners%3ApG8Ic5-tRoa50V2oZLpiGarq3As&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danvega.org/blog/index.cfm/2008/3/20/CFGrid-Event-Listeners">http://www.danvega.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731612">6</a> by Raymond Camden
		posted on 4/14/2011 at 1:12 AM
		</div>
		<div class="comment_text"><p>Check out the code here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F4%2F9%2FAsk-a-Jedi-Noticing-an-empty-CFGRID%3AAxta5Gah-ddrXb2JJKoGq0YnMko&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/4/9/Ask-a-Jedi-Noticing-an-empty-CFGRID">http://www.coldfusionjedi.c...</a></p><p>It shows an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731617">7</a> by Jim Partin
		posted on 4/14/2011 at 5:03 PM
		</div>
		<div class="comment_text"><p>You should be able to add an event handler to the grid's store's load event via the store's addListener() method. Possibly also the grid's viewready event. ExtJS is *sweet*. I prefer using it natively rather than using cfgrid using my <a href="http://disq.us/url?url=http%3A%2F%2Fext.direct%3A8GiCRqxyZYGwmj8rhCY6DAIu288&amp;cuid=3321886" rel="nofollow noopener" title="ext.direct">ext.direct</a> stack i wrote. I have a lot more control over everything and can be certain which version is in use at all times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731616">8</a> by baffled
		posted on 11/9/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray, maybe you can help me..</p><p>How can I force a cfgrid to lose focus? I am trying to simulate the effect of clicking outside the grid with the mouse. I am trying the following:</p><p>mygrid = ColdFusion.Grid.getGridObject("ProcessingGrid");<br>mygrid.blur();</p><p>but I keep getting 'mygrid is null or not an object' and is driving me nuts. I am not fluent in JavaScript so I am probably missing the obvious..</p><p>Can you help please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731622">9</a> by Raymond Camden
		posted on 11/9/2011 at 8:56 PM
		</div>
		<div class="comment_text"><p>getGridObject isn't returning a simple DOM thing. Rather, it is returning the Ext object. I'd probably put focus on something else. Like a header image for example. Get a reference to that in the DOM and do ... um shoot, .focus() perhaps. Not sure that's valid for an Image item, but try it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731620">10</a> by Jim Partin
		posted on 11/9/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>The ExtJS grids in that version do not have a blur method. Your best bet is to focus on something else you know exists on that page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731602">11</a> by baffled
		posted on 11/10/2011 at 4:02 PM
		</div>
		<div class="comment_text"><p>Hi guys, I tried to focus somewhere else, which worked, but the selected cell in the grid also remained in focus! Perhaps I should explain what I am trying to achieve. I have a grid that uses the onchange event to call a cfc that saves the actions that the user performs in it. One of the editable grid columns is a select list. I noticed that if the user changes its value and immediately closes the browser, the change is not saved because that particular cell is still in focus. On the other hand, if after the change I click anywhere in the page then the little red marker appears on the cell in question which indicates that the value was saved. So I was playing with the focus and blur events to force the grid to save the changes before the browser closes. Maybe there is a way to call the cfgridaction-cfgridrow-cfgridchanged just before the browser closes but I don't know if that is possible.. I hope all these makes sense to you! Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731605">12</a> by Raymond Camden
		posted on 11/10/2011 at 4:29 PM
		</div>
		<div class="comment_text"><p>You can do stuff on browser close (or leave), I did a blog entry on it a few weeks back.</p><p>That being said - you really need to look at the Ext docs for Grid, _and_ ensure you look at the docs version that matches the one that ships with CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731623">13</a> by ion amariutei
		posted on 11/22/2011 at 9:53 PM
		</div>
		<div class="comment_text"><p>hi Ray, is it possible to set the value of a grid cell programatically? i have a checkbox column and based on the value of another (numerical) column, i would like to be able to show the checkbox checked, using javascript</p><p>thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731625">14</a> by Raymond Camden
		posted on 11/23/2011 at 12:13 AM
		</div>
		<div class="comment_text"><p>Yep - you would need to check the Ext docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731621">15</a> by Krista
		posted on 3/8/2012 at 9:40 PM
		</div>
		<div class="comment_text"><p>I am looking to do the opposite of what I have read here...  Using CFGRID in CF9:  When adding a new record to the grid, how do you put the keyboard focus in the first field of the new row and begin typing?  Currently the new row requires a 'mouse click' in the field - which is not 508 compliant.  The &lt;ALT-TAB&gt; will back into the field w/'focus' (highlighted) - but not the KEYBOARD ready - i.e. cannot begin typing w/o the mouse click.  I understand CF8 did not have this problem... :/<br>TIA,<br>kcm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731624">16</a> by Raymond Camden
		posted on 3/9/2012 at 5:10 PM
		</div>
		<div class="comment_text"><p>If this worked right in 8 and not 9, I'd file a bug. Even better, try it in CF10 first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731627">17</a> by CFGRID Sufferer
		posted on 5/29/2012 at 2:23 PM
		</div>
		<div class="comment_text"><p>Very useful script, but I need a bit more help to get it really working for me. Assuming that a user has clicked on a cell of my grid and is taken to a different page. After a while, when the user presses a button to return to the grid page, I would like the originaly selected row to be highlighted so the user knows which row he clicked on last. So how can I use the value of the hrefkey in your script, or how can I pass the selected row number in my HREF link? Also since I am using pagination in my CFGRID, is it possible for the user to return to the correct CFGRID page that he was last in with the last clicked row highlighted? Hope that makes sense!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731626">18</a> by Raymond Camden
		posted on 5/29/2012 at 3:11 PM
		</div>
		<div class="comment_text"><p>Lots of questions there.</p><p>If you want to pass the value of the selected cell in the link, you will need to use Ext's API to get the cell and append it to the url before the user leaves the page.</p><p>Can you return to a particular page? Sure. If you store that the user was on page N, when the grid loads you can switch to that - again using the Ext API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731630">19</a> by CFGRID Sufferer
		posted on 5/29/2012 at 3:46 PM
		</div>
		<div class="comment_text"><p>I can't even get to the Ext API, a couple of links I tried are broken. And even if I manage to get there, I am not sure what methods to use. Does it have examples that may help me achieve my goal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731632">20</a> by Raymond Camden
		posted on 5/29/2012 at 3:49 PM
		</div>
		<div class="comment_text"><p>I googled for "ext docs" and got results pointing to the documentation. As for what methods to use - well, you really need to start at the beginning and just read. :) The Grid object is documented. It's rather deep, but you will find what you need. You do want to ensure you read the right version of the docs though. That depends on your version of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731629">21</a> by albert
		posted on 9/3/2012 at 6:10 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I have started build new application as simple data entry app. and I have decided use RIA JSON cfgrid example as "Users" application,<br>Everything works fine if I am doing simple query but based on business logic we need to store history data in this case we inserting every time new row and when I'm doing select I'm taking MAX version number.<br>CFGRID populated fine only we have just 1 row if we have multiple row and multiple versions it blowing up and error saying Database query error, but query returned good result.<br>Please, let me know if you have this before, or maybe I need stop using cfgrid and go with other approach.</p><p>Tahnks, Albert</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731633">22</a> by Raymond Camden
		posted on 9/3/2012 at 5:01 PM
		</div>
		<div class="comment_text"><p>Honestly I can't understand you enough to properly answer. I'd need to see more code to get a better idea. It also sounds like your comment has nothing to do with the blog entry at hand (dynamically selecting a particular row), so I'd recommend dropping me a line (using my contact form) instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731631">23</a> by Albert
		posted on 9/4/2012 at 2:18 PM
		</div>
		<div class="comment_text"><p>Ray,<br>You right, sorry for that,<br>I'll send you question (using your contact form),<br>Please remove this comments from your blog.</p><p>Albert</p></div>
	</div>
</div>
		