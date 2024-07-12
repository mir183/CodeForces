#include <iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n);
    iota(v.begin(),v.end(),1);
    reverse(v.begin(),v.end());
    reverse(v.end()-m,v.end());
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}