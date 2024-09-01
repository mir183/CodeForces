#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < v[i].size(); j++) { // Fix: iterate over the length of v[i]
            if (v[i][j] == '.') {
                if ((i + j) % 2 == 0) v[i][j] = 'B';
                else v[i][j] = 'W';
            }
        }
        cout << v[i] << endl;
    }
}

signed main() {
    // Always use ll, int may give TLE
    ll tt;
    tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}