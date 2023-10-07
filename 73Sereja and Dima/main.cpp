#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0, end=n-1;
    int rotation=0;
    int sumSereja=0,sumDima=0;
    while (start<=end)
    {
        if(rotation%2==0){
            if(arr[start]>arr[end]){
                sumSereja=sumSereja+arr[start];
                start++;
            }
            else{
                sumSereja=sumSereja+arr[end];
                end--;
            }
        }else{
            if(arr[start]>arr[end]){
                sumDima=sumDima+arr[start];
                start++;
            }
            else{
                sumDima=sumDima+arr[end];
                end--;
            }
        }
        rotation++;
    }
    cout<<sumSereja<<" "<<sumDima<<endl;
    
}