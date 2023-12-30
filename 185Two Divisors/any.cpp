#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--){
        ll a,b;
        cin >> a>> b;
        ll ans=(a*b)/__gcd(a, b);
        if (ans == b|| ans == a) {
            cout << ans * (b / a) << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
