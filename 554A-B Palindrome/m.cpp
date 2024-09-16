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

bool pal(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll n = s.length();
    
    for (ll t = 0; t < 2; t++) {
        for (ll i = 0; i < n; i++) {
            ll j = n - i - 1;
            if (s[i] != '?') {
                if (s[j] == '?') {
                    s[j] = s[i];
                } else if (s[i] != s[j]) {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        reverse(s.begin(), s.end());
    }

    a -= count(s.begin(), s.end(), '0');
    b -= count(s.begin(), s.end(), '1');
    ll q = count(s.begin(), s.end(), '?');
    bool em = (n % 2 == 1 && s[n / 2] == '?');

    if (a < 0 || b < 0 || a + b != q || (em && a % 2 == 0 && b % 2 == 0)) {
        cout << -1 << endl;
        return;
    }

    if (a % 2 == 1 || b % 2 == 1) {
        ll i = n / 2;
        if (s[i] != '?') {
            cout << -1 << endl;
            return;
        }
        s[i] = (a % 2 == 1 ? '0' : '1');
        if (a % 2 == 1) a--;
        else b--;
    }

    if (a % 2 == 1 || b % 2 == 1) {
        cout << -1 << endl;
        return;
    }

    for (ll i = 0; i < n / 2; i++) {
        if (s[i] == '?') {
            ll j = n - i - 1;
            if (a > 0) {
                a -= 2;
                s[i] = s[j] = '0';
            } else {
                b -= 2;
                s[i] = s[j] = '1';
            }
        }
    }

    if (pal(s) && a == 0 && b == 0) {
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
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