
<div class="comment" id="c_1713743416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743416">1</a> by CJM
		posted on 10/15/2012 at 9:59 PM
		</div>
		<div class="comment_text"><p>I'll definitely be playing with this more later since it's fun!  I just did simple stuff, didn't really go to deep with it.  If I think about it I'd probably due detailed value tracking to make better decisions on what action to take but for keeping it simple this did a decent job of not staying right around our starting value.</p><p>var result = {};<br>/* keep track of what turn we are on */<br>if ( storage.count == undefined ) {<br>  storage.count = 1<br>}<br>/* increment turn */<br>storage = {<br> count: count++<br>}<br>/* if we have cash and the stock is considerably down, buy max */<br>if( cash &gt; 500 &amp;&amp; change &lt; -5 ) {<br>  result.action="buy";<br>  result.quantity= Math.floor( cash / value ) ;<br>/* only a small gain, hold */<br>} else if ( change &gt; 0 &amp;&amp; change &lt; 3 ) {<br>  result.action="hold";<br>/* Stock is on a fairly large gain, dump it all */<br>} else if ( change &gt; 3 ) {<br>  result.action="sell";<br>  result.quantity = shares;<br>} else {<br>  result.action="hold";<br>}<br>/* if at end of game sell everything! */<br>if ( storage.count == 99 ) {<br>  result = {<br>    action:"sell",<br>    quantity:shares<br>  }<br>}<br>return result;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743415">2</a> by CJM
		posted on 10/15/2012 at 10:01 PM
		</div>
		<div class="comment_text"><p>I forgot to mention the only thing probably worth taking out of my code is the turn track with the final stock dump at the very end!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743419">3</a> by CJM
		posted on 10/16/2012 at 2:15 AM
		</div>
		<div class="comment_text"><p>Can't believe no on else at least posted playing with this thing.  I finally got a chance to play a little more.</p><p>Purchasing is just based off cumulative averages.  Nothing special, just thought it was fun to play with!</p><p>/* initialize our base storage values */<br>_initValues( value );<br>var result = {};</p><p>/* BUY RULE */<br>if( cash &gt; 500 &amp;&amp; ( getCumulativeAverage() - value ) &gt; 20 ) {<br>	result.action = "buy";<br>	result.quantity= Math.floor( cash / value );<br>  	storage.lastBuyValue = value;<br>/* SELL RULE */<br>} else if ( ( value - getCumulativeAverage() ) &gt; 15 ) {<br>  	result.action="sell";<br>  	result.quantity = shares;<br>/* DEFAULT ACTION */<br>} else {<br>  	result.action="hold";<br>}</p><p>/* first turn, buy max because minValue of stock is always decent */<br>if ( count == 1 ) {<br>	result.action="buy";<br>  	result.quantity= Math.floor( cash / value );<br>  	storage.lastBuyValue = value;<br>}<br>/* if at end of game sell everything! */<br>if ( count == 99 ) {<br>  	result = {<br>    	action:"sell",<br>    	quantity:shares<br>  	};<br>}<br>/* track this transaction */<br>_trackTransaction( value, shares, cash, result, storage );<br>/* update cumulative average */<br>_calcCumulativeAverage( value, count );</p><p>return result;</p><p>function getCumulativeAverage() { return storage.cumuluativeAverage; }</p><p>function _initValues( value ) {<br>	/* Init tracking variables */<br>	if ( storage.arrTransactions === undefined ) {<br>		storage.arrTransactions = []<br>	}<br>	if ( storage.initialValue === undefined ) {<br>		storage.initialValue = value;<br>	}<br>	if ( storage.cumuluativeAverage === undefined ) {<br>		storage.cumuluativeAverage = value;<br>	}<br>	if ( storage.arrHistory === undefined ) {<br>		storage.arrHistory = [];<br>	}<br>}</p><p>function _calcCumulativeAverage( value, count) {<br>	var i = 0;<br>	var sum = 0;<br>	for ( i = 0; i &lt; storage.arrHistory.length; i++ ) {<br>		sum+= storage.arrHistory[i];<br>	}<br>	storage.cumuluativeAverage = sum / count;<br>}</p><p>function _trackTransaction( value, shares, cash, result ) {<br>	/* Transaction tracking */<br>	if ( ( result.action == "buy" || result.action == "sell" ) &amp;&amp; result.quantity &gt; 0 ) {<br>		transaction = {<br>			value: value,<br>			shares: shares,<br>			cash: cash,<br>			action: result.action,<br>			quantity: result.quantity,<br>			cumuluativeAverage: storage.cumuluativeAverage,<br>			lastBuyValue: storage.lastBuyValue<br>		}<br>		storage.arrTransactions.push( transaction );<br>	}<br>	/* Track Value History */<br>	storage.arrHistory.push( value );<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743418">4</a> by Raymond Camden
		posted on 10/16/2012 at 9:34 AM
		</div>
		<div class="comment_text"><p>CJM: It has been my experience that the blog posts I think people will comment heavily on... are not. ;) I'm glad your enjoying it, and thank you for posting your code!</p></div>
	</div>
</div>
		