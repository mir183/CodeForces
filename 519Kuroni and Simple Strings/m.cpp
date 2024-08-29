#include <iostream>
#include <string>
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
    string s;
    cin >> s;
    ll n = s.size();
    ll i = 0, j = n - 1;
    deque<ll> v;

    while (i < j) {
        if (s[i] == '(' && s[j] == ')') {
            v.push_back(i + 1);
            v.push_back(j + 1);
            i++;
            j--;
        } else {
            if (s[i] != '(') i++;
            if (s[j] != ')') j--;
        }
    }

    if (!v.empty()) {
        cout << 1 << endl;
        cout << v.size() << endl;
        sort(v.begin(), v.end());
        for (auto idx : v) {
            cout << idx << " ";
        }
        cout << endl;
    } else {
        cout << 0 << endl;
    }
}

signed main() {
    MIR183_Mac;
    ll tt;
    tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}