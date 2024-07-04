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
    ll n,m;
    cin>>n>>m;
    deque<ll>v(n+1,0);
    deque<ll>pre=v;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        pre[i]=pre[i-1]+v[i];
    }
    while (m--){
        ll x;
        cin>>x;
        ll pos;
        ll dormitory;
        auto it=lower_bound(pre.begin(),pre.end(),x);
        pos=it-pre.begin();
        dormitory=x-pre[pos-1];
        cout<<pos<<" "<<dormitory<<endl;
        
    }
    

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}