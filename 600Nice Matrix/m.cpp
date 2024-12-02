#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll t=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll x=a[i][m-j-1];
            ll y=a[n-i-1][j];
            vector<ll> v;
            v.push_back(a[i][j]);
            v.push_back(x);
            v.push_back(y);
            sort(v.begin(),v.end());
            a[i][j]=a[i][m-j-1]=a[n-i-1][j]=v[1];
            t+=v[2]-v[1]+v[1]-v[0];
        }
    }
    cout<<t<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}