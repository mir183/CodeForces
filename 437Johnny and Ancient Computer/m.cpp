#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    if (a > b) swap(a, b);
    if (b % a != 0) {
        cout << -1 << endl;
        return;
    }
    ll n = b / a;
    ll total = 0;
    while (n % 8 == 0) {
        total++;
        n /= 8;
    }
    while (n % 4 == 0) {
        total++;
        n /= 4;
    }
    while (n % 2 == 0) {
        total++;
        n /= 2;
    }
    if (n != 1) {
        cout << -1 << endl;
    } else {
        cout << total << endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}