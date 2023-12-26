line1="qwertyuiop"
line2="asdfghjkl;"
line3="zxcvbnm,./"
kun_muka_jaito=input("")
string=input("")
if kun_muka_jaito=="R":
    if string in line1:
        for x in line1:
            line1[x]=line1[x+1]
    if string in line2:
        for x in line2:
            line2[x]=line2[x+1]
    if string in line3:
        for x in line3:
            line3[x]=line3[x+1]

if kun_muka_jaito=="L":
    if string in line1:
        for x in line1:
            line1[x]=line1[x-1]
    if string in line2:
        for x in line2:
            line2[x]=line2[x-1]
    if string in line3:
        for x in line3:
            line3[x]=line3[x-1]

print(string)