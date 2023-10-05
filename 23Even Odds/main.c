#include<stdio.h>
#include<string.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int oddsize=0;
    int evensize=0;
    int odd[n/2];
    int even[n/2];
    int makei=0;
    while(makei<n){
        for(makei=1;makei<=n;makei++){
        arr[makei]=makei;
        n++;
    }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[evensize]==arr[i];
            evensize++;
            
        }
        else if(arr[i]%2!=0){
            odd[oddsize]=arr[i];
            oddsize++;
        }
    }
    int mainarr[n];
    memcpy(mainarr, even, evensize * sizeof(int));
    memcpy(mainarr + evensize, odd, oddsize * sizeof(int));
    for(int j=0;j<n;j++){
        printf("%d", mainarr[k]);
    }
    }