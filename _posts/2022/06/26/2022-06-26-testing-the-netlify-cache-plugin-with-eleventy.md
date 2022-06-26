---
layout: post
title: "Testing the Netlify Cache Plugin with Eleventy"
date: "2022-06-26T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/cache.jpg
permalink: /2022/06/26/testing-the-netlify-cache-plugin-with-eleventy
description: An example of caching for Netlify with an Eleventy site
---

For months now I've been meaning to check out, and try, the [Netlify Caching plugin](https://www.npmjs.com/package/netlify-plugin-cache). This plugin lets you cache resources between builds saving you time when doing builds. I didn't doubt it worked, but I needed to give it a try myself to see it in action. To test it out, I used [Eleventy](https://www.11ty.dev/), but note that you can use any static site generator with the plugin. (It just won't be as cool.) 

## Demo Site 

For my demo, I wanted to mimic something that would be have a slow process of some sort. I wanted to keep it simple though so I decided I'd just "fake" the slowness. For my made up process, I'm going to tell Eleventy to scan a directory of PDFs, and for each PDF, it's going to "process" them. That process could be running an [extract](https://developer.adobe.com/document-services/apis/pdf-extract/) API to get the contents of the PDF. It doesn't really matter as it's going to be fake. 

To create this, I built a new Eleventy site (I'll share the repo at the end) and added `_data/pdfs.js`:

```js
const fs = require('fs');

const sourceDir = './pdfs';
const cacheDir = './scanned_pdfs';

/*
Fake logic!
*/
async function parsePDF(f) {
	return new Promise((resolve, reject) => {

		setTimeout(() => {
			resolve({
				input:f,
				made:new Date()
			});
		}, 5000);

	});
}

module.exports = async () => {

	console.log('running pdfs data file');
	let files = fs.readdirSync(sourceDir);
	let pdfs = [];

	for(let i=0; i<files.length; i++) {
		let f = files[i];
		console.log('pdf source input', f);
		let filenoext = f.replace(/\.pdf$/,'');
		// do we have a cache for f?
		let cached_file = cacheDir + `/${filenoext}.json`;
		console.log('cached_file location', cached_file);
		if(!fs.existsSync(cached_file)) {
			console.log('The cached file does NOT exist. Getting my data.');
			let parse = await parsePDF(f);
			console.log('got my parsed pdf info ', parse);
			fs.writeFileSync(cached_file, JSON.stringify(parse));
			pdfs.push({
				name:f,
				data:parse
			});
		} else {
			console.log('The cached file DOES exist.');
			let data = JSON.parse(fs.readFileSync(cached_file, 'utf8'));
			pdfs.push({
				name:f,
				data
			});
		}
	};

	return pdfs;

};
```

The data file begins by scanning a directory (`sourceDir`) for a list of PDFs. For each PDF, it needs to process them. It first checks if a cached file exists for the process (`cached_file`) and if not, executes my fake process. Note I'm using a `setTimeout` here to force the process to wait five seconds. When done, it stores the result. 

The result is a set of data files that have the same name (except for extension) for each of my PDFs. The data is just the file name and a date stamp representing when it was created. 

For my GitHub repository, I will *not* be committing the scanned results, that has to happen in production, but I did add a `.gitkeep` file to ensure the directory was in the repo. 

Finally, I built a simple `index.liquid` file to render the results:

```html
{% raw %}---
layout: main
---

<h1>Hello World</h1>

<p>
I was made {{ "now" | date: "%Y-%m-%d %H:%M" }}.
</p>

<h2>PDFs</h2>
<ul>
{% for pdf in pdfs %}
	<li>filename, {{ pdf.name }}, parsed {{ pdf.data.made  | date: "%Y-%m-%d %H:%M:%S" }}</li>
{% endfor %}
</ul>{% endraw %}
```

You'll notice I output the time the file was created on top, this will be useful for comparison's sake once the cache is working. For each PDF I render the name and the time it's data was made. 

Once I confirmed this was working locally, I deployed to Netlify. I did a few deploys and in general it averaged around a minute and fifteen seconds:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/06/cache1.jpg" alt="Two deploys" class="lazyload imgborder imgcenter">
</p>

If I keep repeating the builds, the times don't change and if I look at the logs, you can see that the cached results from the fake process never exist:

```
4:45:28 PM: The cached file does NOT exist. Getting my data.
4:45:33 PM: got my parsed pdf info  {
4:45:33 PM:   input: 'a-midsummer-nights-dream_PDF_FolgerShakespeare.pdf',
4:45:33 PM:   made: 2022-06-26T21:45:33.617Z
4:45:33 PM: }
4:45:33 PM: pdf source input alls-well-that-ends-well_PDF_FolgerShakespeare.pdf
4:45:33 PM: cached_file location ./scanned_pdfs/alls-well-that-ends-well_PDF_FolgerShakespeare.json
4:45:33 PM: The cached file does NOT exist. Getting my data.
4:45:38 PM: got my parsed pdf info  {
4:45:38 PM:   input: 'alls-well-that-ends-well_PDF_FolgerShakespeare.pdf',
4:45:38 PM:   made: 2022-06-26T21:45:38.621Z
4:45:38 PM: }
```

## Cache the Things! 

Alright, now for the cool part. To get caching enabled, you need to do a grand total of two things. First, I "installed" the plugin via `netlify.toml`:

```toml
[[plugins]]
package = "netlify-plugin-cache"
  [plugins.inputs]
  # Optional (but highly recommended). Defaults to [".cache"].
  paths = ["scanned_pdfs"]
```

The plugin defaults to a particular folder (`.cache`) but as you can see, I changed to match the cache directory my code was looking for. 

The second step, and a crucial one, is to install the plugin locally so it shows up in your package.json:

```bash 
npm i -D netlify-plugin-cache 
```

Now - when I deployed the first time, it didn't show any improvement in caching because it needed to be setup, but the second and further builds showed a dramatic improvement (well, relatively):

<p>
<img data-src="https://static.raymondcamden.com/images/2022/06/cache2.jpg" alt="Quicker builds" class="lazyload imgborder imgcenter">
</p>

Now I'm seeing builds around thirty-five to forty seconds. And the logs confirm the cache is working:

```
4:54:07 PM: running pdfs data file
4:54:07 PM: pdf source input a-midsummer-nights-dream_PDF_FolgerShakespeare.pdf
4:54:07 PM: cached_file location ./scanned_pdfs/a-midsummer-nights-dream_PDF_FolgerShakespeare.json
4:54:07 PM: The cached file DOES exist.
4:54:07 PM: pdf source input alls-well-that-ends-well_PDF_FolgerShakespeare.pdf
4:54:07 PM: cached_file location ./scanned_pdfs/alls-well-that-ends-well_PDF_FolgerShakespeare.json
4:54:07 PM: The cached file DOES exist.
4:54:07 PM: Creating deploy upload records
4:54:07 PM: pdf source input antony-and-cleopatra_PDF_FolgerShakespeare.pdf
4:54:07 PM: cached_file location ./scanned_pdfs/antony-and-cleopatra_PDF_FolgerShakespeare.json
4:54:07 PM: The cached file DOES exist.
```

## It Just Works 

I'm always happy when things just work and work well, and honestly this is a super powerful plugin for such little work to enable it. I do find it surprising that it isn't simply a setting in your Netlify site admin, but maybe it isn't something a majority of people need. If you want to see my live site (I probably won't update it again, sorry :), you can find it here: <https://cache-test-camden.netlify.app/>. The repo may be found here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/cache_test>

Photo by <a href="https://unsplash.com/@jglauser8?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">josh Glauser</a> on <a href="https://unsplash.com/s/photos/cache?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  