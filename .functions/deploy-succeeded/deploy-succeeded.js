const SG_KEY = process.env.SENDGRID;

const helper = require('sendgrid').mail;

exports.handler = async (event, context) => {
  try {

    console.log('deploy succeeded run!');
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
${msg.description}
        `;
      });
    }

    console.log('this is my body: '+body);
    await sendEmail(body, 'Netlify Build Succeeded', 'raymondcamden@gmail.com', 'raymondcamden@gmail.com');

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
