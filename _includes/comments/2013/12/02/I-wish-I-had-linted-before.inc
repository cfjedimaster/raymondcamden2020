
<div class="comment" id="c_1714080773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080773">1</a> by Plutov
		posted on 12/3/2013 at 12:17 PM
		</div>
		<div class="comment_text"><p>What tools are you using for linting? JSLint, i think. And should I lint html or css?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080783">2</a> by Salvatore fusto
		posted on 12/3/2013 at 1:06 PM
		</div>
		<div class="comment_text"><p>Ray,<br>i'm using Brackets and its lint tools, expecially for js and html, and surely agree with you but my question is that jslint is too verbose about position of key words, spaces among parenthesys, functions called before definition when defined in another file, and so on.<br>what do you think about?<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080782">3</a> by Bill Tudor
		posted on 12/3/2013 at 2:14 PM
		</div>
		<div class="comment_text"><p>I just started using JSHint which is excellent for JS and JQuery code; was wondering if there is an equivalent for ColdFusion ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080788">4</a> by Raymond Camden
		posted on 12/3/2013 at 4:50 PM
		</div>
		<div class="comment_text"><p>@Plutov: I use JSHint. I found JSLint to be too strict. I use my own JSHint extension for Brackets. There are also linters for HTML and CSS and I use them as well, although I don't necessarily care as much.</p><p>@Salvatore: Try JSHint. :)</p><p>@Bill: Not that I'm aware of. In theory, one could be done as an extension to ColdFusion Builder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080786">5</a> by Dan Fredericks
		posted on 12/3/2013 at 5:30 PM
		</div>
		<div class="comment_text"><p>Any idea how a lint tool works and/or built? would it be a cool idea for someone to build an open source linting tool for ColdFusion, if it is possible? Maybe the team CF Advance could build something like this...or am i just thinking crazy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080784">6</a> by Raymond Camden
		posted on 12/3/2013 at 6:00 PM
		</div>
		<div class="comment_text"><p>@Dan: Take a look at JSHint - it is open source. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080791">7</a> by Andy K
		posted on 12/4/2013 at 3:00 AM
		</div>
		<div class="comment_text"><p>@Bill/Dan - someone started one on Github but it looks like it's been forgotten about:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Frussplaysguitar%2Fnavel%3ANRHt_ugQCPQlR5TSQmt-ClmZNl0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/russplaysguitar/navel">https://github.com/russplay...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080781">8</a> by Salvatore fusto
		posted on 12/6/2013 at 3:00 PM
		</div>
		<div class="comment_text"><p>Ray,<br>i already use your JShint, but it is too verbose for warnings!<br>also i noted some strange issue: this line, in angular<br>myApp.controller ('myCtrl', ['$scope', '$http', function($scope, $http) {<br>4)    $http.jsonp('http://192.168.1.250:8500/remote/remoteCFC.cfc?method=remoteGetPerson&amp;callback=JSON_CALLBACK')<br>5)    .error(function (data,status) { console.log(status)})<br>6)    .success(function(data) {$scope.person=data});<br>..............<br>}]);<br>generate errors:<br>5     Missing semicolon. (W033)	 .error(function (data,status) { console.log(status)})<br>6	Missing semicolon. (W033)	 .success(function(data) {$scope.person=data});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080785">9</a> by Raymond Camden
		posted on 12/6/2013 at 6:01 PM
		</div>
		<div class="comment_text"><p>To be clear, JSHint isn't mine. I just wrote a Brackets extension for it.</p><p>As for being verbose, don't forget you can configure what it complains about. Have you checked the JSHint docs? Look at my blog post yesterday on jQuery Mobile - the Quiz code I wrote shows an example of that.</p><p>Missing semicolons *is* a problem... to JSHint. Again though you can tell it you don't care about that and it won't show it again. Please see the JSHint docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080787">10</a> by Ryan Eberly
		posted on 12/6/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>@Bill/Dan <br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fryaneberly%2FCFLint%3AzRo-n_d5-YBwbUgV-9wqU-QZMsI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ryaneberly/CFLint">https://github.com/ryaneber...</a></p><p>Here's a CF Lint I put out on github recently.  It supports both CFML/cfscript.</p><p>@Ray - thanks for the name suggestion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080789">11</a> by Raymond Camden
		posted on 12/6/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>Ryan - you should consider building a CFB extension too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080790">12</a> by Ryan Eberly
		posted on 12/11/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ray - <br>Re: CFB extension:  Agree that would be good.  It gets the issue in front of the developer as soon as possible.</p></div>
	</div>
</div>
		