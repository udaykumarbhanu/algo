# Date 25/12/2015
# Uday Kumar Bhanu
# Week 6 assignment
# Extracting data from given json url

import json
import urllib


comment_count_list = []
url = raw_input("Enter a URL: ")
#url = "http://python-data.dr-chuck.net/comments_42.json"

if len(url) < 1 : 
	url = raw_input("Enter a URL: ")
else: 
	urldata = urllib.urlopen(url).read()
	jsondata = json.loads(urldata)	
	#print "Json data: ", jsondata
	
	#print "Json data type: ", type(jsondata)
	lst = jsondata["comments"]
	#print "Lst: ", lst
	for item in lst:
		#for number in item: 
		comment_count_list.append(int(item['count']))

print "Total Numbers are : ", len(comment_count_list)
print "Total Sum is : ", sum(comment_count_list)


	
