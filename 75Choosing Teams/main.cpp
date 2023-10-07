#include<iostream>

using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<5){
            if(5-arr[i]>=k){
                flag++;
            }
            
        }
    }
    cout<<flag/3<<endl;
}