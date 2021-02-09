
<div class="comment" id="c_1713615229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615229">1</a> by Alex Hubner
		posted on 12/11/2003 at 11:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray, at least you receive some answer/help! ;)</p><p>Two months ago I´ve faced some very odd behavior with CFFTP (thankfully I found a workround) and nobody seams to understand (or read) it. I know this is not the right place for it but I'll present the issues I'm facing. Who knows? Maybe some reader that already faced it can confirm. Here's the history:</p><p>The problem happens when you use CFFTP tag in a "sandboxed" account. I'm not sure but I believe CFFTP uses PORT transfer mode by default (the "passive" attribute is "no" by default). No problems so far, except for the fact that CFMX can't make the connection and returns a java.net.SocketPermission error that<br>follows:</p><p>Security: The requested template has been denied access to localhost:1024-.<br>The following is the internal exception message: access denied (java.net.SocketPermission localhost:1024- listen,resolve).</p><p>Some could ask to add 1024 (and higher) TCP port in the "Server/Port"<br>settings but it doesn't change anything (not to mention that 1024 port is not used in PORT mode(?)). I've added all possible weirdness as TCP ports (20, 21, various ranges etc, etc) with no sucess.</p><p>The conclusion? The CFFTP tag with default attributes doesn't work under a regular sandbox context (with all IP/Ports open and availble for connection).</p><p>The only workaround for it is to use passive mode (passive="yes"). If you're adding some restriction in the "Server/Ports" you must add the FTP host leaving the "port" field blank (all ports) or add two entries (1) <a href="http://disq.us/url?url=http%3A%2F%2Fftp.somehost.com%3AaTmtCFdJExwjuEWAWNawkWiyn4M&amp;cuid=3321886" rel="nofollow noopener" title="ftp.somehost.com">ftp.somehost.com</a>:21 and (2) <a href="http://disq.us/url?url=http%3A%2F%2Fftp.somehost.com%3AaTmtCFdJExwjuEWAWNawkWiyn4M&amp;cuid=3321886" rel="nofollow noopener" title="ftp.somehost.com">ftp.somehost.com</a>:1024- (1024 and higher).</p><p>To exemplify:</p><p>1) <a href="http://disq.us/url?url=http%3A%2F%2Fwww.alexhubner.com%2Fftp_port%2F%3AGpaqnTMJ2N654cqNRrF6M9vVHfs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alexhubner.com/ftp_port/">http://www.alexhubner.com/f...</a> (using the default port mode)<br>2) <a href="http://disq.us/url?url=http%3A%2F%2Fwww.alexhubner.com%2Fftp_pasv%2F%3AZ_eU5n7fyOlDkjf7TsqZyhFQ2mM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alexhubner.com/ftp_pasv/">http://www.alexhubner.com/f...</a> (using pasv mode)</p><p>The problem with the workaround is that it obligates a FTP server that accepts PASV transfer mode. And if my FTP server (or even the firewall ahead of it) doesn't allow me to use PASV mode?</p><p>I've googled around and didn't found any mention to it.</p><p>Many thanks!</p><p>PS: the cfml template I'm using in the examples above is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.alexhubner.com%2Fftp_pasv%2Findex.zip%3A_GeY0Xn4J9ky5NcVjdWV-OPtuEA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alexhubner.com/ftp_pasv/index.zip">http://www.alexhubner.com/f...</a> and a screenshot of my "server/ports" config in the sandbox is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.alexhubner.com%2Fftp_pasv%2Fpic.gif%3ASR1IJuNxRjeR6Vw4GtvLqtZ0Z0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alexhubner.com/ftp_pasv/pic.gif">http://www.alexhubner.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615242">2</a> by Peter Tilbrook
		posted on 12/13/2003 at 2:52 AM
		</div>
		<div class="comment_text"><p>Another reason why I really like BlueDragon 6.1 (beta) and it's IMAP support.</p></div>
	</div>
</div>
		