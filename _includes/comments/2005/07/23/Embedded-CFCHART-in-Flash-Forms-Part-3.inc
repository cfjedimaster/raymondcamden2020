
<div class="comment" id="c_1713619257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619257">1</a> by Philippe
		posted on 7/25/2005 at 6:13 PM
		</div>
		<div class="comment_text"><p>It would even be cooler if the chart was part of cfform, one could write code such onClick="<a href="http://disq.us/url?url=http%3A%2F%2Fchart.style%3Amk3CjyT5jW8_IYN0ZlNWhJrTmkk&amp;cuid=3321886" rel="nofollow noopener" title="chart.style">chart.style</a>='bar'" or onChange="<a href="http://disq.us/url?url=http%3A%2F%2Fchart.style%3Amk3CjyT5jW8_IYN0ZlNWhJrTmkk&amp;cuid=3321886" rel="nofollow noopener" title="chart.style">chart.style</a> = this.selectedItem.label", or you could bind datagrid rows to the chart, or the style attribute to your comboBox selectedItem ;)<br>I think MM wants to push us CF developers towards Flex via the small door ;))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619258">2</a> by AllexS
		posted on 7/27/2005 at 3:43 AM
		</div>
		<div class="comment_text"><p>Very nice Ray! Very helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619261">3</a> by Sean Coyne
		posted on 7/29/2005 at 6:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Check out this post on <a href="http://disq.us/url?url=http%3A%2F%2FAsfusion.com%3Ahq3dyApoFUyPXam81Ys47DsH3yc&amp;cuid=3321886" rel="nofollow noopener" title="Asfusion.com">Asfusion.com</a> regarding flash remoting and flash forms that can be used to update the chart via a CFC and then the form can reload it for asynchronous results.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.asfusion.com%2Fblog%2Fentry%2Fremoting-for-coldfusion-flash-forms%3Anog4wuYYvTu9L92fMj7VtP1xjIQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.asfusion.com/blog/entry/remoting-for-coldfusion-flash-forms">http://www.asfusion.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619262">4</a> by Todd
		posted on 8/9/2005 at 8:16 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>I was hoping you could help me out with something.  I'm revisiting the topic of cfcharts interacting with cfforms and came up with the following code.  Essentially what I'm trying to do is create a popup chart triggered from the cfform.  The code works excellent the first time I trigger the alert, but any subsequent clicks of the button screw up the chart formatting.  Do you have any idea why this may be happening?  Here is my code:</p><p>&lt;cfsavecontent variable="popupGraph"&gt;<br>	var msg = '&lt;img src="test3.cfm?bar=.swf" height="300" width="400"&gt;'+'&amp;nbsp;'</p><p>	var alertSettings:Object = {title:'Warning', message: msg, width:500, height:400, headerHeight:27 }<br>	errorpopup = mx.managers.PopUpManager.createPopUp(this, FormErrorException, true, alertSettings);<br>	errorpopup.centerPopUp(this);<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfform name="test" format="flash" width="500" height="500"&gt;</p><p>   &lt;cfselect name="type"&gt;<br>      &lt;option value="bar" selected&gt;Bar&lt;/option&gt;<br>      &lt;option value="line"&gt;Line&lt;/option&gt;<br>      &lt;option value="pie"&gt;Pie&lt;/option&gt;<br>   &lt;/cfselect&gt;</p><p>   &lt;cftextarea name="chartArea" height="300"&gt;&lt;/cftextarea&gt;<br>&lt;cfinput type="button" name="Popup_chart" value="Popup Chart" onclick="#popupGraph#"&gt;<br>   &lt;cfinput type="button" name="submit" value="Test Flash" <br>          onClick="_root.chartArea.html=true;_root.chartArea.htmlText<br>='&lt;img src=""test3.cfm?type='+type.getItemAt(type.selectedIndex).data+'&amp;bar=.swf""/&gt;'+'&amp;nbsp;';"&gt;</p><p>&lt;/cfform&gt;</p><p>Thanks,</p><p>Todd Sharp</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619264">5</a> by Michael White
		posted on 8/12/2005 at 6:32 AM
		</div>
		<div class="comment_text"><p>is this another one of those deals where if you have the developer version of coldfusion you're gonna have problems? When I cut and paste the code into a new coldfusion page created by dreamweaver it crashes firefox. if I clear out all the html header stuff it's a little better but it still kills firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619260">6</a> by Justice
		posted on 10/14/2005 at 4:55 PM
		</div>
		<div class="comment_text"><p>Great article Ray.  I have been trying to adapt this to my purpose and I wonder if anyone has any feedback.  I need to setup the test3.cfm file to return a .png or .jpg file instead of a flash file.  Is this possible?  I am trying to make a dynamic image-viewer app using flash forms.  I am using Alagad's image.cfc to read the .png file into a variable and trying to use cfcontent with mime type of image/png or image/gif, and the flash form just sits there mocking me!  =)  Here is a snip of the code I am trying to use, is this even possible or am I beating my head against a brick wall?</p><p>File: test3.cfm  (the viewing file is exactly like the one above)</p><p>&lt;!--- Create instance of image component ---&gt;<br>&lt;CFOBJECT component="Image" name="myImage" /&gt;<br>&lt;CFSET myImage = CreateObject("Component", "Image") /&gt;<br>&lt;CFSET myImage.readImage("\\merovingian\c$\inetpub\wwwroot\imaging\7.png") /&gt;</p><p>&lt;cfcontent type="application/x-shockwave-flash" variable="#myImage.writeToBrowser("png")#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619263">7</a> by todd
		posted on 10/14/2005 at 4:57 PM
		</div>
		<div class="comment_text"><p>Justice:</p><p>Have you ever seen this?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.asfusion.com%2Fblog%2Fentry%2Fshowing-an-image-after-upload%3AIKbwnWAlVxLpjqzUwwUzy5GsZnA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.asfusion.com/blog/entry/showing-an-image-after-upload">http://www.asfusion.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619267">8</a> by todd
		posted on 10/14/2005 at 4:59 PM
		</div>
		<div class="comment_text"><p>P.S.  I think you can only do jpg's with what I just posted.... :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619268">9</a> by Justice
		posted on 10/14/2005 at 5:04 PM
		</div>
		<div class="comment_text"><p>whoaaaa, I did not know you could only do .jpg!</p><p>On a happier note, as soon as I changed the myImage.writeToBrowser("png") to .jpg, and boom, it shows just find in flash!!  &lt;does a happy dance&gt;</p><p>Perhaps it is possible to design my image viewer in flash!</p><p>If I get it done and rolling, I will post a demo here =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619269">10</a> by Philippe Maegerman
		posted on 10/14/2005 at 5:37 PM
		</div>
		<div class="comment_text"><p>Flash 8 can load GIF and PNG as well (with their transparencies).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619270">11</a> by Justice
		posted on 10/14/2005 at 5:41 PM
		</div>
		<div class="comment_text"><p>Thanks Philippe!</p><p>I am digging around to find a way to 'update' data inside a flash form from outside of that form.  ie, I have 2 side-by-side div's, on the left is a plain jane html form, and the right pane is my flash form.  I am going to try and get the form on the left to pass parameters into the flash app on the right, to dynamically update a data grid on the top of the form.  Does anyone know a tutorial / example code for doing this?  Thanks a ton for your help so far guys!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619271">12</a> by russ
		posted on 4/5/2006 at 7:56 AM
		</div>
		<div class="comment_text"><p>I have a cms that i created using flash forms, and is password protected.  I can't get the chart cfm to load in my app, i think because of the password protection.  If I test your example outside my application, it works fine.<br>any ideas on how to get past the authentication?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619273">13</a> by Justice
		posted on 4/5/2006 at 3:56 PM
		</div>
		<div class="comment_text"><p>Russ,</p><p>If you are using application variables to maintain session state, I would think that as long as your flash form generator template is inside your application it would work fine.  Is it in a seperate folder of your site, perhaps you just need to add a &lt;cfapplication&gt; tag to the top?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619272">14</a> by russ
		posted on 4/5/2006 at 5:55 PM
		</div>
		<div class="comment_text"><p>Justice, I was thinking the same thing, and then I remembered how my testing server wasn't holding the sessions, every time I open a page it makes me log in, even if I have a page open already.  So I uploaded it to the production server and it works fine.  Now I have to figure out why my dev server isn't keeping the session.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619278">15</a> by Justice
		posted on 4/5/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>check the settings in the cfadmin console, make sure that the caching settings are set correctly, and the same as your production server.  Maybe see if one is setup to use jsessions and the other is not?</p><p>Also see if the caching locations are the same, maybe one is caching to a database?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619281">16</a> by Ken Caldwell
		posted on 5/24/2006 at 9:31 AM
		</div>
		<div class="comment_text"><p>I have been trying this in an application I'm doing.<br>All worked well (or so I thought)<br>If the client browser has browser cashe setting to automatic then the new cfchart is never loaded.<br>You keep getting the old swf from the broswer cache !!</p><p>I have tried the usual meta headers (pragma) to stop cache with no luck.  I also seen Andrew Muller's example of this with Flash and he used the following to load the swf</p><p>var salesChart = "salesChart.swf";<br>chart_mc.loadMovie(salesChart.noCache());</p><p>Now I know we can't use loadmovie in flash forms, but is there a way to stop this from caching ??</p><p>I also came across a google result about just passing the cfcontent variable back through the cfc, but I can't find it again.</p><p>I assume this could be done by passing the binary data type back, but have been unable to get it to work.</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619279">17</a> by todd
		posted on 5/24/2006 at 4:26 PM
		</div>
		<div class="comment_text"><p>Ken:</p><p>&lt;hack&gt;<br>If you pass a unique variable in the url to get your chart, you'll get a new chart everytime (rather than a cached version).  I use a technique like this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2FcreateVar.as%3AIV5wn73TzSanfvfya1OuRI9DOuM&amp;cuid=3321886" rel="nofollow noopener" title="createVar.as">createVar.as</a><br>------------</p><p>// create variable dateNow containing the current date<br>// this is placed in an include to <br>// get around the "new" restriction</p><p>var dateNow = new Date();</p><p>.cfm page<br>---------</p><p>&lt;!--- Actionscript function to get the chart ---&gt;</p><p>function genChart(){<br>#include "<a href="http://disq.us/url?url=http%3A%2F%2FcreateVar.as%3AIV5wn73TzSanfvfya1OuRI9DOuM&amp;cuid=3321886" rel="nofollow noopener" title="createVar.as">createVar.as</a>"<br>_root.chartArea.htmlText='&lt;img src="myPage.cfm?variable1=' someActionscriptvariable +'&amp;uniqueID='+dateNow+'&amp;bar=.swf"/&gt;'+'&amp;nbsp;';<br>}</p><p>&lt;/hack&gt;</p><p>I'm sure there is a better way, but in this method you guarantee that a unique variable is passed in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619280">18</a> by Ken Caldwell
		posted on 5/25/2006 at 3:53 AM
		</div>
		<div class="comment_text"><p>Thanks for the info Todd</p><p>I thought I had actually tried this, seems I did not as it now works correctly.<br>I did not use the date tho, I did</p><p>var ranNumber = Math.random();<br>_root.chartArea.htmlText='&lt;img src="myPage.cfm?variable1=' someActionscriptvariable +'&amp;uniqueID='+ranNumber+'&amp;bar=.swf"/&gt;'+' ';</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619282">19</a> by DCollins
		posted on 7/7/2007 at 5:14 AM
		</div>
		<div class="comment_text"><p>I'm trying to pass a cfgrid selected id value to create a cfchart / flash.  When row is selected in cfgrid, the textarea for chart displays to the right with the button you use, but this is not working for me.  Here's the group that displays to right when row is selected. I added your test chart data to the _gains.cfm file but not getting anywhere. This code is embedded in cfform in which cfgrid displays</p><p>&lt;cfformgroup  type="horizontal" visible="{crrtgrid.selectedItem != undefined}"  enabled="Yes" &gt;</p><p>				  &lt;cfinput type="hidden" name="id" bind="{crrtgrid.selectedItem.ZIPCRRT}"&gt;</p><p>					&lt;cftextarea name="chartArea" height="300"&gt;&lt;/cftextarea&gt;<br>					&lt;cfformgroup  type="vertical" v enabled="Yes"&gt;<br>					 &lt;cfinput type="button" name="submit" value="Test Flash" <br>          onClick = "_root.chartArea.html=true;_root.chartArea.htmlText<br>='&lt;img src=""_gains.cfm?crrt=<br>'+crrtgrid.selectedItem.ZIPCRRT+'&amp;bar=.swf""/&gt;'+'&amp;nbsp;'"&gt;<br>					&lt;/cfformgroup &gt;<br>					&lt;/cfformgroup&gt;<br>		&lt;/cfformgroup&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619283">20</a> by David Repas
		posted on 7/20/2007 at 12:36 AM
		</div>
		<div class="comment_text"><p>I'm having a problems getting this to work behind SSL - any workarounds or advice?</p><p>Appreciated</p></div>
	</div>
</div>
		