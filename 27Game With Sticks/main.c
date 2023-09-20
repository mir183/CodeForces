#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int count=0;
            int i=1;
    for(;;){
        if(n-i==0){
            break;
        }
        if (m-i==0){
            break;
        }
        i++;
        count++;
    }
    if(count%2==0){
        printf("Akshat");
    }
    else{
        printf("Malvika");
    }
}