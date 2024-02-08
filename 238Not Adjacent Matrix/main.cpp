#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


ll n;








void solve() {
    cin >> n;
    ll a[n][n];
    ll k=1;
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<-1<<endl;
    else {
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                a[i][j] = k;
                k++;
            }
        }
        for(ll i=0; i<n-1; i++) {
            for(ll j=0; j<n; j++) {
                if(j%2==1) {
                    swap(a[i][j], a[i+1][j]);
                }
            }
        }
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
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