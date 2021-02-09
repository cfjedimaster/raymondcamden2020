
<div class="comment" id="c_1713724832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724832">1</a> by Shaun McCran
		posted on 6/29/2010 at 3:43 PM
		</div>
		<div class="comment_text"><p>I prefer the split() method, I used to loop over the variable, using coldfusions list functions to match the a sub string, but once I found out about split() its much easier, and quicker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724839">2</a> by Joel Cox
		posted on 6/29/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>ListToArray will do this also:</p><p>&lt;cfset p = ListToArray(text, " ") /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724837">3</a> by Raymond Camden
		posted on 6/29/2010 at 5:21 PM
		</div>
		<div class="comment_text"><p>Not exactly. If you have a single char delimiter, sure. But if your delimiter is multichar, then no. The func will treat each char as a unique delimiter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724845">4</a> by Raymond Camden
		posted on 6/29/2010 at 5:23 PM
		</div>
		<div class="comment_text"><p>I should add though - listToArray DOES support multichar delims. It's just not the default. Good catch Joel!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724834">5</a> by Raymond Camden
		posted on 6/29/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>Just to be anal and complete - that was modded in CF9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724833">6</a> by Steve
		posted on 6/29/2010 at 6:01 PM
		</div>
		<div class="comment_text"><p>This example using ListToArray consistently shaves 4-5 ms off the split/udf methods on my localhost with debugging turned on. Not the best way to do a performance test, but it might be the fastest. A better test would be to use much more text.</p><p>As Ray mentioned, on huge amounts of text where the delimiter is present many times the Java split might be the winner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724835">7</a> by Wookie
		posted on 6/29/2010 at 6:03 PM
		</div>
		<div class="comment_text"><p>Is it Split or Spit? :)</p><p>It is important to remember that the value pased to Spit should be a regex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724842">8</a> by Raymond Camden
		posted on 6/29/2010 at 9:20 PM
		</div>
		<div class="comment_text"><p>Spit! ;) On a serious note - I did mention the regex-ness of it. Something to keep in mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724840">9</a> by Phil Munro
		posted on 5/12/2011 at 2:37 PM
		</div>
		<div class="comment_text"><p>I ran a few tests to compare using "split()" with "listToArray()" when splitting a large string into parts as its something that's going to used again and again in my application.</p><p>The source string was 11000 lines of html, and I timed how long it took to do 150000 loops over the same split.</p><p>Both took exactly the same amount of time - 49 seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724846">10</a> by Don Vawter
		posted on 2/27/2012 at 6:32 AM
		</div>
		<div class="comment_text"><p>st.split("") should on st="ABC" give you [A,B,C] but in fact it gives you [chr(0),A,B,C] <br>in js you get [A,B,C] for st.split("") and ["","","",""] for st.split(/./) so be careful if trying to split a string into characters because the first element will be null.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724841">11</a> by Sandeep
		posted on 6/24/2013 at 9:17 AM
		</div>
		<div class="comment_text"><p>Hi, when i am trying to put a string into a array delimited by "|". It is putting a single character into an array element not the content delimited by "|".<br>Any help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724838">12</a> by Raymond Camden
		posted on 6/24/2013 at 2:09 PM
		</div>
		<div class="comment_text"><p>Show us the code you used please - use Pastebin or a Gist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724847">13</a> by victor Diaz
		posted on 11/3/2013 at 12:30 AM
		</div>
		<div class="comment_text"><p>This may seem off topic but I will bring it together at the end:<br>I am developing a lottery website in cold fusion that outputs combination of 5 numbers for a 5/39 lottery game that adds up to a sum.<br>Ex. Select sum: 97 with 3 odd and 2 even numbers:<br>Output:<br> 2 15 20 25 35 <br>7 10 19 29 32 <br>5 9 20 24 39 <br>6 8 15 33 35 <br>5 8 21 27 36 <br>1 12 22 25 37 <br>2 3 21 35 36 <br>3 12 24 25 33 <br>15 16 19 21 26 <br>5 16 20 27 29 <br>9 15 18 27 28 <br>2 12 13 33 37 <br>6 9 18 31 33 <br>3 18 21 26 29 <br>10 15 20 23 29 <br>4 17 18 27 31 <br>7 16 22 23 29 <br>3 16 21 27 30 <br>6 15 21 22 33 <br>12 13 17 26 29</p><p>A database with tables organized by sum supplies the results and I use modulo to filter the odd and even results. Ex.  num1 + num2 + ... = 0, EVEN |   num1 + num2 ... = 1  ODD</p><p>My problem is that - now I want a filter that displays only numbers that contain - [0,1,2,3 ] in the result.<br> Choosing from the above sample list of numbers that equal the sum of 37 - this occurs in these cases:</p><p>7 10 19 29 32 <br>10 15 20 23 29<br>3 16 21 27 30<br>10 15 20 23 29</p><p>Each string of 5 space delimited numbers contain a number from this list [0,1,2,3].</p><p>(7 is not in the list but the overall string contains all of the requisite numbers from the list of 0,1,2,3  so the string result still qualifies.)<br>Ex.<br>10 - contains a 0 and a 1<br>19 contains a 1<br>29 contains a 2<br>32 contains a I and a 2<br>etc...</p><p>So stating the problem: <br> Capture the query results in a structure that will allow me to check each string of numbers<br>for a minimum set of characters in the string and return those delimited string results that contain a number from my list in their make-up [0,1,2,3]</p><p> Not sure what is the best way to go to do this?</p></div>
	</div>
</div>
		