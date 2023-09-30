n = input("")

while len(n)>0:
    if n.startswith('144'):
        n = n[3:]
    elif n.startswith('14'):
        n = n[2:]
    elif n.startswith('1'):
        n = n[1:]
    else:
        break

if len(n)==0:
    print("YES")
else:
    print("NO")
