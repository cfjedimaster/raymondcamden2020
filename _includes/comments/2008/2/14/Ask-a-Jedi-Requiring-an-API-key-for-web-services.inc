
<div class="comment" id="c_1713677074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677074">1</a> by Joshua Curtiss
		posted on 2/14/2008 at 9:25 PM
		</div>
		<div class="comment_text"><p>Very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677064">2</a> by Leon Miller-Out
		posted on 2/14/2008 at 10:37 PM
		</div>
		<div class="comment_text"><p>I did something similar with a web services API I wrote, except I used a username and password. I tried and tried to find a way to avoid having to put the arguments in *every single method*, but I was unsuccessful, so I ended up with the following in every public method in the API:</p><p>&lt;cfargument name="u" type="string" required="yes"&gt;<br>&lt;cfargument name="p" type="string" required="yes"&gt;</p><p>I did write a nice centralized checkArgs() that validated u and p and any other arguments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677058">3</a> by Raymond Camden
		posted on 2/14/2008 at 10:41 PM
		</div>
		<div class="comment_text"><p>One way to get around defining U/P for every method is to use a central method, lets say runMethod. You would pass 4 arguments to runMethod. U, P, methodname, and methodargs, where methodargs could be a serialized set of arguments.</p><p>runMethod validates U/P, then simply dynamically calls methodname with methodargs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677073">4</a> by Tom Mollerus
		posted on 2/14/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>Ray, I'm curious why you write that it's not possible to call a web service with a REST API. I've personally written CFCs which are accessed by passing "?method=[methodName]&amp;var1=12&amp;var2=34". If you can't send simple data, as in the example I just wrote, you can pass it via JSON or XML in either a GET or a POST, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677068">5</a> by Raymond Camden
		posted on 2/15/2008 at 12:06 AM
		</div>
		<div class="comment_text"><p>Tom, if you hit</p><p>foo.cfc?x=1&amp;y=2</p><p>You are not doing a WS hit. You are doing a REST hit. CFCs support both. A "WS" hit implies you make a SOAP request to the CFC, which a REST hit is not.</p><p>The end result is the same "Hit so and so and get a result", but the manner of how you talk is different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677071">6</a> by Tom Mollerus
		posted on 2/15/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>Ray, I see what you mean. I see it as an issue of terminology. Using a REST hit doesn't meet the traditional definition of a Web Service (Wikipedia agrees that a web services is a transfer of XML over the SOAP protocol).</p><p>But, I'm perfectly happy to broaden the working definition of web services to include other protocols besides SOAP and other packages besides XML. I know that JSON, for instance, is much lighter than the same data wrapped in XML. Is there an advantage to using SOAP instead of REST? (Sorry if that's off topic; it could be a blog post for you. I don't know much about SOAP myself.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677076">7</a> by Raymond Camden
		posted on 2/15/2008 at 12:47 AM
		</div>
		<div class="comment_text"><p>I hate to be a stickler for words - but when you say web service, I think it is fair to assume SOAP.</p><p>Now if you just say "API", I think that can include anything - rest, web service, you get it.</p><p>Is there an advantage to using SOAP? I don't think so, but honestly I wouldn't know. SOAP seems a lot heavier then REST. If I had to pick, I'd just use REST probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677077">8</a> by Kyle Hayes
		posted on 2/15/2008 at 12:52 AM
		</div>
		<div class="comment_text"><p>@Tom - One advantage to using WebServices vs. HTTPServices (SOAP) is that in WS, the interface of the API to which you are programming is nicely defined and is even lightly data-typed; specifying the return/passing of arrays, string, numbers etc. REST however, being that it is purely returning XML (as opposed to a defined SOAP spec) is returning just that, XML. Your arrays and strings are defined by the shear architecture of your XML output.</p><p>I have heard some developers like REST for simplicity and say that WebServices tends to be slower. It all really depends on the application and what the requirements/audience are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677078">9</a> by Matt
		posted on 2/15/2008 at 7:42 PM
		</div>
		<div class="comment_text"><p>I have been building an API over the past few months and I have taken the approach of providing many entry formats into my API.  I have built a small app that acts as a front controller to my component structure which handles all the authentication and translation of both the input into the API and the result format requested by the developer.</p><p>On the discussion of passing in a U/P into each request or even into a centralized method I have found that while it does work,  a better approach is to have an authentication method that returns an authToken.  The authToken being valid for a set period of time since the last call and all subsequent requests requiring a valid authToken.  Taking things a little further that authToken can be provided with every request as an argument or stored in a cookie if the client hitting the api is an actual user (great for attaching an ajax component to your api).</p><p>My main goal in the process has really been to make sure my components know nothing about the API itself and that the API gateway can authenticate the requests and translate them into my business objects seamlessly.</p><p>I also agree strongly with Ray on building in a way to throttled incoming requests because abuse is inevitable  and its better to be ahead of the curve on that front.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677080">10</a> by randy
		posted on 2/19/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>I hope this is not off topic.  We have a rather large and active reporting CF application that allows users to export data to spreadsheet format. Lately as projects come-up our users are needing more and more data not based on who or where they work but more based on the project they got assigned to.  I was starting to convert some of the cfc over to public and allow wider input selections.  On the few we have done for a few users, we see them using the API to extract all the data from a table (200 and 300K records) versus using the filters/inputs.  When asked why - we get not really sure what I am looking for - In many cases these are new employees given a special task and no guidance so our systems take the beating. Just frustrating doing IT work for users that follow the I will know it when I see it model.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677083">11</a> by Raymond Camden
		posted on 2/19/2008 at 9:07 PM
		</div>
		<div class="comment_text"><p>Randy, I'd just change your code so that they have to use a filter. That should be easy enough. You can also add limits to the result set. Ie, you can search for whatever, but the most returned is 1k results. You can even build in paging so that if a search returned N results, you can let them specify a 'page' of results to get.</p></div>
	</div>
</div>
		