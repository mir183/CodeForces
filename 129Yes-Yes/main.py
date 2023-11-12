t=int(input())
a='yesyesyesyesyesyesyesyesyesyes'
while t>0:

    s=input("")
    s=s.lower()
    if s in a:
        print("NO")
    else:
        print("YES")
    t=t-1
