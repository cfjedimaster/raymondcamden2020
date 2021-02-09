
<div class="comment" id="c_1713661368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661368">1</a> by dickbob
		posted on 1/22/2007 at 3:13 PM
		</div>
		<div class="comment_text"><p>A little bug I think using MS Access?</p><p>IssueManager.cfc line 343</p><p>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Syntax error (missing operator) in query expression 'i.locusidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fpl.id%3AERanBMGoPztLd3-KKk-WgubGb-c&amp;cuid=3321886" rel="nofollow noopener" title="pl.id">pl.id</a> LEFT JOIN lh_severities sev on i.severityidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fsev.id%3Aha_GoxW2SVYYRwIS-03-UnR-p6c&amp;cuid=3321886" rel="nofollow noopener" title="sev.id">sev.id</a> LEFT JOIN lh_statuses st on i.statusidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fst.id%3AaObULXXK2bkp-JG_PpS9kLA_O38&amp;cuid=3321886" rel="nofollow noopener" title="st.id">st.id</a> LEFT JOIN lh_projects p on i.projectidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fp.id%3AHtSotN6W0iVp2ONz1XPSVpoyswM&amp;cuid=3321886" rel="nofollow noopener" title="p.id">p.id</a> LEFT JOIN lh_users u on i.useridfk = <a href="http://disq.us/url?url=http%3A%2F%2Fu.id%3AN7-Tbci58lm5Y94A6lItiAkpNXE&amp;cuid=3321886" rel="nofollow noopener" title="u.id">u.id</a> LEFT JOIN lh_issuetypes it on i.issuetypeidf'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661379">2</a> by Raymond Camden
		posted on 1/23/2007 at 4:33 AM
		</div>
		<div class="comment_text"><p>Confirmed. Not quite sure how to fix it though. It works fine in MySQL/SQL Server. Do you know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661372">3</a> by Antony
		posted on 1/23/2007 at 7:54 AM
		</div>
		<div class="comment_text"><p>If you have a spare 5 mins you could drop in Reactor or Transform...<br>Sorry, no real suggestion on how to fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661362">4</a> by dickbob
		posted on 1/23/2007 at 2:31 PM
		</div>
		<div class="comment_text"><p>Okay, I've taken a look at the query and got the following to work in MS Access...</p><p>SELECT <a href="http://disq.us/url?url=http%3A%2F%2Fi.id%3AHeglobmzD5R0Mu-fb9sQxLQo8LM&amp;cuid=3321886" rel="nofollow noopener" title="i.id">i.id</a>, i.projectidfk, i.created, i.updated, i.publicid, i.duedate,<br><a href="http://disq.us/url?url=http%3A%2F%2Fi.name%3AC-c42dvxIlK1T8CCTpJ3xHHhi9I&amp;cuid=3321886" rel="nofollow noopener" title="i.name">i.name</a>, i.useridfk, i.description, i.history, i.creatoridfk,<br>i.locusidfk, i.severityidfk, i.statusidfk, i.relatedurl, i.attachment,<br><a href="http://disq.us/url?url=http%3A%2F%2Fpl.name%3Afkq0YRQbJDJg7cFUQXnXi0zp9zg&amp;cuid=3321886" rel="nofollow noopener" title="pl.name">pl.name</a> AS locusname,<br><a href="http://disq.us/url?url=http%3A%2F%2Fsev.name%3AP46q9qDuqJsh64VhEMI9AQtU0Oc&amp;cuid=3321886" rel="nofollow noopener" title="sev.name">sev.name</a> AS severityname,<br><a href="http://disq.us/url?url=http%3A%2F%2Fst.name%3AtknwuOYQ84qTAbU7ronncc7CSpU&amp;cuid=3321886" rel="nofollow noopener" title="st.name">st.name</a> AS statusname,<br><a href="http://disq.us/url?url=http%3A%2F%2Fp.name%3A6Q_J8JLgR82YMd4bDNRdQG1Rnvg&amp;cuid=3321886" rel="nofollow noopener" title="p.name">p.name</a> AS projectname,<br>sev.rank AS severityrank,<br><a href="http://disq.us/url?url=http%3A%2F%2Fu.name%3AdWDt0VvmP7DN8sSF-ADjywV5JKQ&amp;cuid=3321886" rel="nofollow noopener" title="u.name">u.name</a> AS username,<br><a href="http://disq.us/url?url=http%3A%2F%2Fit.name%3Aq0mHkPFRd-iNxUG0Gi4E8yt-cxc&amp;cuid=3321886" rel="nofollow noopener" title="it.name">it.name</a> as issuetype<br>FROM (((((lh_issues i <br>LEFT JOIN lh_projectloci pl on i.locusidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fpl.id%3AERanBMGoPztLd3-KKk-WgubGb-c&amp;cuid=3321886" rel="nofollow noopener" title="pl.id">pl.id</a>)<br>LEFT  JOIN lh_severities sev on i.severityidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fsev.id%3Aha_GoxW2SVYYRwIS-03-UnR-p6c&amp;cuid=3321886" rel="nofollow noopener" title="sev.id">sev.id</a>)<br>LEFT  JOIN lh_statuses st on i.statusidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fst.id%3AaObULXXK2bkp-JG_PpS9kLA_O38&amp;cuid=3321886" rel="nofollow noopener" title="st.id">st.id</a>)<br>LEFT JOIN lh_projects p on i.projectidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fp.id%3AHtSotN6W0iVp2ONz1XPSVpoyswM&amp;cuid=3321886" rel="nofollow noopener" title="p.id">p.id</a>)<br>LEFT JOIN lh_users u on i.useridfk = <a href="http://disq.us/url?url=http%3A%2F%2Fu.id%3AN7-Tbci58lm5Y94A6lItiAkpNXE&amp;cuid=3321886" rel="nofollow noopener" title="u.id">u.id</a>)<br>LEFT JOIN lh_issuetypes it on i.issuetypeidfk = <a href="http://disq.us/url?url=http%3A%2F%2Fit.id%3AjnHrDv1PJjHxeZ2BEGQdbXrAHnQ&amp;cuid=3321886" rel="nofollow noopener" title="it.id">it.id</a><br>WHERE 1=1</p><p>Looks like MS Access likes it brackets!</p><p>You want to check that it is supported in the other db's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661380">5</a> by Raymond Camden
		posted on 1/23/2007 at 5:29 PM
		</div>
		<div class="comment_text"><p>That did it, thanks! There will be a 2.2.002 release later today. Other bugs are fixed as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661369">6</a> by David
		posted on 1/24/2007 at 5:26 AM
		</div>
		<div class="comment_text"><p>when did all the tables get renamed with the lh_ prefix? we only started using in lighthouse in late december(and now have hundreds of bugs in it), but don't see a straight forward upgrade path here as the tables are all named different!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661366">7</a> by Raymond Camden
		posted on 1/24/2007 at 8:13 AM
		</div>
		<div class="comment_text"><p>David, please see the readme as it describes what to do. Outside of the changes for issuetypes, all you need to do is rename the tables, which is simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661359">8</a> by David
		posted on 1/24/2007 at 8:24 AM
		</div>
		<div class="comment_text"><p>ah... RTFM!! my apologies jedi master ;p</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661370">9</a> by Scott Fitchet
		posted on 1/25/2007 at 3:47 AM
		</div>
		<div class="comment_text"><p>Not sure where the bugtracker is for the bugtracker. ;)</p><p>The mySQL install script did not run in Navicat until I deleted the comments at the top and bottom of the file. Not sure which of those two programs choked on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661364">10</a> by Raymond Camden
		posted on 1/25/2007 at 3:53 AM
		</div>
		<div class="comment_text"><p>THose comments came from mysql-front. I need to stop using that. ;)</p><p>Oh - and LHP has a bug tracker on riaforge.</p></div>
	</div>
</div>
		