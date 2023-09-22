n, m = map(int, input().split())
uarr = list(map(int, input().split()))

arr=sorted(uarr)

sum = 0
for k in range(m):
    if arr[k] < 0:
        sum += abs(arr[k])
    else:
        break

print(sum)
