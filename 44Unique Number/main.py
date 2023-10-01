t=int(input(("")))
while t>0:
    n=int(input(""))
    if n<=45:
        if n>0 and n<=9:
            print(n)
        elif n>=10 and n<=17:
            for i in range(9):
                if n==i+9:
                    the8=str(i)
                    print(the8+'9')

        elif n>=18 and n<=24:
            for i in range(8):
                if n==i+8+9:
                    the8=str(i)
                    print(the8+'8'+'9')

        elif n>=25 and n<=30:
            for i in range(0,7):
                if n==i+7+8+9:
                    the8=str(i)
                    print(the8+'7'+'8'+'9')
        elif n>=31 and n<=35:
            for i in range(0,6):
                if n==i+6+7+8+9:
                    the8=str(i)
                    print(the8+'6'+'7'+'8'+'9')
        elif n>=36 and n<=39:
            for i in range(0,5):
                if n==i+5+6+7+8+9:
                    the8=str(i)
                    print(the8+'5'+'6'+'7'+'8'+'9')
        elif n>=40 and n<=42:
            for i in range(0,4):
                if n==i+4+5+6+7+8+9:
                    the8=str(i)
                    print(the8+'4'+'5'+'6'+'7'+'8'+'9')
        elif n>=43 and n<=44:
            for i in range(0,3):
                if n==i+3+4+5+6+7+8+9:
                    the8=str(i)
                    print(the8+'3'+'4'+'5'+'6'+'7'+'8'+'9')
        elif n==45:
            print('123456789')
    else:
        print(-1)
    t=t-1