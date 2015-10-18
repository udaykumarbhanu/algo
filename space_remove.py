import re
text=raw_input("Please enter a text with spaces :")

text=text.strip()
output_list=re.findall(r"\S", text)
output="".join(output_list)

print "String without spaces:", output

