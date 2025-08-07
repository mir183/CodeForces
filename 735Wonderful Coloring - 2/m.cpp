#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<deque<ll>>v(n+3);
    map<ll,ll>mp;

    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[x].push_back(i);
        mp[x]++;
    }

    vector<ll>ans(n,0);
    vector<pair<ll,ll>>vec;

    for(auto it:mp){
        ll a=it.first;
        ll b=it.second;

        if(b>=k){
            ll color=1;
            for (ll i=0;i<k;i++){
                ll z=v[a][i];
                ans[z]=color;
                color++;
            }
        }else{
            for(ll i=0;i<v[a].size();i++) {
                vec.push_back({a,v[a][i]});
            }
        }
    }

    ll color=1;
    ll z=vec.size()%k;

    for (ll i=0;i<vec.size()-z;i++) {
        ll ind=vec[i].second;
        ans[ind]=color;
        color++;
        if (color> k) color = 1;
    }

    for (ll i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}