
<div class="comment" id="c_1713667293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667293">1</a> by Scott P
		posted on 6/19/2007 at 3:59 AM
		</div>
		<div class="comment_text"><p>I played with it yesterday while watching Tiger miss putts and noticed a couple of minor things.  If you see something that I overlooked in the docs, let me know.</p><p>The images are set as css background images. On a horizontal menu with more than a few items and images, the text may overlap the image some.  You can over-ride the width by adding css for the name of the item, such as cfmenuitem name="foo" would be #foo {width:120px;}</p><p>I couldn't get the text to right or center align with the cfmenu style.  Had to add in css for the element such as #foo {text-align:right}</p><p>On large menus, the menu shows up in vertical order then 'flashes' to horizontal.  Think maybe this is lazyload but not sure.</p><p>Of you have a large amount of sub-menu items, the scrolling is slow.</p><p>And lastly, I see that showdelay is set to 200ms.  Do you know how I can change that after the page is loaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667292">2</a> by Tomas Fjetland
		posted on 6/19/2007 at 4:17 AM
		</div>
		<div class="comment_text"><p>Very nice feature. Too bad it's nearly too ugly in Opera to use :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667295">3</a> by Raymond Camden
		posted on 6/19/2007 at 6:57 AM
		</div>
		<div class="comment_text"><p>@ScottP - not sure. File an ER? :)</p><p>@Thomas - Ditto - file an ER. Adobe _does_ listen to bug reports.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667297">4</a> by duncan
		posted on 6/19/2007 at 1:35 PM
		</div>
		<div class="comment_text"><p>basic HTML markup problems with the generated content.  This isn't valid:<br>&lt;div id="_cf_menu1182244792322"</p><p>because all ids have to start with a letter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667296">5</a> by Scott p
		posted on 6/19/2007 at 2:35 PM
		</div>
		<div class="comment_text"><p>Will do - think there is a already some of those on file but I'll dbl-check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667294">6</a> by Doug S.
		posted on 6/19/2007 at 5:56 PM
		</div>
		<div class="comment_text"><p>Can these new menus in CF8 be built dynamically, for example, with data pulled from a query?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667299">7</a> by Raymond Camden
		posted on 6/19/2007 at 6:55 PM
		</div>
		<div class="comment_text"><p>I had no problem making dynamic menuitems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667387">8</a> by Dave Ferguson
		posted on 6/19/2007 at 9:56 PM
		</div>
		<div class="comment_text"><p>Is it me or do the menus seem to have odd hide/display issues.   I was playing around with submenus and the hide/display on them just does not seem consistant.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667409">9</a> by Raymond Camden
		posted on 6/19/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>I didn't see that - but as always - file a bug. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667401">10</a> by BJ McShane
		posted on 9/17/2007 at 6:11 PM
		</div>
		<div class="comment_text"><p>It looks like the target attribute doesn't work correctly.  When I add target="_blank" so that it will open a new window, the new window gets displayed behind the calling window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667404">11</a> by Alex Hubner
		posted on 10/20/2007 at 11:42 AM
		</div>
		<div class="comment_text"><p>You can't use cfmenu/cfmenuitem with a recursive technique like those you reinvoke a .cfm file (using customtag or cfmodule) to build a multiple item menu.</p><p>Also, on IE (so far I found IE7), you can't finish a cfmenuitem block with a "cfmenuitem divider=true", it will throw a JavaScript error. You must finish with a "content" cfmenuitem. On Firefox, Safari and Opera runs fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667397">12</a> by richard brasier
		posted on 12/2/2008 at 5:53 AM
		</div>
		<div class="comment_text"><p>changing the height of the menu seems to be a bit of a pain.</p><p>i tried wrapping it in a div and it seems to work fine in firefox, but not in ie:<br>&lt;div style="height: 30px;line-height:30px;"&gt;</p><p>&lt;cfmenu bgColor="##c0c0c0"&gt;<br>   &lt;cfmenuitem display="Adobe" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" /&gt;<br>   &lt;cfmenuitem display="Products"&gt;<br>      &lt;cfmenuitem display="ColdFusion" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fcoldfusion%3AvJ-uTDC_tOVSoE2b8Pbca2Z4ZNY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/coldfusion">http://www.adobe.com/go/col...</a>" /&gt;<br>      &lt;cfmenuitem display="Flash" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fflash%3AnOTivVcSAaHo7z7uhjEE8h5yZho&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/flash">http://www.adobe.com/go/flash</a>" /&gt;<br>   &lt;/cfmenuitem&gt;<br>&lt;/cfmenu&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667399">13</a> by Bill S
		posted on 5/1/2009 at 10:18 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I have a web site using frameset. Could I manage to use cfmenu in the menu frame and post content in the content frame? Where could I found example/reference for this? Is this is not a good idea?</p><p>Thanks.</p><p>Bill</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667403">14</a> by Raymond Camden
		posted on 5/1/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>I haven't tried, but the links for cfmenu can be _any_ link afaik, so you should be able to target the frame.</p><p>I just checked - cfmenuitem includes a target attribute.</p><p>So there ya go. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667407">15</a> by Bill S
		posted on 5/1/2009 at 10:40 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. It works fine. Appreciate your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667408">16</a> by Clyde Conway
		posted on 6/5/2009 at 1:42 AM
		</div>
		<div class="comment_text"><p>Hi, how are you?<br>When using multiple cfmenus on a page, I've noticed that an additional carot is displayed (when displaying submenus) for each additional menu that is used. For example, in the following, there will be 2 carots in the top menu and one in the bottom. If I were to add a 3rd menu, there would be 3 carots in the top menu, and so on...</p><p>&lt;cfmenu	name="menu" type="horizontal" bgcolor="##015A9C"&gt;<br>&lt;cfmenuitem name="menuitem" display="Home" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" /&gt;</p><p>&lt;cfmenuitem name="Bagels" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" display="Bagels"&gt;<br>&lt;cfmenuitem name="Raisin" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"	display="Raisin" /&gt;<br>&lt;cfmenuitem name="Garlic" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"	display="Garlic" /&gt;<br>&lt;/cfmenuitem&gt;<br>&lt;/cfmenu&gt;</p><p>&lt;cfmenu	name="menu2" type="horizontal" bgcolor="##015A9C"&gt;<br>&lt;cfmenuitem name="menuitem2" display="Home" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" /&gt;</p><p>&lt;cfmenuitem name="HotDogs" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" display="Hot Dogs"&gt;<br>&lt;cfmenuitem name="Nathans" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"	display="Nathans" /&gt;<br>&lt;cfmenuitem name="Sabrett" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"	display="Sabrett" /&gt;<br>&lt;cfmenuitem name="HebrewNational" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" display="Hebrew National" /&gt;<br>&lt;/cfmenuitem&gt;<br>&lt;/cfmenu&gt;</p><p>Does anyone know where I can modify this? We have people who don't like the additional carots and would like to limit them to just one no matter how many menus are on the page. Thanks for any help you can give.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667406">17</a> by Clyde Conway
		posted on 6/9/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>Nevermind...I found the stylesheet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667413">18</a> by Chris
		posted on 6/20/2009 at 12:17 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I have a mysql table to use for a menu that has an ID and parentID.  For instance, I have a menu item called "Sports" and below it would be "Football".  Football's parentID would be Sport's primary key ID.  Football may also have items under it, such as "Playoffs", "Regular Season", etc.  Those would then have the parentID of Football's primary key ID.  Basically making the menu ever expandable.</p><p>I want to use cfmenu to build a horizontal menu, but have ran into a brick wall.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667402">19</a> by Raymond Camden
		posted on 6/21/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>You would need to use recursion. Write a function that gets the top level items, then the children, and so on, and so on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667400">20</a> by Jody Fitzpatrick
		posted on 7/15/2009 at 12:09 PM
		</div>
		<div class="comment_text"><p>@Chris</p><p>&lt;!--- MENU GENERATOR ---&gt;<br>&lt;!--- GET THE MENU TO DISPLAY ---&gt;</p><p>&lt;!--- GET MENU ATTRIBUTES ---&gt;<br>&lt;cfset menu			= StructNew() &gt;<br>&lt;cfset menu.typeid	= "mainmenu"&gt;</p><p>&lt;!--- GET PARENT MENU DETAILS ---&gt;<br>&lt;cfquery datasource="#application.datasource#" name="getMenu"&gt;<br>SELECT * FROM menu WHERE <br>	menutype	= &lt;cfqueryparam value="#menu.typeid#"&gt; ORDER by order_id asc;<br>&lt;/cfquery&gt;</p><p>&lt;!--- CREATE THE MENU ---&gt;<br>&lt;cfmenu bgColor="##eeeeee" selectedItemColor="##ffffff"&gt;</p><p>&lt;!--- LOOP OVER MENU PARENT  ---&gt;<br>	&lt;cfloop query="getMenu" startrow="1" endrow="1000"&gt;<br>		&lt;cfmenuitem display="#title#" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%3AB2AkZFqigDdvPfTMfhi05ayA6nc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com">http://www.google.com</a>"&gt;</p><p>		&lt;!--- CHECK TO SEE IF THIS MENU HAS A SUBMENU THIS WOULD BE TIED FROM PARENT IN THE DATABASE<br>			TO THE PARENTS MENU ID  ---&gt;<br>        &lt;!--- GET SUB MENU QUERY  ---&gt;<br>            &lt;cfquery datasource="#application.datasource#" name="getSubMenu"&gt;<br>            SELECT * FROM menu WHERE<br>                menutype 	= &lt;cfqueryparam value="sub.#menu.typeid#"&gt; ORDER by order_id ASC;<br>            &lt;/cfquery&gt;</p><p>        &lt;!--- LOOP OVER THE RESULTS SO WE CAN RENDER THE SUB MENU ---&gt;<br>            &lt;cfloop query="getSubMenu" startrow="1" endrow="1000"&gt;<br>            &lt;cfif getSubMenu.parent eq <a href="http://disq.us/url?url=http%3A%2F%2FgetMenu.id%3AaKkevomhPzGUsRJN6t8ZUtT0YCc&amp;cuid=3321886" rel="nofollow noopener" title="getMenu.id">getMenu.id</a> &gt;<br>                &lt;cfmenuitem display="#title#" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fflash%3AnOTivVcSAaHo7z7uhjEE8h5yZho&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/flash">http://www.adobe.com/go/flash</a>" <br>                        image=		"<a href="http://disq.us/url?url=http%3A%2F%2Ffarm1.static.flickr.com%2F36%2F91701519_2027843b3f.jpg%3Fv%3D0%3APRij4gVUCAy7C26zy7gXCkJKZkA&amp;cuid=3321886" rel="nofollow noopener" title="http://farm1.static.flickr.com/36/91701519_2027843b3f.jpg?v=0">http://farm1.static.flickr....</a>" /&gt;<br>            &lt;/cfif&gt;<br>            &lt;/cfloop&gt;</p><p>     	&lt;/cfmenuitem&gt;<br>    &lt;/cfloop&gt;</p><p>&lt;/cfmenu&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667415">21</a> by Scott Jibben
		posted on 8/28/2009 at 8:44 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I have tried a few attempts to get recursion to work with cfmenu/cfmenuitem.  One of the main problems is that you can't have a &lt;cfmenuitem&gt; tag unless it is inside of a &lt;cfmenu&gt; or another &lt;cfmenuitem&gt; tag.  So, you can't really have a recursive function that creates child cfmenuitem tags as the CF parser will throw this error:</p><p>"The tag CFMENUITEM must have parent cfmenu or cfmenuitem tag."</p><p>I have tested my code by replacing the cfmenu/cfmenuitem tag output with &lt;cfmenu and &lt;cfmenuitem, so it is simply displayed the tags.  I pasted the output into a template and it works perfectly when I run it.  I don't want to have to create cfm template files on the fly using code like this.</p><p>I also tried to embed the 'level' into the data so that the code steps into the cfmenu tag tree each time the level increases and steps back out the correct number of &lt;/cfmenuitm&gt; tags.  So, there was no recursion, just calculating when and how many closing tags to use.  This does not work either, the CF parser throws an error on the 'extra' closing tags it thinks are there.  Again, I replaced the output cfmenu/cfmenuitem tags with html escaped values and when I pasted the output into a template file and ran it, it worked pefectly.</p><p>@Jody,</p><p>Nice example for a two level menu.  How would you make it work for variable levels?  For example one menu may have 3 descendants and another may have 9.  I've tried this and once you get into your 4th internal loop, it is pretty messy and once you set your limit, someone will always ask for just one more level.</p><p>So far I'm inclined to agree with @Alex Hubner.  Recursion doesn't work with cfmenu/cfmenuitem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667420">22</a> by Mike Gomez
		posted on 4/10/2010 at 7:43 AM
		</div>
		<div class="comment_text"><p>I'm trying to use an example of cfmenu to direct content into a div.  The code example I have is</p><p> &lt;cfajaximport tags="CFMENU, CFGRID, CFFORM"/&gt;<br> &lt;cfmenu name="nav" type="horizontal" bgcolor="##336699" fontcolor="##fff"&gt;<br>    &lt;cfmenuitem display="Page One" <br>      href="javaScript:ColdFusion.navigate('cfgridtesting.cfm','myDiv')" style="color:##fff;"&gt;<br>    &lt;/cfmenuitem&gt;<br>    &lt;cfmenuitem display="Page Two" <br>      href="javaScript:ColdFusion.navigate('cfgridtesting1.cfm','myDiv')" style="color:##fff;"&gt;<br>    &lt;/cfmenuitem&gt;<br> &lt;/cfmenu&gt;<br> &lt;cfdiv id="myDiv" bind="url:cfgridtesting.cfm"&gt;<br> &lt;/cfdiv&gt;</p><p>The problem is that the original cfgrid page works but when I hit the links in the menu, I get an error: Error processing JavaScript in markup for element myDiv:  [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p><p>I really don't understand why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667411">23</a> by Raymond Camden
		posted on 4/11/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>So what's the error? Did you try adding cfdebug or checking the logs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667416">24</a> by Mike Gomez
		posted on 4/13/2010 at 2:54 PM
		</div>
		<div class="comment_text"><p>It just says "Error processing JavaScript in markup for element myDiv: [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]"</p><p>How do i use cfdebug, if I put ?cfdebug after my url, it does nothing.  Seems like I remember that cfdebug isn't supported by <a href="http://disq.us/url?url=http%3A%2F%2Fhostek.com%3ATIO_Pb2GQchMLhiMk1Fyw6JENuo&amp;cuid=3321886" rel="nofollow noopener" title="hostek.com">hostek.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667414">25</a> by Raymond Camden
		posted on 4/13/2010 at 3:22 PM
		</div>
		<div class="comment_text"><p>If you use a tool like Firebug, or Chrome's Developer Tools, you can monitor the Ajax request and see the error there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667418">26</a> by Mike Gomez
		posted on 4/14/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>Firebug says:<br>"Firebug's log limit has been reached. 0 entries not shown.		Preferences	 <br>uncaught exception: [Exception... "'[JavaScript Error: "CFMessage is not defined" {file: "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.botdls.com%2FCFIDE%2Fscripts%2Fajax%2Fpackage%2Fcfajax.js%3ABZLcSjEVdOdhNyuFpDWOxUnBoo8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.botdls.com/CFIDE/scripts/ajax/package/cfajax.js">http://www.botdls.com/CFIDE...</a>" line: 429}]' when calling method: [nsIDOMEventListener::handleEvent]" nsresult: "0x80570021 (NS_ERROR_XPC_JAVASCRIPT_ERROR_WITH_DETAILS)" location: "native frame :: &lt;unknown filename&gt; :: &lt;TOP_LEVEL&gt; :: line 0" data: yes]"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667417">27</a> by Raymond Camden
		posted on 4/14/2010 at 3:25 PM
		</div>
		<div class="comment_text"><p>Look at Firebug's Net tab. It will tell you what the server result is. If it is online, let me know and I'll look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667419">28</a> by Mike Gomez
		posted on 4/16/2010 at 3:37 AM
		</div>
		<div class="comment_text"><p>The net tab doesn't show anything.  All the other tabs like DOM and stuff list all the info.  The weird thing is that when you click on the tab, and click ok on the alert, the page just acts like it's loading forever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667423">29</a> by Raymond Camden
		posted on 4/17/2010 at 5:48 AM
		</div>
		<div class="comment_text"><p>Well, is this somewhere I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667424">30</a> by Michael Gomez
		posted on 5/4/2010 at 8:04 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fbotdls.com%2Fcodetesting%2Fnoname.cfm%3AU0wlvhhbBWP-BGngraP0AeCbgko&amp;cuid=3321886" rel="nofollow noopener" title="http://botdls.com/codetesting/noname.cfm">http://botdls.com/codetesti...</a></p><p>Sorry it took me so long, been busy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667421">31</a> by Raymond Camden
		posted on 5/4/2010 at 8:13 AM
		</div>
		<div class="comment_text"><p>For me it fails immediately. I noticed you are using a Flash Form grid. If you get rid of that, replace it with some static content. Do things work ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667422">32</a> by Mike Gomez
		posted on 5/6/2010 at 8:15 AM
		</div>
		<div class="comment_text"><p>Ok this is weird.  If I use "page one" and "page two" files as both flash it fails.  If I change the bind for "page one" to a HTML grid, then it works and "page two" fails.  Is this a glitch in flash binding?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667431">33</a> by Raymond Camden
		posted on 5/6/2010 at 3:10 PM
		</div>
		<div class="comment_text"><p>Not sure - but there is a reason why I don't recommend Flash Forms to anyone. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667433">34</a> by cwilson
		posted on 7/2/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>Thank you so much for your article and all the comments on &lt;cfmenu&gt; and &lt;cfmenuitem&gt;.  This was the most helpful website I have found.<br>I had been beating my head against a wall on a problem with my menu. The testers noticed that the full width of a menu item was not "clickable", ie. you have to hover and click on the text, not on the space to the right of the text.  If one menu item's text is much longer than the others, it is more apparent.  Using examples from comments above, I checked to make sure I wasn't missing something.  I noticed in the Hot dog example above, that the space to the far right WAS clickable, and behaving as one would expect!  What was different about mine?  Finally it occurred to me!  My links were using the target="_blank" option.  Sure enough, if I take the Hot dog example, and add the target option, that menu item is no longer clickable on the far right!</p><p>&lt;cfmenu   name="menu2" type="horizontal" bgcolor="##99cbfe" selectedfontcolor="##0000dd" selecteditemcolor="##FF9900"&gt;<br>&lt;cfmenuitem name="menuitem2" display="Home" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" /&gt;</p><p>&lt;cfmenuitem name="HotDogs" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" display="Hot Dogs"&gt;<br>&lt;cfmenuitem name="Nathans" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"   display="Nathans" /&gt;<br>&lt;cfmenuitem name="Sabrett" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"   display="Sabrett" target="_blank" /&gt;<br>&lt;cfmenuitem name="HebrewNational" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>" display="Hebrew National" /&gt;<br>&lt;/cfmenuitem&gt;<br>&lt;/cfmenu&gt;</p><p>Do you get the same results I do?  If this is a bug, where do I go to report it?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667432">35</a> by Raymond Camden
		posted on 7/6/2010 at 4:25 AM
		</div>
		<div class="comment_text"><p>Sounds like a bug to me. I'd report it here: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667436">36</a> by JJ
		posted on 7/8/2011 at 4:53 PM
		</div>
		<div class="comment_text"><p>Perhaps I've missed it, but is there a way to add a tabindex or something else to make these menus keyboard accessible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667434">37</a> by JJ
		posted on 7/8/2011 at 4:56 PM
		</div>
		<div class="comment_text"><p>Update to my last comment. . . . It automatically tabs through fine in IE 6/7, but not Firefox 3.6 (Yes I have to test on a newer version of Firefox, but backwards compatibility still important).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667435">38</a> by Raymond Camden
		posted on 7/8/2011 at 5:04 PM
		</div>
		<div class="comment_text"><p>Not as far as I know- there's no options in the cfmenu tag that I see.</p></div>
	</div>
</div>
		