#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,q,k;
    cin>>n>>q>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll ans=k+v[r-1]-v[l-1]-2*(r-l)-1;
        cout<<ans<<endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}