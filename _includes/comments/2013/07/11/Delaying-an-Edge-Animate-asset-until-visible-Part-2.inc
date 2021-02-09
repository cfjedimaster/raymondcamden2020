
<div class="comment" id="c_1713747630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747630">1</a> by pablo
		posted on 8/2/2013 at 4:02 AM
		</div>
		<div class="comment_text"><p>thats really nice, works perfect, but just wondering, could be a way of delay the loading of the images (for a lot o images in a site) not just the animation.</p><p>but great work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747635">2</a> by Raymond Camden
		posted on 8/2/2013 at 4:05 AM
		</div>
		<div class="comment_text"><p>@Pablo: Sure. I think I've seen someone demo that before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747633">3</a> by Raymond Camden
		posted on 8/2/2013 at 4:06 AM
		</div>
		<div class="comment_text"><p>This is an example: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1736215%2Fmake-images-load-when-they-enter-visible-section-of-browser%3ATjyk8hsYiGeFVRnu6q2yYUe2A2U&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1736215/make-images-load-when-they-enter-visible-section-of-browser">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747639">4</a> by Mikkel Madsen
		posted on 9/22/2013 at 6:17 PM
		</div>
		<div class="comment_text"><p>Hey there Raymond Camden.</p><p>I have no clue how to get part 2 to work :/ I copied:</p><p> function isScrolledIntoView(elem) {<br>		var docViewTop = $(window).scrollTop();<br>		var docViewBottom = docViewTop + $(window).height();</p><p>		var elemTop = $(elem).offset().top;<br>		var elemBottom = elemTop + $(elem).height();</p><p>		return ((elemBottom &gt;= docViewTop) &amp;&amp; (elemTop &lt;= docViewBottom)<br>		  &amp;&amp; (elemBottom &lt;= docViewBottom) &amp;&amp;  (elemTop &gt;= docViewTop) );<br>	}</p><p>  $(window).on("scroll", function(e) {<br>      if(isScrolledIntoView(sym.element)) {<br>          <a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>();<br>      } else {<br>          sym.stop();<br>      }</p><p>  });</p><p>into the stage under creationComplete function.</p><p>And my Symbol_1 wont play its rotation 360 degree with loop via trigger at end and a label at the start.</p><p>Can you please help me out?:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747642">5</a> by Raymond Camden
		posted on 9/23/2013 at 2:08 AM
		</div>
		<div class="comment_text"><p>Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747638">6</a> by adalgise wing
		posted on 9/23/2013 at 3:13 PM
		</div>
		<div class="comment_text"><p>hi did you find a solution it didnt work for me as well ,i did just use a simple animation to test it and i used this code but it didnt work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747634">7</a> by Raymond Camden
		posted on 9/23/2013 at 3:13 PM
		</div>
		<div class="comment_text"><p>@wing - if you can post your failing sample online, I (and possibly others) can take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747636">8</a> by adalgise wing
		posted on 9/23/2013 at 3:54 PM
		</div>
		<div class="comment_text"><p>hello again thank you for your answer <br>well you ca find the project file at <br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdarkhunter32%2Ftest%3A1lOAZFhR_LBcKyefZp9kelaXbww&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/darkhunter32/test">https://github.com/darkhunt...</a></p><p>my page where i did use the animation is sans titre 2</p><p>for the source of adge animator you can find the oam file in the folder publish2</p><p>thank you again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747640">9</a> by adalgise wing
		posted on 9/25/2013 at 3:27 PM
		</div>
		<div class="comment_text"><p>any answer yet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747643">10</a> by Raymond Camden
		posted on 9/25/2013 at 3:47 PM
		</div>
		<div class="comment_text"><p>Nope - been busy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747645">11</a> by Raymond Camden
		posted on 9/25/2013 at 3:49 PM
		</div>
		<div class="comment_text"><p>It seems to work for me. As I scroll I see stuff moving. Btw, what is this for? The picture I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747646">12</a> by adalgise wing
		posted on 9/25/2013 at 4:11 PM
		</div>
		<div class="comment_text"><p>thank y</p><p>no it didnt work i tested it on different machines and the same result tha animations plays at the load of the page .<br>well like i said at first its just a test i wanted to test the new stuff in muse and edge animator <br>so i got in this problem what if i want to place my animation in the middle of the website and i want it t play just when the scroll arrives at her place thats it, but i cant get it work <br>their is no meaning for the pic or the phrases its just that im used to write or use what ever comes on my mind or i find on my pc when i test new softwars ,<br>the other thing that i didnt find convinient in muse is that theire is no rotation when i use the parallaxe fonctionnality wich  really  desapointing .<br>anyway thank you for your answer ^^</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747648">13</a> by Raymond Camden
		posted on 9/25/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>Can you describe what I should see? Cuz as I said - as I scrolled down I saw stuff move around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747649">14</a> by adalgise wing
		posted on 9/25/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>yep what you saw in sans titre 2 its a test for parallaxe so what you saw movig its parallaxe effect <br>what should start moving its the animation in the bottom of the page the same animation that y can find the source in the folder publish2, thats this one that should play when the scroll comes t it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747647">15</a> by Raymond Camden
		posted on 9/26/2013 at 1:35 AM
		</div>
		<div class="comment_text"><p>You got me then. I'd have to dig into your project, but I won't have time this week - sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747651">16</a> by adalgise wing
		posted on 9/26/2013 at 1:39 PM
		</div>
		<div class="comment_text"><p>no problem thank you so much <br>just take your time im not in a hurry like i said it just a test this way when i need them i can easily use them without problem ^^<br>thank you again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747650">17</a> by Felix
		posted on 12/3/2013 at 3:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>You really made my day with this little tutorial.<br>Everything worked like a charm. But now I wonder if it is possible to launch my animation again (no loop), once you scoll it out and then back in to the viewport?</p><p>Looking forward to your answer.</p><p>Yours sincerely,<br>Felix</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747652">18</a> by Raymond Camden
		posted on 12/3/2013 at 4:53 PM
		</div>
		<div class="comment_text"><p>In theory this should *already* work this way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747653">19</a> by Felipe Furlan
		posted on 12/4/2013 at 4:57 PM
		</div>
		<div class="comment_text"><p>hey friend! i have try this content in my web site, but i don´t get!~<br>do you can help me !?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747657">20</a> by Raymond Camden
		posted on 12/4/2013 at 5:16 PM
		</div>
		<div class="comment_text"><p>You need to provide more detail about your problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747656">21</a> by Felipe Furlan
		posted on 12/4/2013 at 5:21 PM
		</div>
		<div class="comment_text"><p>Raymond! there my website :</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.caofashion.com.br%3A95JTaHBOUddXrzLOZAhPOAJ3RiY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.caofashion.com.br">http://www.caofashion.com.br</a></p><p>when scroll down...you can see the animation...<br>is a house with a car....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747660">22</a> by Felipe Furlan
		posted on 12/4/2013 at 5:42 PM
		</div>
		<div class="comment_text"><p>Raymond....do you see my problem ???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747655">23</a> by Felix
		posted on 12/4/2013 at 6:31 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Yes, indeed it works, but it starts obver everytime I scroll, even when I scroll just a little.<br>What I was looking for, is a way to make the animation start again, only when it was completely outside of the viewport, and then scrolled back in.<br>I Hope you get what I mean.</p><p>Many thanks in advance.</p><p>Felix</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747658">24</a> by Felipe Furlan
		posted on 12/4/2013 at 6:37 PM
		</div>
		<div class="comment_text"><p>Felix..you did it !<br>do you can help me?<br>I'm not getting</p><p>this is my website : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.caofashion.com.br%3A95JTaHBOUddXrzLOZAhPOAJ3RiY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.caofashion.com.br">http://www.caofashion.com.br</a></p><p>go down the page and you will see the animation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747659">25</a> by Raymond Camden
		posted on 12/4/2013 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Fexlix: Ah, interesting. I'd create a variable called moving:</p><p>var moving=false;</p><p>Set it to true when you fire off the animation, and before you fire off the animation again only do it if moving is false. Set moving to false in the other branch where we stop the animation if not visible.</p><p>The only issue with this is if the user sits there and lets it end. It won't restart unless they scroll out and return. Well, that may be desirable actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747661">26</a> by Raymond Camden
		posted on 12/4/2013 at 7:39 PM
		</div>
		<div class="comment_text"><p>@Felipe: I see this error in the JS console:</p><p>Uncaught TypeError: Cannot call method 'bindSymbolAction' of undefined</p><p>This seems to be because this line is missing from the code.</p><p>var Composition = Edge.Composition, Symbol = Edge.Symbol;</p><p>It should be above:</p><p> //Edge symbol: 'stage'<br>   (function(symbolName) {</p><p>Try adding it in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747662">27</a> by Raymond Camden
		posted on 12/4/2013 at 7:44 PM
		</div>
		<div class="comment_text"><p>@Felipe: Nope, that isn't it. You do have that. So I added a break point, and at this area:</p><p>(function($, Edge, compId){<br>var Composition = Edge.Composition, Symbol = Edge.Symbol;</p><p>Edge does NOT have a Symbol property. I don't know why. Best I can suggest is perhaps trying to create it again and seeing if it works in a simpler page. If you want me to dig deeper into this I could but it would need to be a paid engagement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747663">28</a> by Felix
		posted on 12/4/2013 at 7:50 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,<br>clever idea! I understand it, but as I'm not very good at scripting, and if it not too much to ask, I'd really appreciate if you could post me the updated code so I can simply paste into the edgeActions.js.</p><p>Thank you so much in advance.</p><p>Felix</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747664">29</a> by Raymond Camden
		posted on 12/4/2013 at 7:55 PM
		</div>
		<div class="comment_text"><p>@Felix: Hmm, wait a sec. So when you run .play(), if the animation is already playing, it doesn't restart. I just confirmed that on my demo. Do you see the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747666">30</a> by Felix
		posted on 12/4/2013 at 8:05 PM
		</div>
		<div class="comment_text"><p>Yes. The animation just plays until the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747668">31</a> by Raymond Camden
		posted on 12/4/2013 at 8:08 PM
		</div>
		<div class="comment_text"><p>So... its ok on mine, but not yours?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747667">32</a> by Felix
		posted on 12/4/2013 at 8:16 PM
		</div>
		<div class="comment_text"><p>Hey, I must admit, I'm a bit lost right now.<br>When you say "run .play()" do you mean the  "<a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>();" from your example above?<br>Because the only code I've got is the code from your example above...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747670">33</a> by Raymond Camden
		posted on 12/4/2013 at 8:20 PM
		</div>
		<div class="comment_text"><p>Yes, I meant <a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>. So you have the exact same code as mine, but when you scroll, it restarts? If so, can you share the URL so I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747671">34</a> by Felix
		posted on 12/4/2013 at 8:24 PM
		</div>
		<div class="comment_text"><p>Sure!<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.felix-irurozqui.de%2F%3A8_aYUkp4_xmzTAEXpbLoLIvOeBY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.felix-irurozqui.de/">http://www.felix-irurozqui.de/</a><br>Should have shared it much earlier, sorry :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747674">35</a> by Felix
		posted on 12/4/2013 at 8:25 PM
		</div>
		<div class="comment_text"><p>Just scroll down to "Vita" and the animation should fire.<br>Once finished, if you scroll a bit more, it will restart...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747672">36</a> by Felipe Furlan
		posted on 12/4/2013 at 9:09 PM
		</div>
		<div class="comment_text"><p>Raymond.....<br>how i can solve this problem ?<br>Uncaught TypeError: Cannot call method 'bindSymbolAction' of undefined</p><p>please...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747673">37</a> by Raymond Camden
		posted on 12/4/2013 at 9:10 PM
		</div>
		<div class="comment_text"><p>@Felipe: As I said, I'd have to spend some time debugging this and would be willing to do it as a *paid* engagement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747678">38</a> by Raymond Camden
		posted on 12/4/2013 at 9:12 PM
		</div>
		<div class="comment_text"><p>@Felix: I am not seeing what you see. You have a short-ish animation. Maybe 10 seconds or so? If i let it finish, and scroll, it restarts, which is expected. If I quickly scroll when it starts, it does *not* restart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747677">39</a> by Felix
		posted on 12/4/2013 at 9:28 PM
		</div>
		<div class="comment_text"><p>Yes, true.<br>But as I told I'd like it to restart only when it comes into the viewport again, So the idea of the variable "moving" seems good to me, but as a designer with no scripting skills, i'm lost here...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747681">40</a> by Felipe Furlan
		posted on 12/4/2013 at 9:30 PM
		</div>
		<div class="comment_text"><p>Raymond..... thanks for support!</p><p>i get!</p><p>i just put code direct in the Adobe Edge!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747679">41</a> by Raymond Camden
		posted on 12/4/2013 at 9:30 PM
		</div>
		<div class="comment_text"><p>Hmm. I think I get you now. It isn't noticing that it was previously visible anyway. Let me chew on this a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747680">42</a> by Felix
		posted on 12/4/2013 at 9:44 PM
		</div>
		<div class="comment_text"><p>Great!<br>Thanks in advance Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747684">43</a> by Raymond Camden
		posted on 12/4/2013 at 9:51 PM
		</div>
		<div class="comment_text"><p>Please check this demo and see if it works like you expect. If so, I'll write a new blog post on it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2013%2Fdec%2F4%2FUntitled-1.html%3AwFxVJknW3Qbbhi6Xra0o1gJ_tHU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2013/dec/4/Untitled-1.html">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747687">44</a> by Felipe Furlan
		posted on 12/4/2013 at 9:53 PM
		</div>
		<div class="comment_text"><p>@Raymond</p><p>one way that I can determine the size of the height, so that when I do the scroll, he did not stop, for example, so stop running when he disappears once the screen</p><p>??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747689">45</a> by Raymond Camden
		posted on 12/4/2013 at 9:54 PM
		</div>
		<div class="comment_text"><p>@Felipe: I do not think I can help you anymore. I am sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747690">46</a> by Felix
		posted on 12/4/2013 at 10:00 PM
		</div>
		<div class="comment_text"><p>Swell!<br>That's it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747691">47</a> by Raymond Camden
		posted on 12/6/2013 at 7:54 PM
		</div>
		<div class="comment_text"><p>Felix, not that I wrote a lot, but the blog entry is here - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F12%2F6%2FDelaying-an-Edge-Animate-asset-until-visible--Part-4%3AXMirHKVd-xEw4M6S8yvLvkS625o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/12/6/Delaying-an-Edge-Animate-asset-until-visible--Part-4">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3546392713">
	<div>
		<img src="https://disqus.com/api/users/avatars/janmellstrm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3546392713">48</a> by Jan Mellström
		posted on 10/2/2017 at 11:46 AM
		</div>
		<div class="comment_text"><p>I did not get it to work with the first line so I altered it a little, for other people that might have come here.</p><p>So basically you remove the first and the two last lines. Then you replace:<br>if(isScrolledIntoView(sym.element)) <br>with <br>if(isScrolledIntoView('#canvas')) //Or another ID/element</p><p>And also change:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>();<br>sym.stop();</p><p>To:<br><a href="http://disq.us/url?url=http%3A%2F%2Fstage.play%3AZhI-sWmJmDFOn3c7bjI19qWbHJQ&amp;cuid=3321886" rel="nofollow noopener" title="stage.play">stage.play</a>();<br>stage.stop();</p></div>
	</div>
</div>
		