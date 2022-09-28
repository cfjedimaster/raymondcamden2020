---
layout: post
title: "Converting Markdown Code Blocks to Gists"
date: "2022-09-28T18:00:00"
categories: ["javascript"]
tags: []
banner_image: /images/banners/notes.jpg
permalink: /2022/09/28/converting-markdown-code-blocks-to-gists
description: A script that replaces Markdown code blocks with automatically created GitHub Gists
---

File this under the "I have no freaking idea who this will be useful for" bucket, but I wrote up a script to help me with a problem concerning authoring on [Medium](https://medium.com/) and figured I'd share it. It also allowed me to play more with GitHub's APIs and that was *definitely* useful for me, so hopefully it will be useful for you. Why Medium? I'm not a fan of the platform myself, but at work, we use it for our [developer blog](https://blog.developer.adobe.com/) so I *have* to use it. In general, it's an OK platform, but one thing it doesn't do well is code blocks.

Specifically, it doesn't have support for any color coding of your code samples. For very short blocks of code that's ok, but for any reasonably sized code snippet, the lack of syntax coloring really begins to make it difficult to parse.

The "standard" solution is to make a GitHub gist, get the URL of the gist, paste it into Medium, hit enter, and it will replace the URL with an embed. That works but is really annoying. In my last post, I had 16 of these and decided I had had enough and it was time to look at an automation tool. Here's what I built.

## The First Solution

My initial attempt (which, technically worked perfectly, until it didn't, I'll explain why later) used this process:

* Find all the code blocks in a Markdown file
* For each, attempt to identify the type based on any characters after the ```. 
* For each, get the beginning and end character positions
* For all the matches, create a new Gist using a filename based on the type of code block
* For the newly created Gist, create an embed string and replace the text in Markdown

I was initially going to use GitHub's REST APIs but then discovered [octokit.js](https://github.com/octokit/octokit.js/), a utility library that makes it incredibly easy to use. 

Also, note that the code I built requires a [personal access token](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token). You can generate those quickly via GitHub's settings. When it comes time to select the scopes and permissions, just select **gist** as that's all the code demonstrated here needs. 

Alright, let's get started. First, my script takes two inputs - the location of the input markdown and the location of where it should be saved:

```js
let input = process.argv[2];
let output = process.argv[3];

if(!input || !output) {
    console.log(chalk.red('Usage: node gistify.js <<input file>> <<output file>>'));
    process.exit(1);
}

if(!fs.existsSync(input)) {
    console.log(chalk.red(`Can't find input file ${input}`));
    process.exit(1);
}

// auto remove existing output
if(fs.existsSync(output)) fs.unlinkSync(output);
```

I then read in the input file and request the code blocks:

```js
let md = fs.readFileSync(input,'utf8');
console.log(chalk.green(`Parsing ${input} to find code blocks.`));

let blocks = getCodeBlocks(md);
```

The `getCodeBlocks` function looks for code block markers (three backticks). It attempts to find a language type and it gets the range for each one:

```js
function getCodeBlocks(str) {
    let results = [];
    let blocksReg = /```(.*?)```/sg;
    let match = null;

    // https://stackoverflow.com/a/2295681/52160
    while((match = blocksReg.exec(str)) != null) {
        let result = {
            str:match[0],
            start: match.index, 
            end: match.index + match[0].length
        }

        // get line one to try to figure out type
        let line1 = result.str.split('\n')[0];
        let type = line1.replace(/[\`\r]/g,'');
        if(!type) type = 'plain';
        result.type = type;
        results.push(result);
    }
    return results;
}
```

Note that when a type is not defined, I set it to "plain". 

Once I have my result, I can check to see if any were found:

```js
if(blocks.length === 0) {
    console.log('No code blocks were found in this Markdown file. Have a nice day.');
    process.exit(1);
}

console.log(chalk.green(`We found ${blocks.length} code blocks. Beginning the Gist conversion.`));
```

Now I need to process them. I'm going to go from the last block to the first because I'm going to be modifying the file contents in a string and if I did it first to last, my ranges would be off.

```js
for(let i=blocks.length-1; i >= 0; i--) {
    let gist = await createGist(blocks[i].str, blocks[i].type);
    // we care about HTML url

    let embed = toGistEmbed(gist.html_url);
    md = md.substring(0, blocks[i].start) + embed + md.substring(blocks[i].end);
    console.log(chalk.yellow(`Processed ${blocks.length-i} on ${blocks.length}`));
}
```

Let's first look at `createGist`:

```js
async function createGist(code, type) {
    /*
    We switch type to a filename, will help with code rendering.
    Right now, just a few and yeah, I could just use file.TYPE except
    for plain. I may come back to that.
    */
    let filename = 'plain.txt';

    if(type === 'js') {
        filename = 'script.js';
    } else if(type === 'html') {
        filename = 'file.html';
    } else if(type === 'py') {
        filename = 'file.py';
    }

    // remove initial and ending ```
    // oops, beginning can be ```js. 

    code = code.replace(/```.*/gm,'').trim();

    let files = {};
    files[filename] = { content: code };

    
    let body = {
        description:'', 
        public: true, 
        files
    }

    return (await octokit.request('POST /gists', body)).data;

}
```

The API to create a Gist requires a filename. I sniff the type and use generic names based on the type. As the comments say, I could make this a bit more flexible. 

I then remove the backticks, and call octokit. Notice how simple that part is - one quick API call. The result is a Gist object that includes an `html_url` value I use in `toGistEmbed`:

```js
function toGistEmbed(url) {
    return `<script src="${url}.js"></script>`;
}
```

It's possibly a bit silly to have a function for such a simpler operation, but I figured what the heck. I then write out the file. Here's the full script, as a Gist, because the backticks ended up messing my blog's processing a bit:

<script src="https://gist.github.com/cfjedimaster/0fb15c90abb7cdb39acde0b82c15fd75.js"></script>

So... this worked well, but I ran into a problem. If I copied and pasted the result into Medium, it automatically escaped the script tags and treated it as code to show. On to the second solution!

## The Second Solution

To get this working right in Medium, I made one incredibly small change:

```js
function toGistEmbed(url) {
    //return `<script src="${url}.js"></script>`;
    return url;
}
```

Yeah, the function does nothing now, which makes it even more silly, but I ended up with a result that had my Gist URLs in the text. When I pasted this into Medium, I then went to each one, put my cursor at the end, and hit enter. Still a bit of manual work, but far easier than creating the Gists by hand, one by one. 

As always, let me know what you think and if you find this useful, give me a shout-out!

Photo by <a href="https://unsplash.com/@dtravisphd?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">David Travis</a> on <a href="https://unsplash.com/s/photos/notes?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  