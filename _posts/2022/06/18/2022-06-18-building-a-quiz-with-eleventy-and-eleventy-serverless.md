---
layout: post
title: "Building a Quiz with Eleventy and Eleventy Serverless"
date: "2022-06-18T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/quiz.jpg
permalink: /2022/06/18/building-a-quiz-with-eleventy-and-eleventy-serverless
description: How I built an Eleventy site driven by dynamic quiz data.
---

A few days ago, I was thinking about what a "quiz" would look like in [Eleventy](https://www.11ty.dev/). I put that in quotes because there's a lot of different ways you can think of quizzes and how they're built. For my demo, I set my list of features to the following:

* I defined a quiz as a set of questions. Each question has a right answer.
* Quizzes would be defined in JSON, letting you add new quizzes by simply dropping in a data file. In the "real world", I think you could imagine a user friendly editor that uses the web to add/edit/delete quiz data with JSON files being how they are persisted. Or heck, store them in a database and have a process to export the tabular data into JSON.
* While a quiz could be done in client-side JavaScript, I wanted a non-JavaScript, pure HTML approach. So our quiz will simply display the list of questions, submit to an [Eleventy Serverless](https://www.11ty.dev/docs/plugins/serverless/) process, and return the result. 
* A quiz is essentially a form, and building a "dynamic form renderer" can be the very definition of going down the rabbit hole. To keep things simple, I decided to support single choice questions, multiple choice questions, and true/false questions. No branching or conditional logic, just three types of questions.

With that in mind, let's me describe what I built.

## Defining Quizzes

As I said above, I went with a pretty simple quiz setup in terms of what I supported. There's three type of questions only: single choice, multiple choice, and true/false. A quiz should have a name and description, to help define itself, and then a list of questions. Here's an example quiz, built in JSON:

```json
{
	"name":"Alpha",
	"description":"A quiz on understanding alpha.",
	"questions":[
		{
			"text":"What is the meaning of life?",
			"answers":[
				"42",
				"21",
				"beer"
			],
			"correctAnswer":0
		},
		{
			"text":"What is question two?",
			"type":"multiple",
			"answers":[
				"moon",
				"sun",
				"stars"
			],
			"correctAnswer":[0,1]
		},

		{
			"text":"Is Eleventy awesome?",
			"type":"truefalse",
			"correctAnswer":true
		}

	]
}
```

Each question must have a text value at minimum. The `type` value defaults to `single` so it can be left off. Each question, except for "true/false" types, have an array of answers. Finally we use `correctAnswer` to define the right answer for the question. Note that for `multiple`, this is an array. (Although you could have an array of one item.) 

In order to keep the quizzes separate from the rest of the site in terms of file structure, I made a folder named `quizzes` and dropped a few json files in there.

## Loading Quizzes

With a format defined for creating quizzes, how do we load them? I created a `_data` file named `quizzes.js`:

```js
const fs = require('fs');

const inputDir = './quizzes';

module.exports = function() {

	let quizzes = [];
	let files = fs.readdirSync(inputDir);

	files.forEach(f => {
		if(f.split('.').pop() === 'json') {

			let contents = JSON.parse(fs.readFileSync(inputDir + '/' + f, 'utf8'));
			// todo: Validate contents - perhaps via JSON schema?
			/*
			One thing we can do now, we let people leave off type for "single" questions as
			they will be the most common, but easier outside of here to specify. So let's fix it.
			*/
			contents.questions.forEach(q => {
				if(!q.type) q.type = "single";
			});
			quizzes.push(contents);
		}
	});

	return quizzes;
}
```

From top to bottom - you can see it begins by reading my directory of quizzes. It reads each in and parses the JSON. As stated in the comments, this would be an *excellent* place to make use of [JSON Schema](https://json-schema.org/). Not only would this let me provide code hinting for editing quizzes (although like I said, I'd imagine a web-based editor for non-technical users), it would let me validate quizzes before trying to load them. 

My code does one small bit of manipulation and handles the default value of `single` when `type` is not defined for questions. 

At the end, I've now got a `quizzes` object available in data. 

## Rendering Quizzes

Ok, this is the complex part. Even with keeping my quizzes to three different types of questions, it's still requires a bit of code to handle it. I used Eleventy's [pagination](https://www.11ty.dev/docs/pages-from-data/) feature to render one page per quiz:

```html
{% raw %}---
pagination:
    data: quizzes
    size: 1
    alias: quiz
permalink: "quiz/{{ quiz.name | slugify }}/"
eleventyComputed:
    title: "{{quiz.name}}"
layout: main
---

<h2>Quiz: {{ quiz.name }}</h2>
<p>
{{ quiz.description }} 
</p>

<form method="get" action="/submitQuiz/">
<input type="hidden" name="quiz" value="{{ quiz.name | slugify }}">
{% for question in quiz.questions %}
	<h3>{{ forloop.index }}. {{ question.text }}</h3>

	{% assign qindex = forloop.index %}

	{% if question.type == "single" %}

		<p>
		{% for answer in question.answers %}
		<input type="radio" name="q{{qindex}}" id="q{{qindex}}_{{forloop.index}}" value="{{forloop.index}}" > 
		<label for="q{{qindex}}_{{forloop.index}}">{{ answer }}</label><br/>
		{% endfor %}
		</p>

	{% elsif question.type == "multiple" %}

		<p>
		{% for answer in question.answers %}
		<input type="checkbox" name="q{{qindex}}" id="q{{qindex}}_{{forloop.index}}" value="{{forloop.index}}">
		<label for="q{{qindex}}_{{forloop.index}}">{{ answer }}</label><br/>
		{% endfor %}
		</p>
		

	{% elsif question.type == "truefalse" %}

		<p>
		<input type="radio" name="q{{qindex}}" id="q{{qindex}}_0" value="true"> 
		<label for="q{{qindex}}_0">True</label><br/>
		<input type="radio" name="q{{qindex}}" id="q{{qindex}}_1" value="false"> 
		<label for="q{{qindex}}_1">False</label><br/>
		</p>

	{% endif %}

{% endfor %}

<p>
<input type="submit" value="Submit Answers">
</p>

</form>{% endraw %}
```

From the top, I specify that for each item in my `quizzes` data array I should have one unique file. The path is based on the quizzes name, passed through the `slugify` filter. Notice my form is submitting to `submitQuiz` which I'll cover next. Also note I specify `method="get"`. This is required as Netlify Serverless functions don't get POST parameters (note - I'm double checking that and I may be wrong). 

Inside the form, I loop over each question. This is where the real complexity is. I begin by getting the current loop index. I need this so I can "name" my questions in the form. You will see each one is named `q{% raw %}{{qIndex}}{% endraw %}` which will output to `q1`, `q2`, and so forth. 

I then give a unique ID value to each answer. This is based on the question name and the index of each answer. So for example, the first one would be `q1_1`. I do this so I can assign a label for each answer. (I only recently discovered that you can skip `for` if you  wrap the field and text in `<label>` tags. I probably would have done that to keep things simpler.) For each answer, I output the dynamic text. Finally, the "true/false" one is a bit more static as the answers aren't dynamic. 

Here's my initial quiz displays:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/06/q1.jpg" alt="Quiz display" class="lazyload imgborder imgcenter">
</p>

## Checking Quizzes

The final step involves taking the user input and checking how well they did. If you remember from above, my quiz points to `/submitQuiz/`. For that, I'm going to use an Eleventy Serverless function. (If you need a refresher on how it works, check the [core docs](https://www.11ty.dev/docs/plugins/serverless/) as well as my [introduction](https://www.raymondcamden.com/2021/12/04/eleventy-10-the-serverless-plugin).) 

I followed the directions to scaffold Eleventy Serverless support and then built my template:

```html
{% raw %}---
layout: main
permalink:
    serverless: /submitQuiz/
---


{% assign results = eleventy.serverless.query | checkQuiz: quizzes %}

<h2>Quiz: {{ results.quizName }}</h2>

<p>
Out of {{ results.totalQuestions }} questions, you got {{ results.correct }} answers correct. 
That's a percentage of {{ results.percentage }}. 
</p>

{% if results.percentage > 80 %}
<p>
<strong>Congrats on a great score!</strong>
</p>
{% endif %}{% endraw %}
```

It's rather short because most of the logic is done elsewhere. Eleventy Serverless templates have access to the query string, which based on the form, would look like so:

```
http://localhost:42357/submitQuiz/?quiz=alpha&q1=3&q2=1&q2=2&q3=true
```

I've got the name of the quiz (slugified) and the answers. Note that for a multiple choice option, the question name is repeated. That's going to be important in a second.

To get the results, I pass the query object as well as my quizzes to a filter named `checkQuiz`. That's where all the real work is done It returns the total number of questions for the quiz, how much you got right, and a percentage. (Which could have been done in the template, but I figured I'd be nice and do it for you.) 

Finally I add a little congratulatory message if you score well. Let's take a look at that filter:

```js
eleventyConfig.addFilter('checkQuiz', (submission, quizzes) => {
	/*
	submission is the query string from the submitted quiz, it needs to have name at minimum
	*/
	// first, match up the slugged name to our quizes
	let quiz = quizzes.find(q => {
		if(eleventyConfig.getFilter('slugify')(q.name) === submission.quiz) return true;
		return false;
	});
	let correct = 0;
	quiz.questions.forEach((question,idx) => {
		/*
		validate based on type

		note that the html uses a 1 based index, json data for quiz is 0 based
		1 based index is used for answers, so q1 is for question 0
		*/
		let myanswer = '';
		if(submission['q' + (idx + 1)]) {
			myanswer = submission['q' + (idx + 1)];
		}

		if(question.type === "single") {
			if(question.correctAnswer === myanswer-1) correct++;
		} else if(question.type === "multiple") {
			/*
			myanswer will either be an empty string or a list: X,Y. can't assume order
			will be right, so basically: length of items of MY answer must match length of correct, 
			and every item in the correct list must exist in my list

			correction: when Eleventy parses the query string, q2=X&q2=Y, we get: X, Y (see the space)?
			*/
			if(myanswer !== '') {
				let myanswers = myanswer.split(',').map(a => parseInt(a.trim(),10)-1);

				if(myanswers.length === question.correctAnswer.length) {
					let good = true;
					question.correctAnswer.forEach(ca => {
						if(myanswers.indexOf(ca) === -1) good = false;
					});

					if(good) correct++;
				}
			} 
		} else if(question.type === "truefalse") {
			// change my string bool to a real one
			myanswer = (myanswer === 'true');
			if(question.correctAnswer == myanswer) correct++;
		}
	});

	/*
	So for now, we just return an object of total questions and your result. I will also do the percentage
	for you.
	*/
	let result = {
		quizName: quiz.name,
		correct, 
		totalQuestions: quiz.questions.length,
		percentage: parseInt(correct/quiz.questions.length * 100,10)
	};

	return result;
});
```

I begin by taking the name of the quiz provided in the query string and finding the quiz "object" in my data. This is how I'll grade the results. 

Once I have that, the way I check the result is based on the question type. Since it's possible for a person to *not* answer a question, I default their answer to a blank string, and then check for it in the query string. For the most part that just works, but if you look in the "multiple" branch, you see I need to do a bit of manipulation on it. 

For "single" and "true/false" questions it's each to check the result. For "multiple", I have to ensure that you pick *every* answer required.

I keep a tally of how many you get right and then return the results. Here's an example result page:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/06/q2.jpg" alt="Example quiz result" class="lazyload imgborder imgcenter">
</p>

## Wrap Up

If you want to see this in action, you can visit it here: <https://eleventyquiz.netlify.app/>. The source may be found here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/quiz>. 

While working on this blog post, I ran into an interesting issue with how I set up my code. Everything worked perfectly on my machine, and in production, I could see my quizzes, but when I submitted them, I got an error from `_data\quiz.js` saying it couldn't find the directory of quizzes. I was truly confused (and wrote about it on the Eleventy discussions board [here](https://github.com/11ty/eleventy/discussions/2444)), but the fix was simple - tell Eleventy Serverless to copy the directory:

```js
eleventyConfig.addPlugin(EleventyServerlessBundlerPlugin, {
	name: "serverless", 
	functionsDir: "./netlify/functions/",
	copy:['./quizzes']
});
```

If this doesn't make sense, just let me know!

Photo by <a href="https://unsplash.com/@nguyendhn?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Nguyen Dang Hoang Nhu</a> on <a href="https://unsplash.com/s/photos/quiz?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  