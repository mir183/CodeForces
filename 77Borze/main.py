s=input("")
code=""
i=0
while i<len(s):
    if s[i]=="-":
        if i+1<len(s) and s[i+1]=="-":
            code=code+"2"
            i=i+2
        elif i+1<len(s) and s[i+1]==".":
            code=code+"1"
            i=i+2
    elif s[i]==".":
        code=code+"0"
        i=i+1

print(code)