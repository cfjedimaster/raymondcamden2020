const xmlFiltersPlugin = require('eleventy-xml-plugin');

module.exports = function(eleventyConfig) {

  eleventyConfig.addPlugin(xmlFiltersPlugin);

	eleventyConfig.addPassthroughCopy("css");
	eleventyConfig.addPassthroughCopy("js");
	eleventyConfig.addPassthroughCopy("images");
	eleventyConfig.addPassthroughCopy("fonts");
	eleventyConfig.addPassthroughCopy("./manifest.json");
	eleventyConfig.addPassthroughCopy("./favicon.ico");
	eleventyConfig.addPassthroughCopy("./robots.txt");
	eleventyConfig.addPassthroughCopy("./_redirects");
	eleventyConfig.addPassthroughCopy("./*.png");

	//reference: https://github.com/11ty/eleventy/issues/179#issuecomment-413119342
	eleventyConfig.addShortcode('excerpt', post => extractExcerpt(post));

  eleventyConfig.addFilter('myEscape', s => {
    return s.replace(/ /g, '+');
  });

  eleventyConfig.addFilter('my_xml_escape', s => {
    return s.replace(/&/g, '&amp;')
      .replace(/</g, '&lt;')
      .replace(/>/g, '&gt;')
      .replace(/"/g, '&quot;')
      .replace(/'/g, '&apos;');
  });

  eleventyConfig.addFilter('getByCategory', (posts,cat) => {
    let results = [];

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
    // https://stackoverflow.com/a/196991/52160
    return str.replace(
      /\w\S*/g,
      function(txt) {
        return txt.charAt(0).toUpperCase() + txt.substr(1).toLowerCase();
      }
    );
  });

	// reverse isn't supported in 11 liquid?
	eleventyConfig.addFilter("reverse", a => a.slice().reverse() );

	eleventyConfig.addCollection("posts", collection => {
   let posts = collection.getFilteredByGlob("_posts/**/*.md");

		for(let i=0;i<posts.length;i++) {
			posts[i].data.permalink += '.html';
      posts[i].outputPath += '/index.html';
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


};

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
  return content.substring(0, excerptEnd).trim();
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