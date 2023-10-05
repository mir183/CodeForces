name1=input("")
name2=input("")
name3=input("")
name4=name1+name2

name3=list(name3)
name4=list(name4)
name3.sort()
name4.sort()


if name3==name4:
    print("YES")
else:
    print("NO")
