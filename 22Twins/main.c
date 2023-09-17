#include<stdio.h>

int swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


int bubblesort(int arr[], int n){
        for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(){
    
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum=0;
    int sum1=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    sum=sum/2;
    bubblesort(arr,n);
    for(int i=n-1;i>=0;i--){
        sum1+=arr[i];
        count++;
        if(sum<sum1){
            break;
        }
    }
    printf("%d", count);

}
