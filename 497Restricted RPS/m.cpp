#include <iostream>
#include <string>
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
    ll a, b, c;
    cin >> a >> b >> c;
    string s;
    cin >> s;

    ll cntR = count(s.begin(), s.end(), 'R');
    ll cntP = count(s.begin(), s.end(), 'P');
    ll cntS = count(s.begin(), s.end(), 'S');

    ll win = min(a, cntS) + min(b, cntR) + min(c, cntP);

    if (2 * win < n) {
        no;
        return;
    }

    yes;
    string ans(n, 'F');
    for (ll i = 0; i < n; ++i) {
        if (s[i] == 'P' && c > 0) {
            ans[i] = 'S';
            c--;
        } else if (s[i] == 'R' && b > 0) {
            ans[i] = 'P';
            b--;
        } else if (s[i] == 'S' && a > 0) {
            ans[i] = 'R';
            a--;
        }
    }

    for (ll i = 0; i < n; ++i) {
        if (ans[i] == 'F') {
            if (a > 0) {
                ans[i] = 'R';
                a--;
            } else if (b > 0) {
                ans[i] = 'P';
                b--;
            } else if (c > 0) {
                ans[i] = 'S';
                c--;
            }
        }
    }

    cout << ans << endl;
}

signed main() {
    MIR183_Mac;
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}