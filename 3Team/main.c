#include<stdio.h>
int main(){
    int n;
          int count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d%d%d", &a,&b,&c);
        if(a==1&&b==1){
            count++;
        }
        else if(b==1&&c==1){
            count++;
        }
        else if(c==1&&a==1){
            count++;
        }

    } 
            printf("%d\n", count);
}