
<div class="comment" id="c_1713715419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715419">1</a> by James Allen
		posted on 5/14/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>Another good reason - aside from the object instantiation bug in older versions - to keep Java 6 as up to date as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715418">2</a> by Joshua Siok
		posted on 5/14/2009 at 7:40 PM
		</div>
		<div class="comment_text"><p>Great tip Ray.  I've had problems recently with cfimage and CMYK jpg's also seeing performance hits when resizing.  I've also had other buggy behavior with CFImage where I can't load an image (using action="read") into a local variable because CF thinks "it's not a supported format". But when I i do action="resize" and use the same image as source, I don't get any errors.  So maybe this problem will be solved as well.  I'll be sure to get Java up-to-date ASAP!!  Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715412">3</a> by Daniel Short
		posted on 5/14/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>I've had these issue quite a bit. I'll be trying an update to _13 this evening. Hopefully the upgrade will get rid of these:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dansshorts.com%2Fpost%2Fcoldfusion-image-processing-and-memory-spikes%3AAKNzZ76F3xIN6sRkBVjoxNuxDyI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dansshorts.com/post/coldfusion-image-processing-and-memory-spikes">http://www.dansshorts.com/p...</a></p><p>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715413">4</a> by Simon
		posted on 5/14/2009 at 8:04 PM
		</div>
		<div class="comment_text"><p>Can anyone recommend the safest way to update the JVM on a windows machine? I'm nervous that I'll have problem when restarting the service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715414">5</a> by James Allen
		posted on 5/14/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>@Simon,<br>No need to worry. The new JVM will install in a new directory so you will be able to switch back to the old one quickly if you get re-start problems. This is how I did the upgrade on Server 2003.</p><p>1. Install the latest JVM and note down the path. On my system the path is (I'm running v12):<br>C:/Program Files/Java/jdk1.6.0_12</p><p>2. Edit the jvm.config file (on my multiserver installed version of CF8, this is in C:\JRun4\bin</p><p>3. Find the 'java.home' line and comment out. Then add a new line for the latest JVM - mine looks like this:</p><p>#java.home=C:/JRun4/jre<br>java.home=C:/Program Files/Java/jdk1.6.0_12</p><p>4. Restart the JRun or Coldfusion service.</p><p>If there are any problems you'll get an error and can then simply uncomment the original java.home line and remove the new one.</p><p>The only problem I had was installing the JDK instead of the JVM.. :)</p><p>Give it a go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715403">6</a> by Sean Coyne
		posted on 5/14/2009 at 9:07 PM
		</div>
		<div class="comment_text"><p>@James</p><p>The new java home path needs to point to the JRE not the JDK so from your example it would be</p><p>C:\Program Files\Java\jdk1.6.0_12\jre<br>not<br>C:\Program Files\Java\jdk1.6.0_12</p><p>other than that it should work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715417">7</a> by Raymond Camden
		posted on 5/14/2009 at 9:13 PM
		</div>
		<div class="comment_text"><p>@SeanCoyne: I've made that exact same mistake in the past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715404">8</a> by Raymond Camden
		posted on 5/14/2009 at 9:21 PM
		</div>
		<div class="comment_text"><p>I should add - I reloaded the page a few times and the 800ms went to do around 400. So it got even quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715406">9</a> by Sean Coyne
		posted on 5/14/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>@ray</p><p>jedi make mistakes?!! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715405">10</a> by Raymond Camden
		posted on 5/14/2009 at 9:24 PM
		</div>
		<div class="comment_text"><p>Most of my blog entries are based on my mistakes. Folks have this mistaken view that I'm smart. I'm not. I just blog _everything_, which includes all my mistakes. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715407">11</a> by James Allen
		posted on 5/14/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>@Sean,<br>That path is exactly what I am using on my install and it's working fine - I took it from my jvm.config.</p><p>Wonder if my install is slightly different. Strange.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715410">12</a> by Elliott Sprehn
		posted on 5/15/2009 at 5:00 PM
		</div>
		<div class="comment_text"><p>Where do you see Java 1.6.0_13 on the Apple website?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.apple.com%2Fjava%2F%3A0j_XSZ4yttkB-qtPE7Leit-G-S8&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.apple.com/java/">http://developer.apple.com/...</a></p><p>The newest update on that page is for 1.6.0_07.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715409">13</a> by Rob
		posted on 5/15/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>@Elliot - I don't even see that. Latest I can find is this: "Java for Mac OS X 10.5, Update 1 adds Java SE 6 version 1.6.0_05 to 64-bit Intel Macs."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715411">14</a> by Raymond Camden
		posted on 5/15/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>Not sure what to say, and I don't have the URL with me, but I do remember them saying it wasn't fully tested. So maybe it is a beta version. It's working finr for me so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715416">15</a> by Elliott Sprehn
		posted on 5/15/2009 at 6:28 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Are you sure it's 1.6.0_13? I don't think that exists for OS X.</p><p>Can you give us the java -version output?</p><p>I logged into my ADC account, and it's not even there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715420">16</a> by Elliott Sprehn
		posted on 5/15/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>@Rob</p><p>That's because they forgot to update the java listing page.</p><p>If you click the link in my previous post and look at the middle of the page there's info about "Java for Mac OS X 10.5 Update 2".</p><p>Here's the KB article:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsupport.apple.com%2Fkb%2FHT2733%3AG9Jo49psFR8pPK-fwoUiPSMKwpk&amp;cuid=3321886" rel="nofollow noopener" title="http://support.apple.com/kb/HT2733">http://support.apple.com/kb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715422">17</a> by Raymond Camden
		posted on 5/15/2009 at 6:32 PM
		</div>
		<div class="comment_text"><p>java version "1.6.0_13"<br>Java(TM) SE Runtime Environment (build 1.6.0_13-b03-196)<br>Java HotSpot(TM) 64-Bit Server VM (build 11.3-b02-77, mixed mode)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715424">18</a> by Elliott Sprehn
		posted on 5/15/2009 at 6:40 PM
		</div>
		<div class="comment_text"><p>Ah, I found it.</p><p>The only way to download this is to login to <a href="http://disq.us/url?url=http%3A%2F%2Fconnect.apple.com%2F%3A1OJQjthocNx9Fx1fTqqcLikTwl0&amp;cuid=3321886" rel="nofollow noopener" title="http://connect.apple.com/">http://connect.apple.com/</a> and then look at the  Java downloads. The accounts are free in case anyone wondered.</p><p>It's a Developer Preview of Java for OS X and not officially supported or distributed yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715427">19</a> by Raymond Camden
		posted on 5/15/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>Thanks for digging it up Elliott.</p><p>FYI to folks - I wouldn't normally do an unofficial JRE but as this is a developer machine, I didn't care.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715425">20</a> by Elliott Sprehn
		posted on 5/15/2009 at 7:12 PM
		</div>
		<div class="comment_text"><p>I can't even get CF to start with this update installed.</p><p>05/15 11:22:12 error Could not pre-load servlet: ColdFusionStartUpServlet<br>[1]java.lang.UnsupportedClassVersionError: Bad version number in .class file</p><p>Followed by lots of NPEs as a result of that I think.</p><p>Are you sure CF is starting with Java 1.6 Ray? After installing that update if you don't change the symlink for /System/Library/Frameworks/JavaVM.framework/Versions/CurrentJDK to point to 1.6 CF will start with 1.5 instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715426">21</a> by Raymond Camden
		posted on 5/15/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>Elliott, I wonder if it is the version of CF I'm using. I'm using, um, a "special" version. One you have as well. I'm not using it on a stock 801.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715428">22</a> by James Allen
		posted on 5/15/2009 at 7:15 PM
		</div>
		<div class="comment_text"><p>@Ray,<br>Ooooh look at you.. Mr Fancy 'pre-release' Pants.. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715430">23</a> by Elliott Sprehn
		posted on 5/15/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>I'd be weary about this blog post then. Anyone who doesn't have that, um, "special" version will break their entire install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715431">24</a> by Raymond Camden
		posted on 5/15/2009 at 7:17 PM
		</div>
		<div class="comment_text"><p>Let me try my stock 801 though. Just to be sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715436">25</a> by Raymond Camden
		posted on 5/15/2009 at 7:20 PM
		</div>
		<div class="comment_text"><p>Elliott, it's working just fine in my 801: 8,0,1,195765   That isn't "stock" though, that's 801 with the last CHF I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715435">26</a> by Elliott Sprehn
		posted on 5/15/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Hmm, it seems that the usual trick of changing that symlink doesn't work anymore.</p><p>If all you do is change CurrentJDK CF will start with 1.5, but load lots of 1.6 code from the framework which is very odd, and also broken.</p><p>Once I changed 1.6 to be the preferred JVM in the Java <a href="http://disq.us/url?url=http%3A%2F%2FPreferences.app%3AGkkf3sPoykiV3mseA3weUt0BEzE&amp;cuid=3321886" rel="nofollow noopener" title="Preferences.app">Preferences.app</a> it all worked fine. How odd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715432">27</a> by Raymond Camden
		posted on 5/15/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>Ah, that's how I did it. Don't use links very often so it didn't even occur to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715433">28</a> by Elliott Sprehn
		posted on 5/15/2009 at 7:38 PM
		</div>
		<div class="comment_text"><p>Yeah. That didn't work way back on 10.4 to make CF use 1.5 as the JVM instead of 1.4 so I got in the habit.</p><p>Anyway, thanks for the tip about the java update, and sorry for the comment thread hijack!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715437">29</a> by James Allen
		posted on 5/15/2009 at 7:44 PM
		</div>
		<div class="comment_text"><p>Just to add to the path I specified above, even though the path in my jvm.config is set to:</p><p>C:/Program Files/Java/jdk1.6.0_12</p><p>Coldfusion administrator reports this path is being used:</p><p>C:\Program Files\Java\jdk1.6.0_12\jre</p><p>So at least on Server 2003 specifying the path *without* the JRE works fine.</p><p>I am intending to video blog the upgrade process soon to help anyone who is a little uncertain on how to perform it on Server 2003.<br>Will add comment when done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715439">30</a> by tony petruzzi
		posted on 5/16/2009 at 5:20 AM
		</div>
		<div class="comment_text"><p>i don't know why people don't check at least once every couple of months for the latest java version and install it. it's not like you can't roll back to an earlier version if things go south. upgrading your jvm should be THE first thing you do when you have problems or weird issues with cf.</p><p>on the flip side. after you've updated your jvm you can use javara to remove the previous version and free up some space.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fraproducts.org%2Fjavara.html%3Ak0lQPeQH5bIqgnv6goiIdSKDbmY&amp;cuid=3321886" rel="nofollow noopener" title="http://raproducts.org/javara.html">http://raproducts.org/javar...</a></p></div>
	</div>
</div>
		