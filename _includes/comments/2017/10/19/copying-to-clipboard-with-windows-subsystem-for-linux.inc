
<div class="comment" id="c_3978562721">
	<div>
		<img src="https://disqus.com/api/users/avatars/chrisfeohpatti.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3978562721">1</a> by Christopher Patti
		posted on 7/8/2018 at 12:50 AM
		</div>
		<div class="comment_text"><p>Thank you this helps a LOT! I've recently started using Windows 10 WSL via an AWS workspace at work, and it's almost a workable environment :) (I'm much more used to working on a Mac).</p><p>The only sticking point still is cutting and pasting large amounts of text. ConsEmu is pretty good in general terms as a terminal, but it still falls short in that regard. With your tip, I can work around this by simply using screen to capture log files, copy them back to my Windows workstation, and then using clip.exe to get them into the clipboard where they can then be pasted where they need to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3988448480">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3988448480">2</a> (In reply to <a href="#c_3978562721">#1</a>) by Raymond Camden
		posted on 7/14/2018 at 3:08 PM
		</div>
		<div class="comment_text"><p>You are most welcome - I'm happy this helped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4078752765">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesdrever.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4078752765">3</a> by James Drever
		posted on 9/5/2018 at 1:29 PM
		</div>
		<div class="comment_text"><p>This is really helpful, thank you! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4078773299">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4078773299">4</a> (In reply to <a href="#c_4078752765">#3</a>) by Raymond Camden
		posted on 9/5/2018 at 1:42 PM
		</div>
		<div class="comment_text"><p>You are welcome. I had to use it myself a day or so ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4241268246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4241268246">5</a> by MaikMaalig
		posted on 12/14/2018 at 4:36 PM
		</div>
		<div class="comment_text"><p>Very helpful! How to paste the content at command line, i.e. in bash programs?<br>Maik</p></div>
	</div>
</div>
		
<div class="comment" id="c_4241280519">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4241280519">6</a> (In reply to <a href="#c_4241268246">#5</a>) by Raymond Camden
		posted on 12/14/2018 at 4:43 PM
		</div>
		<div class="comment_text"><p>I believe right click will do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4242317949">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_lXe75oU7Qw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4242317949">7</a> by mv
		posted on 12/15/2018 at 11:21 AM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4862231415">
	<div>
		<img src="https://disqus.com/api/users/avatars/llinfeng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4862231415">8</a> by Linfeng Li
		posted on 4/5/2020 at 6:54 PM
		</div>
		<div class="comment_text"><p>Another possibly is to get a X-server running and use <code>xclip</code>. To get the contents to reach system clipboard, the following statement worked on WSL: <code>echo "Hi"  | xclip -selection clipboard</code>. (<a href="https://disq.us/url?url=https%3A%2F%2Funix.stackexchange.com%2Fa%2F84952%2F240390%3A8ngjcdlxkVvm64IMCFh6ZfkMycA&amp;cuid=3321886" rel="nofollow noopener" title="https://unix.stackexchange.com/a/84952/240390">Source for the -selection flag</a>)<br><code>clip.exe</code> only handles plain text, and there are limitation for the PowerShell command <code>Set-Clipboard</code> command. <code>xclip</code> shall over the capability to work with both pure text and rich-text contents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4918643845">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8rCfoCuvE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4918643845">9</a> (In reply to <a href="#c_4078752765">#3</a>) by Dylan
		posted on 5/18/2020 at 7:08 PM
		</div>
		<div class="comment_text"><p>Thank you thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4919666423">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kyJ5eesb5y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4919666423">10</a> by xanderjakeq
		posted on 5/19/2020 at 3:02 PM
		</div>
		<div class="comment_text"><p>Any idea how to copy text from vim using wsl bash?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4919668505">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4919668505">11</a> (In reply to <a href="#c_4919666423">#10</a>) by Raymond Camden
		posted on 5/19/2020 at 3:04 PM
		</div>
		<div class="comment_text"><p>I use Windows Terminal (the new one) and it supports copying from it very easily. You just CTRL+C.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4919687267">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kyJ5eesb5y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4919687267">12</a> (In reply to <a href="#c_4919668505">#11</a>) by xanderjakeq
		posted on 5/19/2020 at 3:16 PM
		</div>
		<div class="comment_text"><p>nicee. How can I get that? is it officially released?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4919692450">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4919692450">13</a> (In reply to <a href="#c_4919687267">#12</a>) by Raymond Camden
		posted on 5/19/2020 at 3:19 PM
		</div>
		<div class="comment_text"><p>You can get it at the MS App Store, or GitHub too - <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fmicrosoft%2Fterminal%3Amvo_x8V5HJ6u0BhoUvRsRtGLub0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/microsoft/terminal">https://github.com/microsof...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4919702972">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kyJ5eesb5y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4919702972">14</a> (In reply to <a href="#c_4919692450">#13</a>) by xanderjakeq
		posted on 5/19/2020 at 3:28 PM
		</div>
		<div class="comment_text"><p>Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_5007696898">
	<div>
		<img src="https://disqus.com/api/users/avatars/dwmkerr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5007696898">15</a> by Dave Kerr
		posted on 7/27/2020 at 3:45 PM
		</div>
		<div class="comment_text"><p>Thanks for the tip! For anyone wanting to paste as well, I use this:</p><p><code><br>alias pbcopy="clip.exe"<br>alias pbpaste="powershell.exe -command 'Get-Clipboard' | sed -e 's/\r\n$//g'"<br></code></p><p>I wrote up details here. <a href="https://disq.us/url?url=https%3A%2F%2Feffective-shell.com%2Fdocs%2Fpart-1-transitioning-to-the-shell%2F4-clipboard-gymnastics%2F%3ADFxm92Uf3F2LfcrZmDtRsxJ1RHs&amp;cuid=3321886" rel="nofollow noopener" title="https://effective-shell.com/docs/part-1-transitioning-to-the-shell/4-clipboard-gymnastics/">https://effective-shell.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_5118677262">
	<div>
		<img src="https://disqus.com/api/users/avatars/ivorynoise.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5118677262">16</a> by Deepak
		posted on 10/21/2020 at 7:54 AM
		</div>
		<div class="comment_text"><p>You just saved my days...thanks for sharing!!</p></div>
	</div>
</div>
		