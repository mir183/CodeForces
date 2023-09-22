#include<stdio.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long int n;
        int flag = 0;
        scanf("%lld", &n);
        
        if(n>2){
        if (n % 2 == 0) {
            printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}
