from collections import deque

def solve():
    n = int(input())
    s = input()
    d = deque()

    while n != 0:
        if n % 2:
            d.append(s[0])
        else:
            d.appendleft(s[0])
        s = s[1:]
        n -= 1

    for i in d:
        print(i, end='')

t = 1
while t > 0:
    solve()
    t -= 1