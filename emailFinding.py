import re

result_dict=dict()

data=open("mbox.txt", "r")
for line in data:
	line = line.rstrip()
	if line.startswith('From: '):
		emails = re.findall(r"\@[a-zA-Z0-9]+\.+[a-zA-Z0-9]*", line)
		if emails:
			for email in emails:
				result_dict[email]=result_dict.get(email, 0)+1
	else: 
		continue

print result_dict
