t=int(input(""))
while t>0:
    n=int(input(""))
    res=n/2
    if n==0 and n==1:
        print("0")
    elif n==2:
        print('0')
    elif res%1==0:
        res=int(res)
        print(res-1)
    elif res%1!=0:
        res=res//1
        res=int(res)
        print(res)
    else:
        print("EEE")
    t=t-1