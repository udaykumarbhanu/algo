import sqlite3
import re

conn = sqlite3.connect("emaildb.sqlite")
cur = conn.cursor()

cur.execute("DROP TABLE IF EXISTS Counts")

cur.execute("CREATE TABLE Counts (org TEXT, count INTEGER)")

fname = raw_input("Enter file name: ")
if ( len(fname) < 1 ) : fname = 'mbox-short.txt'
data=open(fname)
for line in data:
	line = line.rstrip()
	if line.startswith('From: '):
		orgs = re.findall(r"[a-zA-Z0-9]+\.+[a-zA-Z0-9.]+", line)
		for org in orgs:
			#org=org[1:]
			print "Org is  :", org
			cur.execute('SELECT count FROM Counts WHERE org = ? ', (org, ))
			row = cur.fetchone()
			if row is None:
				cur.execute('''INSERT INTO Counts (org, count) 
					VALUES ( ?, 1 )''', (org, ) )
			else : 
				cur.execute('UPDATE Counts SET count=count+1 WHERE org = ?', (org, ))
		else: 
			continue
conn.commit()
sqlstr = 'SELECT org, count FROM Counts ORDER BY count DESC LIMIT 10'

print "Counts are : "
for row in cur.execute(sqlstr) :
    print str(row[0]), row[1]

cur.close()

