t=int(input())

while t>0:
    alphabet=list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    n=int(input(""))
    s=input("")
    lst=[]
    sum=0
    for i in s:
        if i in alphabet:
            alphabet.remove(i)
            sum+=2
        else:
            sum+=1
    print(sum)
    t=t-1
