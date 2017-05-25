class A(object):
	def __init__(self):
		pass

	def print_hello(self):
		print "Hello from class A"

class B(object):
	def __init__(self):
		pass

	def print_hello(self):
		print "Hello from class B"

class B2(B):
	def __init__(self):
		pass

	def print_hello(self):
		print "Hello from class B2"

class C(B2, A):
	def __init__(self):
		pass

	# def print_hello(self):
	# 	print "Hello from class C"

c = C()
c.print_hello()

print C.__mro__
		