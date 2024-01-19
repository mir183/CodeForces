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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    for(auto &i:v)cin>>i;
    ll ans=0;                //4 3
                            // 3 2 3
    ll p=1;
    for(ll i=0;i<m;i++){ 
        if(p<=v[i]){
            ll x=abs(v[i]-p);
            ans+=x;
            p=v[i];
        }else{
            ll x=n-abs(v[i]-p);
            ans+=x;
            p=v[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}