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
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];

    set<ll,greater<ll>> st;
    for(ll i=0;i<n;i++) {
        st.insert(a[i] + i);
    }

    vector<ll> b(st.begin(), st.end());

    for(auto x: b) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}