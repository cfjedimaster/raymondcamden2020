// Imports the Google Analytics Data API client library.
const {BetaAnalyticsDataClient} = require('@google-analytics/data');


// Using a default constructor instructs the client to use the credentials
// specified in GOOGLE_APPLICATION_CREDENTIALS environment variable.
const credentials = JSON.parse(process.env.GOOGLE_GA_CREDS);
const propertyId = process.env.GOOGLE_GA_PROPERTY;

const analyticsDataClient = new BetaAnalyticsDataClient({credentials});

const handler = async (event) => {
  try {


    let path = event.queryStringParameters.path;
    let views = await getPageViews(propertyId, path);

    return {
      statusCode: 200,
      body: JSON.stringify({ views }),
      // // more keys you can return:
      // headers: { "headerName": "headerValue", ... },
      // isBase64Encoded: true,
    }
  } catch (error) {
    return { statusCode: 500, body: error.toString() }
  }
}

async function getPageViews(propertyId,url) {

  // year there is a bit arbitrary, I set up my GA4 account a year ago
	const [response] = await analyticsDataClient.runReport({
		property: `properties/${propertyId}`,
		dateRanges: [
			{
				startDate: '2015-12-01',
				endDate: 'today',
			},
		],
		dimensions: [
			{
				name: 'date'
			},
			{
				name:'fullPageUrl'
			}
		],
		metrics: [
			{
				name: 'screenPageViews',
			},
		],
		dimensionFilter: 
			{
				"filter": {
					"fieldName":"fullPageUrl",
					"stringFilter": {
						"matchType":"EXACT",
						"value":url
					}
				}
			},
		orderBys:[
			{
				dimension:{
					dimensionName:"date"
				}
			}
		]
			
	});

	let total = response.rows.reduce( (prev, curr)  => {
		return prev + parseInt(curr.metricValues[0].value,0);
	}, 0);

	return total;

}

module.exports = { handler }
