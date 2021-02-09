
<div class="comment" id="c_1968165333">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1968165333">1</a> by Šime Vidas
		posted on 4/15/2015 at 4:22 AM
		</div>
		<div class="comment_text"><p>Link to IE bug since it wasn’t linked in the post :) <a href="https://disq.us/url?url=https%3A%2F%2Fconnect.microsoft.com%2FIE%2Ffeedback%2Fdetails%2F1248186%3Amv9kHH9sQfqjAZYo22HxXwspp2E&amp;cuid=3321886" rel="nofollow noopener" title="https://connect.microsoft.com/IE/feedback/details/1248186">https://connect.microsoft.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1968809760">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1968809760">2</a> by Raymond Camden
		posted on 4/15/2015 at 3:10 PM
		</div>
		<div class="comment_text"><p>Thanks - and thanks for including me in the daily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1970319078">
	<div>
		<img src="https://disqus.com/api/users/avatars/christiancook.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1970319078">3</a> by Christian Cook
		posted on 4/16/2015 at 9:00 AM
		</div>
		<div class="comment_text"><p>I'd say it would be best to estimate your space usage first as a determiner for what storage type you use. I've been bitten by exceeding localStorage capacity in the past, so now use a mixture of creating/modifying local files (through cordova) and localStorage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1971121887">
	<div>
		<img src="https://disqus.com/api/users/avatars/silentmatt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1971121887">4</a> by Matthew Crumley
		posted on 4/16/2015 at 6:10 PM
		</div>
		<div class="comment_text"><p>I have to disagree with this sentence: "I’m not exactly sure what to think about that, outside of the fact that “silent fail” is the worst thing to happen to development since starting arrays at 0." Silent failure is the worst, but starting arrays at 0 was a good idea. Nice post though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1971125172">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1971125172">5</a> (In reply to <a href="#c_1971121887">#4</a>) by Raymond Camden
		posted on 4/16/2015 at 6:11 PM
		</div>
		<div class="comment_text"><p>No one starts counting at 0. I get that it was - originally - a performance thing - but that shouldn't matter now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972302067">
	<div>
		<img src="https://disqus.com/api/users/avatars/robbert_broersma.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972302067">6</a> by Robbert Broersma
		posted on 4/17/2015 at 10:50 AM
		</div>
		<div class="comment_text"><p>localStorage should always be in a try/catch because Safari in private mode will always throw #22. Breaks many sites.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972307668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972307668">7</a> by Raymond Camden
		posted on 4/17/2015 at 10:55 AM
		</div>
		<div class="comment_text"><p>I didn't test Opera until this morning, but as expected, it has the same result as Chrome, DOMException code 22.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1972899716">
	<div>
		<img src="https://disqus.com/api/users/avatars/silentmatt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1972899716">8</a> (In reply to <a href="#c_1971125172">#5</a>) by Matthew Crumley
		posted on 4/17/2015 at 5:22 PM
		</div>
		<div class="comment_text"><p>It does take a little while to get used to, and it's not without its downsides (especially for beginners). To me though, it makes more sense once you get used to it because it leads to 0 &lt;= index &lt; length indexing, which makes things like representing empty ranges or accessing the (index % length)th array element more natural. Of course, part of it could be that starting with 0 for so long has shaped the way I think about indexing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1973796261">
	<div>
		<img src="https://disqus.com/api/users/avatars/michaelkubler.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1973796261">9</a> (In reply to <a href="#c_1972899716">#8</a>) by Michael Kubler
		posted on 4/18/2015 at 4:08 AM
		</div>
		<div class="comment_text"><p>I'm pretty sure the issue with starting arrays at 0 is the off by one errors e.g The number of items in a list is different from the index of the last item in the list. This has caused a whole variety of problems and bugs that aren't always easy to spot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1973797289">
	<div>
		<img src="https://disqus.com/api/users/avatars/michaelkubler.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1973797289">10</a> (In reply to <a href="#c_1972302067">#6</a>) by Michael Kubler
		posted on 4/18/2015 at 4:10 AM
		</div>
		<div class="comment_text"><p>Ahh so you can't even store anything in private mode? Damn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1976621963">
	<div>
		<img src="https://disqus.com/api/users/avatars/leandroaraujome.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976621963">11</a> by Leandro
		posted on 4/20/2015 at 1:08 AM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fchrisben%2Fimgcache.js%3A3TzcvKBuL3_0kgJd5RQKY8WULoM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/chrisben/imgcache.js">https://github.com/chrisben...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1976623729">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976623729">12</a> (In reply to <a href="#c_1976621963">#11</a>) by Raymond Camden
		posted on 4/20/2015 at 1:10 AM
		</div>
		<div class="comment_text"><p>Yes? I mean, can you clarify why you are linking to that and how it relates to the discussion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1977561463">
	<div>
		<img src="https://disqus.com/api/users/avatars/jezmck.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1977561463">13</a> (In reply to <a href="#c_1971121887">#4</a>) by Jez McKean
		posted on 4/20/2015 at 3:31 PM
		</div>
		<div class="comment_text"><p>Array indices starting at 0 is fine, the months starting there on the other hand...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1977638834">
	<div>
		<img src="https://disqus.com/api/users/avatars/silentmatt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1977638834">14</a> (In reply to <a href="#c_1977561463">#13</a>) by Matthew Crumley
		posted on 4/20/2015 at 4:15 PM
		</div>
		<div class="comment_text"><p>That, I agree with 100%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126215390">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126215390">15</a> by WebReflection
		posted on 7/9/2015 at 10:32 AM
		</div>
		<div class="comment_text"><p>not sure I got the "overkill" part of using setItem inside a try/catch ... I mean, localStorage is already overkill since it's synchronous and heavy/blocking on slow SD cards, using the only possible safety belt as try/catch is in that case cannot overkill much. Altohugh, the problem is that once you have a failure, usually nobody has any idea what to do. There could be keys you don't own within the database, so clear is not an option unless you want be the most obtrusive code out there. I've used in many real-world projects this project which use at least a self-contained access to the database <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FWebReflection%2Fdb%23asyncstorage--a-developer-friendly-asynchronous-storage%3AA4OEbIYLwqhzr22zqqvJJD4p-cc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/WebReflection/db#asyncstorage--a-developer-friendly-asynchronous-storage">https://github.com/WebRefle...</a> including localStorage, so that if you clear it, you remove only things that you own and not every entry of the db.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126325168">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126325168">16</a> (In reply to <a href="#c_2126215390">#15</a>) by Raymond Camden
		posted on 7/9/2015 at 12:08 PM
		</div>
		<div class="comment_text"><p>"I mean, localStorage is already overkill since it's synchronous and heavy/blocking on slow SD cards, using the only possible safety belt as try/catch is in that case cannot overkill much."</p><p>I guess it depends then. For me, I've never encountered a site slowed down by LS. If it was a performance issue for you, try/catch wouldn't really help there.</p><p>"Altohugh, the problem is that once you have a failure, usually nobody has any idea what to do."</p><p>Why? Unless your app *requires* LS, then it should be fine to handle cases where it isn't supported, or a read fails. If you are using LS to _enhance_ your app, then having it not be available should be something you can handle well.</p><p>"There could be keys you don't own within the database, so clear is not an option unless you want be the most obtrusive code out there."</p><p>I'm not really sure what you mean here. You only have access to keys w/n your own domain. You can easily clear your own values w/o impacting other sites. What you describe is only an issue if you are working on a large site w/ multiple teams and not coordinating your development efforts. But outside of that, you (<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a>) can't remove keys someone else made (<a href="http://disq.us/url?url=http%3A%2F%2Fgoo.com%3AAkE-SSx4loVmq6GQz7gE5TrRLE8&amp;cuid=3321886" rel="nofollow noopener" title="goo.com">goo.com</a>).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126364230">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126364230">17</a> (In reply to <a href="#c_2126325168">#16</a>) by WebReflection
		posted on 7/9/2015 at 12:38 PM
		</div>
		<div class="comment_text"><p>&gt; You only have access to keys w/n your own domain</p><p>no, every script in the same domain has access to it ... now tell me how well you ensure your keys do not conflicts with other keys, and how often you loop over all keys to grab only yours and eventually clean them  if you have a size failure.</p><p>LS is more problematic when full and on "not-so-powerful" mobile device, on desktop evergreen browsers is not a big issue but also it makes little sense to use it since there a re better alternatives.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126376843">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126376843">18</a> (In reply to <a href="#c_2126364230">#17</a>) by Raymond Camden
		posted on 7/9/2015 at 12:47 PM
		</div>
		<div class="comment_text"><p>Um, I don't think you are explaining yourself right. If I set a localStorage value called name on <a href="http://disq.us/url?url=http%3A%2F%2Fraymondcamden.com%3AL1EnJFnw8u4fMVDhG6_ssI_8His&amp;cuid=3321886" rel="nofollow noopener" title="raymondcamden.com">raymondcamden.com</a>, and you try to read it on <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a>, it will not work. Period. That's how LocalStorage works. Maybe you are trying to say something else and I'm not understanding you. Can you clarify? If not, please provide proof of how a script on another domain can read the values on my domain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126410936">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126410936">19</a> (In reply to <a href="#c_2126376843">#18</a>) by WebReflection
		posted on 7/9/2015 at 1:04 PM
		</div>
		<div class="comment_text"><p>let's try again with a spoiler: hi, I am WebReflection, I've been doing web and mobile web development for the last 16 years and used and talked about JS/client-side databases for the last 6 or  more: how are you doing?</p><p>- - - - - -</p><p>back to the problem:</p><p>**every script in the same domain has access to it** so, unless you are the only script and  your script is not a library that other scripts could use, feel fre to use LS.clear();</p><p>In  every other case you should loop over all keys an dbe sure what you are either setting or removing or overwriting  is your own key ... YES, PER DOMAIN, unless you are the owner of such domain and you are the only script in it.</p><p>Developers don't usually do this, nobody is prefixing LS entries, not as common  practice. So once you have the try/ catch failing, what do you do exactly? Show me one single block  that deal with the problem and solve it, 'cause if you do, good for you, but I've never seen other libraries be that kind. Most common practice they just clear after keeping temporary in memory most needed own keys (without checking if anyn other key is own)</p><p>TL;DR ... the localStorage is a very poor API when it comes to cooperative scripts in  the same domain: it does not  scale in quote, it does not offer a way to be non obtrusive, it does not offer a way to easily avoid overwrites or clear of own property keys.</p><p>try/catch in all this mess is the last problem you have when it comes to "overkill", assuming we have the same meaning for the word overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126422107">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126422107">20</a> (In reply to <a href="#c_2126410936">#19</a>) by Raymond Camden
		posted on 7/9/2015 at 1:12 PM
		</div>
		<div class="comment_text"><p>Err, are we measuring sexual organs here? I've been doing web dev for 20 years. It doesn't make me any more smarter than you or more right. Let's keep to the topic, shall we?</p><p>"**every script in the same domain has access to it** so, unless you are the only script and your script is not a library that other scripts could use, feel fre to use LS.clear();"</p><p>So basically this goes back to what I said earlier. If you are working on a team at <a href="http://disq.us/url?url=http%3A%2F%2FFoo.com%3AR1OwUcMnrr1qKg2cMyOQI-dslTY&amp;cuid=3321886" rel="nofollow noopener" title="Foo.com">Foo.com</a>, then obviously you need to coordinate your use of LS. Just like you would need to coordinate Cookies too. And IndexedDB. Pretty much - hopefully - everything since you are working on the same web site. Your comments did not make it clear that you were speaking about that situation. I don't consider that an issue honestly. If you aren't coordinating with your coworkers to build your site than you are going to have multiple issues anyway.</p><p>In the *typical* use of LS, given that "you" represent the team for *your* site, then you are absolutely free to clear out whatever and use whatever w/o worry of messing stuff up.</p><p>In terms of library code - any library code that makes use of LS should clearly document it (ditto for cookies, IDB). I'm sure some libraries *do* make use of LS and don't document it, but you should blame the library, not LS. That's poor judgement/management on the author of the library and poor judgement on you (the generic you) on not reviewing the library before making use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2126494991">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2126494991">21</a> (In reply to <a href="#c_2126422107">#20</a>) by WebReflection
		posted on 7/9/2015 at 1:55 PM
		</div>
		<div class="comment_text"><p>it wasn't about competition,  it was about "please stop teaching me and rather try to understand what I am saying" , thank you.</p><p>Although, it ended up clearly with a different vision/PoV of the matter.</p><p>Put in this way: I add a listener to the document, who can remove it? **only** only me, and  only if I've kept a reference to such listener or the listener itself has a mechanism to be removed. **no other library/script/console-with-god-powers** should be able to remove that script. This is what I call a good cooperative API, and talking about DOM  events,  we have  an excellent example of an API that protect your own business, and if you attach your business to some component and  the page, other scripts, or your very same script, destroy such component in a dirty way,  all your listeners attached to any removed node will be freed from RAM accordingly. You are protected, and so are  others.</p><p>Now, you have local/sessionStorage, and a .clear() method that is handy when  you have a situation like the one you described in this post: no more space.</p><p>What do you do? Some third-part library/script might have set keys that  if you clean  them  will make the entire siite  stop working or ... who knows ... and if it's not your own code that caused the saturation of the quota, what else can you do if not clearing  the entire LS?</p><p>In  few words, a try/catch around a setItem is not the real issue or the overkill, ,because everything else could go wrong.</p><p>A try catch will not slow down anything with an already synchronous and slow API as LS  **is** but at least will give you a chance to fix something in case you are the only owner of the running code.</p><p>And by you, I mean **your team**, which could be either yourself alone,  or 1000 engineers.</p><p>I hope I've explained better why I've commented that try/catch, compared with all other problems we have in the LS world, couldn't really be consider as the overkill practice,  rather a good one that  won't cause problems but **might** help solving them  if we know how to and we don't want to be obtrusive.</p><p>Did I say I don't use localStorage since  every other option is better in  terms of quota, plus I have a library that works with named databases that fallbacks with named LS too so that .clear() wont' remove anything but your own data? The link was in the first answer.</p><p>Have a nice day</p></div>
	</div>
</div>
		
<div class="comment" id="c_2198165949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2198165949">22</a> (In reply to <a href="#c_1973796261">#9</a>) by Stijn de Witt
		posted on 8/17/2015 at 10:51 AM
		</div>
		<div class="comment_text"><p>I've been doing some programming in languages where arrays *did* start indexing at 1. I loved it initially, but when doing more complex things with arrays (storing a two-dimensional strycture in a one-dimensional array and calculating the index from x and y coordinates) I quickly found that when the index starts at one you end up having to write -1 very often.</p><p>So, even though it initially seems easier, when you get more experienced it actually becomes an annoying hassle to deal with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2198168184">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_gwFw58hvJO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2198168184">23</a> (In reply to <a href="#c_1972302067">#6</a>) by StijnDeWitt
		posted on 8/17/2015 at 10:53 AM
		</div>
		<div class="comment_text"><p>Yes, so true!! It's really annoying. Here is what I am doing to normalize Safari's Private Browsing mode now:</p><p>			var storage;<br>try {<br>  var x = <a href="http://disq.us/url?url=http%3A%2F%2FDate.now%3A9-PYgn9UhWHSNRM_AZu4qimtlFk&amp;cuid=3321886" rel="nofollow noopener" title="Date.now">Date.now</a>().toString();<br>  localStorage.setItem(x, x);<br>  var y = localStorage.getItem(x); <br>  localStorage.removeItem(x);<br>  if (y !== x) throw new Error();<br>  storage = localStorage;<br>} <br>catch(e) {<br>  storage = {<br>    storage: {},<br>    getItem: function(key) {return <a href="http://disq.us/url?url=http%3A%2F%2Fthis.storage%3AMeJKr0QcaZP-U_uke98MyNtVrA8&amp;cuid=3321886" rel="nofollow noopener" title="this.storage">this.storage</a>[key];},<br>    setItem: function(key, val) {<a href="http://disq.us/url?url=http%3A%2F%2Fthis.storage%3AMeJKr0QcaZP-U_uke98MyNtVrA8&amp;cuid=3321886" rel="nofollow noopener" title="this.storage">this.storage</a>[key] = val;},<br>    removeItem: function(key) {delete <a href="http://disq.us/url?url=http%3A%2F%2Fthis.storage%3AMeJKr0QcaZP-U_uke98MyNtVrA8&amp;cuid=3321886" rel="nofollow noopener" title="this.storage">this.storage</a>[key];}<br>  }<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2198187390">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2198187390">24</a> (In reply to <a href="#c_2198165949">#22</a>) by Raymond Camden
		posted on 8/17/2015 at 11:16 AM
		</div>
		<div class="comment_text"><p>I would argue that perhaps making it easier for 99% of usage makes it ok if it makes it less easy for 1% of usage. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2367063815">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_gwFw58hvJO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2367063815">25</a> (In reply to <a href="#c_2198187390">#24</a>) by StijnDeWitt
		posted on 11/18/2015 at 9:29 PM
		</div>
		<div class="comment_text"><p>Unfortunately it is more the other way around :)</p><p>Once you get used to array indexes starting at zero, it's much easier to work with. Besides, even if some smart language designer would now introduce a new language where indexes do start at 1, it would be totally annoying because everyone programs in more than one language these days so you would have to keep switching.</p><p>But now that we are talking about breaking conventions... What about QWERTY? How annoying is that? And who ever came up with the week having 7 days? A prime number? Really? How convenient :p</p><p>Or the months having 30 and 31 days except for july and august where the pattern suddenly breaks... And don't get me started on leap days!</p><p>These things are what makes programming so difficult. I heartily recommend Jon Skeet's fantastic article 'OMG! Ponies! (AKA Humanity? EPIC Fail!)' on this subject. It's a great read!<br><a href="http://disq.us/url?url=http%3A%2F%2Fcodeblog.jonskeet.uk%2F2009%2F11%2F02%2Fomg-ponies-aka-humanity-epic-fail%2F%3Av1i_pAj2amWqQVvuulF-Zlxo948&amp;cuid=3321886" rel="nofollow noopener" title="http://codeblog.jonskeet.uk/2009/11/02/omg-ponies-aka-humanity-epic-fail/">http://codeblog.jonskeet.uk...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2843681507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2843681507">26</a> (In reply to <a href="#c_2126494991">#21</a>) by Wayne
		posted on 8/18/2016 at 6:29 AM
		</div>
		<div class="comment_text"><p>You are ridiculous and alone that you encounter those problems just show that you are a wannabe scripter. Period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2915899468">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2915899468">27</a> by Antonio Gallo
		posted on 9/24/2016 at 11:45 AM
		</div>
		<div class="comment_text"><p>Did you ever got an error when using localForage API? Me never :/<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.badpenguin.org%2Fstore-offline-data-localforage-ionic-angular-mobile-app%3AeXtpZy0m0QZA1yT-o8YAvIWFFd0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.badpenguin.org/store-offline-data-localforage-ionic-angular-mobile-app">http://www.badpenguin.org/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2915948498">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2915948498">28</a> (In reply to <a href="#c_2915899468">#27</a>) by Raymond Camden
		posted on 9/24/2016 at 12:34 PM
		</div>
		<div class="comment_text"><p>localStorage just uses IDB/WebSQL/LocalStorage in the back end, so it would do whatever they do when storage goes over. You *can* max out WebSQL and IDB.</p></div>
	</div>
</div>
		