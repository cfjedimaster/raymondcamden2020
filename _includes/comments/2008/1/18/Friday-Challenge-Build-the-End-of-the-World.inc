
<div class="comment" id="c_1713676360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676360">1</a> by Raymond Camden
		posted on 1/18/2008 at 8:32 PM
		</div>
		<div class="comment_text"><p>Guys, I built a new UDF to make adding targets a bit nicer:</p><p>&lt;cfscript&gt;<br>function newTarget(name,pop,milvalue) {<br>	var s = structNew();<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fs.name%3AprcCAM7nZPr_jd9tMI3Crp7rZLM&amp;cuid=3321886" rel="nofollow noopener" title="s.name">s.name</a> = <a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a>;<br>	s.population = arguments.pop;<br>	s.militaryvalue = arguments.milvalue;<br>	return s;<br>}<br>&lt;/cfscript&gt;</p><p>I then do this:</p><p>&lt;cfset targets = structNew()&gt;<br>&lt;cfset targets["1"] = newTarget("Lafayette,LA",90000,0)&gt;<br>&lt;cfset targets["2"] = newTarget("Area 51, NV",900,10)&gt;<br>&lt;cfset targets["3"] = newTarget("New York, NY", 300000, 1)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676363">2</a> by Tom Chiverton
		posted on 1/18/2008 at 9:08 PM
		</div>
		<div class="comment_text"><p>Wouldn't you prefer a nice game of chess ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676386">3</a> by Ben Doom
		posted on 1/19/2008 at 12:55 AM
		</div>
		<div class="comment_text"><p>Untested, just for fun:</p><p>function ThermonuclearWar()<br>{<br>  var s = newTarget("There Can Be No Winner", 0, 0);<br>  return s;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676387">4</a> by robert
		posted on 1/19/2008 at 1:51 AM
		</div>
		<div class="comment_text"><p>It has been one of those weeks....</p><p>&lt;cfscript&gt;<br>function russianRoulette(targets){<br>  var randNum = RandRange(1, ListLen(StructKeyList(targets)));<br>  var SortedTarget = arrayNew(1);<br>  SortedTarget[1] = randNum;<br>  return SortedTarget;<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cfset targets = structNew()&gt;<br>&lt;cfset targets["1"] = newTarget("ME... tell my wife I love her.",0,0)&gt;<br>&lt;cfset targets["2"] = newTarget("Not ME1",1,0)&gt;<br>&lt;cfset targets["3"] = newTarget("AHHHHH Not Me again!",1,0)&gt;<br>&lt;cfset targets["4"] = newTarget("WHOA that was close....",1,0)&gt;<br>&lt;cfset targets["5"] = newTarget("I Dont' think I can take this anymore!",1,0)&gt;<br>&lt;cfset targets["6"] = newTarget("BANG..... Just Kidding!",1,0)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676388">5</a> by shag
		posted on 1/19/2008 at 2:05 AM
		</div>
		<div class="comment_text"><p>I know what ray is thinking here... lets hear it ray.. in the scary voice... one million dollars....</p></div>
	</div>
</div>
		