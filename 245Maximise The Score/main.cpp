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
    vector<ll> v(2*n);
    for(ll i=0;i<2*n;i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<ll>());

    ll sum=0;
    for(ll i=1;i<2*n;i+=2) {
        sum +=min(v[i], v[i-1]);
    }
    cout << sum << endl;
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