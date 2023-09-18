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

int display(int array[], int n){
        for( int k=0;k<n;k++){
        printf("%d ", array[k]);
    }
    printf("\n");

}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    bubblesort(arr, n);
    display(arr,n);

}