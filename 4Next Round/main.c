#include<stdio.h>
int main(){
    int k,n;
    scanf("%d %d",&n, &k);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=k){
        count++;
        }
    }
    printf("%d", count);
}