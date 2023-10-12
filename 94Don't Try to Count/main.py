t = int(input(""))

while t>0:
    n,m=map(int,input().split())
    x=input()
    s=input()
    flag=0
    while s not in x:
        if(flag==15):
            break
        x=x+x
        flag+=1
    
    if flag==15:
        print(-1)
    else:
        print(flag)
    t-=1
