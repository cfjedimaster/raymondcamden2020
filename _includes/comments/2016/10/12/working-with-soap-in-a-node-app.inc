
<div class="comment" id="c_2947449318">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonprickett.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2947449318">1</a> by Simon Prickett
		posted on 10/12/2016 at 10:13 PM
		</div>
		<div class="comment_text"><p>Nice - I'm sure we could write them a JSON wrapper for their API.  I didn't like that SF BART only had XML so did that for theirs and made it available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2947453845">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2947453845">2</a> (In reply to <a href="#c_2947449318">#1</a>) by Raymond Camden
		posted on 10/12/2016 at 10:16 PM
		</div>
		<div class="comment_text"><p>In theory I could have added routes for all of their routes and created exactly that. But I just built the bare minimum for my little demo. LoopBack allows you to do stuff like this and I talk about it here: <a href="https://disq.us/url?url=https%3A%2F%2Fstrongloop.com%2Fstrongblog%2Fusing-loopback-to-build-apis-for-apis%2F%3AgmJw835-_pDk008pScCGz8d5QtI&amp;cuid=3321886" rel="nofollow noopener" title="https://strongloop.com/strongblog/using-loopback-to-build-apis-for-apis/">https://strongloop.com/stro...</a></p><p>Although actually - that requires a REST API on the back end. You *could* use LoopBack to do this, but it would be a bit more grunt work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3672924527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3672924527">3</a> by Radha
		posted on 12/21/2017 at 5:29 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Is there a way we can auto-generate SOAP-XML request using wsdl file in the client code instead of json ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3672953835">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3672953835">4</a> (In reply to <a href="#c_3672924527">#3</a>) by Raymond Camden
		posted on 12/21/2017 at 5:38 PM
		</div>
		<div class="comment_text"><p>Sorry - I only used the package enough to get me to the point where I could consume a service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4026125745">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CJb1HNJ7CT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4026125745">5</a> by Terence Watson
		posted on 8/7/2018 at 5:11 AM
		</div>
		<div class="comment_text"><p>does that args object include header elements? or is just the body elements?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4026582144">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4026582144">6</a> (In reply to <a href="#c_4026125745">#5</a>) by Raymond Camden
		posted on 8/7/2018 at 12:38 PM
		</div>
		<div class="comment_text"><p>I think it is just arguments to the method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4031205826">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlyivnbernabebernabe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4031205826">7</a> by Charly Iván Bernabe Bernabe
		posted on 8/9/2018 at 6:04 PM
		</div>
		<div class="comment_text"><p>I would like to know how to implement the whole function, in the part of the exports.getRandomSet ... I do not know how to implement it in the call of a route, for example .... <a href="http://disq.us/url?url=http%3A%2F%2Frouter.post%3ADnMSkN4k-Hl3ZYh3tJ8CYL_zRF4&amp;cuid=3321886" rel="nofollow noopener" title="router.post">router.post</a> ('/ logtrans /: id /', (req, res) =&gt; {<br>     var params = req.body; // phone<br>     var data = req.params; // id_sucursal and the package<br>     var datos_empresa = datos.id.split ("ffft");</p><p>here..... help me pleasee</p></div>
	</div>
</div>
		
<div class="comment" id="c_4031294455">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4031294455">8</a> (In reply to <a href="#c_4031205826">#7</a>) by Raymond Camden
		posted on 8/9/2018 at 6:55 PM
		</div>
		<div class="comment_text"><p>Oops, had to delete my comment as I included the API key. ;) Anyway, here is the code for app.js for the demo:</p><p>var express = require('express');<br>var app = express();</p><p>var apiKey = 'put your key here';</p><p>var brick = require('./brick');<br>brick.setKey(apiKey);</p><p>app.set('port', process.env.PORT || 3000);<br>app.use(express.static('public'));</p><p>app.get('/random', function(req, res) {</p><p>	brick.getRandomSet().then(function(set) {<br>		console.log('set is '+JSON.stringify(set));<br>		res.send(set);<br>	});</p><p>});</p><p>app.listen(app.get('port'), function() {<br>    console.log('Express running on http://localhost:' + app.get('port'));<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_4126578042">
	<div>
		<img src="https://disqus.com/api/users/avatars/mo_dev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4126578042">9</a> by Mo Dev
		posted on 10/3/2018 at 7:37 AM
		</div>
		<div class="comment_text"><p>I tried using soap as well as strong-soap but i am getting html page with list of all methods as response. <br>Can you let me know what is wrong ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4127172893">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4127172893">10</a> (In reply to <a href="#c_4126578042">#9</a>) by Raymond Camden
		posted on 10/3/2018 at 3:57 PM
		</div>
		<div class="comment_text"><p>Did you try adding ?wsdl to the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4127219152">
	<div>
		<img src="https://disqus.com/api/users/avatars/mo_dev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4127219152">11</a> (In reply to <a href="#c_4127172893">#10</a>) by Mo Dev
		posted on 10/3/2018 at 4:26 PM
		</div>
		<div class="comment_text"><p>Yes, its the  same as the example shared. <br>var apiWSDL = '<a href="http://disq.us/url?url=http%3A%2F%2Fbrickset.com%2Fapi%2Fv2.asmx%3FWSDL%27%3B%3AME3VlzGr_dN73cwdYsl-bdRGp4s&amp;cuid=3321886" rel="nofollow noopener" title="http://brickset.com/api/v2.asmx?WSDL';">http://brickset.com/api/v2....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4127266504">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4127266504">12</a> (In reply to <a href="#c_4127219152">#11</a>) by Raymond Camden
		posted on 10/3/2018 at 4:54 PM
		</div>
		<div class="comment_text"><p>Sorry - you got me there. I haven't used this particular service in a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4131658536">
	<div>
		<img src="https://disqus.com/api/users/avatars/mo_dev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4131658536">13</a> (In reply to <a href="#c_4127266504">#12</a>) by Mo Dev
		posted on 10/6/2018 at 8:43 AM
		</div>
		<div class="comment_text"><p>Can u see if it works for u ? i have been struggling to get it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4158548175">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4158548175">14</a> (In reply to <a href="#c_4131658536">#13</a>) by Raymond Camden
		posted on 10/23/2018 at 1:30 PM
		</div>
		<div class="comment_text"><p>Sorry - I'm completely booked (hence my delay in responding).</p></div>
	</div>
</div>
		
<div class="comment" id="c_4423526197">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_M1F2jZvYii.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4423526197">15</a> by Eagle
		posted on 4/15/2019 at 11:11 AM
		</div>
		<div class="comment_text"><p>throws Error: Error: connect ECONNREFUSED 104.25.205.7:80</p></div>
	</div>
</div>
		
<div class="comment" id="c_4423706329">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4423706329">16</a> (In reply to <a href="#c_4423526197">#15</a>) by Raymond Camden
		posted on 4/15/2019 at 2:08 PM
		</div>
		<div class="comment_text"><p>It means it couldn't connect to the API. So either a network issue on your end (see if your corporate VPN blocks it) or the server is down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4661809052">
	<div>
		<img src="https://disqus.com/api/users/avatars/larsjeppesen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4661809052">17</a> by Lars Jeppesen
		posted on 10/22/2019 at 5:46 PM
		</div>
		<div class="comment_text"><p>You're extremely lucky it worked.. node-soap has many problems with WSDL and soap specifications with different namespaces etc..</p></div>
	</div>
</div>
		
<div class="comment" id="c_4661817057">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4661817057">18</a> (In reply to <a href="#c_4661809052">#17</a>) by Raymond Camden
		posted on 10/22/2019 at 5:52 PM
		</div>
		<div class="comment_text"><p>And I've never used it again. Thank god.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4753044471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4753044471">19</a> by Samil Kahraman
		posted on 1/11/2020 at 5:27 AM
		</div>
		<div class="comment_text"><p>Hi, how did you handle the response coming from soap? Because when i parse the response to json, it contains lots of character that is not accepted by json like ":"</p></div>
	</div>
</div>
		
<div class="comment" id="c_4753621787">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4753621787">20</a> (In reply to <a href="#c_4753044471">#19</a>) by Raymond Camden
		posted on 1/11/2020 at 7:12 PM
		</div>
		<div class="comment_text"><p>I honestly don't remember the shape of the response. Can you share a pastebin link showing the data you are trying to parse?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4767592206">
	<div>
		<img src="https://disqus.com/api/users/avatars/mohanaprabhuv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4767592206">21</a> by Mohanaprabhu V
		posted on 1/23/2020 at 8:31 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I have Dot net soap service, Using node js code i need to post data to those methods. Cam you please send me sample code to post data to web service</p></div>
	</div>
</div>
		
<div class="comment" id="c_4767958051">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4767958051">22</a> (In reply to <a href="#c_4767592206">#21</a>) by Raymond Camden
		posted on 1/23/2020 at 3:57 PM
		</div>
		<div class="comment_text"><p>No, I can't do that. I can try to answer questions, but I do not write sample code for folks.</p></div>
	</div>
</div>
		