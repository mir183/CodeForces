#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for(ll i=0;i<n;i++) {
        cin >> a[i].first;
        a[i].second = i+1; // Store the index
    }

    sort(a.rbegin(), a.rend()); // Sort in descending order

    vector<ll> b;
    ll last_index = -1;
    for(auto x: a){
        if(x.second != last_index) {
            b.push_back(x.first + x.second); // Add the value and index
            last_index = x.second;
        }
    }

    for(auto x: b){
        cout << x << " "; // Print the sum
    }
    cout << endl;
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