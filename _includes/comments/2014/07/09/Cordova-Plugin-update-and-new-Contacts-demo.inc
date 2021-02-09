
<div class="comment" id="c_1714083334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083334">1</a> by Justin Noel
		posted on 7/10/2014 at 3:45 AM
		</div>
		<div class="comment_text"><p>I was very excited to see this.  It's so nice not to have to display a contact list in the app itself.  Unfortunately, this seems really buggy to me.</p><p>If you select a contact that doesn't have email or mobile number, the app spits out this exception:</p><p>2014-07-09 18:41:08.441 HelloCordova[5180:60b] Exception - Name: NSRangeException Reason: *** -[__NSArrayM objectAtIndex:]: index 0 beyond bounds for empty array</p><p>Also got output like :</p><p>2014-07-09 18:39:06.914 HelloCordova[5180:60b] Exception - Name: NSRangeException Reason: *** -[__NSArrayM objectAtIndex:]: index 0 beyond bounds for empty array<br>AB: Could not compile statement for query (ABCCopyArrayOfAllInstancesOfClassInSourceMatchingProperties):<br>SELECT ROWID, Name, ExternalIdentifier, Type, ConstraintsPath, ExternalModificationTag, ExternalSyncTag, AccountID, Enabled, SyncData, MeIdentifier, Capabilities FROM ABStore WHERE Enabled = ?;<br>AB: Could not compile statement for query (ABCCopyArrayOfAllInstancesOfClassInSourceMatchingProperties):<br>SELECT ROWID, Name, ExternalIdentifier, Type, ConstraintsPath, ExternalModificationTag, ExternalSyncTag, AccountID, Enabled, SyncData, MeIdentifier, Capabilities FROM ABStore WHERE Enabled = ?;</p><p>I also had problems with an iPhone 4S (ios 6) even running with this plugin installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083332">2</a> by Raymond Camden
		posted on 7/10/2014 at 3:55 AM
		</div>
		<div class="comment_text"><p>Can you file a bug report for it? Sounds like an easy thing to fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083333">3</a> by Justin Noel
		posted on 7/17/2014 at 8:25 PM
		</div>
		<div class="comment_text"><p>Oops.  I had other issues with my own code sample.  The problem doesn't really exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083339">4</a> by miche.atucha
		posted on 7/23/2014 at 9:17 PM
		</div>
		<div class="comment_text"><p>i used it in an ionic app, and gets an alert when try to use " navigator.contacts.pickContact", the alert contains: "index.html", "null", nothing else, not the confirm popup,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083338">5</a> by Raymond Camden
		posted on 7/23/2014 at 9:27 PM
		</div>
		<div class="comment_text"><p>Ensure you have the latest version of the plugin. Outside of that, I don't know. If you send me a zip of your www, I can take a quick look. I only make that offer because I love Ionic and want to see more examples. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083335">6</a> by miche.atucha
		posted on 7/23/2014 at 10:55 PM
		</div>
		<div class="comment_text"><p>the problem seems to be that is not loading the Contacts plugin, i place an alert on app.js in the onready event: alert(navigator.contacts), and is displaying undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083341">7</a> by Raymond Camden
		posted on 7/24/2014 at 5:35 AM
		</div>
		<div class="comment_text"><p>Did you add the plugin? Remember you have to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2127936606">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CbvjigtBUs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2127936606">8</a> by GNR
		posted on 7/10/2015 at 5:22 AM
		</div>
		<div class="comment_text"><p>how to get all phone contact? means  onload to get all contact and write in html page.. can you help me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2128385860">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2128385860">9</a> (In reply to <a href="#c_2127936606">#8</a>) by Raymond Camden
		posted on 7/10/2015 at 12:33 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F12%2F23%2Fcordova-demo-viewing-all-contacts%3Ay67jgqciGzXAGwPCGaV6Hw2Z7nw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/12/23/cordova-demo-viewing-all-contacts">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2275055037">
	<div>
		<img src="https://disqus.com/api/users/avatars/christopherbastiancampossov.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2275055037">10</a> by Christopher Bastian Campos Sov
		posted on 9/26/2015 at 10:34 AM
		</div>
		<div class="comment_text"><p>hello, how i can add a add contact function in the header bar of the pickContact (native ui), HELP!!.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2275055328">
	<div>
		<img src="https://disqus.com/api/users/avatars/christopherbastiancampossov.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2275055328">11</a> by Christopher Bastian Campos Sov
		posted on 9/26/2015 at 10:35 AM
		</div>
		<div class="comment_text"><p>hello, how i can add a add contact function in the header bar of the pickContact (native ui), HELP!!!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2275250091">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2275250091">12</a> (In reply to <a href="#c_2275055037">#10</a>) by Raymond Camden
		posted on 9/26/2015 at 2:11 PM
		</div>
		<div class="comment_text"><p>As far as I know, you can't modify the UI for the contact picker. You can, of course, add a contact via the API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2276476596">
	<div>
		<img src="https://disqus.com/api/users/avatars/christopherbastiancampossov.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2276476596">13</a> by Christopher Bastian Campos Sov
		posted on 9/27/2015 at 11:29 AM
		</div>
		<div class="comment_text"><p>hello, how i can add a add contact function in the header bar of the pickContact (native ui), HELP!!.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2276478190">
	<div>
		<img src="https://disqus.com/api/users/avatars/christopherbastiancampossov.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2276478190">14</a> (In reply to <a href="#c_2275250091">#12</a>) by Christopher Bastian Campos Sov
		posted on 9/27/2015 at 11:31 AM
		</div>
		<div class="comment_text"><p>i try modify the contact picker via contact.js, but not really working..., how whatsapp can use that ui?, thanks!!.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2276480397">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2276480397">15</a> (In reply to <a href="#c_2276478190">#14</a>) by Raymond Camden
		posted on 9/27/2015 at 11:34 AM
		</div>
		<div class="comment_text"><p>Sorry I don't know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2357841797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2357841797">16</a> by sam
		posted on 11/13/2015 at 3:07 PM
		</div>
		<div class="comment_text"><p>hello ,<br>thanks for the help. I finally saw contact picker working....<br>Thank you so much</p></div>
	</div>
</div>
		
<div class="comment" id="c_2394471711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2394471711">17</a> by Jafarali Maknojiya
		posted on 12/5/2015 at 10:53 AM
		</div>
		<div class="comment_text"><p>it is possible to select multiple contact in pickcontact. that meas when i click on contact it will show all pickcontact with chekbox</p></div>
	</div>
</div>
		
<div class="comment" id="c_2394561332">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2394561332">18</a> (In reply to <a href="#c_2394471711">#17</a>) by Raymond Camden
		posted on 12/5/2015 at 1:00 PM
		</div>
		<div class="comment_text"><p>Did you go to the docs and check?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643365285">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CC6Wg4D80k.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643365285">19</a> by Subin Babu
		posted on 4/26/2016 at 11:32 AM
		</div>
		<div class="comment_text"><p>How to add a contact with name and number in single button click?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643468485">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643468485">20</a> (In reply to <a href="#c_2643365285">#19</a>) by Raymond Camden
		posted on 4/26/2016 at 1:00 PM
		</div>
		<div class="comment_text"><p>Please see the docs. It shows you how to add a contact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2833625604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2833625604">21</a> by Abhinanda
		posted on 8/12/2016 at 9:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>When I am trying to test the contacts plugin in my android then it is not working<br>getting error on onsucessgetcontacts.</p><p>Uncaught typeError : cannot read property "0" of null.</p><p>Thanks <br>Abhinanda</p></div>
	</div>
</div>
		
<div class="comment" id="c_2833893634">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2833893634">22</a> (In reply to <a href="#c_2833625604">#21</a>) by Raymond Camden
		posted on 8/12/2016 at 1:51 PM
		</div>
		<div class="comment_text"><p>What line?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2994630279">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kCFZsAbedv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2994630279">23</a> by Vince
		posted on 11/10/2016 at 6:36 AM
		</div>
		<div class="comment_text"><p>Hi guys, I'm always getting an error that is stating the navigator.contacts object is undefined.</p><p>I have installed the plugin, included ngCordova and $cordovaContacts in my controller.</p><p>The navigator object just doesn't seem to have the contacts object.</p><p>I am just trying to simply retrieve all contacts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2994899627">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2994899627">24</a> (In reply to <a href="#c_2994630279">#23</a>) by Raymond Camden
		posted on 11/10/2016 at 12:27 PM
		</div>
		<div class="comment_text"><p>Are you waiting for deviceready to fire?<br>What does "cordova plugins ls" tell you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3045652275">
	<div>
		<img src="https://disqus.com/api/users/avatars/yudhidarmawan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3045652275">25</a> by Stomata
		posted on 12/10/2016 at 4:37 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I'm using lolipop 5.1.1. I'm filtering with '*' but most data are null, only id and raw id are available.</p><p>I'm also testing in emulator and its not null like in real device.  Is this a bug? or need special permission?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3047236023">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3047236023">26</a> (In reply to <a href="#c_3045652275">#25</a>) by Raymond Camden
		posted on 12/11/2016 at 7:49 PM
		</div>
		<div class="comment_text"><p>Not sure. If you can document this enough with code, I'd file a bug report on the plugin repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3231329054">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pNipfSOrLy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3231329054">27</a> by Ravi Gupta
		posted on 3/30/2017 at 11:52 AM
		</div>
		<div class="comment_text"><p>Hi</p><p>How to select multiple  contact at a time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3231391835">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3231391835">28</a> (In reply to <a href="#c_3231329054">#27</a>) by Raymond Camden
		posted on 3/30/2017 at 12:47 PM
		</div>
		<div class="comment_text"><p>pickContact only allows for one selection at a time. You can use the find API to get all contacts and build your own UI to browse/select.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3873392038">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_UoE0kCFfwH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3873392038">29</a> (In reply to <a href="#c_3231391835">#28</a>) by Yesha Shah
		posted on 4/26/2018 at 9:13 AM
		</div>
		<div class="comment_text"><p>Hello, have you worked on that so far? I am also stuck on the same thing, just need your help  if you can guide me on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3874259627">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3874259627">30</a> (In reply to <a href="#c_3873392038">#29</a>) by Raymond Camden
		posted on 4/26/2018 at 7:08 PM
		</div>
		<div class="comment_text"><p>In what aspect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3875008469">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_UoE0kCFfwH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3875008469">31</a> (In reply to <a href="#c_3874259627">#30</a>) by Yesha Shah
		posted on 4/27/2018 at 7:01 AM
		</div>
		<div class="comment_text"><p>I want to select multiple contacts from the contacts. So , I wanted to know how can I achieve this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3875287888">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3875287888">32</a> (In reply to <a href="#c_3875008469">#31</a>) by Raymond Camden
		posted on 4/27/2018 at 1:11 PM
		</div>
		<div class="comment_text"><p>I described how to do that already. You get all the contact. You then render them to the user (using JavaScript) and that's it.</p></div>
	</div>
</div>
		