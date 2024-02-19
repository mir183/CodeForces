#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n, k;
    cin >> n >> k;
    ll odd = (n + 1) / 2;
    if (k <= odd) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - odd) << endl;
    }
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