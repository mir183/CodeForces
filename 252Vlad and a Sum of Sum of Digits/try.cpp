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
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ll num = i;
        while (num > 0) {
            ans += num % 10;
            num /= 10;
        }
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
