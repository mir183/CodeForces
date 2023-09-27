#include<stdio.h>
int swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


int bubblesort(int arr[], int n){
        for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]<arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(){
    int k;
    scanf("%d", &k);
    int n=12;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    int sum=0;
    int j;
    int flag=0;
    for(j=0;j<n;j++){
        if(sum<k){
            sum=sum+arr[j];
            flag++;
        }
        else{
            flag=flag;
            break;
        }
    }
    if(flag==12){
        if(arr[n-1]==1){
        printf("%d", j);
         }
            else
            {
            printf("-1");
            }
    }
    else
    {
        printf("%d",j);
    }
        
    }
        