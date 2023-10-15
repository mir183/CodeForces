t=int(input(""))
mainname=list("Timur")
mainname.sort()
while t>0:
    n=int(input(""))
    s=list(input(""))
    s.sort()
    if(s==mainname):
        print("YES")
    else:
        print("NO")
    t-=1