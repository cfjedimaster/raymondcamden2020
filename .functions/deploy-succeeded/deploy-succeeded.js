/*
My code for successful deploys now consists of two main actions. Send me a nicer email and update my Algolia index.
*/

const algCredentials = { appId: process.env.ALG_APP_ID, apiKey: process.env.ALG_API_KEY, indexName: 'raymondcamden' };

const SG_KEY = process.env.SENDGRID;
const helper = require('sendgrid').mail;

const fetch = require('node-fetch');

const algoliaSearch = require('algoliasearch');
const algolia = algoliaSearch(algCredentials.appId, algCredentials.apiKey);
const index = algolia.initIndex(algCredentials.indexName);

exports.handler = async (event, context) => {


  try {


    /// HANDLE ALOGLIA
    // first, get my index
    let dataResp = await fetch('https://www.raymondcamden.com/algolia.json');

    let data = await dataResp.json();
    console.log('Successfully got the data, size of articles '+data.length, data[0].title);

    //first clear 

    console.log('Try to clear Algolia index');
    let clearResult = await index.clearObjects().wait();
    console.log('clearResult', clearResult);

    let requests = [];

    data.forEach(d => {
      /*
      define an objectID for Algolia
      */
      d.objectID = d.url;
      requests.push({
        'action':'updateObject',
        'body':d
      })
    });
    console.log('Batch data object created to add to Algolia index');
    
    let batchResult = await index.batch(requests);
    console.log('Request to batch index fired, not waiting, good luck');


    /// HANDLE EMAIL (if sent)
    if(event && event.body) {
      let pubData = JSON.parse(event.body).payload;
      let body = `
Deploy Succeeded for ${pubData.name} (${pubData.url})

Build Title: ${pubData.title}
Finished:    ${pubData.published_at}
Duration:    ${toMinutes(pubData.deploy_time)}
    `;

      if(pubData.summary && pubData.summary.messages) {
        body += `
  Messages:`;
        pubData.summary.messages.forEach(msg => {
          body += `

  [${msg.type}] ${msg.title}
  ${msg.description}`;
        });
      }

      await sendEmail(body, 'Netlify Build Succeeded', 'raymondcamden@gmail.com', 'raymondcamden@gmail.com');
    }

    return { statusCode: 200, body: 'I\'m done with this shit...' }

  } catch (err) {
    console.log('error handler for function ran', JSON.stringify(err.message));
    return { statusCode: 500, body: err.toString() }
  }

}

function toMinutes(s) {
	if(s < 60) return `${s} seconds`;
	let minutes = (s - (s % 60)) / 60;
	return `${minutes}m ${s%60}s`;
}

async function sendEmail(body, subject, from, to) {
  let mailContent = new helper.Content('text/plain', body);
  let from_email = new helper.Email(from);
  let to_email = new helper.Email(to);
  let mail = new helper.Mail(from_email, subject, to_email, mailContent);
  let sg = require('sendgrid')(SG_KEY);

  let request = sg.emptyRequest({
    method: 'POST',
    path: '/v3/mail/send',
    body: mail.toJSON()
  });

  return new Promise((resolve, reject) => {
    sg.API(request, function(error, response) {
      resolve(true);
      if(error) {
        console.log('oh oh error in API');
        console.log(JSON.stringify(error.response));
        reject(error.response.body);
      }
    });
  });
}
