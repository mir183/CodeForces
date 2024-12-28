#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n ;;
    cin>>n;
    deque<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        pair<ll,ll>tmp;
        cin>>tmp.second;
        tmp.first=0;
        for(ll j=0;j<tmp.second;j++){
            ll x;
            cin>>x;
            tmp.first=max(tmp.first,x-j+1);
        }
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll cur=0;
    for(auto x:v){
        if(cur<x.first){
            ans+=x.first-cur;
            cur=x.first;
        }
        cur+=x.second;
    }
    cout<<ans<<endl;
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