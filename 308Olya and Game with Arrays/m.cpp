#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
        ll m;
        cin>>m;
        ll a=0;
        ll b=LLONG_MAX;
        ll c=LLONG_MAX;
        while(m--){
            ll n;
            cin>>n;
            vector<ll> v(n);
            for(ll i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());
            a+=v[1];
            b=min(v[0],b);
            c=min(c,v[1]);
        }
        cout<<a+b-c<<endl;
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