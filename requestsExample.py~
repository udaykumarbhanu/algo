import cgi
import requests
import json

formData = cgi.FieldStorage()
if formData:
	address = formData.getvalue("address")
	city = formData.getvalue("city")
	state = formData.getvalue("state")
	degree = formData.getvalue("degree")
else:
	print "No data is present!"

key=""
fullUrl="https://maps.google.com/maps/api/geocode/xml?address="+address+","+city+","+state+"&key="+key;

try:
	response=request.get(fullUrl)
	if not response.status_code // 100 == 2: # status code other than 2xx are error
        	print "Error: Unexpected response {}".format(response)
	jsonData=response.json()
	print jsonData
except requests.exceptions.RequestException as e: # for invalid url and etc
        print "Error: {}".format(e)


