const fetch = require('node-fetch');

module.exports = function() {

	let token = process.env.NETLIFY_TOKEN;
	let siteId = process.env.NETLIFY_SITE_ID;
	console.log('token',token,'siteid',siteId);
	return new Promise(async (resolve, reject) => {

		let today = new Date();
		let lastWeek = new Date();
		lastWeek.setDate(today.getDate() - 7);

		let url = `https://analytics.services.netlify.com/v1/${siteId}/pages?from=${lastWeek.getTime()}&to=${today.getTime()}&timezone=-0500&limit=15`;
		
		let result = await fetch(url, {
			headers: {
				'Authorization':`Bearer ${token}`
			}
		});
		let dataOb = await result.json();

		let pages = dataOb.data.filter(d => {
			if(d.path === '/' || d.path === '/recentPosts/') return false;
			return true;
		});
		resolve(pages);

	});

};