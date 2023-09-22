#include<stdio.h>
#include<stdlib.h>

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
    int m,n;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[m];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    int sum=0;

    for( int k=0;k<m;k++){
        if(arr[k]<0){
            sum +=abs(arr[k]);
        }
        else{
            break;
        }
        
        
    }
    printf("%d", sum);
}