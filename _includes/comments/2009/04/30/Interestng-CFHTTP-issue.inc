
<div class="comment" id="c_1713715058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715058">1</a> by Joshua Cyr
		posted on 4/30/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>so if you remove the f and s form params and keep just in the URL sting it doesn't work?</p><p>I would have guessed that the URL string forces it to decode and thus work properly vs form which does not.  but it would be odd that it would require both url and form to force that behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715064">2</a> by Raymond Camden
		posted on 4/30/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>I may not have made it clear. I needed both args, in both places, for it work. It didn't work w/o them both there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715085">3</a> by Ben Nadel
		posted on 4/30/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>That's bananas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715066">4</a> by Joshua Cyr
		posted on 4/30/2009 at 9:56 PM
		</div>
		<div class="comment_text"><p>My bet is that they do a check for form fields in their code or reject it, but actually let the URL string work.</p><p>Try putting junk in the form field part.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715065">5</a> by Mike
		posted on 4/30/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>The "f" param tells Yahoo! what information you want back from the query.  More information here:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.gummy-stuff.org%2FYahoo-data.htm%3A9FXm4kWH4Gb0VFubP_SrA2mxwng&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gummy-stuff.org/Yahoo-data.htm">http://www.gummy-stuff.org/...</a></p><p>Also to be clear this is not part of Yahoo!'s API, instead it is a free service as long as you state that the stock quotes are via Yahoo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715062">6</a> by Raymond Camden
		posted on 4/30/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>@JC: Nope, no go.</p><p>@Mike:Ah, sorry then. For folks who want to try my code, change F to: sl1d1t1c1ohgvj1pp2wern</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715067">7</a> by Rob Brooks-Bilson
		posted on 4/30/2009 at 10:06 PM
		</div>
		<div class="comment_text"><p>This is the same "service" that the cf_stockgrabber tag I wrote back in 1997 uses. Interestingly enough, the MX version of the tag still works today.</p><p>My code is a little different, but the CFHTTP call looks like this:</p><p>&lt;code&gt;<br>&lt;cfhttp <br>   method="get"<br>	 url="<a href="http://disq.us/url?url=http%3A%2F%2Fdownload.finance.yahoo.com%2Fd%2Fquotes.csv%3Fs%3D%23attributes.tickerSymbols%23%26f%3Dsnl1d1t1c1ohgv%26e%3D.csv%3ATkKPLaYkFnmM0ozLVq5T_r6m5-M&amp;cuid=3321886" rel="nofollow noopener" title="http://download.finance.yahoo.com/d/quotes.csv?s=#attributes.tickerSymbols#&amp;f=snl1d1t1c1ohgv&amp;e=.csv">http://download.finance.yah...</a>"<br>   name="myQuery"<br>   columns="Symbol,Company_Name,Last_Traded_Price,Last_Traded_Date,Last_Traded_Time,Change,Opening_Price,Days_High,Days_Low,Volume"<br>   delimiter=","<br>   textqualifier=""""<br>   firstRowAsHeaders="no"&gt;<br>&lt;/code&gt;</p><p>Going this way, there's no problem with escaped characters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715070">8</a> by Raymond Camden
		posted on 4/30/2009 at 10:11 PM
		</div>
		<div class="comment_text"><p>Interesting. Rob, did you notice your URL was different? When you switch the URL to Mikes, and use the rest of your code, it breaks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715071">9</a> by Rob Brooks-Bilson
		posted on 4/30/2009 at 10:17 PM
		</div>
		<div class="comment_text"><p>Interesting indeed. I'm not sure where Mike's url came from. I've been using the one I posted forever. Tell him to switch ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715079">10</a> by Eric Belair
		posted on 4/30/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>Try changing the "type" attribute in teh CFHTTPPARAM tags to "url". This is how my code to retrieve Yahoo! Stock Quotes is written (also, it is sent as a "GET"), and I've never had a problem with any symbols being sent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715082">11</a> by Raymond Camden
		posted on 4/30/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>Eric, I'm pretty sure I tried that and it failed. Does it work for you using the code above (fixing 'f' of course).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715087">12</a> by Dan G. Switzer, II
		posted on 5/1/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>It's because your using the POST method in the 2nd example. In the first sample, you're using GET--which will escape the variables automatically (since GET is sent with the URL--not in the body of the request.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715081">13</a> by Raymond Camden
		posted on 5/1/2009 at 12:05 AM
		</div>
		<div class="comment_text"><p>Dan, trust, I tried switching to POST in the first example. I think I even say that in the blog post, don't I?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715069">14</a> by Dan G. Switzer, II
		posted on 5/1/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Perhaps the private key is required via the URL scope and the stock is expected in the FORM scope.</p><p>It might be the URL is just supposed to be:<br><a href="http://disq.us/url?url=http%3A%2F%2Fquote.yahoo.com%2Fd%2Fquotes.csv%3Ff%3Dxxx%3ACPx7b8ktLU4u78avt4ryrNOG49Q&amp;cuid=3321886" rel="nofollow noopener" title="http://quote.yahoo.com/d/quotes.csv?f=xxx">http://quote.yahoo.com/d/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715083">15</a> by Raymond Camden
		posted on 5/1/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>Nope, see above comments. I was wrong about f. F helps define the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715086">16</a> by JC
		posted on 5/1/2009 at 12:39 AM
		</div>
		<div class="comment_text"><p>That "F" string is actually telling it which fields you want... there's no special codes, you can get the URL just by going to the yahoo finance site and saying you want to download the info.</p><p>same service, this code works and has for ages:</p><p>&lt;cfparam name="attributes.symbols" default="^DJI"&gt;<br>&lt;cfhttp URL="<a href="http://disq.us/url?url=http%3A%2F%2Ffinance.yahoo.com%2Fd%2Fquotes.csv%3Fs%3D%23attributes.symbols%23%26f%3Dsd1t1l1abjkghvpc1o%26e%3D.csv%3AwxAfM7HdQwLFyAhNsHZmcQbrmbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://finance.yahoo.com/d/quotes.csv?s=#attributes.symbols#&amp;f=sd1t1l1abjkghvpc1o&amp;e=.csv">http://finance.yahoo.com/d/...</a>"<br>METHOD="GET"<br>PORT="80"<br>RESOLVEURL="true"<br>timeout="120"&gt;</p><p>I'll cut most of the rest out to keep it short.</p><p>&lt;cfset detailarray = listtoarray(cfhttp.filecontent)&gt;<br>&lt;cfscript&gt;<br>	symbol = detailarray[1];<br>	date = detailarray[2];<br>	tradetime = detailarray[3];<br>	lasttrade = detailarray[4];<br>	askprice = detailarray[5];<br>	bidprice = detailarray[6];<br>	start52 = detailarray[7];<br>	end52 = detailarray[8];<br>	daystart = detailarray[9];<br>	dayend = detailarray[10];<br>	volume = detailarray[11];<br>	previousclose = detailarray[12];<br>	change = detailarray[13];<br>	lastopen = detailarray[14];<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715076">17</a> by JC
		posted on 5/1/2009 at 12:41 AM
		</div>
		<div class="comment_text"><p>err</p><p>URL="http ://<a href="http://disq.us/url?url=http%3A%2F%2Ffinance.yahoo.com%2Fd%2Fquotes.csv%3F%3ABDZtZPKLvxhCewpmYLxbEB0N25A&amp;cuid=3321886" rel="nofollow noopener" title="finance.yahoo.com/d/quotes.csv?">finance.yahoo.com/d/quotes....</a> s=#attributes.symbols# &amp;f=sd1t1l1abjkghvpc1o &amp;e=.csv"</p><p>strip the spaces out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715084">18</a> by JC
		posted on 5/1/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>sorry to post too much... but here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffinance.yahoo.com%2Fq%3Fs%3D%3A0zpmms1h7ijRlbyT0sXuyYZSFZg&amp;cuid=3321886" rel="nofollow noopener" title="http://finance.yahoo.com/q?s=">http://finance.yahoo.com/q?s=</a>^DJI</p><p>righthand side, beneath the chart, it says "Download Data" and that's where this link comes from:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdownload.finance.yahoo.com%2Fd%2Fquotes.csv%3Fs%3D%255EDJI%26f%3Dsl1d1t1c1ohgv%26e%3D.csv%3A_FsOBIldNV3W4uqdGvK5o_3DUKk&amp;cuid=3321886" rel="nofollow noopener" title="http://download.finance.yahoo.com/d/quotes.csv?s=%5EDJI&amp;f=sl1d1t1c1ohgv&amp;e=.csv">http://download.finance.yah...</a></p><p>it's not a post, it's a get. Just a plain old link on a webpage.</p></div>
	</div>
</div>
		