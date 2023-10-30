t=int(input())

while t>0:
    s=input()
    leng=len(s)
    
    if leng<2 or leng%2!=0:
        print("NO")
    elif s[:leng//2]==s[leng // 2:]:
        print("YES")
    else:
        print("NO")
    
    t=t-1
