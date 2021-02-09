
<div class="comment" id="c_1713735622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735622">1</a> by Jeremy Battle
		posted on 10/11/2011 at 11:49 PM
		</div>
		<div class="comment_text"><p>Well, thank God for "Unicorn Magic Prettiness", $("#linksList").listview("refresh"); made me look more closely at the docs to see if this was also available for form elements, which of course it was. So happily I can get rid of the hacky way I was accomplishing this before (initing multiple plugins on all the dynamic elements I was adding).</p><p>Funny how when you read documentation you can miss things you aren't looking for...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735624">2</a> by Raymond Camden
		posted on 10/11/2011 at 11:52 PM
		</div>
		<div class="comment_text"><p>Yep - I'm reading stuff as I write my book and discovering all kinds of little things I missed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735625">3</a> by Darth Guybrush
		posted on 10/13/2011 at 5:17 AM
		</div>
		<div class="comment_text"><p>I should point out that the latest jQuery build is 1.6.4.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735623">4</a> by Raymond Camden
		posted on 10/13/2011 at 5:19 AM
		</div>
		<div class="comment_text"><p>And? Sorry - am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735626">5</a> by Henry
		posted on 10/13/2011 at 3:20 PM
		</div>
		<div class="comment_text"><p>Nice work, as usual, Ray. Have you given any thought to add search and paging? <br>Henry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735627">6</a> by Raymond Camden
		posted on 10/13/2011 at 3:41 PM
		</div>
		<div class="comment_text"><p>Search wouldn't be possible unless you knew the search URL for the remote blog, and even then, the remote blog would need to provide an API to search so that you can get results in JSON (or some other format). Paging also wouldn't make sense because most RSS feeds don't allow for it - they just return the last N entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735629">7</a> by Konstantin
		posted on 10/20/2011 at 12:30 AM
		</div>
		<div class="comment_text"><p>Thank you for this great script. I am trying to enhance it a bit, there is a delay when i like to the page with this code, so you get the header, and a blank page until the LI rss items load....Can you help me add the jquery mobile loading screen while the items are populated.</p><p>For some reason adding these did not work for me <br>    // show<br>    $.mobile.pageLoading();</p><p>    // hide<br>    $.mobile.pageLoading(true);</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735630">8</a> by Raymond Camden
		posted on 10/20/2011 at 1:48 AM
		</div>
		<div class="comment_text"><p>Well, I'd probably do this.</p><p>1) In my home page, the first div with data-role=content, I'd add a new inner div above the empty ul. Something like:  &lt;div id="preloading"&gt;Please stand by...&lt;/div&gt;</p><p>2) When I get my crap back and before I add the items, then just do $("#preloading").html("")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735632">9</a> by Konstantin
		posted on 10/21/2011 at 7:55 PM
		</div>
		<div class="comment_text"><p>Thanks for the tip Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735633">10</a> by Konstantin
		posted on 10/22/2011 at 1:48 AM
		</div>
		<div class="comment_text"><p>I added the jquery spinning wheel/loading pop up for the stories. Looks pretty nice now. Also changed the external story link to open with browser with - target="_webapp"<br>Here is my updated script<br>            &lt;script&gt;</p><p>//show loader</p><p>   var showLoader = function () {<br>        $('.ui-loader').css('display', 'block');</p><p>   }</p><p> //hide loader<br>var hideLoader = function () {<br>            $('.ui-loader').css('display', 'none');<br>   }</p><p>                $(document).ready(function() {</p><p>  //   alert('test');<br>                                  //EDIT THESE LINES<br>                                  //Title of the blog<br>                                  var TITLE = "News";<br>                                  //RSS url<br>                                  var RSS = "news.xml";<br>                                  //Stores entries<br>                                  var entries = [];<br>                                  var selectedEntry = "";</p><p>                                  //listen for detail links<br>                                  $(".contentLink").live("click", function() {<br>                                                         selectedEntry = $(this).data("entryid");<br>                                                         });</p><p>                                  //Listen for main page<br>                                  $("#mainPage").live("pageinit", function() {<br>                                showLoader(); 	                                                                           //Set the title<br>                                                      $("h1", this).text(TITLE);</p><p>                                                      $.get(RSS, {}, function(res, code) {<br>                                                            var xml = $(res);<br>                                                            var items = xml.find("item");<br>                                                            $.each(items, function(i, v) {<br>                                                                   entry = { <br>                                                                   title:$(v).find("title").text(), <br>                                                                   link:$(v).find("link").text(), <br>                                                                   description:$.trim($(v).find("description").text())<br>                                                                   };<br>                                                                   entries.push(entry);</p><p>								hideLoader();<br>                                                                                });</p><p>                                                            //now draw the list</p><p>                                                            var s = '';<br>                                                            $.each(entries, function(i, v) {<br>                                                                   s += '&lt;li&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/li&gt;';<br>                                                                   });<br>                                                            $("#linksList").append(s);</p><p>                                                            $("#linksList").listview("refresh");</p><p>                                                            });<br>                                                      });</p><p>                    	             //Listen for the content page to load<br>                                  $("#contentPage").live("pageshow", function(prepage) {<br>                                                         //Set the title</p><p>                                                         $("h1", this).text(entries[selectedEntry].title);<br>                                                         var contentHTML = "";<br>                                                         contentHTML += entries[selectedEntry].description;<br>                                                         contentHTML += '&lt;p/&gt;&lt;a target="_webapp" href="'+entries[selectedEntry].link + '"&gt;Read Entry on Site&lt;/a&gt;';<br>                                                         $("#entryText",this).html(contentHTML);</p><p>                                                         });</p><p>                                  });</p><p>        &lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735631">11</a> by Konstantin
		posted on 10/27/2011 at 7:07 PM
		</div>
		<div class="comment_text"><p>Ned some help...so i am trying to open up a news feed page from the main page, to get the jquery mobile transition effect, i am calling it with<br>$.mobile.changePage( 'news.html', { transition: 'slide'} );"</p><p>however when the page slides, i got the blank page, that is not populated wit hthe news stories from the javascript.....any ideas? i would think the document.ready event should make sure its populated after page is loaded? thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735635">12</a> by Raymond Camden
		posted on 10/29/2011 at 4:08 PM
		</div>
		<div class="comment_text"><p>Well I'd need to see more. When you load a page like that, if it hasn't been injected in the DOM yet then it will be blank. (Well not blank, but whatever is in news.html.) You can't add stuff to that page until _after_ it has been loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735634">13</a> by Eoin OC
		posted on 11/10/2011 at 6:56 PM
		</div>
		<div class="comment_text"><p>Is this code specifically for android. I am trying to apply the code in Xcode with phonegap with no success. Is there any major changes i would have to make.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735648">14</a> by Raymond Camden
		posted on 11/10/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>Nope, it should work. I've never done the Phonegap process on iOS, but if you start your project according to their docs, then use my code, it should work. If not, you need to provide me a bit more detail on what is going wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735659">15</a> by Eoin OC
		posted on 11/10/2011 at 8:03 PM
		</div>
		<div class="comment_text"><p>I am having no luck with it. The main.js does not seem to be responding. I have set an alert within the main.js and it won't alert. here is the following html code and main.js-</p><p>&lt;!DOCTYPE html&gt; <br>&lt;html&gt; <br>	&lt;head&gt; <br>        &lt;meta name="viewport" content="width=device-width, initial-scale=1"&gt;	<br>            &lt;title&gt;&lt;/title&gt; <br>            &lt;link rel="stylesheet" type="text/css" href="style.css"&gt;<br>                &lt;link rel="stylesheet" type="text/css" href="jq/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.0b1.min.css"&gt;<br>                    &lt;script type="text/javascript" charset="utf-8" src="phonegap.0.9.6.min.js"&gt;&lt;/script&gt;<br>                    &lt;script type="text/javascript" charset="utf-8" src="jq/jqueryCombined.js"&gt;&lt;/script&gt;<br>                    &lt;script type="text/javascript" charset="utf-8" src="main.js"&gt;&lt;/script&gt;<br>                    &lt;/head&gt; <br>    &lt;body&gt;</p><p>        &lt;div data-role="page" id="mainPage"&gt;</p><p>        &lt;div data-role="header"&gt;<br>            &lt;h1&gt;&lt;/h1&gt;<br>        &lt;/div&gt;</p><p>        &lt;div data-role="content"&gt;	<br>            &lt;ul id="linksList" data-role="listview" data-inset="true"&gt;&lt;/ul&gt;<br>        &lt;/div&gt;<br>    &lt;/div&gt;</p><p>        &lt;div data-role="page" id="contentPage"&gt;</p><p>            &lt;div data-role="header"&gt;<br>                &lt;a href="#mainPage" data-rel="back"&gt;Home&lt;/a&gt;<br>                &lt;h1&gt;&lt;/h1&gt;<br>            &lt;/div&gt;</p><p>            &lt;div data-role="content" id="entryText"&gt;<br>            &lt;/div&gt;</p><p>        &lt;/div&gt;</p><p>    &lt;/body&gt;<br>&lt;/html&gt;</p><p>main.js</p><p>var showLoader = function () {<br>    $('.ui-loader').css('display', 'block');</p><p>}<br>alert("test");<br>//hide loader<br>var hideLoader = function () {<br>    $('.ui-loader').css('display', 'none');<br>}</p><p>alert("test");<br>$(document).ready(function() {<br>               alert("test");<br>                  //EDIT THESE LINES<br>                  //Title of the blog<br>                  var TITLE = "News";<br>                  //RSS url<br>                  var RSS = "news.xml";<br>                  //Stores entries<br>                  var entries = [];<br>                  var selectedEntry = "";</p><p>                  //listen for detail links<br>                  $(".contentLink").live("click", function() {<br>                                         selectedEntry = $(this).data("entryid");<br>                                         });</p><p>                  //Listen for main page<br>                  $("#mainPage").live("pageinit", function() {<br>                                      showLoader();     //Set the title<br>                                      $("h1", this).text(TITLE);</p><p>                                      $.get(RSS, {}, function(res, code) {<br>                                            var xml = $(res);<br>                                            var items = xml.find("item");<br>                                            $.each(items, function(i, v) {<br>                                                   entry = { <br>                                                   title:$(v).find("title").text(), <br>                                                   link:$(v).find("link").text(), <br>                                                   description:$.trim($(v).find("description").text())<br>                                                   };<br>                                                   entries.push(entry);</p><p>                                                   hideLoader();<br>                                                   });</p><p>                                            //now draw the list</p><p>                                            var s = '';<br>                                            $.each(entries, function(i, v) {<br>                                                   s += '&lt;li&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/li&gt;';<br>                                                   });<br>                                            $("#linksList").append(s);</p><p>                                            $("#linksList").listview("refresh");</p><p>                                            });<br>                                      });</p><p>                  //Listen for the content page to load<br>                  $("#contentPage").live("pageshow", function(prepage) {<br>                                         //Set the title</p><p>                                         $("h1", this).text(entries[selectedEntry].title);<br>                                         var contentHTML = "";<br>                                         contentHTML += entries[selectedEntry].description;<br>                                         contentHTML += '&lt;p/&gt;&lt;a target="_webapp" href="'+entries[selectedEntry].link + '"&gt;Read Entry on Site&lt;/a&gt;';<br>                                         $("#entryText",this).html(contentHTML);</p><p>                                         });</p><p>                  });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735652">16</a> by Raymond Camden
		posted on 11/10/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>Ugh, in the future, please, _pretty please_, use Pastebin for code snippets.</p><p>Not sure what to suggest to you. That alert should fire. I'd ensure it is in the same folder as the index.html file at minimum.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735647">17</a> by Neil Thomas
		posted on 12/7/2011 at 2:35 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>This is amazing! It works perfect on the iPhone too :)</p><p>I was wondering, would this support RSS images too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735671">18</a> by Raymond Camden
		posted on 12/7/2011 at 6:42 PM
		</div>
		<div class="comment_text"><p>The code I have now doesn't look for it. But you could modify it quickly enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735653">19</a> by Neil Thomas
		posted on 12/8/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>Thanks for the quick response.</p><p>My JS knowledge is pretty poor, but I'm learning  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735670">20</a> by Mike
		posted on 12/8/2011 at 6:41 AM
		</div>
		<div class="comment_text"><p>This is a great way to have an RSS reader w/o he use of PHP thanks for writing the article!</p><p>I am using this code to link to a Youtube channel's rss feed. It works well but I would like to have the user click on the headline and get sent directly to the link instead being sent to the #contentpage. Is that possible? Thanks for any info</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735660">21</a> by Raymond Camden
		posted on 12/8/2011 at 7:21 PM
		</div>
		<div class="comment_text"><p>Just change this:</p><p>s += '&lt;li&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/li&gt;';</p><p>Get rid of the class, the data-entryid, and just add url="X" where X is v.... one sec. link. Yeah, should be <a href="http://disq.us/url?url=http%3A%2F%2Fv.link%3AngRLI8bL5ZXNwifEn06ZQWB06WM&amp;cuid=3321886" rel="nofollow noopener" title="v.link">v.link</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735651">22</a> by Mike
		posted on 12/10/2011 at 1:29 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>I followed every direction but the last one, I was a little confusing; what did you mean by "just add url="X" where X is v.... one sec. link. Yeah, should be <a href="http://disq.us/url?url=http%3A%2F%2Fv.link%3AngRLI8bL5ZXNwifEn06ZQWB06WM&amp;cuid=3321886" rel="nofollow noopener" title="v.link">v.link</a>."</p><p>This is what I got so far, I think its really close I just need one more thing to fix it.. check it out if you have the time.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Flamike%2FTsk7G%2F%3AgMqn-m2QgiCFXHsnFaduA6X44-k&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/lamike/Tsk7G/">http://jsfiddle.net/lamike/...</a></p><p>Thanks a lot,</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735668">23</a> by Raymond Camden
		posted on 12/10/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>So - you got the link out of the XML, but you didn't use it when rendering the entry data.</p><p>var s = '';<br>$.each(entries, function(i, v) {<br>s += '&lt;li&gt;&lt;a href="#contentPage"'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/li&gt;';<br>});</p><p>Change the link:</p><p>s += '&lt;li&gt;&lt;a href="'+<a href="http://disq.us/url?url=http%3A%2F%2Fv.link%3AngRLI8bL5ZXNwifEn06ZQWB06WM&amp;cuid=3321886" rel="nofollow noopener" title="v.link">v.link</a>+'"&gt;'+v.title+'&lt;/a&gt;&lt;/li&gt;';</p><p>Watch out for typos there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735654">24</a> by developer
		posted on 12/13/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>I'm trying to put some new tags but my app don't show this!</p><p>I try with new tags like "&lt;test&gt;" but with [...] find.(test).text() don't show anything!!</p><p>The XML file is generated by a PHP and is validated by W3. Anybody can help me? Thanks! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735663">25</a> by Raymond Camden
		posted on 12/14/2011 at 12:11 AM
		</div>
		<div class="comment_text"><p>You would need to share a bit more code. If you do so, please use pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735666">26</a> by Developer
		posted on 12/14/2011 at 9:14 PM
		</div>
		<div class="comment_text"><p>No way, I solved correctly this problem :)</p><p>But there is a new problem...</p><p>I need to know how I can update or remove saved data in device. If the app have been show XML data, if you close the app and update the XML file with new information in the server and open again the app you can't see the new info... because the data was saved in device like temporary files.</p><p>If you go to the app list and clean the saved data you can see the new XML info.</p><p>Is there any solution for this?</p><p>Sorry for my bad english... :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735667">27</a> by Raymond Camden
		posted on 12/15/2011 at 7:33 PM
		</div>
		<div class="comment_text"><p>What you are seeing is simply the app being resumed. You can listen for resume events in PhoneGap and simply refetch the data. Or, you can also provide a Reload type button in the app so users can refresh it themselves. Or both. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735649">28</a> by EoinOC1
		posted on 12/16/2011 at 9:20 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I got the rss feed working about a week on an IPhone app with phonegap and sent it out for testing this week. But today all the apps rss feeds are failing and I dont know why. They were all working fine up to yesterday. The simulator is failing to run the rss feed also.</p><p>Just wondering if you would have an idea why this would be happening. Has there been a change in the code of the scripts src or something???</p><p>Any advice would be appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735664">29</a> by Raymond Camden
		posted on 12/17/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>Simply add an error handler to the code. Mine example does not have that, and it is a mistake. I can help you with this, but not till Monday - going out of town. If you can't wait, go to jQuery's site and look at how they handle errors for Ajax calls.</p><p>And thank you for bringing this up. I was remis in not supporting that immediately. I apologize!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735650">30</a> by Raymond Camden
		posted on 12/19/2011 at 8:24 AM
		</div>
		<div class="comment_text"><p>Ok, got a simple example working - will post an update tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735657">31</a> by retiredgamerz
		posted on 12/19/2011 at 9:20 AM
		</div>
		<div class="comment_text"><p>Hi, raymond, thanks for the tutorial..</p><p>I have followed the tutorial well, but I have several question.<br>1. Everytime I choose one of the rss feed, and then I press the back button, the application load some more feeds.<br>Example:<br>The first time application start, <br>the lists is just:<br>-A<br>-B,<br>but when I choose one of them, and press back to the list, it will be,<br>-A<br>-B<br>-A<br>-B</p><p>How to solve this problem?<br>2. How can I get image from the rss file in javascript?</p><p>Thanks.. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735661">32</a> by Raymond Camden
		posted on 12/19/2011 at 4:52 PM
		</div>
		<div class="comment_text"><p>I fixed that too (see earlier comment about error handling). The quick fix for you is to simply add entries=[] into the get() callback. Or just wait till later today - I'll be blogging it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735655">33</a> by Raymond Camden
		posted on 12/20/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Hey guys - please see my follow up here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F12%2F19%2FPhoneGap-RSS-Reader--Part-2%3ALhWVngMAH1QSpPsmTVL_jtnSYyY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/12/19/PhoneGap-RSS-Reader--Part-2">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735656">34</a> by Asif Iqbal
		posted on 1/14/2012 at 3:47 AM
		</div>
		<div class="comment_text"><p>Oh man you did a very fantastic job. I am very new in Android development and your article helped me out.</p><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735658">35</a> by salman
		posted on 3/17/2012 at 9:14 PM
		</div>
		<div class="comment_text"><p>can i get the source code for above app pls???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735662">36</a> by Raymond Camden
		posted on 3/17/2012 at 9:21 PM
		</div>
		<div class="comment_text"><p>It is in the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735675">37</a> by khushboo
		posted on 7/16/2012 at 11:10 AM
		</div>
		<div class="comment_text"><p>Superb article thnks...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735678">38</a> by toddysm
		posted on 7/17/2012 at 2:17 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am trying your example but it throws the following error when I try to load the page in the Emulator:<br>XMLHttpRequest cannot load http://127.0.0.1:44104/[some-GUID]. Origin null is not allowed by Access-Control-Allow-Origin<br>The error is thrown by the following line in the code:<br>$("#mainPage").live("pageinit", function() { ...<br>Do you have any idea what the solution could be?<br>I am using Android 4.1 emulator for testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735677">39</a> by Raymond Camden
		posted on 7/17/2012 at 3:31 AM
		</div>
		<div class="comment_text"><p>Sorry - no idea. I've never seen that before. Have you gotten other PhoneGap apps to work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735679">40</a> by toddysm
		posted on 7/18/2012 at 11:05 AM
		</div>
		<div class="comment_text"><p>I was having some issues with other Phonegap/JQuery apps but now those are working. Still trying to run your app though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735680">41</a> by soumavo chatterjee
		posted on 8/30/2012 at 4:48 PM
		</div>
		<div class="comment_text"><p>How can I combine two or more feeds . As for single feed it is working fine. But How to combine more than one feed for it.</p><p>Please suggest .</p><p>Thanks<br>Soumavo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735681">42</a> by Raymond Camden
		posted on 8/30/2012 at 6:11 PM
		</div>
		<div class="comment_text"><p>First, I'd recommend reading the latest entry in this 'series' (yes, it is a series now):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F8%2F17%2FPhoneGap-RSS-Reader--Part-5%3AyP9hLUGN1PSJIR_MvhAV1m90XbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/8/17/PhoneGap-RSS-Reader--Part-5">http://www.raymondcamden.co...</a></p><p>I switched to using Google's Feed API to handle parsing the RSS. Unfortunately, it only allows for one feed at a time.</p><p>What you would want to do is make use of something like jQuery Deferreds to handle firing N requests and waiting for them to all to finish.</p><p>Next - you would combine the data into one array.</p><p>Finally - you would want to sort them by date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735684">43</a> by Astrid
		posted on 10/11/2013 at 4:41 PM
		</div>
		<div class="comment_text"><p>hi i 've started a rss reader app with phonegap. i have 2 questions what happens when the local storage is full?</p><p>i don't want the app to re download all news everytime hox can i make it download only the new ones?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735682">44</a> by Raymond Camden
		posted on 10/11/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>If you fill up LS, you will get an error. For deep storage I'd use something like WebSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735683">45</a> by Sue
		posted on 1/9/2014 at 10:47 AM
		</div>
		<div class="comment_text"><p>Hi..I would say, this is a great tutorial, however, the feed does not work when I try it in my android device. There are no feed shown though my device already connected to internet. My device is android 4.0.<br>When I test it in eclipse and my laptop browser, it works fine..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735689">46</a> by Raymond Camden
		posted on 1/9/2014 at 6:13 PM
		</div>
		<div class="comment_text"><p>You may want to ensure the URL for the feed is whitelisted. See the docs: <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F3.3.0%2Fguide_appdev_whitelist_index.md.html%23Whitelist%2520Guide%3AVa-J167immYvgZXZG_Uhkx8oUmg&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/3.3.0/guide_appdev_whitelist_index.md.html#Whitelist%20Guide">http://cordova.apache.org/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735685">47</a> by Sue
		posted on 1/10/2014 at 12:39 PM
		</div>
		<div class="comment_text"><p>Thank you. It works!! After I add the permission and all I have to do is  make sure my device is connected to facebook as I want the feed to fetch my facebook news feed :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735686">48</a> by Dina
		posted on 3/16/2014 at 11:42 AM
		</div>
		<div class="comment_text"><p>It doesn't work with me <br>I only get a blank page with "SimpleBlog by Raymond Camden"<br>no thing more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735687">49</a> by Raymond Camden
		posted on 3/16/2014 at 3:58 PM
		</div>
		<div class="comment_text"><p>Try debugging then. You should be able to see something if you do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735692">50</a> by micaot
		posted on 5/13/2014 at 11:32 PM
		</div>
		<div class="comment_text"><p>I'm implementing your code for a PhoneGap project the phonegap versión is 3.0, and I install inappbrowser plugin in order to open the web page in a native browser, but the link created for read more don't work with <a href="http://disq.us/url?url=http%3A%2F%2FWindow.open%3AEQXZvu2GBR6pE6u-KGThoV1dEx4&amp;cuid=3321886" rel="nofollow noopener" title="Window.open">Window.open</a>('Linkcreated').<br>I need some help please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735690">51</a> by Raymond Camden
		posted on 5/13/2014 at 11:33 PM
		</div>
		<div class="comment_text"><p>Did you use <a href="http://disq.us/url?url=http%3A%2F%2FWindow.open%3AEQXZvu2GBR6pE6u-KGThoV1dEx4&amp;cuid=3321886" rel="nofollow noopener" title="Window.open">Window.open</a> or <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3F%3AgIrjD8dpw5Lb7zi13jdCdEnQyx8&amp;cuid=3321886" rel="nofollow noopener" title="window.open?">window.open?</a> It should be lower case. Do you see an error in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735691">52</a> by micaot
		posted on 5/14/2014 at 12:13 AM
		</div>
		<div class="comment_text"><p>Thanks for replay, this is the code:<br>$("#contentPage").live("pageshow", function(prepage) {<br>	//Set the title<br>	$("h1", this).text(entries[selectedEntry].title);<br>	var contentHTML = "";<br>	contentHTML += entries[selectedEntry].description;<br>	contentHTML += '&lt;img width="100%" src="' + entries[selectedEntry].imagen + '"&gt;';<br>	contentHTML += '&lt;a href="#" class="ui-btn ui-icon-eye ui-btn-icon-right ui-shadow ui-corner-all" onclick="<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>("' + entries[selectedEntry].url + '","_system")"&gt;read more.&lt;/a&gt;';<br>	$('#entryText',this).html(contentHTML);</p><p>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735693">53</a> by micaot
		posted on 5/14/2014 at 12:16 AM
		</div>
		<div class="comment_text"><p>sorry...<br>no i dont see any errors in console</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735694">54</a> by Raymond Camden
		posted on 5/17/2014 at 3:49 AM
		</div>
		<div class="comment_text"><p>When you use an onclick like that, you have to also return false. You would add that after the ).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735695">55</a> by Gabriele
		posted on 5/27/2014 at 9:41 PM
		</div>
		<div class="comment_text"><p>I've ported this code in backbone/require applications, for more information see <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fgabrycaos%2FRSSReader%3Ax-NM82m5M5xdZ0gADAGvZ62J4b0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/gabrycaos/RSSReader">https://github.com/gabrycao...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735696">56</a> by Raymond Camden
		posted on 5/27/2014 at 9:44 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that Gabriele.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735697">57</a> by Bill SerGio The Infomercial Ki
		posted on 6/23/2014 at 12:54 PM
		</div>
		<div class="comment_text"><p>You don't want to use Google for a JSONP server because Google caches the requests for as long as a week. Create your own JSONP RSS Feeds Server. See this article on CodeProject with full source code for creating RSS JSONP Feeds for PhoneGap Cordova Mobile Apps which explains JSONP in detail: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.codeproject.com%2FArticles%2F788762%2FPhoneGap-Cordova-JSONP-RSS-Feeds%3AVbruOA2CJCI8y-GaP3OFYFg2OLw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codeproject.com/Articles/788762/PhoneGap-Cordova-JSONP-RSS-Feeds">http://www.codeproject.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735699">58</a> by Raymond Camden
		posted on 6/23/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>Well, that's only useful if you have access to the server itself. If you are parsing someone else's RSS feed, you can't just get a JSON/P version of it automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735698">59</a> by Raymond Camden
		posted on 6/23/2014 at 6:25 PM
		</div>
		<div class="comment_text"><p>And I think it would be *much* easier to simply append a dynamic value, as described here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkmees.github.io%2Fblog%2F2012%2F03%2F29%2Fbypassing-the-google-feed-api-cache%2F%3AwzcqxJ1vxwGMxqMlzxflW8ozA_0&amp;cuid=3321886" rel="nofollow noopener" title="http://kmees.github.io/blog/2012/03/29/bypassing-the-google-feed-api-cache/">http://kmees.github.io/blog...</a></p><p>I've seen a few people recommend this for helping with Google caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1896822561">
	<div>
		<img src="https://disqus.com/api/users/avatars/ardiani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1896822561">60</a> by ardiani
		posted on 3/9/2015 at 3:46 PM
		</div>
		<div class="comment_text"><p>Thank you very much for the good work Raymond, it works good when i test it on Android Virtual device but not on a real device. Could you tell me what could be the issue ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1896825754">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1896825754">61</a> (In reply to <a href="#c_1896822561">#60</a>) by Raymond Camden
		posted on 3/9/2015 at 3:46 PM
		</div>
		<div class="comment_text"><p>No, but you could tell me. :) Use Remote Debugging to test and tell me what you see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1906676452">
	<div>
		<img src="https://disqus.com/api/users/avatars/ardiani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1906676452">62</a> (In reply to <a href="#c_1896825754">#61</a>) by ardiani
		posted on 3/14/2015 at 12:01 PM
		</div>
		<div class="comment_text"><p>Ok Raymond i figured it out, the problem was the actual device was not working properly, i tested in two others it works perfect. Thanks man!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2383819507">
	<div>
		<img src="https://disqus.com/api/users/avatars/zettadevs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2383819507">63</a> by Zetta Devs
		posted on 11/29/2015 at 1:43 PM
		</div>
		<div class="comment_text"><p>Please tell me how to make rss feed mobile app for cross platform by using intel XDK</p></div>
	</div>
</div>
		
<div class="comment" id="c_2383843357">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2383843357">64</a> (In reply to <a href="#c_2383819507">#63</a>) by Raymond Camden
		posted on 11/29/2015 at 2:10 PM
		</div>
		<div class="comment_text"><p>Sorry - I don't use that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2385175611">
	<div>
		<img src="https://disqus.com/api/users/avatars/zettadevs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385175611">65</a> (In reply to <a href="#c_2383843357">#64</a>) by Zetta Devs
		posted on 11/30/2015 at 12:34 PM
		</div>
		<div class="comment_text"><p>ok sir....</p></div>
	</div>
</div>
		
<div class="comment" id="c_2487922315">
	<div>
		<img src="https://disqus.com/api/users/avatars/princechibykogundu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2487922315">66</a> by Prince Chibyk Ogundu
		posted on 1/31/2016 at 2:43 PM
		</div>
		<div class="comment_text"><p>Hello thanks very much but i am currently developing a news app and needed to know how to get the news updates from within my area and breaking news update. i am developing the app using html, css, bootstrap, js, and J Query thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2488016597">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2488016597">67</a> (In reply to <a href="#c_2487922315">#66</a>) by Raymond Camden
		posted on 1/31/2016 at 4:04 PM
		</div>
		<div class="comment_text"><p>I'm sorry but I do not understand what you are asking. Can you rephrase it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2488041632">
	<div>
		<img src="https://disqus.com/api/users/avatars/princechibykogundu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2488041632">68</a> (In reply to <a href="#c_2488016597">#67</a>) by Prince Chibyk Ogundu
		posted on 1/31/2016 at 4:24 PM
		</div>
		<div class="comment_text"><p>I asked how to use a code to get news updates around or within your town/community because I'm developing a news app but do not know how to get the code for any update </p></div>
	</div>
</div>
		
<div class="comment" id="c_2488336926">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2488336926">69</a> (In reply to <a href="#c_2488041632">#68</a>) by Raymond Camden
		posted on 1/31/2016 at 7:50 PM
		</div>
		<div class="comment_text"><p>If I read you right, you are looking for a way to get news near where you live. I don't know what services exist for that. All I can recommend is what I'd do - Googling for it.</p></div>
	</div>
</div>
		