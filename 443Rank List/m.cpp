#include <iostream>
#include <vector>
#include<algorithm>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool cmp(pair<int,int> a, pair<int,int>b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    k--;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }
    sort(v.begin(),v.end(),cmp);
    map<pair<ll,ll>,ll>m;
    for(auto& [x,y]:v){
        m[{x,y}]++;
    }
    cout<<m[v[k]]<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}