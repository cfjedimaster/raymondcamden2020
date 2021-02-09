
<div class="comment" id="c_1713655233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655233">1</a> by Justice
		posted on 7/21/2006 at 5:14 PM
		</div>
		<div class="comment_text"><p>This reminds me of a turtles game in the back of a 3-2-1 contact magazine when I was in 4th grade.  It grew turtles along a beach and you entered inputs and took care of them.  It was all in Basic (good old basic) and was actually pretty neat.  Sorry about OT =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655248">2</a> by Marten
		posted on 7/21/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>Hi,<br>here is my solution:</p><p>&lt;cfparam name="url.population"&gt;<br>&lt;cfparam name="url.repro"&gt;<br>&lt;cfparam name="url.units"&gt;<br>&lt;cfparam name="url.lethality"&gt;</p><p>&lt;cffunction name="getPopulation"&gt;<br>	&lt;cfargument name="pop"&gt;<br>	&lt;cfargument name="let"&gt;<br>	&lt;cfargument name="units"&gt;<br>	&lt;cfargument name="rep"&gt;<br>	&lt;cfset var kill = int(arguments.units / arguments.let) /&gt;<br>	&lt;cfset var fish = arguments.pop - kill /&gt;<br>	&lt;cfset fish = int(fish*(1+(arguments.rep / 100)))&gt;<br>	&lt;cfreturn fish /&gt;<br>&lt;/cffunction&gt;<br>&lt;cfif structKeyExists(url,"submit")&gt;<br>	&lt;cfset popQuery = queryNew("period,population")&gt;<br>	&lt;cfset pop = url.population /&gt;<br>	&lt;cfloop from="1" to="30" index="i"&gt;<br>		&lt;cfif pop lt 0&gt;<br>			&lt;cfbreak&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset newrow = queryAddRow(popQuery,1)&gt;<br>		&lt;cfset temp = querySetCell(popQuery,"period",i,i) /&gt;<br>		&lt;cfset temp = querySetCell(popQuery,"population",pop,i) /&gt;<br>		&lt;cfset pop = getPopulation(pop,url.lethality,url.units,url.repro) /&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfchart chartheight="400" chartwidth="700" xaxistitle="Periods" yaxistitle="Population"&gt;<br>		&lt;cfchartseries type="curve" query="popQuery" itemcolumn="period" valuecolumn="population" /&gt;<br>	&lt;/cfchart&gt;<br>&lt;/cfif&gt;<br>&lt;cfform action="#cgi.SCRIPT_NAME#" method="get"&gt;<br>	&lt;cfoutput&gt;<br>	&lt;label &gt;Population:<br>	&lt;input type="text" value="#url.population#" name="population" /&gt;&lt;/label&gt;&lt;br /&gt;<br>	&lt;label &gt;Reprodutive Rate:<br>	&lt;input type="text" value="#url.repro#" name="repro" /&gt;&lt;/label&gt;&lt;br /&gt;<br>	&lt;label &gt;Unit per period:<br>	&lt;input type="text" value="#url.units#" name="units" /&gt;&lt;/label&gt;&lt;br /&gt;<br>	&lt;label &gt;Lethality<br>	&lt;input type="text" value="#url.lethality#" name="lethality" /&gt;&lt;/label&gt;&lt;br /&gt;<br>	&lt;input type="submit" name="submit" value="submit" /&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655255">3</a> by George
		posted on 7/21/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>Cool little exercise =)  Sorry if the formatting gets all screwy...</p><p>Simple form:</p><p>&lt;form action="fish_death.cfm" method="post"&gt;<br>Current fish population &lt;input type="text" name="currentPopulation"&gt;&lt;br&gt;<br>Reproductive rate &lt;input type="text" name="reproductiveRate"&gt;&lt;br&gt;<br>Units of Element X put into the lake per period &lt;input type="text" name="unitsOfDeath"&gt;&lt;br&gt;<br>Lethality (number of fish killed per unit of Element X) &lt;input type="text" name="lethality"&gt;&lt;br&gt;<br>&lt;input type="submit" value="Kill some fish!"&gt;<br>&lt;/form&gt;</p><p>A function to kill some fish:</p><p>&lt;cffunction name="killFish" access="public" returntype="numeric" hint="Returns the new fish population of the lake based on the given data. Assume the fish have their fun and reproduce before being killed off (lucky little beggers)"&gt;<br>	&lt;cfargument name="currentPopulation" type="numeric" required="yes" hint="The current population of the lake"/&gt;<br>	&lt;cfargument name="reproductiveRate" type="numeric" required="yes" hint="The percentage the fish population will grow by in a period"/&gt;<br>	&lt;cfargument name="unitsOfDeath" type="numeric" required="yes" hint="The number of units of Element X dumped into the lake in a period"/&gt;<br>	&lt;cfargument name="lethality" type="numeric" required="yes" hint="The number of fish that 1 unit of Element X will kill in a period"/&gt;</p><p>	&lt;cfset var newPopulation = 0 /&gt;<br>	&lt;cfset var fishKilled = int(arguments.unitsOfDeath / arguments.lethality) /&gt;</p><p>	&lt;cfif arguments.reproductiveRate gt 0 and arguments.reproductiveRate lte 100&gt;<br>		&lt;cfset newPopulation = (int(arguments.currentPopulation * (arguments.reproductiveRate/100)) + currentPopulation) - fishKilled /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn newPopulation /&gt;<br>&lt;/cffunction&gt;</p><p>And the action page with a chart:</p><p>&lt;cfset newPopulation = form.currentPopulation /&gt;<br>&lt;cfset fishBreeder = CreateObject("component","Fish.Fish") /&gt;</p><p>&lt;cfchart format="flash" xaxistitle="Number of periods passed" yaxistitle="Fish population" chartwidth="800" chartheight="600"<br> title="Fish population, putting #form.unitsOfDeath# units of Element X into the lake every period, with #form.lethality# units killing 1 fish"&gt;<br>&lt;cfchartseries type="line" markerstyle="circle"&gt;</p><p>&lt;cfloop index="i" from="1" to="60"&gt;<br>	&lt;cfset newPopulation = fishBreeder.killFish(currentPopulation=newPopulation,reproductiveRate=form.reproductiveRate,unitsOfDeath=form.unitsOfDeath,lethality=form.lethality) /&gt;<br>	&lt;cfchartdata item="#i#" value="#newPopulation#"/&gt;<br>&lt;/cfloop&gt;</p><p>&lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655253">4</a> by Raymond Camden
		posted on 7/21/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>I forgot to mention. If you want to post the source code and an example on your own site, that is fine.</p></div>
	</div>
</div>
		