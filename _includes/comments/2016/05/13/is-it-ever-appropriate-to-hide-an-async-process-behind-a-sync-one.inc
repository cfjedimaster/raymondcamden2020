
<div class="comment" id="c_2673753373">
	<div>
		<img src="https://disqus.com/api/users/avatars/MplsBarry.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673753373">1</a> by MplsBarry
		posted on 5/13/2016 at 2:39 PM
		</div>
		<div class="comment_text"><p>Since you mention at the end you can live with missed writes, I do think this would be reasonable. A couple of thoughts which might make it more robust if you were going to rework it a bit. First, you could have the actual write process handle all pending writes when it runs. Second, and while this wouldn't catch everything, you could process.on('exit',writeOutstanding) or do the same with window.unload or the current preferred browser/cordova closing event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2673758338">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673758338">2</a> (In reply to <a href="#c_2673753373">#1</a>) by Raymond Camden
		posted on 5/13/2016 at 2:42 PM
		</div>
		<div class="comment_text"><p>Good thoughts - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2673763993">
	<div>
		<img src="https://disqus.com/api/users/avatars/joe_rinehart.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673763993">3</a> by Joe Rinehart
		posted on 5/13/2016 at 2:46 PM
		</div>
		<div class="comment_text"><p>I would definitely wrap this in something that looks/feels/behaves synchronous but hides its inner "asynchronisityishness." You just want to log; you don't want to deal with your logging tool handing you promises and stuff to deal with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674646308">
	<div>
		<img src="https://disqus.com/api/users/avatars/zaggino.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674646308">4</a> by Martin Zagora
		posted on 5/14/2016 at 12:04 AM
		</div>
		<div class="comment_text"><p>When building brackets-git project I run into a similar problem. The application is coded in a way that it considers Git to be async but that doesn't work well because Git works with a file system and fails when two executions are trying to lock the same files. So I had to hide this behavior implementing a promise queue (because we also care about the result, unlike the samples above). Looks something like this:</p><p></p><pre><code><br><br>// actual git caller<br>function _git(...args) {  <br>  return new Promise(...);<br>}<br><br>const queue = [];<br>let queueRunning = false;<br>function runQueue(item) {<br>  if (item) {<br>    queue.push(item);<br>  }<br>  if (!queueRunning &amp;&amp; queue.length &gt; 0) {<br>    queueRunning = true;<br>    _git(...queue[0][1])<br>      .then(result =&gt; queue[0][0].resolve(result))<br>      .catch(err =&gt; queue[0][0].reject(err))<br>      .then(() =&gt; {<br>        // important, remove the item from queue and run it again<br>        queue.shift();<br>        queueRunning = false;<br>        runQueue();<br>      }<br>  }<br>}<br><br>function git(...args) {<br>  const deferred = Promise.defer();<br>  runQueue([deferred, args]);<br>  return deferred;<br>}<br><br>// and in the code just<br>git('status').then(status =&gt; ...)<br>git('log').then(log =&gt; ...)<br><br></code></pre></div>
	</div>
</div>
		
<div class="comment" id="c_2675044835">
	<div>
		<img src="https://disqus.com/api/users/avatars/mike_nimer.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675044835">5</a> by mike nimer
		posted on 5/14/2016 at 7:11 AM
		</div>
		<div class="comment_text"><p>For a problem like this check out Subjects and Observables in rxjs, instead of using promises. There is a great presentation on this by Jafar Husain at Netflix. If you haven't seen it I can Post the link.</p><p>What you want for something like this is a system with back pressure support. That way, you can pump messages in slow, fast, or in bursts. Then the observer can processes them as fast as it can. With Observables you can take messages one at a time, in batches, filter out messages, etc. There are a lot of options for working with the data coming through.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2675115041">
	<div>
		<img src="https://disqus.com/api/users/avatars/sintaxi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675115041">6</a> by sintaxi
		posted on 5/14/2016 at 9:05 AM
		</div>
		<div class="comment_text"><p>There are definitely situations where sending async calls to the background is a huge advantage. Such as sending an email after closing an http connection. This is a major benefit with aysnc I/O runtimes such as nodejs. Accomplishing such things in many languages can be painful.</p><p>My guess is this code is crashing because you are initializing and reading the length of the file on every single log call so this will consume cpu and memory exponentially.</p><p>If you open only one file descriptor you should be able to treat `fileWriter.write(blob);` as a queue in that the messages to the file will happen in the order it is called.</p><p>FWIW - I think this would make an excellent interview question as its very common "real world" scenario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2675422680">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675422680">7</a> (In reply to <a href="#c_2675115041">#6</a>) by Raymond Camden
		posted on 5/14/2016 at 2:58 PM
		</div>
		<div class="comment_text"><p>It isn't crashing, just writing data incorrectly. But I can see how it could crash too which is just another problem. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2675424590">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675424590">8</a> (In reply to <a href="#c_2675044835">#5</a>) by Raymond Camden
		posted on 5/14/2016 at 2:59 PM
		</div>
		<div class="comment_text"><p>I'm fighting learning that. ;) My first encounter was with Angular2 and it felt overly complex. But so did Promises at first. At FluentConf, the most packed session was on rxjs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2675446270">
	<div>
		<img src="https://disqus.com/api/users/avatars/mike_nimer.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675446270">9</a> (In reply to <a href="#c_2675424590">#8</a>) by mike nimer
		posted on 5/14/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>It takes some getting used to, but now that I have I'm a big fan. I use them for my Actions and properties in my Stores in my reactjs app. Someday I'll write up a blog on it.</p><p>I can't help but share this video, I saw a version of this at a conference and it was the best session I've seen in a long time. <a href="https://disq.us/url?url=https%3A%2F%2Fyoutu.be%2F5uxSu-F5Kj0%3AkUOGzzV4odUKubk67FBoZRVAWmY&amp;cuid=3321886" rel="nofollow noopener" title="https://youtu.be/5uxSu-F5Kj0">https://youtu.be/5uxSu-F5Kj0</a></p></div>
	</div>
</div>
		