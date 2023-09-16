n = int(input(""))
x = str(n)
luckyno = 0

for digit in x:
    if digit == '4' or digit == '7':
        luckyno += 1

if luckyno == 4 or luckyno == 7:
    print("YES")
else:
    print("NO")
