# Finding nth fibonacci number
# n=1, fibo = 0 and n=2, fibo = 1

def loopWay(n):
	n1 = 0
	n2 = 1
	for i in range(n-1):
		tmp = n1+n2
		n1 = n2
		n2 = tmp
	return n1

def recursion(n):
	if n<1:
		return 0
	elif n==2:
		return 1
	else:
		return recursion(n-1)+recursion(n-2)

def tailRecursiveHelper(n,n1,n2):
	if n<2:
		return n1
	else:
		return tailRecursiveHelper(n-1,n2,n2+n1)

def tailRecursive(n):
	return tailRecursiveHelper(n,0,1)

print("Loop: "+str(loopWay(5)))
print("Recursion: "+str(recursion(5)))
print("Tail Recursion; "+str(tailRecursive(5)))
