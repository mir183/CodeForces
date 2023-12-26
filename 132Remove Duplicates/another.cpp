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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    unordered_set<ll> s;
    for(ll i = 0; i < n; i++) s.insert(v[i]);
    cout << s.size() << endl;
    for(ll i=n-1; i>=0; i--) {
        if(s.find(v[i]) != s.end()) {
            cout << v[i] << " ";
            s.erase(v[i]);
        }
    }
    return 0;
}