---
layout: post
title: "JavaScript Quickie - Add Days But Prefer Business Days"
date: "2022-09-23T18:00:00"
categories: ["javascript"]
tags: []
banner_image: /images/banners/calendar1.jpg
permalink: /2022/09/23/javascript-quickie-add-days-but-prefer-business-days
description: An example of picking future dates that prefer business days to weekends
---

Sometimes when thinking about something I want to post, a particular part of it grabs my attention and I decide to rip it out and write something focused on just that one aspect. That's what happened today when I was thinking about a particular way of doing date math and I wanted to see if it would make sense. 

Given a particular date, I want to add a certain number of days to it (or weeks, or months), but I want the result to "prefer" business days. This is not the same as adding business days. So for example, 20 days from now is pretty different from 20 business days from now. Rather, I want the main difference to be close to my desired duration, but just "adjusted" to fall on a business day. 

To test out my theory that this was possible, I decided to use the [date-fns](https://date-fns.org/) date library.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/sohot.jpg" alt="" class="lazyload imgborder imgcenter">
</p>

date-fns has a wealth of useful date utilities, including a couple I'd need to implement my logic:

* [add](https://date-fns.org/v2.29.3/docs/add) - lets you quickly add durations to dates
* [isWeekend](https://date-fns.org/v2.29.3/docs/isWeekend) - returns true if a date falls on a weekends
* [nextMonday](https://date-fns.org/v2.29.3/docs/nextMonday) - fires up a Web3 crypto miner via Docker and Lambda to generate machine-driven art. No, actually it just returns the next Monday after a date


I began with a simple function that takes an input date and a duration in days:

```js
const addDayPreferBusinessDay = (date,numDays) => {
    let newDate = add(date, { days:numDays });
    if(isWeekend(newDate)) {
        newDate = nextMonday(newDate);
    }
    return newDate;
}
```

Pretty straightforward I think. I wrote a quick test that started with today and added 0 to 14 days. Here's how the results looked:

```
Fri 2022-09-23, plus 0 days, using addDayPreferBusinessDay: Fri 2022-09-23
Fri 2022-09-23, plus 1 days, using addDayPreferBusinessDay: Mon 2022-09-26
Fri 2022-09-23, plus 2 days, using addDayPreferBusinessDay: Mon 2022-09-26
Fri 2022-09-23, plus 3 days, using addDayPreferBusinessDay: Mon 2022-09-26
Fri 2022-09-23, plus 4 days, using addDayPreferBusinessDay: Tue 2022-09-27
Fri 2022-09-23, plus 5 days, using addDayPreferBusinessDay: Wed 2022-09-28
Fri 2022-09-23, plus 6 days, using addDayPreferBusinessDay: Thu 2022-09-29
Fri 2022-09-23, plus 7 days, using addDayPreferBusinessDay: Fri 2022-09-30
Fri 2022-09-23, plus 8 days, using addDayPreferBusinessDay: Mon 2022-10-03
Fri 2022-09-23, plus 9 days, using addDayPreferBusinessDay: Mon 2022-10-03
Fri 2022-09-23, plus 10 days, using addDayPreferBusinessDay: Mon 2022-10-03
Fri 2022-09-23, plus 11 days, using addDayPreferBusinessDay: Tue 2022-10-04
Fri 2022-09-23, plus 12 days, using addDayPreferBusinessDay: Wed 2022-10-05
Fri 2022-09-23, plus 13 days, using addDayPreferBusinessDay: Thu 2022-10-06
Fri 2022-09-23, plus 14 days, using addDayPreferBusinessDay: Fri 2022-10-07
```

Given that today is Friday, you can see how the next few days all bump to Monday, and do so again next week. 

For the heck of it, I decided to compare this to strictly adding business days. date-fns has a function for this, ]addBusinessDays](https://date-fns.org/v2.29.3/docs/addBusinessDays). Here's how those results look:

```
Fri 2022-09-23, plus 0 days, using addBusinessDays: Fri 2022-09-23
Fri 2022-09-23, plus 1 days, using addBusinessDays: Mon 2022-09-26
Fri 2022-09-23, plus 2 days, using addBusinessDays: Tue 2022-09-27
Fri 2022-09-23, plus 3 days, using addBusinessDays: Wed 2022-09-28
Fri 2022-09-23, plus 4 days, using addBusinessDays: Thu 2022-09-29
Fri 2022-09-23, plus 5 days, using addBusinessDays: Fri 2022-09-30
Fri 2022-09-23, plus 6 days, using addBusinessDays: Mon 2022-10-03
Fri 2022-09-23, plus 7 days, using addBusinessDays: Tue 2022-10-04
Fri 2022-09-23, plus 8 days, using addBusinessDays: Wed 2022-10-05
Fri 2022-09-23, plus 9 days, using addBusinessDays: Thu 2022-10-06
Fri 2022-09-23, plus 10 days, using addBusinessDays: Fri 2022-10-07
Fri 2022-09-23, plus 11 days, using addBusinessDays: Mon 2022-10-10
Fri 2022-09-23, plus 12 days, using addBusinessDays: Tue 2022-10-11
Fri 2022-09-23, plus 13 days, using addBusinessDays: Wed 2022-10-12
Fri 2022-09-23, plus 14 days, using addBusinessDays: Thu 2022-10-13
```

I think you can really see, especially at the end, how things begin to diverge. Is my way "better"? For what I want to use it for, I think it is. Obviously, time will tell, and like always, I'd love to know if people think this is useful. Note I used another useful date-fns utility to render my dates, [format](https://date-fns.org/v2.29.3/docs/format)

You can see the results yourself using the CodePen below:

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="YzLrjZd" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/YzLrjZd">
  Untitled</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p></p>