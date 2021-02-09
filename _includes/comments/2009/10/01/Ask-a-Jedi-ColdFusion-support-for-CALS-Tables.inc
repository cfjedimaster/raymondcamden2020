
<div class="comment" id="c_1713718770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718770">1</a> by Aaron S.
		posted on 10/1/2009 at 7:54 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! This is a great first step towards making InDesign exported XML useable for the web. I'll be attempting to make a CFC that can convert HTML tables from/to CALS format. Anyone who uses InDesign and wants to export to the web would find it useful. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718784">2</a> by Roland Collins
		posted on 10/1/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>A better way to do this is using XSLT.  There are quite a few good XSLT templates for this already.  The one located here works fantastically (if you remove the semi-colon before the first closing angle bracket):  <a href="http://disq.us/url?url=http%3A%2F%2Fsources.redhat.com%2Fml%2Fxsl-list%2F2001-07%2Fmsg00661.html%3AsR8ttzEFdbE3ZRxkKpqzz54whoU&amp;cuid=3321886" rel="nofollow noopener" title="http://sources.redhat.com/ml/xsl-list/2001-07/msg00661.html">http://sources.redhat.com/m...</a></p><p>All you have to do is copy the xslt template into a file and then load that file into a variable (or use a cfsavecontent block).  Then you simply use XmlTransform on the xml data.  Something like this:</p><p>cfsavecontent variable="xsl"<br>     - cut and paste xslt template -<br>/cfsavecontent</p><p>cfsavecontent variable="xml"<br>     - cut and paste your xml here -<br>/cfsavecontent</p><p>cfset html = XmlTransform(xml, xsl)</p><p>cfoutput<br>     #html#<br>/cfoutput</p><p>I just tried this using the xslt at that link and the example xml, and it works fantastically.  There are a number of other xslts you can use if this one doesn't suit your needs.  Just google "XSLT CALS HTML conversion".</p><p>Hope that helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718774">3</a> by Raymond Camden
		posted on 10/2/2009 at 12:00 AM
		</div>
		<div class="comment_text"><p>Doh, didn't even think about XSLT. Massively better there Roland. Good find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718775">4</a> by Aaron S.
		posted on 10/2/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>Nice! Didn't even think about XSLT. This is perfect for reading from the generated XML but what if I want to take an existing HTML table and convert to CALS? I guess I'm looking for a method to go both ways seamlessly by passing either a chunk of XML or a chunk of HTML and having it spit the conversion out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718776">5</a> by Roland Collins
		posted on 10/2/2009 at 12:54 AM
		</div>
		<div class="comment_text"><p>Here's XHTML tables to CALS (I haven't tested it).  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.biglist.com%2Flists%2Fxsl-list%2Farchives%2F200603%2Fmsg00242.html%3AYoVBJ01477s9Sf0ibL0MZRPFG0s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.biglist.com/lists/xsl-list/archives/200603/msg00242.html">http://www.biglist.com/list...</a> .  There were various versions posted all over the place - I suggest googling to find the best fit!</p><p>If you're doing poorly-formatted (non-xhtml) html tables, then you've got a much bigger problem on your hands.  Fortunately, Ben just posted a solution to make those html tables xhtml compliant the other day: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A1723.view%3AJj5HWGSK-yZZyQA9qcXs5Q4pHIE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:1723.view">http://www.bennadel.com/ind...</a></p></div>
	</div>
</div>
		