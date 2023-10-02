#include<stdio.h>
int main(){
    int n,b,d;
    scanf("%d %d %d", &n,&b,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    int waste=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=b){
            waste=waste+arr[i];
            
        
        if(waste>d){
            count++;
            waste=0;
        }
        }

    }
    /*if(waste>b){
            count++;
            waste=0;

        }*/
        printf("%d", count);

}