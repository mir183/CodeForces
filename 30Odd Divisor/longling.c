#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);

        while (t--)
        {
            /*very*/ long long int n;
            int flag=0;
        scanf("%lld", &n);
        if(n%2!=0){
            flag=1;
        }
        while (n%2==0)
        {
            n=n/2;
        }
        if(n>1){
            flag=1;
        }
        if(flag>0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
       }
}
