
<div class="comment" id="c_1713718963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718963">1</a> by Matthew
		posted on 10/18/2009 at 9:18 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Many thanks for posting this example. I didn't expect to see an example posted so quickly.<br>This is really going to help me out and i appreciate your time taken to post these examples.<br>Also thank you for posting more than one variation, this also helps in understanding the best method to use.<br>From your example its seems so straight forward, i guess its true in what they say, knowledge is power :)<br>Many thanks again<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718964">2</a> by sam Farmer
		posted on 10/20/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>Very cool Ray.  I didn't know about the onsuccess attribute of cfajaxproxy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718965">3</a> by Mohamad
		posted on 12/18/2009 at 6:48 AM
		</div>
		<div class="comment_text"><p>Ray, here's an interesting twist. What if I would like to achieve the same thing but using a cfhttp to get my data instead or a query (data comes from a webservice)? The webservice contains data for st type, st name, city, and state... the xml coming back needs to be stripped, and I'm using cfhttp because the webservice is a .net data set that cfinvoke can not return properly... any ideas on how that maybe achieved?</p><p>Here's a sample code: 	<br>&lt;cfhttp method="get" url="webservice.asmx/method?string=#form.variable#"&gt;&lt;/cfhttp&gt;    <br>    &lt;cfset Result = xmlparse(cfhttp.FileContent)&gt;<br>    &lt;cfset xmlRoot = Result&gt;<br>   &lt;cfset nodes = xmlSearch(xmlRoot, "//tbCEP")&gt;<br>    &lt;cfif arrayLen(nodes)&gt;    <br>    &lt;cfoutput&gt;#nodes[1].logradouro#&lt;/cfoutput&gt;<br>            Results: &lt;br /&gt;<br>            &lt;cfoutput&gt;<br>                stType = #nodes[1].sttype# &lt;br/&gt;<br>                stName = #nodes[1].name# &lt;br/&gt;<br>&lt;/cfoutput&gt;</p><p>this would then need to go back to the form page and populate a form. I'm using the cfoutput just forn illustration...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719009">4</a> by Raymond Camden
		posted on 12/18/2009 at 7:42 AM
		</div>
		<div class="comment_text"><p>Any ideas? Sure. Use the same code. :) Seriously - it doesn't matter _where_ the data comes from. It matters how the data _looks_. Or the form of it. My client side code expected a query of data back. You can either convert the web service result into a query (using queryNew), or edit the client side code to work with the different form of data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719012">5</a> by Mohamad
		posted on 12/18/2009 at 8:05 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I did that. I used QueryNew and tested the code several times... it worked fine until the Ajax part... the fields are populating, but they are populating with "undefined"...</p><p>Here is a snippet of my form page: <a href="http://disq.us/url?url=http%3A%2F%2Fi3.photobucket.com%2Falbums%2Fy95%2Fabitdodgy%2FForm.png%3A2xcv9nS35Qc5PSUrx0qdiQt5Yow&amp;cuid=3321886" rel="nofollow noopener" title="http://i3.photobucket.com/albums/y95/abitdodgy/Form.png">http://i3.photobucket.com/a...</a></p><p>And here is a snippet of my component page:<br><a href="http://disq.us/url?url=http%3A%2F%2Fi3.photobucket.com%2Falbums%2Fy95%2Fabitdodgy%2FComponent.png%3AHUxKp1Oe0T7NfHjQgw8hnkDtK3U&amp;cuid=3321886" rel="nofollow noopener" title="http://i3.photobucket.com/albums/y95/abitdodgy/Component.png">http://i3.photobucket.com/a...</a></p><p>I'm really not sure why it's returning undefined... :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718992">6</a> by Mohamad
		posted on 12/18/2009 at 8:52 AM
		</div>
		<div class="comment_text"><p>It maybe worth mentioning that the code works only if a valid cep is insert... 04735005 works for example... if the cep is not valid the page errors out.. but replacing the ajax with this:</p><p>&lt;cfif IsDefined("Form.GetInfo")&gt;<br>	&lt;cfinvoke component="CheckCEP" method="ReturnAddress" returnvariable="q_AddressData"&gt;<br>    	&lt;cfinvokeargument name="strcep" value="#form.strcep#"&gt;<br>	&lt;/cfinvoke&gt;<br>    &lt;cfdump var="#q_AddressData#"&gt;<br>&lt;/cfif&gt;<br> And using a correct CEP actually returns a good result!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719006">7</a> by Raymond Camden
		posted on 12/18/2009 at 9:07 AM
		</div>
		<div class="comment_text"><p>What does Firebug show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718998">8</a> by Mohamad
		posted on 12/18/2009 at 9:33 AM
		</div>
		<div class="comment_text"><p>I'm a bit stumped to be honest, because my Firebug knowledge does not go farther than CSS... embarrassed to say this, I don't know what to look for, but I found this while tinkering in the Scripts tag:<br> ({COLUMNS: ["STTYPE", "STNAME", "AREA", "CITY", "STATE"], DATA: [["Rua", "Sao Benedito", "Santo Amaro", "Sao Paulo", "SP"]]});<br>2 /* !eval(new String("("+json+");)) */</p><p>The values you see under, well, they are correct. If I query 04735005, I do get the data shown above from the webservice... however, it's coming back to the fields as undefined for some reason! :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719013">9</a> by Raymond Camden
		posted on 12/18/2009 at 7:06 PM
		</div>
		<div class="comment_text"><p>Ok, so this means the data comes to the client ok. The bug then is in how you use the data to write it back out on the page. So let's debug. You are aware of how to use console.log(), right? I will assume so.</p><p>First, notice my main loop. Let's see if it is doing anything.Before</p><p>for(var i=0; i &lt; d.COLUMNS.length; i++) {</p><p>add</p><p>console.log("The length of cols is "+d.COLUMNS.length);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718999">10</a> by Mohamad
		posted on 12/18/2009 at 7:41 PM
		</div>
		<div class="comment_text"><p>Solved. It works perfectly. The when changing the fieldnames in the js, I did not capitalize them! Many thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718994">11</a> by Andrew
		posted on 9/27/2011 at 7:43 PM
		</div>
		<div class="comment_text"><p>I did the whole example step by step and im getting the next error</p><p>"Error invoking CFC test.cfc : Internal Server Error [enable debugging by adding 'cfdebug' to your URL parameters to see more information]"</p><p>actually im getting into CF coz i always was a php fan .. and i dont have a clue of what im doing wrong so if you can help me .. thnx a lot :D</p><p>c yas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719011">12</a> by Raymond Camden
		posted on 9/27/2011 at 7:49 PM
		</div>
		<div class="comment_text"><p>Former (or considering to be former) PHP folks are ALWAYS welcome here. ;)</p><p>Ok, so the best thing to do is use Firebug, or Chrome Dev tools, to inspect what was returned. Are you familiar with those tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718996">13</a> by Andrew
		posted on 9/27/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>yup Rai im familiar with those tools and this is what i got</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F823%2Funledgwi.jpg%2F%3AfbNjYcbD4G6CQlBilSvPTcdUIDc&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/823/unledgwi.jpg/">http://imageshack.us/photo/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719003">14</a> by Raymond Camden
		posted on 9/27/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>Use the network tool to view the CFC request and examine the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719000">15</a> by Andrew
		posted on 9/27/2011 at 8:56 PM
		</div>
		<div class="comment_text"><p>hi again d:</p><p>this is what im getting</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F685%2F13721870.jpg%2F%3AAoegIxQiPEu6NLvWSE9cK-sBZPs&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/685/13721870.jpg/">http://imageshack.us/photo/...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F831%2F96437977.jpg%2F%3AQ8M4FcniGfas-6qd25nUSle0dU0&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/831/96437977.jpg/">http://imageshack.us/photo/...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F195%2F72236196.jpg%2F%3ASLuwZe8yBdl1hWb2cvvv5-LZY4A&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/195/72236196.jpg/">http://imageshack.us/photo/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719005">16</a> by Raymond Camden
		posted on 9/27/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>I don't think that's right. Those look like the main CFM requests. In the network tab, click on XHR, and you should see the CFC request there.</p><p>Btw, if this is online, I can do it for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719001">17</a> by Andrew
		posted on 9/27/2011 at 10:00 PM
		</div>
		<div class="comment_text"><p>ya're right i was wrong<br>here there're the screens (the correct ones)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F98%2F26786048.png%2F%3AkJ8QzoyxXl-y18gIIj02rRMcS0Q&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/98/26786048.png/">http://imageshack.us/photo/...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F269%2F89995251.png%2F%3A9-VhejEmrpmS6P9lerfeEJKzmhM&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/269/89995251.png/">http://imageshack.us/photo/...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fimageshack.us%2Fphoto%2Fmy-images%2F705%2F40229919.png%2F%3AFfasr0sIstyuabBqX0F_6Ofl96M&amp;cuid=3321886" rel="nofollow noopener" title="http://imageshack.us/photo/my-images/705/40229919.png/">http://imageshack.us/photo/...</a></p><p>and no .. it's not online coz my boss says that Ajax leave a hole in the server security and im not allow to put ajax content online :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719014">18</a> by Raymond Camden
		posted on 9/27/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>If you read the result there it's telling you to enable robust exception info. This is done in the CF Admin. Once you do, there is no need to post screen shots. You are in the right area. Just look at the detailed error. It's going to be raw html, but you should be able to read it.</p><p>Or - I think you can also right click in Chrome/Firebug and open the request in a new tab.</p><p>Either way - enable robust exception info and it will tell you the line # of your error and what it is.</p><p>Also, your boss is wrong. Completely. A AJAX request is no more or less secure than a non-AJAX request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719002">19</a> by Andrew
		posted on 9/27/2011 at 10:20 PM
		</div>
		<div class="comment_text"><p>Ok thanks for your help,</p><p>now :P</p><p>what is "arguments" in the code?<br>i see that you pass it in the getData function query and then you use it in the other function, but i dont see where it come from.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718997">20</a> by Raymond Camden
		posted on 9/27/2011 at 10:21 PM
		</div>
		<div class="comment_text"><p>Inside a CFC method, the Arguments scope represents everything passed in. You don't have to use arguments.x to refer to the X argument, but it helps differentiate it in code against locally created variables, or global variables in the Variables scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719007">21</a> by Andrew
		posted on 9/27/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>waahoo!!</p><p>i just wanted to ask coz i removed the "arguments" from the test.cfc and now it works well, as long as my "artid" field is not null, when it's empty i get the same error that i told ya .. so is there any way to make it i dont know ... with a button or something ? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719010">22</a> by Raymond Camden
		posted on 9/27/2011 at 11:11 PM
		</div>
		<div class="comment_text"><p>Well, if <a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a> didn't work, it implies your front end code isn't passing it along when it should be. You want to keep that in there for sure.</p><p>I'd restore the CFC code to match mine. Run it again and tell us what the error is exactly. If it complains that arguments artid doesn't exist, then you need to use Firebug/CHrome again to look at the XHR but this time focus on the Request, not the Response. If you don't see artid in there something is amiss. Ensure you didn't typo when copying the client portion of the code.</p><p>Again - if I could see this in action, it would be a lot quicker to debug. Maybe ask your boss if you can put it up someplace temporary and then email me directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719015">23</a> by Matthew Wang
		posted on 10/6/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>aahhh cool, thanks, you help me a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719008">24</a> by Paul
		posted on 3/6/2014 at 7:10 AM
		</div>
		<div class="comment_text"><p>I know this is old, but I have to say this is a phenomenal post.  Clear, concise, and very efficient coding.  This is EXACTLY what I needed, so many thanks to you Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718993">25</a> by Raymond Camden
		posted on 3/6/2014 at 6:02 PM
		</div>
		<div class="comment_text"><p>Glad it helped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719004">26</a> by Arthur A
		posted on 9/17/2014 at 4:32 PM
		</div>
		<div class="comment_text"><p>Hello Raymond i have been following your coldfusion posts over the years. You've been an inspiration.i have been developing RIAs with flex and coldfusion for sometime now and recently i wanted to move to html5 with coldfusion. i have a small project am working on where i populate a dataTable with data from an access database using a cfc. i would like that when i click on a row in the dataTable, the details are shown in text boxes or inputs or cfdivs for that matter. how can i get that. below is my code</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718995">27</a> by Raymond Camden
		posted on 9/17/2014 at 5:54 PM
		</div>
		<div class="comment_text"><p>@Arthur: Please do not post blocks of code to the comments section. Instead use Pastebin or a Gist. I have edited your comment to remove the code. I have not used the dataTable plugin you describe so it may be best to ask the author of that plugin. In general the process should be simple:</p><p>Detect table row click<br>In the event handler, note the row of data<br>Apply that data to form fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719017">28</a> by Arthur A
		posted on 9/18/2014 at 10:57 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, tried to follow your example of the button and applied it to my table (id of table is expenseList). when i run the app and click on one of the rows of the table i get this error "Element not found: ID ". I could use your guidance on this. attached are the links to my test.cfm page and crud.cfc component.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fanonymous%2Fa0e8ac6ee86bc6fdde4a%3AHwgTQ4GB-lgsu2CJRdxT_ZhhnFI&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/anonymous/a0e8ac6ee86bc6fdde4a">https://gist.github.com/ano...</a></p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fanonymous%2Fefa9808a3305990623ea%3AC7ek16RqXYuNe9DP0_5U0LWEPzQ&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/anonymous/efa9808a3305990623ea">https://gist.github.com/ano...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719018">29</a> by Raymond Camden
		posted on 9/18/2014 at 2:21 PM
		</div>
		<div class="comment_text"><p>So, first off, I don't recommend using ColdFusion's Ajax stuff anymore. I know this blog post uses it, but just keep that in mind. You have code that is bound to the click event of the table. But that's not how I'd do it. I'd add a class event for clicking on the table row.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719019">30</a> by Arthur A
		posted on 9/18/2014 at 2:31 PM
		</div>
		<div class="comment_text"><p>I seriously don't know how to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719020">31</a> by Raymond Camden
		posted on 9/18/2014 at 2:36 PM
		</div>
		<div class="comment_text"><p>Well, you are using a plugin to generate the table. You would need to check its docs to see if it is possible. Or, actually, given that the table has an id of tableList, this should work</p><p>$("#tableList tr").on("click",</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719016">32</a> by Arthur A
		posted on 9/18/2014 at 3:06 PM
		</div>
		<div class="comment_text"><p>Sorry Raymond, should i call that in the &lt;cfajaxproxy&gt; bind ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719021">33</a> by Raymond Camden
		posted on 9/18/2014 at 3:11 PM
		</div>
		<div class="comment_text"><p>You can't, as far as I know. I no longer recommend using that tag. It doesn't help you now I guess, but it is honest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719045">34</a> by Arthur A
		posted on 9/18/2014 at 3:13 PM
		</div>
		<div class="comment_text"><p>ok, is there another alternative to the cfajaxproxy binding?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719046">35</a> by Raymond Camden
		posted on 9/18/2014 at 3:20 PM
		</div>
		<div class="comment_text"><p>Well yes - the CF Ajax stuff is simply abstracting away the "pure" JS code you could write. As a beginning, see the "ColdFusion UI the Right Way" project: <a href="http://disq.us/url?url=http%3A%2F%2Fstatic.raymondcamden.com%2Fcfuitherightway%2F%3AMvJCqEEyEAYyw7ztm_52xZzU_rc&amp;cuid=3321886" rel="nofollow noopener" title="http://static.raymondcamden.com/cfuitherightway/">http://static.raymondcamden...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719047">36</a> by Arthur A
		posted on 9/18/2014 at 5:50 PM
		</div>
		<div class="comment_text"><p>i have a feeling i can use this if i could find a way to binding to the tbody tr</p></div>
	</div>
</div>
		
<div class="comment" id="c_3204584476">
	<div>
		<img src="https://disqus.com/api/users/avatars/Sahuatoba.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3204584476">37</a> by Xiuhcoatl
		posted on 3/15/2017 at 12:39 AM
		</div>
		<div class="comment_text"><p>You save me! Thank you Jedi master!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3204650663">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3204650663">38</a> (In reply to <a href="#c_3204584476">#37</a>) by Raymond Camden
		posted on 3/15/2017 at 1:29 AM
		</div>
		<div class="comment_text"><p>You are welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3582974613">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3582974613">39</a> by Monique
		posted on 10/24/2017 at 9:01 PM
		</div>
		<div class="comment_text"><p>I am getting a return from the call but it's not populating the fields. Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3583222562">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3583222562">40</a> (In reply to <a href="#c_3582974613">#39</a>) by Raymond Camden
		posted on 10/25/2017 at 12:09 AM
		</div>
		<div class="comment_text"><p>Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3583914839">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3583914839">41</a> (In reply to <a href="#c_3583222562">#40</a>) by Monique
		posted on 10/25/2017 at 1:23 PM
		</div>
		<div class="comment_text"><p>No...but I realized that I didn't have everything in place. I added the other 3 functions: ex; &lt;cffunction name="getDescription"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3583917482">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3583917482">42</a> (In reply to <a href="#c_3583222562">#40</a>) by Monique
		posted on 10/25/2017 at 1:25 PM
		</div>
		<div class="comment_text"><p>I added the missing functions and now I am getting a syntax error:</p><p>cfinit/$X.processresponse<br>cfinit/$X.callback<br>cfinit/$A.sendMessage/req.onreadystatechange</p></div>
	</div>
</div>
		
<div class="comment" id="c_3584057486">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3584057486">43</a> (In reply to <a href="#c_3583914839">#41</a>) by Raymond Camden
		posted on 10/25/2017 at 2:58 PM
		</div>
		<div class="comment_text"><p>So are you good to go? I want to be very, very clear though - you should not use cfform or cfajaxproxy or any CF client-side code. If you don't know why, check out <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FColdFusion-UI-the-Right-Way%3AdWp8Vodv58fFcKoZr8J6uKyEpno&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/ColdFusion-UI-the-Right-Way">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3584074185">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3584074185">44</a> (In reply to <a href="#c_3583917482">#42</a>) by Raymond Camden
		posted on 10/25/2017 at 3:08 PM
		</div>
		<div class="comment_text"><p>You got me then. If you can share the URL I'll look, but I strongly urge you to move away from this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3584431474">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3584431474">45</a> (In reply to <a href="#c_3584057486">#43</a>) by Monique
		posted on 10/25/2017 at 6:41 PM
		</div>
		<div class="comment_text"><p>Yes I am good. Thank you.</p><p>And I am no longer using cfform. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4135440191">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bQGacw5cka.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4135440191">46</a> by JM
		posted on 10/8/2018 at 8:00 PM
		</div>
		<div class="comment_text"><p>The code fragments are very broken here in late 2018 =-\  Like they don't display right or anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4135448409">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4135448409">47</a> (In reply to <a href="#c_4135440191">#46</a>) by Raymond Camden
		posted on 10/8/2018 at 8:05 PM
		</div>
		<div class="comment_text"><p>Sorry - 8 year old post and my blog engine has changed multiple times. ;) I'll try to fix this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4136564822">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4136564822">48</a> (In reply to <a href="#c_4135440191">#46</a>) by Raymond Camden
		posted on 10/9/2018 at 2:00 PM
		</div>
		<div class="comment_text"><p>Updated. Hope it helps!</p></div>
	</div>
</div>
		