/*
Simple replacement for formSpree
*/
const SG_KEY = process.env.SENDGRID;
const helper = require('sendgrid').mail;

// Docs on event and context https://www.netlify.com/docs/functions/#the-handler-method
const handler = async (event) => {
  try {
    let body = JSON.parse(event.body);

    let mailText = `
Blog Contact Form:
------------------------------

From: ${body.name} (${body.email})
Comments:

${body.comments}
    `;

    await sendEmail(mailText, `Blog Contact Form (${body.email})`, body.email, 'raymondcamden@gmail.com');
    return {
      statusCode: 200, 
      body: 'done'
    }
  } catch (error) {
    console.log(error);
    return { statusCode: 500, body: error.toString() }
  }
}

module.exports = { handler }

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
