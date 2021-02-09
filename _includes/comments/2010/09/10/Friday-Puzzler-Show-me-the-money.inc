
<div class="comment" id="c_1713726398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726398">1</a> by Adam Tuttle
		posted on 9/10/2010 at 4:40 PM
		</div>
		<div class="comment_text"><p>numeric function getPeriods(required numeric initBalance, required numeric intRate, required numeric desiredTotal) output="false" {<br>	//assume interest rate is of format .5 = 50%<br>	var periods = (log(arguments.desiredTotal) - log(arguments.initBalance))/log(1+arguments.intRate);<br>	return (ceiling(periods));<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726385">2</a> by Amar
		posted on 9/10/2010 at 4:41 PM
		</div>
		<div class="comment_text"><p>function calculatedays(x,y,z)<br>{ // x = amount, y= percent interest, z=desired amount<br>var days = 0;<br>var w = x;<br>while (w&lt;z)<br>{w=w+(w*y/100);<br>days=days+1;<br>}<br>return days;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726387">3</a> by Adam Tuttle
		posted on 9/10/2010 at 4:41 PM
		</div>
		<div class="comment_text"><p>Or to see it with some proper formatting: <a href="http://disq.us/url?url=http%3A%2F%2Fgist.github.com%2F573566%3A_Thdj6rc8SuSCjGEg9gtbgH_Sdk&amp;cuid=3321886" rel="nofollow noopener" title="http://gist.github.com/573566">http://gist.github.com/573566</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726401">4</a> by Danny
		posted on 9/10/2010 at 4:58 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="daysTill" returntype="struct"&gt;<br>	&lt;cfargument name="initBal" type="numeric" required="true"&gt;<br>	&lt;cfargument name="interVal" type="numeric" required="true" hint="Interest Value as percent"&gt;<br>	&lt;cfargument name="desireTotal" type="numeric" required="false" default="#arguments.initBal*2#"&gt;<br>	&lt;cfargument name="returnChart" type="boolean" required="false" default="false"&gt;</p><p>	&lt;cfset var dayCount = 0/&gt;<br>	&lt;cfset var currentAmount = arguments.initBal/&gt;<br>	&lt;cfset var chartQuery = querynew("day,currentamount")/&gt;<br>	&lt;cfset var outStruct = {}/&gt;<br>	&lt;cfset var theChart = ""/&gt;</p><p>	&lt;cfloop condition="#currentAmount# LT #arguments.desireTotal#"&gt;<br>		&lt;cfset currentAmount += (currentAmount * (arguments.interVal/100))/&gt;<br>		&lt;cfset daycount++/&gt;<br>		&lt;cfset queryaddrow(chartQuery)/&gt;<br>		&lt;cfset querysetcell(chartQuery,"day",NumberFormat(daycount))/&gt;<br>		&lt;cfset querysetcell(chartQuery,"currentAmount",currentAmount)/&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset outStruct.days = daycount/&gt;<br>	&lt;cfif arguments.returnChart&gt;<br>		&lt;cfsavecontent variable="theChart"&gt;<br>			&lt;cfchart title="Growth at #arguments.interVal#% interest" chartheight="500" chartwidth="500" xaxistitle="Days" yaxistitle="Dollar Amount"&gt;<br>				&lt;cfchartseries query="chartQuery" itemcolumn="day" valuecolumn="currentAmount" type="line"&gt;<br>			&lt;/cfchart&gt;<br>		&lt;/cfsavecontent&gt;<br>		&lt;cfset outStruct.theChart = theChart/&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn outStruct/&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726388">5</a> by Jeff Price
		posted on 9/10/2010 at 5:29 PM
		</div>
		<div class="comment_text"><p>function calculatedays(amount,rate,total)<br>{ <br>return 42;<br>}</p><p>My answer is correct, I believe it is your question that is wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726395">6</a> by Raymond Camden
		posted on 9/10/2010 at 5:31 PM
		</div>
		<div class="comment_text"><p>Ok, I got to say - even with Adam's being the shortest, I think Jeff may win just cuz. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726394">7</a> by Louis
		posted on 9/10/2010 at 5:33 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="calculate_interest"&gt;<br>    &lt;cfargument name="balance" type="numeric" required="yes"&gt;<br>    &lt;cfargument name="interest" type="numeric" required="yes"&gt;<br>    &lt;cfargument name="desired" type="numeric" required="yes"&gt;</p><p>    &lt;cfset var i = 0&gt;<br>    &lt;cfset var total = arguments.balance&gt;</p><p>    &lt;cfloop condition="total lt arguments.desired"&gt;<br>        &lt;cfset i = i + 1&gt;<br>    	&lt;cfset daily_interest = (total / 100) * arguments.interest&gt;<br>        &lt;cfset total = total + daily_interest&gt;<br>    &lt;/cfloop&gt;</p><p>    &lt;cfreturn i&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#calculate_interest(1000, 1, 2000)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726403">8</a> by Louis
		posted on 9/10/2010 at 5:39 PM
		</div>
		<div class="comment_text"><p>Although mathematically Adam's entry is the best, I feel it fails as it doesn't meet this requirement:</p><p>* Takes in a percentage interest value.</p><p>As I always say, if you can't win by being the most talented, find a technicality and get the opposition disqualified :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726399">9</a> by Justin Mclean
		posted on 9/10/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>How about some unnecessary recession? If you get a stack overflow it's going take too long and you should invest elsewhere :-)</p><p>&lt;cfscript&gt;<br>function calculateDays(initalAmount,finalAmount,rate)<br>{<br>		newAmount = initalAmount*(1+rate/100);</p><p>		if (ArrayLen(arguments) gt 3) {<br>   			days = arguments[4];<br> 		}<br> 		else {<br> 			days = 1;<br> 		}</p><p>		if (newAmount &lt;= finalAmount) {<br>			return calculateDays(newAmount,finalAmount,rate,days+1);<br>		}<br>		else {<br>			return days;<br>		}<br>	}<br>&lt;/cfscript&gt;</p><p>&lt;cfdump var="#calculateDays(1000,2000,1)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726404">10</a> by Justin Mclean
		posted on 9/10/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>Opps. Recursion even.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726411">11</a> by Don
		posted on 9/10/2010 at 6:18 PM
		</div>
		<div class="comment_text"><p>function db(p1,p2,i){<br>	return ceiling(log(p2/p1)/(log(1+i/(365*100))));<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726408">12</a> by Raymond Camden
		posted on 9/10/2010 at 6:19 PM
		</div>
		<div class="comment_text"><p>jeeze Don - thats fricken short!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726407">13</a> by Mark Andrachek
		posted on 9/10/2010 at 6:58 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="getN" hint="Get the number of periods it will take to reach your investment."&gt;<br>	&lt;cfargument name="P" type="numeric" hint="The present value."/&gt;<br>	&lt;cfargument name="i" type="numeric" hint="The interest rate in percent."/&gt;<br>	&lt;cfargument name="F" type="numeric" hint="The goal, the final value."/&gt;<br>	&lt;!--- N = ln(F/P)/ln(1+i) ---&gt;<br>	&lt;cfreturn log(arguments.F/arguments.P)/log(1+(arguments.i/100)) /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726405">14</a> by Curt Gratz
		posted on 9/10/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>Everyone is forgetting to take into account the current President.  This makes a very LARGE difference in this calculation.<br>&lt;cfscript&gt;<br>function calculateDays(amount,percent,endingAmount,currentPres){<br>	var daysToTotal = 0;<br>	var workingAmount = amount;</p><p>	while (workingAmount&lt;endingAmount) {<br>		workingAmount=workingAmount+(workingAmount*percent/100);<br>		daysToTotal=daysToTotal+1;<br>	}</p><p>	//if we are under the Obama administration, add 5 more days<br>	if (structKeyExists(arguments,"currentPres") and len(currentPres) and currentPres contains "Obama"){<br>		daysToTotal=daysToTotal+5;<br>	}<br>	//if we are under the Bush administration, add 3 more days<br>	else if (structKeyExists(arguments,"currentPres") and len(currentPres) and currentPres contains "Bush"){<br>		daysToTotal=daysToTotal+3;<br>	}<br>	//if we are under the Reagan administration, add 50 more days<br>	else if (structKeyExists(arguments,"currentPres") and len(currentPres) and currentPres contains "Cliton"){<br>		daysToTotal=daysToTotal+50;<br>	}<br>	//if we are under the Reagan administration, subtract 25 days<br>	else if (structKeyExists(arguments,"currentPres") and len(currentPres) and currentPres contains "Reagan"){<br>		daysToTotal=daysToTotal-25;<br>	}</p><p>	return daysToTotal;<br>}<br>&lt;/cfscript&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000)#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000,"Barack Obama")#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000,"George W. Bush")#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000,"Bill Cliton")#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000,"George Bush Senior")#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#calculateDays(1000,1,5000,"Ronald Reagan")#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726410">15</a> by Raymond Camden
		posted on 9/10/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>Truly sad there Curt. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726413">16</a> by sue lornitzo
		posted on 9/10/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>&lt;!---A=desired amount<br>       R=desired rate<br>       t=time in years<br>       p=initial amount</p><p>       Submitted  by Sue Lornitzo<br>       Lornitzo@charter.net---&gt;</p><p>       &lt;cfif isDefined('calculate') is 'YES'&gt;<br>       &lt;cfset top=log(#A#/#P#)&gt;<br>       &lt;cfset R=#R#/100&gt;<br>         &lt;cfset bottom=log(1+#R#)&gt;<br>        &lt;cfset fractionTop=#top#/#bottom#&gt;<br>        &lt;cfset multiplier=#fractionTop#/365&gt;<br>       &lt;cfset t=365*#multiplier#&gt;</p><p>&lt;center&gt;<br>&lt;cfoutput&gt;<br>       &lt;br&gt;<br>       &lt;br&gt;<br>&lt;cfset DesiredRate=#R#*100&gt;<br> &lt;p style="color:maroon;"&gt;You will reach your goal of #dollarFormat(A)#, at #DesiredRate#% per day, in #decimalFormat(t)# days&lt;/p&gt;<br> &lt;/cfoutput&gt;</p><p>       &lt;br&gt;<br>       &lt;br&gt;</p><p>&lt;cfset x_max=#t#+2&gt;</p><p> &lt;cfset y_max=#t#+2&gt;<br> &lt;cfset y_min=#P#*.8&gt;</p><p>&lt;cfchart<br>   format="png"<br>   scalefrom="#y_min#"<br>   scaleto="#y_max#"<br>      xAxisTitle = "Days" <br>   yAxisTitle = "Amount" &gt;<br>  &lt;cfchartseries<br>      type="line"<br>      serieslabel="Website Traffic 2006"<br>      seriescolor="blue"<br>      &gt;</p><p>&lt;cfset x_max=#t#+2&gt;<br>       &lt;cfloop from="1" to="#x_max#" index="i"&gt;</p><p>      &lt;cfset currentAmt=(#P#*(1+#R#)^(#i#))&gt;<br>    &lt;cfchartdata item="#i#" value="#currentAmt#"&gt;<br>        &lt;/cfloop&gt;<br>  &lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;</p><p>&lt;br&gt;<br>       &lt;/cfif&gt;</p><p>       &lt;br&gt;<br>       &lt;br&gt;<br>       &lt;p style="font-size:.7em;color:blue;text-align:center;"&gt;*Disclaimer:I did this in a hurry so formatting is a bit weak  ):  &lt;br&gt;<br>       Sue Lornitzo&lt;br&gt;<br>       Lornitzo@charter.net&lt;/p&gt;<br>       &lt;form name="InvestmentCalculator" method="post" style="width:800px;"&gt;<br>       &lt;fieldset style="border:1px solid gray;padding-left:2em;padding-right:2em;"&gt;<br>&lt;legend style="padding-bottom:3em;"&gt;<br>When will You Be Rich??<br>&lt;/legend&gt; <br> &lt;p&gt;</p><p> 	&lt;label for="initialAmt" class="required"   style="width: 12em;float:left;text-align: right;margin-right:2em;display:block;"&gt;Initial Investment Amount&lt;/label&gt;</p><p>	$&lt;input type="text" name="P" required="no" style="width:12em;border:1px solid black;width:12em;"&gt;</p><p> &lt;/p&gt;<br> &lt;br&gt;<br> &lt;p&gt;</p><p> 	&lt;label for="dailyInterestRate" class="required" style="width: 12em;float:left;text-align: right;margin-right:2em;display:block;" &gt;Daily Interest Rate (Less than 100%)&lt;/label&gt;</p><p>	&lt;input type="text" name="R" required="yes" style="width:12em;border:1px solid black;width:3em;"&gt;% <br>&lt;/p&gt; <br>&lt;br&gt;<br> &lt;p&gt;</p><p> 	&lt;label for="DesiredAmt" class="required" style="width: 12em;float:left;text-align: right;margin-right:2em;display:block;" &gt;Enter amount you would like to reach&lt;/label&gt;</p><p>	$&lt;input type="text" name="A" required="yes" style="width:12em;border:1px solid black;width:12em;"&gt; <br>&lt;/p&gt;<br>&lt;br&gt;<br> &lt;p&gt;<br> &lt;input type="submit" name="calculate" value="Calculate"&gt;</p><p> &lt;/p&gt;</p><p>  &lt;/fieldset&gt;</p><p>       &lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726414">17</a> by Gary Funk
		posted on 9/10/2010 at 7:35 PM
		</div>
		<div class="comment_text"><p>Don's code is a little off. It should be</p><p>ceiling(log(p2/p1)/(log(1+(1/100))))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726412">18</a> by Raymond Camden
		posted on 9/10/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>I think the winner should be the code that a) works and b) uses the most parenthesis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726390">19</a> by John Luopa
		posted on 9/10/2010 at 8:04 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="getHowManyDaysToSave" returntype="numeric" access="public"&gt;<br>	&lt;cfargument name="initialBalance" type="numeric" required="true"&gt;<br>	&lt;cfargument name="percentageInterest" type="numeric" required="true"&gt;<br>	&lt;cfargument name="desiredTotal" type="numeric" required="true"&gt;</p><p>	&lt;cfset local.numberOfDays = 0&gt;<br>	&lt;cfset local.currentTotal = arguments.initialBalance&gt;</p><p>     &lt;cfloop condition="local.currentTotal LESS THAN OR EQUAL TO arguments.desiredTotal"&gt;	<br>	&lt;cfset local.currentTotal = local.currentTotal + (local.currentTotal * (arguments.percentageInterest / 100))&gt;<br>	&lt;cfset local.numberOfDays = local.numberOfDays + 1&gt;<br>     &lt;/cfloop&gt;<br>     &lt;cfreturn local.numberOfDays&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726397">20</a> by Susan Brun
		posted on 9/10/2010 at 9:32 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="getDays" returntype="Numeric"&gt;<br>	&lt;cfargument name="PresentValue" type="numeric"&gt;<br>	&lt;cfargument name="FutureValue" type="numeric"&gt;<br>	&lt;cfargument name="interestPercentage" type="Numeric"&gt;</p><p>	&lt;cfset numberOfPeriods = (log(#arguments.FutureValue#) - log(#arguments.PresentValue#))/log(1+(#arguments.interestPercentage#/100))&gt;</p><p>&lt;cfreturn numberOfPeriods&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#getDays(1000,2000,1)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726396">21</a> by Raymond Camden
		posted on 9/10/2010 at 11:01 PM
		</div>
		<div class="comment_text"><p>It's almost that time - isn't it. So let me ask the people who subscribed when posting comments - which do YOU think is the best? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726389">22</a> by Raymond Camden
		posted on 9/11/2010 at 12:44 AM
		</div>
		<div class="comment_text"><p>Ok, it was a toss up between Don's, which was sooooo short, and Danny's. I took one point off on Don's code since it was broken (Gary's comment fixed it), and I gave Danny a point for making use of cfsavecontent to wrap the chart. Kinda cool. Although I woulda been more happier if he had used name="theChart" to actually store the binary - this was easier to use. :)</p><p>So thank you all - Danny gets to be the winner today. Danny, ping me via email and I'll drop off your Amazon gift cert.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726393">23</a> by Don Vawter
		posted on 9/11/2010 at 12:48 AM
		</div>
		<div class="comment_text"><p>@Gary it depends whether i is the annual percentage rate (which I assume). If you leave out the 365 then the interest rate provided would need to be the daily interest rate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726392">24</a> by Jetherson Arceo
		posted on 9/13/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>Shouldn't those 365's be 365.25?<br>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726416">25</a> by Gary Funk
		posted on 9/13/2010 at 9:31 PM
		</div>
		<div class="comment_text"><p>@Dan. That is true and that is the answer you gave. However, that is not the question that Ray asked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726418">26</a> by Don Vawter
		posted on 9/13/2010 at 10:20 PM
		</div>
		<div class="comment_text"><p>@Gary. The question posed states "interest rate" and is silent on whether that is an annual percentage rate or daily. If I could figure out how to earn 1% daily on a safe investment I would retire.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726419">27</a> by Gary Funk
		posted on 9/13/2010 at 11:33 PM
		</div>
		<div class="comment_text"><p>He stated 1% interest every day. He didn't say it was 1% anually compounded daily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726420">28</a> by Gary Funk
		posted on 9/13/2010 at 11:34 PM
		</div>
		<div class="comment_text"><p>Part of being a great programmer is knowing what your customer is really asking for.</p></div>
	</div>
</div>
		