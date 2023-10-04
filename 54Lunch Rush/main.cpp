#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<long long int>mainarr;
    long long int joy;
    long long int maximum=-1LL;
    for(int i=0;i<n;i++){
        long long int arr[2];
        for(int j=0;j<2;j++){
            cin>>arr[j];
        
        if(arr[1]>k){
            joy=arr[0]-static_cast<long long>(arr[1]-k);
            }
            else{
                joy=arr[0];
            }
            mainarr.push_back(joy);
        }
        maximum= *max_element(mainarr.begin(), mainarr.end());

    }
    cout<<maximum<<endl;
}