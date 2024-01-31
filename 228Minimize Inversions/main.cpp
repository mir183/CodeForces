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
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>mp[v[i]];
    }
    sort(v.begin(),v.end());

    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    for(auto i:mp)cout<<i.second<<" ";
    cout<<endl;

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