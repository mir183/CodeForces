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
    ll first=-1,last=-1;
    for(ll i=0;i<n;i++) {
        if(a[i] == 1) {
            if(first == -1) {
                first = i;
            }
            last = i;
        }
    }
    ll count=0;
    for(ll i=first;i<=last;i++) {
        if(a[i] == 0) {
            count++;
        }
    }
    cout << count << endl;
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