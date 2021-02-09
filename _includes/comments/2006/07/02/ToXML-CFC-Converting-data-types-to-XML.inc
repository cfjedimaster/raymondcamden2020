
<div class="comment" id="c_1713654591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654591">1</a> by Emmet
		posted on 7/3/2006 at 12:42 AM
		</div>
		<div class="comment_text"><p>Did you put this up for download somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654589">2</a> by Raymond Camden
		posted on 7/3/2006 at 1:26 AM
		</div>
		<div class="comment_text"><p>Um, yeah, the Download link. ;) I -do- need ot make it more obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654590">3</a> by Kyle Hayes
		posted on 7/3/2006 at 1:29 AM
		</div>
		<div class="comment_text"><p>When there is a download, I think that it should be before the comments link or immediately after and perhaps have an icon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654593">4</a> by Lola Lee Beno
		posted on 7/3/2006 at 1:51 AM
		</div>
		<div class="comment_text"><p>Or perhaps an arrow icon pointing to the Download link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654600">5</a> by emmet
		posted on 7/3/2006 at 2:04 AM
		</div>
		<div class="comment_text"><p>I guess i never paid attention to that before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654596">6</a> by Simon Horwith
		posted on 7/3/2006 at 2:23 AM
		</div>
		<div class="comment_text"><p>I assume you're keeping the XML VERY small - otherwise there'd be no reason not to simply use WDDX. Though I do think that WDDX isn't ideal for transfering data (especially large amounts of data) because of how verbose it is, I think a SPRY WDDX parser would be useful and cool for some people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654599">7</a> by Raymond Camden
		posted on 7/3/2006 at 3:14 AM
		</div>
		<div class="comment_text"><p>It is as small as you want it to be. I mean, if size is an issue I'd ensure a query, for example, only had the columns you really need. The reason to not use WDDX is that not everything can parse WDDX, including Spry. While I'm working on such a thing (as was made obvious by the entry), I thought this CFC would be of use to folks for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654598">8</a> by Dan Sorensen
		posted on 7/3/2006 at 4:07 AM
		</div>
		<div class="comment_text"><p>I'm used to your download links now, but it would probably be easier to find if the download link was red when it's present. I'm not sure if that's possible with your setup.</p><p>Thanks for the CFC example, makes working with SPRY a little more interesting. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654597">9</a> by Simon Horwith
		posted on 7/3/2006 at 4:35 AM
		</div>
		<div class="comment_text"><p>It's not as small as I want it to be, assuming you have defined the XML format used to represent the data.  What I did a poor job of trying to say is that the only reason I can think to create such a CFC is if you're trying to make the XML string much smaller than it would usually be if you were to represent it as WDDX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654603">10</a> by Raymond Camden
		posted on 7/3/2006 at 5:05 AM
		</div>
		<div class="comment_text"><p>I think you are missing the point. Right now - Spry requires XML. Yes, XML isn't the slimmest it could be, but it is what Spry requires. I know I'm seeing pretty quick responsiveness w/ Spry up to about 500 rows, which seems rather fair. I also thought the CFC would be of interest for folks needing a generic set of "to XML" type functions, which may be used in places where network traffic isn't an issue. (What I mean is, they aren't translating it to XML for transfer, but for other reasons.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654604">11</a> by Simon Horwith
		posted on 7/3/2006 at 5:17 AM
		</div>
		<div class="comment_text"><p>I agree - just thought I'd point out that there is already an easy way to represent data in XML format using CF, albeit a very verbose one.  Adding a JS library to the client side would add universal support to this somewhat 'standard' XML format (which, did I mention, is very verbose?). Just wanted to point that out - I'm not saying that there's anything wrong with your CFC or with people using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654607">12</a> by Raymond Camden
		posted on 7/3/2006 at 5:23 AM
		</div>
		<div class="comment_text"><p>Heh, ok. I did mention Spry in the beginning of the entry, but ok, I see your point.</p><p>Although - I compared the XML generated by my code using my simple query and converting the same thing to wddx. My XML was 415 characters. The WDDX was 611.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654609">13</a> by Michael White
		posted on 7/3/2006 at 5:31 AM
		</div>
		<div class="comment_text"><p>Man I cannot believe how good your timing is... I'm trying to figure out a way to convert a directory structure listing into an XML document, scratching my head... searching livedocs... and well, here it is... Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654606">14</a> by Simon Horwith
		posted on 7/3/2006 at 5:34 AM
		</div>
		<div class="comment_text"><p>I'm not surprised - WDDX was and still is a fantastic idea, but it is ridiculously verbose. That's something you REALLY need to keep in mind if you're going to represent data as XML for the purpose of being passed between environments (databases, application servers, and the file system) - keeping that XML small is necessary and paramount if you want it to scale.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654610">15</a> by Raymond Camden
		posted on 7/3/2006 at 5:43 AM
		</div>
		<div class="comment_text"><p>If folks think it makes sense, I can add an arg to queryToXML for columns to ignore. This would help trim things down even more. (Although you would normally want to do that in the original query.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654608">16</a> by David A.
		posted on 7/3/2006 at 9:06 AM
		</div>
		<div class="comment_text"><p>this is great... thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654611">17</a> by Teddy R Payne
		posted on 7/3/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Yes Ray, you really need to make the download link very large.  I suggest the techniques used by the firefox download page.  It is huge and has pretty colors.  =)</p><p>As for the XML functions and component ideas, I can see an immediate use for the functions in the realm of configuration files.  If you wanted to create dynamic xml config files, then easy to use functions would be a good way to speed that up in conjunction with the other XML functions provided with CF.</p><p>Serialized data will always be a problem for transferring data.  Flex really makes this beautiful.  The flash remoting will slowly become my tranfer layer du jour.  You have to love raw data.</p><p>Data sushi style!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654612">18</a> by Neil Bailey
		posted on 7/4/2006 at 5:44 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Loved your CFC talk (even though it turned out you are right about passing in a structure instead of individual arguments :) at CFUnited.  Also, thought that your Application.CFC article in the new CF mag (can't remember the name off the top of my head) was excellent as well.</p><p>That being said......</p><p>In MY humble opinion, SPRY isn't ready for prime time.  Its a nice little toy, but not overly sophisticated in what it can/will do, and its ability to allow the developer to modify the user experience is sorely lacking (other than its HTML table capabilities).  I think you are pretty much dead-on-balls-accurate with pretty much every single thing out of your mouth, and I can't understand how you can be missing the mark THIS much with SPRY - I feel your so far out there on this one that is makes me feel that maybe I am wrong, simply because I agree with you so often (does that make sense??)</p><p>I understand you're not an Adobe employee - or even associate, if I understand correctly - and its not your job to sell their products.  But, if you could, explain why I should use SPRY instead of AJAXcfc, for example.</p><p>Please don't misunderstand me - I am truly not attempting to rain on your SPRY parade here; I am just a touch nervous with my OWN outlook because in this instance it is completely different from your own.  If you have a second, explain how SPRY competes with the 800lb gorilla in the room - in this case (again, IMHO) AJAXcfc.</p><p>I appreciate it.  Your blog is an excellent resource, even if it is offbase on this one :)</p><p>nb</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654613">19</a> by Raymond Camden
		posted on 7/4/2006 at 5:55 AM
		</div>
		<div class="comment_text"><p>Neil,</p><p>First off - in the future - please know it is ok to disagree with me. No need to worry about offending me. ;)</p><p>Spry is NOT released code yet. I would only use it on a production site if you were sure it would work well for you. But there is a reason Adobe calls it a Pre-release, because that is exactly what it is.</p><p>Spry right now is super good at reading AJAX data. By that I mean, it is trivial to use Spry to bind data to a remote data source. I have yet to see a system do that as easily.</p><p>It isn't just tables, but tables are used in most of the examples. I know I showed sme drop downs as well.</p><p>There -are- widgets in Spry, but they haven't been heavily documented yet. Future releses will show more information about them.</p><p>Does this make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654615">20</a> by Raymond Camden
		posted on 7/4/2006 at 5:55 AM
		</div>
		<div class="comment_text"><p>Btw - I finished my code. I now have Spry talking directly to a CFC w/o the need of toXML. The code is ugly as sin though so I'm not sharing it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654616">21</a> by Neil Bailey
		posted on 7/4/2006 at 5:59 AM
		</div>
		<div class="comment_text"><p>I apprciate your.....humility, I guess.  And yes, that actually makes me feel MUCH better about your stance on Flex (because I know you stay awake at night worried about ways to make me feel better - hahaha, please tell me you can read the sarcasm there!).</p><p>I am very new to the entire AJAX scene (we've been using it for the the last couple of weeks), but it just seems to me that with such  an established, easy to use, flexible AJAX framework as AJAXcfc is already in the marketplace, it would behoove Adobe to work w/ Rob to make AJAXcfc perfect (hell, call it SPRY, call it whatever you want) - just that starting OVER seems.....silly.</p><p>But, who am I to second guess the ways and days of Adobe?  I personally think that they are also WAY off the mark with Flex2, but again, what do I know.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654614">22</a> by Raymond Camden
		posted on 7/4/2006 at 6:26 AM
		</div>
		<div class="comment_text"><p>Well, you are bringing up 2 things now, Flex 2 and Spry. :) From what I know, Spry's main advantage is how easy it handles displaying the content, which to be honest is where I think we spend 99% of our time.</p><p>Flex 2: Why do you not feel it rocks? I mean, I can't think of another way of making RIAs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654618">23</a> by Neil Bailey
		posted on 7/4/2006 at 7:17 AM
		</div>
		<div class="comment_text"><p>I was saying this to everyone I met at CFUnited - in fact, I was saying the same thing to you, but you told me that as long as the application included/did everything you needed it to, you were able to live with it - the load time of Flex applications is - at least, to us - 100% prohibitive.  I have NOT seen an application built on the final release version of Flex2, nor have I seen a Flex2 app run in the new FlashPlayer 9 (which you pointed out to me is supposed to have MUCH improved performance), but after seeing many applications built in the beta releases of Flex2, and after our own 100% nightmarish experience w/ Flash Forms (yes, I understand that they are two different things, but Flash Forms is our only frame of reference for a real-world app), Flex2 is going to be a VERY hard sell to us.  I am sure I will end up playing with it, but (and I asked the same question on Ben Forta's blog) I can not think of a single real-world app that would be built in Flex - other than a really cool dashboard.</p><p>Yes you can build a really cool storefront in Flex - but you wouldn't....again, the load time would come into play and your customers would be gone.  You could build all kinds of really cool things in Flex - but, the bottom line is, other than geeks like myself seeing what I can do simply to see if I can do it, I truly don't see Flex (or the other products like it - read Lazslo) making much of an impact - the overhead is truly just too great.  Its like this really cool concept car that everyone flocks to a car show to see, but would NEVER buy for their daily commute to work.</p><p>What else would you use to build an RIA? Well, its funny you ask that, because after we rewrote almost all of our apps in Flash Forms (curteousy of the lobbying of yours truly - MAJOR mistake), we asked ourself the exact same question.  What we came up w/ is straight DHTML using an AJAX connector (AJAXcfc in our case) to connect to the backend.</p><p>If I seem to be pushing AJAXcfc hard, I don't mean to - I swear I have no connection w/ Rob Ghonda at ALL (never met him before last Wednesday).  AJAXcfc just really, REALLY saved my bacon by providing a reasonable alternative to the Flash Forms.  Does AJAX provide the same built in validation that the Flash Forms do?  No, of course not.  But the apps now load in 3-5 seconds, instead of the 45-50 seconds they were taking to load before, and to my boss, that is more important than built-in validation - which we can write routines to replicate anyway.</p><p>Sorry for the extra-long response.</p><p>nb</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654617">24</a> by Simon Horwith
		posted on 7/4/2006 at 7:26 AM
		</div>
		<div class="comment_text"><p>There's a lot to comment on there and I'll let Ray continue his dialogue, but I did want to chime in and state for the record that I'm pretty confident that you wouldn't find that the load times in Flex 2 are prohibitive what-so-ever.  Flex 2 apps tend to load extremely fast... and if it doesn't, it's usually the developer's fault and can be fixed.  Just my observation and experience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654619">25</a> by Neil Bailey
		posted on 7/4/2006 at 7:36 AM
		</div>
		<div class="comment_text"><p>hahahaha was that a polite way of calling me a moron??  Its ok - maybe I AM an idiot (my ex-wife has certainly called me worse :).  I did point out that I haven't even SEEN an app built w/ the final release of Flex2, and I haven't BUILT anything with Flex2 at all - final release or beta.</p><p>I have, however, built a large number of flash forms, which use remoting to connect to a CFC on the back end (ala ASFusion).  And as I said in my last post, this is my only frame of reference for a real-world app (I understand that they are two different things, but I believe that Flash Forms are a sub-set of Flex, no??)  And I can't see a single thing we would EVER use Flash Forms for again.  They look slick, and the validation is fantastic, etc etc etc.</p><p>But I can get the same (well, a comparable, anyway) slick set of UI widgets from DOJO, and can duplicate the remoting functionality w/ AJAX.  And the form loads in single digit seconds - usually under 5.  When Flex can deliver an app in under 5 seconds, then maybe it has real world usage.</p><p>All of that being said, not a single person has been able to tell me what they would build in Flex for a real-world, paying project (hell, I asked Ben himself personally that exact same question at CFUnited, and he - perhaps unintentionally - completely sidestepped the question).  A dashboard.  Ok, I will give you that.</p><p>A storefront?  Maybe, I guess.....  what else?  Tell me this: would you build an online employment application in Flex?  How about a credit card application, or a patients' notes app for a physician or a part ordering system or a........THESE are the applications that are built in ColdFusion (at least in my experience, and I have been doing this for a fairly long time).  Flex isn't ideal for ANY of them - you could force it I suppose (we DID, with the Flash Forms), but why force a square peg into a round hole WHEN YOU HAVE A ROUND PEG!!!!????</p><p>I don't mean to rain on the Flex2 parade - rather, I am looking to be convined!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654620">26</a> by Raymond Camden
		posted on 7/4/2006 at 4:22 PM
		</div>
		<div class="comment_text"><p>There is a lot here, so I don't know if I could cover it all.</p><p>Use of Flex: Ignore Flex for a minute and focus on RIA. If you need convincing that RIA's themselves make sense, I'm not sure what to say. Maybe I'm brainwashed but I thought it was obvious. Of course you wouldn't replace every web page with a RIA, but somethings really do make more sense as a RIA. Control panels, for example, make more sense as a RIA.</p><p>I think we will definitely see folks misuse Flex, just as we saw folks make bad use of Flash, and CF, and .Net, etc. Any new tool will have sites that misuse the technology.</p><p>As for speed in general, again, I know I've seen Flex2 apps load very quickly. They will never be as fast as plain jane HTML, but I think the trade offs are more than worthwhile, and save you time in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654623">27</a> by Neil Bailey
		posted on 7/4/2006 at 8:44 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Of COURSE I see the value in RIAs - the value is immeasurable in terms of web applications.</p><p>My question is this:  why not write RIA applications with a DHTML front end, a CFC handling the database (and whatever else needs handling) and an AJAX connector between the two?</p><p>This will give you - in my mind, at least - almost the exact same capabilities (minus that slick Flash look of course), but with a load time that is about 40 seconds faster.</p><p>My main question is not what you wouldn't use Flex for, but specifically what you WOULD use it for?  I can think of a dozen RIAs off the top of my head without even really trying, but not a single one of them is a good fit for a Flex application - again, this is all my opinion.  I am actually sincerely seeking to be convinced otherwise!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654622">28</a> by Raymond Camden
		posted on 7/5/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Well bear in mind, we are only arguing about the view layer. Obviously Flex can talk to a CFC as well. I'd argue that, UI wise, Flex can do more than HTML can, or certainly can easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654621">29</a> by Neil Bailey
		posted on 7/5/2006 at 6:52 PM
		</div>
		<div class="comment_text"><p>But it also takes more than 10times as long to load.</p><p>I still haven't been able to get a single real-world example - other than a dashboard - that is a perfect fit for Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654624">30</a> by Raymond Camden
		posted on 7/5/2006 at 7:01 PM
		</div>
		<div class="comment_text"><p>As Simon said, you may have been looking at the wrong Flex2 apps. ;) I know most apps I've seen don't take long to load. Yes, they take more than HTML. A plain HTML page can load in less than one second. A Flex2 app may be 10 seconds, which makes your 10 times statement true. I don't think 10 seconds is a horrible wait time. Especially if thats the last big load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654625">31</a> by Neil Bailey
		posted on 7/5/2006 at 7:13 PM
		</div>
		<div class="comment_text"><p>You are correct - I haven't seen a single Flex2 app written in the final release version of Flex2, nor a single Flex2 app run in the new FlashPlayer 9 (which, as you pointed out to me at CFUN, is supposed to have vastly improved performance).</p><p>Unfortunately, my only frame of reference for real-world applications is Flash Forms.  And Ray, they truly killed us - to the point that people almost lost their jobs@</p><p>If real-world, functionality-heavy Flex2 apps are truly loading in 10 seconds, then I would agree that Flex2 is the RIA platform of TODAY, let alone tomorrow.  I just haven't seen it.</p><p>As for HTML load time:  we have converted most (not all, yet) of our Flash Forms to HTML/AJAX, and the avg load time is about 5 seconds.  If equivalent Flex apps were to load in...hell, 15 seconds, I would be happy (we're talking 6 grids, 5 tabs - each with..maybe 20 fields each; the grids need to be displayed dynamically, depending on the selected criteria, as do certain of the tabs).</p><p>Also, I haven't YET heard of a single real-world application - again, I agree with the dashboard concept, regardless of the loadtime; so other than a dashbaord - that YOU feel Flex2 is IDEAL for.</p><p>Thanks for listening to (reading??) my rambling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654626">32</a> by Kyle Hayes
		posted on 7/5/2006 at 10:32 PM
		</div>
		<div class="comment_text"><p>Think of it as loading an actual desktop application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654628">33</a> by Neil Bailey
		posted on 7/5/2006 at 10:41 PM
		</div>
		<div class="comment_text"><p>Yes, I understand the *concept*, its just that I don't know anyone writing desktop apps for the internet....  name 5 desktop apps that need to be delivered in a browser....  I know that I can't...</p><p>Sure, I could write a Word Processor, but I have MS Office.  Sure I could write a... hell, I dunno, anything, but the point is: WHY!</p><p>My main point is this:  I think flex2 will be a cool little toy.  Again, it will be like the concept cars that the car companies put out:  they generate a lot of discussion, and the whole world thinks that they're cool, but NOBODY DRIVES THEM TO WORK!!!</p><p>I want my apps to look as slick and as cool as the next guy, but....  I, personally, just don't see much of a marketplace for this.  After the initial "cool" factor dies down, I think this will be the next Spectra.</p><p>And still, nobody has been able to tell me what they would use flex2 to build.  Its like the emperor's new clothes - everyone says Flex2 is the future of the internet because everyone ELSE is saying that flex2 is the future of the internet.</p><p>Or, maybe I am just missing the point...if so, tell me what you would build in flex2.  Not a general category of applications like "desktop apps for the browser", but specifically, what?  A dashboard.  Ok.  What else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654627">34</a> by tony weeg
		posted on 7/6/2006 at 2:10 AM
		</div>
		<div class="comment_text"><p>and now its cool to make the link more NORMAL AND READABLE!!!!</p><p>tony was a dumb ass for not seeing it... right :)</p><p>ok, you can apologize at ANY time ray!</p><p>later holmes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654629">35</a> by Gary
		posted on 7/15/2006 at 1:33 AM
		</div>
		<div class="comment_text"><p>I took a few years off from CF and am now making a comeback.  I'm getting the basic idea here, but I cant find an example of the actual CF code to use a query with SPRY.  Can someone post an example?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654632">36</a> by Raymond Camden
		posted on 7/16/2006 at 1:21 AM
		</div>
		<div class="comment_text"><p>I may not get you. You don't do anything different. You just make the CFC and use my ToXML to convert it to XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654634">37</a> by Paul Baylis
		posted on 4/26/2008 at 4:43 PM
		</div>
		<div class="comment_text"><p>Interested in toXML and watched your presos. Can't find demo.cfc anywhere in the download files. Where can I find that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654631">38</a> by Paul Baylis
		posted on 4/26/2008 at 4:45 PM
		</div>
		<div class="comment_text"><p>sorry, "data.cfc" not "demo.cfc"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654639">39</a> by Raymond Camden
		posted on 4/26/2008 at 6:48 PM
		</div>
		<div class="comment_text"><p>I'm not sure what you mean by data.cfc. My CFC is toxml.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654633">40</a> by Paul Baylis
		posted on 4/27/2008 at 12:16 PM
		</div>
		<div class="comment_text"><p>In your Spry presentation to Auckland CFUG, you were working with data.cfc, invoking it with, e.g.</p><p>&lt;cfinvoke component="data" method="getData" returnVariable="data"&gt;</p><p>and using it in Spry, e.g. as follows:</p><p>&lt;script type="text/javascript"&gt;<br>var mydata = new Spry.Data.XMLDataSet("data.cfc?method=getdataXML","/people/person");<br>mydata.setColumnType("age","numeric");<br>&lt;/script&gt;</p><p>Just thought it might have been included with the download files. As a newby, I was just wanting to see how it all fits together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654638">41</a> by Raymond Camden
		posted on 4/27/2008 at 4:50 PM
		</div>
		<div class="comment_text"><p>That CFC wasn't anything special - just a wrapper for demo data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654637">42</a> by Mamtha
		posted on 10/16/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>I am working with a self referencing table that has id,name,parentid columns and am trying to generate hierarchical xml document so I can create a tree control in flex. how can I use toXml to achieve this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654641">43</a> by Raymond Camden
		posted on 10/17/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>@Mamtha - toXML would not support that. It is mainly meant for Lists of data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654636">44</a> by Paul Klinkenberg
		posted on 2/25/2009 at 10:38 PM
		</div>
		<div class="comment_text"><p>Hi Raymond and others, I used your original toXML component to create my own recursive toXML(data:any) function, which can take any data (except binary), and turn it into xml.</p><p>You can read about it and download it here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.leeftpaulnog.nl%2F2009%2F02%2Ftoxml-function-for-coldfusion.html%3Ap2f8_JU0pbX-H17pBaCcH_3gzzQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.leeftpaulnog.nl/2009/02/toxml-function-for-coldfusion.html">http://www.leeftpaulnog.nl/...</a></p><p>Hope it's of use to someone; it helped me anywayz ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654635">45</a> by Roger
		posted on 7/20/2009 at 1:52 PM
		</div>
		<div class="comment_text"><p>@Raymond: where can I find the "promised" rewritten code for the cfc's wich directly create xml for spry? not the toXML.cfc..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654640">46</a> by Raymond Camden
		posted on 7/20/2009 at 2:27 PM
		</div>
		<div class="comment_text"><p>XML for Spry? No idea what you mean. My toXML can be found at RIAForge.</p></div>
	</div>
</div>
		