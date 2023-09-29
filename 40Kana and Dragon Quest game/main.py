t = int(input())
while t > 0:
    sum = 0
    x, n, m = map(int, input().split())
    for i in range(int(n)):
        sum += (x / 2) + 10
    for j in range(int(m)):
        sum += x - 10
    print(f"SUM={int(sum)} ", end=" ")
    if sum > x:
        print("YES")
    else:
        print("NO")
    t -= 1
