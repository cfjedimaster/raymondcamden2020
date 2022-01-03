#!/usr/bin/python

"""
A script to handle date based searching for my blog content. 

Reads all the markdown into a ginormous array.
Takes N args as a list of terms that must appear (ie, AND)
terms are:  "foo" or "moo zoo", such that a multi word term is a phrase essentially
"""

import sys
import glob
import datetime

INPUT = "./_posts/**/*.md"


def makeIndex(f):
	result = []
	for x,file in enumerate(f):
		with open(file) as reader:
			
			content = reader.read()

			# Get date from filename, could use fm, but its easier with the filename I think
			parts = file.split("-")
			year = parts[0].split('/').pop()
			month = parts[1]
			# I discovered some files have a time stamp in the day part:
			# ./_posts/2021/05/24/2021-05-24T18:00:00-quick-netlify-tip-for-redirects.md
			day = parts[2]
			if day.find("T") >= -1:
				dayParts = day.split("T")
				day = dayParts[0]

			postDate = datetime.date(int(year), int(month), int(day))

			# get the url path which is filename minus the first parts
			path = year + "/" + month + "/" + day + "/" + '-'.join(parts[3:])
			path = path.replace(".md", "")

			result.append({
				"content":content,
				"date":postDate,
				"path":path
			})

	return result

def searchIndex(index, terms):
	result = []

	for post in index:
		addPost = True
		for term in terms:
			term = term.lower()
			if post["content"].find(term) == -1:
				addPost = False
		
		if addPost:
			result.append(post)

	result = sorted(result, key = lambda p: p["date"], reverse=True)

	return result

def main(terms):

	print("Going to search for:", ', '.join(terms))

	# get all the MD files, ALL OF EM!!!
	files = glob.glob(INPUT, recursive=True)

	# temp
	# files = files[0:10]

	# now we need to parse into an array of content with dates
	print("Creating index of "+str(len(files)) +" files.")
	index = makeIndex(files)

	result = searchIndex(index, terms)
	if len(result) == 0:
		print("No results were found.")
		sys.exit()

	print("Found " + str(len(result)) + " results:")
	for result in result:
		# create url based on path
		url = "https://www.raymondcamden.com/" + result["path"]
		print(result["date"],url)

if len(sys.argv) == 1:
	print("Usage: search.py A B C where you can have N search term arguments.")
	sys.exit()

if __name__ == "__main__":
   main(sys.argv[1:])



