// Docs on event and context https://www.netlify.com/docs/functions/#the-handler-method
exports.handler = async (event, context) => {
  try {
    console.log('build result');
    console.log(JSON.stringify(event, null, '\t'));
  } catch (err) {
    return { statusCode: 500, body: err.toString() }
  }
}
