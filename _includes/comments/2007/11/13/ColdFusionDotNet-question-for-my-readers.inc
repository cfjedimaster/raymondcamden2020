
<div class="comment" id="c_1713674325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674325">1</a> by Chong
		posted on 11/14/2007 at 3:33 AM
		</div>
		<div class="comment_text"><p>I did abit of searching around and this is what i came up with. CF8 can call .Net assemblies (DLL and EXE) directly so it should be straight foward.<br>Unless i misinterpreted the actual question.</p><p>Link to tutorial - <a href="http://disq.us/url?url=http%3A%2F%2Ftutorial11.learncf.com%2F%3Ai9x8lHSrZfJ6GNgfHaoL-5HlO44&amp;cuid=3321886" rel="nofollow noopener" title="http://tutorial11.learncf.com/">http://tutorial11.learncf.com/</a></p><p>Link to brief on assemblies for .Net - <a href="http://disq.us/url?url=http%3A%2F%2Fvisualbasic.about.com%2Fod%2Fusingvbnet%2Fa%2Fasmnet01.htm%3AAVpzA8EndU4V2Dbb7ehiCNkrGWo&amp;cuid=3321886" rel="nofollow noopener" title="http://visualbasic.about.com/od/usingvbnet/a/asmnet01.htm">http://visualbasic.about.co...</a></p><p>Coincidentally <a href="http://disq.us/url?url=http%3A%2F%2Flearncf.com%3Ac9NsUtE6wkftAGnAJhWLn8latng&amp;cuid=3321886" rel="nofollow noopener" title="learncf.com">learncf.com</a> is run/started by my fellow Melbournian Dale Fraser.</p><p>PS: I have very little love for .Net, I have enough trouble as it is calling .Net functions from MS product properly. But that maybe due to lack of experience and access of documentation than anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674320">2</a> by Dale Fraser
		posted on 11/14/2007 at 4:19 AM
		</div>
		<div class="comment_text"><p>I am almost certain that you can just place the new DLL in the location and it will pick it up without needing to restart .NET CF Services</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674326">3</a> by Wilfred Yeung
		posted on 11/14/2007 at 4:56 AM
		</div>
		<div class="comment_text"><p>That's right- if you dump a new .dll into a directory, the .NET integration service will just pick it up and everything's happy.  But if I want to deploy a new version of a .dll I've already deployed, I can't do so without stopping the .NET integration service first, as it will lock the file I want to overwrite.  Is there any way to set this up in a way such that I can hot deploy new versions of the same file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674324">4</a> by Chong
		posted on 11/15/2007 at 3:53 AM
		</div>
		<div class="comment_text"><p>@Wilfred</p><p>AFAIK, once a file is flagged by a service of being used there generally is no way of releasing control of it unless the service itself can do that (maybe a hidden feature of the .Net assembly, though i doubt it). Personally I term that a feature (not being able to overwrite files in the assembly while its live).</p><p>Before you do any of the following, try emailing the adobe CF support team with your issue if you have not already.</p><p>To get around it (assuming that you are testing the dll) You may want to store all references to that file as an application variable. The you can change the reference when you need to.</p><p>Alternative a slightly more complex but dynamic way is to write a function which will read the directory and a part of the file name and determine the most recent (via modified date using cfdirectory) file of that matches that string and calling it.</p><p>It is an interesting situation to think about as if you are in a shared hosting situation or on a live production server, you may not always be able to reset the service whenever you need/want to.</p><p>Good Luck :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674328">5</a> by Rupesh Kumar
		posted on 11/15/2007 at 8:18 PM
		</div>
		<div class="comment_text"><p>@Wilfred,<br>You are absolutely right. As long as it is a new dll, dotnet service will pick it up happily. But if you want to load a new version of a dll, you can not do it without restarting dotnet service becuase the dll is loaded and locked by the service. I agree that it is a limitation but thats the .NET world ;-)<br>However since restarting dotnet service does not take any time at all, it should not be much of a problem to restart it.<br>Rupesh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674327">6</a> by Wilfred Yeung
		posted on 11/15/2007 at 10:22 PM
		</div>
		<div class="comment_text"><p>Thanks guys for your comments.  Unfortunately even killing variable references/pointers to the .NET object does not actually release the lock on the .dll.  I would think it would be an issue with the way the service is implemented.  The reason why I don't want to restart the service in a production environment is that restarting the service takes down all parts of my application accessing any type of .NET code.  We have a very large application that could be hitting dozens of assemblies for different parts of the tool, and restarting the integration service for a change in one assembly takes down other areas unnecessarily.  You can get into games with server failovers, etc., but ideally we wouldn't have to.</p><p>Thanks again for your help- I'm open to any other suggestions people might have.</p></div>
	</div>
</div>
		