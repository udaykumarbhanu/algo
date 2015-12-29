import urllib
import xml.etree.ElementTree as ET

comment_count_list = []
url = raw_input("Enter a URL: ")
if len(url) < 1 : 
	url = raw_input("Enter a URL: ")
else: 
	urldata = urllib.urlopen(url).read()
	# print "URL data: ", urldata
	# print "Data type: ", type(urldata)
	tree = ET.fromstring(urldata)
	counts = tree.findall("comments/comment")
	# print "Counts :", counts
	for item in counts:
		count = item.find('count').text
		comment_count_list.append(int(count))

print "Total comments count is :", len(comment_count_list)
print "Sum of total comments count is :", sum(comment_count_list)

