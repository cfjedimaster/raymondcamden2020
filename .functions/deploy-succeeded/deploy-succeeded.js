/*
My code for successful deploys now consists of two main actions. Send me a nicer email and update my Algolia index.
*/

const indexing = require('algolia-indexing');
const algCredentials = { appId: process.eng.ALG_APP_ID, apiKey: process.ALG_API_KEY, indexName: 'raymondcamden' };

const SG_KEY = process.env.SENDGRID;
const helper = require('sendgrid').mail;

const fetch = require('node-fetch');

exports.handler = async (event, context) => {
  try {

    console.log('deploy succeeded run!');

    /// HANDLE EMAIL
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

  } catch (err) {
    console.log('error handler for function ran', err.toString());
    return { statusCode: 500, body: err.toString() }
  }

  /// HANDLE ALOGLIA
  // first, get my index
  let dataResp = await fetch('https://www.raymondcamden.com/algolia.json');
  let data = await dataResp.json();
  console.log('Successfully got the data, size of articles '+data.length);

  const settings = { };
  await indexing.fullAtomic(algCredentials, data, settings);
  console.log('Algolia indexing updated. Hopefully.');

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
