
<div class="comment" id="c_1713714958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714958">1</a> by Edward Beckett
		posted on 4/27/2009 at 10:29 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fjavase%2F6%2Fdocs%2Fapi%2Fjava%2Futil%2Fregex%2FPattern.html%3A7QJHUpnEq-kevJGoF9X2Jh5f294&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/javase/6/docs/api/java/util/regex/Pattern.html">http://java.sun.com/javase/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714970">2</a> by Christopher Ryan
		posted on 4/27/2009 at 10:40 PM
		</div>
		<div class="comment_text"><p>I'm not a Java person, but was impressed with the way java.util.TimeZone works. ColdFusion's built-in getTimeZoneInfo is essentially a wrapper around this, providing the same information. But you can use java.util.TimeZone paired with java.util.Locale and icu4j for a consistent way to format, sort and translate date/time/time-zone values into different languages and character sets.</p><p>I keep my CF servers on UTC time and consistently store date/time data in UTC time. Then users pick their time-zone locale (like 'America/Denver' or 'Navajo'), and CF code using those functions adjusts dates/times shown on web pages to their locale -- automatically detecting if Daylight Savings Time is in effect and applying it, no matter where they are in the world.</p><p>I really like the ability to pick-and-choose Java classes that are useful, and have CF code pull everything together. I'm curious what other Java gems CF developers have found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714979">3</a> by Adrian J. Moreno
		posted on 4/27/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>java.io.BufferedReader for reading large text files instead of CFFILE. Thankfully this has been abstracted by CFLOOP using the FILE attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714972">4</a> by Barney
		posted on 4/27/2009 at 11:23 PM
		</div>
		<div class="comment_text"><p>I'm with you on StringBuffer.  Quite handy.  Also use StringWriter and PrintWriter a lot, where I want more control than I get with StringBuffer (i.e. .print() vs .println() rather than only getting .append()).</p><p>java.util.regex.Pattern and Matcher are also nice to have.  CF's inbuilt regular expression support is pretty good, so I don't use them very often, but very nice to have in a bind.</p><p>My all-time highest use, however, are undoubtedly the collection classes (java.util.Xxx).  CF makes dealing with collections a lot harder than it needs to be, so I do quite a bit of direct [Array]List and [Hash]Map stuff, along with the odd [Hash]Set when it's appropriate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714982">5</a> by Chris Peters
		posted on 4/27/2009 at 11:25 PM
		</div>
		<div class="comment_text"><p>Before &lt;cfzip&gt;, I had used a Java class to dynamically package up files and zip them up. I can't remember if it was a native Java class or if I used a 3rd party class. Either way, it was pretty cool. B-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714963">6</a> by Gabriel
		posted on 4/27/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>I use the following when writing and reading delimited text data.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjavacsv.sourceforge.net%2F%3A6NV1qdFwqhOMQtTTgpoU-68_5OU&amp;cuid=3321886" rel="nofollow noopener" title="http://javacsv.sourceforge.net/">http://javacsv.sourceforge....</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.csvreader.com%2Fjava_csv.php%3AUVJOaaqEZPzs-sK-kevR9XfWQ2Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.csvreader.com/java_csv.php">http://www.csvreader.com/ja...</a></p><p>The delimiter can be set. It's not just for comma-delimited.</p><p>- Gabriel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714965">7</a> by tony petruzzi
		posted on 4/28/2009 at 12:27 AM
		</div>
		<div class="comment_text"><p>com.lowagie.text or iText</p><p>i know it's package and not a class, but i have a love/hate relationship with it. love it for the fact that you can do ALMOST anything to a pdf that cfdocument can't. hate it for the fact that the package is so big it's nightmare reading through the documentation to figure out how to do something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714967">8</a> by Tim N
		posted on 4/28/2009 at 1:20 AM
		</div>
		<div class="comment_text"><p>org.h2.tools.Csv - it's a csv file reader. H2 also has a "console" servlet that allows access to any jdbc database.</p><p>Also, as of JDK 5 StringBuilder is preferred to StringBuffer in most cases (non-multi-threaded situations).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714974">9</a> by sam Farmer
		posted on 4/28/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>What I learnt from Java class was to use ColdFusion.</p><p>Oh, wait, I see what you asked for...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714973">10</a> by Terrence Ryan
		posted on 4/28/2009 at 2:47 AM
		</div>
		<div class="comment_text"><p>createObject("java", "java.lang.System").getProperty("line.separator")</p><p>My personal favorite bit of Java in CF. Really good for code generation.</p><p>I've been using it alot for some reason lately ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714976">11</a> by shakti
		posted on 4/28/2009 at 3:07 AM
		</div>
		<div class="comment_text"><p>has to be "java.io.File" . much faster than using cfdirectory to create and handle folders and files. i also found them easier to use than DOM objects....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714975">12</a> by goyuix
		posted on 4/28/2009 at 3:15 AM
		</div>
		<div class="comment_text"><p>I am going to have to second java.util.regex.Pattern and Matcher. The ability to extracts groups and other useful tidbits that you can't do through the standard CF functions has been great for someone who ends up parsing more text than any person should ever have to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714978">13</a> by Henry Ho
		posted on 4/28/2009 at 3:25 AM
		</div>
		<div class="comment_text"><p>Start using StringBuilder!  It is better than StringBuffer... but make sure you Var'ed your variables. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714977">14</a> by Patrick
		posted on 4/28/2009 at 3:28 AM
		</div>
		<div class="comment_text"><p>Favorite is said to much, but i like trilead-ssh2. I've CF8 running on a RedHat Box and use it to perfrom some terminal work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714981">15</a> by PaulH
		posted on 4/28/2009 at 5:11 AM
		</div>
		<div class="comment_text"><p>it would have to be the timezone &amp; simpleTimezone classes. because of tz hell it's kind of a love/hate thing though. if there was a 2nd choice it would have to be iText.</p><p>@tony get bruno's "itext in action", the PDF version is only $30. if you use iText for anything complicated, best investment you can make: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.manning.com%2Flowagie%2F%3AlQwva_yzxuGUbae9rny9_EBAYIY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.manning.com/lowagie/">http://www.manning.com/lowa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714980">16</a> by Mark Mandel
		posted on 4/28/2009 at 5:37 AM
		</div>
		<div class="comment_text"><p>java.lang.ThreadLocal<br><a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fjavase%2F6%2Fdocs%2Fapi%2Fjava%2Flang%2FThreadLocal.html%3AZXXjgslk_GfV66JODY3z4DM5J7s&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/javase/6/docs/api/java/lang/ThreadLocal.html">http://java.sun.com/javase/...</a></p><p>For storing variables you only want to be accessed by that given thread.</p><p>I use this allll the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714983">17</a> by Aaron Longnion
		posted on 4/28/2009 at 11:05 AM
		</div>
		<div class="comment_text"><p>for getting current CF/JRun instance:</p><p>&lt;cfset Variables.JRunObject = CreateObject("Java", "jrunx.kernel.JRun")&gt;<br>&lt;cfset Variables.InstanceName = Variables.JRunObject.getServerName()&gt;</p><p>and for getting current host name:</p><p>&lt;cfset Server.hostName = CreateObject("java", "java.net.InetAddress").localhost.getHostName() /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714990">18</a> by Elliott Sprehn
		posted on 4/28/2009 at 12:34 PM
		</div>
		<div class="comment_text"><p>Ack! Everyone is hung up on this StringBuilder/Buffer thing.</p><p>In CF it's actually faster to use arrayNew(1) and arrayAppend() and a final arrayToList() at the end. Even Fusebox has a CFC to "fake" a StringBuilder because someone thought it was faster, but seriously, stop it, just use an array.</p><p>Your code is also portable between every runtime (even that .NET one people don't talk about anymore).</p><p>As for some Java classes, the java.lang.reflect.* package is quite useful, but for actual development I'd say java.math.BigInteger. There's no way to do arbitrary precision integer math in CF. precisionEvaluate() always uses BigDecimal, which will throw nasty NaN or Infinity exceptions when doing big exp/mod calculations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714988">19</a> by Ben Nadel
		posted on 4/28/2009 at 3:36 PM
		</div>
		<div class="comment_text"><p>Word up to the regex Pattern and Matcher! They rock the party that rocks the body.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714994">20</a> by Raymond Camden
		posted on 4/28/2009 at 3:45 PM
		</div>
		<div class="comment_text"><p>@Elliott: Maybe they are "hung up" on it because they noticed a dramatic speed increase. :) It's not like folks are using it because it is _slower_. Thanks for sharing the array idea though. If it is indeed faster it would be simpler to use that.</p><p>@Mark: Can you add a bit? I thought vars created within cfthread were already blackboxed?</p><p>@shakti: Have you tested file ops in CF8? They were significantly improved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714987">21</a> by Ben
		posted on 4/28/2009 at 5:15 PM
		</div>
		<div class="comment_text"><p>Thanks for this topic -- I don't take advantage of this as much as I could. (subscribing to comments)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714991">22</a> by Jason Fisher
		posted on 4/28/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>Haven't had to touch it in a few years (because it just *works*), but implementing javamail to get full, powerful IMAP mail support in CF is solid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714989">23</a> by Craig Benner
		posted on 4/28/2009 at 6:45 PM
		</div>
		<div class="comment_text"><p>I use many mentioned above, especially StringBuffer... that one was a life saver.  But creating my own custom validation exception has been the biggest benefit.  Instead of a method throwing an error on the first validation error it finds, i add each validation issue to an exception bean.</p><p>.addValidationError("fieldname allows blank","validation error number","Validation message")</p><p>then at the end of the method I throw the error</p><p>&lt;cfif eValidate.hasValidationError()&gt;<br>  &lt;cfthrow object="#eValidate#"&gt;<br>&lt;/cfif&gt;</p><p>the calling app can capture the validation exceptions now</p><p>try {<br>     oFpsGTW.validateForPassword(oFpsDTO);<br>} catch (uao.exceptions.Validation e) {<br>     //return to form with messages<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714995">24</a> by Raymond Camden
		posted on 4/28/2009 at 6:49 PM
		</div>
		<div class="comment_text"><p>I want to make sure I'm reading you right - you created your own Java exceptions to use with your form handling?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714993">25</a> by Craig Benner
		posted on 4/28/2009 at 6:57 PM
		</div>
		<div class="comment_text"><p>Yes and No.  I created ONE java exception (not plural) to handle holding all the validation exceptions during handling of the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714996">26</a> by Mark Mandel
		posted on 4/29/2009 at 4:07 AM
		</div>
		<div class="comment_text"><p>@Ray - ThreadLocal has nothing specifically tying it to &lt;cfthread&gt;, I'm not sure where you drew that conclusion from.</p><p>To c/p paste from the Javadoc:<br>This class provides thread-local variables. These variables differ from their normal counterparts in that each thread that accesses one (via its get or set method) has its own, independently initialized copy of the variable.</p><p>Think of it like a request scope variable, but encapsulated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714997">27</a> by shakti
		posted on 4/29/2009 at 5:10 AM
		</div>
		<div class="comment_text"><p>@Ray, as far as i know i cant get cffile to delete/save/create files accross linked server, i was using DOM objects before but found using "java.io.file" much simpler and easier to debug on errors (even with my extremely limited java knowledge). the DOM objects on the other hand were a nightmare, mostly coz i was too scared to play around with system files on the server :) and my network guy warned me against it.  "java.io.file" rocks....(i'm sure there are alot of other java classes more useful and capable of cooler stuff, but i havnt used many java classes)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714998">28</a> by Raymond Camden
		posted on 4/29/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>@Mark: Thanks for the explanation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715001">29</a> by Brian Panulla
		posted on 4/30/2009 at 4:48 AM
		</div>
		<div class="comment_text"><p>At my previous employer I used the a couple Nameservice classes for various business automation tasks.</p><p>I used the Jakarta Net Commons WHOIS class to monitor our company's domain names. Somewhere around v7 we noticed that Macromedia rolled the commons-net Jar into the CFMX, so we no longer had to worry about deploying it when we built a new server.</p><p>I also used some sort of DNS lookup class to check that an MX record existed for email addresses submitted by users during registration. That added another layer of validation that could occur before we tried to send a user an email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715002">30</a> by Larry C. Lyons
		posted on 4/30/2009 at 5:23 AM
		</div>
		<div class="comment_text"><p>Lately I've been using the Apache Math Package (<a href="http://disq.us/url?url=http%3A%2F%2Fcommons.apache.org%2Fmath%2F%29%3A_cDZn1112GsOJezAnldHD64g38c&amp;cuid=3321886" rel="nofollow noopener" title="http://commons.apache.org/math/)">http://commons.apache.org/m...</a> to develop a CF based statistical analysis app. With that package, the list and array classes, <a href="http://disq.us/url?url=http%3A%2F%2Ffile.io%3AM4oy6aWZDDV1Ukg1d-sU4WCImWk&amp;cuid=3321886" rel="nofollow noopener" title="file.io">file.io</a>, and string buffer (much more stable and thread safe than string buffer), I'm good to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715003">31</a> by Karl Snyder
		posted on 5/6/2009 at 4:34 PM
		</div>
		<div class="comment_text"><p>Probably java.lang.Runtime for it's ability to provide information about the currently running instance including memory usage details.  This has been very useful when needing instance probes in a clustering scenario when using Hardware clustering and load balancing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715004">32</a> by Christopher Ryan
		posted on 6/28/2010 at 11:34 PM
		</div>
		<div class="comment_text"><p>Just found another Java gem: java.awt.Polygon, because it easily determines if a point is inside a polygon.</p><p>This is great for mapping applications, where you can use the Google maps API to let end users draw regions on a map (see <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Farticles%2Fsupport%2Fezdigitizer.htm%29%3AJbuktUWnJ8s_Xyhky0iTpNQDJWI&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/articles/support/ezdigitizer.htm)">http://code.google.com/arti...</a>. This generates the latitude/longitude coordinates of the boundaries of the area, which can be stored.</p><p>Then you can pass any other latitude/longitude coordinates to java.awt.Polygon and determine if the location is within the region. Works well...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715006">33</a> by Ed
		posted on 8/13/2010 at 3:11 PM
		</div>
		<div class="comment_text"><p>Quick script that uses Java's SimpleDateFormat and io.File classes to set/change the lastModifiedDate on a given file:</p><p>&lt;cfset objJavaSimpleDateFormat = CreateObject("java", "java.text.SimpleDateFormat").init("dd/MM/yyyy HH:mm:ss")&gt;<br>&lt;cfset objJavaIoFile = createObject("java", "java.io.File")&gt;<br>&lt;cfset parsedDateTime = objJavaSimpleDateFormat.parse("28/07/2010 16:45:03")/&gt;<br>&lt;cfset myFile = objJavaIoFile.init("c:\test\myFile.txt")&gt;<br>&lt;cfset wasLastModifiedDateChanged = myFile.setLastModified(parsedDateTime.getTime())/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715007">34</a> by maramandan
		posted on 6/3/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Suppose if you have two java objects bc and sc respectively of class com.abc.def.baseclass and its subclass com.abc.def.subclass, in java you can assign subclass object to superclass reference (i.e. derived is assigned to base  or bc=sc;) Any idea how this can be achieved in ColdFusion code with the same two java objects?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715005">35</a> by Henry Ho
		posted on 6/3/2011 at 7:58 PM
		</div>
		<div class="comment_text"><p>@maramandan just assign it.  There's no "type" in CF, so assign whatever you want to all variable.</p></div>
	</div>
</div>
		