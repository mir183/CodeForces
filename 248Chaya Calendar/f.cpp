#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    ll ans = v[0];
    for(ll i=1;i<n;i++) {
        // ans = ans & v[i];
        ll cnt=1;
        while(ans>=v[i]*cnt){
            cnt++;
        }
        ans = v[i]*cnt;
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