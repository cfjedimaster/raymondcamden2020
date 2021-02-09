
<div class="comment" id="c_1713654298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654298">1</a> by barry.b
		posted on 6/20/2006 at 7:50 AM
		</div>
		<div class="comment_text"><p>just to be clear on localisation:<br>[from livedocs]<br>LSDateFormat</p><p>Formats the date part of a date/time value in a locale-specific format.</p><p>A formatted date/time value. If no mask is specified, the value is formatted according to the locale setting of the _client computer_.</p><p>isn't the "client computer" the CF server (and it's locale settings)? so you'd have to analyise what locale that visitor comes from and format accordingly? (per request or session?)</p><p>IIRC, Locale isn't sent as a CGI var, only "HTTP_ACCEPT_LANGUAGE" is sent by the browser...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654304">2</a> by PaulH
		posted on 6/20/2006 at 8:18 AM
		</div>
		<div class="comment_text"><p>of course. if your users are registered, that would be one of the things you'd have in their profiles. if not you'd use something like our geoLocator CFC to figure out their locale from their browser settings &amp; IP.</p><p>btw what ray means by generic resource i guess is "resource bundle". and of course besides localized date strings you'll also have to work on number/currency formatting, calendars (not everybody uses the gregorian calendar &amp; if they do not everybody's week starts on sunday), writing system direction, collation, etc.--i could go on all day ;-) as ray says, it's a huge topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654305">3</a> by Tom
		posted on 6/20/2006 at 8:36 AM
		</div>
		<div class="comment_text"><p>Being a linguist, one of the things you might want to take into consideration is breaking out or creating a file that can help you with this.  One of the better implementations of having a bilingual Blog is one that is called AVBlog:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.avblog.org%2Findex.cfm%3AxqGehjDdbh1aKq6nFumcUaNYcVg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.avblog.org/index.cfm">http://www.avblog.org/index...</a><br>Andrea Veggiani does a really good job of creating a CF Blog that handles multiple languages including the interface.</p><p>Generically speaking, these issues take quite a bit of planning as was mentioned above.  Especially if you will be using the non-Romanized DBCS (Double Bit Character System) system to handle languages like Chinese, Japanese, Korean where the character systems run upwards of a couple thousand or more.  Planning will go a long way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654322">4</a> by PaulH
		posted on 6/20/2006 at 9:15 AM
		</div>
		<div class="comment_text"><p>that's called a resource bundle (rb) &amp; that's what ray's blog does. andrea's blog is pretty cool (i helped work on earlier versions) but it's use of xml in place of rb is kind of non-standard. i18n requires a technical ecosystem to support it &amp; unless you're simply translating stuff (and standardized on XLIFF) xml isn't usually the first choice especially for really complex apps.</p><p>nobody talks about non-Romanized DBCS (Double Bit Character System) these days (and btw thats Byte not Bit). it's unicode or nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654312">5</a> by faser
		posted on 6/20/2006 at 12:39 PM
		</div>
		<div class="comment_text"><p>Using xml for resource bundle is a very good choice because you can save more info than simple properties (binary data too as icons) and using an xml schema you have the validation too. (no duplicate keys etc).<br>Say you have 2000 labels to be translated, using xml + xsd and a good xml editor facilitate the work of the people who have to translate all this stuff.</p><p>One of the best way to localize the web UI should be to use the xml entities:<br><a href="http://disq.us/url?url=http%3A%2F%2Fxulplanet.com%2Ftutorials%2Fxultu%2Flocale.html%3AWmnc4hUvVFjd3dOumGh5vXlfh2g&amp;cuid=3321886" rel="nofollow noopener" title="http://xulplanet.com/tutorials/xultu/locale.html">http://xulplanet.com/tutori...</a><br>but unfortunately IE doesn't render them correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654321">6</a> by Raymond Camden
		posted on 6/20/2006 at 2:49 PM
		</div>
		<div class="comment_text"><p>Paul, yes, I was talking about resource bundles. I was just trying to keep things simple by not naming them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654320">7</a> by Brian
		posted on 6/20/2006 at 3:52 PM
		</div>
		<div class="comment_text"><p>I agree with Faser --- I have used XML to handle application level text and settings, labels, etc.  Handing off an XML file to a translator is very easy to do.  We used one XML file per page essentially.  The XML file had every language used on that page, validation for any fields, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654307">8</a> by Gus
		posted on 6/20/2006 at 3:58 PM
		</div>
		<div class="comment_text"><p>I just want to point out that Ray's reader was asking about "creating a bilingual site" in English and Spanish.</p><p>While Ray's response, and the comments are fairly accurate regarding Internationalization/Globalization and localization, this is actually quite different, and much more complex, than creating a bilingual site.</p><p>A bilingual site can be as simple as translating content in 2 languages.  For example, if one were creating a resource for a local school district in New York City, and wanted the site presented in multiple languages.  Globalization/localization issues would likely not come into play.  Just translation.  This is very common.</p><p>In fact Globalization/localization may have nothing to do with translation at all!  Imagine a site that targets users in the US and Canada.  The site can be presented in one language, English, yet be localized regarding everything else (currencies, date/time formats, number formats etc. )</p><p>I have found that when doing Globalization, the disconnect between translation and globalization has been one of the most difficult concepts for people to wrap their heads around.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654319">9</a> by Gus
		posted on 6/20/2006 at 4:00 PM
		</div>
		<div class="comment_text"><p>One other comment about Globalization...</p><p>If you are globalizing a site, make sure your datatypes can handle double byte characters!</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654306">10</a> by Raymond Camden
		posted on 6/20/2006 at 4:01 PM
		</div>
		<div class="comment_text"><p>Gus, I'm not sure I agree with you. I mean, yes, you can provide content in 2 languages, but that isn't enough. I mean, if your menus and forms are in one language, then you are preventing half your audience from using the site. That's why I talked about localizing the UI. I wouldn't consider a site with a Spanish version of the dynamic content to be truly bilingual if that was the only step taken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654324">11</a> by Tony Petruzzi
		posted on 6/20/2006 at 4:16 PM
		</div>
		<div class="comment_text"><p>@Gus</p><p>Just to make this entry more complete, when creating table in SQL Server (I have no idea what you would use for MySQL), you need to use the 'N' datatypes. All character datatypes in SQL Server have a corresponding 'N' datatype, such as</p><p>varchar &gt; nvarchar<br>char &gt; nchar</p><p>you get the idea. These column are used for handling double byte characters in languages, such as Japanese and Chinese.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654323">12</a> by PaulH
		posted on 6/20/2006 at 4:21 PM
		</div>
		<div class="comment_text"><p>sorry no xml isn't the best choice at least not by today's industry standards. dumping all the localizations into 1 xml is going to be a nightmare to manage as is trying to use a standard xml editor for this sort of task--it's simply not meant for that kind of work. taking an extreme, i suppose you could use notepad if the job's simple enough but you *will* die sooner or later as the apps grow more complex. XLIFF is swell for translation agencies, but those folks aren't developers and you will hardly find any serious i18n developer suggesting you use it instead of rb (though good rb tools will import/export XLIFF to speed things along).</p><p>and just fyi, while i've never done it myself, i've read of folks using binary data (images) in rb files.</p><p>you really need that ecosystem to support serious, complex i18n stuff. there are several rb management tools around, even a nice cf based one (jason sheedy's rbMan) that swim in that sea. unfortunately xml-spy, etc. isn't part of this ecosystem though i suppose it's fine for rinky-dink stuff (but for stuff that simple, notepad does plenty fine).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654308">13</a> by PaulH
		posted on 6/20/2006 at 4:26 PM
		</div>
		<div class="comment_text"><p>ray,</p><p>yeah just keeping you honest ;-) this blog will become some kind of "site of record" so i'd like things as "correct" as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654315">14</a> by Brian
		posted on 6/20/2006 at 4:29 PM
		</div>
		<div class="comment_text"><p>I dont think Faser or I said it was the best choice.  He said it was a good choice and I agreed.  I also said I have 1 file per page that needs translation. There would never be a huge XML file to manage.</p><p>I had built this in ASP, so for a registration form you would see registration_1.asp, registration_1.xml.  We created an object that would read in the xml and lanaguage branch it needed and that xml would handle labels, buttons, error messages validation and so on.</p><p>For pure content like Press releases this would be database driven not XML driven.</p><p>There may be better solutions but this one was easy to put together and worked great for the situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654314">15</a> by PaulH
		posted on 6/20/2006 at 4:38 PM
		</div>
		<div class="comment_text"><p>"The XML file had every language used on that page" that to me is a nightmare to manage.</p><p>"good/very good" choice makes no difference to me, xml isn't a good/better/best choice for serious i18n work. period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654316">16</a> by Gus
		posted on 6/20/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Sorry if I was unclear, but I did not mean to infer that UI elements or forms should not be translated.  In fact meta-data should be translated as well.</p><p>The point of my comment was that there is a significant difference between translation and globalization/localization.</p><p>Globalization/localization may include translation, but not necessarily.  ( An english language site that targets users in both the US and Canada for example )</p><p>A site can be multi-lingual without Globalization/localization issues ever coming into play. ( A site that targets Canadadian users that is presented in French and English )</p><p>As I said.. the difference between translation and globalization/localization is one of the more difficult concepts for people to wrap their heads around.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654326">17</a> by Raymond Camden
		posted on 6/20/2006 at 6:25 PM
		</div>
		<div class="comment_text"><p>Makes sense Gus. Thanks to all for adding to this thread. (I hate to say I love my blog because then it sounds egotistical, so I'll say I love my readers. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654310">18</a> by Ed
		posted on 6/20/2006 at 7:43 PM
		</div>
		<div class="comment_text"><p>We've had this discussion on the CFCDev list before and come to the same conclusion; what you choose will be determined by your specific needs. You could look at it like installing a version of CF:</p><p>Developer edition = basic DB-driven translations;<br>Standard edition = XML-driven translations;<br>Enterprise edition = rb files.</p><p>We use an XML-driven system that drives a 10 language site, including Russian and Japanese (cyrillic and kanji). Translations are loaded into server scope on startup using Application.cfc to create a service factory that reads in a single XML file (containing one XML node per language).</p><p>It's a high traffic site that's in use 24/7 by an international clientele, and for our needs an XML-based solution works fine. That's not to say that we couldn't make performance improvements by moving to Java RBs, but XML is a simple, obvious and intuitive solution that can be implemented quickly and easily using the basic CFMX toolset.</p><p>If anyone wants code examples just post a request in these comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654309">19</a> by Wade
		posted on 6/20/2006 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ed, I would be interested in any code examples you might provide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654300">20</a> by Chris
		posted on 6/20/2006 at 9:55 PM
		</div>
		<div class="comment_text"><p>From my own work in localization I have found that the one xml page per display page became very hard to manage, with lots of duplication of coding.</p><p>I have moved the language sensitive terms to a table in the database, and then on application start I would load that table into application space as a pair of structs (English and French).</p><p>I would then call either struct to display the data depending on the user’s language choice.</p><p>As for images I would store the language sensitive images in a separate directory and store the directory as an entry in the aforementioned structs.</p><p>I also made an interface for the translators to take my English terms and translate them into French, or to add new terms if I needed them.</p><p>Adding a third row, and struct for another language say Spanish would be really easy, except for the translations. But most important I would not have to change any code, including static XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654299">21</a> by PaulH
		posted on 6/21/2006 at 7:17 AM
		</div>
		<div class="comment_text"><p>ed, i'm curious as to when this was discussed on the CFC list. i can't find it in my archives.</p><p>using rb vs xml really hasn't anything to do w/performance. it's more about suitable toolsets &amp; managability.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654301">22</a> by ed
		posted on 6/21/2006 at 1:56 PM
		</div>
		<div class="comment_text"><p>Here's an example of how you could structure a translations XML file for a simple site. (Paul, this CFCDev discussion occurred around 19th Dec 2005.)</p><p>&lt;translation default="en"&gt;<br>  &lt;language id="en" name="english" label="English"&gt;<br>     &lt;section name="contactUs"&gt;<br>        &lt;resource name="pageTitle"&gt;Contact Us&lt;/resource&gt;<br>        &lt;resource name="bodyTitle"&gt;Feel free to contact us&lt;/resource&gt;<br>     &lt;/section&gt;<br>     &lt;section name="aboutUs"&gt;<br>        &lt;resource name="pageTitle"&gt;About Us&lt;/resource&gt;<br>        &lt;resource name="bodyTitle"&gt;Here's some info about our company&lt;/resource&gt;<br>     &lt;/section&gt;<br>  &lt;/language&gt;<br>  &lt;language id="fr" name="french" label="Francais"&gt;<br>     &lt;section name="contactUs"&gt;<br>        &lt;resource name="pageTitle"&gt;Contactez-nous&lt;/resource&gt;<br>        &lt;resource name="bodyTitle"&gt;Veuillez nous contacter&lt;/resource&gt;<br>     &lt;/section&gt;<br>     &lt;section name="aboutUs"&gt;<br>        &lt;resource name="pageTitle"&gt;Au sujet de nous&lt;/resource&gt;<br>        &lt;resource name="bodyTitle"&gt;Voici une certaine information au sujet de notre compagnie&lt;/resource&gt;<br>     &lt;/section&gt;<br>  &lt;/language&gt;<br>&lt;/translation&gt;</p><p>Load this as an XML structure into server scope on app startup, then just call the correct placeholder for the user's session language, something like this:</p><p>#server.translate(session.language, "aboutUs", bodyTitle")#</p><p>French user in the About Us section sees 'Voici une certaine information au sujet de notre compagnie', English user sees 'Here's some info about our company'.</p><p>I'm not advocating this as a way of storing large translated documents (nor indeed for enormous sites with many thousands of translations), but it works well for page furniture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654303">23</a> by Ed
		posted on 6/21/2006 at 5:04 PM
		</div>
		<div class="comment_text"><p>Further to my last comment, the actual XML file read/parsing operation is done only once by the service factory on app startup. The data from the XML file is written into a CF Struct in server scope; the data from this struct is used dynamically to populate placeholders in the site layout. (Sounds similar to Chris' approach above.)</p></div>
	</div>
</div>
		