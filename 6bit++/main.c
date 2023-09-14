#include <stdio.h>
int main(){
    int n;
    char c[50];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%s", &c);
        if(c=="X++"|| c=="++X"){
            count++;
        }
        else{
            count--;
        }
    }
    printf("%d", count);
}