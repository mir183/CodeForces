n = int(input(""))
count = 0

for x in range(0, n):
    a = input("")
    if a == "X++" or a == "++X":
        count += 1
    else:
        count -= 1

print(count)
