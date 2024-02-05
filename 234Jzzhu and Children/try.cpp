#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= m) {
            v[i] = 0;
        }
    }

    ll ans = 0;
    ld x = 0;
    while (true) {
        for (ll i = 0; i < n; i++) {
            if (v[i] != 0) {
                if (v[i] % m != 0) {
                    v[i] -= m * (v[i] / m + 1);
                } else {
                    v[i] = 0;
                    ans = i;
                }
            }
        }
        if (accumulate(v.begin(), v.end(), 0) == 0) {
            break;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}
