const xmlFiltersPlugin = require('eleventy-xml-plugin');
const htmlmin = require("html-minifier");
const fs = require('fs');

module.exports = function(eleventyConfig) {
  
  eleventyConfig.addPlugin(xmlFiltersPlugin);

	eleventyConfig.addPassthroughCopy("css");
	eleventyConfig.addPassthroughCopy("js");
	eleventyConfig.addPassthroughCopy("images");
	eleventyConfig.addPassthroughCopy("fonts");
	eleventyConfig.addPassthroughCopy("./manifest.json");
	eleventyConfig.addPassthroughCopy("./favicon.ico");
	eleventyConfig.addPassthroughCopy("./robots.txt");
	eleventyConfig.addPassthroughCopy("./ads.txt");
	eleventyConfig.addPassthroughCopy("./_redirects");
	eleventyConfig.addPassthroughCopy("./*.png");
	eleventyConfig.addPassthroughCopy("./service-worker.js");

  eleventyConfig.setServerPassthroughCopyBehavior("copy");
  
  eleventyConfig.setQuietMode(true);
  
	//reference: https://github.com/11ty/eleventy/issues/179#issuecomment-413119342
	eleventyConfig.addShortcode('excerpt', post => extractExcerpt(post));

  let titlePostCache = {};
  eleventyConfig.addFilter('toTitle', (p, posts) => {
    if(titlePostCache[p]) return titlePostCache[p];
    //console.log('toTitle for '+p+'\n', JSON.stringify(titlePostCache));
    for(let i=0;i<posts.length;i++) {
      if(posts[i].url == p) {
        titlePostCache[p] = { title: posts[i].data.title, date: posts[i].date};
        return titlePostCache[p];
      }
    }
    // cache that we couldn't match
    titlePostCache[p] = { title: ''};
    return titlePostCache[p];
  });

  eleventyConfig.addFilter('myEscape', s => {
    return s.replace(/ /g, '+');
  });

  eleventyConfig.addFilter('my_xml_escape', s => {
    if(!s) return;
    return s.replace(/&/g, '&amp;')
      .replace(/</g, '&lt;')
      .replace(/>/g, '&gt;')
      .replace(/"/g, '&quot;')
      .replace(/'/g, '&apos;')
      .replace(/\n/g, '')
      .replace(/data-src/g,'src');
  });

  eleventyConfig.addFilter('getByCategory', (posts,cat) => {
    let results = [];

    // handle case issues I'm having
    cat = cat.toLowerCase();
    for(let post of posts) {
      if(post.data.categories.indexOf(cat) >= 0) results.push(post);
    }
    return results.reverse();
  });

  let postCats = [];
  eleventyConfig.addFilter('postCategories', collections => {
    if(postCats.length > 0) return postCats;
    let cats = new Set();

    for(let page of collections.posts) {
      for(let cat of page.data.categories) {
        cat = cat.toLowerCase();
        cats.add(cat);
      }
    }
    postCats = Array.from(cats).sort();
    return postCats;
  });

  let postTags = [];
	eleventyConfig.addFilter('postTags', collections => {
      if(postTags.length > 0) return postTags;
    	let tags = [];
      for(let tag in collections) {
        if(tag !== 'all' && tag !== 'posts' && tag !== 'categories') tags.push(tag);
      }
      postTags = tags.sort();
      return postTags;
  });

  eleventyConfig.addFilter('titlecase', str => {
    if(!str) return;
    // https://stackoverflow.com/a/196991/52160
    // modified 11/2/2021 to no longer lowercase the rest
    return str.replace(
      /\w\S*/g,
      function(txt) {
        return txt.charAt(0).toUpperCase() + txt.substr(1);
      }
    );
  });

  eleventyConfig.addFilter('fixcattag', str => {
    if(!str) return;
    if(str === 'coldfusion') return 'ColdFusion';
    if(str === 'javascript') return 'JavaScript';
    if(str === 'jquery') return 'jQuery';
    if(str === 'pdf services') return 'PDF Services';
    return str;
  });

  eleventyConfig.addFilter('jsonify', function (variable) {
    return JSON.stringify(variable);
  });

  // Remove <code>.*</code>, remove HTML, then with plain text, limit to 5k chars
  eleventyConfig.addFilter('algExcerpt', function (text) {
    //first remove code
    text = text.replace(/<code class="language-.*?">.*?<\/code>/sg, '');
    //now remove html tags
    text = text.replace(/<.*?>/g, '');
    //now limit to 5k
    return text.substring(0,5000);
  });

  /*
  My posts have categories and tags. This filter returns a joined list of em
  */
  eleventyConfig.addFilter('catTagList', p => {
    /*
      Can't use this:
        return p.data.categories.concat(p.data.tags);
      Because I need to know category vs tag for proper linking
    */
    let result = [];
    for(let i=0; i<p.data.categories.length; i++) {
      result.push({
        name: p.data.categories[i],
        url: '/categories/'+eleventyConfig.getFilter('myEscape')(p.data.categories[i])
      });
    }
    for(let i=0; i<p.data.tags.length; i++) {
      result.push({
        name: p.data.tags[i],
        url: '/tags/'+eleventyConfig.getFilter('myEscape')(p.data.tags[i])
      });
    }

    return result;
  });

  eleventyConfig.addFilter('ageInDays', d => {
    let date = new Date(d);
    let now = new Date();
    let diff = now.getTime() - date.getTime();
    let day_diff = Math.floor(diff / (1000 * 3600 * 24)); 
    return day_diff;
  });

	eleventyConfig.addCollection("posts", collection => {
   let posts = collection.getFilteredByGlob("_posts/**/*.md");

		for(let i=0;i<posts.length;i++) {
			posts[i].data.permalink += '.html';
      posts[i].outputPath += '/index.html';
      // fix cats here
      posts[i].data.categories = posts[i].data.categories.map(c => c.toLowerCase())
		}

		return posts;
	});

  /*
  yes, this duplicates the code above, but the addCollection API requires you to return data about
  one collection at a time. As I want to use this data in pagination later, I think this is my only
  choice
  */
  eleventyConfig.addCollection("categories", collection => {
    let cats = new Set();
		let posts = collection.getFilteredByGlob("_posts/**/*.md");
		for(let i=0;i<posts.length;i++) {
      for(let x=0;x<posts[i].data.categories.length;x++) {
        cats.add(posts[i].data.categories[x].toLowerCase());
      }
		}

		return Array.from(cats).sort();
	});

  eleventyConfig.addTransform("htmlmin", function(content, outputPath) {
    if(process.env.CI && outputPath.endsWith(".html") ) {
      let minified = htmlmin.minify(content, {
        useShortDoctype: true,
        removeComments: true,
        collapseWhitespace: true
      });
      return minified;
    }

    return content;
  });


  eleventyConfig.addShortcode("hasAnyComments", function(e, old) {
    return getCommentText(e,old) !== '';
  });

  eleventyConfig.addShortcode("commentInclude", function(e, old) {
    return getCommentText(e,old);
  });

  eleventyConfig.addGlobalData("isLocal", () => {
    return process.env.ISLOCAL?true:false;
  });

  // Testing new layout
  /*
  let includes = '_includes';
  if(process.env.NEWTHEME) {
    includes = 'theme';
    eleventyConfig.ignores.add('_includes');
  } else eleventyConfig.ignores.add('theme');
  */

  let includes = 'theme';
  eleventyConfig.ignores.add('_includes');
  
  return {
    dir: {
      includes
    }
  }

};

/*
I support hasAnyComments and commentInclude. I take the logic of trying to load
old comment html. I return either the html or a blank string
*/
function getCommentText(path, old) {
    path = './_includes/comments'+path+'.inc';
    let oldpath = '';
    if(old) oldpath = './_includes/comments' + old.replace('http://www.raymondcamden.com','') + '.inc';
    if(fs.existsSync(path)) {
      return fs.readFileSync(path,'utf-8');
    } else if(old && fs.existsSync(oldpath)) {
      return fs.readFileSync(oldpath,'utf-8');
    } else {
      return '';
    }
}

const excerptMinimumLength = 140;
const excerptSeparator = '<!--more-->';

/**
 * Extracts the excerpt from a document.
 *
 * @param {*} doc A real big object full of all sorts of information about a document.
 * @returns {String} the excerpt.
 */
function extractExcerpt(doc) {
  if (!doc.hasOwnProperty('templateContent')) {
    console.warn('Failed to extract excerpt: Document has no property `templateContent`.');
    return;
  }

  const content = doc.templateContent;
  if (content.includes(excerptSeparator)) {
    return content.substring(0, content.indexOf(excerptSeparator)).trim();
  }
  else if (content.length <= excerptMinimumLength) {
    return content.trim();
  }

  const excerptEnd = findExcerptEnd(content);
  /*
  Modified 11/4/2021 to remove <p></p> as it conflicts with CSS used to display ...
  */
  return content.substring(0, excerptEnd).trim().replace('<p>', '').replace('</p>','');
}

/**
 * Finds the end position of the excerpt of a given piece of content.
 * This should only be used when there is no excerpt marker in the content (e.g. no `<!--more-->`).
 *
 * @param {String} content The full text of a piece of content (e.g. a blog post)
 * @param {Number?} skipLength Amount of characters to skip before starting to look for a `</p>`
 * tag. This is used when calling this method recursively.
 * @returns {Number} the end position of the excerpt
 */
function findExcerptEnd(content, skipLength = 0) {
  if (content === '') {
    return 0;
  }

  const paragraphEnd = content.indexOf('</p>', skipLength) + 4;

  if (paragraphEnd < excerptMinimumLength) {
    return paragraphEnd + findExcerptEnd(content.substring(paragraphEnd), paragraphEnd);
  }

  return paragraphEnd;
}