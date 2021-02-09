
<div class="comment" id="c_1713737930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737930">1</a> by Mike
		posted on 1/4/2012 at 10:25 PM
		</div>
		<div class="comment_text"><p>This is a really interesting post because I ran into some problems a while back while doing a POC where I get a SOAP response and push it into JSON for a PG app.</p><p>I ran into the same problems you were talking about with the XML, I did some hacky things to get around it because it was just a POC and a learning experiance but with what you have laid out here I think I might go back and use the UDF you created to make it better.</p><p>Also I never thought about using the caching like you did, I was just caching the query  :)</p><p>Seems I need to read the docs more :) anyhow thanks for the post it should come in handy when I redo the app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737932">2</a> by Todd Sharp
		posted on 1/4/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>Did you consider WDDX'ing the XML and trying to serialize that?  I wonder how that would do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737935">3</a> by Todd Sharp
		posted on 1/4/2012 at 11:05 PM
		</div>
		<div class="comment_text"><p>Ok, nevermind.  Apparently you can't use cfwddx on XML.  It kinda makes sense, since WDDX is XML, but I'd have thought it would have done something with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737934">4</a> by Ben Forta
		posted on 1/6/2012 at 11:26 PM
		</div>
		<div class="comment_text"><p>I had to do the same recently. and used this jQuery plugin: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fyneworks.com%2Fjquery%2Fxml-to-json%2F%3AeGNu-UpJnT-oyfiFw_rll9l7huw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fyneworks.com/jquery/xml-to-json/">http://www.fyneworks.com/jq...</a></p><p>--- Ben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737929">5</a> by Raymond Camden
		posted on 1/6/2012 at 11:58 PM
		</div>
		<div class="comment_text"><p>@Forta: Nice! That worked well. I'll have to remember that next time I have to deal with XML in JavaScript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737933">6</a> by Neil Pugh
		posted on 8/22/2012 at 4:00 PM
		</div>
		<div class="comment_text"><p>Ray love you work! But....this code doesn't really work. It never saves the XMLText to the struct at any point. You just receive the full structure but without any CDATA!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737936">7</a> by Raymond Camden
		posted on 8/22/2012 at 4:07 PM
		</div>
		<div class="comment_text"><p>I'll take a look see. Can you share the XML data you used to test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737938">8</a> by Tim Meade
		posted on 1/19/2013 at 9:55 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Works great up to a point.  It appears that if the xmlChildren have children that the data and recursiveness stops.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737940">9</a> by Raymond Camden
		posted on 1/20/2013 at 12:02 AM
		</div>
		<div class="comment_text"><p>That seems odd. Can you post a Gist with a full example of the bug I can try running?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737941">10</a> by Tim Meade
		posted on 1/20/2013 at 12:07 AM
		</div>
		<div class="comment_text"><p>I just sent a private message with the XML in it.  Let me know if that does not suffice.   The variables section seem to not be populated with values.   I'm working on a different solution also.</p><p>Much thanks</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737943">11</a> by Raymond Camden
		posted on 1/20/2013 at 11:18 PM
		</div>
		<div class="comment_text"><p>I *think*I got it. Try this one:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4580449%3AVLQ5VsBF7NgPev40Wih1Umxu9bg&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4580449">https://gist.github.com/458...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737946">12</a> by chrishunterkiller
		posted on 1/23/2013 at 3:37 AM
		</div>
		<div class="comment_text"><p>Hi mate, first of all nice udf, i was looking for this function and u made it, thx but what do u have against the keyword "else" ?:) two else are missing that broke up all ur algorithm.<br>first of all: we are on the xmlroot or not, impossible to handle it only with a simple if but with a if root_node else not a root<br>Secondly, iam an array or not so if iam not an array... else iam an array.<br>Think about update ur tutorial and the pasted code with the new code from github, it will help people.</p><p>@SaezChristopher on twitter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737944">13</a> by Raymond Camden
		posted on 1/23/2013 at 3:41 AM
		</div>
		<div class="comment_text"><p>Dude... I have no idea what you're saying. :) Can you say that again? Are you saying the github version is good?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737948">14</a> by chrishunterkiller
		posted on 1/23/2013 at 3:52 AM
		</div>
		<div class="comment_text"><p>i have to correct myself, we have to remove the else on the array but we still have to add else on root node test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737947">15</a> by Raymond Camden
		posted on 1/23/2013 at 3:55 AM
		</div>
		<div class="comment_text"><p>Um... so maybe you could fork the gist with a correction and it would make more sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737949">16</a> by chrishunterkiller
		posted on 1/23/2013 at 4:22 AM
		</div>
		<div class="comment_text"><p>I finally found where was the last bug on this code: u have to add a finally condition on the algo: "if iam on a xmlText then return the text (the result of arrayAppend(..., xmlToStruct(s)) the test case was if u have to following same node inside a parent node: one got the right value :text, the second an empty struct instead of text as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737945">17</a> by Raymond Camden
		posted on 1/23/2013 at 4:23 AM
		</div>
		<div class="comment_text"><p>I still can't grok your English. Any chance you could post your code as a new Gist? Or fork mine so we can see the mods?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737950">18</a> by chrishunterkiller
		posted on 1/23/2013 at 4:33 AM
		</div>
		<div class="comment_text"><p>sorry for my bad english, i quite late here, anyways, iam a noob on githut stuff so i let u a comment on ur code with my correction, it will be better than a frenglish explanation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737953">19</a> by Matt
		posted on 4/27/2013 at 7:16 AM
		</div>
		<div class="comment_text"><p>The version on Gist is fantastic.  XML files that were 1.5mb are shrinking down to 500k with this simple function.  Thanks for hooking it up as usual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737951">20</a> by CoursesWeb
		posted on 9/30/2013 at 4:50 PM
		</div>
		<div class="comment_text"><p>Hi<br>Here is an xml to json converter:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoursesweb.net%2Fjavascript%2Fconvert-xml-json-javascript_s2%3A3ATJfo1uNouegL1QQrXbqTp7Jdo&amp;cuid=3321886" rel="nofollow noopener" title="http://coursesweb.net/javascript/convert-xml-json-javascript_s2">http://coursesweb.net/javas...</a><br>It is a javascript object that returns json string, or object, directly from file or string with xml content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737952">21</a> by Darcy
		posted on 12/12/2013 at 4:42 AM
		</div>
		<div class="comment_text"><p>Hi there.  Thanks for your blog and for this post in particular.  I've taken the version you placed on Github and I "almost" have it working the way that I need it to.  Once exception though that maybe you can help me out with.</p><p>I have JSON formatted output as a result of my conversion of XML data. I found that I needed to specifically include the "element" notation in creating my XML in order to have the structure of the file properly created (must have to do with the way that I'm dynamically looping and creating my XML). However, the actual JSON formatted output structure that I need does not include the "element" notation. Somehow I need to drop the "element" notation from my JSON... sort of "collapse" it I guess. (Again, I'm trying to avoid rewriting the code that creates the XML and instead, be able to convert my XML to the JSON that I need.)</p><p>Here's what I'm getting:<br>_<br>JSON<br> productCategoriesList<br>  element<br>  {}<br>   id=1<br>   name=product type A<br>   products<br>    element<br>     {}<br>      id=A1<br>      name=product A1<br>     {}<br>      id=A2<br>      name=product A2<br>  {}<br>   id=2<br>   name=product type B<br>   products<br>    element<br>     {}<br>      id=B1<br>      name=product B1<br>_<br>etc.</p><p>This is what I need:<br>_<br>JSON<br> productCategoriesList<br>  {}<br>   id=1<br>   name=product type A<br>   products<br>     {}<br>      id=A1<br>      name=product A1<br>     {}<br>      id=A2<br>      name=product A2<br>  {}<br>   id=2<br>   name=product type B<br>   products<br>     {}<br>      id=B1<br>      name=product B1<br>_<br>etc.</p><p>Thoughts?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737956">22</a> by Raymond Camden
		posted on 12/12/2013 at 8:52 AM
		</div>
		<div class="comment_text"><p>Can you share a Gist of your XML?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737954">23</a> by Darcy
		posted on 12/12/2013 at 8:13 PM
		</div>
		<div class="comment_text"><p>Sure thing.  Here you go.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fredherring917%2F7929512%3AwfQ_GhKRizMAShTz8MRWfN7YWsw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/redherring917/7929512">https://gist.github.com/red...</a></p><p>Thanks in advance for any help you can throw this way!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737955">24</a> by Raymond Camden
		posted on 12/12/2013 at 9:49 PM
		</div>
		<div class="comment_text"><p>Ok, so this confuses me:</p><p>"However, the actual JSON formatted output structure that I need does not include the "element" notation. Somehow I need to drop the "element" notation from my JSON"</p><p>You say it doesn't include, but then you want to remove it. Did you just mispeak there?</p><p>Honestly, looking at the structure of your XML, you need *something* to separate your items. For example, the products tag has N elements inside representing each product.</p><p>It sounds like you want to iterate over products as opposed to products.element, but I'd probably just live with it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737959">25</a> by Darcy
		posted on 12/12/2013 at 10:02 PM
		</div>
		<div class="comment_text"><p>Hi again.  Thanks for your reply.</p><p>There's a really good chance that I misspoke somewhere, but let me try again.</p><p>- My XML HAS the "element" notation.  Let's say that it has to.</p><p>- As such, my auto-converted JSON also HAS the "element" notation.  Makes sense.</p><p>- Challenge is, the entity consuming my JSON can't stomach the "element" notation... it wants what we see in file #3 on that github.  If I feed that entity the JSON in file #3, it's happy.  If I feed it the auto-converted JSON in file #2 it pukes on it.</p><p>The confusion here could very well be because the solution is an easy one, but it's one that eludes me.  Perhaps I just need to iterate through the auto-generated JSON and "strip out" the "element" notation, but I guess I was hoping to somehow save that step.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737961">26</a> by Raymond Camden
		posted on 12/13/2013 at 5:58 PM
		</div>
		<div class="comment_text"><p>Oh - you are having a problem with the thing consuming your JSON. Well, in your case you may need to write your own solution. That should actually be easier - my code was built to handle *anything* whereas you know what your XML is and can write code specific for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737960">27</a> by Felinotherapist
		posted on 7/16/2014 at 3:05 AM
		</div>
		<div class="comment_text"><p>Has anyone tried the new XML converter? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coolutils.com%2FTotalXMLConverter%3AzwvJn7bOrexe52Q8uYcnnVLQ9DM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coolutils.com/TotalXMLConverter">http://www.coolutils.com/To...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1860172421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1860172421">28</a> by Tim
		posted on 2/17/2015 at 5:41 PM
		</div>
		<div class="comment_text"><p>On the latest git version linked in the comments, if I run this against a BBC news feed, the root node is returned twice.</p><p>I presume this is cause it is an if rather than an else if, and therefore the root node is always picked up both by the first check and at least one of the subsequent checks</p><p>if i remove the first check entirely:</p><p>if(xmlGetNodeType(x) == "DOCUMENT_NODE") {<br>            s[structKeyList(x)] = xmlToStruct(x[structKeyList(x)]);<br>        }</p><p>Then it seems to work as expected. can anyone confirm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4992551254">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZtRC7LDeq6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4992551254">29</a> by Semih Akartuna
		posted on 7/15/2020 at 9:27 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, Greetings from Turkey</p></div>
	</div>
</div>
		