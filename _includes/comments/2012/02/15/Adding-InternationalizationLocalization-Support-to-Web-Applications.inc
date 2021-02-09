
<div class="comment" id="c_1713738981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738981">1</a> by Ron Rattie
		posted on 2/15/2012 at 11:07 PM
		</div>
		<div class="comment_text"><p>What nothing about Word? ah man...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738980">2</a> by Ron Rattie
		posted on 2/15/2012 at 11:22 PM
		</div>
		<div class="comment_text"><p>All kidding aside, I remember something like this being in the Joomla CMS. They had a directory of language files for translating the different site elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738982">3</a> by Derrill
		posted on 2/16/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>Wow, perfect timing! I have a client coming over in about...29 minutes... to talk about this very subject!<br>Thank You!<br>Merci!<br>Gracias!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738990">4</a> by Raymond Camden
		posted on 2/16/2012 at 12:35 AM
		</div>
		<div class="comment_text"><p>If the client is Fortune 500, visit the wishlist.</p><p>If the client is Fortune 100, pay off my car note.</p><p>Thanks. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738995">5</a> by Jaana Gilbert
		posted on 2/16/2012 at 7:49 AM
		</div>
		<div class="comment_text"><p>Not a code related note...<br>I benefitted from Internationalization of dates as a non-American. Born and raised in Finland, dates are shown as dd.mm.yyyy. I got my drivers license in the US when I was an exchange student in the 80's. In Finland you have to be 18 to get a drivers license and that's also the age limit to nightclubs. My birthday is October 6 (10/06/xxxx) and my US drivers license showed it as such 10/06/xxxx. Doorman in a Finnish nightclub read it as June 10th and I got in as underaged :) during the summer :D</p><p>Of course I will never tell this to my 6yr old twin girls. I'll let them have fond memories of their mommy's native country and Santa (Santa's from Finland ya'll).</p><p>Jaana</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738996">6</a> by James Eisenlohr
		posted on 2/16/2012 at 7:38 PM
		</div>
		<div class="comment_text"><p>Great article, Ray! I've been wanting to start implementing Globalization of some sites and this was an excellent introduction. Would love to see more in depth articles in the future! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738998">7</a> by Sharon
		posted on 2/17/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>We built something similar for "large global manufacturer" for localizing their sites, but without the jQuery piece.  The part that bit us the most was doing single word translations vs. phrase translations, and translations where the english word had differing translations depending on context.  We had to abstract out the key to be something other than the english word to call the translation we wanted.</p><p>Globalization, it's never as simple as this equals that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738999">8</a> by Richard
		posted on 2/17/2012 at 7:28 PM
		</div>
		<div class="comment_text"><p>Hi Ray - thanks for this. You want real world examples, so I'll just but in and say that we use Paul's JavaRB CFC for most of our websites (all in CF) and it works fine.</p><p>I'd like to confirm your point that creating the actual language / translation files is definitely the biggest part of this job, especially when concerned with the static part of the interface. It's not just a case of translating words. Often a variable, or variables need to be inserted into a translated string or phrase - and of course with different languages this can present a problem  (formatRBstring does it in Paul's code). In some cases you may have to insert a single string, in other cases more than one. In some languages if you insert two or more different strings, they may come in different order. Managing your language file variables is also critical - handling upper and lower case, or fields starting in upper case. All very time consuming.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739000">9</a> by Raymond Camden
		posted on 2/17/2012 at 7:36 PM
		</div>
		<div class="comment_text"><p>Good points, Richard. I should point out - the jQuery library I used _does_ support variables in the strings, I just didn't need any of that for this demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739002">10</a> by Richard
		posted on 2/17/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>Ray - just to make it clear, I wasn't criticising the code or examples, just adding my tuppence-worth that producing multi-lingual websites can be pretty tough. Our sites are not exactly completely multilingual - the user/client can select the interface language only. Managing multilingual content is of course another thing altogether, but not really related to your topic of internailisation. Why don't we all just speak Klingon?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739005">11</a> by Raymond Camden
		posted on 2/17/2012 at 8:05 PM
		</div>
		<div class="comment_text"><p>Oh, I didn't take it as a critique at all! I just wanted to make sure folks knew it was possible with the plugin I used since my examples were simple. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739003">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739003">12</a> by Nando Breiter
		posted on 2/25/2012 at 8:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>One pet peeve that I have on this topic is how often I run into web applications built that restrict formatting in the name of "validation". To me, a valid phone number is one you can use to call me on the phone. A valid address is one you can use to send a letter to me. And yet I find that very often, US based developers make the assumption that every phone number in the world has 10 digits, or that every zip code in the world has 5 digits, and validation routines are run to make sure the phone number submitted is a 10 digit numeric so that it can be stored as a numeric in the database. You would have no idea how many times it has been impossible for me to enter my valid phone number or address in web applications built like that - including on (gasp!) <a href="http://disq.us/url?url=http%3A%2F%2Fadobe.com%3Azj9nzARVDYA61MFaxH3eSI3oVP4&amp;cuid=3321886" rel="nofollow noopener" title="adobe.com">adobe.com</a>.</p><p>Stuff like phone numbers and zip codes are stings, always. There is no way a web developer can ensure a user enters a valid phone number, one that can be used to reach them on the phone, with an algorithm. And generally speaking, all web applications hosted on the internet are available to every country in the world, so this would apply to any site aimed at an international audience, even if it remains only in English.</p><p>Email address validation routines drive me nuts. So many of them, especially those with legacy algorithms, invalidate valid email addresses (ones that can be used to email a real person) because of the continuing expansion of top level domains. Don't forget that even if an algo is valid for all top level domains today, it may not be in a year's time.</p><p>The other thing that developers are really screwing up these days is to enforce language selection, and I really mean _enforce_, shove it down your throat with no possibility to change it, based on a user's geographical location. I live in Switzerland. German, French, Italian, Romansh and yes, English are the languages generally spoken here depending on the region and the participants in the conversation. And yet companies like Google, Adobe (again!), and a host of others will now geolocate visitors, and in my case, ONLY show their website to me in bloody German with no possibility at all to change the language. I f*****g hate that! Not because I dislike German, but simply because it is so utterly disrespectful to refuse to communicate with someone in the language they are most familiar with _when_ _you_ _can_.</p><p>Companies have no idea how many people they offend, or at least alienate, like this. Give users the ability to choose which language they are most comfortable with, always. People are not trees. They are not glued to the region they were born in, and here in Europe, lots of folks wind up in another country (or language speaking region) besides that of their origin. I am genuinely surprised how utterly rare it has become that a company that has globalized their website allows a visitor decide what language they speak! Imagine how you would feel, Ray, if the ONLY language you could view <a href="http://disq.us/url?url=http%3A%2F%2FAdobe.com%3AF-lEhjY67nEyMJ-Pxxz4lVWafuI&amp;cuid=3321886" rel="nofollow noopener" title="Adobe.com">Adobe.com</a> in was Finnish, living in America, and knowing full well that Adobe was an American company.</p><p>Google isn't as bad, but they simply cannot seem to remember my language selection, and it's always in critical parts of the application. Navigation menus suddenly appear in German while other parts of the page remain in English.</p><p>To give a flavor of what typically happens outside of America, I'm exposed to a mix of English, Italian, Swiss Italian dialect, French, German, and Swiss German dialect every day. It's normal here, depending on the grouping of people conversing. And it's very rare for someone from the region I'm in to be fluent in high German, the language Adobe and so many other companies, even Apple and Microsoft, shove down our throats. Perhaps they can speak some Swiss German dialect, yes, but read and write high German?</p><p>It all boils down to user choice. In my opinion, globalized websites should always, always allow a high degree of choice. You would think I'm addressing a minority of sites and applications here, because it would seem to be such a common sense thing, but my experience is that almost all globalized sites I've come across, and big companies like Apple, Microsoft, Adobe, and a whole slew of other tech companies, simply have not gotten these basics right yet. And without these basics, the effort to globalize seems somewhat pointless.</p><p>By the way, would someone please order and purchase a Windows 7 serial number for me? Believe it or not, unless I manage it all in German, it's impossible for me. On second thought, forget it. Windows Activation routine is also geo-located, and it's going to tell me it's invalid for the region I'm in. It's that bad, always.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739001">13</a> by Raymond Camden
		posted on 2/26/2012 at 12:46 AM
		</div>
		<div class="comment_text"><p>Wow, that's some feedback Nando. :) Thank you - you make some great points.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739008">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739008">14</a> by Nando Breiter
		posted on 2/26/2012 at 6:40 AM
		</div>
		<div class="comment_text"><p>I needed to order a new copy of my birth certificate a few years back. There was a dropdown to select the country to send it to, but the zip code had a validation routine on it that insisted on 5 numeric digits. I couldn't submit the form at first. I kept getting a validation message "Please enter a VALID zip code" Well my zip code here is 4 digits long, just like every other zip code in Switzerland. I thought about how the developer might have coded the routine, and then entered my zip code, 6999, then a space after it, submitted the form (with a fake telephone number because it wouldn't accept my real phone number). And somehow it worked. I was relieved I had gotten through another one of these.</p><p>Few days later I got an email from FedEx saying they had attempted delivery, but they needed me to confirm my correct street address. They weren't able to find via Cara in some city in Massachusetts with a zip code of 06999. I called FedEx and was on the phone for a very long time with them trying to convince them to send my birth certificate to Switzerland. Sorry, they couldn't, they said. "The zip code is clearly 06999 on the shipping bill, so that's where it was routed. Just give us your correct street address in Massachusetts and we'll deliver it." I kept say "But I'm in Switzerland - I entered my Swiss address in the form" and the lady kept repeating, stressing each word insistently, "Sir! Just give us your correct street address in Massachusetts and we'll deliver it."</p><p>I always seem to wind up on the phone with someone insisting some version of "but that's impossible!" after tangling with a mis-globalized web application. "Look, I speak English, I don't want the software interface for Abobe Creative Suite in German, in fact I couldn't use it if it was in German. I need the English version, but I can't buy the English version because I'm in Switzerland." "Sorry, but that's impossible. You have to have an American or Canadian delivery and credit card billing address, and access the website from either America or Canada, to purchase the English language version."</p><p>Anyway, the next mis-globablized website hurdle to get over, thru or under is how to get an activation key for the Windows 7 installation I have on Parallels that will work. I tried for about a half hour on Friday, but I just didn't have the stomach for it. I was locked out of English on all of <a href="http://disq.us/url?url=http%3A%2F%2Fmicrosoft.com%3A3TqcuZ76pXLbQbTIibPVt1F7oAY&amp;cuid=3321886" rel="nofollow noopener" title="microsoft.com">microsoft.com</a>, purchases seem possible only in German here in Switzerland.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739011">15</a> by Pete
		posted on 3/20/2012 at 9:26 PM
		</div>
		<div class="comment_text"><p>The 01/02 -&gt; 02/01 1st Feb, 2nd Jan date issue is quite possibly the thing I hate most about development. Languages always seem to default to handling it the "US" way, which is a pain, but it's never that hard to work around.</p><p>Also Ray, you've underlined something that's not a link... "introduce" in your second paragraph. That really threw me... I had to inspect the source to find out why the link wasn't working. Am I being old fashioned?</p><p>Nando you make some good (albeit angry sounding) points, I've had Google offer to translate pages that are perfectly fine in English into all manner of other languages.</p><p>It also reminds me a bit of how websites force you into or away from a mobile site without giving you the choice.</p><p>Finally, cool post Ray, those plugins look really useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739010">16</a> by Pete
		posted on 3/20/2012 at 9:27 PM
		</div>
		<div class="comment_text"><p>Whoops, when I said "Languages default to handling it the US way"... I probably should have been clearer, I meant programming/development langauges.</p><p>Although that's another point, is the MM/DD way more internationally accepted? Is it just us UK kind that use DD/MM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739013">17</a> by Jaana Gilbert
		posted on 3/20/2012 at 9:38 PM
		</div>
		<div class="comment_text"><p>I believe the US date (mm/dd) is only used in the US, the rest of the world pretty much uses dd/mm order with the date. <br>I could be wrong, please correct me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739016">18</a> by Kebap
		posted on 7/27/2012 at 11:09 AM
		</div>
		<div class="comment_text"><p>See here about international date formats. The US of A is really the only nation left that would use only MDY and no other orders. Then again, 2012-07-23 would be used by the US Army and should be understood pretty well internationally. Nobody does it like yyyy-dd-mm, always yyyy-mm-dd.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FDate_format_by_country%23Map%3AbIPH42fhVcgXl_B52__81wb6QKI&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Date_format_by_country#Map">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739015">19</a> by Raymond Camden
		posted on 7/27/2012 at 5:24 PM
		</div>
		<div class="comment_text"><p>America and Belize - leading the world!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739017">20</a> by Mark W
		posted on 12/11/2012 at 9:45 PM
		</div>
		<div class="comment_text"><p>One thing missing from this is SEO. The demo you provide does not use different URLS for content presented in different languages. I think it should. It makes much more sense in terms of SEO as you have essentially got different versions of the content. If you provided different URLs for the different languages then you would allow search engines to target users according to their language. Also, you would have three times as many pages and thus many more internal links and potential external links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739019">21</a> by Raymond Camden
		posted on 12/11/2012 at 9:50 PM
		</div>
		<div class="comment_text"><p>Would SEO be important for a web "app" though? (Note the emphasis.) I can't imagine, for example, Capital One, needing SEO for their account screens.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739018">22</a> by Mark W
		posted on 12/13/2012 at 1:37 AM
		</div>
		<div class="comment_text"><p>Agreed, for an App then I guess its less important. An App is by its nature often dynamic, hidden behind an authentication layer and very content slim. However, they are also often connected with a website and the delineation can become blurred, especially with apps that produce publicly accessible content (like Facebook). I think is worth keeping in mind if there is publicly accessible Content within the app you are creating. Indeed, especially if that content is created in multiple languages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739020">23</a> by summ3r
		posted on 2/5/2013 at 6:33 PM
		</div>
		<div class="comment_text"><p>Hi,<br>If you’re interested to localize web software, PC software, mobile software or any other type of software, I warmly recommend a new l10n tool that my team recently developed and will probably make your work a lot faster and easier:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpoeditor.com%2F%3AMQlWUUuRntqIygqSdQ8IKskwQAs&amp;cuid=3321886" rel="nofollow noopener" title="http://poeditor.com/">http://poeditor.com/</a></p><p>POEditor is intuitive and collaborative and has a lot of useful features to help your translations management process, which you can find enlisted on our website.<br>You can import from multiple localization file formats (like pot, po, xls, xlsx, strings, xml, resx, properties) or just use our REST API.</p><p>Feel free to try it out and recommend it to developers and everyone who might find it useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739021">24</a> by Jullianne
		posted on 11/5/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>Hello everyone! If you are like me, curious to discover new resources about localization with interesting topics, I suggest to have a look here and find various articles on localization industry and everything else related with it: <a href="http://disq.us/url?url=http%3A%2F%2Faboutlocalization.wordpress.com%2F%3A2UjvJu1VRNHcj6YLcwR_zRB8rjE&amp;cuid=3321886" rel="nofollow noopener" title="http://aboutlocalization.wordpress.com/">http://aboutlocalization.wo...</a></p></div>
	</div>
</div>
		