#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n, k, m;
    cin >> n >> k >> m;
    string temp, s, ans;
    cin >> temp;
    ll cnt = 0;
    for (char i : temp) {
        if (k > static_cast<ll>(i - 'a')) {
            s.push_back(i);
        }
    }
    if (s.size() == 0) {
        no;
        for (ll i = 0; i < n; i++) {
            cout << 'a';
        }
        cout << endl;
        return;
    }
    map<char, ll> mp;
    for (char i : s) {
        mp[i]++;
        if (mp.size() == k) {
            ans.push_back(i);
            cnt++;
            mp.clear();
        }
    }
    if (cnt >= n) {
        yes;
        // cout << ans << endl;
        return;
    }
    cout << "NO" << endl;
    if (mp.empty()) {
        while (ans.size() < n) {
            ans.push_back(s.back());
        }
        cout << ans << endl;
        return;
    }
    char g;
    for (char c = 'a'; c < static_cast<char>(97 + k); c++) {
        g = c;
        break;
    }
    while (ans.size() < n) {
        ans.push_back(g);
    }
    cout << ans << endl;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
