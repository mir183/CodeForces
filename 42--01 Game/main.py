"""  
t=int(input(""))
while t>0:
    s=input("")
    for i in range(len(s)):
        if s[i]=='0':
            for j in range(i+1,len(s)-1):
                if s[j]=='1':
                    s=s.replace(s[i],"")
                    s=s.replace(s[j],"")
                    j=i

    for i in range(len(s)):
        if s[i]=='1':
            for j in range(i+1,len(s)-1):
                if s[j]=='0':
                    s=s.replace(s[i],"")
                    s=s.replace(s[j],"")
                    j=i



    final = len(s)
    if final==0:
        print("YES")
    else:
        print("NO")
    t=t-1
"""

t=int(input(""))

while t>0:
    s=input("")
    zero=s.count('0')
    one=s.count('1')

    #leng=len(s)-zero-one
    minimum=min(zero,one)
    if minimum%2==0:
            print("NET")
    else:
            print("DA")
    t=t-1



