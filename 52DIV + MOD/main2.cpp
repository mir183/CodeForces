#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
     cin>>t;
     while (t>0)
     {
        long long int l,r,a;
        cin>>l>>r>>a;
        long long int maxv = 0;
        for(long long int x=l;x<=r;x++){
            long long int div,mod;
            div=x/a;
            mod=x%a;
            long long int total=div+mod;
            maxv=max(maxv, total);
        }
        
        cout<<maxv<<endl;


        t--;
     }
     
}