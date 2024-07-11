#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool checksame(ll a, ll b, ll c) {
    return (b - a == 1) && (c - b == 1);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    deque<ll> v(m);
    for (ll i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(), 1) || binary_search(v.begin(), v.end(), n)) {
        no;
        return;
    }
    for (ll i = 0; i < m - 2; i++) {
        if (checksame(v[i], v[i + 1], v[i + 2])) {
            no;
            return;
        }
    }
    yes;
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