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
    deque<ll> d(n);
    for(ll i=0; i<n; i++) cin>>d[i];
    sort(d.begin(), d.end());
    d[0]++;
    ll prod=1;
    for(ll i=0; i<n; i++) {
        prod*=d[i];
    }
    cout<<prod<<endl;
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