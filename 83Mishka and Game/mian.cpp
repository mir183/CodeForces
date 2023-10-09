#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
                int mikasa=0;
            int asif=0;
    for(int i=0;i<n;i++){

        int arr[2];
        for(int j=0;j<2;j++)cin>>arr[j];

        if(arr[0]>arr[1])mikasa++;
        else if(arr[1]>arr[0])asif++;
    }
    if(mikasa>asif)cout<<"Mishka"<<endl;
    else if(asif>mikasa)cout<<"Chris"<<endl;
    else if(asif==mikasa)cout<<"Friendship is magic!^^"<<endl;
}