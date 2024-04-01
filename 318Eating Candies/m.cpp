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
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    map<ll, ll> mp;
    ll sum=0;
    ll ans=0;
    for(ll i=0; i<n; i++) {
        sum+=a[i];
        mp[sum]=i+1;
    }
    sum=0;
    for(ll i=n-1;i>=0;i--){
        sum+=a[i];
        if(mp[sum]>0 and mp[sum]<i+1){
            ans=max(ans,mp[sum]+n-i);
        }
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