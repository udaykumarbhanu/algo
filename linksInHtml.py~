import urllib
from BeautifulSoup import *

url = raw_input("Enter a URL here: ")
counter=int(raw_input("Enter a counter: "))
position = int(raw_input("Enter a position :"))
count=0

while count!=counter:
	count=count+1
	htmldata = urllib.urlopen(url).read()

	soupdata = BeautifulSoup(htmldata)
	# Retrieve all of the anchor tags
	tags = soupdata("a")
	tag= tags[position-1]	
	tags=[]
	url = tag.get("href", None)
	print url
else: 
	print "Done! please check last name in above output!"


