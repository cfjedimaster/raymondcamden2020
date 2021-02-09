
<div class="comment" id="c_1713652586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652586">1</a> by Teddy Payne
		posted on 5/5/2006 at 9:07 PM
		</div>
		<div class="comment_text"><p>It did take me more than 5 minutes.  It took me 15.  I wanted to do the extra credit.</p><p>&lt;cffunction name="strEnglishToMath" returntype="numeric" output="true" hint="I return the math evlaution of an english expresss."&gt;<br>	&lt;cfargument name="strExp" type="string" required="true"&gt;</p><p>	&lt;cfset numResult = 0&gt;</p><p>	&lt;cfscript&gt;<br>		strExp = ReReplace(strExp,"zero","0","ALL");<br>		strExp = ReReplace(strExp,"one","1","ALL");<br>		strExp = ReReplace(strExp,"two","2","ALL");<br>		strExp = ReReplace(strExp,"three","3","ALL");<br>		strExp = ReReplace(strExp,"four","4","ALL");<br>		strExp = ReReplace(strExp,"five","5","ALL");<br>		strExp = ReReplace(strExp,"six","6","ALL");<br>		strExp = ReReplace(strExp,"seven","7","ALL");			<br>		strExp = ReReplace(strExp,"eight","8","ALL");	<br>		strExp = ReReplace(strExp,"nine","9","ALL");	<br>		strExp = ReReplace(strExp,"ten","10","ALL");</p><p>		strExp = ReReplace(strExp,"plus","+","ALL");<br>		strExp = ReReplace(strExp,"minus","-","ALL");<br>		strExp = ReReplace(strExp,"multiply","*","ALL");<br>		strExp = ReReplace(strExp,"divide","/","ALL");</p><p>		reScript = "[0-9]+[ ]+[\+\-\/\*]+[ ]+[0-9]+";<br>		strPos = REFind(reScript, strExp,1,"True");<br>	   	strExp = mid(strExp, strPos.pos[1], strPos.len[1]);</p><p>		leftNumber = Trim(listgetat(strExp,1,"+-/*"));<br>		rightNumber = Trim(listgetat(strExp,2,"+-/*"));</p><p>		reScript = "[\+\-\/\*]";<br>		strPos = REFind(reScript, strExp,1,"True");<br>	   	operator = mid(strExp, strPos.pos[1], strPos.len[1]);</p><p>		if(not (rightNumber eq 0 and operator eq "/"))<br>		{<br>			switch(operator)<br>			{<br>				case "+":<br>				{<br>					numResult = leftNumber + rightNumber;<br>					break;<br>				}			<br>				case "-":<br>				{<br>				numResult = leftNumber - rightNumber;<br>				break;<br>				}<br>				case "/":<br>				{<br>				numResult = leftNumber / rightNumber;<br>				break;<br>				}<br>				case "*":<br>				{<br>				numResult = leftNumber * rightNumber;<br>				break;									<br>				}<br>			}<br>		}</p><p>	&lt;/cfscript&gt;</p><p>	&lt;cfreturn numResult&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfset strExp = "five divide zero is?"&gt;</p><p>&lt;cfoutput&gt;<br>#strEnglishToMath(strExp)#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652585">2</a> by Kyle Hayes
		posted on 5/5/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;<br>function NaturalToNum(str) {<br> 	switch (str) {<br>		case "one":<br>			returnVal = 1;<br>			break;<br>		case "two":<br>			returnVal = 2;<br>			break;<br>		case "three":<br>			returnVal = 3;<br>			break;<br>		case "four":<br>			returnVal = 4;<br>			break;<br>		case "five":<br>			returnVal = 5;<br>			break;<br>		case "six":<br>			returnVal = 6;<br>			break;<br>		case "seven":<br>			returnVal = 7;<br>			break;<br>		case "eight":<br>			returnVal = 8;<br>			break;<br>		case "nine":<br>			returnVal = 9;<br>			break;<br>		case "ten":<br>			returnVal = 10;<br>			break;<br>		default:<br>			returnVal = str;<br>			break;<br>	}<br>  	return returnVal;<br>}</p><p>function NaturalToSign(str) {<br>	switch (str) {<br>		case "plus":<br>			returnVal = "+";<br>			break;<br>		case "times":<br>			returnVal = "*";<br>			break;<br>		case "minus":<br>			returnVal = "-";<br>			break;<br>		case "divided":<br>			returnVal = "/";<br>			break;<br>		default:<br>			returnVal = str;<br>			break;<br>	}<br>	return returnVal;<br>}</p><p>function EvalNaturalEquation(str) {<br>	strArr = ListToArray(str," ");<br>	for(i = 1; i lte ArrayLen(strArr); i = i + 1) {<br>		if(NaturalToNum(NaturalToSign(strArr[i])) eq strArr[i]) {<br>			ArrayDeleteAt(strArr,i);<br>		}<br>		else {<br>			strArr[i] = NaturalToNum(NaturalToSign(strArr[i]));<br>		}<br>	}<br>	strList = ArrayToList(strArr, " ");<br>	return Evaluate(strList);<br>}<br>&lt;/cfscript&gt;<br>&lt;cfif isDefined('form.equation') and len(trim(form.equation))&gt;<br>	&lt;cfset answer = EvalNaturalEquation(form.equation)&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652588">3</a> by Kyle Hayes
		posted on 5/5/2006 at 9:19 PM
		</div>
		<div class="comment_text"><p>Here is a demo:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kylehayes.info%2Fquizzes%2FnaturalCalc.cfm%3AtxyzP03f69lBeFgcGv0_5kGosNc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kylehayes.info/quizzes/naturalCalc.cfm">http://www.kylehayes.info/q...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652587">4</a> by Kyle Hayes
		posted on 5/5/2006 at 9:19 PM
		</div>
		<div class="comment_text"><p>Mine will allow more than two numbers and one sign as argument, type it out just like a regular equation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652589">5</a> by Kyle Hayes
		posted on 5/5/2006 at 9:23 PM
		</div>
		<div class="comment_text"><p>Made the following corrections to the return of EvalNaturalEquation:<br>try {<br>		returnVal = Evaluate(strList);<br>	}<br>	catch(any e){<br>		returnVal = "Cannot divide by 0";<br>	}<br>	return returnVal;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652592">6</a> by Tuyen
		posted on 5/5/2006 at 9:44 PM
		</div>
		<div class="comment_text"><p>Kyle,</p><p>Tried your demo: Entered "onex plus twoy", got the wrong error message: "Cannot divide by 0"...</p><p>Happy Friday!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652593">7</a> by David
		posted on 5/5/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>hmmm i was thinking of making this check for more than one math statement...</p><p>Couldn't find any replacement for using Evaluate(), took too long trying to come up with one...</p><p>&lt;!--- change this parameter to test ---&gt;</p><p>&lt;cfparam name="form.mathstring" default="fivex times one" /&gt;</p><p>&lt;cfscript&gt;</p><p>//set invalid variables to 0 : used to check for division against zero invalid =1 means dividing by zero : invalid 3 means invalid characters<br>variables.invalid = 0;<br>variables.number1=0;<br>variables.number2=0;</p><p>//set 2D array to put in number calculation **** 1-1 = operator 1-2 = first number 1-3 = second number<br>variables.mathOperators = ArrayNew(2);</p><p>//set array for string operators<br>variables.MathOperatorsArray = ArrayNew(1);</p><p>//set array for symbol operators<br>variables.MathSymbolArray = ArrayNew(1);</p><p>//set array for string number = Array number<br>variables.NumberArray = Arraynew(1);</p><p>variables.mathOperatorsArray[1] = 'plus';<br>variables.mathOperatorsArray[2] = 'minus';<br>variables.mathOperatorsArray[3] = 'multiply';<br>variables.mathOperatorsArray[4]= 'divide';<br>variables.mathOperatorsArray[5]='times';</p><p>variables.mathSymbolArray[1] = '+';<br>variables.mathSymbolArray[2] = '-';<br>variables.mathSymbolArray[3] = '*';<br>variables.mathSymbolArray[4] = '/';<br>variables.mathSymbolArray[5] = '*';</p><p>variables.numberArray[1] = 'one';<br>variables.numberArray[2] = 'two';<br>variables.numberArray[3] = 'three';<br>variables.numberArray[4] = 'four';<br>variables.numberArray[5] = 'five';<br>variables.numberArray[6] = 'six';<br>variables.numberArray[7] = 'seven';<br>variables.numberArray[8] = 'eight';<br>variables.numberArray[9] = 'nine';<br>variables.numberArray[10] = 'ten';<br>variables.numberArray[11] = 'zero';</p><p>//check loop for operators<br>for(i=1;i lte ArrayLen(variables.MathOperatorsArray); i=i+1)<br>	{</p><p>		//check to see which operator to use<br>	if (form.mathstring contains variables.MathOperatorsArray[i])</p><p>			{<br>				// set math operator into array<br>				variables.mathOperators[i][1]=variables.mathSymbolArray[i];</p><p>				//get first number<br>				variables.firstnumber = Gettoken(form.mathstring,1,' ');</p><p>				//get second number<br>				variables.secondnumber = GetToken(form.mathstring,3,' ');</p><p>				//find numerical value of strings<br>				for (num1 = 1;num1 lte ArrayLen(variables.numberArray); num1 = num1 + 1)<br>					{</p><p>					if(comparenocase(variables.numberArray[num1],variables.firstnumber) eq 0) variables.number1 =num1;</p><p>					if(comparenocase(variables.numberArray[num1],variables.secondnumber) eq 0)variables.number2 =num1;<br>					}</p><p>				//set numbers into array<br>				variables.mathOperators[i][2] = variables.number1;<br>				variables.mathOperators[i][3] = variables.number2;</p><p>				//check for invalid characters<br>				if(variables.number1 eq 0 or variables.number2 eq 0)variables.invalid = 3;</p><p>				// check for zero divisability ********************<br>				if(variables.secondnumber eq 11) variables.invalid = 1;</p><p>			}</p><p>	}</p><p>//check to see if we should show division by zero<br>if(variables.invalid eq 0){</p><p>	//Do math and check for divisible by 0<br>	//loop through mathoperators array to find what to calculate</p><p>	for(math=1; math lte ArrayLen(variables.mathoperators); math = math +1)<br>		{</p><p>			if(not ArrayIsEmpty(variables.mathoperators[math]))</p><p>				 variables.calcoutput = 'Your answer is: ' &amp; Evaluate('#variables.mathoperators[math][2]# #variables.mathoperators[math][1]# #variables.mathoperators[math][3]#');<br>			}</p><p>}</p><p>// say something to tell them that their total was division by 0<br>else <br>{<br>if (variables.invalid eq 1)<br>variables.calcoutput = 'You know better than to Divide by zero punk!'; else variables.calcoutput = 'Invalid math string! Cannot process the form query.';<br>}</p><p>writeoutput(variables.calcoutput);<br>&lt;/cfscript&gt;</p><p>&lt;CFDUMP var="#variables.mathoperators#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652597">8</a> by Daniel Daugherty
		posted on 5/5/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>I have not written the code yet (my work dev server does not have internet access).  But should be able to do this with a call to google search api.  As it contains a calculator and does full text calc also.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fhelp%2Ffeatures.html%23calculator%3AN1scoR_DmzQ1BGKZ_eKZ0e5XCvY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/help/features.html#calculator">http://www.google.com/help/...</a></p><p>I am a big fan of using existing code when possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652594">9</a> by Raymond Camden
		posted on 5/5/2006 at 10:59 PM
		</div>
		<div class="comment_text"><p>Good one Daniel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652595">10</a> by Chris Mallinson
		posted on 5/5/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>Here's my attempt.  The time limit prevented me from commenting this :-)</p><p>I'm pretty sure it works...</p><p>&lt;cfif isdefined("form.submit")&gt;<br>	&lt;cfscript&gt;<br>	mathString = form.question;</p><p>	mathString = rereplacenocase(mathString,'(divided by)|(by)|(over)|(into)','/','all');<br>	mathString = rereplacenocase(mathString,'(plus)|(added to)|(and)|(to)','+','all');	<br>	mathString = rereplacenocase(mathString,'(minus)|(less)|(subtract)','-','all');<br>	mathString = rereplacenocase(mathString,'(from\s)','- -','all');	<br>	mathString = rereplacenocase(mathString,'(multiplied by)|(times)','*','all');<br>	mathString = rereplacenocase(trim(mathString),'^multiply\s([a-z0-9]*)\s\+','\1 *');<br>	mathString = rereplacenocase(trim(mathString),'^((add)|(subtract)|(divide)|(multiply))','');<br>	numberStrings = 'zero,one,two,three,four,five,six,seven,eight,nine,ten';<br>	numberDigits = '0,1,2,3,4,5,6,7,8,9,10';<br>	mathString = trim(replacelist(mathString,numberStrings,numberDigits));<br>	if (refind('/ 0$',mathString))<br>		answer = 'undefined';<br>	else<br>		answer = evaluate(mathString);	<br>	writeOutput(answer);<br>	&lt;/cfscript&gt;</p><p>&lt;/cfif&gt;</p><p>&lt;cfform name="math" action="#CGI.SCRIPT_NAME#" method="post" preservedata="yes"&gt;<br>&lt;cfinput name="question" type="text" size="30"&gt;<br>&lt;input type="submit" name="submit" value="do the math" /&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652596">11</a> by Kyle Hayes
		posted on 5/5/2006 at 11:24 PM
		</div>
		<div class="comment_text"><p>Now this is interesting, when you type the english equation into google it actually gives you an english answer. Observe:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fsearch%3Fq%3Dfive%2Bplus%2Btwo%26btnG%3DGoogle%2BSearch%3ATVCnxUY3_gWWg8p_b8plEq32unQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/search?q=five+plus+two&amp;btnG=Google+Search">http://www.google.com/searc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652598">12</a> by Kyle Hayes
		posted on 5/5/2006 at 11:25 PM
		</div>
		<div class="comment_text"><p>And it automagically assumes parenthesis where needed:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fsearch%3Fhl%3Den%26sa%3DX%26oi%3Dspell%26resnum%3D0%26ct%3Dresult%26cd%3D1%26q%3Dfive%2Bplus%2Btwo%2Bdivided%2Bby%2B8%26spell%3D1%3Ajx8Jd24jCzJiQINA4q3Mks2UQLc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/search?hl=en&amp;sa=X&amp;oi=spell&amp;resnum=0&amp;ct=result&amp;cd=1&amp;q=five+plus+two+divided+by+8&amp;spell=1">http://www.google.com/searc...</a></p></div>
	</div>
</div>
		