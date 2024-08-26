#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n;
    cin >> n;
    deque<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    v.push_back(v[0]);
    ll ans = 0;
    ll pos = -1;

    for (ll i = 0; i < n; i++) {
        if (v[i] > v[i + 1]) {
            ans++;
            pos = i + 1;
        }
    }

    if (ans == 0) {
        cout << 0 << endl;
    } else if (ans == 1) {
        cout << n - pos << endl;
    } else {
        cout << -1 << endl;
    }
}

signed main() {
    MIR183_Mac;
    ll tt;
    tt = 1;
    while (tt--) {
        solve();
    }
    return 0;
}