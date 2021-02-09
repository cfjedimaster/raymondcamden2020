
<div class="comment" id="c_1713732500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732500">1</a> by todd sharp
		posted on 5/23/2011 at 9:42 PM
		</div>
		<div class="comment_text"><p>Might want to do it on blur() instead since changing the dropdown (for example) with a keypress doesn't fire the change event (even when you tab off).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732503">2</a> by Raymond Camden
		posted on 5/23/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>It worked when I clicked the drop down and used the down arrow. When I hit up to go back to male, it didn't get it till I clicked outside, which seems like it would be fair.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732504">3</a> by todd sharp
		posted on 5/23/2011 at 9:53 PM
		</div>
		<div class="comment_text"><p>yeah, that's odd.  i can swear i tested it before i commented.  shrug... as you were. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732501">4</a> by Rich Hefter
		posted on 5/23/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>This code doesn't work for me.  Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732502">5</a> by Raymond Camden
		posted on 5/23/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>How doesn't it work? It's super simple jQuery. What browser are you using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732505">6</a> by Brian Swartzfager
		posted on 5/23/2011 at 11:36 PM
		</div>
		<div class="comment_text"><p>A while back, I had a need to highlight any changes a user made on a form.  Ended up writing a jQuery plugin to handle it called dirtyFields.  I recently put up the code (and a link to a website with documentation and working examples) on GitHub:  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fbcswartz%2FdirtyFields-jQuery-Plugin%3ApcyrqEAc0zghoBKSc1kfYjhO0iA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/bcswartz/dirtyFields-jQuery-Plugin">https://github.com/bcswartz...</a></p><p>Might be overkill for your reader's situation, but thought I'd mention it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732507">7</a> by daddy-o
		posted on 5/23/2011 at 11:53 PM
		</div>
		<div class="comment_text"><p>Grumbing about console.log...  Because this causes errors on browsers that aren't using the console, do this:</p><p>if(console.log){console.log("changed...");};</p><p>Then it works if it can, and is ignored if it can't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732508">8</a> by Raymond Camden
		posted on 5/23/2011 at 11:55 PM
		</div>
		<div class="comment_text"><p>daddy-o: I know, I know. It's an old "issue" on this blog. I post a demo. People say it doesn't work. It's the console.</p><p>Frankly, any developer not using a console-enabled browser is bringing a knife to a gun fight. It's just plain wrong.</p><p>That being said, I _have_ been trying to remove them for demos lately. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732511">9</a> by Rich Hefter
		posted on 5/24/2011 at 12:02 AM
		</div>
		<div class="comment_text"><p>Got it to work.  I was missing the test2.cfm file.  Works fine now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732513">10</a> by Edward - Florida SEO
		posted on 5/24/2011 at 2:26 AM
		</div>
		<div class="comment_text"><p>As Todd mentioned, I can't seem to get the change to work for the text field ... maybe need to set a default text value to empty to test for equality ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732512">11</a> by Raymond Camden
		posted on 5/24/2011 at 2:30 AM
		</div>
		<div class="comment_text"><p>Ah so do you want it to change _as_ you type? To me, I read the original request (which I don't have on the blog entry) as being ok with 'on tab out'. Obviously we can change (easily) how often things change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732515">12</a> by Jaana Gilbert
		posted on 5/24/2011 at 3:44 AM
		</div>
		<div class="comment_text"><p>I'm the mysterious *she* :) . <br>Raymond was kind enough to help me out really quickly on Saturday and I was able to move along with my project. <br>This is part of admin controls where event coordinator matches members up for different club activities.</p><p>For text field, it would be triggered once tabbing out or moving on to a different field, not as-you-type.</p><p>Earlier today I had another question for Raymond about I needed the newly created div content be able to trigger a 3rd div. His quick response was to Google for jQuery and delegate and that got me moving along again and I got my second problem fixed :)</p><p>Raymond is super fast and I really appreciate his help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732516">13</a> by Edward - Florida SEO
		posted on 5/24/2011 at 4:21 AM
		</div>
		<div class="comment_text"><p>Okay ... well that explains that ... my misunderstanding ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732514">14</a> by SuperAlly
		posted on 5/24/2011 at 7:01 AM
		</div>
		<div class="comment_text"><p>Nice demo, Ray.  thanks very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732517">15</a> by Misty
		posted on 5/24/2011 at 6:06 PM
		</div>
		<div class="comment_text"><p>Just a Note, I went far and checked on IE, there is an Event OnPropertyChange() which works only in IE so this will work if needs IE Specific</p><p>$(document).ready(function() {</p><p>	$("#mainForm").bind('propertychange',function() {<br>		console.log("changed...");<br>		var data = $(this).serialize();<br>		console.log(data);<br>		$("#results").load("test2.cfm?"+data);		<br>	})<br>})<br>or if we wanna use it dor Mozilaa we can use the event:</p><p>DOMAttrModified in stead of PropertyChange</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732521">16</a> by todd sharp
		posted on 5/24/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>onPropertyChange only handles when actual properties of the html element are changed, no?  I don't think that's necessary for this example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732523">17</a> by Raymond Camden
		posted on 5/24/2011 at 6:50 PM
		</div>
		<div class="comment_text"><p>I just tested in IE9 and it worked fine as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732522">18</a> by Misty
		posted on 5/24/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>Yup! Its not necessary but provided as a example that by using tbind attribute we can use multile events like</p><p>.bind('keyup change keydown keypress',function(){......</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732529">19</a> by Simon
		posted on 6/11/2011 at 6:52 PM
		</div>
		<div class="comment_text"><p>was struggling to use this with PHP, after an hour so or so. <br>Here are is a working version for anyone else needing the same</p><p>////////HTML &amp; Jquery //////////////<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>$(document).ready(function() {</p><p>	$("#mainForm").change(function() {<br>		console.log("changed...");<br>		var data = $(this).serialize();<br>		console.log(data);<br>		$("#results").load("test_results.php?data="+data);<br>	})<br>})<br>&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;form id="mainForm"&gt;<br>	name: &lt;input type="text" name="name" /&gt;&lt;br/&gt;<br>	age: &lt;input type="text" name="age" /&gt;&lt;br/&gt;<br>	gender: <br>	&lt;select name="gender"&gt;<br>		&lt;option value="m"&gt;Male&lt;/option&gt;<br>		&lt;option value="f"&gt;Female&lt;/option&gt;<br>	&lt;/select&gt;&lt;br/&gt;<br>	foo: &lt;input type="radio" name="foo" value="1"&gt;One&lt;br/&gt;<br>	&lt;input type="radio" name="foo" value="2"&gt;Two&lt;br/&gt;<br>	&lt;input type="radio" name="foo" value="3"&gt;Three&lt;br/&gt;<br>	goo: &lt;input type="checkbox" name="goo" value="1"&gt;One&lt;br/&gt;<br>	&lt;input type="checkbox" name="goo" value="2"&gt;Two&lt;br/&gt;<br>	&lt;input type="checkbox" name="goo" value="3"&gt;Three&lt;br/&gt;<br>	&lt;p&gt;<br>	&lt;input type="submit"&gt;<br>&lt;/form&gt;</p><p>&lt;div id="results"&gt;<br>&lt;/div&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;<br>////////////PHP/////////<br>&lt;? <br>print_r($_GET);<br>?&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732528">20</a> by Raymond Camden
		posted on 6/11/2011 at 6:59 PM
		</div>
		<div class="comment_text"><p>In the future, please use pastebin.</p><p>Curious - what did you struggle with? The PHP just echos out the stuff so what was difficult about it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732526">21</a> by Earl Nall
		posted on 8/9/2011 at 5:17 PM
		</div>
		<div class="comment_text"><p>Long time CF developer and new to jQuery - so please bear with me.  I am missing something simple her and I can't seem to make a connection.  How do I take the results from test2.cfm and put into a database, or even redirect to test2.cfm so more processing can be done on the form results)?  I see the form results in the URL when the submit button is pressed and it looks like test2.cfm has a CFDUMP. I assume there is something simple I don't understand - but obviously I am missing something on how to get from results from jquery sent to a .cfm file for processing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732527">22</a> by Raymond Camden
		posted on 8/9/2011 at 6:47 PM
		</div>
		<div class="comment_text"><p>test2.cfm is simply there to show stuff. It should not be used to save to the db. Rather, you want the regular form submission to handle that. My form has no action tag, which means it will post to itself. Therefore, I'd add code that looks for the form submission (isDefined("<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>") is one way) and do the db insert there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732535">23</a> by Alex
		posted on 3/1/2012 at 2:15 PM
		</div>
		<div class="comment_text"><p>Hi, my name is alessandro from italy and i write, I'm studying Coldfusion recently and i read this site to try to learn something. I can not find a solution to run this example. I would be grateful if someone could help me. Thanks and sorry for my bad English.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732530">24</a> by Raymond Camden
		posted on 3/1/2012 at 4:54 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but what do you mean by "run this example"? You can run the demo by hitting the link above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732537">25</a> by Alex
		posted on 3/1/2012 at 7:18 PM
		</div>
		<div class="comment_text"><p>Hi, my English is probably more bad than I thought :-) I meant that the test does not work locally. I can not figure out which variable to pass the file to run the test2.cfm cfdump! They are the beginning of the study of coldfusion, but running the cfdump of form.mainForm not get any results. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732536">26</a> by Raymond Camden
		posted on 3/1/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>The data is sent via a URL parameters. All I did was</p><p>&lt;cfdump var="#url#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732532">27</a> by Alex
		posted on 3/2/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>many thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732534">28</a> by Anita
		posted on 6/13/2012 at 1:22 AM
		</div>
		<div class="comment_text"><p>For some reasons, jquery load() .cfm is not working for me.  Any idea? We are using IE 8.  Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732533">29</a> by Raymond Camden
		posted on 6/13/2012 at 1:27 AM
		</div>
		<div class="comment_text"><p>How is it not working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732531">30</a> by Anita
		posted on 6/13/2012 at 1:53 AM
		</div>
		<div class="comment_text"><p>It's not loading the .cfm file (nothing happen when value changed).  I have no problem to load .txt file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732538">31</a> by Raymond Camden
		posted on 6/13/2012 at 1:56 AM
		</div>
		<div class="comment_text"><p>So - are you saying everything but the load runs? So you see the console.log? If so - check the XHR portion of your Chrome Dev Tools and see what's happened with the network request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732540">32</a> by Anita
		posted on 6/13/2012 at 2:17 AM
		</div>
		<div class="comment_text"><p>I try to use Firefox and everything runs (including console.log) but with IE 8, I can only see the logs. It's not even showing the XHR portion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732541">33</a> by Raymond Camden
		posted on 6/13/2012 at 2:21 AM
		</div>
		<div class="comment_text"><p>I'm confused. So it works ok in Firefox, but not IE? Oh - because the console.log messages break it. Just remove them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732542">34</a> by Anita
		posted on 6/13/2012 at 2:37 AM
		</div>
		<div class="comment_text"><p>Sorry to confuse you but "console.log" is not the issue. The problem is test2.cfm does not even load to the page.  There is no error message either.  NOTE: I have no problem using your demo page.(both IE and Firefox)  Thank you so much for being so patient with me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732544">35</a> by Raymond Camden
		posted on 6/13/2012 at 2:40 AM
		</div>
		<div class="comment_text"><p>So to be clear: It works perfectly in Firefox. It does not in IE - and you removed the console.log messages. Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732545">36</a> by Anita
		posted on 6/13/2012 at 2:47 AM
		</div>
		<div class="comment_text"><p>It works perfectly in Firefox. It does not in IE.  And I have removed console messages.  Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732546">37</a> by Raymond Camden
		posted on 6/13/2012 at 2:51 AM
		</div>
		<div class="comment_text"><p>So IE is notorious for caching issues. Try changing</p><p>$("#results").load("test2.cfm?"+data);</p><p>to</p><p>$("#results").load("test2.cfm?x="+(new Date()) + data);</p><p>Basically - I added a random-ish value to the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732549">38</a> by Anita
		posted on 6/13/2012 at 3:07 AM
		</div>
		<div class="comment_text"><p>Still no luck.  This time it does not even work in Firefox. Firebug shows "Error: Syntax error, unrecognized expression: (Central Daylight Time)name=test&amp;age=&amp;gender=m...".  <br>I changed it to <br>$("#results").load("test2.cfm?x="+Math.random() + data);</p><p>Then it works in Firefox but still not in IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732550">39</a> by Anita
		posted on 6/13/2012 at 3:11 AM
		</div>
		<div class="comment_text"><p>The interesting thing is I do not have problem with your demo page in IE so it got to be something I didn't do or shouldn't have done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732548">40</a> by Raymond Camden
		posted on 6/13/2012 at 5:07 AM
		</div>
		<div class="comment_text"><p>Ah, I didn't actually test it - I just typed it in - so that was a mistake. Math.random() was a smart change.</p><p>So as to why it fails in IE just on your server, at this point I don't know. Since IE8 doesn't have a tool like Firebug or Chrome Dev Tools, you could consider Charles or Service Capture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732551">41</a> by Anita
		posted on 6/13/2012 at 11:03 PM
		</div>
		<div class="comment_text"><p>Found the problem.  I setup the "jquery.min.js" file on our server instead of going through the firewall and that fixed the issue.  Thank you for all your help.  You are THE BEST!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732552">42</a> by Raymond Camden
		posted on 6/14/2012 at 12:08 AM
		</div>
		<div class="comment_text"><p>Woot! Glad you got it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732554">43</a> by Frank
		posted on 1/27/2013 at 1:38 AM
		</div>
		<div class="comment_text"><p>Is there a way to enter the form with predefined values and have the results displayed in the div when the form is first loaded? I can have checkboxes already checked but I need to make changes in the form before I can see any results displayed.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732555">44</a> by Raymond Camden
		posted on 1/27/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>Just add this:</p><p>    $("#mainForm").trigger("change");</p><p>After you've defined the change handler that is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732556">45</a> by Frank
		posted on 1/28/2013 at 12:19 AM
		</div>
		<div class="comment_text"><p>Works like a charm. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732559">46</a> by Bryn
		posted on 6/4/2013 at 4:11 AM
		</div>
		<div class="comment_text"><p>Thanks for this post.  It hopefully will be a big asset for my Website.  I am just having one issue I did not see covered in the comments.  When I use the jQuery Autocomplete it does not always recognize the form has changed.  I tried change, blur, &amp; focus.  I also tried it in Chrome and had the same results.  When not using the jQuery Autocomplete it works every time.</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732557">47</a> by Raymond Camden
		posted on 6/4/2013 at 3:30 PM
		</div>
		<div class="comment_text"><p>If you take the code in my event handler and abstract it out to its own method, something like 'noticeChange', you can then call that from the jQueryUI Autocomplete change event: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jqueryui.com%2Fautocomplete%2F%23event-change%3A9sK4tzn3WOJVwP_iXsXMQukGiA8&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jqueryui.com/autocomplete/#event-change">http://api.jqueryui.com/aut...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732558">48</a> by Bryn
		posted on 6/5/2013 at 12:03 AM
		</div>
		<div class="comment_text"><p>I ended up running the function using the onblur attached to the text fields for the AutoComplete.  It is not as elegant as your solution, but it works and my clients won’t know the difference.  Thanks again for your blog entry, it helped me discover a great solution for my Website and it is live and working now.</p></div>
	</div>
</div>
		