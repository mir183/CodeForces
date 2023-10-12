#include<bits/stdc++.h>
using namespace std;

 
#define     ll              long long int
#define     ld              long double
#define     endl            '\n'
#define     fasterio        ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     yes             cout<<"YES"<<"\n"
#define     no              cout<<"NO"<<"\n"


int main()
{
    fasterio;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll sum=a+b+c+n;
        if(sum%3!=0){
            no;
        }
        else{
            if(a>sum/3||b>sum/3||c>sum/3)no;
            else yes;
        }
    }
    

    return 0;
}