t=int(input(""))

while t>0:
    s=input("")
    for i in s:
        if i==i.lower():
            if i in "codeforces":
                print("YES")
            else:
                print("NO")
    t=t-1