/*

Given a mastodon user, I get their RSS and return the ID of the last toot.

*/
let Parser = require('rss-parser');
let parser = new Parser();

module.exports = async (instance, user) => {

	let rssFeedURL = `https://${instance}/users/${user}.rss`;
	let feed = await parser.parseURL(rssFeedURL);
	return feed.items[0].guid.split('/').pop();
}