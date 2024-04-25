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
    deque<ll>d(n);
    for(auto i=0;i<n;i++)cin>>d[i];
    sort(d.begin(),d.end());
    ll ans=0;
    for (ll l = 0; l < n; ++l){
        ll r = upper_bound(d.begin(), d.end(), d[l] + 5) - d.begin();
        ans = max(ans, r - l);
    }

    cout << ans << endl;
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