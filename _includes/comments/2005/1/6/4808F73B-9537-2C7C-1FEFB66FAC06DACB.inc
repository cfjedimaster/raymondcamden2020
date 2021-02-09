
<div class="comment" id="c_1713616684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616684">1</a> by barry.b
		posted on 1/6/2005 at 4:32 PM
		</div>
		<div class="comment_text"><p>&amp;gt;&amp;gt; - what do you think CFLib could do better?</p><p>gee, that's a tough one. the only thing I'd want more of is "stock" (more UDF's) - and I can't whinge 'cos I should contribute myself!</p><p>and perhaps ask contributors to provide more indepth examples where needed? (some are a bit thin or don't show off the UDF's as well as tey could). however, you don't have to turn it into another <a href="http://disq.us/url?url=http%3A%2F%2Fplanet-source-code.com%3AhlH71ACtesjBEDbR_xI0VkVCF6k&amp;cuid=3321886" rel="nofollow noopener" title="planet-source-code.com">planet-source-code.com</a>...</p><p>Ray, I've found CFLIB very useful, esp the data manip libraries. thankyou for the service. I appreciate it.</p><p>cheers<br>barry.b</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616686">2</a> by dave ross
		posted on 1/6/2005 at 4:37 PM
		</div>
		<div class="comment_text"><p>maybe package up related functions into CFCs, with usage examples, etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616687">3</a> by Johnny Boursiquot
		posted on 1/6/2005 at 4:50 PM
		</div>
		<div class="comment_text"><p>I too would like to see similar functions packaged into CFCs. Other then that, I've found the site very useful and find myself looking for something there at least twice a month.</p><p>Thanks for keeping it going.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616685">4</a> by Raymond Camden
		posted on 1/6/2005 at 5:24 PM
		</div>
		<div class="comment_text"><p>Dave: I disagree about the idea of packing them up into CFCs. I really intended the UDFs to be atomic and stand on their own. Now, certainly I can see them being used in CFCs, but that should be up to the end user, and not pushed by the site. (I think.)  I do think there is a place for CFCs themselves - right now CFCZone is doing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616688">5</a> by dave ross
		posted on 1/6/2005 at 5:32 PM
		</div>
		<div class="comment_text"><p>understood... you could take one of the cflib libraries, wrap it with &amp;lt;cfcomponent&amp;gt; and call it a day, so I guess it's not really something that has to be done for you by cflib.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616689">6</a> by Rob Brooks-Bilson
		posted on 1/6/2005 at 5:59 PM
		</div>
		<div class="comment_text"><p>Dave,</p><p>You can *sort of* do the CFC generation now.  There's a library generator tool that packages CFCs up into a single library.  You could use that and just wrap them with a CFCOMPONENT as you mention.  Only issue there might be that the majority of UDFs on CFLib are in CFScript format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616692">7</a> by PaulH
		posted on 1/6/2005 at 6:53 PM
		</div>
		<div class="comment_text"><p>same "big things" apply to cfcZone? searching for and finding individual CFCs would be nice. any wild and fantastic CFCs in it's queue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616694">8</a> by Rob Brooks-Bilson
		posted on 1/6/2005 at 7:09 PM
		</div>
		<div class="comment_text"><p>Paul,</p><p>Unfortunatelty, the number of CFCs submitted has been very low - they just aren't small and generic enough like UDFs are.</p><p>Ray and I have been discussing merging CFCZone with CFLib in 2005.  With the addition of Event Gateways in Blackstone, it seems like CFLib might just be the place to consolidate UDFs, CFCs, and Event Gateways (both custom Java and CFC parts).  We'll see how things shape up over the next few months...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616693">9</a> by Brian Rinaldi
		posted on 1/6/2005 at 7:34 PM
		</div>
		<div class="comment_text"><p>I think the site is extremely useful as it is now and would hesitate to tinker too much with something that works. That being said, I think the concept of merging cfczone and cflib sounds promising, particularly as the volume of components available on cfczone has been light. It would seem, in theory at least, to find both resources in a single location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616698">10</a> by Raymond Camden
		posted on 1/6/2005 at 7:38 PM
		</div>
		<div class="comment_text"><p>Brian: Trust me - my number one goal with the changes I have in mind are to NOT mess with the quickness to get to crap. That's one reason I really like cflib - I can get to a resurce in 2 or 3 clicks. If I know the name, I can use the shorthand form and get there in one step. My plans have nothing do with the interface per se, but more about the resources that will be available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616697">11</a> by Ryan Guill
		posted on 1/6/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>What I would really like to see is a solutions similar to php's PEAR.  (for more information, i believe its <a href="http://disq.us/url?url=http%3A%2F%2Fpear.php.net%3AQs-SdcMXnw_obcxBEo4JK9zfCR8&amp;cuid=3321886" rel="nofollow noopener" title="pear.php.net">pear.php.net</a>).  basically in a nut shell its a downloadable library of functions and classes and other scripts that you can use in your code.  when you "install" it, it basically extends php and you can just start using those methods and classes in your code with no extra effort.  I actually had a business plan for this, but doubt I ever will get the time, so I would love to see someone else take it up.  I also thought of exposing some of the functionality of the library as webservices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616695">12</a> by Laura
		posted on 1/6/2005 at 8:26 PM
		</div>
		<div class="comment_text"><p>I'd like to second packaging libraries into cfcs. That is how I use all the functions from cflib. To me, it makes more sense instantiating a component and calling its functions than including the function everywhere I need it and calling it assumming it is there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616696">13</a> by PaulH
		posted on 1/6/2005 at 8:49 PM
		</div>
		<div class="comment_text"><p>rob/ray: yeah i guess that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616703">14</a> by Pete Freitag
		posted on 1/6/2005 at 9:01 PM
		</div>
		<div class="comment_text"><p>Might be cool if authors could submit both CFSCRIPT and CFFUNCTION versions of their UDFs, though that probably makes a bit more work on your end for testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616701">15</a> by Rob Brooks-Bilson
		posted on 1/6/2005 at 10:29 PM
		</div>
		<div class="comment_text"><p>Pete,</p><p>It probably wouldn't be that difficult to look at the JavaDoc type header we generate for CFScript based UDFs, parse that data, then use it to convert the CFScript based UDFs to mixed tag/cfscript.</p><p>At my company, many of my developers prefer the script based syntax, so they mix when they create CFCs, using the tags to declare the function, then CFScript to actually write parts of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616702">16</a> by tony petruzzi
		posted on 1/6/2005 at 10:38 PM
		</div>
		<div class="comment_text"><p>Personally I would like to see CFLIB become what the  Macromedia ColdFusion Exchange was. It used to be the you could find some nice tag and what not on the Exchange, then Macromedia allowed any schmuck that was selling a ColdFusion app to list their product. Now the exchange has become the Amazon of the CF world. I can never find anything that I'm looking for anymore on it, so I'm forced to waste my time reinventing the wheel.</p><p>CFLIB should be just that, a library of ColdFusion source code. Function, tags and CFCs and that's it. No more full blown apps that you have to pay out your ass to download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616803">17</a> by Rob Brooks-Bilson
		posted on 1/6/2005 at 10:43 PM
		</div>
		<div class="comment_text"><p>Tony,</p><p>One thing that Ray and I have always prided ourselves on is that we QA every function that goes out on CFLib.  This is one of the reasons that it takes so long sometimes to clear out the queue.  I'm not saying that every UDF is 100% error free, or even the most efficient way to do something, but we have tried our best over the years to ensure that CFLib is a high-quality source for CF code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616809">18</a> by Raymond Camden
		posted on 1/6/2005 at 10:45 PM
		</div>
		<div class="comment_text"><p>Tony: No comment. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616812">19</a> by Doug Gibson
		posted on 1/7/2005 at 12:19 AM
		</div>
		<div class="comment_text"><p>Nothing too fancy here - I'd just like to see the code be available in an expandable div (default=hidden) on the main window, not in a popup. Popups are evil.</p><p>I know I've seen a nice code view made out of an OL and CSS on one of these blogs linked from the goog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616804">20</a> by tony petruzzi
		posted on 1/7/2005 at 1:01 AM
		</div>
		<div class="comment_text"><p>here is the code. Firefox and IE compatable. :)</p><p>/********************************************************************<br> Used to hide and show portions of a page<br>********************************************************************/<br>function HideID(id){<br>	document.getElementById(id).style.display = "none";<br>	document.getElementById(id).style.position = "absolute";<br>}</p><p>function ShowID(id){<br>	if(navigator.appName == "Microsoft Internet Explorer"){<br>		document.getElementById(id).style.display = "block";<br>	}else{<br>		switch(document.getElementById(id).tagName.toUpperCase()){<br>			case "TR": document.getElementById(id).style.display = "table-row"; break;<br>			case "TD": document.getElementById(id).style.display = "table-cell"; break;<br>			case "TABLE": document.getElementById(id).style.display = "table"; break;<br>			default:document.getElementById(id).style.display = "block";<br>		}<br>	}<br>	document.getElementById(id).style.position = "static";<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616821">21</a> by Rick Mason
		posted on 1/7/2005 at 4:39 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>First thanks for providing such a valuable resource. It's rare that I go a week between visits.</p><p>I do think combining with cfczone is a good idea.  Also if there's some way you could offer a limited subset of what's available on the exchange.  Maybe the most popular non-commercial tags.  It's been so hard to search exchange that I have stopped using it.</p><p>How about some CFLib caps for a fundraiser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616824">22</a> by Raymond Camden
		posted on 1/7/2005 at 5:00 AM
		</div>
		<div class="comment_text"><p>RicK: What do you mean by "caps for a fundraiser"? Do you mean selling hats? We do sell tee-shirts, we just don't push them very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616811">23</a> by Rick Mason
		posted on 1/7/2005 at 9:24 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I just think that CFLib caps would sell better than t-shirts that's all.</p><p>A PayPal contribute button on the home page might be a good idea too.</p><p>While I think of it a section on popular regexes might be great as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616822">24</a> by Calvin Ward
		posted on 1/7/2005 at 3:04 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've always been a huge fan of cflib! Great site, great execution and love the quality assurance process! I really like the responsiveness, ui and easy to find nature of cflib.</p><p>As soon as you add a resource other than functions (CFCs, Custom Tags, etc), it becomes less atomic/granular. I don't know that I would find that appealing.</p><p>If you 'combine' with CFCzone (whose site I don't like for a number of reasons; lack of updates, gaudy blue, no search on front page, etc), I hope that you can cleanly address that challenge. I'm not a huge fan of Pear's appearance, ui either, for that matter...</p><p>I'd rather not see functions wrapped into CFCs, that can be done easily enough by the developer who needs them.</p><p>I agree with Tony, I'm not interested in another Exchange, I almost never visit that site either anymore.</p><p>For fundraising, how about mousepads or even posters instead of t-shirts? :P</p><p>I'd buy a poster that listed the available cflib function in a useful fashion!</p><p>Thanks,<br>Calvin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616806">25</a> by Raymond Camden
		posted on 1/7/2005 at 3:56 PM
		</div>
		<div class="comment_text"><p>Calvin: Let me assure you - when the other resources get brought in - they will not "clutter" up the old resources. I like CFLib (is it silly for me to say that?) because I can quickly find a resource. I do not plan on changing that all. If you know the name of a resource, you will still be able to get to it immidiately. If you want to search for a UDF, CFC, or whatever, you will still be able to get to it quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616808">26</a> by tony petruzzi
		posted on 1/7/2005 at 5:00 PM
		</div>
		<div class="comment_text"><p>&amp;lt;b&amp;gt;If you want to search for a UDF, CFC, or whatever, you will still be able to get to it quickly&amp;lt;/b&amp;gt;.</p><p>You're letting the cat out of the bag there Ray. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616817">27</a> by Rick Mason
		posted on 1/7/2005 at 8:21 PM
		</div>
		<div class="comment_text"><p>Calvin,</p><p>I second the suggestion for the poster.</p><p>You could sell advertising on the poster and then give it away free.  The CFUG's would help you distribute it and the end result would make cflib even more popular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616807">28</a> by Raymond Camden
		posted on 1/7/2005 at 9:22 PM
		</div>
		<div class="comment_text"><p>Right now, Terratech already has a very nice poster. Would people really buy a CFLib mousepad though? I was also contemplating a "Top 10 Reasons CF is better than ASP" tee shirt for a while, but couldn't get 10 good reasons. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616816">29</a> by Pete Freitag
		posted on 1/7/2005 at 10:30 PM
		</div>
		<div class="comment_text"><p>Ray TerraTech's poster is for standard CFTags and Functions. I think the idea was that the poster would have a listing of the most popular UDFs.</p><p>This would be handy because you could just look at the poster to "search" cflib.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616805">30</a> by Pete Freitag
		posted on 1/7/2005 at 10:39 PM
		</div>
		<div class="comment_text"><p>Another thing I'd like to see is an eclipse plugin for cflib.</p><p>I posted an enhancement request to the cfeclipse issue tracker a while back: <a href="http://disq.us/url?url=http%3A%2F%2Fcfeclipse.tigris.org%2Fissues%2Fshow_bug.cgi%3Fid%3D223%3AFrGBXQPe62kCvm_XyOY-V_f9Z_c&amp;cuid=3321886" rel="nofollow noopener" title="http://cfeclipse.tigris.org/issues/show_bug.cgi?id=223">http://cfeclipse.tigris.org...</a></p><p>if you think that would be cool, I'd recommend voting for the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616810">31</a> by Rick Mason
		posted on 1/8/2005 at 4:59 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've given out Teratech's posters at my group. I meant one showing again the more popular cflib tags and functions.</p><p>That's something we don't have on our walls and I have just the space for it :&amp;lt;).  I would bet some of the third party vendors and maybe even Macromedia themselves would buy ads that covered the cost of printing and shipping and probably the yearly hosting costs of cflib.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616813">32</a> by Brendan OHara
		posted on 1/8/2005 at 9:58 AM
		</div>
		<div class="comment_text"><p>Ray and Rob:</p><p>I agree with CFLib as a true old-school exchange. Drop the "common function" and do a complete ColdFusion Library. UDF's, CFC's and everything else. As for CFC's how about a Patterns in CF library with explanations and code examples. Rob and I had talked about doing a CF patterns site as part of CFCZone but it would be probably get more hits as a sub-set of CFLib. I have at least 10 I could contribute to start and we could easily have a whole CF Pattern library pretty fast.</p><p>Brendan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616815">33</a> by Antony
		posted on 1/10/2005 at 7:59 AM
		</div>
		<div class="comment_text"><p>I second the suggestion about RegEx - I think many CFers find this to be a something of a black art, and i'd be happy to rely on cflib as a fairly authorative collection of samples.</p><p>Tis truly a great piece of the internet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616820">34</a> by Rob Brooks-Bilson
		posted on 1/15/2005 at 3:07 AM
		</div>
		<div class="comment_text"><p>Hmm, for some reason, I got unsubscribed...</p><p>Calvin (re the blue on cfczone), I'm a (color blind) developer, not a designer ;-)</p><p>As for search on the site, lack of CFCs (most are just too specific to be useful to most people), etc.  The main problem there is lack of contributions, and a subsequent lack of motivation to invest a lot of time building featuers in the site that won't get used.</p><p>That said, Ray and I had a couple of discussions and decided that the CF community at large would be better served by folding the CFCZone project into CFLib, since CFLib has the infrastructure already in place.</p><p>The main focus of CFCZone over the past two years has been the CFCDev mailing list, which will maintain the same name once we move it over to the CFLib site.  It has about 800+ subscribers and is fairly active and focused.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616818">35</a> by Massimo Foti
		posted on 1/18/2005 at 8:28 PM
		</div>
		<div class="comment_text"><p>For me cflib is the most valuable CF online resource on the web.</p><p>I would like to be able to see the code of UDFs currentely in the queue. As a user this would allow me to use them "at my own risk", even before QA, as a contributor it would help me spot and avoid duplications in advance. This would compensate the time it takes to QA and clear the queue.</p><p>More in general it may be time to think about expanding to gateways, CFCs (merging the ones at CFCzone) and maybe even custom tags (yes, MM's Exchange is a disaster). But it would require additional manpower to keep up with QA and the level of quality you achieved so far. Better to take only small steps and avoid spreading yoursdelf too thin...</p><p>Keep up the great work!</p><p>Massimo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616823">36</a> by Raymond Camden
		posted on 1/18/2005 at 8:36 PM
		</div>
		<div class="comment_text"><p>Massimo:<br>I have fought against the ability to view code in the queue... but I'm reconsidering. Since I'm rebuilding CFLib from scratch, and since multiple folks have asked for it - I guess I will make it happen.</p><p>As for the new resources. I'm not officially saying anything except for CFCs and Event Gateways - although I have more in mind, and agree with you about the Exchange.</p></div>
	</div>
</div>
		