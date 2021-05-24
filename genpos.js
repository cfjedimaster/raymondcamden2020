#!/usr/bin/env node
var fs = require('fs');
if(process.argv.length < 3) {
	console.log('Usage: genpos TITLE [CATEGORIES] [TAGS]');
	process.exit(1);
}

var title = process.argv[2];

if(process.argv.length >= 4) { 
	/*
	categories = process.argv[3].split(',').map((cat) => {
		return '"' + cat + '"';
	}).join(',');
	*/
	categories = process.argv[3];
} else {
	categories = '"Uncategorized"';
}
if(process.argv.length >= 5) { 
	/*
	tags = process.argv[4].split(',').map((tag) => {
		return '"' + tag + '"';
	}).join(',');
	*/
	tags = process.argv[4];
} else {
	tags = "";
}

var now = new Date();
var year = now.getFullYear();
var month = String(now.getMonth()+1);
if(month.length == 1) month = '0' + month;
var day = String(now.getDate());
if(day.length == 1) day = '0' + day;

var date = year + '-'+month+'-'+day;
// added to supply a time so my mail list thing works
// mod on 5/25/2021, this makes the filename a bit ugly, so changed date to dateFm for dateFontMatter
let dateFm = date + 'T18:00:00';

var slug = title.replace(/ /g,'-').toLowerCase();
//remove multiple -
slug = slug.replace(/-{2,}/,'-');
//remove non alnum
//slug = slug.replace(/[^A-Za-z\-]+/g,'');
slug = slug.replace(/[^\w\-]+/g,'');

//default template
var template = `---
layout: post
title: "${title}"
date: "${dateFm}"
categories: [${categories}]
tags: [${tags}]
banner_image: /images/banners/welcome2018.jpg
permalink: /${year}/${month}/${day}/${slug}
description: 
---

`;

//Try to make the folder
var path = './_posts/'+year+'/';
//console.log(path);
try {
	fs.accessSync(path,fs.F_OK);
} catch(e) {
	if(e.code === "ENOENT") {
		fs.mkdirSync(path);
	}
}

path = './_posts/'+year+'/'+month+'/';
try {
	fs.accessSync(path,fs.F_OK);
} catch(e) {
	if(e.code === "ENOENT") {
		fs.mkdirSync(path);
	}
}

path = './_posts/'+year+'/'+month+'/'+day;
//console.log(path);
try {
	fs.accessSync(path,fs.F_OK);
} catch(e) {
	if(e.code === "ENOENT") {
		fs.mkdirSync(path);
	}
}

var fileName = date + '-'+ slug + '.md';

if(fs.existsSync(path+'/'+fileName)) {
	console.log('POST NOT WRITTEN: '+path+'/'+fileName+ ' already exists.');
	process.exit();
}

fs.writeFileSync(path+'/'+fileName, template,'utf8');

console.log('Created '+path+'/'+fileName);
