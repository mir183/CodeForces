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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        vector<ll> dx={-a,-a,a,a,b,b,-b,-b};
        vector<ll> dy={-b,b,-b,b,-a,a,-a,a};
        set<pair<ll,ll>> dxK;
        set<pair<ll,ll>> dxQ;
        for(ll i=0;i<8;i++){
            dxK.insert({xk+dx[i],yk+dy[i]});
            dxQ.insert({xq+dx[i],yq+dy[i]});
        }
        ll ans=0;
        for(auto i:dxK){
            if(dxQ.find(i)!=dxQ.end()){
                ans++;
            }
        }
        cout<<ans<<endl;



    }

    return 0;
}