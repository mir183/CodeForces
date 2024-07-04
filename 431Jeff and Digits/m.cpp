#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    if (v[n - 1] != 0) cout << -1 << endl;
    else {
        while (accumulate(v.begin(), v.end(), 0) % 9 != 0) {
            v.erase(v.begin());
        }
        if (accumulate(v.begin(), v.end(), 0) == 0) cout << 0;
        else for (int i = 0; i < v.size(); i++) cout << v[i];
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