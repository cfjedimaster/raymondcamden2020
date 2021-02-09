
<div class="comment" id="c_3779896650">
	<div>
		<img src="https://disqus.com/api/users/avatars/awebster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3779896650">1</a> by Anthony
		posted on 2/28/2018 at 10:05 AM
		</div>
		<div class="comment_text"><p>Interesting... How would you augment this to include simple question constraints for instance: only show the 'maiden name' question if previously you answered 'female' and 'married'? Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_3780094399">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3780094399">2</a> (In reply to <a href="#c_3779896650">#1</a>) by Raymond Camden
		posted on 2/28/2018 at 1:37 PM
		</div>
		<div class="comment_text"><p>Many years ago I worked on a ColdFusion survey project called Soundings (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2Fsoundings%29%3ANEgOg2sJio5YPGeqtLQudcmFYgE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/soundings)">https://github.com/cfjedima...</a>. If I remember right, the way I handled this was by letting a question have a property that determined if it was shown or not. The property would point to another question (an earlier one of course) and a value. So question 10, for ex, would have a property ("toShow" or some such) that pointed to question 9 and the value true.</p><p>I handled an ELSE condition by simply ensuring the question after had flipped logic. So question 11 would only show if question 9 was false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3789645542">
	<div>
		<img src="https://disqus.com/api/users/avatars/awebster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3789645542">3</a> (In reply to <a href="#c_3780094399">#2</a>) by Anthony
		posted on 3/6/2018 at 12:29 PM
		</div>
		<div class="comment_text"><p>OK this is how I'm currently doing it : <a href="https://disq.us/url?url=https%3A%2F%2Fcodesandbox.io%2Fs%2Fryw0zvzn4%3Aw991gu8elHQUT3FpkATmJ0WkbiU&amp;cuid=3321886" rel="nofollow noopener" title="https://codesandbox.io/s/ryw0zvzn4">https://codesandbox.io/s/ry...</a></p><p>The quiz config lives in /modules/quiz/api/config.js</p><p>I'm currently working on intermediary async checks (like verifying the non-existence of the email via a REST call) but I'm not sure how to go about it. I'd be interested in your take on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3789734891">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3789734891">4</a> (In reply to <a href="#c_3789645542">#3</a>) by Raymond Camden
		posted on 3/6/2018 at 1:45 PM
		</div>
		<div class="comment_text"><p>You mean async processing of a quiz answer? While I'm sure it could be done - that to me doesn't really fit in with the idea of a "quiz" though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3814682866">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_c8NZ9ljHof.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3814682866">5</a> by Sebastian Perez
		posted on 3/20/2018 at 1:09 AM
		</div>
		<div class="comment_text"><p>Raymond , maybe you need to change the multiple choice option to checkbox ... beacuse it's meant to be like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3815149818">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3815149818">6</a> (In reply to <a href="#c_3814682866">#5</a>) by Raymond Camden
		posted on 3/20/2018 at 11:31 AM
		</div>
		<div class="comment_text"><p>I can see both being options. Someone could edit the code to let you use either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4115101454">
	<div>
		<img src="https://disqus.com/api/users/avatars/mattiaspalm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4115101454">7</a> by MP
		posted on 9/26/2018 at 1:46 PM
		</div>
		<div class="comment_text"><p>sourcecode? I stumble somewhere between stage 2 and 3 with the templates</p></div>
	</div>
</div>
		
<div class="comment" id="c_4120510391">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4120510391">8</a> (In reply to <a href="#c_4115101454">#7</a>) by Raymond Camden
		posted on 9/29/2018 at 1:42 PM
		</div>
		<div class="comment_text"><p>The full source code is in the CodePen embeds. You can click em to leave my site and hit CodePen directly which will make it easier to get the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4235850681">
	<div>
		<img src="https://disqus.com/api/users/avatars/dizid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4235850681">9</a> by Marc de Ruyter
		posted on 12/11/2018 at 8:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, <br>I can see that this is some neat and elegant code.<br>What i fail to see: how and where is vue.js loaded?</p><p>I have done a few dozen Vue.js tutorial apps, mostly with the CLI and understand that this: "const app = new Vue({ el:'#quiz'," is supposed to 'hook in' into the HTML.<br>I also re-read all installation docs on <a href="http://disq.us/url?url=http%3A%2F%2Fvuejs.org%3AbO9BNYRLWemXIA0DEkoYi1vp7Cs&amp;cuid=3321886" rel="nofollow noopener" title="vuejs.org">vuejs.org</a> and tried a few things, no avail.</p><p>Also, your approach to a vue app seems very different: with the html between backticks and all.</p><p>Any help to get this running locally appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4235922722">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4235922722">10</a> (In reply to <a href="#c_4235850681">#9</a>) by Raymond Camden
		posted on 12/11/2018 at 9:11 PM
		</div>
		<div class="comment_text"><p>So a few answers. When it comes to loading external JavaScript libraries, CodePen lets you specify URLs for your code. So you can add jQuery, or Angular, or Vue, etc. That's why you don't see Vue.js loaded, but you can pretty much pretend like it's a &lt;script&gt; tag you can't see. :)</p><p>As for your broader question about the CLI and like - when I first started using Vue, I focused on the "simple script tag" approach instead of the CLI as I found it MUCH easier to grok. No build process. In ways, it's like adding jQuery to a page. One of the reasons I fell in love with Vue is that it supported this option of development.</p><p>For me, the CLI is more useful when building a SPA - where the entire thing you're doing is a Vue app. If I'm adding interactivity to an existing site, or simple HTML, I'm going to use the script tag approahc.</p><p>As for my HTML in the backticks, note that was only for the components. One of things *much* better about the CLI is that you can use single file components which make the process much cleaner imo.</p><p>If I may be so bold - if you go to my Vue tag here (<a href="https://disq.us/url?url=https%3A%2F%2Fwww.raymondcamden.com%2Ftags%2Fvuejs%2F%29%3A85S3gH9QxBcojcVj8NIc8-1iTMc&amp;cuid=3321886" rel="nofollow noopener" title="https://www.raymondcamden.com/tags/vuejs/)">https://www.raymondcamden.c...</a> and start at the bottom, you can see my gradual learning of Vue overtime. You should also check my About page as I've got a few links to external articles I've done on Vue.</p><p>And feel free to reach out to me directly with questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4447985865">
	<div>
		<img src="https://disqus.com/api/users/avatars/ugoibeh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4447985865">11</a> by Ugo Ibeh
		posted on 5/3/2019 at 2:38 PM
		</div>
		<div class="comment_text"><p>this is actually awesome. Thanks for sharing</p></div>
	</div>
</div>
		
<div class="comment" id="c_4447998638">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4447998638">12</a> (In reply to <a href="#c_4447985865">#11</a>) by Raymond Camden
		posted on 5/3/2019 at 2:41 PM
		</div>
		<div class="comment_text"><p>you are welcome :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4591669145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4591669145">13</a> by josh
		posted on 8/26/2019 at 12:55 AM
		</div>
		<div class="comment_text"><p>How did you hide the correct answers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4592180093">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4592180093">14</a> (In reply to <a href="#c_4591669145">#13</a>) by Raymond Camden
		posted on 8/26/2019 at 1:51 PM
		</div>
		<div class="comment_text"><p>I don't. :) It would be possible of course. Instead of hitting a URL that includes questions, answers, and solutions, you would need to hit one that doesn't include the right answers. When submitting the quiz, you would hit another URL/API to get the answers. But to be clear, that isn't perfect. A developer can open their tooling and see that request and use it to cheat next time.</p><p>You could continue to add layers of security. Force people to login first. Don't return the right answers, just 'check' the answers (ie, you got 1 and 5 right), and so forth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4652793760">
	<div>
		<img src="https://disqus.com/api/users/avatars/benedictbadilles.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4652793760">15</a> by Benedict Badilles
		posted on 10/15/2019 at 6:03 AM
		</div>
		<div class="comment_text"><p>Hi, I'm currently working on a laravel vue project, very similar to this but mine should not let the users go back to previous question. I'm curious about how I can do it because the current_question variable can be edited especially with vue extension for google chrome and can potentially let the users go back to previous question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4652982058">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4652982058">16</a> (In reply to <a href="#c_4652793760">#15</a>) by Raymond Camden
		posted on 10/15/2019 at 11:48 AM
		</div>
		<div class="comment_text"><p>Any client side code is vulnerable to people manipulating it. If you wanted to *really* lock this down, the code would be dramatically different. You would use server side code to identify the user and specify a particular question for them. They would get the question data via an API call and it would only ever return the current question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4803137152">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bKDagKop13.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4803137152">17</a> by Troy May
		posted on 2/20/2020 at 4:25 PM
		</div>
		<div class="comment_text"><p>Hi Raymond! Thank you for doing half the leg work on helping me get my new quiz in order. I just wanted to let you know of the tiny bugs I saw as I was playing with it. The first is of course, when the quiz is loaded, it flashes the results page for a second then shows the START button. Big booboo. Next, my Dreamweaver app says there were a few coding errors in your js script. I fixed most of them, but not all. If you can somehow help me to code out that issue with the results flashing at the onset, that would be tops, man.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4803382351">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4803382351">18</a> (In reply to <a href="#c_4803137152">#17</a>) by Raymond Camden
		posted on 2/20/2020 at 7:26 PM
		</div>
		<div class="comment_text"><p>The first thing can be solved easily, by using v-cloak. I added it to the CodePen so it should be there.</p><p>You then said there was coding errors. But the app works fine for me. I'm not sure what DW is complaining about so I can't really help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4804283268">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bKDagKop13.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4804283268">19</a> (In reply to <a href="#c_4803382351">#18</a>) by Troy May
		posted on 2/21/2020 at 3:05 PM
		</div>
		<div class="comment_text"><p>Thank you for your quick response! Yes, DW is saying your template tilde on line 2 is a "coding error". DW is smoking something though I think. The code from Version 2 works great. I found the results flash to appear only in version3. My other issue, which has nothing to do with your coding, is how I may add a better results page. I must show a summary of all questions, with the correct answers in green and what the user chose(if incorrect) in red. I am trying but been unsuccessful thus far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4804527578">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4804527578">20</a> (In reply to <a href="#c_4804283268">#19</a>) by Raymond Camden
		posted on 2/21/2020 at 6:24 PM
		</div>
		<div class="comment_text"><p>You say the results flash only in v3, but v3 is the only one I fixed w/ v-cloak. Are you sure you are still seeing it?</p><p>As for the summary changes, it would be possible. You have access to the questions and answers. I mean you can - you would modify</p><p>&lt;slot name="results" :length="questions.length" :perc="perc" :correct="correct"&gt;</p><p>to add additional values for use within the template.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4806878725">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bKDagKop13.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4806878725">21</a> (In reply to <a href="#c_4804527578">#20</a>) by Troy May
		posted on 2/23/2020 at 8:52 PM
		</div>
		<div class="comment_text"><p>Thanks again for being here, Mr. Camden. The way I engaged was to click the Edit with Codepen link on V3. When the page opened, it would flash the results page before showing the START page. That's why i chose to work with V2. V3 seems to be fixed now.</p><p>I appreciate the script. I was not able to get it working the way i wanted though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4890997808">
	<div>
		<img src="https://disqus.com/api/users/avatars/camry4sale.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4890997808">22</a> by Camry For Sale
		posted on 4/26/2020 at 8:36 PM
		</div>
		<div class="comment_text"><p>Nothing is loading at all, looks like the JSON hosting app you are using is down?</p></div>
	</div>
</div>
		