def extendList(val, list=[]):
	if list is None:
		list=[]
		list.append(val)
	else:
		list.append(val)
	return list
list1=extendList(10)
list2=extendList(123)
list3=extendList('a')

print "list1 = %s" % list1
print "list2 = %s" % list2
print "list3 = %s" % list3
