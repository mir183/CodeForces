t=int(input(""))

while t>0:
    n,m=map(int,input(" "))
    s=input("")
    t=input("")
    if len(s)==1:
        print("YES")
    else:
        for i in len(s):
            if s[i]==s[i+1]:
                s[i]+t
                