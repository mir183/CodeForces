#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        vector<ll> factors;
        // find all the factors of n and store them in factors
        for(ll i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                factors.push_back(i);
                if(i != n / i) factors.push_back(n / i);
            }
        }

        ll ans = 0;
        // for each factor, calculate the gcd of differences between elements in the same position in each subarray
        for (ll fac : factors) {
            vector<vector<ll>> subarrays(n / fac);

            // Create subarrays
            for (ll i = 0; i < n; i++) {
                subarrays[i / fac].push_back(v[i]);
            }

            bool identical = true;
            // Check if all subarrays are identical for some m
            for (ll m = 2; m <= n && identical; m++) {
                identical = true;
                vector<ll> first_subarray = subarrays[0];
                for (ll i = 0; i < first_subarray.size(); i++) {
                    first_subarray[i] %= m;
                }

                for (ll i = 1; i < subarrays.size() && identical; i++) {
                    for (ll j = 0; j < subarrays[i].size(); j++) {
                        if (subarrays[i][j] % m != first_subarray[j]) {
                            identical = false;
                            break;
                        }
                    }
                }
            }

            // If all subarrays are identical for some m, add 1 to ans
            if (identical) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}