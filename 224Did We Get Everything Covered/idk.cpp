#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, k, m, cnt = 0;
    string temp, s, ans;
    cin >> n >> k >> m >> temp;
    for (char i : temp) {
        if (k > static_cast<int>(i) - 'a') {
            s.push_back(i);
        }
    }

    if (s.empty()) {
        no;
        for (int i = 0; i < n; ++i) {
            cout << 'a';
        }
        cout<<endl;
        return;
    }

    map<char, int> mp;

    for (char i : s) {
        mp[i]++;
        if (mp.size() == k) {
            ans.push_back(i);
            ++cnt;
            mp.clear();
        }
    }

    if (cnt >= n) {
        yes;
        return;
    }

    no;

    if (mp.empty()) {
        while (ans.size() < n) {
            ans.push_back(s.back());
        }
        cout << ans << endl;
        return;
    }

    char g;

    for (char c = 'a'; c < static_cast<char>(97 + k); ++c) {
        if (mp[c] == 0) {
            g = c;
            break;
        }
    }

    while (ans.size() < n) {
        ans.push_back(g);
    }

    cout << ans << endl;
}
int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}