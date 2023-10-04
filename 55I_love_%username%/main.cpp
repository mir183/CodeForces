#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) {//strictly more points
            max=arr[i];
            count++;
        }
        if(arr[i]<min) {//strictly less points
            min=arr[i];
            count++;
    }

}
cout<<count<<endl;
}