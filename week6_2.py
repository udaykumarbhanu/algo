# Date 25/12/2015
# Uday Kumar Bhanu
# Week 6 assignment
# Extracting data from given json url

#"South Federal University" which will have a place_id of "ChIJJ8oO7_B_bIcR2AlhC8nKlok". sensor=false 
# Indian School of Mines Dhanbad
import json
import urllib

#http://python-data.dr-chuck.net/geojson

import urllib
import json

static_url = "http://python-data.dr-chuck.net/geojson?"

while True:
	address = raw_input("Enter a University Name: ")
	if len(address) < 1 : 
		break
	else:

		url = static_url + urllib.urlencode({"sensor":"false", "address": address})
		print "Retrieving URL : ", url
		data = urllib.urlopen(url).read()

		print "Retrieved Data size is :", len(data), "characters"

		try: 
			jsondata = json.loads(str(data))
		except: 
			jsondata = None
		if "status" not in jsondata or jsondata["status"] != "OK":
			print "==== Failure To Retrieve ===="
		print "Print JSON data :", jsondata
	
		lat = jsondata["results"][0]["geometry"]["location"]["lat"]
		lng = jsondata["results"][0]["geometry"]["location"]["lng"]
		print

		placeid = jsondata["results"][0]["place_id"]
		print "Place ID is :", placeid
