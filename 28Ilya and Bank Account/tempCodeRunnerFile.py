n=int(input(""))
newstr=str(n)
x=len(newstr)
if n>=0:
    print(n)
elif -10<=n <0:
    print(0)
elif n<0:
    n=abs(n)
    without_last_digit = n // 10
    without_second_last_digit = (n // 10) + n % 10
    print(-min(without_last_digit, without_second_last_digit))









    """if '9' in newstr:
        tstr=newstr.translate({ord("9"): None })
        print(tstr)
    elif '8' in newstr:
        tstr=newstr.translate({ord("8"): None })
        print(tstr)
    elif '7' in newstr:
        tstr=newstr.translate({ord("7"): None })
        print(tstr)
    elif '6' in newstr:
        tstr=newstr.translate({ord("6"): None })
        print(tstr)
    elif '5' in newstr:
        tstr=newstr.translate({ord("5"): None })
        print(tstr)
    elif '4' in newstr:
        tstr=newstr.translate({ord("4"): None })
        print(tstr)
    elif '3' in newstr:
        tstr=newstr.translate({ord("3"): None })
        print(tstr)
    elif '2' in newstr:
        tstr=newstr.translate({ord("2"): None })
        print(tstr)
    elif '1' in newstr:
        tstr=newstr.translate({ord("1"): None })
        print(tstr)
    elif '0' in newstr:
        tstr=newstr.translate({ord(n[x-1]): None })
        print(tstr)"""
