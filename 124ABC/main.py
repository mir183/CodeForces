t=int(input(""))

while t>0:
	n=int(input())
	s=input()
	lst=["11","00"]
	if n>2 or s in lst:
		print("NO")
	else:
		print("YES")
	t=t-1