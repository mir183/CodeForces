#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
     cin>>t;
     while (t>0)
     {
        long long int l,r,a;
        vector<long long int>arr;
        cin>>l>>r>>a;
        for(long long int x=l;x<=r;x++){
            long long int div,mod;
            div=x/a;
            mod=x%a;
            long long int total=div+mod;
            arr.push_back(total);
        }
        sort(arr.begin(),arr.end());
        
        long long int maxv = 0;
        maxv=arr.back();
        cout<<maxv<<endl;


        t--;
     }
     
}