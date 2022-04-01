---
layout: post
title: "Sitemap Generator"
date: "2006-11-16T22:11:00+06:00"
categories: [coldfusion]
tags: []
banner_image: 
permalink: /2006/11/16/Sitemap-Generator
guid: 1660
---

Earlier today Yahoo and Google announced their collaboration on <a href="http://www.sitemaps.org/">Sitemaps.org</a>. Sitemaps provide a way to describe to a search engine what pages make up your web site. I've had sitemap support in BlogCFC for a while, but today I wrote a little UDF you can use to generate sitemap xml. It will take either a list of URLs or a query of URLs. Enjoy. I'll post it to CFLib later in the week.

```
<cffunction name="generateSiteMap" output="false" returnType="xml">
	<cfargument name="data" type="any" required="true">
	<cfargument name="lastmod" type="date" required="false">
	<cfargument name="changefreq" type="string" required="false">
	<cfargument name="priority" type="numeric" required="false">
	
	<cfset var header = "<?xml version=""1.0"" encoding=""UTF-8""?><urlset xmlns=""http://www.sitemaps.org/schemas/sitemap/0.9"">">
	<cfset var result = header>
	<cfset var aurl = "">
	<cfset var item = "">
	<cfset var validChangeFreq = "always,hourly,daily,weekly,monthly,yearly,never">
	<cfset var newDate = "">
	<cfset var tz = getTimeZoneInfo().utcHourOffset>
	
	<cfif structKeyExists(arguments, "changefreq") and not listFindNoCase(validChangeFreq, arguments.changefreq)>
		<cfthrow message="Invalid changefreq (#arguments.changefreq#) passed. Valid values are #validChangeFreq#">
	</cfif>

	<cfif structKeyExists(arguments, "priority") and (arguments.priority lt 0 or arguments.priority gt 1)>
		<cfthrow message="Invalid priority (#arguments.priority#) passed. Must be between 0.0 and 1.0">
	</cfif>
	
	<!--- reformat datetime as w3c datetime / http://www.w3.org/TR/NOTE-datetime --->
	<cfif structKeyExists(arguments, "lastmod")>			
		<cfset newDate = dateFormat(arguments.lastmod, "YYYY-MM-DD") & "T" & timeFormat(arguments.lastmod, "HH:mm")>
		<cfif tz gte 0>
			<cfset newDate = newDate & "-" & tz & ":00">
		<cfelse>
			<cfset newDate = newDate & "+" & tz & ":00">
		</cfif>		
	</cfif>
	
	<!--- Support either a query or list of URLs --->
	<cfif isSimpleValue(arguments.data)>
		<cfloop index="aurl" list="#arguments.data#">
			<cfsavecontent variable="item">
<cfoutput>
<url>
	<loc>#xmlFormat(aurl)#</loc>
	<cfif structKeyExists(arguments,"lastmod")>
	<lastmod>#newDate#</lastmod>
	</cfif>
	<cfif structKeyExists(arguments,"changefreq")>
	<changefreq>#arguments.changefreq#</changefreq>
	</cfif>
	<cfif structKeyExists(arguments,"priority")>
	<priority>#arguments.priority#</priority>
	</cfif>
</url>
</cfoutput>
			</cfsavecontent>
			<cfset item = trim(item)>
			<cfset result = result & item>
		</cfloop>
		
	<cfelseif isQuery(arguments.data)>
		<cfloop query="arguments.data">
			<cfsavecontent variable="item">
<cfoutput>
<url>
	<loc>#xmlFormat(url)#</loc>
	<cfif listFindNoCase(arguments.data.columnlist,"lastmod")>
		<cfset newDate = dateFormat(lastmod, "YYYY-MM-DD") & "T" & timeFormat(lastmod, "HH:mm")>
		<cfif tz gte 0>
			<cfset newDate = newDate & "-" & tz & ":00">
		<cfelse>
			<cfset newDate = newDate & "+" & tz & ":00">
		</cfif>		
		<lastmod>#newDate#</lastmod>
	</cfif>
	<cfif listFindNoCase(arguments.data.columnlist,"changefreq")>
	<changefreq>#changefreq#</changefreq>
	</cfif>
	<cfif listFindNoCase(arguments.data.columnlist,"priority")>
	<priority>#priority#</priority>
	</cfif>
</url>
</cfoutput>
			</cfsavecontent>
			<cfset item = trim(item)>
			<cfset result = result & item>
		
		</cfloop>
	</cfif>
	
	<cfset result = result & "</urlset>">
	
	<cfreturn result>
	
</cffunction>
```

<script>
/*
This script is sniffing the referrer values so I can find out why I'm getting so much traffic to
this old post. 
*/
document.addEventListener('DOMContentLoaded', () => {
	let ref = document.referrer;
	if(!ref) {
		console.log('no ref);
		fetch(`https://en4xgnazkbdrpz0.m.pipedream.net?ref=noref`);
		return;
	}
	if(ref.includes('raymondcamden.com')) {
		console.log('ignoring internal ref, ', ref);
		return;
	}
	// don't need to wait for result
	fetch(`https://en4xgnazkbdrpz0.m.pipedream.net?ref=${encodeURIComponent(ref)}`);

}, false);
</script>