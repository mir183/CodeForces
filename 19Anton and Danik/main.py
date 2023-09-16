n=int(input(""))
s=input("")
d=0
a=0
d = s.count("D")
a = s.count("A")

if(a<d):
    print("Danik")
elif(a>d):
    print("Anton")
elif(d==a):
    print("Friendship")