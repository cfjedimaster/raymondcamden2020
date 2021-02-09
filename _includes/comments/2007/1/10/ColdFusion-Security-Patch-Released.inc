
<div class="comment" id="c_1713661201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661201">1</a> by MikeR
		posted on 1/11/2007 at 2:06 AM
		</div>
		<div class="comment_text"><p>Yeah, they don't make that page easy to find or have an RSS feed.<br>I did sign up for notifications though.</p><p>Anyway, this vulnerability only effects IIS users.<br>Using IIS is always a mistake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661198">2</a> by Che
		posted on 1/11/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>So, can anyone refesh my memory as to determine which JRun Updater Version I have installed? Adobe has instructions for both versions 5 and 6 and I have no clue which version I have installed. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661202">3</a> by Brad
		posted on 1/12/2007 at 11:18 AM
		</div>
		<div class="comment_text"><p>I'm getting stuck on step 5.</p><p>Navigate to the {cfmx_root}\runtime\lib directory and run the connector upgrade:<br>  cd {cfmx_root}\runtime\lib<br>  java -<a href="http://disq.us/url?url=http%3A%2F%2FDtrace.ci%3AlgFQAyh0AP56lXDk5HfZqN2cadY&amp;cuid=3321886" rel="nofollow noopener" title="Dtrace.ci">Dtrace.ci</a>=1 -jar wsconfig.jar -upgrade -v</p><p>I receive an error that java is not recognized as an internal or external command.  I'm no system guru, so I'm probably missing something obvious.</p><p>Also, it never says to copy the new wsconfig.jar to the {cfmx_root}\runtime\lib directory, but I'm assuming that's a given.</p><p>I guess some of us just need it spelled out (or at least I do).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661204">4</a> by Chad
		posted on 1/12/2007 at 9:16 PM
		</div>
		<div class="comment_text"><p>I shut down all of the services that the instruction say to.  CF, IIS, and Windows Management Instrumentation service.</p><p>I rename the current wsconfig.jar to wsconfig.jar.bu, copy the downloaded jar to the folder and run this command and get this error.</p><p>C:\CFusionMX7\runtime\lib&gt;java -<a href="http://disq.us/url?url=http%3A%2F%2FDtrace.ci%3AlgFQAyh0AP56lXDk5HfZqN2cadY&amp;cuid=3321886" rel="nofollow noopener" title="Dtrace.ci">Dtrace.ci</a>=1 -jar wsconfig.jar -upgrade -v Invalid or corrupt jarfile wsconfig.jar</p><p>I re-downloaded the file several times and still get the error.</p><p>Any ideas?</p></div>
	</div>
</div>
		