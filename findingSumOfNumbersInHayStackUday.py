import re
data = open("regex_sum_218110.txt", "r")
list_of_number = []
for line in data: 
	number_list_from_line=re.findall(r"[0-9]+", line)
	if number_list_from_line:
		for number in number_list_from_line:
			list_of_number.append(int(number))
print "All numbers in the given file", list_of_number
print "Sum of all numbers are", sum(list_of_number)
