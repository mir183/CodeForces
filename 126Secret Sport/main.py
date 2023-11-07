t=int(input(""))
while t>0:
    n=int(input(""))
    s=input("")
    a=s.count("A")
    b=s.count("B")
    if(a>b):
        print("A")
    elif(b>a):
        print("B")
    else:
        print("?")
    t=t-1