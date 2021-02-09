
<div class="comment" id="c_1713740901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740901">1</a> by Terry Jett
		posted on 5/5/2012 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond, excellent tutorial.</p><p>I have not yet tried PhoneGap but been wanting to. Your tutorial has peaked my interest.</p><p>Can one use PHP files with PhoneGap, or does it have to be HTML files? Like to use some includes for a project in mind.</p><p>Thanks again Raymond, great share.</p><p>Terry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740902">2</a> by Don
		posted on 5/5/2012 at 9:29 PM
		</div>
		<div class="comment_text"><p>Has to be HTML files... PhoneGap can't understand any server-side languages (PHP, ColdFusion, ASP, etc)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740917">3</a> by Raymond Camden
		posted on 5/5/2012 at 9:30 PM
		</div>
		<div class="comment_text"><p>"Can one use PHP files with PhoneGap, or does it have to be HTML files?"</p><p>Well, shoot, that was kind of the major point. :) If I didn't make that clear, I apologize. So no - you cannot. It has to be HTML.</p><p>To be anal, you can use .txt, .xml, .csv, if you want to use JavaScript to parse them. The point is - you can't use a platform like PHP/CF within the PhoneGap app itself. Rather, you would use it via a network call.</p><p>Clearer?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740920">4</a> by Mikel
		posted on 5/6/2012 at 5:30 AM
		</div>
		<div class="comment_text"><p>This is such a handy example!  Thanks a lot for taking the time to put this together.  I'm sure that many will find it very useful.</p><p>I'm giving a small PhoneGap presentation at work this Friday and I already have several of your pages bookmark to share with the group.  Well, now I have to add this one too :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740919">5</a> by Don Vawter
		posted on 5/6/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>I don't believe this example will fly on a device because it relies on localhost to serve the page and there will be no localhost cf server on the device. One would have to reference a remote cfserver. That is easily done. The only gotcha is that you have to remember to whitelist the url in phonegap. As a side note you don't have to worry about cross domain ajax calls because the built in server on the device acts as a proxy for the requests.</p><p>As a general practice I have moved away from using cf in my presentation pages even on desktop applications and use cf only as a data server. - Conversion to mobile becomes much simpler and imo javascript with jQuery is much better at presentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740921">6</a> by Raymond Camden
		posted on 5/6/2012 at 9:14 PM
		</div>
		<div class="comment_text"><p>The localhost thing was just a demonstration. I used a full URL on purpose - and obviously (ok, maybe it wasn't ;) the host would change depending on your server. Should I add a note for that point above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740924">7</a> by Don Vawter
		posted on 5/6/2012 at 9:38 PM
		</div>
		<div class="comment_text"><p>@Ray. Might be a good idea. Once you understand how PhoneGap works it is obvious you can't use localhost but if one is just learning it may not be, especially since localhost may very well work in a simulator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740923">8</a> by Raymond Camden
		posted on 5/6/2012 at 10:14 PM
		</div>
		<div class="comment_text"><p>Added a small note. Let me know if you think it helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740922">9</a> by Don Vawter
		posted on 5/6/2012 at 11:40 PM
		</div>
		<div class="comment_text"><p>@Ray I think the note will help. Appreciate your responsiveness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740925">10</a> by Terry Jett
		posted on 5/6/2012 at 11:49 PM
		</div>
		<div class="comment_text"><p>Sorry to ask such a stupid question. Should have been clear that HTML could not be used. Last time I will visit using a tablet that does not show code correctly.</p><p>I will refrain from such in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740928">11</a> by Raymond Camden
		posted on 5/6/2012 at 11:51 PM
		</div>
		<div class="comment_text"><p>Terry, I hope I didn't sound too hard in my response. If so, I apologize. I have a fix for showing code in the mobile version, but I've yet to deploy it to my server. I'm going to do so Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740927">12</a> by Raymond Camden
		posted on 5/6/2012 at 11:57 PM
		</div>
		<div class="comment_text"><p>Terry (et all) - I felt bad about this - so I pushed the fix up. For folks curious, it is based on this blog entry:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F4%2F14%2FDynamically-replacing-Gists-with-raw-content-for-jQuery-Mobile%3An-zsBagXuwZEWrN-iCg-X3iSUow&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/4/14/Dynamically-replacing-Gists-with-raw-content-for-jQuery-Mobile">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740929">13</a> by Brian Swartzfager
		posted on 5/7/2012 at 6:37 PM
		</div>
		<div class="comment_text"><p>It seems like this is a situation where a Javascript templating library like Handlebars would come in handy:  it would simply be a matter of including the templating library in the PhoneGap project, wouldn't it (or are there issues with doing that)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740926">14</a> by Raymond Camden
		posted on 5/7/2012 at 6:41 PM
		</div>
		<div class="comment_text"><p>Brian - I'd say it depends. I specifically didn't go deep into the JS because the blog post was more about the _conversion_. The topic of how to actually build it will be depend on your JS skills, what libraries you like, etc.</p><p>That being said - I freaking love Handlebars - and yes - it works on mobile. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740930">15</a> by Patrick Whittingham
		posted on 5/7/2012 at 7:29 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I think you can use 'server-side' code in a PhoneGap application for both Android and Apple. This example will point to code on a web server</p><p>Here is an example for Android.</p><p>package com.test.test8t;</p><p>import com.phonegap.*;<br>import android.os.Bundle;</p><p>public class test8T_srvActivity extends DroidGap {<br>    /** Called when the activity is first created. */<br>    @Override<br>    public void onCreate(Bundle savedInstanceState) {<br>        super.onCreate(savedInstanceState);<br>        super.setBooleanProperty("loadInWebView", true);<br>        super.setIntegerProperty("loadUrlTimeoutValue", 80000);<br>        super.loadUrl(<br>            "https://www.test_server/apps/folder1/www/index.html");<br>    }<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740932">16</a> by Raymond Camden
		posted on 5/7/2012 at 7:37 PM
		</div>
		<div class="comment_text"><p>I see that as a solution, but most people I know doing PhoneGap do not do it that way. Also, this would have zero support for offline mode. Admittedly, so would using Ajax to fetch the data, but you could at least handle it better, switch to a local db for backup data, etc. But yea - that is an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740933">17</a> by Mark Gregory
		posted on 5/8/2012 at 4:36 AM
		</div>
		<div class="comment_text"><p>Forgive the noobish question, but do Phone Gap apps run in Webkit, or do they get compiled to native code. I am at the starting line here, and considering Phone Gap versus Titanium (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.appcelerator.com%2F%29%3AWnAmY72RR9oNIb2dqxNR_N9oh3g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.appcelerator.com/)">http://www.appcelerator.com/)</a>, which is a sort of metered service it appears.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740935">18</a> by Raymond Camden
		posted on 5/8/2012 at 5:10 AM
		</div>
		<div class="comment_text"><p>It runs in a webkit browser run via native code. It's like a thin wrapper of deliciousness around the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740931">19</a> by Mark Gregory
		posted on 5/8/2012 at 5:14 AM
		</div>
		<div class="comment_text"><p>Ahh I see! Seeing as it runs from webkit, does it give access to hardware goodies like cameras, GPS, acceleromator, etc?</p><p>(Pretty sure I spelled that accelerator part wrong!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740937">20</a> by Raymond Camden
		posted on 5/8/2012 at 5:19 AM
		</div>
		<div class="comment_text"><p>Absolutely - check the docs for an example. Here's a recorded Intro preso: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F3%2F14%2FSlides-code-and-recording-from-my-PhoneGap-Presentation%3A8enLDzPN08GdrBs3kJ-nBUMPAkI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/3/14/Slides-code-and-recording-from-my-PhoneGap-Presentation">http://www.raymondcamden.co...</a></p><p>Also, tomorrow, Andrew Trice and I are doing an open preso you can attend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740938">21</a> by Mark Gregory
		posted on 5/8/2012 at 8:26 AM
		</div>
		<div class="comment_text"><p>Ah Crikey! What am I waiting for?!?!<br>Thank you sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740936">22</a> by Ali
		posted on 6/3/2012 at 8:32 PM
		</div>
		<div class="comment_text"><p>Thank you. What would be your approach if it the site is a little more complicated. Maybe with login and logout, and user based views etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740939">23</a> by Raymond Camden
		posted on 6/3/2012 at 9:54 PM
		</div>
		<div class="comment_text"><p>There's  a couple things to consider here.</p><p>1) Login is certainly possible. Its just one more Ajax call. If your back end supports cookie-based sessions, then your PG app's Ajax calls will pass those cookies back in future calls. That means your back end code could ensure a session exists (and has a verified login) before returning any data.</p><p>2) User based views: Your login method could return a hashmap of allowed views, or roles, that your client app would use to render stuff. Obviously your back end code still needs to do validation, based on the session info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740941">24</a> by Kulbhushan
		posted on 6/18/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>We are in the process of creating a PhoneGap application and the functionality would also be accessible from the mobile browser.</p><p>We are having a discussion as to which option to use:<br>1) Send json from server  and keep html pages in the phonegap app.<br>2) Send hrml pages populated with data to the phonegap app.</p><p>The advantages we see are:<br>1) Fixing bugs is easier, it is server side instead of getting the app certified all over again<br>2) Probably more re use of code.</p><p>Do you have any comments on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740942">25</a> by Raymond Camden
		posted on 6/19/2012 at 4:59 AM
		</div>
		<div class="comment_text"><p>When you mention the advantages, I'm not sure which option you are speaking of. To me, you get more reuse if your server-side application is already using MVC. Your PG app can hit the model via a service layer and reuse the same business logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740940">26</a> by Phil Baumert
		posted on 6/28/2012 at 8:18 PM
		</div>
		<div class="comment_text"><p>Hi, thanks for this super useful blog! I have this working on my application but I just want to have a different index page with a button to link to a page(i call it "intList.html") with the code you have on this examples index.html. For some reason, it does not load the data unless it is on the index.html page. What am I missing here? Thanks for your help. This is my index.html that has a link to intList.html with code from your index.html.</p><p>&lt;!DOCTYPE html&gt; <br>&lt;html&gt;</p><p>&lt;head&gt;<br>	&lt;meta charset="utf-8"&gt;<br>	&lt;meta name="viewport" content="width=device-width, initial-scale=1"&gt; <br>	&lt;title&gt;RYP&lt;/title&gt; <br>	&lt;link rel="stylesheet" href="css/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.1.0.min.css" /&gt;<br>	&lt;script src="js/jquery-1.7.2.min.js"&gt;&lt;/script&gt;<br>	&lt;script src="js/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.1.0.min.js"&gt;&lt;/script&gt;<br>	&lt;script src="js/main.js"&gt;&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>    &lt;div data-role="page" id="indexPage"&gt;</p><p>        &lt;div data-role="header"&gt;<br>            &lt;h1&gt;Shows&lt;/h1&gt;<br>            &lt;img src="css/images/ryprad_logo.jpg"&gt;&lt;/h1&gt;<br>                &lt;/div&gt;</p><p>        &lt;br&gt;&lt;br&gt;&lt;br&gt;</p><p>        &lt;div data-role="content"&gt;<br>            &lt;a href="intList.html"&gt;Shows&lt;/a&gt;&lt;br&gt;&lt;br&gt;<br>        &lt;/div&gt;<br>        &lt;br&gt;&lt;br&gt;&lt;br&gt;<br>        &lt;div data-role="footer"&gt;</p><p>            &lt;h4&gt;Stat&lt;/h4&gt;<br>        &lt;/div&gt;</p><p>    &lt;/div&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740946">27</a> by Phil Baumert
		posted on 6/29/2012 at 12:01 AM
		</div>
		<div class="comment_text"><p>Hey there again. I figured out everything runs "through" the index.html file. It works now. Thanks again for this awesome example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740948">28</a> by Shawn Puyear
		posted on 8/10/2012 at 6:36 PM
		</div>
		<div class="comment_text"><p>Please forgive the noob question, but when I preview the app in a browser, v1 displays just fine but v2 just displays a page with header and footer and no content.  I changed the service call to point to my local server.  Did I forget to do something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740950">29</a> by Raymond Camden
		posted on 8/10/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>v2 depends on "deviceready" being fired by PhoneGap. You can't just run it in the browser. You could - if you want - run it and open your console and run startup() manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740947">30</a> by Shawn Puyear
		posted on 8/10/2012 at 7:02 PM
		</div>
		<div class="comment_text"><p>Thank you.  If I wanted to view it working in a browser, is there a different event to call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740949">31</a> by Raymond Camden
		posted on 8/10/2012 at 7:16 PM
		</div>
		<div class="comment_text"><p>It depends on your code. If your code says, when deviceready is fired, run X, then you want to run X.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740951">32</a> by Shawn Puyear
		posted on 8/23/2012 at 10:17 PM
		</div>
		<div class="comment_text"><p>Ray.  Thanks again for your help.  I got the data to display in a browser but cannot, for the life of me, get it to display in the Android.  I even tried adding a button on the page to call startup() with no luck in the emulator.</p><p>Could you suggest a method to fire the event to call and return the data in the emulator?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740952">33</a> by Raymond Camden
		posted on 8/24/2012 at 12:39 AM
		</div>
		<div class="comment_text"><p>Did you remember to include cordova.js?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740954">34</a> by joseph
		posted on 9/6/2012 at 2:29 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I created a web site in PHP and I load it in a phone gap app using onload function and ajax. Now I want to call phonegap function from my code in server. For example I want to take a photo can I call that photo function in my app ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740956">35</a> by Raymond Camden
		posted on 9/6/2012 at 4:55 PM
		</div>
		<div class="comment_text"><p>What do you mean you 'load' it? Are you loading just data or something else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741056">36</a> by Shawn Puyear
		posted on 9/18/2012 at 5:28 PM
		</div>
		<div class="comment_text"><p>Ray:  Sorry for the long post.  I am still hitting a snag and hope you can help.  I did include a version of cordova.js in my site.  Below is my head tag set.</p><p>&lt;head&gt;<br>	&lt;meta charset="utf-8"&gt;<br>	&lt;meta name="viewport" content="width=device-width, initial-scale=1"&gt; <br>	&lt;title&gt;Art Lister&lt;/title&gt; <br>	&lt;link rel="stylesheet" href="css/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.1.0.min.css" /&gt;<br>	&lt;script src="js/jquery-1.7.2.min.js"&gt;&lt;/script&gt;<br>	&lt;script src="js/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.1.0.min.js"&gt;&lt;/script&gt;    <br>    &lt;script src="cordova-2.0.0.0.js"&gt;&lt;/script&gt;<br>	&lt;script src="js/main.js"&gt;&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>To run you through my process, I did the following:<br>1. In Dreamweaver, I created a new site<br>2. I copied the files from your v2 folder into the new site<br>3. I copied the artservice.cfc to my testing server and made sure it was accessible<br>4. I change the cfc call in the index,html page to pint to the cfc on my testing server<br>5. I built the app using the PhoneGap functionality built into Dreamweaver<br>6. I launched the app from Dreamweaver in an Android Virtual Device that I previously created</p><p>The app installs fine in the AVD and opens, just no data is displayed.  Only the header and footer show.</p><p>Any ideas why the data is not displayed?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741042">37</a> by Raymond Camden
		posted on 9/18/2012 at 5:43 PM
		</div>
		<div class="comment_text"><p>The browser (and PhoneGap) on your AVD cannot hit localhost - which I assume you are using. Well, it can, but localhost is local to the device, not your hardware. Try using 10.0.0.2 instead, which should point to your local machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741063">38</a> by Shawn Puyear
		posted on 9/18/2012 at 6:17 PM
		</div>
		<div class="comment_text"><p>I wish it were that simple.  I actually have the cfc on an external test server that I access via IP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741051">39</a> by Raymond Camden
		posted on 9/18/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>Oh, well then it should just work. I'd suggest checking the console. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F5%2F10%2FSetting-up-console-debugging-for-PhoneGap-and-Android%3AsRPh9ZRNPozXgktLldsvy4u8VlM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/5/10/Setting-up-console-debugging-for-PhoneGap-and-Android">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741044">40</a> by Shawn Puyear
		posted on 9/18/2012 at 6:35 PM
		</div>
		<div class="comment_text"><p>That is what I figured.  Thanks again for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741049">41</a> by Rikesh Subedi
		posted on 10/10/2012 at 8:46 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I'm new to coldfusion and I want to work on PhoneGap. I loaded all your files in a local host and tried to run V1/index.cfm but is shows an error "Datasource cfartgallery could not be found." May i know the reason please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741041">42</a> by Raymond Camden
		posted on 10/11/2012 at 1:15 AM
		</div>
		<div class="comment_text"><p>That's a sample database you can get when installing ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741040">43</a> by Rikesh Subedi
		posted on 10/15/2012 at 8:38 AM
		</div>
		<div class="comment_text"><p>XMLHttpRequest cannot load http://localhost:8500/service/artservice.cfc?method=getArtList&amp;returnformat=json. Origin null is not allowed by Access-Control-Allow-Origin.</p><p>how to overcome this error</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741047">44</a> by Raymond Camden
		posted on 10/15/2012 at 11:18 AM
		</div>
		<div class="comment_text"><p>Are you using a browser or a PhoneGap app to test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741048">45</a> by al
		posted on 11/3/2012 at 2:28 AM
		</div>
		<div class="comment_text"><p>As part of ajax call, can phonegap get HTML with scripts to download and execute on the mobile device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741045">46</a> by Raymond Camden
		posted on 11/3/2012 at 5:24 PM
		</div>
		<div class="comment_text"><p>Written correctly, yes. Imagine your remote HTML/script has a block of code that looks like this:</p><p>function foo() { alert('x'); }</p><p>This cannot be added to the app when loaded in via Ajax. Instead, your code must be written as</p><p>foo = function() { alert('x'); }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741043">47</a> by max rossi
		posted on 11/8/2012 at 4:33 AM
		</div>
		<div class="comment_text"><p>hi raymond,<br>I tried this example these days, I installed the android sdk, everything ok, but my cfc works if I call the method with returntype="string", but doesn't work with returntype="query". Unfortunately I have no errors from the debug. I call the cfc in the external server with cf8....help help help please....thank you very much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741050">48</a> by Raymond Camden
		posted on 11/8/2012 at 6:05 PM
		</div>
		<div class="comment_text"><p>I'd need more details. So for example, you say it doesn't work, but exactly how? In your code that handles the response, if you alert() the response, do you see anything? Also, have you tried jQuery's Ajax error handling?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741057">49</a> by max rossi
		posted on 11/8/2012 at 10:37 PM
		</div>
		<div class="comment_text"><p>My response is alert(undefined)<br>my cfc:</p><p>&lt;cffunction name="getfatture" access="remote" returntype="query" output="false"&gt;</p><p>&lt;cfquery datasource="#request.datasource#" name="sel_fatture"&gt;<br>SELECT  CT_Fatture.id_fattura, CT_Clienti.Societa		<br>FROM    CT_Fatture <br>	INNER JOIN CT_Clienti ON CT_Fatture.id_cliente = CT_Clienti.id_cliente <br>&lt;/cfquery&gt;</p><p>&lt;cfreturn sel_fatture&gt;<br>&lt;/cffunction&gt;</p><p>and script:</p><p>&lt;script&gt;	<br>$("#indexPage").live("pageinit", function() { <br>	console.log("Getting remote list");<br>	$.mobile.showPageLoadingMsg();</p><p>	$.get("<a href="http://disq.us/url?url=http%3A%2F%2Finvoice.contechnet.it%2Fobject%2Fpg%2FlistFatt.cfc%3Fmethod%3Dgetfatture%26returnformat%3Djson%3AdeMi0acd1ssn0f2StpfMVpaoIBM&amp;cuid=3321886" rel="nofollow noopener" title="http://invoice.contechnet.it/object/pg/listFatt.cfc?method=getfatture&amp;returnformat=json">http://invoice.contechnet.i...</a>", {}, function(res) {<br>		$(document).ready(function(){<br>			alert(res.length);<br>		}); <br>		$.mobile.hidePageLoadingMsg();</p><p>		var s = ""; <br>for(var i=0; i&lt;res.length; i++) {<br>			s+= "&lt;li&gt;&lt;a href='detail.html?id=" + res[i].id_fattura + "'&gt;" + res[i].societa + "&lt;/a&gt;&lt;/li&gt;";<br>		}</p><p>		$("#artList").html(s);<br>		$("#artList").listview("refresh");<br>	},"json");<br>});<br>&lt;/script&gt;</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741055">50</a> by Raymond Camden
		posted on 11/8/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>Woah - why do you have a document.ready block _inside_ your get response? That makes no sense and won't work at all. Remove that and keep the alert line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741054">51</a> by max rossi
		posted on 11/9/2012 at 3:08 AM
		</div>
		<div class="comment_text"><p>ok, but I get the same answer: undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741046">52</a> by Raymond Camden
		posted on 11/9/2012 at 3:36 AM
		</div>
		<div class="comment_text"><p>Don't alert res.length, just res.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741053">53</a> by max rossi
		posted on 11/9/2012 at 4:55 AM
		</div>
		<div class="comment_text"><p>yeah, you're right, sorry, alert[object Object]</p><p>if i use<br>alert(JSON.stringify(res, null, 4));</p><p>i get</p><p>{"COLUMNS":["ID_FATTURA","SOCIETA"],"DATA":[[2,"Receptour Srl"],[3,"Contech Sas"],[4,"Receptour Srl"],[5,"Receptour Srl"],[6,"Zama World Visa"]]}</p><p>thank you very very much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741059">54</a> by Raymond Camden
		posted on 11/9/2012 at 7:52 AM
		</div>
		<div class="comment_text"><p>Ok, so as you can see, the structure of your data is different. You can't do .length on it. You have an object with 2 main properties, COLUMNS and DATA. COLUMNS is an array of column names. DATA is an array of arrays where each element is one row of data, and each element in THAT array maps to the same COLUMNS array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741062">55</a> by John Hartman
		posted on 1/10/2013 at 12:34 AM
		</div>
		<div class="comment_text"><p>Raymond, great post and extremely helpful.  Question.  My mobile site is JQM and codeigniter php.  The entire site is php based from a file naming convention as well as functions within.  What I'm trying to wrap my head around is do I need to create the "template" html files as you have done for each page that needs to be pulled, or can I simply create an index.html page that does an ajax call to index.php?  currently, all views are generated back thru the index.php page.  hope that makes sense.</p><p>regards,</p><p>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741064">56</a> by Raymond Camden
		posted on 1/11/2013 at 1:06 AM
		</div>
		<div class="comment_text"><p>@John: I'm afraid I don't understand your question. I've described this technique as generically as I can. It should be applicable to any dynamic language. I don't quite know what your codeigniter does so I can't really comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741065">57</a> by Marc Schipperheyn
		posted on 2/14/2013 at 9:37 PM
		</div>
		<div class="comment_text"><p>For much more complicated server side templates, retrieving json and recreating the display logic on the mobile device can be a real pain. Stuff like Handlebars is extremely limited, especially when you are used to powerful server side scripting languages such as Cold Fusion or Freemarker.</p><p>I was thinking more along the lines of retrieving the actual HTML in stead of json content and inserting that dynamically. There are some issues to overcome at first glance:<br>* you would have to create some generic way of handling form submissions that integrates nicely with your existing server side infrastructure.<br>* returned templates shouldn't contain any script src references. <br>* you need to deal with session timeouts gracefully <br>* you would have to do all this and at the same time avoid the Apple AppStore police saying it's too "webby"</p><p>Non of this seems major. Any thoughts on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741061">58</a> by Raymond Camden
		posted on 2/15/2013 at 4:43 PM
		</div>
		<div class="comment_text"><p>I attended a session by a Twitter dev last year where he talked about doing much the same thing. They found that creating HTML on the client (from data) was a bit too slow for them so they moved more to generating the HTML server side. So yes - I don't think this is crazy at all and it may work better for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741060">59</a> by Zana
		posted on 4/25/2013 at 2:09 AM
		</div>
		<div class="comment_text"><p>Hi Raymond. I have a question. I'm using phonegap to create a web app and when i want to browse dynamically to another page as you did, it doesn't work and what i get is that the page is not found. Example : bloc_adresse ='&lt;li&gt;&lt;a href="page.html" rel="external"&gt; '+titre+'&lt;/a&gt;&lt;/li&gt;'; works but  <br>var bloc_adresse ='&lt;li&gt;&lt;a href="page.html?id='+id+' "rel="external"&gt; '+titre+'&lt;/a&gt;&lt;/li&gt;'; doesn't work. Can you please tell me if you have any idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741084">60</a> by Raymond Camden
		posted on 4/25/2013 at 2:14 AM
		</div>
		<div class="comment_text"><p>There was a bug w/ urls with query string in older Androids/PhoneGap. Are you running the latest PhoneGap on a somewhat newish Android?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741085">61</a> by Zana
		posted on 4/25/2013 at 2:58 AM
		</div>
		<div class="comment_text"><p>I'm running CordovaWP7 2.4.0 i'm doing the app for windows phone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741082">62</a> by Zana
		posted on 4/25/2013 at 3:01 AM
		</div>
		<div class="comment_text"><p>I'm downloading the 2.6.0 to test. will tell you if it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741078">63</a> by Raymond Camden
		posted on 4/25/2013 at 5:31 PM
		</div>
		<div class="comment_text"><p>Wait, why are you doing rel=external? You don't need/want that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741088">64</a> by Kalgi
		posted on 5/9/2013 at 2:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>One question is this .cfm will work in iphone too ??<br>actually i have tried &amp; the problem i got is, below code is written in index.html<br>        &lt;body&gt;<br>            &lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;<br>            &lt;meta HTTP-EQUIV="REFRESH" content="5; url=index.cfm"&gt;<br>        &lt;/body&gt;<br>when i run my app i m getting an error like :<br>Failed to load webpage with error: Frame load interrupted..<br>Can you please help me  ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741076">65</a> by Raymond Camden
		posted on 5/10/2013 at 6:06 PM
		</div>
		<div class="comment_text"><p>Kalgi, your question does not make any sense. My post isn't about making a CFM work on a mobile device. It is about how you would rewrite, or extend, an existing server-side app so you can use it from your mobile device with HTML and JS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741089">66</a> by Jerry
		posted on 6/27/2013 at 7:08 PM
		</div>
		<div class="comment_text"><p>I am a newbie to PhoneGap.<br>Typically PhoneGap app start from a local HTML. How could the try to get other domain work?<br>$.get("http://anotherdomain/..."...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741080">67</a> by Raymond Camden
		posted on 6/27/2013 at 9:57 PM
		</div>
		<div class="comment_text"><p>You can't do that. Well technically you can - but Apple won't approve an app that just loads up the entire content from your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741073">68</a> by Rupesh Kumar
		posted on 7/22/2013 at 9:26 AM
		</div>
		<div class="comment_text"><p>hey Raymond,</p><p>with the help of your example (and few extra source). i'm using the following jquery mobile code to get json data<br>$.ajax({<br>                   type: "POST",<br>                   url: "<a href="http://disq.us/url?url=http%3A%2F%2Fprojects.corewebconnections.com%2Faudit%2Fm%2Fshow_project_json_test.php%3ANVSze3h6QWPlteC0aY3Yehvn7jE&amp;cuid=3321886" rel="nofollow noopener" title="http://projects.corewebconnections.com/audit/m/show_project_json_test.php">http://projects.corewebconn...</a>",<br>                   cache: false,<br>                   dataType: "json",<br>                   data: formData,<br>                   success: onSuccess,<br>                   error: onError<br>               });</p><p> function onSuccess(data, status)<br>       {<br>		   	var output = $('#projectlist');<br>			var place = '';</p><p>			output.empty();<br>		   	$.each(data, function(i,value){<br>            	place += '&lt;li&gt;&lt;a href=""&gt;' + value.firstName + '&lt;span class="ui-li-count"&gt;' + <a href="http://disq.us/url?url=http%3A%2F%2Fvalue.id%3Awcm3BwteNSAvxjdtklYpDWDLxe0&amp;cuid=3321886" rel="nofollow noopener" title="value.id">value.id</a>+'&lt;/span&gt;&lt;/a&gt;&lt;/li&gt;';</p><p>            });<br>			$("#projectlist").html(place);<br>			$("#projectlist").listview("refresh");</p><p>          //console.log(data);	   <br>       }</p><p>my html has following code<br>&lt;div id="main-content" class="content" data-role="content"&gt;<br>			&lt;ul id="projectlist" data-role="listview" data-filter="true" data-filter-placeholder="Search projects..."  data-inset="true"&gt;</p><p>        &lt;/ul&gt;<br>   &lt;/div&gt;</p><p>i can make it run on browsers (chrome, safari, FF), but not on emulator or device. i have been struggling for 2 days. i'm using dreamweaver cs6 and phonegap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741072">69</a> by Raymond Camden
		posted on 7/22/2013 at 3:43 PM
		</div>
		<div class="comment_text"><p>You didn't say how it failed on the emulator/device. If you are using iOS, I recommend remote debugging with Safari to see if you can expose the error better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741075">70</a> by rupesh kumar
		posted on 7/22/2013 at 4:23 PM
		</div>
		<div class="comment_text"><p>please check this url: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2Fshow_projects.html%3AQh8TE2z_45_tESI1xYRGwLMGYLc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/show_projects.html">http://www.qhse-riskapplica...</a> (you can view console (on chrome) to see json output.</p><p>but when i run this on emulator (uploaded the screenshot on <a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2Femulator.png%29%3AxqYTWY1ljBa5hTqj6ZVVca3CxQk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/emulator.png)">http://www.qhse-riskapplica...</a>, it just shows the search box and no list view.</p><p>i have changed the code since my last point</p><p>updated jquery code:<br>&lt;link rel="stylesheet" href="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.jquery.com%2Fmobile%2F1.3.1%2Fjquery.mobile-1.3.1.min.css%3AsWa-04TssntpysAugnOohJycYGM&amp;cuid=3321886" rel="nofollow noopener" title="http://code.jquery.com/mobile/1.3.1/jquery.mobile-1.3.1.min.css">http://code.jquery.com/mobi...</a>" /&gt;<br>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.jquery.com%2Fjquery-1.9.1.min.js%3AQEHtnacYJo1czHKfQqYUtpbdHv8&amp;cuid=3321886" rel="nofollow noopener" title="http://code.jquery.com/jquery-1.9.1.min.js">http://code.jquery.com/jque...</a>"&gt;&lt;/script&gt;<br>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.jquery.com%2Fmobile%2F1.3.1%2Fjquery.mobile-1.3.1.min.js%3AMNLJvFcf7u1RtP2eQQleiLky7Ws&amp;cuid=3321886" rel="nofollow noopener" title="http://code.jquery.com/mobile/1.3.1/jquery.mobile-1.3.1.min.js">http://code.jquery.com/mobi...</a>"&gt;&lt;/script&gt;</p><p>&lt;script&gt;<br>	$(document).on('pagebeforeshow', '#home', function(){</p><p>		$.getJSON("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2Fshow_project_json_test.php%3AnUvLtiGUai7SG-bPrTl5Duk6wes&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/show_project_json_test.php">http://www.qhse-riskapplica...</a>", function(projects) {<br>			$("#projectlist").empty();</p><p>			$.each(projects, function(i, projects){<br>			   $("#projectlist").append(generateProjectLink(projects));<br>			   console.log(generateProjectLink(projects));<br>			   //alert(projects.firstName);<br>			});</p><p>			$("#projectlist").listview("refresh");</p><p>		});</p><p>		function generateProjectLink(projects){<br>			return '&lt;li&gt;&lt;a href=""&gt;' + projects.firstName + '&lt;span class="ui-li-count"&gt;' + <a href="http://disq.us/url?url=http%3A%2F%2Fprojects.id%3AO3GIm8s4rsdao2978N6dl682bXo&amp;cuid=3321886" rel="nofollow noopener" title="projects.id">projects.id</a>+'&lt;/span&gt;&lt;/a&gt;&lt;/li&gt;'<br>		}<br>	});<br>&lt;/script&gt;</p><p>my html has following code<br>&lt;div id="main-content" class="content" data-role="content"&gt;<br>         &lt;ul id="projectlist" data-role="listview" data-filter="true" data-filter-placeholder="Search projects..." data-inset="true"&gt;</p><p>&lt;/ul&gt;<br>&lt;/div&gt;</p><p>i'm using dreamweaver cs6 and phonegap.</p><p>i'm stuck big time :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741087">71</a> by Raymond Camden
		posted on 7/22/2013 at 5:42 PM
		</div>
		<div class="comment_text"><p>Oh, you probably need to <a href="http://disq.us/url?url=http%3A%2F%2Faddprojects.corewebconnections.com%3ATGF0Ht4aLQMVDefmvE3fVtXLPvs&amp;cuid=3321886" rel="nofollow noopener" title="addprojects.corewebconnections.com">addprojects.corewebconnecti...</a> to your ACCESS element. Please see the PhoneGap docs on this.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F3.0.0%2Fguide_appdev_whitelist_index.md.html%23Domain%2520Whitelist%2520Guide%3ANVNSRTt5Ge0lu8g7SpW_vDQdIx8&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/3.0.0/guide_appdev_whitelist_index.md.html#Domain%20Whitelist%20Guide">http://docs.phonegap.com/en...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741083">72</a> by Rupesh Kumar
		posted on 7/23/2013 at 9:18 AM
		</div>
		<div class="comment_text"><p>thanks for your reply</p><p>i added &lt;access origin="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2F%3Arxjw_QY9vUHsp4tJCNa5TimkWE0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/">http://www.qhse-riskapplica...</a>" /&gt; to config.xml. is there any specific place to store it. i have this file in <a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2F%3Arxjw_QY9vUHsp4tJCNa5TimkWE0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/">http://www.qhse-riskapplica...</a>. the config file looks like bellow</p><p>?xml version="1.0" encoding="UTF-8" ?&gt;<br>&lt;widget xmlns = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2Fns%2Fwidgets%3AMx2Q6mlsaVXFcKRQbK6r_lqjmP8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/ns/widgets">http://www.w3.org/ns/widgets</a>"<br>    xmlns:gap = "<a href="http://disq.us/url?url=http%3A%2F%2Fphonegap.com%2Fns%2F1.0%3ArGhMg6lWaDHTWuxdL2I7p9NsCqU&amp;cuid=3321886" rel="nofollow noopener" title="http://phonegap.com/ns/1.0">http://phonegap.com/ns/1.0</a>"<br>    id        = "com.phonegap.example"<br>    version   = "1.0.0"&gt;</p><p>&lt;name&gt;Audit&lt;/name&gt;<br>&lt;access origin="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2F%3Arxjw_QY9vUHsp4tJCNa5TimkWE0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/">http://www.qhse-riskapplica...</a>" /&gt;</p><p>&lt;description&gt;<br>Audit and Compliance<br>&lt;/description&gt;</p><p>&lt;author href="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.domain.com%3AYlp2OiIumHJmJzTS-AOtyqOtoSk&amp;cuid=3321886" rel="nofollow noopener" title="https://www.domain.com">https://www.domain.com</a>" email="you@domain.com"&gt;<br>Rupesh Kumar<br>&lt;/author&gt;</p><p>&lt;/widget&gt;</p><p>but adding this also did not work. i hope i get a working example as per my json<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.qhse-riskapplications.com%2Fm%2Fshow_project_json_test.php%3AnUvLtiGUai7SG-bPrTl5Duk6wes&amp;cuid=3321886" rel="nofollow noopener" title="http://www.qhse-riskapplications.com/m/show_project_json_test.php">http://www.qhse-riskapplica...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741081">73</a> by Raymond Camden
		posted on 7/23/2013 at 3:45 PM
		</div>
		<div class="comment_text"><p>I replied via email as well, but I think your issue is the access value. Try changing origin to <a href="http://disq.us/url?url=http%3A%2F%2Fqhse-riskapplications.com%3AKpl875XFpAHPTsOqvb4rTOBH9lI&amp;cuid=3321886" rel="nofollow noopener" title="qhse-riskapplications.com">qhse-riskapplications.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741074">74</a> by Rupesh Kumar
		posted on 7/24/2013 at 2:39 PM
		</div>
		<div class="comment_text"><p>thanks Raymond for your help. i have moved forward. but now i ran into another problem</p><p>i have index.html file with following changePage function</p><p>$.mobile.changePage( "show_projects.html", { transition: "slideup", changeHash: false });</p><p>the problem is that when i run "show_projects.html" directly, it loads the data from json (perfect).</p><p>but when i call index.html first and then use $.mobile.changePage( "show_projects.html", { transition: "slideup", changeHash: false }); "show_projects.html" does not load json, any idea? the jquery code on show_projects.html is</p><p>$(document).on('pageinit', '#navigation', function(){ $.ajax({url: "<a href="http://disq.us/url?url=http%3A%2F%2Fprojects.domain.com%2Faudit%2Fm%2Fshow_project_json_test.php%3AmCOkJKxkau8110nEvjBzq8Y88DQ&amp;cuid=3321886" rel="nofollow noopener" title="http://projects.domain.com/audit/m/show_project_json_test.php">http://projects.domain.com/...</a>", dataType: "json", jsonpCallback: 'successCallback', async: true, beforeSend: function() { $.mobile.showPageLoadingMsg(true); }, complete: function() { $.mobile.hidePageLoadingMsg(); }, success: onSuccess, error: function (request,error) { alert('Network error has occurred please try again!'); } }); });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741086">75</a> by Raymond Camden
		posted on 7/24/2013 at 8:25 PM
		</div>
		<div class="comment_text"><p>Is #navigation the page id for show_projects.html?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741077">76</a> by Mark
		posted on 8/9/2014 at 4:29 AM
		</div>
		<div class="comment_text"><p>HI Raymond, very informative site. I'm trying to convert an application running on Coldfusion MX 7.0.2 into a mobile app. First thing I need to do I guess is be able to access my CF server code using javascript which brought me  here.</p><p>I can't get this example working at all. Just get a page with the headings, no data. I created a directory called mobile on my server account and uploaded the three directories (V1, V2, service) in the zip file. I ran the code &lt;my domain&gt;mobile/v1/index.html and just get the headings. If I look using firebug the cfc is generating a 500 server error. If I go directly to the cfc file in the browser with &lt;my domain&gt;mobile/service/artservice.cfc?method=getArtList I get the following  error:</p><p>"The method 'getArtList' could not be found in component WEB-INF.cftags.component. Check to ensure that the method is defined, and that it is spelled correctly."</p><p>Any idea what's going wrong. Also is there a super simple example of accessing and displaying a CFQUERY from javascript. I figure if I can at least get that working it's a good first step. I've tried about every jquery, ajax sample on the web and I can't get any of them working. Some I can get the cfc working directly from the browser but then can't get the data to display in the HTML page. Very frustrating, any help appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741091">77</a> by Raymond Camden
		posted on 8/9/2014 at 4:41 AM
		</div>
		<div class="comment_text"><p>Does the CFC have a method called getArtList?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741093">78</a> by Mark
		posted on 8/9/2014 at 5:52 AM
		</div>
		<div class="comment_text"><p>No, I guess not. I picked up the example from browsing the web so I thought that the function name would equate to method, since.</p><p>test.cfc<br>&lt;cffunction name="get_all_users" access="remote" hint="Gets all users in the database"  &gt; <br>could be accessed from the browser by /test.cfc?method=get_all_users</p><p>that<br>artservice.cfc<br>remote array function getArtList() {<br>could be accessed from the browser by /artservice.cfc?method=getArtList</p><p>Apparently not, so not sure why the call from the index.html javascript in your example :<br>http://localhost/testingzone/phonegaptests/conversion/service/artservice.cfc?method=getArtList&amp;returnformat=json <br>and in my example<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fmobile%2Fservice%2Fartservice.cfc%3Fmethod%3DgetArtList%26returnformat%3Djson%3AkG5JMOS89LnYPhL6v2T9udiAmJk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/mobile/service/artservice.cfc?method=getArtList&amp;returnformat=json">http://www.mydomain.com/mob...</a></p><p>is generating a 500 server error and how I can test the cfc directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741090">79</a> by Raymond Camden
		posted on 8/9/2014 at 6:15 AM
		</div>
		<div class="comment_text"><p>Um, having some trouble parsing your comment. So... if the file is called artservice.cfc and the method in there is getallusers, then yes, you can hit it at your <a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%2FANY%3ARUHGszmcgORE9A5phKKfGQhomC8&amp;cuid=3321886" rel="nofollow noopener" title="domain.com/ANY">domain.com/ANY</a> PATH HERE/artservice.cfc?method=getallusers.</p><p>Maybe share your real URL so we can hit it and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741092">80</a> by Adrian
		posted on 9/3/2014 at 7:13 AM
		</div>
		<div class="comment_text"><p>Hi Raymond!</p><p>Thx for this interesting idea.</p><p>I have a question: Is there any way for a webpage to call a PhoneGap app?<br>I want to upload images taken with the device's (tablet, phone) camera.</p><p>Have you heard about any way to do that?</p><p>Have a great day!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741094">81</a> by Raymond Camden
		posted on 9/3/2014 at 3:13 PM
		</div>
		<div class="comment_text"><p>The closest I can think of would be intents with Android. This article seems to cover the iOS way: <a href="http://disq.us/url?url=http%3A%2F%2Fiosdevelopertips.com%2Fcocoa%2Flaunching-your-own-application-via-a-custom-url-scheme.html%3AVy3S8Q5ODcnVBcYGSiHRHV9FLV8&amp;cuid=3321886" rel="nofollow noopener" title="http://iosdevelopertips.com/cocoa/launching-your-own-application-via-a-custom-url-scheme.html">http://iosdevelopertips.com...</a></p><p>Give those a shot first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1709468666">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RaGHSSXa1T.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1709468666">82</a> by Anakin
		posted on 11/24/2014 at 8:50 AM
		</div>
		<div class="comment_text"><p>Is there a recommended way to store the external urls we hit through the Phonegap app. Do we use the config.xml for it ? I tried Google but didnt get any specific answers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1709646373">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1709646373">83</a> (In reply to <a href="#c_1709468666">#82</a>) by Raymond Camden
		posted on 11/24/2014 at 12:47 PM
		</div>
		<div class="comment_text"><p>Sorry, what external URLs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1769649030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1769649030">84</a> by Abha
		posted on 1/3/2015 at 7:32 AM
		</div>
		<div class="comment_text"><p>i am new in phonegap.<br>I can't import this in my eclipse ... what can i do .......???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1770083263">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1770083263">85</a> (In reply to <a href="#c_1769649030">#84</a>) by Raymond Camden
		posted on 1/3/2015 at 5:01 PM
		</div>
		<div class="comment_text"><p>You do not need to use Eclipse to do PhoneGap. It sounds like you need some more basic education about PG - I'd suggest the docs or picking up my book (still in early access): <a href="http://disq.us/url?url=http%3A%2F%2Fwww.manning.com%2Fcamden%2F%3A01VK9CQRF2sys62cSomSYZC3Nmk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.manning.com/camden/">http://www.manning.com/camden/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2448163814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2448163814">86</a> by abey kp
		posted on 1/9/2016 at 10:38 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, Thank you for the excellent tutorial. I was wondering if I can package just the landing index.html (lets make it a login page) page along with all css and js files into phonegap app. from there on, once the user logs in can we fetch data directly from the other files located on webserver and display inside the app?</p><p>How do I go about doing this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2448740566">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2448740566">87</a> (In reply to <a href="#c_2448163814">#86</a>) by Raymond Camden
		posted on 1/9/2016 at 7:09 PM
		</div>
		<div class="comment_text"><p>This is exactly what my post is talking about. Or am I misreading your question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2474663925">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_htYFhNbZUs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2474663925">88</a> by markus
		posted on 1/24/2016 at 5:58 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I just learnt about phonegap. Does it mean it will be far more easier to convert to phonegap if i have the existing web app that mostly written in front end js framework like knockout js or angular js? And is phonegap app identical to single page application?</p><p>Thank you your article really helps me understanding the phonegap.</p><p>-Markus</p></div>
	</div>
</div>
		
<div class="comment" id="c_2477564908">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2477564908">89</a> (In reply to <a href="#c_2474663925">#88</a>) by Raymond Camden
		posted on 1/25/2016 at 7:56 PM
		</div>
		<div class="comment_text"><p>"Does it mean it will be far more easier to convert to phonegap if i have the existing web app that mostly written in front end js framework like knockout js or angular js?" Yes - that would help.</p><p>"And is phonegap app identical to single page application?" Not necessarily. PhoneGap/Cordova describes how you convert your HTML/JS/CSS to a mobile app. It does NOT tell you how to write your code. So a PhoneGap/Cordova app *may* be a SPA or not. It is certainly recommended, but not required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2837762186">
	<div>
		<img src="https://disqus.com/api/users/avatars/petroslabropoulos.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2837762186">90</a> by Petros Labropoulos
		posted on 8/14/2016 at 11:16 PM
		</div>
		<div class="comment_text"><p>hi Raymond,</p><p>I am an electrical engineer and my thesis for my msc is about a smart home using arduino and all of this to be handled by an android smartphone. I have written the code which is actually an html including xml-ajax-javascript. The only problem is that i don't know how to convert all of those an android app. I can send you my code if you are willing to help.</p><p>Thanks in advance,</p><p>-Petros</p></div>
	</div>
</div>
		
<div class="comment" id="c_2838485737">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2838485737">91</a> (In reply to <a href="#c_2837762186">#90</a>) by Raymond Camden
		posted on 8/15/2016 at 1:15 PM
		</div>
		<div class="comment_text"><p>It sounds like you are asking how to build a hybrid app in general. If so, I'd go to <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%3AY4cKKNOab41bEqN98vrU1Mffg_M&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org">http://cordova.apache.org</a> and start learning about Apache Cordova. You can also buy my book - it is on sale from my About page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2859191737">
	<div>
		<img src="https://disqus.com/api/users/avatars/yelitzacintrn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2859191737">92</a> by Yelitza Cintrón
		posted on 8/25/2016 at 4:40 PM
		</div>
		<div class="comment_text"><p>Hi!! :) Can I use this to call my wordpress page? So I can controlled the content in my CMS without having to write anything in phone-gap, just this script to call the web?</p><p>Also, is this can be used as the page warp, I can add the Push Notification Page to it? For example, I send a push, and they all be on an app tabs, where I can see all notifications listed? Or PG just let you send notifications and you can't see a list of notifications you have received on your device on this particular app?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2859316718">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2859316718">93</a> (In reply to <a href="#c_2859191737">#92</a>) by Raymond Camden
		posted on 8/25/2016 at 5:47 PM
		</div>
		<div class="comment_text"><p>You can point to an external site, but if your phone goes offline than nothing will work.</p><p>I'm sorry - but your second paragraph makes no sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3017986949">
	<div>
		<img src="https://disqus.com/api/users/avatars/addaghalamallah.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3017986949">94</a> by adda ghalamallah
		posted on 11/24/2016 at 11:52 AM
		</div>
		<div class="comment_text"><p>Hi,<br>Is it possible to convert a JQuery + PHP + Mysql web site to an application without minimum rework ? <br>Tkx !</p></div>
	</div>
</div>
		
<div class="comment" id="c_3018327482">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3018327482">95</a> (In reply to <a href="#c_3017986949">#94</a>) by Raymond Camden
		posted on 11/24/2016 at 4:45 PM
		</div>
		<div class="comment_text"><p>Honestly it depends on your app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3264328192">
	<div>
		<img src="https://disqus.com/api/users/avatars/ridloputuismaya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3264328192">96</a> by Ridlo Putuismaya
		posted on 4/20/2017 at 4:19 AM
		</div>
		<div class="comment_text"><p>can I build if I just use index.php ? not using index.html</p></div>
	</div>
</div>
		
<div class="comment" id="c_3264707734">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3264707734">97</a> (In reply to <a href="#c_3264328192">#96</a>) by Raymond Camden
		posted on 4/20/2017 at 12:24 PM
		</div>
		<div class="comment_text"><p>I'm not sure what you mean. In this article, I'm discussing how to convert a dynamic site to one for PG - the technology is ColdFusion, but that is secondary to the general guidelines. It would apply to Node, PHP, .Net, etc. If you're asking if you can follow the same guide for a PHP site, well then sure, and if anything made you think you couldn't, let me know and I'll clear it up in the article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3307053191">
	<div>
		<img src="https://disqus.com/api/users/avatars/iwingmusic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3307053191">98</a> by IwingMusic
		posted on 5/15/2017 at 5:52 PM
		</div>
		<div class="comment_text"><p>i have a wordpress self hosted website, can you write tutorial for it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3307056831">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3307056831">99</a> (In reply to <a href="#c_3307053191">#98</a>) by Raymond Camden
		posted on 5/15/2017 at 5:54 PM
		</div>
		<div class="comment_text"><p>Not really. I explained the process in general here. It should get you started in the right direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3308377265">
	<div>
		<img src="https://disqus.com/api/users/avatars/iwingmusic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3308377265">100</a> (In reply to <a href="#c_3307056831">#99</a>) by IwingMusic
		posted on 5/16/2017 at 1:01 PM
		</div>
		<div class="comment_text"><p>ok thx. i just found a wp plugin for phonegap called appkit. i successfully built my app. <a href="https://uploads.disquscdn.com/images/b14ebff2a2fecfb5cc061d4c2ff4e3e8a18a54c7b23571ea9da73ec4a13d681b.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/b14ebff2a2fecfb5cc061d4c2ff4e3e8a18a54c7b23571ea9da73ec4a13d681b.png">https://uploads.disquscdn.c...</a> </p></div>
	</div>
</div>
		
<div class="comment" id="c_3308461461">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3308461461">101</a> (In reply to <a href="#c_3308377265">#100</a>) by Raymond Camden
		posted on 5/16/2017 at 1:58 PM
		</div>
		<div class="comment_text"><p>Grats. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3322353634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3322353634">102</a> by Manny
		posted on 5/24/2017 at 1:57 PM
		</div>
		<div class="comment_text"><p>Download attachment link broke!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324006208">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324006208">103</a> (In reply to <a href="#c_3322353634">#102</a>) by Raymond Camden
		posted on 5/25/2017 at 1:01 PM
		</div>
		<div class="comment_text"><p>Link fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324172696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324172696">104</a> by Manny
		posted on 5/25/2017 at 2:50 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>Thanks for the link fix.</p><p>Just now starting to work with the phonegap. I have tried to play with your code but am stumped.  I feel that its a brain cramp but the data from the cfc is returned as</p><p>{"COLUMNS":["FIELD_MST_MLS_NUMBER"],"DATA":[[95938],[101048],[115971],[109493],[109860]]}</p><p>I can see the columns console.log(res.COLUMNS.length) ; returns 1<br>console.log(res.COLUMNS) ; returns ["FIELD_MST_MLS_NUMBER"]<br>For the life of me I cannot get to the DATA.<br>Manny</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324316837">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324316837">105</a> (In reply to <a href="#c_3324172696">#104</a>) by Raymond Camden
		posted on 5/25/2017 at 4:09 PM
		</div>
		<div class="comment_text"><p>It is under res, so res.DATA. The result is an array of arrays, where the item in [0][0] represents the first row, and first col, which for you is FIELD_MST_MLS_NUMBER.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3472954135">
	<div>
		<img src="https://disqus.com/api/users/avatars/manking1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3472954135">106</a> (In reply to <a href="#c_3324316837">#105</a>) by nottakingthisanymore
		posted on 8/17/2017 at 4:23 PM
		</div>
		<div class="comment_text"><p>I did not give you credit back a few months ago.  Thanks that work for me!!<br>Manny</p></div>
	</div>
</div>
		
<div class="comment" id="c_3472958910">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3472958910">107</a> (In reply to <a href="#c_3472954135">#106</a>) by Raymond Camden
		posted on 8/17/2017 at 4:26 PM
		</div>
		<div class="comment_text"><p>No worries - glad it helped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3566397082">
	<div>
		<img src="https://disqus.com/api/users/avatars/jimmy_medrano.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3566397082">108</a> by Jimmy Medrano
		posted on 10/13/2017 at 11:29 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have a web application built in C#, implementing ASP.NET. The front-end consists of .NET Razor (.cshtml extension) instead of regular HTML and javascript. I am curious as to how to convert such an application to mobile with PhoneGap. Will I need to completely overhaul the Razor Views into plain HTML and then re-write the logic with javascript? I appreciate your article and any clarification you may provide.</p><p>Thank you,</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_3567079135">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3567079135">109</a> (In reply to <a href="#c_3566397082">#108</a>) by Raymond Camden
		posted on 10/14/2017 at 2:43 PM
		</div>
		<div class="comment_text"><p>Without knowing what Razor Views are I'd have to say yes. At the end, they have to present "normal" HTML/JS to the browser, so *that* is what you have to work with, not Razor.</p></div>
	</div>
</div>
		