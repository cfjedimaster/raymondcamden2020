const SG_KEY = process.env.SENDGRID;

const helper = require('sendgrid').mail;

exports.handler = async (event, context) => {
  try {

    console.log('deploy succeeded run!');
    let pubData = JSON.parse(event.body).payload;
    let body = `
Deploy Succeeded for ${pubData.name}

    `;
    console.log('this is my body: '+body);
    sendEmail(body, 'Netlify Build Succeeded', 'raymondcamden@gmail.com', 'raymondcamden@gmail.com');

  } catch (err) {
    console.log('error handler for function ran', err.toString());
    return { statusCode: 500, body: err.toString() }
  }
}

function sendEmail(body, subject, from_email, to_email) {
  console.log('in send mail');
  let mailContent = new helper.Content('text/plain', body);
  let mail = new helper.Mail(from_email, subject, to_email, mailContent);
  let sg = require('sendgrid')(SG_KEY);
  console.log('got an sg object');

  let request = sg.emptyRequest({
    method: 'POST',
    path: '/v3/mail/send',
    body: mail.toJSON()
  });

  console.log('got a request ob');

  try {
    console.log('in try');
    sg.API(request, function(error, response) {
      console.log('in API ok handler i think');
      if(error) {
        console.log('oh oh error in API');
        console.log(error.response.body);
      }
    });
  } catch(e) {
    console.log('ok got an error in try catch', e.toString());
  }
}