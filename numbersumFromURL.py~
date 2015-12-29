import urllib
from BeautifulSoup import *

number_list=[]
url = raw_input("Enter a URL here: ")
htmldata = urllib.urlopen(url).read()

soupdata = BeautifulSoup(htmldata)


#print "Soupdata:", soupdata


tags = soupdata("span")

for tag in tags:   
    number=tag.contents[0]
    number_list.append(int(number))

print sum(number_list)


