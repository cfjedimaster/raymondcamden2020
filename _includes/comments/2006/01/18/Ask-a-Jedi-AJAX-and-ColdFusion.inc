
<div class="comment" id="c_1713649280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649280">1</a> by Adam
		posted on 1/18/2006 at 5:53 PM
		</div>
		<div class="comment_text"><p>We use prototype.js (which has an ajax portion to it). It doesn't have any server side code like the AjaxCFC or CFajax projects do. You roll your own responses, with fusebox you're view is jsut an XML basically. It just offers you a small "client" for you're webpages to use to communicate with the server. Prototype.js offers a robust set of other functions and objects to use as well. I can't say I have used AjaxCFC at all so I can not comment on that one specifically but other projects seem to blur the line between client side and server side too much for my liking and I have seen projects that have started to leak bussiness logic/rules into the client side and thats a bad thing. The problem is with AJAX, ecspecially with some of these frameworks, its really easy to start to put business logic into the client.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649281">2</a> by The Rabid CF Developer
		posted on 1/18/2006 at 6:05 PM
		</div>
		<div class="comment_text"><p>Hey King Camden...</p><p>You have not lived until you have felt the power and joy of coding AJAX apps using Rabid_AJAX(tm).</p><p>Rabid_AJAX(tm) is the swiss-army-knife of AJAX Frameworks.</p><p>Rabid_AJAX(tm) provides the means to perform xmlHttpRequest() using all the flavors of this for cross-browser support as well as the hidden iFRAME techniques again for cross-browser support AND hidden iLayer just in case your browser is Opera or it cannot do an iFrame.</p><p>Rabid_AJAX(tm) provides a consistent server-side interface regardless of the communication technique being used. Which means you can fully debug your xmlHttpRequest() interactions using iFrame(s) which means you can use all the nifty CF debug bells and whistles when debugging your xmlHttpRequest() interactions - this is generally a pain without Rabid_AJAX(tm).</p><p>Rabid_AJAX(tm) allows you to pass JavaScript code back from the server to the client for the absolute fastest interactions possible.  CallBack(s) are expressed as JavaScript code for maximum flexibility and performance.  CF Query Objects are mirrored by JavaScript Query Objects AND you can even code very slick Query of Queries (or something close to this) using JavaScript on the client.</p><p>Rabid_AJAX(tm) allows you to hide your valuable JavaScript code from curious eyes because your valuable JavaScript code NEVER hits the client browser's cache ever !</p><p>Rabid_AJAX(tm) is the AJAX Framework YOU need to use.</p><p>Rabid_AJAX(tm) is still under development and will NOT be Open Source but it will radically change the way everybody does AJAX and it is the next BIG thing to hit the Internet.</p><p>Rabid_AJAX(tm) 0.9 already exists and works and is being fully tested and will be improved and made into a 1.0 release very soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649282">3</a> by Mark Drew
		posted on 1/18/2006 at 6:25 PM
		</div>
		<div class="comment_text"><p>I thought I would post about another very easy to use framework: <a href="http://disq.us/url?url=http%3A%2F%2Fajform.sourceforge.net%2F%3AEPHZqlFhIWEmkFqH4Db0y7kMBpo&amp;cuid=3321886" rel="nofollow noopener" title="http://ajform.sourceforge.net/">http://ajform.sourceforge.net/</a>. I was giving it a whirl and its pretty easy to use. Check out my blog post on it if it helps (after you check out theirs!)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.markdrew.co.uk%2Fblog%2Findex.cfm%2F2005%2F11%2F25%2FSimple-Ajax-Forms%3Az8D4byQtNQXM9hQCvYUu47lcaDY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.markdrew.co.uk/blog/index.cfm/2005/11/25/Simple-Ajax-Forms">http://www.markdrew.co.uk/b...</a></p><p>I hope that helps!</p><p>Mark D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649288">4</a> by Alistair Davidson
		posted on 1/18/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>I did a presentation to the London (UK) CFUG a couple of months ago about this. The presentation Powerpoint file and example Google Suggest code are available here : &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Finstantbadger.blogspot.com%2F2005%2F10%2Fcfug-presentation-files-enhancing-user.html%3AH0ExJvs8wIQb3wLciCbRx9ELA2g&amp;cuid=3321886" rel="nofollow noopener" title="http://instantbadger.blogspot.com/2005/10/cfug-presentation-files-enhancing-user.html">http://instantbadger.blogsp...</a>"&gt;Enhancing User Interfaces With AJAX and Coldfusion presentation files&lt;/a&gt;</p><p>In general, I tend to use the prototype.js library, the very handy &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fcvs.sourceforge.net%2Fviewcvs.py%2Flakeshore%2Flakeshore%2Fresources%2FliveUpdater.js%3Fview%3Dmarkup%3AxQb7EeyODhl2FWnfukSuD6Q_8Hg&amp;cuid=3321886" rel="nofollow noopener" title="http://cvs.sourceforge.net/viewcvs.py/lakeshore/lakeshore/resources/liveUpdater.js?view=markup">http://cvs.sourceforge.net/...</a>"&gt;LiveUpdater.js&lt;/a&gt; library, or I roll my own. liveUpdater.js does the Google Suggest thing with one function and one empty div, plus whatever callback function you choose to write to handle a click on the suggested elements. The only drawback I've found is that it can be quite difficult to position the popup consistently across IE / Firefox, but apart from that I can thoroughly recommend it.</p><p>Al</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649287">5</a> by todd
		posted on 1/18/2006 at 7:10 PM
		</div>
		<div class="comment_text"><p>Absolutely Hilarious!  Just one day removed from the infamous "blogCFC incident" this guy is now using Camden's comments as a forum for plugging his own work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649285">6</a> by Raymond Camden
		posted on 1/18/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>I did ask for folks to share other projects. Therefore his comment is appropriate. King Camden is just silly though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649284">7</a> by johnb
		posted on 1/18/2006 at 7:22 PM
		</div>
		<div class="comment_text"><p>&gt;King Camden is just silly though.</p><p>Yeah...don't they know it's 'Jedi' ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649289">8</a> by Rob Gonda
		posted on 1/18/2006 at 7:24 PM
		</div>
		<div class="comment_text"><p>Adam, you have a valid point and that is a decision businesses will have to make when migrating to Web 2.0 / Single-page-applications / RIA. However, you can architect your application to dynamically generate the JavaScript code; in all my higher level applications I leave only the connectivity scripts in the client side and load the rest of my JavaScript in a later moment. The JavaScript will then reside in the client’s RAM instead of Cache; it can be loaded on-demand, or when needed. I am working on a base framework for Ajax applications using Model-Glue and Zapata for visual elements. The framework works in an MVC fashion and has no hard-coded business logic in the client whatsoever. A couple of simple examples can be found in my site, but more complex are on the works and will be soon posted. <br>So you see, there are good ways and better ways of designing your application, and you do not necessarily have to fall into common Ajax problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649286">9</a> by Ryan Stocker
		posted on 1/18/2006 at 7:29 PM
		</div>
		<div class="comment_text"><p>I'm actually shocked that "Rabid CF" hasn't started a new blog, called "CF Sith Lord."   ...  oops, I mean "Rabid_CF_Sith_Lord(tm)"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649292">10</a> by Damien
		posted on 1/18/2006 at 7:31 PM
		</div>
		<div class="comment_text"><p>I put together a system that used SAJAX in a Fusebox 3 site.  I added some code to certain files so that if a specific file was found (act_sajax.cfm) in a given directory it was always inserted.  I need to clean it up then publish it for others to laugh over, then see about doing something similar for FB4.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649293">11</a> by Brad Haas
		posted on 1/18/2006 at 8:20 PM
		</div>
		<div class="comment_text"><p>I've been using JSMX.  You can download it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.jsmx.org%3AI4fffoV9omZveY9lRbgkuh7m-lg&amp;cuid=3321886" rel="nofollow noopener" title="www.jsmx.org">www.jsmx.org</a>.  It's pretty simple to use and it's only one small javascrpt file.  The only drawback to it is that whatever data that is passed back to the javascript must be run through cfwddx cfml2js, but I got around this by creating a proxy cfc. If any one is inerested in the proxy I created for it--I'd be more than happy to share.</p><p>Brad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649290">12</a> by Dan G. Switzer, II
		posted on 1/18/2006 at 8:36 PM
		</div>
		<div class="comment_text"><p>There's also a really good open source AJAX library called Taconite: <a href="http://disq.us/url?url=http%3A%2F%2Ftaconite.sourceforge.net%2Findex.html%3ADujpQnSejQqGNUVwHuMetbwzBtI&amp;cuid=3321886" rel="nofollow noopener" title="http://taconite.sourceforge.net/index.html">http://taconite.sourceforge...</a></p><p>While this is not a CF-specific AJAX library, it fits in well with CF. The basic idea behind this library is that you point to a URL that returns an XML packet, which basically is just an XHTML (in laymans terms HTML that is XML compliant) with a taconite specific wrapper tag. (This tag tells the DOM what do with the information--replace some content, add some content, etc.)</p><p>It does include some JSP tags if you'd prefer to go that route, but the client side code works well.</p><p>Check out this example for sample code:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftaconite.sourceforge.net%2Fexample1.html%3AFjMjeKGvpNF9aBqIYGPJKk4csrg&amp;cuid=3321886" rel="nofollow noopener" title="http://taconite.sourceforge.net/example1.html">http://taconite.sourceforge...</a></p><p>(BTW - I have nothing to do w/this project, it's just one of the simplier, more straightforward approaches I've seen.  It's by far the simpliest AJAX library I've seen for developers who aren't well versed in JavaScript.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649291">13</a> by Daren
		posted on 1/18/2006 at 8:56 PM
		</div>
		<div class="comment_text"><p>Just as an addition, I've been testing prototype.js using both xml (with Simeon Simeonov's wddxser and wddxdeser on the client) and JSON (using CFJSON on the server and the standard json library on the client) - and have found the JSON solution to be faster, and a bit more intuitive also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649294">14</a> by John Farrar
		posted on 1/19/2006 at 12:54 AM
		</div>
		<div class="comment_text"><p>Here's a second on the JSon. There is a implementation of JSon on some site called <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%3AYBwFT6Aj45UVUcbFMX4HHcsMZVE&amp;cuid=3321886" rel="nofollow noopener" title="www.cflib.org">www.cflib.org</a> that was put up about a week ago! :) It's ajax for people who are tired of busting their brains... and it has had some fine contributors!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649297">15</a> by Adam Ness
		posted on 1/20/2006 at 2:21 AM
		</div>
		<div class="comment_text"><p>I'm using a derivative of the CFJSON stuff, merged in with a homebrew CFC framework that is similar to ajaxCFC, and it's working out pretty well.  Instead of returning the values via WDDX, my homebrew framework processes requests with jsonEncode before they get sent out to the browser.  This gives me the object-orientation of CFCs, and the speed of JSON.  It seems to be working pretty well, though debugging is a little tough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649295">16</a> by Andrew McClymont
		posted on 1/24/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>Hi there!<br>I've been fooling around with ajax: I'm using JSMX.  <br>It works great!</p><p>But I'm having a hard time trying to get the browser history back to life.</p><p>The problem is that, when the page contents is updated via JS/ajax, that action is Not recorded into the browser's history.  So pressing the browser's back button gets you back to the page just before entering the current site.</p><p>I beleive that fixing this will also fix the issue that you can not bookmark a page once you have dynamically populated the current page via js/ajax.</p><p>I realize that resolving this involves the use of a hidden iframe, since modifying the iframe src Does get registered in the browser's history.</p><p>Is there anything already made?</p><p>Thanks in advance!<br>-andy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649296">17</a> by Chad wagner
		posted on 1/28/2006 at 1:11 PM
		</div>
		<div class="comment_text"><p>ajaxCFC is great! I like it because all of your logic can be hidden from prying eyes since coldfusion will not output cfc's to the browser, it has security features that allow you to check to make sure the requests are coming from a page on your server...</p><p>I really like that it is built so that all you do is write your own cfc's and just say:</p><p>&lt;cfcomponent name="shoppingcart" extends"ajax"&gt;</p><p>...<br>&lt;/cfcomponent&gt;</p><p>Then, you just call any funtion you want from the component and it's yours. Much more object oriented than cfajax.</p><p>Plus, I was stoked to see the dDumper.js file. All you do is include it in a script tag, and then when you get the results from your ajax call, you can dDumper(result) and it creates a dump of the results from your call just like the coldfusion debugger... looks beatiful!</p><p>Play with it, you will be throughougly impressed. All it needs now is for one of us to sit down and incorporate an effects package like <a href="http://disq.us/url?url=http%3A%2F%2Fscripts.aculo.us%3AKDy_QjEI-hAyeYqgIlZ-tDSuaWk&amp;cuid=3321886" rel="nofollow noopener" title="scripts.aculo.us">scripts.aculo.us</a> offers into some components for quick re-use, like accordians, etc.</p><p>Thanks Rob!</p></div>
	</div>
</div>
		