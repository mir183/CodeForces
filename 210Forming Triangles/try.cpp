#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll f3(ll n) {
    return n*(n-1)*(n-2)/6;
}

ll f2(ll n) {
    return n*(n-1)/2;
}



void solve() {
    // Your code here
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        a[x]++;
        
    }

    ll ans=0;
    ll p=0;
    for(ll i=0;i<=n;i++){
        if(a[i]>=3){
            ans+=f3(a[i]);
        }
        if(a[i]>=2){
            ans+=f2(a[i])*p;
            // p+=a[i];
        }
        p+=a[i];
    }
    cout<<ans<<endl;

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