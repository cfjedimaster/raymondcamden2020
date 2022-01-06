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
import frontmatter

INPUT = "./_posts/**/*.md"


def makeIndex(f):
	result = []
	for file in f:
		with open(file) as reader:
			
			content = reader.read()

			# to parse the yaml, we need to get just the front matter
			data = frontmatter.loads(content)

			result.append({
				"content":content,
				"date":data["date"],
				"path":data["permalink"]
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
	# files = files[0:6]

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
		url = "https://www.raymondcamden.com" + result["path"]
		# for printing the date, just need the part before T
		print(result["date"].split("T")[0],"->",url)

if len(sys.argv) == 1:
	print("Usage: search.py A B C where you can have N search term arguments.")
	sys.exit()

if __name__ == "__main__":
   main(sys.argv[1:])
