#include <iostream>
#include<string>
#include<deque>
#include<algorithm>
#include<utility>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    pair<ll,ll>p={0,0};
    string ans="";
    // ll x=v[0].first;
    // ll y=v[0].second;
    // if(x<0){
    //     no;return;
    // }else{
    //     ans+=string(x,'R');
    // }
    // if(y<0){
    //     no;return;
    // }else{
    //     ans+=string(y,'U');
    // }
    bool ok=true;
    for(ll i=0;i<n;i++){
        ll x=v[i].first-p.first;
        ll y=v[i].second-p.second;
        if(x<0 or y<0){
            no;
            ok=false;
            return;
            }
            ans+=string(x,'R');
            ans+=string(y,'U');
            p=v[i];
        }
    
    yes;
    cout<<ans<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}