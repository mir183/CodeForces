#include<stdio.h>
/*int main(){
    int t;
    scanf("%d", &t);
    while (t>0)
    {
        int s;
        scanf("%d", &s);
        int sum=s;
        if(s>=0 && s<=9){
            printf("%d\n", s);
        }
        else if (s>=10)
        {
        if (s>=10)
            {
                int cashback=s/10;
            int remaining=s%10;
            int extra=cashback+remaining;
            s=s-remaining;
            sum=sum+cashback;
            }
        else
            {
                sum
            }
        

            
                printf("%d\n", sum);
        }

        

        t--;
    }
    



}*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t>0)
    {
        int s;
        scanf("%d", &s);
        int sum=s;
        int count=0;
        while(s>=10){
            int cashback=s/10;
            int rem=s%10;
            int extra=cashback+rem;
            sum=sum+cashback;
            s=extra;
            count=count+cashback;
        }
        printf("%d\n", sum);
        t--;
    }

}


