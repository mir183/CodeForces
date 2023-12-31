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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll product = 1;
        for(ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            product *= x;
        }
        if (product>2023 || 2023%product!=0) {
            no;
        } else {
            yes;
            vector<ll> primes={7,17,17};
            ll rp=2023 / product;
            cout << rp;
            for (ll i = 1; i < k; i++) {
                cout <<" "<<1;
            }
            cout << endl;
        }
    }
    
    return 0;
}