#include <stdio.h>
#include <stdlib.h>

int main(){
    int k,n,w;
    int total=0;
    scanf("%d %d %d", &k,&n,&w);
    for(int i=1; i<=w;i++){
        total=total+(i*k);
    }

    int borrow=total-n;

    if(borrow<0){
        borrow=0;
    }
    printf("%d", borrow);
}