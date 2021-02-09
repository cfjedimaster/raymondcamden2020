
<div class="comment" id="c_3445745368">
	<div>
		<img src="https://disqus.com/api/users/avatars/zackster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3445745368">1</a> by Zac Spitzer
		posted on 8/1/2017 at 3:31 AM
		</div>
		<div class="comment_text"><p>Unfortunately there are a range of bugs across browsers with geolocation</p><p>- Chrome Dev Tools Emulate Location has problems<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugs.chromium.org%2Fp%2Fchromium%2Fissues%2Fdetail%3Fid%3D542923%3AhgkA1WrpAyFoJ1jrXRxw-r51nww&amp;cuid=3321886" rel="nofollow noopener" title="https://bugs.chromium.org/p/chromium/issues/detail?id=542923">https://bugs.chromium.org/p...</a></p><p>- Chrome fires two call backs when location unavailable, you need to track if there's been a callback and ignore the second one, otherwise you may get strange results</p><p>- IE11 will only work once, all subsequent geolocation requests fail (WONTFIX as it's EOL and not a security issue)</p><p>- Firefox Android has issues with non zero max age <br><a href="https://disq.us/url?url=https%3A%2F%2Fbugzilla.mozilla.org%2Fshow_bug.cgi%3Fid%3D1214482%3AuWkVMv45YHtpdgi01jBPdzyeVNo&amp;cuid=3321886" rel="nofollow noopener" title="https://bugzilla.mozilla.org/show_bug.cgi?id=1214482">https://bugzilla.mozilla.or...</a></p><p>Generally, the geolocation cache seems to be per tab, if it fails, often only closing and opening a new tab will fix it.</p><p>I created a test harness for testing geolocation <a href="https://disq.us/url?url=https%3A%2F%2Fjsbin.com%2Fnupuyo%2Fedit%3Fhtml%2Cconsole%2Coutput%3AMVE8nE0MIPbYqfg-XFlEOpSoGtU&amp;cuid=3321886" rel="nofollow noopener" title="https://jsbin.com/nupuyo/edit?html,console,output">https://jsbin.com/nupuyo/ed...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3446185035">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3446185035">2</a> (In reply to <a href="#c_3445745368">#1</a>) by Raymond Camden
		posted on 8/1/2017 at 12:58 PM
		</div>
		<div class="comment_text"><p>Thanks for those notes - kinda disappointing to see how old that DevTool bug is. I didn't even bother with IE11.</p></div>
	</div>
</div>
		