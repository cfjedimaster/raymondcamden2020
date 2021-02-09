
<div class="comment" id="c_1713737713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737713">1</a> by Phillip Senn
		posted on 12/27/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>I'm struggling with mobile development as well.  One titanic struggle I'm having is how to put it native on the iPad such that they can run the page offline.  I'm hoping that I can just use application caching and local database storage, and then sync it when they are back online again.  I hope that I don't have to include PhoneGap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737724">2</a> by Phillip Senn
		posted on 12/27/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Another struggle is how to sync the data once the user is back online.  Right now I just have a loop that does AJAX call after AJAX call, with a counter that counts down the number of rows that still need to be sync'd.  A better solution would be to package the data up in a wrapper and send it as one request.  Probably a JSON object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737726">3</a> by Brian Lang
		posted on 12/27/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>So writing a JQMobile is similar to writing a AJAXifed website then. This would be a site where you can write the pages in any language (ASP, PHP, CFM). You would use AJAX to retrieve data from the server, and pass it back to the page. Your business logic would only be on the server. Data validataion logic would be both on client side (Javascript) and server side.</p><p>The thing I'm still missing in this whole picture is this:<br>Do you still write Form processing pages in CFM for users who have Javascript disabled? Example: If I'm using AJAX to handle form submission, I typically return false in my click function AJAX callback to prevent the button click from processing normally.</p><p>Oh, and one minor nitpick: You wrote "...XHR requests..." That's like writing Personal PIN Number. The word Request is already incorporated into XHR... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737727">4</a> by Raymond Camden
		posted on 12/27/2011 at 10:35 PM
		</div>
		<div class="comment_text"><p>@PS: Any reason why NOT to use PhoneGap?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737725">5</a> by Raymond Camden
		posted on 12/27/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>@PS: Yes, syncing is an issue no matter what platform. The main issue is figuring out your rules - ie, if it exists on server and not on client, does that mean you just copy it down, or does it imply a client delete. Once you figure your rules, implementing it is pretty trivial though. I did a demo of this w/ AIR and SQLite for a preso a year or so ago. I did a super simple logic set - server is always right. And even that was a bit complex to code. (Again though, it was complex in figuring out what to do- not the actual code.)</p><p>@Brain: Yes to first paragraph. No to second para - I don't believe you can disable JS in the PhoneGap wrapped app. It's NOT the same as the mobile browser. Last paragraph: Bite me! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737731">6</a> by Phillip Senn
		posted on 12/27/2011 at 11:03 PM
		</div>
		<div class="comment_text"><p>&gt;  it was complex in figuring out what to do- not the actual code.</p><p>I think that writing $.ajax calls is very complex!<br>I think writing JavaScript is very complex!  It's been the hardest language for me to learn.</p><p>Let's just say you want to pass a large number of rows up to the server, and let the server worry about the business rules.  What's the syntax for doing that?</p><p>The reason not to use PhoneGap?  I just don't know anything about it.  In your video on jQuery Mobile development, you say that it takes 30 seconds to include the bits.  While that might be true physically, mentally getting to that points takes days, weeks or months.<br>I guess I need to learn PhoneGap before I say anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737730">7</a> by Mike
		posted on 12/27/2011 at 11:07 PM
		</div>
		<div class="comment_text"><p>I like the post Ray, its somthing that many people are still a little confused on.</p><p>@Brian,</p><p>Like Ray stated I don't think you can turn off JS in a PG app. As for form validate it depends on what type of app your doing. You need to make the distinction between "Mobile Website App" and "Mobile App"</p><p>The website app would be written in what ever language you prefer (CFM, PHP etc) because the code is running on the server so you could validate like you always would.</p><p>Now for the mobile application that is wrapped in PG as Ray stated, all you files are packaged up in the PG app, and PG does not know what to do with CFM pages or PHP etc so you have to rely on XHR (&lt;-- notice I did not add request :) ) to retreave and submit data, its also important to remember with PG we don't have cross domain proxy issues so you can send over normal JSON to you backend etc.</p><p>Now with a PG app what you would do is send over your form data to you CFC or what ever and have it take that information and validate it there, if it did not validate correctly then you can return back in a JSON object or what ever the fields that were incorrect and then have the function look for that and run another function to display the error message or something like that</p><p>Like Ray had said, the business logic is done with JS on the front end but database stuff and validation inserting etc is still done on your back end server.</p><p>Hope that makes sense :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737733">8</a> by Raymond Camden
		posted on 12/27/2011 at 11:18 PM
		</div>
		<div class="comment_text"><p>@PS: I apologize - I've been using JS for so long now it feels simple, and I can definitely see how it would NOT be so easy for others. Thanks for reminding me that it is still difficult for folks. (And to be honest, it's hard for me to. I can do the basics REAL well, but 'large' JS apps are still something I'm struggling with myself.)</p><p>As to your second paragraph, when you do a $.ajax, or $.get or $.post (they just wrap $.aajax), you can specify the data to send as an object. You can send large data with $.post. $.get passes data via the query string and there is a hard limit to how much data can be sent. So basically, just use $.post.</p><p>As to your third paragraph - fair point - I'm doing a presentation on PhoneGap next month - after that I'll see about doing a recorded version. Would that be something you would pay for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737737">9</a> by Mike
		posted on 12/27/2011 at 11:19 PM
		</div>
		<div class="comment_text"><p>@Phillip,</p><p>When you say a large number of rows are you talking about just sending data to the server?</p><p>You would do something like this</p><p>// First compile your list of rows to update</p><p>var myData = "method=updateData?name=Jim&amp;location="bostin";</p><p>$.ajax({<br>  type: "POST",<br>  url: "<a href="http://disq.us/url?url=http%3A%2F%2Fmydomain.com%2Fupdatedata.cfc%3Aar8btQ-Ql-VZmv0gYYtbCXShtGI&amp;cuid=3321886" rel="nofollow noopener" title="http://mydomain.com/updatedata.cfc">http://mydomain.com/updated...</a>",<br>  data: myData<br>}).done(function( msg )<br> {<br>  alert( "Data Saved: " + msg );<br>});</p><p>Now this is a simple example of sending the data in a JQM / phonegap app, for sending large amounts of data you may want to compile it into a list, send that over to you cfc and do the logic there to parse and insert etc.</p><p>As far as PG goes I think one of the best way to get started is using DW 5.5 it makes it really simple to get started, then reading the PG docs on how to access things on the phone (camera etc)</p><p>With DW 5.5 its really simple to compile for android because they build that process in for you (you can also use PGBuild to compile off of the PG site)While DW5.5 does not have the most current PG build it still helps out a lot in getting started with that, I think Ray had a post a few days back about this same kind of topic and in the responses there are a lot of good links to some vids etc to help get you started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737734">10</a> by Stefan Richter
		posted on 12/28/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Hi Ray (thanks for writing this post bacause of me :-)</p><p>My issue is actually more with jQuery Mobile than Phonegap. I checked out your recent presentation on JQM and started building a simple CRUD type JQM app with CF backend. <br>First hurdle: JQM by default loads all 'pages' (page divs to be precise) via AJAX. I'm used to have most of my CF code outside the html section of my document. Is my only option (when I need to for example restrict access to a page to logged-in users) to add logic to the HTML markup in big CF chunks?</p><p>Another quick with JQM (due to its loading of page sections) is that even JavaScript won't run unless it is contained within the page section of a loaded page. This makes things even worse from a maintainability point - you end up with bits of logic everywhere.</p><p>Maybe I'm just too new to this and don't see the big picture. Do you have a simple JQM CRUD type sample app somewhere on the shelf? Maybe with user login/session management?<br>I saw your CFBloggers example in JQM but that also has its CF code outside the HTML markup which I think won't work once you add more and more pages with additional logic on pages 'depper down'.</p><p>Correct me if I am totally on the wrong track.</p><p>Cheers</p><p>Stefan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737732">11</a> by Mike
		posted on 12/28/2011 at 12:50 AM
		</div>
		<div class="comment_text"><p>@Stefan,</p><p>Are you trying to build a mobile version of a site or a mobile app?</p><p>I'm assuming your building a mobile web app and not a site because you mention CF in the page correct?</p><p>Anyhow JQM does allow for you to push everything into multiple page Div's but its not recommended to do that. JQM docs say that each page should be its own file but that here nor there for this topic.</p><p>So your first question for restricted access There are a few ways you could tackel that I mean if your building a mobile web app with CFM page restricted access is the same for the most part even with the ajax calls the application scope should still reflect that the page you are calling is restricted (I think :)) Another option could be calling a checkLoggedIn function or whatever where in the beforepageload you call this thing to check the user and if the access is not there then return false.</p><p>With JQM normally you would have an external JS file that would hold all your function for your app. eliminating the need to place JS inline of each page, unless you want to load a function or something when that page is called etc but you should be able to put these items in an external file.</p><p>The important thing to remember is that with mobile (as stated in other posts) you are really using HTML, css and JS only. Doing CRUD type things will be handled by the back end server but the page rendering is done on the client side, all your CF code will be doing is inserting, formatting etc and returning a JSON object that you then parse out and push to the page. (That is if its a PG app, mobile websites could be cfm pages invoking a cfc etc)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737739">12</a> by Phillip Senn
		posted on 12/28/2011 at 1:35 AM
		</div>
		<div class="comment_text"><p>OK, I don't think I need PhoneGap because I don't need access to the native APIs like geolocation and the camera.<br>I'm also developing my app exclusively for the iPhone, so I'm not too concerned with Android at the moment.</p><p>My application is for a barcode scanner where I have to store the barcodes and then upload them to the server once the user gets back online.  (I said 'sync' last time, but that was a misuse of the word - I meant 'upload').</p><p>@Mike,</p><p>In your example you said <br>&gt; data: myData</p><p>Q: If I wanted to use JSON as the vehicle for packaging up the data, what command(s) would I use?  Perhaps I should work up an example and ask on <a href="http://disq.us/url?url=http%3A%2F%2FStackOverflow.com%3AqRZvQd7DjvsgnYgxLqCOe5lcxeY&amp;cuid=3321886" rel="nofollow noopener" title="StackOverflow.com">StackOverflow.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737736">13</a> by Mike
		posted on 12/28/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>Well the nice thing about using say PG is that you can have your app do barcode scanning using the camera on the phone. And if you choose to in the future deploy on android you may only need to change a few small things in your app to deploy, giving you a single source for deploying on multiple platforms, Also its important to note that PG is not just if you want to access phone features its also if you want to deploy on the market as an app so it will be packaged up in an APK (for android) and deployable like that. You also get things like loading screens etc. Anyhow something to look into if your interested.</p><p>I'm not sure I understand the question, are you saying you want to create a JSON list and send that to the server?</p><p>I could be wrong but why would you want to send a JSON object to your server for processing?</p><p>In my example I'm just sending over what would be say form elements in a post, as Ray had said before you usually will send it over post because you have no size limit, <br>that being said in some of my apps where I have a lot of data to send back to the backend for processing from the mobile side I put everything into different list and push that to my backend cfc for processing / inserting etc.</p><p>I hope that makes sense? Also you said you were building native for iphone but are you using JQM?</p><p>Sorry just a little confused.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737735">14</a> by Gary F
		posted on 12/28/2011 at 2:57 AM
		</div>
		<div class="comment_text"><p>@Stefan. I mostly prefer the business logic to be on the server because I don't believe all data from the db should be sent to the client if business logic is intended to act as a gatekeeper and decide what is appropriate to show the user.  (I'm concious that data sent via XHR can so easily be browsed using various dev tools, most built in to browsers these days, and it should only contain stuff that you're happy for users to see.) CF can take care of the business logic and just send the apprioriate content to the app. Also in some cases it's not apprioriate for users or competitors to have access to the business logic which is revealed within the js code. (Not  actually sure if the js can be decoded/viewed in a PhoneGap app?)</p><p>However, in some cases you might need app-side business logic. e.g. Selecting vehicles from various specifications - engine size, seats, MPG, etc. As you pick your criteria the available models appear or disappear. For speed that logic should be done in the app (javascript) because it would feel too unresponsive even if XHR is used over a 3G connection. Therefore all data on the vehicles needs to be downloaded to the client as JSON when the appropriate page loads.</p><p>So where you end up putting the business logic depends on how sensitive the data is that you're applying the logic to and how responsive your app needs to be when the user interacts with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737714">15</a> by Mike G.
		posted on 12/28/2011 at 5:13 AM
		</div>
		<div class="comment_text"><p>@Stefan: JSON is your friend, especially with CRUD and AJAX!</p><p>Let's take an update request for example and see how it would flow.</p><p>Client makes a request with $.getJSON for a post with the id 4. The server then responds with JSON corresponding to post 4.</p><p>The success callback of the request needs to parse the JSON and put it into a form for editing. A simple example could use $.getJSON("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.example.com%2Fposts%2F4%3ANdYCIS2nEb7MtNxLk1RA82Rp6GE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.example.com/posts/4">http://www.example.com/posts/4</a>", function(data){ /* Success logic here where data is the returned JSON */ }); , but you may also want to include an error callback as well.</p><p>The client updates some data and submits to the server -- A $.post is performed, this time with a JSON object serialized from the updated form and posted to the server. jQuery has several methods available to assist with this. Then the server side app would then parse, validate and apply any necessary business logic to the received JSON.</p><p>You can keep your business logic safely locked up in your CF app, while taking advantage of the benefits of AJAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737715">16</a> by Raymond Camden
		posted on 12/28/2011 at 6:15 AM
		</div>
		<div class="comment_text"><p>A couple of comments to the comments:</p><p>@Stefan - I think Mike replied to you well - you can store your logic in a JS file. That's what I'm doing for my big app now.</p><p>@Phillip: Small nit picky point - geolocation is built into your browser, so you can do that w/o PhoneGap. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737717">17</a> by Stefan Richter
		posted on 12/29/2011 at 10:46 PM
		</div>
		<div class="comment_text"><p>Thanks guys, this makes a bit more sense now. Sp basically if I am using a CFC and want to return a recordset in a JQM app then I should use getJSON rather than a cfinvoke, right? Right now I was using cfinvoke and in order to get that to work on subsequent 'pages' I needed to put the cfinvoke inline with the HTML markup to run. Not nice.</p><p>Another issue I encountered was using a cflogout combined with a cflocation - the URLwuld remain 'stuck' to the logout page and not actually redirect to the index/login page. I guess this is due to the AJAX-y page loading. Not a showstopper, but definitely another small hurdle.</p><p>I can't yet decide if I like this way of building websites but I guess it'll get better as we get used to it. Some parts just feel wrong, for example building HTML fragments inside the JS logic that then get injected into the existing markup. It feels dirty somehow :-)<br>What I'd like to see (maybe this is already possible?) is to build the equivalent of a Flex view component, put it aside and then just set some properties on it via JS when my data arrives as opposed to building whole chunks of HTML in JS and pushing them into the 'view'.<br>Do I make sense? Anyone with me? :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737716">18</a> by Mike G.
		posted on 12/29/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>Stefan, getJSON requires your server side app return a JSON object. (I can't speak on how to generate that from Cf as I am still learning CF.) Otherwise output html and use get, or load.</p><p>Also, you can use jquery's hide and show functions to prevent having to build html fragments in your js and update the old element while it is hidden and then reshow it. You can go even further by using clone to duplicate a template fragment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737718">19</a> by Raymond Camden
		posted on 12/29/2011 at 11:27 PM
		</div>
		<div class="comment_text"><p>@Stefan: Right, use getJSON on the jQuery side, but you also want to tell CF to return JSON by adding returnFormat=json in the URL. You don't have to return the JSON yourself - just return data. returnFormat tells CF to encode it for you. See my blog post on CFCs and remote calls.</p><p>For handling logouts, your remote CFC can simply throw an error if you call a method that's your supposed to be authenticated for. (Pardon the grammar.) Your AJAX code can handle errors (again, see my blog posts on this).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737719">20</a> by Stefan Richter
		posted on 1/31/2012 at 2:51 AM
		</div>
		<div class="comment_text"><p>I know it's been a while but I just wanted to say thanks. I've just revisited by little pet project (it's a Jquery Mobile app which allows to tennis players to confirm their availability for the next game) and it now makes a lot more sense. <br>For future readers' benefit, my mistake was to mix things like cfinvoke in line with the HTML/JS code. I now realise that doesn't work and whilst I can have my CFC as they are (and return JSON) I need to move the logic of fetching records and doing other CRUD from cfinvoke to AJAX calls. I think that's something I can manage with a bit more digging.</p><p>First of all, I will try and recreate my login/logout logic in JS/AJAX - right now that too is a cfinvoke call...</p><p>Raymond, thanks for all the examples. Do you have a complete JQM/CF sample app somewhere by any chance..?</p><p>I'll make sure to post my progress. The first failed attempt is on github (don't laugh):<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fstoem%2FPlayingornot%3ALx5T2dB6QAzrVw919vDUPQeFN9s&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/stoem/Playingornot">https://github.com/stoem/Pl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737720">21</a> by Raymond Camden
		posted on 1/31/2012 at 3:00 AM
		</div>
		<div class="comment_text"><p>Define "complete" ;) I've got a bunch of demos. Not sure what would be complete though. You can look at the mobile version of BlogCFC (not from me, Dave Ferguson built it). The mobile version of <a href="http://disq.us/url?url=http%3A%2F%2FCFBloggers.org%3AplHcC8aWdZbLWEVwlkHEwzxIcBI&amp;cuid=3321886" rel="nofollow noopener" title="CFBloggers.org">CFBloggers.org</a> is also available via the Github repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737723">22</a> by Stefan Richter
		posted on 1/31/2012 at 3:20 AM
		</div>
		<div class="comment_text"><p>Confuses me even more :-)<br>Just when I thought I understood the concepts you show me stuff like this<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FColdFusion-Blog-Aggregator%2Fblob%2F4d9cad1668100f2776c53d37957d86e0c0aca206%2Fmobile%2Findex.cfm%3AHHCnhsneBfnMKyAMjumI-gNP2EM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/ColdFusion-Blog-Aggregator/blob/4d9cad1668100f2776c53d37957d86e0c0aca206/mobile/index.cfm">https://github.com/cfjedima...</a></p><p>With cfoutput tags mixed in with JQM list views. This stuff does my head in - am I best advised to try and do all remote data fetching via AJAX, or what's the reason for this app not to do that? Is it just because it's so simple it can get away with 'quick and dirty'?</p><p>Not meaning to criticise anything or anyone here, just trying to understand what a best practice for a CRUD based JQM browser based app with CFC backend would look like.</p><p>I don't blame you if you think: "wtf is this guy on about...!?"  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737722">23</a> by Stefan Richter
		posted on 1/31/2012 at 3:21 AM
		</div>
		<div class="comment_text"><p>page refresh fail, sorry for double posting...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737738">24</a> by Raymond Camden
		posted on 1/31/2012 at 3:22 AM
		</div>
		<div class="comment_text"><p>So to be clear, I consider the mobile version of CFB to be a mobile friendly website. Not a mobile app. It isn't meant to run offline or remotely. It's part of the site itself. Hence the use of cfoutput, etc.</p><p>A PhoneGap version would run in context of a browser on the phone itself. There is no ColdFusion locally. So it would be forced to make Ajax calls for all it's remote data. See my "RSS" demos for PhoneGap for an example of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737740">25</a> by Stefan Richter
		posted on 2/1/2012 at 1:30 AM
		</div>
		<div class="comment_text"><p>Right, I see what you mean.<br>Well this is a pet project to teach myself JQM. It's not a mobile version of an existing site, but a pure mobile, browser based app. Maybe I'll wrap it with Phonegap later, but right now it's just HTML, JS and CF. <br>I've noticed that my desktop approach of mixing CF code in with the HTML markup does not seem to work well with JQM as all the 'pages' are loaded via AJAX and I'd have to inline so much CF code it would be very untidy. <br>It's a learning curve, and so far slow going. But I'll get there and will post my progress.</p><p>Wish me luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737741">26</a> by Raymond Camden
		posted on 2/1/2012 at 1:31 AM
		</div>
		<div class="comment_text"><p>Remember, we are all learning, so you are not alone. ;)</p></div>
	</div>
</div>
		