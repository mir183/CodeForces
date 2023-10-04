#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i];
    }
    sort(arr,arr+3);
    int ans=0;
     int dist1=arr[2]-arr[0];
    int dist2=arr[1]-arr[0]+arr[2]-arr[1];
    cout<<min(dist1,dist2)<<endl;
}