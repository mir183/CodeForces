#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // your code here
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n), b(m);
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    for (ll i=0;i<m;i++) {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    for (ll i=0;i<n;i++) {
        ll ps=upper_bound(b.begin(),b.end(),k-a[i])-b.begin();
        ans+=ps;
    }
    // cout<<"ans:";
    cout << ans <<endl;
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