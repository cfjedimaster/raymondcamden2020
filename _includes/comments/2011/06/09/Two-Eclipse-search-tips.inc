
<div class="comment" id="c_1713733102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733102">1</a> by Peter Boughton
		posted on 6/9/2011 at 10:46 PM
		</div>
		<div class="comment_text"><p>Hmmm, surprised that simply enabling regex slows it down significantly for a simple piece of text. Wonder if it does some form of keyword indexing or similar with a non-regex search.</p><p>Of course, if you combine a solid state disk with not having huge codebases, you tend to get search results coming back straight away even with it enabled. :P</p><p>Something you've not mentioned, but which is shown in your second image and is pretty useful is the "Consider derived resources" checkbox.</p><p>Don't tick it - it should generally be left unticked, but what many people don't realise is what it actually does - which is to allow you to both speed up and make more accurate your results.</p><p>It doesn't do this by magic, unfortunately. What you have to do is go and mark resources as 'derived' and then it will skip them when searching (unless you tick the box to tell it not to skip them), which means you can reduce unwanted search results.</p><p>To mark something as a derived resource, right-click in the project navigator, select properties, and tick the "Derived" checkbox (on the first properties page) - it works on directories and files.</p><p>Recommended things to set as derived:<br>* Framework generated files (e.g. Fusebox Parsed directory - the contents of this is exactly what a derived file is; they are derived from circuit.xml)<br>* JavaScript libraries (e.g. jQuery/Prototype/etc - amazing how often these have results that get in the way)<br>* Anything else you don't need Eclipse to search (e.g. WEB-INF directories, metadata files, etc)</p><p>And of course, for anyone that does code generation, you might choose to set your generated files as derived, and only search the source files - again, that's the intended use for this, but excluding jQuery/WEB-INF/etc can still be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733104">2</a> by Raymond Camden
		posted on 6/9/2011 at 10:50 PM
		</div>
		<div class="comment_text"><p>I had been searching for foo.cfm, which would have been foo(ANY ONECHAR)cfm.</p><p>Dude - to your second thing -that's awesome. I thought it was something else entirely. We normally keep our frameworks out of our project root (or side by side) so this isn't an issue typically, but that's a great damn tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733103">3</a> by Dan G. Switzer, II
		posted on 6/9/2011 at 11:21 PM
		</div>
		<div class="comment_text"><p>On a some what related note, also keep in mind that the CTRL+K and CTRL+SHIFT+K shortcuts are based upon the Find Dialog settings as well. So if you have "Wrap Search" and "Match Case" enabled, then the keyboard shortcuts will also use those settings.</p><p>(For those that don't know CTRL+K should find and step through instances of the highlighted text in your document.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733105">4</a> by Seth Stone
		posted on 6/9/2011 at 11:37 PM
		</div>
		<div class="comment_text"><p>Roughly on the topic of Search/Find, I've had some interesting challenges with "Replace".  I often need to "Replace All in Selected Lines", but with the introduction of CF Search this is much less obvious how to do than before.  First of all to "Find in Selected Lines" you just have to select the lines and press Ctrl-F, though it doesn't indicate it your search will be limited to those lines - easy enough.  If, however, you wish to do a "Replace All in Selected Lines" the file MUST BE SAVED before you click "Replace All", otherwise it will replace all occurrences in the file.  One other small annoyance is that if you are doing a "Replace All in Current Document" and the file is currently unmodified it will be AUTO-SAVED after the replacements are made (behavior which I consider to be somewhere between non-intuitive and undesirable).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733106">5</a> by Marcin Szczepanski
		posted on 6/10/2011 at 2:15 AM
		</div>
		<div class="comment_text"><p>Tangentally related - another tip that not enough people use, if you hit Cmd-Shift-R (on a Mac, probably Ctrl-Shift-R on Windows) you get an "Open resource" dialog where you can start typing the name of a file within the project and quickly jump to it.  This saves digging around a folder hierarchy trying to find that file, and also if you use the "Link with editor" function in the file viewer you're quickly jumped to the right place in the tree view if you need related files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733107">6</a> by Seth Stone
		posted on 6/10/2011 at 2:38 AM
		</div>
		<div class="comment_text"><p>A good one to go with Ctrl-Shift-R is Ctrl-E (which basically does the same thing but for Open Editors)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733108">7</a> by Raymond Camden
		posted on 6/10/2011 at 5:45 AM
		</div>
		<div class="comment_text"><p>@Marcin: Good one. I use the _heck_ out of that in that large codebase I mentioned above. It's surprising how fast it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733117">8</a> by Ryan Vikander
		posted on 6/10/2011 at 5:54 AM
		</div>
		<div class="comment_text"><p>Anyone that manually browses through the file navigator needs a slap on the wrist. CTRL+Shift+R should be used. Don't forget it allows wildcards so you can do foo*. My only grip is that you can't put in directory to filter down the results. foo/foo.cfm would be nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733120">9</a> by Raymond Camden
		posted on 6/10/2011 at 5:58 AM
		</div>
		<div class="comment_text"><p>And for folks who don't know - Ryan and I work in the same code base. He can attest to the size of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733113">10</a> by Ryan Vikander
		posted on 6/10/2011 at 6:01 AM
		</div>
		<div class="comment_text"><p>It takes a good hour to do a full check out of the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733116">11</a> by Josh Knutson
		posted on 6/10/2011 at 7:18 AM
		</div>
		<div class="comment_text"><p>@Ryan what doesn't work when you type in <br>*foo/foo.cfm<br>it always works for me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733118">12</a> by Lola LB
		posted on 6/10/2011 at 2:37 PM
		</div>
		<div class="comment_text"><p>One hour to check out? Oo_oO</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733115">13</a> by existdissolve
		posted on 6/10/2011 at 5:17 PM
		</div>
		<div class="comment_text"><p>Lol, I had a forehead-smack on that exact same issue two days ago :)</p><p>One thing I've noticed that is weird is that it doesn't appear that the Search dialog works across multiple pages. It seems that you have to open up a new search on each page in order for your search to be applicable on that particular page.</p><p>Right now, I'm on the evaluation version of CFB2--however, a quirk like this is quickly becoming a deal-breaker for me. Is this happening for others?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733119">14</a> by existdissolve
		posted on 6/10/2011 at 5:21 PM
		</div>
		<div class="comment_text"><p>To clarify my last post, here's what I mean:</p><p>Open up pageA and pageB, assuming that each has some content that would match a search across either page. Now, on pageA, open up a new search (Ctrl+F), and search for the shared search term (I'm searching for "default" since it's in all my cfparams). On pageA (where the search was opened), it matches as expected.</p><p>However, while leaving the same search window open, switch to pageB and do the same search in the same search window. For me, no results are found, even though I'm looking directly at what should be matched! Now, if I open up a new search window while pageB is active, it will work.</p><p>Strangeness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733130">15</a> by Mike Lowry
		posted on 6/10/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Similar to the derived resources mentioned by Peter, Eclipse's working sets can be helpful if you know that you need to scope your search to a subset of folders/files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733129">16</a> by Larry C. Lyons
		posted on 6/11/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>IN reference to Ryan's comments about limiting the search to a directory. Actually you can. Under the file search you have the option to search the entire workspace, enclosing project, and selected resources.</p><p>To use the selected resources option, in the navigator pane, select the directory you want to search, then select file search, or cmd/ctl-H. Enter your search phrase and click the selected resources radio button.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		