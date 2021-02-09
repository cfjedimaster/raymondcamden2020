
<div class="comment" id="c_1713655534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655534">1</a> by Steve Bryant
		posted on 7/28/2006 at 8:36 PM
		</div>
		<div class="comment_text"><p>OK. I'll take a stab. I named my data type "Arrayo".</p><p>Seemed like a bit too much code for comments, so you can see it here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fbryantwebconsulting.com%2Fclients%2Fsamples%2FArrayo.txt%3Av-wkkdpeWEgi5sc_ipTYpDpIbeE&amp;cuid=3321886" rel="nofollow noopener" title="http://bryantwebconsulting.com/clients/samples/Arrayo.txt">http://bryantwebconsulting....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655547">2</a> by Cedric Villat
		posted on 7/28/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>Here is my solution. Not tested at all, but it should work :)</p><p>&lt;cfcomponent&gt;<br>&lt;cffunction name="init" returntype="struct"&gt;<br>	&lt;cfargument name="pullType" type="string" required="yes"&gt;</p><p>	&lt;cfif NOT ListFind(arguments.pullType, "filo,fifo,random")&gt;<br>		&lt;cfthrow type="invalid_pullType" message="Valid pullTypes are FILO, FIFO, or RANDOM"&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfset instance.pullType = arguments.pullType&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a> = ArrayNew(1)&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cffunction name="length" returntype="numeric"&gt;<br>	&lt;cfreturn ArrayLen(<a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>)&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="IsEmpty" returntype="numeric"&gt;<br>	&lt;cfif length() GT 0&gt;<br>		&lt;cfreturn false&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="Push" returntype="void"&gt;<br>	&lt;cfargument name="item" type="any" required="yes"&gt;<br>	&lt;cfset ArrayAppend(<a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>, arguments.item)&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="Pull" returntype="any"&gt;<br>	&lt;cfset var item = ""&gt;<br>	&lt;cfset var pos = 0&gt;</p><p>	&lt;cfif instance.pullType EQ "fifo"&gt;<br>		&lt;cfset item = <a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>[1]&gt;<br>		&lt;cfset ArrayDeleteAt(<a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>, 1)&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfif instance.pullType EQ "lifo"&gt;<br>		&lt;cfset item = <a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>[length()]&gt;<br>		&lt;cfset ArrayDeleteAt(<a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>, length())&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfif instance.pullType EQ "random"&gt;<br>		&lt;cfset position = RandRange(1, length())&gt;<br>		&lt;cfset item = <a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>[position]&gt;<br>		&lt;cfset ArrayDeleteAt(<a href="http://disq.us/url?url=http%3A%2F%2Finstance.data%3A6gGnPVXr-pdQPOeE-njyEctoKAk&amp;cuid=3321886" rel="nofollow noopener" title="instance.data">instance.data</a>, position)&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn item&gt;<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655546">3</a> by Cedric Villat
		posted on 7/28/2006 at 8:56 PM
		</div>
		<div class="comment_text"><p>Guess I should have checked to see if IsEmpty() before I return data, whoops :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655543">4</a> by DanielD
		posted on 7/28/2006 at 9:43 PM
		</div>
		<div class="comment_text"><p>This was actualy the first CFC that I wrote in CFMX.  It was not as feature rich as the one described here with init as it was just a simple FILO Stack. Will have to see if I still have the code somewhere and add this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655544">5</a> by brian
		posted on 7/28/2006 at 11:04 PM
		</div>
		<div class="comment_text"><p>&lt;cfcomponent&gt;</p><p>	&lt;cfset this.array = ArrayNew(1) /&gt;<br>	&lt;cfset variables.pullMethodLogic = 0 /&gt;</p><p>	&lt;cffunction name="init" access="public" output="false" returntype="any"&gt;<br>		&lt;cfargument name="pullDirection" default="FIFO" /&gt;<br>		&lt;cfset variables.pullMethodLogic = variables[arguments.pullDirection] /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="push" access="public" output="false" returntype="any"&gt;<br>		&lt;cfargument name="value" default="" /&gt;<br>		&lt;cfset arrayAppend(this.array,arguments.value) /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="pull" access="public" output="false" returntype="any"&gt;<br>		&lt;cfset var value = this.array[variables.pullMethodLogic()] /&gt;<br>		&lt;cfset ArrayDeleteAt(this.array,variables.pullMethodLogic()) /&gt;<br>		&lt;cfreturn value /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="length" access="public" output="false" returntype="any"&gt;<br>		&lt;cfreturn ArrayLen(this.array) /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="isEmpty" access="public" output="false" returntype="any"&gt;<br>		&lt;cfreturn ArrayIsEmpty(this.array) /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="FIFO" access="private" output="false" returntype="any"&gt;<br>		&lt;cfreturn 1 /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="FILO" access="private" output="false" returntype="any"&gt;<br>		&lt;cfreturn ArrayLen(this.array) /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="Random" access="private" output="false" returntype="any"&gt;<br>		&lt;cfreturn RandRange(1,ArrayLen(this.array)) /&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>--------------- <br>TESTS</p><p>--- --- FIFO Test --- --- <br>&lt;cfset myArrayIterator = createObject("component","ArrayIterator") /&gt;<br>&lt;cfset myArrayIterator.init("FIFO") /&gt;</p><p>&lt;cfset myArrayIterator.push("Fort Collins") /&gt;<br>&lt;cfset myArrayIterator.push("Phoenix") /&gt;<br>&lt;cfset myArrayIterator.push("Bismarck") /&gt;<br>&lt;cfset myArrayIterator.push("Paris") /&gt;<br>&lt;cfset myArrayIterator.push("KTown") /&gt;<br>&lt;cfset myArrayIterator.push("Stertown") /&gt;<br>&lt;cfset myArrayIterator.push("Loveland") /&gt;</p><p>&lt;cfdump var="#myArrayIterator.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator.pull()#" /&gt;</p><p>&lt;br /&gt;<br>--- --- FILO Test --- --- <br>&lt;cfset myArrayIterator2 = createObject("component","ArrayIterator") /&gt;<br>&lt;cfset myArrayIterator2.init("FILO") /&gt;</p><p>&lt;cfset myArrayIterator2.push("Fort Collins") /&gt;<br>&lt;cfset myArrayIterator2.push("Phoenix") /&gt;<br>&lt;cfset myArrayIterator2.push("Bismarck") /&gt;<br>&lt;cfset myArrayIterator2.push("Paris") /&gt;<br>&lt;cfset myArrayIterator2.push("KTown") /&gt;<br>&lt;cfset myArrayIterator2.push("Stertown") /&gt;<br>&lt;cfset myArrayIterator2.push("Loveland") /&gt;</p><p>&lt;cfdump var="#myArrayIterator2.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator2.pull()#" /&gt;<br>&lt;br /&gt;<br>--- --- Random Test --- --- <br>&lt;cfset myArrayIterator3 = createObject("component","ArrayIterator") /&gt;<br>&lt;cfset myArrayIterator3.init("Random") /&gt;</p><p>&lt;cfset myArrayIterator3.push("Fort Collins") /&gt;<br>&lt;cfset myArrayIterator3.push("Phoenix") /&gt;<br>&lt;cfset myArrayIterator3.push("Bismarck") /&gt;<br>&lt;cfset myArrayIterator3.push("Paris") /&gt;<br>&lt;cfset myArrayIterator3.push("KTown") /&gt;<br>&lt;cfset myArrayIterator3.push("Stertown") /&gt;<br>&lt;cfset myArrayIterator3.push("Loveland") /&gt;</p><p>&lt;cfdump var="#myArrayIterator3.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.pull()#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.array#" /&gt;<br>&lt;cfdump var="#myArrayIterator3.pull()#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655554">6</a> by Raymond Camden
		posted on 7/29/2006 at 12:10 AM
		</div>
		<div class="comment_text"><p>Steve: Nice job locking, but you need to lock the push, length, and isempty funcs as well. No one else used lock though, so credit to you. :)</p><p>Brian gets points for adding tests (which is more then I can say for my own code. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655561">7</a> by Cedric Villat
		posted on 7/29/2006 at 1:50 AM
		</div>
		<div class="comment_text"><p>Ray, not even a single point for me... damn ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655553">8</a> by Raymond Camden
		posted on 7/31/2006 at 5:05 PM
		</div>
		<div class="comment_text"><p>Sorry Cedric. :) Everyone gets points. ;)</p></div>
	</div>
</div>
		