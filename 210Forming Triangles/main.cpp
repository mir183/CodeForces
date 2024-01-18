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

    for (ll i=0;i<n;i++) {
        cin>>a[i];
        a[i]=pow(a[i],2);
    }

    sort(a.begin(), a.end());

    ll count=0;
    for (ll k=2;k<n;k++) {
        ll i=0,j=k-1;
        while (i<j) {
            if (a[i]+a[j]>a[k]) {
                count += j-i;
                j--;
            } else {
                i++;
            }
        }
    }
    cout << count << "\n";
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