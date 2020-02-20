module.exports = function(eleventyConfig) {

	eleventyConfig.addPassthroughCopy("css");
	eleventyConfig.addPassthroughCopy("js");
	eleventyConfig.addPassthroughCopy("images");
	eleventyConfig.addPassthroughCopy("fonts");
	eleventyConfig.addPassthroughCopy("./manifest.json");

	//reference: https://github.com/11ty/eleventy/issues/179#issuecomment-413119342
	eleventyConfig.addShortcode('excerpt', post => extractExcerpt(post));

  eleventyConfig.addFilter('postCategories', collections => {
    let cats = new Set();

    for(let page of collections.posts) {
      for(let cat of page.data.categories) {
        cats.add(cat);
      }
    }
    return Array.from(cats).sort();
  });

	eleventyConfig.addFilter('postTags', collections => {
    	let tags = [];

      for(let tag in collections) {
        if(tag !== 'all' && tag !== 'posts') tags.push(tag);
	    }
      return tags.sort();
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