module.exports = function(eleventyConfig) {

	eleventyConfig.addPassthroughCopy("css");
	eleventyConfig.addPassthroughCopy("js");
	eleventyConfig.addPassthroughCopy("images");
	eleventyConfig.addPassthroughCopy("fonts");

	eleventyConfig.addCollection("posts", collection => {
		let foo = collection.getFilteredByGlob("_posts/**/*.md");
		//console.log(foo[0]);
		for(let i=0;i<foo.length;i++) {
			foo[i].data.permalink += '.html';
			foo[i].outputPath += '/index.html';
		}

		return foo;
//		return collection.getFilteredByGlob("_posts/**/*.md");
	});
}