/*
My code for successful deploys now consists of two main actions. Send me a nicer email and update my Algolia index.
*/

const algCredentials = { appId: process.env.ALG_APP_ID, apiKey: process.env.ALG_API_KEY, indexName: 'raymondcamden' };

const SG_KEY = process.env.SENDGRID;
const helper = require('sendgrid').mail;

const fetch = require('node-fetch');

exports.handler = async (event, context) => {


  try {


    /// HANDLE ALOGLIA
    // first, get my index
    let dataResp = await fetch('https://www.raymondcamden.com/algolia.json');

    let data = await dataResp.json();
    console.log('Successfully got the data, size of articles '+data.length, data[0].title);

    let host = `https://${algCredentials.appId}.algolia.net`;

    //first clear
    let resp = await fetch(host + `/1/indexes/${algCredentials.indexName}/clear`, {
      method:'POST',
      headers: {
        'X-Algolia-Application-Id':algCredentials.appId,
        'X-Algolia-API-Key':algCredentials.apiKey
      }
    });
    let result = await resp.json();
    console.log('clear result is '+JSON.stringify(result));

    let batch = {
      "requests":[]
    };

    data.forEach(d => {
      /*
      define an objectID for Algolia
      */
      d.objectID = d.url;
      batch.requests.push({
        'action':'updateObject',
        'body':d
      })
    });
    console.log('batch data done');
    
    //then batch
    try {
      resp = await fetch(host + `/1/indexes/${algCredentials.indexName}/batch`, {
        method:'POST',
        body: JSON.stringify(batch),
        headers: {
          'X-Algolia-Application-Id':algCredentials.appId,
          'X-Algolia-API-Key':algCredentials.apiKey
        }
      });
    } catch(e) {
      console.log('Error returned when doing the batch.');
      console.log(JSON.stringify(e));
      return;
    }

    result = await resp.json();
    if(result.objectIDs) console.log(`i had ${result.objectIDs.length} objects added`);

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
    console.log('error handler for function ran', err.toString());
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
