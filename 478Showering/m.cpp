#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,s,m;
    cin>>n>>s>>m;
    // ll gap=-1;
    vector<pair<ll, ll>> v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    bool ok=false;
    if(v[0].first>=s){
        yes;
        return;
    }
    if(m-v[n-1].second>=s){
        yes;
        return;
    }
    
    for(ll i=1;i<n;i++){
        if(v[i].first-v[i-1].second>=s){
            yes;
            return;
        }
    }
    no;
    return;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}