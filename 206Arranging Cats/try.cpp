#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve() {
    ll n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        // Case 1: Removing a cat from an occupied box
        if (s[i] == '1' && f[i] == '0') {
            ++ans;
        }
        // Case 2: Placing a cat in an empty box
        else if (s[i] == '0' && f[i] == '1') {
            ++ans;
        }
        // Case 3: Moving a cat from one box to another
        else if (i + 1 < n && s[i] == '1' && f[i + 1] == '1' && s[i + 1] == '0') {
            ++ans;
            ++i;  // Skip the next box as it has been handled
        }
    }

    cout << ans << endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
