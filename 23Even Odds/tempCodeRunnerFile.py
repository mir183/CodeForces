n, k = map(int, input("").split( ))
main=[]
odd=[]
even=[]
for i in range(0, n):
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)


main= odd+even

print(main[k-1])