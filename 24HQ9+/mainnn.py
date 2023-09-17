s=input("")
flag=0
if 'H' in s or 'Q' in s or '9' in s:
    flag=flag+1
else:
    flag=flag

if flag>0:
    print("YES")
else:
    print("NO")