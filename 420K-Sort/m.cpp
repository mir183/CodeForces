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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans=0;
    priority_queue<ll> pq;
    for(ll i=1;i<n;i++){
        if(v[i-1]>v[i]){
            ll d=v[i-1]-v[i];
            ans+=d;
            v[i]=v[i-1];
            pq.push(d);
        }
    }
    if(!pq.empty()){
        ans+=pq.top();
        // return;
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}