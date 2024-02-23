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
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n+1), b(n+1), c(n+1);
    for(ll i=1;i<=n;i++) {
        cin >> a[i];
        b[i]=b[i-1]+a[i];
        if(a[i]==1){
            c[i]=c[i-1]+2;
        }else{
            c[i]=c[i-1]+1;
        }
    }

    while(q--) {
        ll l,r;
        cin >>l >> r;
        if(l==r){
            no;
            continue;
        }
        if(b[r]-b[l-1]<c[r]-c[l-1]){
            no;
        }else{
            yes;
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