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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            cin>>v[i];
            sum+=v[i];
        }
        ld root=sqrt(sum);
        if(floor(root)==root) {
            yes;
        } else {
            no;
        }
    }
    return 0;
}
