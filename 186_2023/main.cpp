#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> b(n);
        ll product = 1;

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            product *= b[i];
        }

        if (product > 2023 || 2023 % product != 0) {
            no;
            continue;
        } else {
            yes;
            vector<ll> primes = {7, 17, 17};
            ll rp = 2023 / product;
            cout << rp;
            for (ll i = 0; i < k - 1; i++) {
                cout <<" "<<1;
            }
            cout << rp << endl;
        }
    }

    return 0;
}
