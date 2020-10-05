/*
built this to support a popular blog post cuz myjson.com went down 
may make it cooler later - probably not
*/

const cats = [
{"name":"Fluffy", "age":9, "breed":"calico", "gender":"male"},
{"name":"Luna", "age":10, "breed":"long hair", "gender":"female"},
{"name":"Cracker", "age":8, "breed":"fat", "gender":"male"},
{"name":"Pig", "age":6, "breed":"calico", "gender":"female"},
{"name":"Robin", "age":7, "breed":"long hair", "gender":"male"},
{"name":"Sammy", "age":13, "breed":"fat", "gender":"male"},
{"name":"Aliece", "age":9, "breed":"long hair", "gender":"female"},
{"name":"Mehatable", "age":5, "breed":"calico", "gender":"female"},
{"name":"Scorpia", "age":6, "breed":"long hair", "gender":"female"},
{"name":"Zoomies", "age":1, "breed":"fat", "gender":"male"},
];

exports.handler = async (event, context) => {
  try {
    return {
      statusCode: 200,
      body: JSON.stringify(cats),
    }
  } catch (err) {
    return { statusCode: 500, body: err.toString() }
  }
}
