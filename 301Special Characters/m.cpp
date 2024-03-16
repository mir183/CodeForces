#include <stdio.h>
#define ll long long int
int main() {
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        int asci=65;
        if(n%2){
            printf("NO\n");
            continue;
        }
        else{
            printf("YES\n");
            for(long long int i=1;i<=n/2;i++){
                printf("%c",asci);
                printf("%c",asci);
                asci++;
            }
            printf("\n");
        }
    }
    return 0;
}