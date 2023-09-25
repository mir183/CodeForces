#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int n;
        scanf("%d", &n);
        int res;
        int rem;
        res=n/2020;
        if(res<1){
            printf("NO\n");
        }
        else{
            rem=n%2020;
            if(rem>res){
                printf("NO\n");
            }
            else 
            {
            printf("YES\n");
            }
        }
        t--;
    }
}