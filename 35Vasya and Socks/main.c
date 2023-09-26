#include <stdio.h>
#include<stdlib.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int days=0;
    int socks=n;
    while(socks>0){
        days++; 
        socks--; 
        if(days%m==0){
            socks++;
        }
    }
    printf("%d\n", days);

    return 0;
}
