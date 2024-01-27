#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll x,n;
    cin >> x >> n;

    ll ans=1;
    for(ll i=1;i<=x;i++){
        if(x%i==0 and x/i>=n){
            ans=i;
            if(x/i<n){
                break;
            }
        }
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