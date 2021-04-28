	
const axios = require('axios');
var crypto = require('crypto');

const listId = 'f42e299fb2';
const apiRoot = `https://us1.api.mailchimp.com/3.0/lists/${listId}/members/`;

const handler = async (event) => {
	try {

		const email = event.queryStringParameters.email;
		if (!email) {
			return {
				statusCode: 500,
				body: 'email query paramter required'
			};
		}


		// https://gist.github.com/kitek/1579117
		let emailhash = crypto.createHash('md5').update(email).digest('hex');

		return axios({
				method: 'put',
				url: apiRoot + emailhash,
				data: {
					email_address: email,
					status: 'subscribed',
					merge_fields: {
						tag:'blog'
					}
				},
				auth: {
					'username': 'anythingreally',
					'password': process.env.MC_API
				}
			}).then(res => {
				return {
					statusCode: 200,
					body: JSON.stringify(res.data)
				}
			})
			.catch(err => {
				console.log('returning from here', err.response.data.detail);
				return {
					statusCode: 500,
					body: JSON.stringify(err.response.data)
				};
			});

	} catch (error) {
		return { statusCode: 500, body: error.toString() }
	}
}

module.exports = { handler }

