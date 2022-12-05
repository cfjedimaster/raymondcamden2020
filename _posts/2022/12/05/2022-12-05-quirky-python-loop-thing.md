---
layout: post
title: "Quirky Python Loop Thing"
date: "2022-12-05T18:00:00"
categories: ["development"]
tags: ["python"]
banner_image: /images/banners/python.jpg
permalink: /2022/12/05/quirky-python-loop-thing
description: Something interesting with Python array looping...
---

Please don't take this as a "Here is how you should do this in Python" post but rather, "I found this interesting behavior and thought I'd share it" instead. I know I've said this a million times on my blog already, but I'm learning Python and try my best to take every opportunity I can to practice it. Currently I'm using Python for this year's [Advent of Code](https://adventofcode.com/), and while I'm *already* behind, I've enjoyed it so far. 

In my work on [day three's](https://adventofcode.com/2022/day/3) solutions, I ran into an interesting issue. As part of the process for solving the second half of the puzzle, I needed to look at an array of data in groups of three. It was safe to assume that my input would be evenly divided by that number. So for example, this array of 9 characters:

```python
input = ["a","b","c","d","e","f","g","h","i"]
```

Normally I loop over an array like so:

```python
for i in input:
	print(i)
```

Given that prints every item, how can you print every third item? Turns out that's super simple. When working with arrays, you can provide a start, end, and count value in brackets. So for example:

```python
input[start:end:count]
```

Even cooler, you can leave off `start` and `end`:

```python
input[:count]
```

So for example:

```python
for i in input[::3]:
	print(i)
```

Which returns:

```
a
d
g
```

Perfect! Except that in order to work with my "groups", I needed to know the current index I was on. Having the index would then let me simple "plus one" and "plus two" to get a group. Remember, it was safe to assume the array was divisble by three. 

So... again, remember I'm still learning this. In order to get the current index, I turned to [enumerate](https://docs.python.org/3/library/functions.html#enumerate) and tried this:

```python
for idx, i in enumerate(input[::3]):
	print(idx,i)	
```

And got... not what I expected:

```
0 a
1 d
2 g
```

As you can see, instead of 0, 3, 6, I got 0, 1, 2. Which... I guess represents the current loop iteration and kinda makes sense, but as I said, it wasn't what I expected. How did I get around it?

In my Advent of Code solution, I just switched to a while loop:

```python
while idx + 3 <= len(input):
	ourGroup =	[
		input[idx], 
		input[idx+1],
		input[idx+2]
	]

	# more stuff here... 
	idx = idx + 3
```

But later I realized I could simply multiply by 3:

```python
for idx, i in enumerate(input[::3]):
	newidx = idx * 3

	ourGroup =	[
		input[newidx], 
		input[newidx+1],
		input[newidx+2]
	]
```

I'm sure there's probably many different (and better) ways of doing this, but that's part of the reason I enjoy Python so much, the flexibility!

Photo by <a href="https://unsplash.com/@artturijalli?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Artturi Jalli</a> on <a href="https://unsplash.com/s/photos/python?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  