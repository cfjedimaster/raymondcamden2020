---
layout: post
title: "Short Number Formatting in Python"
date: "2023-01-05T18:00:00"
categories: ["development"]
tags: ["python"]
banner_image: /images/banners/numbers.jpg
permalink: /2023/01/05/short-number-formatting-in-python
description: A followup to my look at short number formatting in JavaScript, and how I'd accomplish it in Python
---

Yesterday I wrote a blog post about creating [short number formats](https://www.raymondcamden.com/2023/01/04/using-intl-for-short-number-formatting) in JavaScript. Definitely check out that post first, but the idea was to take something like `9496301` and display it as `9.5M`. In that post, I used the built-in `Intl` object and it worked really well. It got me thinking, could you do the same in Python? 

First off, I checked and was happy to see that like JavaScript, Python supports numeric separators. This makes it much easier to read large numbers in code. It also meant I could take my test array and copy and paste it into a Python program:

```python
inputs = [
  999,
  1000,
  2999,
  12_499,
  12_500,
  430912,
  9_123_456,
  1_111_111_111,
  81_343_902_530,
  1_111_111_111_111,
  62_123_456_789_011,
  1_111_111_111_111_111,
]
```

I literally just now noticed that Python is also ok with the trailing comma. Sweet. Ok, so first I checked into just regular number formats, and of course, Python supports that, both with a built-in `format` function and `f` strings. In my case I wasn't worried about decimal places and the like, but could easily add commas. Here's a simple example:

```python
for i in inputs:
	print(f"{i:<30}{i:,}")
```

The first time I print the value, I don't format it, but pad it 30 characters to make my output easier to read. The formatting is done in the second variable, by just supplying `:,`. Here's the output:

```
999                           999
1000                          1,000
2999                          2,999
12499                         12,499
12500                         12,500
430912                        430,912
9123456                       9,123,456
1111111111                    1,111,111,111
81343902530                   81,343,902,530
1111111111111                 1,111,111,111,111
62123456789011                62,123,456,789,011
1111111111111111              1,111,111,111,111,111
```

Commas work for some countries, but not all. I checked and there's a locale-specific version as well: `:n`. Here's an example where I set the locale to German.

```
999                           999
1000                          1.000
2999                          2.999
12499                         12.499
12500                         12.500
430912                        430.912
9123456                       9.123.456
1111111111                    1.111.111.111
81343902530                   81.343.902.530
1111111111111                 1.111.111.111.111
62123456789011                62.123.456.789.011
1111111111111111              1.111.111.111.111.111
```

One odd thing with the `n` operator is that when I *didn't* specify a locale, it used nothing. I'm not sure why. Running `locale.getlocale()` definitely returned `en_US`, but maybe the expectation is that you should always set a locale when using it. I tried this and it worked:

```python
locale.setlocale(locale.LC_ALL,locale.getlocale())
```

I'm chalking that up to something I did wrong, or misunderstood. 

Ok, so that's basic formatting, how would you do the nice 'short' format? Use the `numerize` library. You can find it here, <https://github.com/davidsa03/numerize>, and after installing it via `pip`, here's an example of it in use:

```python
from numerize.numerize import numerize

# numbers defined here...

for i in inputs:
	print(f"{i:<30}{numerize(i)}")
```

And the output:

```
999                           999
1000                          1K
2999                          3K
12499                         12.5K
12500                         12.5K
430912                        430.91K
9123456                       9.12M
1111111111                    1.11B
81343902530                   81.34B
1111111111111                 1.11T
62123456789011                62.12T
1111111111111111              1111111111111111
```

Noticed that it worked perfectly... except for the final huge number, but as I mentioned in the [last post](https://www.raymondcamden.com/2023/01/04/using-intl-for-short-number-formatting), JavaScript's `Intl` also didn't handle it exactly right, although I do think it handled it *better*, returning `1111T` instead. Either way, `numerize` is pretty nifty and was quick to use. 