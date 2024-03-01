#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        // vector<ll>v={1, 3, 6, 10, 15};
        map<ll,ll>m;
        //coins are 1,3,6,10,15
        m[0]=0,m[1]=1,m[2]=2,m[3]=1,m[4]=2,m[5]=3,m[6]=1,m[7]=2,m[8]=3,m[9]=2,m[10]=1,m[11]=2,m[12]=2,m[13]=2,m[14]=3;
        ll f=n/15;
        n%=15;
        ll ans;
        if(!f){
            ans=m[n];
            cout<<ans<<endl;
        }else{
            ll ans=(f+m[n]);
            if(n>=5){
                ans=min(f+m[n],f+1+m[n-5]);
            }
            cout<<ans<<endl;
        }



    }
    
    return 0;
}