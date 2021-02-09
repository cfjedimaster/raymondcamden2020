
<div class="comment" id="c_1713708774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708774">1</a> by todd sharp
		posted on 9/26/2008 at 11:39 PM
		</div>
		<div class="comment_text"><p>I probably would have created the window onLoad (with script or with cfwindow) and just used ColdFusion.navigate() when editing (as you suggested).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708775">2</a> by Ron McKay
		posted on 9/26/2008 at 11:43 PM
		</div>
		<div class="comment_text"><p>Ray, As I was just about to send an email to you when I got your blog post notice.  I was thinking that I was close to figuring a solution but after reading your post I am not sure that my fix is not without issue so I wanted run this past you. This is what I came up with:</p><p>&lt;cfform&gt;<br>&lt;cfloop from="1" to="#arrayLen(phoneArray)#" index="x"&gt;<br>&lt;cfoutput&gt;<br>&lt;tr&gt;<br>&lt;th style="white-space:nowrap;"&gt;Phone #x#: &lt;/th&gt;<br>&lt;td style="white-space:nowrap;"&gt; #phoneArray[x].p.phone_number#&lt;/td&gt;<br>&lt;td&gt;&lt;a href="##" onClick="ColdFusion.Window.create('pop_phone_edit', 'Edit Phone Number','phone_edit.cfm?varPersonID=#varPersonID#&amp;varPhone=#phoneArray[x].p.phone_number#',{x:100,y:100,height:300,width:400,modal:false,closable:true,draggable:true,resizable:true,center:true,initshow:true,minheight:200,minwidth:200 })"&gt;EDIT&lt;/a&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfform&gt;</p><p>Will this present a problem of not allowing closed windows to be destroyed? I am keeping the window name the same for each listed item.  My preliminary test seems to allow the variable value to be displayed properly in the window.  Could this be a workable solution as well?  Like I said, I feel that I might be missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708778">3</a> by Raymond Camden
		posted on 9/28/2008 at 7:12 AM
		</div>
		<div class="comment_text"><p>I'm surprised that works since it is using the same window name - but if it works, use it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708781">4</a> by Andy Sandefer
		posted on 9/28/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>I've hashed and rehashed this issue out so many times.  Unless there is a solution requirement stating not to do it I would've made the window modal.  Focus the user's attention on what they set out to do in the first place, edit a record.  Second, why not use javascript to generate a unique id for the window each time a window is created?  I had a massive post on how to do this very thing with a searchable cfgrid as my select list - it is hiding somewhere on this very blog from a few months back.  I'll try to find it.<br>Event calls function, function gets key value from cfgrid and creates cfwindow, edit happens, ajax submit form function is called, callback calls function on parent page to close cfwindow and refresh grid.<br>As Darth Vader would say, "All too easy"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708776">5</a> by Srinivas
		posted on 9/29/2008 at 12:24 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I too has similar problem. So what i did is for each i giving the differnet name for the popup. I am just adding the current timestamp value to the popup window and each time  user clicks  it will create a new window. This is working fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708780">6</a> by Ron McKay
		posted on 9/30/2008 at 9:20 PM
		</div>
		<div class="comment_text"><p>Ray, the solution I posted above appears to be working for me.  One thing that might be making the difference on using the same window name is that when the pop_phone_edit window form is submitted...the action page actually performs a close on the window.  This is what I have on my action page after I invoke my CFC that performs the update:</p><p>&lt;script type="text/javascript"&gt;<br>   ColdFusion.Window.onHide("pop_phone_edit", onhide);<br>   ColdFusion.Window.hide("pop_phone_edit");<br>&lt;/script&gt;</p><p>I know that without calling the "onHide and hide" function the window remains alive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708777">7</a> by Kate Maher
		posted on 10/28/2008 at 11:18 PM
		</div>
		<div class="comment_text"><p>Thanks for this, it works great!</p><p>But what if you want to delete a file when you close the cfwindow?  For instance if when the window is opened a file is generated so the user can download it, but you don't want to store that file until the next time the user needs it and overwrites it.  Is there any way to delete a specific file on close?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708782">8</a> by Andy Sandefer
		posted on 10/28/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>@Kate<br>I would just use ColdFusion.Window.onHide and do your delete via a proxy through a js function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708784">9</a> by Kate Maher
		posted on 10/29/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>@Andy<br>I'm pretty sure you're not talking about putting CF *in* a JS function, and I don't think that JS can talk to the server to mess with server-side files.  What do you mean 'via proxy'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708788">10</a> by Andy Sandefer
		posted on 10/29/2008 at 12:12 AM
		</div>
		<div class="comment_text"><p>@Kate<br>You most certainly can call a function wrapped in a cfc via cfajaxproxy in your javascript code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708790">11</a> by Dylan
		posted on 11/4/2008 at 3:43 AM
		</div>
		<div class="comment_text"><p>Just a quick note -- .destroy() isn't available until 8.1, so if you're like me, and were running an earlier version of CF8 on your development machine, you'll need to upgrade for this to work.  Once I upgraded, it worked like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708787">12</a> by Brett
		posted on 12/31/2008 at 2:39 AM
		</div>
		<div class="comment_text"><p>This is perfect. Had essentially the same issue come up. This worked great! Thanks for the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708785">13</a> by George
		posted on 1/23/2009 at 7:57 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I would like to Add Another URL Parameter called myTier to win.cfm?+id<br>Not quite sure how to do it.</p><p>function cleanup() {<br>   ColdFusion.Window.destroy('mywin',true);<br>}</p><p>function showWin(id,myTier) {<br>   //do we have one?<br>   try {<br>      ColdFusion.Window.destroy('mywin',true);<br>   } catch(e) { }</p><p>   ColdFusion.Window.create('mywin','Edit Phone Number', 'win.cfm?id='+id,{center:true,draggable:false,resizable:false});<br>   ColdFusion.Window.onHide('mywin',cleanup);<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708786">14</a> by Raymond Camden
		posted on 1/23/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>The URL I used was a simple JavaScript string.</p><p>'win.cfm?id='+id</p><p>To add another one you would just add to the string</p><p>'win.cfm?id='+id+'&amp;myTier='+myTier</p><p>This assumes a JavaScript called myTier exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708793">15</a> by George
		posted on 1/24/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I am seeing the myTier key in the URL structure; however it is showing up as undefined.  The ID has 2 values.  This is what I have in my onClick event.<br>&lt;a href ="##" onClick"javascript:showWin('#ID#','#myTier#');"&gt; Not sure how to fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708792">16</a> by Raymond Camden
		posted on 1/24/2009 at 1:24 AM
		</div>
		<div class="comment_text"><p>Ok, what does Firebug tell you? Firebug, Firebug, Firebug. Sorry to be a nut, but Firebug is your # tool in the world. What I would do is this:</p><p>function showWin(id,myTier) {<br>console.log('i was sent id='+id+' and myTier='+myTier);<br>return;<br>}</p><p>Notice I got rid of the try/catch, create, etc. Keep it nice and simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708789">17</a> by George
		posted on 1/24/2009 at 1:42 AM
		</div>
		<div class="comment_text"><p>Hi Ray, thanks as usual for your help.  I got it.  I see what I was doing wrong. I was missing my quotes around my variables.<br>&lt;a href ="##" onClick"javascript:showWin('#ID#','#myTier#');"&gt;<br>Say, is there a good tutorial on how to use Firebug to debug javascript issues.  If there is not I would love for you to do one at CFUNITED.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708791">18</a> by Raymond Camden
		posted on 1/24/2009 at 1:48 AM
		</div>
		<div class="comment_text"><p>I'd be willing to bet you can Google and find a few online presos. I'm already giving 2 presos at CFUNITED, but if someone promises to buy me a few beers, I'd gladly give a quick unofficial look. To be honest, I've only scratched the surface of Firebug. I make use of console.log(simple messages) and console.dir(like a dump)</p><p>And of course I use ColdFire. You _do_ know what ColdFire is, right? (<a href="http://disq.us/url?url=http%3A%2F%2Fcoldfire.riaforge.org%3AttgthkBHkP8J3HrcB1YFu2h7MO4&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfire.riaforge.org">http://coldfire.riaforge.org</a>)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708794">19</a> by George
		posted on 1/24/2009 at 1:59 AM
		</div>
		<div class="comment_text"><p>Ray, you are on! As many beers as you would like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708796">20</a> by Raymond Camden
		posted on 1/24/2009 at 2:09 AM
		</div>
		<div class="comment_text"><p>I should warn you, the intelligence of my talking is inversely proportional to the amount of beer consumed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708797">21</a> by Andy Sandefer
		posted on 1/26/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>Amen!<br>Never code after that 3rd one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708798">22</a> by Dave
		posted on 7/24/2009 at 6:56 PM
		</div>
		<div class="comment_text"><p>Is it possible to use this script without the code that is in the window being located in a different file?  (IE 'test2.cfm' in your example; can the code for that page be in the same file as the script that creates/destroys the window?)</p><p>I'm having an issue with a JS photo slideshow I'm implementing where it really wants to be on the same page.  As soon as I try to load it from an external page, it dies.  Being much more proficient in CF than I am in JS, it's easier for me to make the code work on the same page than it is to troubleshoot why it's not working from an external page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708799">23</a> by Andy Sandefer
		posted on 7/24/2009 at 8:38 PM
		</div>
		<div class="comment_text"><p>@Dave<br>You can put the source code for the cfwindow within cfwindow tags but I wouldn't.  You're going to have to be more specific than "it dies" when describing why you don't want to put the code in another file.  That "other" file can also reference js functions from the parent page so in my view it is very advantageous to create a js object to represent the cfwindow's various attributes, create show, hide and destroy functions (in the parent page) and then go from there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708801">24</a> by Les Mizzell
		posted on 8/7/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>I'm trying to modify this code to work for an editing system I'm slowly prototyping. Having some problems with it myself though...</p><p>A large number of potential records to be edited are being returned.So,  I scroll to the one I want, and using the method in the original post above, click "edit". The window opens in place, but the page *jumps* back to the top, so now I can no longer see the window until I scroll back to the original record where the window has opened. How do I keep the original window "in place".</p><p>My database update is working fine from the window, but then my other issue is that I've not figured out how to update, in place, the data displayed on the original page.</p><p>Because of layout issues, and the fact that I need to edit way more stuff than I want to display in the returned set,  CFGRID isn't going to work for me.</p><p>In short, I need to be able to scroll down to record 87, open the window, edit record 87, and the page stays in place and 87 shows the update after the form is submitted and the window closes.</p><p>Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708803">25</a> by Andy Sandefer
		posted on 8/7/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>@Les<br>I'm sure that you can update the underlying grid by using</p><p>ColdFusion.Grid.refresh('mygridname', true);</p><p>in your js - you should put this code in your onHide js function that is responsible for closing the cfwindow control.</p><p>This will update the grid to reflect the update that you've made in the cfwindow's ajax submitter but unfortunately this will also cause the highlighted record to jump to the top of the page.  You may be able to write some special sauce against EXT to then jump back and select your rec - but I'm not sure.<br>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708805">26</a> by Brett
		posted on 8/28/2009 at 7:39 PM
		</div>
		<div class="comment_text"><p>Ray<br>I took a look at this example and modified it to suit my own problem I was having however I have run into a problem. And to be honest I am a novice a JS so it might just be my own ignorance. <br>Code:<br>function comment_add(){<br>	try {<br>		ColdFusion.Window.destroy('acWindow',true);<br>	} catch(e) { }</p><p>	ColdFusion.Window.create('acWindow', 'Add A Comment','/comment.cfm',<br>                                  {x:100,y:100,height:350,width:700,modal:false,closable:true,<br>                                  draggable:true,resizable:true,center:true,initshow:true,<br>                                  minheight:200,minwidth:200 });<br>	ColdFusion.Window.onHide('acWindow',cleanup('acWindow'));			<br>}</p><p>function cleanup(ix) {<br>	ColdFusion.Window.destroy(ix,true);			<br>}</p><p>As you can see I just adapted the code to accomidate reuse but the thing that is happening is I am getting an error from javascript saying there is an uncaught exception. The offending line of code if commented out is ColdFusion.Window.onHide('acWindow',cleanup('acWindow')); Now correct me if I am wrong but I thought you could pass a parameter to a handler function. If I take away the window name from the cleanup() there is no error. I'm stumped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708800">27</a> by Brett
		posted on 8/28/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>Ok I found a way to make it work but it is not really answering why it didn't work originally. I made it so that the created window could not be closed. On the opened window I added a Cancel button with a onclick function that called the destroy function for the window. I then took out the line of code for the onHide and removed the cleanup function altogether.</p><p>What I found out was everytime I fired off the comment_add() both the create() and onHide() where firing at the exact time. The way I figured this out was I put an alert() in the cleanup() to let me know it was being fired off. So basically something goffy is goning on with the onHide() somehow. Now I could be wrong, BUT I thought that the onHide function was like a function that was listening for a specific event namely the hide event to fire off before it would work. Now it could be the fact that IE {version 6.02} is mucking up the whole process as well. Kind of like how your blog is always displayed kind of jacked up for me at work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708802">28</a> by Raymond Camden
		posted on 8/28/2009 at 9:37 PM
		</div>
		<div class="comment_text"><p>I go out of my way to make the blog look bad in IE6. That's a "Feature" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708806">29</a> by Chris
		posted on 10/8/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>I have used this and it works well with one small problem. Clicking the link to open the window forces the browser to the top of the page. If you have a long page with lots of data, then you have to scroll all the way back down to where the window is. Is there a way to have the browser not jump to the top of the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708804">30</a> by Andy Sandefer
		posted on 10/8/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>@Chris<br>Center the cfwindow.  Check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708808">31</a> by Chris
		posted on 10/8/2009 at 1:08 AM
		</div>
		<div class="comment_text"><p>yes, I have that in the code already. It centers it in the window, but also forces the window to the top of a long page at the same time.<br> ColdFusion.Window.create('window_name','Window Title', 'windowurl.cfm?id='+id,{Center:true});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708810">32</a> by Chris
		posted on 10/12/2009 at 10:33 PM
		</div>
		<div class="comment_text"><p>I found the solution to this... for anyone having the same problem. Add  return false; to the javascript link</p><p>So, this &lt;a href="##" onclick="javascript:showWin('#phoneArray[x]#')"&gt;EDIT&lt;/a&gt;<br>becomes<br>&lt;a href="##" onclick="javascript:showWin('#phoneArray[x]#'); return false;"&gt;EDIT&lt;/a&gt;</p><p>works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708811">33</a> by Mik Muller
		posted on 7/8/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>I'm having similar issues. I need to create a new cfwindow for each productid whenever someone gets to that product. The cfwindow is created by a script in a cfdiv, so they're created on the fly as needed. However, if someone returns to a previously viewed product they get the now-familiar pop-up error telling me the window already exists. I agree ... CF should just say "oh well" and ignore the create statement if the window already exists, but whatever.</p><p>I am now creating a local variable with the productID whenever a window is created, and then check for the existence of that variable before creating the window.</p><p>Somehow I'm still getting the error, and am wondering if CF is seeing the create command inside the cfif, and ignoring the cfif.  Sort of like a syntax checker checks the code before actually running it. Doesn't make sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708813">34</a> by Mik Muller
		posted on 7/8/2010 at 12:35 AM
		</div>
		<div class="comment_text"><p>CFTRY doesn't help either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708812">35</a> by Raymond Camden
		posted on 7/8/2010 at 12:36 AM
		</div>
		<div class="comment_text"><p>Care to share the code? (use pastebin of course)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708815">36</a> by Mik Muller
		posted on 7/8/2010 at 12:42 AM
		</div>
		<div class="comment_text"><p>D'oh! Of course. The variable I was writing to was local to the inside of that CFDIV.  I thought it would become available to the rest of the page, but apparently that's not how CFDIV works. Learning all the time!</p><p>So now I'm writing it to a session variable and all's well in the world.</p><p>&lt;cfparam name="session.modal" default=""&gt;<br>&lt;cfif not listFind(session.modal,url.productID)&gt;<br>&lt;cfset session.modal = listAppend(session.modal,url.productID)&gt;<br>&lt;cfwindow ... &gt;<br>&lt;/cfif&gt;</p><p>Interesting, though, that a CFTRY still didn't stop the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708818">37</a> by Raymond Camden
		posted on 7/8/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>I'd have to see the code to see why cftry didn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708819">38</a> by Mik Muller
		posted on 7/13/2010 at 7:33 PM
		</div>
		<div class="comment_text"><p>Ok. As it turns out, I can't leave all those extra cfwindows laying around because the customer may have logged in in between opening and closing certain windows, and there's work to do in the windows if you're not logged in -- and simply re-opening an existing window that doesn't know you've since logged in, well, creates confusion.</p><p>So now I want to destroy a window when it closes, in case the customer has logged in between opening and closing various product cfwindows.</p><p>This means I need to create them on the fly, using your javascript example, which I simply cannot get to work. Driving me nuts.</p><p>Here's some code, which is inside a CFDIV:</p><p>&lt;cfajaximport tags="cfwindow"&gt;</p><p>&lt;cflayout name="rightAccordionLayout" type="tab" tabstrip="False"&gt;<br>   &lt;cflayoutarea title="Product Quantities" selected="#iif(<a href="http://disq.us/url?url=http%3A%2F%2Furl.tab%3Aoo7SuX6SlMUUtYUmywu-nRSW_HM&amp;cuid=3321886" rel="nofollow noopener" title="url.tab">url.tab</a> eq 2, DE("True"), DE("False"))#"&gt;<br>			&lt;script&gt;<br>				function cleanup() {<br>					ColdFusion.Window.destroy('priceMatrixModal',true);<br>				}</p><p>				function showWin(id) {<br>					//do we have one?<br>					try {<br>						ColdFusion.Window.destroy('priceMatrixModal',true);<br>					} catch(e) { }<br>ColdFusion.Window.create('priceMatrixModal','Product Price Grid', 'price_matrix.cfm?productID='+id,{center:true,modal:true,closable:true,width:600,height:600});<br>					ColdFusion.Window.onHide('priceMatrixModal',cleanup);<br>				}<br>			&lt;/script&gt;<br>			&lt;div id="productQuantitiesTab"&gt;<br>				&lt;div class="subtotals"&gt;<br>					Your totals:<br>				&lt;/div&gt;<br>				&lt;cfoutput&gt;<br>					&lt;button onclick="javascript:showWin('#url.productID#');"&gt;Calculate Prices&lt;/button&gt;<br>				&lt;/cfoutput&gt;<br>			&lt;/div&gt;<br>   &lt;/cflayoutarea&gt;<br>&lt;/cflayout&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708816">39</a> by Mik Muller
		posted on 7/13/2010 at 8:11 PM
		</div>
		<div class="comment_text"><p>Nevermind. I changed my approach. I keep forgetting that this is javascript, which doesn't run in the same order as the cf code.</p><p>&lt;cfparam name="session.modal" default=""&gt;<br>&lt;cfoutput&gt;<br>	&lt;cfif listFind(session.modal,url.productID)&gt;<br>		&lt;script&gt;<br>			ColdFusion.Window.destroy('priceMatrixModal',true);<br>			ColdFusion.Window.create('priceMatrixModal','Product Price Grid', 'price_matrix.cfm?productID=#url.productID#',{center:true,modal:true,closable:true,width:600,height:600,initshow:false});<br>		&lt;/script&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset session.modal = listAppend(session.modal,url.productID)&gt;<br>		&lt;script&gt;<br>			ColdFusion.Window.create('priceMatrixModal','Product Price Grid', 'price_matrix.cfm?productID=#url.productID#',{center:true,modal:true,closable:true,width:600,height:600,initshow:false});<br>		&lt;/script&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708817">40</a> by David
		posted on 8/12/2010 at 1:31 AM
		</div>
		<div class="comment_text"><p>Used your code here on cfwindow.  Worked great on 8 and now that I have switched to 9 I am having a little trouble.  The modal is set to true but you can still control the back screen.  To top that the cfwindow is also grayed out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708821">41</a> by Raymond Camden
		posted on 8/12/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>Is this online where we can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708820">42</a> by Mik Muller
		posted on 8/31/2010 at 9:14 PM
		</div>
		<div class="comment_text"><p>I've changed my tact yet again, opting to create and destroy every window on a per-use basis. Don't make them closable. Have a destroy on the cancel &lt;button&gt; outside the cfform.</p><p>Also no longer trying to keep track of which modal windows have been created. That got very sloppy.</p><p>Another trick could be to have only one window and keep re-using it over and over, pushing whatever content you want into it. Just make sure you clean out the window before hiding it, because I had a hell of a time getting my content into it while it was hidden... and having the window pop up with old content in it is confusing for the end-user.</p><p>One last thing, creating a window via javascript for some reason does not correctly center the window. I found this trick:</p><p>&lt;script&gt;<br>ColdFusion.Window.getWindowObject('yourWindowName').center();<br>&lt;/script&gt;</p><p>Put that as the first line and it'll recenter once it is open.</p><p>Lastly, the "try" wasn't working because I put it outside the &lt;script&gt; block. Obviously &lt;CFTRY&gt; isn't going to catch a javascript error. I needed to do this instead:</p><p>try { } catch(e) { }</p><p>Ok. All buttoned up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708822">43</a> by mike appenzellar
		posted on 11/19/2010 at 1:53 AM
		</div>
		<div class="comment_text"><p>This works great in Firefox but in IE 7 (govt) I am getting a javascript error within the ajax.js file. It's having an issue with the windows already being in existance, but if I take out the cleanup it says the window already exists...any thoughts? Also, if I browse the page by itself works fine, but from within a cfwindow that navigates to this page, that's when the error occurs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708824">44</a> by mike appenzellar
		posted on 11/19/2010 at 1:55 AM
		</div>
		<div class="comment_text"><p>Forgot to mention, first time I click the link (which is a navigate) the page is fine, but I don't get the error until the 2nd time it gets clicked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708825">45</a> by Raymond Camden
		posted on 11/19/2010 at 1:56 AM
		</div>
		<div class="comment_text"><p>This entry is over two years old. Adobe added nicer ways to handle window cleanup post CF8. I don't have the reference right in front of me - but check the most recent docs for 901.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708826">46</a> by jp
		posted on 2/22/2011 at 11:21 PM
		</div>
		<div class="comment_text"><p>hey ray - thanks for all the info over the years...<br>I know this is an old post - I've looked thru 901 docs and can't find answer... the code you provided isn't working for me... and I was curious if you had a thought...</p><p>cfdebug says the it cant find the window ...<br>--- debug info ---<br>window:global: uncaught exception: ColdFusion.Window.onHide: Window not found, id: WIN_Report (, line 0)</p><p>error:http: ColdFusion.Window.onHide: Window not found, id: WIN_Report</p><p>info:widget: Window shown, id: WIN_Report<br>--- end debug info ---</p><p>here's my code...<br>// DEFAULT REPORT CONFIG<br>	var DEFAULTREPORTconfig =  {<br>		height:350,width:1120,center:true,refreshOnShow:true,modal:false,closable:true,draggable:true,initshow:false,resizable:false <br>	}</p><p>	function destroyWIN(x) {<br>		ColdFusion.Window.destroy(x,true)<br>	}</p><p>	// CREATE AND SHOW DEFAULT REPORT WINDOW<br>	function popupReport(RPT) {<br>		var thisRPT = RPT;<br>		var thisWindowName = 'WIN_Report';<br>		//does the window already exist?<br>		try {<br>			ColdFusion.Window.destroy(thisWindowName,true);<br>		} catch(e) { }<br>		//create &amp; show<br>		ColdFusion.Window.create(thisWindowName, 'My Report', 'reports/'+thisRPT+'.cfm', DEFAULTREPORTconfig);<br>		<a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>(thisWindowName);<br>		// what to do when we hide it<br>		ColdFusion.Window.onHide(thisWindowName,destroyWIN(thisWindowName));</p><p>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708827">47</a> by jp
		posted on 2/22/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>Think I found the answer - the onHide event handler - cannot be INSIDE the function that calls the create win... I assume the window doesnt exist until the function has completed...</p><p>- <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F3486621%233486621%3AirHTgBCMq3QEu4cxxcvEJY1K7H4&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/3486621#3486621">http://forums.adobe.com/mes...</a> -</p><p>thx for some of the impetus of me 'finding' the answer...</p><p>I'm still getting an error (see in my Adobe post) but it's not affecting the execution of the page...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708828">48</a> by John Jarrard
		posted on 7/6/2011 at 5:00 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Do you mind giving me an example of window.destroy() function that works in CF9? I've been working on this problem for a while, and I can't seem to get it...</p><p>Thanks,<br>JJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708829">49</a> by Raymond Camden
		posted on 7/6/2011 at 3:26 PM
		</div>
		<div class="comment_text"><p>Does the example above not work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708832">50</a> by Misty
		posted on 9/5/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>Hi Ray! I do not know what happened to my code it was working before but broke now!</p><p>i am on cf9 and also using cf8, so this code is working on neither! can you guide!</p><p>function showGroup(recordAction) {      <br>      	var day = new Date();<br>      	var ListWindowID = 'myformName' + day.getTime();   <br>      	var windowOptions = new Object();<br>		  windowOptions.width = 900;<br>		  windowOptions.height = 500;<br>		  <a href="http://disq.us/url?url=http%3A%2F%2FwindowOptions.center%3AM3zvgKYLTXbMMzMkH7n0kyTfNAU&amp;cuid=3321886" rel="nofollow noopener" title="windowOptions.center">windowOptions.center</a> = true;<br>		  windowOptions.modal = true;<br>		  windowOptions.refreshOnShow = true;<br>		  windowOptions.resizeable = true;<br>		  windowOptions.initshow = true;<br>		  windowOptions.draggable = true;<br>		  windowOptions.closeable = false;<br>if (recordAction == 'Add') {<br> ColdFusion.Window.create(ListWindowID,'My Title','edit.cfm?formName=' + ListWindowID + '&amp;run=' + recordAction, windowOptions);<br>}<br> function closeEditWindow() {<br>      ColdFusion.Window.hide(ListGroupWindowID);<br>      ColdFusion.Grid.refresh('grid01', true);<br>   }<br>}</p><p>this function closeEditWindow() is called from within cfwindow, a button is inside the cfwindow, i click it and it should close the cfwindow and refresh the grid, hide means destroy, [wanna say] that it should not persist previous value in any case!</p><p>can u guide</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708831">51</a> by Raymond Camden
		posted on 9/6/2011 at 5:46 AM
		</div>
		<div class="comment_text"><p>So what is exactly wrong though? Your last sentence in the comment doesn't exactly make sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708833">52</a> by Misty
		posted on 9/6/2011 at 9:54 AM
		</div>
		<div class="comment_text"><p>The Last Comment Means</p><p>1. When i click the Close button from cfwindow, it should actually close the cfwindow and refresh the div, which it is not doing!<br>2. I get the Following error when i click on the close button inside cfwindow:</p><p>ListWindowID is not defined<br>[Break On This Error] ColdFusion.Window.hide(ListWindowID);</p><p>A Type Mistake in the above Comment before yours read it like this</p><p>function closeEditWindow() {<br>ColdFusion.Window.hide(ListWindowID);<br>ColdFusion.Grid.refresh('grid01', true);<br>}<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708835">53</a> by Raymond Camden
		posted on 9/6/2011 at 2:51 PM
		</div>
		<div class="comment_text"><p>You defined listWindowID in the other function so it is local only to that function. Try setting it as a page level variable. Outside your method just set it to an empty string, and in showGroup(), set it there (without the var in front).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708836">54</a> by Misty
		posted on 9/7/2011 at 12:43 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>It worked</p><p>yepee</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708837">55</a> by Vincent Moulin
		posted on 7/5/2013 at 2:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm trying to do a similar thing : I have a page displaying product's thumbs. On this one, I want, when a user click the picture or the more details button, that a cfwindows open. This last will show a bigger picture and more details.</p><p>I have used the code you show us in this post but I have a strange trouble : <br>- when I first click on a picture, the popup show up correctly;<br>- then when I close it and click on a second one, the popup show less than 1 second (and seems well refreshed) but then a redirection occurs (to the same url as the main previous page but with only a part of my footer displayed.</p><p>Very strange. It happens on Firefox, Chrome, Opera and Safari. I have not tested on IE.</p><p>Here is the code I use : <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fv29aKDpA%3AqiaL3UnvgIWyoSsgVRJc5q_GYjM&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/v29aKDpA">http://pastebin.com/v29aKDpA</a></p><p>You can view this bug live on <a href="http://disq.us/url?url=http%3A%2F%2Fver3.joe-cool.co.uk%2Ffashion%2Fjewellery%2FProducts.cfm%3FbestSellers%26newProducts%26specialOffers%26inStockOnly%3A6SUBd7u_22ryhoOFSEWZvnk5dXA&amp;cuid=3321886" rel="nofollow noopener" title="http://ver3.joe-cool.co.uk/fashion/jewellery/Products.cfm?bestSellers&amp;newProducts&amp;specialOffers&amp;inStockOnly">http://ver3.joe-cool.co.uk/...</a> for instance</p><p>Do u have an idea what I'm doing wrong ?<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708838">56</a> by Raymond Camden
		posted on 7/5/2013 at 5:23 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is using the JS console to see if anything shows up there.</p><p>Unfortunately, I no longer "support" these UI features in CF. They simply cause too many problems. I *strongly* urge my readers to skip them and use one of the many other options out there. For example, jQuery UI Dialog widgets.</p><p>That doesn't help you, I realize, but it is my honest recommendation.</p></div>
	</div>
</div>
		