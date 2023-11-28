def main():
    t = int(input())
    for x in range(t):
        arr = list(map(int, input().split()))
        arr.sort()

        if arr[0] == arr[1] and arr[1] == arr[2]:
            print("YES")
        else:
            total = arr[2] + arr[1]
            ans = total // arr[0]
            if ans == arr[0]:
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    main()
