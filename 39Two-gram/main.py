n=int(input(""))
s=input("")

for i in range(n):
    for j in range(i + 1, n - i):
        for k in range(j + 1, n - j):
            for l in range(k + 1, n - k):
                if s[i:j+1]==s[k:l+1]:
                    print(s[i:j+1])