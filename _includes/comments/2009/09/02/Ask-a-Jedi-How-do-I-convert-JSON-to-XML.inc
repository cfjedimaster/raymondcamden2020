
<div class="comment" id="c_1713718078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718078">1</a> by todd sharp
		posted on 9/2/2009 at 5:35 PM
		</div>
		<div class="comment_text"><p>I guess I'm wondering why Jody wants to convert JSON to XML?    What language/framework can't grok JSON?  There's even a lib for JSON encode/decode for Flex/AS3...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718079">2</a> by Raymond Camden
		posted on 9/2/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>Maybe to create RSS? Who knows. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718083">3</a> by Jody Fitzpatrick
		posted on 9/2/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>:(</p><p>Ha, Ha. I have faith in ColdFusion. I completely abandoned php for it. I'm just now starting to get use to external data other than the basic databases.</p><p>But thank you so much Ray for writting this it really helped me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718081">4</a> by Jody Fitzpatrick
		posted on 9/2/2009 at 6:12 PM
		</div>
		<div class="comment_text"><p>Well I'm actually working on a search engine. It is a project for myself to teach me all about ColdFusion. Once I finish it not only will I have taught myself a lot but I will have something I can use and hopefully others can use as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718088">5</a> by John Bliss
		posted on 9/2/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>"Consider the following template. It makes use of the Twitter API..."</p><p>Or, if you prefer, you could use CF's XML-building functions:</p><p>&lt;cfset packet = xmlnew()&gt;<br>&lt;cfset packet.twitterresults = xmlelemnew(packet, "twitterresults")&gt;<br>&lt;cfset packet.twitterresults.query = xmlelemnew(packet, "query")&gt;<br>&lt;cfset packet.twitterresults.query.xmltext = xmlFormat(q)&gt;<br>&lt;cfset i = 0&gt;<br>&lt;cfloop index="r" array="#data.results#"&gt;<br>	&lt;cfset i = i + 1&gt;<br>	&lt;cfset ArrayAppend(packet.twitterresults.query.xmlchildren, xmlelemnew(packet, "result"))&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].user = xmlelemnew(packet, "user")&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].user.xmltext = xmlFormat(r.from_user)&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].created = xmlelemnew(packet, "created")&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].created.xmltext = xmlFormat(r.created_at)&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].text = xmlelemnew(packet, "text")&gt;<br>	&lt;cfset packet.twitterresults.query.result[i].text.xmltext = xmlFormat(r.text)&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718093">6</a> by Raymond Camden
		posted on 9/2/2009 at 6:29 PM
		</div>
		<div class="comment_text"><p>I'm sorry John. You are wrong. There is only one way to do it.</p><p>;)</p><p>John brings up a good point Jody - never forget there are _multiple_ ways to skin the cat in ColdFusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718096">7</a> by John Bliss
		posted on 9/2/2009 at 6:33 PM
		</div>
		<div class="comment_text"><p>@Ray [whew]  Read, "I'm sorry John. You are wrong. There is only one way to do it," before seeing the ;-) and, because it was coming from the Jedi Master, nearly gave up on my career to go work at Starbucks!</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718095">8</a> by todd sharp
		posted on 9/2/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>What, no one is going to suggest deserializeJSON and converting to WDDX?? :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718101">9</a> by Raymond Camden
		posted on 9/2/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>Ahem: "Outside of WDDX support...."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718103">10</a> by todd sharp
		posted on 9/2/2009 at 7:20 PM
		</div>
		<div class="comment_text"><p>HAHAHAHAHHA...</p><p>I agree, but there's usually one person who brings it up...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718104">11</a> by todd sharp
		posted on 9/2/2009 at 7:21 PM
		</div>
		<div class="comment_text"><p>Oh...wait...did you edit the post?!  I _swear_ I didn't see that earlier...YES I READ IT!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718105">12</a> by Chris
		posted on 9/2/2009 at 9:01 PM
		</div>
		<div class="comment_text"><p>@Jody:  That's a first for me.  Someone abandoning PHP for CF?  Normally it's the other way around (due more in part to lack of CF jobs in comparison to PHP).</p><p>But, I'm at a company that uses PHP predominantly and I'm getting the hang of it...sorta.  I can see why I don't want to lose my CF focus.  PHP is really cryptic, comparitively that is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718102">13</a> by ownsmeister
		posted on 9/4/2009 at 9:50 AM
		</div>
		<div class="comment_text"><p>one thing, that's really bothering me is, that Coldfusion capitalizes all properties when you use serializeJSON.<br>I've had many hours of banging my head against the table because of this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718109">14</a> by John Bliss
		posted on 9/4/2009 at 3:12 PM
		</div>
		<div class="comment_text"><p>@ownsmeister Maybe one of these does not do that...?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2Fjsonencode%3AKdYoid5cla_-OuCogy-VjOe2e3c&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/jsonencode">http://cflib.org/udf/jsonen...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FserializeToJSONP%3AFc9u2FkDXVhEVFLNHjdobLtgpDY&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/serializeToJSONP">http://cflib.org/udf/serial...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FxmlToJson%3AOkFpJM9eJwp7Nj97ZqUKXY66D0c&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/xmlToJson">http://cflib.org/udf/xmlToJson</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718108">15</a> by Raymond Camden
		posted on 9/4/2009 at 3:54 PM
		</div>
		<div class="comment_text"><p>Thats not a serializeJSON issue, but how CF stores structs. When you do x.y = "foo", you will always end up with a capital Y as the key. However, if you change your code to do:</p><p>x["y"]</p><p>then the case will be maintained.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718112">16</a> by phpEmperor
		posted on 2/2/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>Interesting post.  I enjoy Coldfusion and PHP equally.  The problem I run  with Coldfusion is lack of documentation or hidden function that are often buried.  Those individuals who grew sipping on Coldfusion milk find php a bit difficult but I've grown off c/c++ before going to php/web development and thought that PHP was such an easy language.  Now that I'm a Coldfusion developer I've come realize that there are some aspects of development that Coldfusion developers take for granted and laugh while shaking my head  when comments regarding the difficulty of PHP is made.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718111">17</a> by Raymond Camden
		posted on 2/2/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>Can I ask - why do you say lack of documentation? There is something like 3000 pages of docs (reference + developer guide) available both online and for download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718110">18</a> by Daniel Gaspar
		posted on 10/16/2010 at 12:16 AM
		</div>
		<div class="comment_text"><p>Glad you got AnythingToXML working for you. Hey that's the beauty of opensource: if it doesn't work you can modify the code to make it do exactly what you need!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718115">19</a> by John M
		posted on 8/30/2012 at 12:16 AM
		</div>
		<div class="comment_text"><p>This post still very useful in 2012.</p><p>Is this still the only way to convert native CF objects (Structures/array etc) into XML?</p><p>I've been looking for a way to do this, and this is the only solution I have found.<br>I know that CF10 can do it under the hood, to covert cffunction output types into XML responses from a RESTful service, but can't find a simple way to expose that, so reverting to AnythingToXML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718113">20</a> by Raymond Camden
		posted on 8/30/2012 at 12:48 AM
		</div>
		<div class="comment_text"><p>There is the cfwddx tag - but - WDDX is a bit verbose (although all XML is a bit verbose). I've always built my XML by hand so I can have precise control.</p></div>
	</div>
</div>
		