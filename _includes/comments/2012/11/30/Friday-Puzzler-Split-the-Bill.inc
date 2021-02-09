
<div class="comment" id="c_1713743901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743901">1</a> by Mike Collins
		posted on 11/30/2012 at 9:29 PM
		</div>
		<div class="comment_text"><p>This probably needs more validation but here is my quick answer.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fpub%3Fid%3D1iHgidr-4rWBGvH_VYWhH6LWrEdlhLRWgrDj4gDo0G9I%3AZxsq8M1Qx_Cy_SXkoEyOxzV11YQ&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/document/pub?id=1iHgidr-4rWBGvH_VYWhH6LWrEdlhLRWgrDj4gDo0G9I">https://docs.google.com/doc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743904">2</a> by Lance
		posted on 11/30/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>Here is my shot :-)</p><p>&lt;pre&gt;<br>&amp;lt;cfscript&gt;<br>	param name='numOfPeople' default='3';<br>	param name='bill' default='143.03';<br>	param name='tip' default='0.15';</p><p>	function SplitBill(p,b,t){  // p = number of people, b = bill total, t = percentage of tip to be left default to 15%<br>		var rt = arrayNew(1);<br>		var tb = 0;<br>		var eachBase = 0;<br>		var remainder = 0;<br>		var ranPerson = 0;<br>		if (!isNumeric(arguments.p)||!isNumeric(arguments.b)){return 'Enter Bill and number of people as numbers';}<br>		if (!isNumeric(arguments.t)){arguments.t = 0.15;}<br>		var tb = arguments.b*(1+arguments.t);<br>		var eachBase = int(tb*100/arguments.p);<br>		var remainder = arguments.b*100 mod arguments.p;<br>		var ranPerson = randRange(1,arguments.p);<br>		for(i=1;i&amp;lt;=arguments.p;i++){<br>			rt[i]=eachBase;<br>		}<br>		while(remainder&gt;0){<br>			rt[ranPerson]=rt[ranPerson]+1;<br>			ranPerson = ranPerson+1;<br>			if(ranPerson &gt; arrayLen(rt)){ranPerson=1;}<br>			remainder = remainder-1;<br>		}<br>		for(i=1;i&amp;lt;=arguments.p;i++){<br>			rt[i]=dollarFormat(rt[i]/100);<br>		}<br>		return rt;<br>	}<br>	result = SplitBill(numOfPeople,bill,tip);<br>	writeDump(result);<br>&amp;lt;/cfscript&gt;</p><p>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743906">3</a> by Bill
		posted on 11/30/2012 at 10:04 PM
		</div>
		<div class="comment_text"><p>Here is mine</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FUVu3MhiC%3A5SWSLkyEymJnpNnNRq1E25zP5sc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/UVu3MhiC">http://pastebin.com/UVu3MhiC</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743922">4</a> by Bill
		posted on 11/30/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>Small update to above post</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fu30niHsz%3Avm4pE1Rm8eZsILbG9pXdLfxqTw0&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/u30niHsz">http://pastebin.com/u30niHsz</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743921">5</a> by Raymond Camden
		posted on 11/30/2012 at 10:14 PM
		</div>
		<div class="comment_text"><p>Will I be the first to smile at the fact that Bill wrote code to split the Bill? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743927">6</a> by Lance
		posted on 11/30/2012 at 10:34 PM
		</div>
		<div class="comment_text"><p>Since this pasted poorly, here it is in paste bin.  Extra point for figuring the tip? lol</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fzs36UkiF%3Aad06W5P48FdrGHyOi8LJUNSQX8E&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/zs36UkiF">http://pastebin.com/zs36UkiF</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743920">7</a> by CJM
		posted on 12/1/2012 at 3:49 AM
		</div>
		<div class="comment_text"><p>Whew, this ended up being some ugly code when you try to go fast!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FpMgS6aB8%3AVNvZoh2tg9rkdTU5KmsrlgHxDOo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/pMgS6aB8">http://pastebin.com/pMgS6aB8</a></p><p>Here are the test cases I ran ( I'd love to know the ones that break it! ):</p><p>writeOutput( ".33 .33 .34" );<br>writeDump( splitBill( 3, 1 ) );<br>writeOutput( ".25 .25" );<br>writeDump( splitBill( 2, .5 ) );<br>writeOutput( "20" );<br>writeDump( splitBill( 1, 20 ) );<br>writeOutput( "1.33 1.33 1.34" );<br>writeDump( splitBill( 3, 4 ) );<br>writeOutput("4.21 4.21 4.21 4.21");<br>writeDump( splitBill( 4, 16.84 ) );<br>writeOutput( "4.39 4.39 4.39 4.39 4.39 4.40" );<br>writeDump( splitBill( 6, 26.35 ) );<br>writeOutput(" -3, 26.35");<br>writeDump( splitBill( -3, 26.35 ) );<br>writeOutput(" 3, -26.35");<br>writeDump( splitBill( 3, -26.35 ) );<br>writeOutput("Nothing Passed");<br>writeDump( splitBill() );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743924">8</a> by Raymond Camden
		posted on 12/1/2012 at 3:51 AM
		</div>
		<div class="comment_text"><p>Btw - thank you to all who used pastebin/external sites/etc. Lance, you're fired. No, you lose -2.1 brownie points. There we go. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743923">9</a> by Jared
		posted on 12/1/2012 at 4:08 AM
		</div>
		<div class="comment_text"><p>hi everyone! this is a great exercise idea, but is anyone going to post a sample in something other than cold fusion? i'm sure all those script samples are awesome and work great for people who run cold fusion, but you can bring in a ton of traffic on this blog post if you show some samples in a more current or relevant language. how about some python maybe? i'm learning that one as we speak, that would be great. anyone???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743925">10</a> by AXL
		posted on 12/1/2012 at 7:48 AM
		</div>
		<div class="comment_text"><p>Here is my version.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F7MthR9Sd%3A_D91NVf823BfTwbbp87spr-ZQKc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/7MthR9Sd">http://pastebin.com/7MthR9Sd</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743926">11</a> by Raymond Camden
		posted on 12/1/2012 at 5:11 PM
		</div>
		<div class="comment_text"><p>@Jared: I don't mind other languages, but this is a "ColdFusion" puzzler. It is specifically meant for ColdFusion solutions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743930">12</a> by Bob
		posted on 12/2/2012 at 7:15 AM
		</div>
		<div class="comment_text"><p>Just ran across this and figured I'd throw my entry in just for the heck of it...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fa4mG00JD%3AyvNw2L_nTUfpURFhR6wL_OR9uFA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/a4mG00JD">http://pastebin.com/a4mG00JD</a></p></div>
	</div>
</div>
		